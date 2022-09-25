//https://github.com/Casperento/cxp-scripts-sources/tree/main/AdvancedGather
CXP ADVANCED GATHER MANUAL
Open the downloaded package and follow instructions below.

Copy the advGather\ folder into your missionName.Map\cxp\ folder.

Open the following files and add the corresponding lines to each one:

On cxp\cxp_cfgs.cpp file add:
#include "advGather\config.cpp"
On cxp\cxp_dialogs.cpp file add:
#include "advGather\dialogs.cpp"
On cxp\cxp_functions.cpp file add:
#include "advGather\functions.cpp"
On cxp\cxp_notifications.cpp file add:
#include "advGather\notifications.cpp"
Open the provided stringtable.xml file and copy all it's content, and paste it inside your missionName.Map\stringtable.xml file, as follows:

Example (line 4):


Open your missionName.Map\config\Config_Master.hpp file, scroll down to the end of the file, and comment the following line:


Open your missionName.Map\core\functions\fn_actionKeyHandler.sqf file, and comment the following lines:


Copy the following code and paste it below the latest commented lines, like:

if !(playerSide isEqualTo civilian) exitWith {};
['init'] spawn cxpadg_fnc_advGatherMenu;

Now you can configure the system as you wish.