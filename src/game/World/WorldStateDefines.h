/*
* This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef WORLD_STATE_DEFINES_H
#define WORLD_STATE_DEFINES_H
#include "Platform/Define.h"

// corresponds to clientside data indices
enum WorldStateID : int32
{
    // Love is in the Air
    WORLD_STATE_LOVE_IS_IN_THE_AIR_THRALL           = 2200,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_CAIRNE           = 2201,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_SYLVANAS         = 2202,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TOTAL_HORDE      = 2207,

    WORLD_STATE_LOVE_IS_IN_THE_AIR_BOLVAR           = 2203,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_MAGNI            = 2204,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TYRANDE          = 2205,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TOTAL_ALLIANCE   = 2206,

    // Eastern Plaguelands Outdoor PVP
    WORLD_STATE_EP_TOWER_COUNT_ALLIANCE = 2327,
    WORLD_STATE_EP_TOWER_COUNT_HORDE = 2328,

    //WORLD_STATE_EP_PLAGUEWOOD_CONTEST_ALLIANCE    = 2366,
    //WORLD_STATE_EP_PLAGUEWOOD_CONTEST_HORDE       = 2367,
    //WORLD_STATE_EP_PLAGUEWOOD_PROGRESS_ALLIANCE   = 2368,
    //WORLD_STATE_EP_PLAGUEWOOD_PROGRESS_HORDE      = 2369,
    WORLD_STATE_EP_PLAGUEWOOD_ALLIANCE = 2370,
    WORLD_STATE_EP_PLAGUEWOOD_HORDE = 2371,
    WORLD_STATE_EP_PLAGUEWOOD_NEUTRAL = 2353,

    //WORLD_STATE_EP_NORTHPASS_CONTEST_ALLIANCE     = 2362,
    //WORLD_STATE_EP_NORTHPASS_CONTEST_HORDE        = 2363,
    //WORLD_STATE_EP_NORTHPASS_PROGRESS_ALLIANCE    = 2364,
    //WORLD_STATE_EP_NORTHPASS_PROGRESS_HORDE       = 2365,
    WORLD_STATE_EP_NORTHPASS_ALLIANCE = 2372,
    WORLD_STATE_EP_NORTHPASS_HORDE = 2373,
    WORLD_STATE_EP_NORTHPASS_NEUTRAL = 2352,

    //WORLD_STATE_EP_EASTWALL_CONTEST_ALLIANCE      = 2359,
    //WORLD_STATE_EP_EASTWALL_CONTEST_HORDE         = 2360,
    //WORLD_STATE_EP_EASTWALL_PROGRESS_ALLIANCE     = 2357,
    //WORLD_STATE_EP_EASTWALL_PROGRESS_HORDE        = 2358,
    WORLD_STATE_EP_EASTWALL_ALLIANCE = 2354,
    WORLD_STATE_EP_EASTWALL_HORDE = 2356,
    WORLD_STATE_EP_EASTWALL_NEUTRAL = 2361,

    //WORLD_STATE_EP_CROWNGUARD_CONTEST_ALLIANCE    = 2374,
    //WORLD_STATE_EP_CROWNGUARD_CONTEST_HORDE       = 2375,
    //WORLD_STATE_EP_CROWNGUARD_PROGRESS_ALLIANCE   = 2376,
    //WORLD_STATE_EP_CROWNGUARD_PROGRESS_HORDE      = 2377,
    WORLD_STATE_EP_CROWNGUARD_ALLIANCE = 2378,
    WORLD_STATE_EP_CROWNGUARD_HORDE = 2379,
    WORLD_STATE_EP_CROWNGUARD_NEUTRAL = 2355,

    // AQ War Effort
    WORLD_STATE_AQ_DAYS_LEFT = 2113,

    WORLD_STATE_AQ_COPPER_BARS_ALLY_NOW = 1997,
    WORLD_STATE_AQ_COPPER_BARS_TOTAL = 1998,
    WORLD_STATE_AQ_COPPER_BARS_HORDE_NOW = 2018,
    WORLD_STATE_AQ_PURPLE_LOTUS_ALLY_NOW = 2053,
    WORLD_STATE_AQ_PURPLE_LOTUS_TOTAL = 2055,
    WORLD_STATE_AQ_PURPLE_LOTUS_HORDE_NOW = 2054,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_ALLY_NOW = 2088,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_TOTAL = 2090,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_HORDE_NOW = 2089,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_ALLY_NOW = 2101,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_TOTAL = 2103,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_HORDE_NOW = 2102,
    WORLD_STATE_AQ_THICK_LEATHER_ALLY_NOW = 2069,
    WORLD_STATE_AQ_THICK_LEATHER_TOTAL = 2071,
    WORLD_STATE_AQ_THICK_LEATHER_HORDE_NOW = 2070,
    WORLD_STATE_AQ_TIN_BARS_NOW = 2005,
    WORLD_STATE_AQ_TIN_BARS_TOTAL = 2006,
    WORLD_STATE_AQ_MITHRIL_BARS_NOW = 2008,
    WORLD_STATE_AQ_MITHRIL_BARS_TOTAL = 2009,
    WORLD_STATE_AQ_IRON_BARS_NOW = 2002,
    WORLD_STATE_AQ_IRON_BARS_TOTAL = 2003,
    WORLD_STATE_AQ_THORIUM_BARS_NOW = 2011,
    WORLD_STATE_AQ_THORIUM_BARS_TOTAL = 2012,
    WORLD_STATE_AQ_STRANGLEKELP_NOW = 2047,
    WORLD_STATE_AQ_STRANGLEKELP_TOTAL = 2048,
    WORLD_STATE_AQ_MEDIUM_LEATHER_NOW = 2063,
    WORLD_STATE_AQ_MEDIUM_LEATHER_TOTAL = 2064,
    WORLD_STATE_AQ_RAINBOW_FIN_ALBACORE_NOW = 2092,
    WORLD_STATE_AQ_RAINBOW_FIN_ALBACORE_TOTAL = 2093,
    WORLD_STATE_AQ_FIREBLOOM_NOW = 2050,
    WORLD_STATE_AQ_FIREBLOOM_TOTAL = 2051,
    WORLD_STATE_AQ_RUGGED_LEATHER_NOW = 2073,
    WORLD_STATE_AQ_RUGGED_LEATHER_TOTAL = 2074,
    WORLD_STATE_AQ_WOOL_BANDAGE_NOW = 2079,
    WORLD_STATE_AQ_WOOL_BANDAGE_TOTAL = 2080,
    WORLD_STATE_AQ_BAKED_SALMON_NOW = 2105,
    WORLD_STATE_AQ_BAKED_SALMON_TOTAL = 2106,
    WORLD_STATE_AQ_HEAVY_LEATHER_NOW = 2066,
    WORLD_STATE_AQ_HEAVY_LEATHER_TOTAL = 2067,
    WORLD_STATE_AQ_LEAN_WOLF_STEAK_NOW = 2095,
    WORLD_STATE_AQ_LEAN_WOLF_STEAK_TOTAL = 2096,
    WORLD_STATE_AQ_ARTHAS_TEARS_NOW = 2057,
    WORLD_STATE_AQ_ARTHAS_TEARS_TOTAL = 2058,
    WORLD_STATE_AQ_SILK_BANDAGE_NOW = 2082,
    WORLD_STATE_AQ_SILK_BANDAGE_TOTAL = 2083,
    WORLD_STATE_AQ_LINEN_BANDAGE_NOW = 2076,
    WORLD_STATE_AQ_LINEN_BANDAGE_TOTAL = 2077,
    WORLD_STATE_AQ_ROAST_RAPTOR_NOW = 2098,
    WORLD_STATE_AQ_ROAST_RAPTOR_TOTAL = 2099,
    WORLD_STATE_AQ_LIGHT_LEATHER_NOW = 2060,
    WORLD_STATE_AQ_LIGHT_LEATHER_TOTAL = 2061,
    WORLD_STATE_AQ_MAGEWEAVE_BANDAGE_NOW = 2085,
    WORLD_STATE_AQ_MAGEWEAVE_BANDAGE_TOTAL = 2086,
    WORLD_STATE_AQ_PEACEBLOOM_NOW = 2020,
    WORLD_STATE_AQ_PEACEBLOOM_TOTAL = 2021,

    // unused
    WORLD_STATE_AQ_SINGED_CORESTONE_ALLY_NOW = 2108,
    WORLD_STATE_AQ_SINGED_CORESTONE_TOTAL = 2110,
    WORLD_STATE_AQ_SINGED_CORESTONE_HORDE_NOW = 2109,

    // Scourge Invasion - TODO
    WORLD_STATE_SCOURGE_BATTLES_WON                     = 2219,
    WORLD_STATE_SCOURGE_NECROPOLIS_AZSHARA              = 2279,
    WORLD_STATE_SCOURGE_NECROPOLIS_BLASTED_LANDS        = 2280,
    WORLD_STATE_SCOURGE_NECROPOLIS_BURNING_STEPPES      = 2281,
    WORLD_STATE_SCOURGE_NECROPOLIS_EASTERN_PLAGUELANDS  = 2282,
    WORLD_STATE_SCOURGE_NECROPOLIS_TANARIS              = 2283,
    WORLD_STATE_SCOURGE_NECROPOLIS_WINTERSPRING         = 2284,

    // Silithus Outdoor PVP
    // world states
    WORLD_STATE_SI_GATHERED_A = 2313,
    WORLD_STATE_SI_GATHERED_H = 2314,
    WORLD_STATE_SI_SILITHYST_MAX = 2317,
};

#endif