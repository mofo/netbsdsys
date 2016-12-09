/*	$NetBSD: divufr.c,v 1.5 2012/02/04 17:03:09 skrll Exp $	*/

/*	$OpenBSD: divufr.c,v 1.5 2001/03/29 03:58:18 mickey Exp $	*/

/*
 * Copyright 1996 1995 by Open Software Foundation, Inc.
 *              All Rights Reserved
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appears in all copies and
 * that both the copyright notice and this permission notice appear in
 * supporting documentation.
 *
 * OSF DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT SHALL OSF BE LIABLE FOR ANY SPECIAL, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN ACTION OF CONTRACT,
 * NEGLIGENCE, OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */
/*
 * pmk1.1
 */
/*
 * (c) Copyright 1986 HEWLETT-PACKARD COMPANY
 *
 * To anyone who acknowledges that this file is provided "AS IS"
 * without any express or implied warranty:
 *     permission to use, copy, modify, and distribute this file
 * for any purpose is hereby granted without fee, provided that
 * the above copyright notice and this notice appears in all
 * copies, and that the name of Hewlett-Packard Company not be
 * used in advertising or publicity pertaining to distribution
 * of the software without specific, written prior permission.
 * Hewlett-Packard Company makes no representations about the
 * suitability of this software for any purpose.
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: divufr.c,v 1.5 2012/02/04 17:03:09 skrll Exp $");

#include "md.h"

void
divufr(unsigned int opnd1, unsigned int opnd2, struct mdsfu_register *result)
{
	/* check divisor for zero */
	if (opnd2 == 0) {
		overflow = true;
		return;
	}

	/* check for overflow */
	if (opnd1 >= opnd2) {
		overflow = true;
		return;
	}
	overflow = false;

	/* do the divide */
	divu(opnd1,0,opnd2,result);
	return;
}
