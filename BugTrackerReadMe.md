// https://github.com/Casperento/cxp-scripts-sources/tree/main/Bugtracker
Open the downloaded package and follow instructions below.

Copy the client\bugTracker\ folder into your missionName.Map\cxp\ folder.

Open the following files and add the corresponding lines to each one:

On cxp\cxp_cfgs.cpp file add:
#include "bugTracker\config.cpp"
On cxp\cxp_dialogs.cpp file add:
#include "bugTracker\dialogs.cpp"
On cxp\cxp_functions.cpp file add:
#include "bugTracker\functions.cpp"
On cxp\cxp_remoteExecs.cpp file add:
#include "bugTracker\remoteExec.cpp"
Open the provided stringtable.xml file and copy all it's content, and paste it inside your missionName.Map\stringtable.xml file, as follows:

Example (line 4):


Open your SQL client and then copy the content of bugTracker.sql file to create the persistence dependencies on your server. If you have a different database name than altislife, change it on the USE `myDatabaseName`; statement. And then execute the pasted SQL script.

Copy the server\bugTracker\ folder into your life_server\ folder.

Open your life_server\config.cpp file, and add the code below inside your class CfgFunctions { class:

class CxpBugTracker {
  tag = "cxpbt";
  class Bugtracker {
    file = "\life_server\bugTracker";
    class saveBugReported {};
  };
};
Example (lines 13-20):

