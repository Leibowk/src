/*	$NetBSD: pte.h,v 1.4 2020/03/14 04:55:14 maxv Exp $	*/

/*
 * Copyright (c) 2010 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christoph Egger.
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
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _X86_PTE_H
#define _X86_PTE_H

/* Cacheability bits when we are using PAT */
#define PGC_WB		0			/* The default */
#define PGC_WC		PTE_PWT			/* WT and CD is WC */
#define PGC_UCMINUS	PTE_PCD			/* UC but mtrr can override */
#define PGC_UC		(PTE_PWT | PTE_PCD)	/* hard UC */

/*
 * #PF exception bits
 */
#define PGEX_P		0x0001	/* the page was present */
#define PGEX_W		0x0002	/* exception during a write cycle */
#define PGEX_U		0x0004	/* exception while in user mode */
#define PGEX_RSVD	0x0008	/* a reserved bit was set in the page tables */
#define PGEX_X		0x0010	/* exception during instruction fetch */
#define PGEX_PK		0x0020	/* access disallowed by protection key */
#define PGEX_SGX	0x8000	/* violation of sgx-specific access rights */

#endif /* _X86_PTE_H */
