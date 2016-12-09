/* $NetBSD: awin_dma.h,v 1.1.2.2 2014/11/09 14:42:33 martin Exp $ */

/*-
 * Copyright (c) 2014 Jared D. McNeill <jmcneill@invisible.ca>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _ARM_ALLWINNER_AWIN_DMA_H
#define _ARM_ALLWINNER_AWIN_DMA_H

#include "opt_ddb.h"
#include "opt_allwinner.h"

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: awin_dma.h,v 1.1.2.2 2014/11/09 14:42:33 martin Exp $");

#include <sys/param.h>
#include <sys/bus.h>
#include <sys/device.h>
#include <sys/intr.h>
#include <sys/systm.h>
#include <sys/mutex.h>

#include <arm/allwinner/awin_reg.h>
#include <arm/allwinner/awin_var.h>

struct awin_dma_softc;

struct awin_dma_controller {
	void *(*dma_alloc)(struct awin_dma_softc *, const char *,
			   void (*)(void *), void *);
	void (*dma_free)(void *);
	uint32_t (*dma_get_config)(void *);
	void (*dma_set_config)(void *, uint32_t);
	int (*dma_transfer)(void *, paddr_t, paddr_t, size_t);
	void (*dma_halt)(void *);
};

struct awin_dma_softc {
	device_t sc_dev;
	bus_space_tag_t sc_bst;
	bus_space_handle_t sc_bsh;
	bus_dma_tag_t sc_dmat;
	const struct awin_dma_controller *sc_dc;
	void *sc_ih;
};

#if defined(ALLWINNER_A10) || defined(ALLWINNER_A20)
void awin_dma_a10_attach(struct awin_dma_softc *, struct awinio_attach_args *,
			 const struct awin_locators * const);
#if defined(DDB)
void awin_dma_a10_dump_regs(struct awin_dma_softc *);
#endif

#endif
#if defined(ALLWINNER_A31)
void awin_dma_a31_attach(struct awin_dma_softc *, struct awinio_attach_args *,
			 const struct awin_locators * const);
#if defined(DDB)
void awin_dma_a31_dump_regs(struct awin_dma_softc *);
#endif
#endif

#endif /* !_ARM_ALLWINNER_AWIN_DMA_H */
