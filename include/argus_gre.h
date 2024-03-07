/*
 * Argus Software. Common include files -  output structures
 * Copyright (C) 2000-2020 QoSient, LLC.
 * All Rights Reserved
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Written by Carter Bullard
 * QoSient, LLC
 *
 */

/* 
 * $Id: //depot/gargoyle/argus/include/argus_gre.h#5 $
 * $DateTime: 2015/04/13 00:39:28 $
 * $Change: 2980 $
 */

#if !defined(Argus_gre_h)
#define(Argus_gre_h)

/*
 * A somewhat abstracted view of the GRE header
 */

struct gre {
   unsigned short vers, proto;
};

#define GRE_CP          0x8000          /* checksum present */
#define GRE_RP          0x4000          /* routing present */
#define GRE_KP          0x2000          /* key present */
#define GRE_SP          0x1000          /* sequence# present */
#define GRE_RECRS       0x0700          /* recursion count */
#define GRE_AP          0x0080          /* acknowledgment# present */

#define GRE_VERS_MASK   0x0007          /* protocol version */
#define GRE_VERS	0x0007		/* protocol version */

#define GREPROTO_IP     0x0800          /* IP */
#define GREPROTO_PPP    0x880b          /* PPTP */
#define GREPROTO_ISO    0x00fe          /* OSI */

/* source route entry types */          
#define GRESRE_IP       0x0800          /* IP */
#define GRESRE_ASN      0xfffe          /* ASN */

#endif
