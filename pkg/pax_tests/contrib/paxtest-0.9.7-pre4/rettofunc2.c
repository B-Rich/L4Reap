/* rettofunc2.c - Tests wether return to function exploits using memcpy() work
 *
 * Copyright (c)2003 by Peter Busser <peter@adamantix.org>
 * This file has been released under the GNU Public Licence version 2 or later
 */

#include <stdio.h>
#include <string.h>
#include "body.h"

const char testname[] = "Return to function (memcpy)              ";

fptr overflow[32] = {
	itworked, itworked, itworked, itworked, itworked, itworked, itworked, itworked,
	itworked, itworked, itworked, itworked, itworked, itworked, itworked, itworked,
	itworked, itworked, itworked, itworked, itworked, itworked, itworked, itworked,
	itworked, itworked, itworked, itworked, itworked, itworked, itworked, itworked
};

void doit( void )
{
	volatile char buf[4];

	memcpy( buf, overflow, sizeof( overflow ) );
}
