// https://github.com/Casperento/cxp-scripts-sources/tree/main/SafeZones

CXP SAFEZONES MANUAL
Open the downloaded package and follow instructions below.

Copy the safeZones\ folder into your missionName.Map\cxp\ folder.

Open the following files and add the corresponding lines to each one:

On cxp\cxp_cfgs.cpp file add:
#include "safeZones\config.cpp"
On cxp\cxp_functions.cpp file add:
#include "safeZones\functions.cpp
To use the can_lockpick option you need to make some changes in your mission:

On missionName.Map\core\configuration.sqf add:
life_canLockPick = true;
Example (line 46):


On missionName.Map\core\items\fn_lockpick.sqf add:
if !(life_canLockpick) exitWith {};
Example (line 9):

