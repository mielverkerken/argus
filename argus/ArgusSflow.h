/*
 * Gargoyle Software.  Argus files - Sflow processing includes
 * Copyright (c) 2000-2015 QoSient, LLC
 * All rights reserved.
 *
 * THE ACCOMPANYING PROGRAM IS PROPRIETARY SOFTWARE OF QoSIENT, LLC,
 * AND CANNOT BE USED, DISTRIBUTED, COPIED OR MODIFIED WITHOUT
 * EXPRESS PERMISSION OF QoSIENT, LLC.
 *
 * QOSIENT, LLC DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS, IN NO EVENT SHALL QOSIENT, LLC BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 *
 * Written by Carter Bullard
 * QoSient, LLC
 *
 */

/* 
 * $Id: //depot/gargoyle/argus/argus/ArgusSflow.h#4 $
 * $DateTime: 2015/04/13 00:39:28 $
 * $Change: 2980 $
 */


#ifndef ArgusSflow_h
#define ArgusSflow_h

#include <ArgusModeler.h>

void ArgusParseSflowRecord (struct ArgusModelerStruct *, void *);

#else
extern void ArgusParseSflowRecord (struct ArgusModelerStruct *, void *);
#endif
