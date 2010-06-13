/*
 * (c) 2008-2009 Technische Universität Dresden
 * This file is part of TUD:OS and distributed under the terms of the
 * GNU General Public License 2.
 * Please see the COPYING-GPL-2 file for details.
 */
#include "page_alloc.h"

Page_alloc_base::Alloc Page_alloc_base::_alloc;
unsigned long Page_alloc_base::_total;

static char page_alloc_scratch_mem[L4_PAGESIZE] __attribute__((aligned(4096)));

void Page_alloc_base::init()
{ free(page_alloc_scratch_mem); }