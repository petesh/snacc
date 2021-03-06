/*
 * compiler/back_ends/c++_gen/gen_code.h
 *
 * Copyright (C) 1991, 1992 Michael Sample
 *           and the University of British Columbia
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * $Header: /usr/app/odstb/CVS/snacc/compiler/back-ends/c++-gen/gen-code.h,v 1.6 1997/02/16 15:14:10 rj Exp $
 * $Log: gen-code.h,v $
 * Revision 1.6  1997/02/16 15:14:10  rj
 * made return *this after calling abort()'' a compile time option.
 *
 * Revision 1.5  1995/09/07  19:18:25  rj
 * boolean genMeta changed to enum type MetaNameStyle
 *
 * Revision 1.4  1995/08/17  15:00:08  rj
 * the PDU flag belongs to the metacode, not only to the tcl interface. (type and variable named adjusted)
 *
 * Revision 1.3  1995/07/27  10:53:03  rj
 * file name has been shortened for redundant part: c++-gen/gen-c++-code -> c++-gen/gen-code.
 *
 * changed `_' to `-' in file names.
 *
 * Revision 1.2  1994/10/08  03:47:55  rj
 * since i was still irritated by cpp standing for c++ and not the C preprocessor, i renamed them to cxx (which is one known suffix for C++ source files). since the standard #define is __cplusplus, cplusplus would have been the more obvious choice, but it is a little too long.
 *
 * Revision 1.1  1994/08/28  09:48:04  rj
 * first check-in. for a list of changes to the snacc-1.1 distribution please refer to the ChangeLog.
 *
 */

void PrintCxxCode PROTO ((FILE *src, FILE *hdr, if_IBM_ENC (FILE *dbsrc COMMA FILE *dbhdr COMMA) if_META (MetaNameStyle genMeta COMMA const Meta *meta COMMA MetaPDU *metapdus COMMA) ModuleList *mods, Module *m, CxxRules *r, long int longJmpVal, int printTypes, int printValues, int printEncoders, int printDecoders, int printPrinters, int printFree, if_TCL (int printTcl COMMA) int novolatilefuncs));
