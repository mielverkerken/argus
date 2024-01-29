/*
 * Argus Software.  Argus files - Layer 2 processing
 * Copyright (c) 2000-2020 QoSient, LLC
 * All rights reserved.
 *
 * This program is free software, released under the GNU General
 * Public License; you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software
 * Foundation; either version 3, or any later version.
 *
 * Other licenses are available through QoSient, LLC.
 * Inquire at info@qosient.com.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the
 * implied warranty of * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Written by Carter Bullard
 * QoSient, LLC
 *
 * Written by Carter Bullard
 * QoSient, LLC
 *
 */


#ifdef HAVE_CONFIG_H
#include "argus_config.h"
#endif

#if !defined(ArgusMac)
#define ArgusMac
#endif

#include <argus_compat.h>
#include <ArgusModeler.h>
#include <ArgusOutput.h>
#include <ArgusSource.h>
#include <ArgusUtil.h>

#include <argus_out.h>

void
ArgusMacFlowRecord (struct ArgusFlowStruct *flowstr, struct ArgusRecord *argus, unsigned char state)
{
   int length = 0;
   struct ArgusMacStruct *mac = (struct ArgusMacStruct *) flowstr->MacDSRBuffer;
      
   if (mac && ((length = argus->ahdr.length) > 0)) {
      bcopy ((char *)mac, &((char *)argus)[argus->ahdr.length], sizeof(*mac));
      argus->ahdr.length += sizeof(*mac);
   }
}
