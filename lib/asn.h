/*
 * AS number structure
 * Copyright 2022 6WIND
 *
 * This file is part of GNU Zebra.
 *
 * GNU Zebra is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2, or (at your
 * option) any later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _FRR_ASN_H
#define _FRR_ASN_H

#include "zebra.h"
#include "command_match.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ASN_STRING_MAX_SIZE	12

typedef uint32_t as_t;

extern bool asn_str2asn(const char *asstring, as_t *asn);
extern const char *asn_asn2asplain(as_t asn);
extern const char *asn_str2asn_parse(const char *asstring, as_t *asn,
				     bool *found_ptr);
extern enum match_type asn_str2asn_match(const char *str);
/* for test */
extern void asn_relax_as_zero(bool relax);

#ifdef __cplusplus
}
#endif

#endif /* _FRR_ASN_H */
