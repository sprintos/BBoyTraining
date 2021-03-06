//
//  kConstants.h
//  SOLPM
//
//  Created by Ryan Badilla on 11/13/14.
//  Copyright (c) 2014 Newdesto. All rights reserved.
//

#ifndef SOLPM_kConstants_h
#define SOLPM_kConstants_h

typedef enum MoveType
{
    powermove,
    footwork,
    stretching
} MoveType;


static NSString* const kFootworkNameKey = @"footworkName";
static NSString* const kFootworkCategoryKey = @"footworkCategory";

static NSString* const kUserDefaultsFWCombosKey = @"savedFootworkCombos";

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) // iPhone and       iPod touch style UI

#define IS_IPHONE_5_IOS7 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_IPHONE_6_IOS7 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0f)
#define IS_IPHONE_6P_IOS7 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0f)
#define IS_IPHONE_4_AND_OLDER_IOS7 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height < 568.0f)

#define IS_IPHONE_5_IOS8 (IS_IPHONE && ([[UIScreen mainScreen] nativeBounds].size.height/[[UIScreen mainScreen] nativeScale]) == 568.0f)
#define IS_IPHONE_6_IOS8 (IS_IPHONE && ([[UIScreen mainScreen] nativeBounds].size.height/[[UIScreen mainScreen] nativeScale]) == 667.0f)
#define IS_IPHONE_6P_IOS8 (IS_IPHONE && ([[UIScreen mainScreen] nativeBounds].size.height/[[UIScreen mainScreen] nativeScale]) == 736.0f)
#define IS_IPHONE_4_AND_OLDER_IOS8 (IS_IPHONE && ([[UIScreen mainScreen] nativeBounds].size.height/[[UIScreen mainScreen] nativeScale]) < 568.0f)

#define IS_IPHONE_5 ( ( [ [ UIScreen mainScreen ] respondsToSelector: @selector( nativeBounds ) ] ) ? IS_IPHONE_5_IOS8 : IS_IPHONE_5_IOS7 )
#define IS_IPHONE_6 ( ( [ [ UIScreen mainScreen ] respondsToSelector: @selector( nativeBounds ) ] ) ? IS_IPHONE_6_IOS8 : IS_IPHONE_6_IOS7 )
#define IS_IPHONE_6P ( ( [ [ UIScreen mainScreen ] respondsToSelector: @selector( nativeBounds ) ] ) ? IS_IPHONE_6P_IOS8 : IS_IPHONE_6P_IOS7 )
#define IS_IPHONE_4_AND_OLDER ( ( [ [ UIScreen mainScreen ] respondsToSelector: @selector( nativeBounds ) ] ) ? IS_IPHONE_4_AND_OLDER_IOS8 : IS_IPHONE_4_AND_OLDER_IOS7 )


//

//--------------------------------
//--------------------------------
//
// Move Strings
//
//--------------------------------
//--------------------------------
// Move type strings
#define MOVE_TYPE_POWERMOVES @"Powermoves"
#define MOVE_TYPE_POWERMOVE_COMBOS @"Powermove combos"
#define MOVE_TYPE_FREEZES @"Freezes"
#define MOVE_TYPE_FLIPS @"Flips"
#define MOVE_TYPE_TRICKS @"Tricks"
#define MOVE_TYPE_FOOTWORK @"Footwork"
#define MOVE_TYPE_MISC @"Misc"
#define MOVE_TYPE_TOOLS @"Tools"

// powermove list strings
#define POWERMOVE_WINDMILLS @"Windmills"
#define POWERMOVE_BABYMILLS @"Babymills"
#define POWERMOVE_BELLYMILLS @"Bellymills"
#define POWERMOVE_NUTCRACKER_MILLS @"Nutcracker mills"
#define POWERMOVE_HALOS @"Halos"
#define POWERMOVE_FLARES @"Flares"
#define POWERMOVE_ELBOW_FLARES @"Elbow Flares"
#define POWERMOVE_AIRFLARES @"Airflares"
#define POWERMOVE_HEADSPINS @"Headspins"
#define POWERMOVE_HANDHOPS @"Hand Hops"

// freezes list strings
#define FREEZES_AIRCHAIR @"Airchair"
#define FREEZES_DOUBLE_AIRCHAIR @"Double Airchair"
#define FREEZES_ONE_ARM_HANDSTAND @"One-arm Handstand"
#define FREEZES_HOLLOWBACK @"Hollowback"
#define FREEZES_PLANCHE @"Planche"

// flips list strings
#define FLIPS_AERIAL_CARTWHEEL @"Aerial Cartwheel"
#define FLIPS_WEBSTER @"Webster"
#define FLIPS_RAIZ_FLIP @"Raiz Flip"
#define FLIPS_CORKSCREW @"Corkscrew"
#define FLIPS_GAINERFLIP @"Gainerflip"
#define FLIPS_BTWIST @"Btwist"
#define FLIPS_BACKFLIP @"Backflip"

// powermove combo list string
#define COMBO_WINDMILL_TO_FLARE @"Windmill to Flare"
#define COMBO_FLARE_TO_HEADSPIN @"Flare to Headspin"

// misc list string
#define MISC_STRETCHING @"Stretching"

//footwork
#define FOOTWORK_FOURSTEP @"Fourstep"
#define FOOTWORK_THREESTEP @"Threestep"
#define FOOTWORK_SEVENSTEP @"Sevenstep"

//freezes
#define FREEZES_BABYFREEZE @"Babyfreeze"
#define FREEZES_CHAIRFREEZE @"Chairfreeze"
#define FREEZES_ELBOW_HANDSTAND @"Elbow Handstand"
#define FREEZES_HEADSTAND @"Headstand"
#define FREEZES_AIRBABY @"Airbaby"
#define FREEZES_HANDSTAND @"Handstand"
#define FREEZES_RUMMENIGGE @"Rummenigge"
//--------------------------------
//--------------------------------
//
// Amount of steps
//
//--------------------------------
//--------------------------------
// powermove list
#define POWERMOVE_WINDMILLS_STEPS_TOTAL 16
#define POWERMOVE_BABYMILLS_STEPS_TOTAL 10
#define POWERMOVE_BELLYMILLS_STEPS_TOTAL 13
#define POWERMOVE_NUTCRACKER_STEPS_TOTAL 16
#define POWERMOVE_HALOS_STEPS_TOTAL 16
#define POWERMOVE_FLARES_STEPS_TOTAL 16
#define POWERMOVE_ELBOW_FLARES_STEPS_TOTAL 16
#define POWERMOVE_AIRFLARES_STEPS_TOTAL 16
#define POWERMOVE_HEADSPINS_STEPS_TOTAL 16
#define POWERMOVE_HANDHOPS_STEPS_TOTAL 16

// freezes list strings
#define FREEZES_AIRCHAIR_STEPS_TOTAL 16
#define FREEZES_DOUBLE_AIRCHAIR_STEPS_TOTAL 16
#define FREEZES_ONE_ARM_HANDSTAND_STEPS_TOTAL 16
#define FREEZES_HOLLOWBACK_STEPS_TOTAL 16
#define FREEZES_PLANCHE_STEPS_TOTAL 16

// flips list strings
#define FLIPS_AERIAL_CARTWHEEL_STEPS_TOTAL 16
#define FLIPS_WEBSTER_STEPS_TOTAL 16
#define FLIPS_RAIZ_FLIP_STEPS_TOTAL 16
#define FLIPS_CORKSCREW_STEPS_TOTAL 16
#define FLIPS_GAINERFLIP_STEPS_TOTAL 16
#define FLIPS_BTWIST_STEPS_TOTAL 16
#define FLIPS_BACKFLIP_STEPS_TOTAL 16

// powermove combo list string
#define COMBO_WINDMILL_TO_FLARE_STEPS_TOTAL 16
#define COMBO_FLARE_TO_HEADSPIN_STEPS_TOTAL 16

// misc list string
#define MISC_STRETCHING_STEPS_TOTAL 16


#endif
