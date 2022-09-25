//https://github.com/Casperento/cxp-scripts-sources/tree/main/MapFilter



Open the downloaded package and follow instructions below.

Copy the mapFilter\ folder into your missionName.Map\cxp\ folder.

Open the following files and add the corresponding lines to each one:

On cxp\cxp_cfgs.cpp file add:
#include "mapFilter\config.cpp"
On cxp\cxp_dialogs.cpp file add:
#include "mapFilter\dialogs.cpp"
On cxp\cxp_functions.cpp file add:
#include "mapFilter\functions.cpp"
On cxp\cxp_notifications.cpp file add:
#include "mapFilter\notifications.cpp"
Open the provided stringtable.xml file and copy all it's content, and paste it inside your missionName.Map\stringtable.xml file, as follows:

Example (line 4):

