/* mc.h -- Simulation of Memory Controller

   Copyright (C) 2001 by Marko Mlinar, markom@opencores.org
   Copyright (C) 2008 Embecosm Limited
   Copyright (C) 2009 Stefan Wallentowitz, stefan.wallentowitz@tum.de

   Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>

   This file is part of Or1ksim, the OpenRISC 1000 Architectural Simulator.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3 of the License, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   You should have received a copy of the GNU General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* This program is commented throughout in a fashion suitable for processing
   with Doxygen. */


#ifndef MC__H
#define MC__H

/* Package includes */
#include "abstract.h"


/* Prototypes for external use */
extern void  mc_done (or1ksim *sim);
extern void  reg_mc_sec (or1ksim *sim);
extern void  mc_reg_mem_area (or1ksim *sim, struct dev_memarea *mem,
			      unsigned int        cs,
			      int                 mc);

#endif /* MC__H */
