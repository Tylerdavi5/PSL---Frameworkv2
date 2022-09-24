/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class Max_Settings_Restrain {
    default_lang = "en"; // fr / en / es / de

    disable_sprint = true;
    remove_item = false;

    automatic_unrestrain_time = -1; // in seconds | -1 = disable the automatic unrestrain 

    /* USE SHIFT + R TO HANDCUFF AND UNCUFF IN COP AND IN CIVIL */
    item_type = "virtual"; // virtual / physical

    civilian_object_to_handcuff = ""; //object required to handcuff as a civilian  | "" = nothing
    civilian_object_to_uncuff = ""; //object required to uncuff as a civilian  | "" = nothing

    allow_restrain_cop = true; //allows or not the handcuffing of a police officer
    cop_object_to_handcuff = ""; //object required to handcuff as a cop | "" = nothing
    cop_object_to_uncuff = ""; //object required to uncuff as a cop  | "" = nothing

    allow_restrain_adac = true; //allows or not the handcuffing of a east officer
    adac_object_to_handcuff = ""; //object required to handcuff as a east | "" = nothing
    adac_object_to_uncuff = ""; //object required to uncuff as a east  | "" = nothing

    civilian_can_restrain = true; //allow civilian to handcuff an another person 
};
