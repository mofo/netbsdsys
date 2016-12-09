/*	$NetBSD: rf_invertq.h,v 1.3 1999/02/05 00:06:12 oster Exp $	*/
/*
 * rf_invertq.h
 */
/*
 * This is normally a generated file.  Not so for NetBSD.
 */

#ifndef _RF__RF_INVERTQ_H_
#define _RF__RF_INVERTQ_H_

/*
 * rf_geniq.c must include rf_archs.h before including
 * this file (to get VPATH magic right with the way we
 * generate this file in kernel trees)
 */
/* #include "rf_archs.h" */

#if (RF_INCLUDE_PQ > 0) || (RF_INCLUDE_RAID6 > 0)

#define RF_Q_COLS 32
RF_ua32_t rf_rn = {
1, 2, 4, 8, 16, 5, 10, 20, 13, 26, 17, 7, 14, 28, 29, 31, 27, 19, 3, 6, 12, 24, 21, 15, 30, 25, 23, 11, 22, 9, 18, 1,};
RF_ua32_t rf_qfor[32] = {
	 /* i = 0 */ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,},
	 /* i = 1 */ {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 5, 7, 1, 3, 13, 15, 9, 11, 21, 23, 17, 19, 29, 31, 25, 27,},
	 /* i = 2 */ {0, 4, 8, 12, 16, 20, 24, 28, 5, 1, 13, 9, 21, 17, 29, 25, 10, 14, 2, 6, 26, 30, 18, 22, 15, 11, 7, 3, 31, 27, 23, 19,},
	 /* i = 3 */ {0, 8, 16, 24, 5, 13, 21, 29, 10, 2, 26, 18, 15, 7, 31, 23, 20, 28, 4, 12, 17, 25, 1, 9, 30, 22, 14, 6, 27, 19, 11, 3,},
	 /* i = 4 */ {0, 16, 5, 21, 10, 26, 15, 31, 20, 4, 17, 1, 30, 14, 27, 11, 13, 29, 8, 24, 7, 23, 2, 18, 25, 9, 28, 12, 19, 3, 22, 6,},
	 /* i = 5 */ {0, 5, 10, 15, 20, 17, 30, 27, 13, 8, 7, 2, 25, 28, 19, 22, 26, 31, 16, 21, 14, 11, 4, 1, 23, 18, 29, 24, 3, 6, 9, 12,},
	 /* i = 6 */ {0, 10, 20, 30, 13, 7, 25, 19, 26, 16, 14, 4, 23, 29, 3, 9, 17, 27, 5, 15, 28, 22, 8, 2, 11, 1, 31, 21, 6, 12, 18, 24,},
	 /* i = 7 */ {0, 20, 13, 25, 26, 14, 23, 3, 17, 5, 28, 8, 11, 31, 6, 18, 7, 19, 10, 30, 29, 9, 16, 4, 22, 2, 27, 15, 12, 24, 1, 21,},
	 /* i = 8 */ {0, 13, 26, 23, 17, 28, 11, 6, 7, 10, 29, 16, 22, 27, 12, 1, 14, 3, 20, 25, 31, 18, 5, 8, 9, 4, 19, 30, 24, 21, 2, 15,},
	 /* i = 9 */ {0, 26, 17, 11, 7, 29, 22, 12, 14, 20, 31, 5, 9, 19, 24, 2, 28, 6, 13, 23, 27, 1, 10, 16, 18, 8, 3, 25, 21, 15, 4, 30,},
	 /* i = 10 */ {0, 17, 7, 22, 14, 31, 9, 24, 28, 13, 27, 10, 18, 3, 21, 4, 29, 12, 26, 11, 19, 2, 20, 5, 1, 16, 6, 23, 15, 30, 8, 25,},
	 /* i = 11 */ {0, 7, 14, 9, 28, 27, 18, 21, 29, 26, 19, 20, 1, 6, 15, 8, 31, 24, 17, 22, 3, 4, 13, 10, 2, 5, 12, 11, 30, 25, 16, 23,},
	 /* i = 12 */ {0, 14, 28, 18, 29, 19, 1, 15, 31, 17, 3, 13, 2, 12, 30, 16, 27, 21, 7, 9, 6, 8, 26, 20, 4, 10, 24, 22, 25, 23, 5, 11,},
	 /* i = 13 */ {0, 28, 29, 1, 31, 3, 2, 30, 27, 7, 6, 26, 4, 24, 25, 5, 19, 15, 14, 18, 12, 16, 17, 13, 8, 20, 21, 9, 23, 11, 10, 22,},
	 /* i = 14 */ {0, 29, 31, 2, 27, 6, 4, 25, 19, 14, 12, 17, 8, 21, 23, 10, 3, 30, 28, 1, 24, 5, 7, 26, 16, 13, 15, 18, 11, 22, 20, 9,},
	 /* i = 15 */ {0, 31, 27, 4, 19, 12, 8, 23, 3, 28, 24, 7, 16, 15, 11, 20, 6, 25, 29, 2, 21, 10, 14, 17, 5, 26, 30, 1, 22, 9, 13, 18,},
	 /* i = 16 */ {0, 27, 19, 8, 3, 24, 16, 11, 6, 29, 21, 14, 5, 30, 22, 13, 12, 23, 31, 4, 15, 20, 28, 7, 10, 17, 25, 2, 9, 18, 26, 1,},
	 /* i = 17 */ {0, 19, 3, 16, 6, 21, 5, 22, 12, 31, 15, 28, 10, 25, 9, 26, 24, 11, 27, 8, 30, 13, 29, 14, 20, 7, 23, 4, 18, 1, 17, 2,},
	 /* i = 18 */ {0, 3, 6, 5, 12, 15, 10, 9, 24, 27, 30, 29, 20, 23, 18, 17, 21, 22, 19, 16, 25, 26, 31, 28, 13, 14, 11, 8, 1, 2, 7, 4,},
	 /* i = 19 */ {0, 6, 12, 10, 24, 30, 20, 18, 21, 19, 25, 31, 13, 11, 1, 7, 15, 9, 3, 5, 23, 17, 27, 29, 26, 28, 22, 16, 2, 4, 14, 8,},
	 /* i = 20 */ {0, 12, 24, 20, 21, 25, 13, 1, 15, 3, 23, 27, 26, 22, 2, 14, 30, 18, 6, 10, 11, 7, 19, 31, 17, 29, 9, 5, 4, 8, 28, 16,},
	 /* i = 21 */ {0, 24, 21, 13, 15, 23, 26, 2, 30, 6, 11, 19, 17, 9, 4, 28, 25, 1, 12, 20, 22, 14, 3, 27, 7, 31, 18, 10, 8, 16, 29, 5,},
	 /* i = 22 */ {0, 21, 15, 26, 30, 11, 17, 4, 25, 12, 22, 3, 7, 18, 8, 29, 23, 2, 24, 13, 9, 28, 6, 19, 14, 27, 1, 20, 16, 5, 31, 10,},
	 /* i = 23 */ {0, 15, 30, 17, 25, 22, 7, 8, 23, 24, 9, 6, 14, 1, 16, 31, 11, 4, 21, 26, 18, 29, 12, 3, 28, 19, 2, 13, 5, 10, 27, 20,},
	 /* i = 24 */ {0, 30, 25, 7, 23, 9, 14, 16, 11, 21, 18, 12, 28, 2, 5, 27, 22, 8, 15, 17, 1, 31, 24, 6, 29, 3, 4, 26, 10, 20, 19, 13,},
	 /* i = 25 */ {0, 25, 23, 14, 11, 18, 28, 5, 22, 15, 1, 24, 29, 4, 10, 19, 9, 16, 30, 7, 2, 27, 21, 12, 31, 6, 8, 17, 20, 13, 3, 26,},
	 /* i = 26 */ {0, 23, 11, 28, 22, 1, 29, 10, 9, 30, 2, 21, 31, 8, 20, 3, 18, 5, 25, 14, 4, 19, 15, 24, 27, 12, 16, 7, 13, 26, 6, 17,},
	 /* i = 27 */ {0, 11, 22, 29, 9, 2, 31, 20, 18, 25, 4, 15, 27, 16, 13, 6, 1, 10, 23, 28, 8, 3, 30, 21, 19, 24, 5, 14, 26, 17, 12, 7,},
	 /* i = 28 */ {0, 22, 9, 31, 18, 4, 27, 13, 1, 23, 8, 30, 19, 5, 26, 12, 2, 20, 11, 29, 16, 6, 25, 15, 3, 21, 10, 28, 17, 7, 24, 14,},
	 /* i = 29 */ {0, 9, 18, 27, 1, 8, 19, 26, 2, 11, 16, 25, 3, 10, 17, 24, 4, 13, 22, 31, 5, 12, 23, 30, 6, 15, 20, 29, 7, 14, 21, 28,},
	 /* i = 30 */ {0, 18, 1, 19, 2, 16, 3, 17, 4, 22, 5, 23, 6, 20, 7, 21, 8, 26, 9, 27, 10, 24, 11, 25, 12, 30, 13, 31, 14, 28, 15, 29,},
	 /* i = 31 */ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,},
};
#define RF_Q_DATA_COL(col_num) rf_rn[col_num],rf_qfor[28-(col_num)]
RF_ua1024_t rf_qinv[1];		/* don't compile monster table into kernel */

#endif				/* (RF_INCLUDE_PQ > 0) || (RF_INCLUDE_RAID6 >
				 * 0) */
#endif				/* !_RF__RF_INVERTQ_H_ */
