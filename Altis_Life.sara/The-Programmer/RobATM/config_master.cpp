/*
    Author: 3rk - https://steamcommunity.com/id/KR3KZ/
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define false 0
#define true 1

class The_Programmer_RobAtm_Config {
    default_lang                = "en"; // fr / en / es / de
    debug_mode                  = false; // Enable debug mode

    min_cops_online             = 1; // Minimum number of cop online to rob the ATM

    atm_all_classnames[]        = { "Land_Atm_02_F" }; // Add more ATM classname here

    max_time_auto_repair        = 60; // Maximum time in minutes before the ATM fixed itself after a robbery
    max_time_atm_full           = 20; // Maximum time in minutes for the ATM to be full of cash again after it's fixed

    max_cash_in_atm             = 15000; // Maximum cash in ATM after the max_time_atm_full delay or if the ATM never been robbed

    min_time_between_insertion  = 60; // Minimum time in seconds between each completed insertion of the card in ATM
    time_to_insert_fake_card    = 15; // Time in seconds to insert the fake card in the ATM
    time_to_withdraw_fake_card  = 10; // Time in seconds to withdraw fake card from the ATM

    cop_reward                  = 500; // Cop reward for fixing the ATM

    insert_animation            = "AinvPknlMstpSnonWnonDnon_medic_1"; // Insert card animation
    withdraw_animation          = "AinvPknlMstpSnonWnonDnon_medic_1"; // Withdraw card animation
    bruteforce_animation        = "AinvPknlMstpSnonWnonDnon_medic_1"; // Brute force animation (when executing the program)
};
