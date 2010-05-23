/*
 * Copyright (C) 2000-2003 Chris Ross and various contributors
 * Copyright (C) 1999-2000 Chris Ross
 * Copyright (C) 2004 Christian M. Stamgren
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies of the Software, its documentation and marketing & publicity
 * materials, and acknowledgment shall be given in the documentation, materials
 * and software packages that this Software was used.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __XPATH_HANDLERS_H__
#define __XPATH_HANDLERS_H__

#include "ferite.h"

#include <libxml/xpath.h>
#include <libxml/tree.h>
#include <libxml/parser.h>
#include <libxml/debugXML.h>
#include <libxml/xmlmemory.h>
#include <libxml/parserInternals.h>
#include <libxml/xpathInternals.h>
#include <libxml/xmlerror.h>
#include <libxml/globals.h>

FeriteVariable *ParseXPath( FeriteScript *script, XMLDoc *tree, const char *str);

#endif /* __XPATH_HANDLERS_H__ */