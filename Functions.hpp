// https://www.altisliferpg.com/topic/13832-experience-system-v2/

class experiencesystem {
    file = "core\custom\experiencesystem";
    class dataexperience {};
    class experienceinit {};
    class firstjoin {};
    class giveexperience {};
    class saveexperience {};
    class experienceReceived {};
    class Experience_menu {};
    class upgrade_experience {};
    class experience_menu_change {};
    class queueexp {};
};
// in init.sqf at 123 insert
call life_fnc_experienceinit;
//in cfgRemoteExec.hpp on line 19 insert 
#include "core\custom\Medusa_Handler.hpp"
// in MasterHandler.hpp add this
#include "experienceMenu.hpp"
#include "Experience_bar.hpp"
// in Config_Master.hpp on the bottom add
#include "Config_Experience.hpp"
//and in the config file in the main mission directory drop the downloads Config_Experience.hpp 
//optional if you want to have this on your vanilla y menu
//place on line 279 of player_inv.hpp
class Experience_button : Life_RscButtonMenu {
    idc = 2035;
    text = "Experience Menu";
    onButtonClick = "createDialog ""Experience_Menu"";";
    x = 0.42 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
    y = 0.805;
    w = (6.25 / 40);
    h = (1 / 25);
}
//drop in missionfolder from downloads into your mission folder

//server files
class Experience {
    file = "\life_server\Functions\Experience";
    class fetchexperience {};
    class firstexperience {};
    class saveexperienceserver {};
}
//and drop in server files from downloads 
//the last thing you need to do is put in the database with this code
CREATE TABLE IF NOT EXISTS `experience` (
    `uid`            INT NOT NULL AUTO_INCREMENT,
    `pid`            VARCHAR(17) NOT NULL,
    `name`           VARCHAR(30) NOT NULL,
    `exp_experince`  INT NOT NULL DEFAULT 0,
    `exp_level`      INT NOT NULL DEFAULT 0,
    `exp_perks`      TEXT NOT NULL,
    `exp_points`     INT NOT NULL DEFAULT 0,


    PRIMARY KEY(`pid`),
        UNIQUE KEY `unique_uid` (`uid`),
            INDEX `index_name` (`pid`)
                ) ENGINE = InnoDB DEFAULT CHARSET = utf8mb4;
// helpful commands
//[10, "test"] spawn life_fnc_queueexp; give exp
//[] spawn{ sleep 2; createDialog "Experience_Menu"; } call menu