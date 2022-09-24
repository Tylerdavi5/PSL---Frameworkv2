/*
    Author: 3rk - https://steamcommunity.com/id/KR3KZ/
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class RobAtm
{
	idd = 4000;
    onUnload = "TP_robAtm_progRunning = false; player switchMove '';";
	
	class ControlsBackground
	{
		class bg_main : RobATM_bg 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.55;
			style = 0;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class bg_main_header : RobATM_bg_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class inside_header : RobATM_bg_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.30875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.3825;
			h = safeZoneH * 0.03333334;
			style = 0;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class text_main_header_copy1 : RobATM_text 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31375;
			y = safeZoneY + safeZoneH * 0.246;
			w = safeZoneW * 0.23;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "~~~~~~~ Bruteforce attack °-°";
			colorText[] = {0,0,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class text_main_header : RobATM_text 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.2;
			w = safeZoneW * 0.2375;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "##### Program console >>> running...";
			colorText[] = {0,0,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class target : RobATM_text_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.32444445;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.07;
			style = 0;
			text = "Target :";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class database : RobATM_text_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.38444445;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.07;
			style = 0;
			text = "Database :";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class inside_frame : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.30875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.3825;
			h = safeZoneH * 0.49222223;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class frame_target : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.42375;
			y = safeZoneY + safeZoneH * 0.33444445;
			w = safeZoneW * 0.2275;
			h = safeZoneH * 0.05;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class frame_database : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.42375;
			y = safeZoneY + safeZoneH * 0.39444445;
			w = safeZoneW * 0.2275;
			h = safeZoneH * 0.05;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class frame_main : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.55;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_1 : RobATM_letter 
		{
			type = 0;
			idc = 8000;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_2 : RobATM_letter 
		{
			type = 0;
			idc = 8001;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_3 : RobATM_letter 
		{
			type = 0;
			idc = 8002;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_4 : RobATM_letter 
		{
			type = 0;
			idc = 8003;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_5 : RobATM_letter 
		{
			type = 0;
			idc = 8004;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_6 : RobATM_letter 
		{
			type = 0;
			idc = 8005;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_7 : RobATM_letter 
		{
			type = 0;
			idc = 8006;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_8 : RobATM_letter 
		{
			type = 0;
			idc = 8007;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_9 : RobATM_letter 
		{
			type = 0;
			idc = 8008;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_10 : RobATM_letter 
		{
			type = 0;
			idc = 8009;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_11 : RobATM_letter 
		{
			type = 0;
			idc = 8010;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_12 : RobATM_letter 
		{
			type = 0;
			idc = 8011;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class check_13 : RobATM_letter 
		{
			type = 0;
			idc = 8012;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_1 : RobATM_letter 
		{
			type = 0;
			idc = 6000;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_2 : RobATM_letter 
		{
			type = 0;
			idc = 6001;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_3 : RobATM_letter 
		{
			type = 0;
			idc = 6002;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_4 : RobATM_letter 
		{
			type = 0;
			idc = 6003;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_5 : RobATM_letter 
		{
			type = 0;
			idc = 6004;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_6 : RobATM_letter 
		{
			type = 0;
			idc = 6005;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_7 : RobATM_letter 
		{
			type = 0;
			idc = 6006;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_8 : RobATM_letter 
		{
			type = 0;
			idc = 6007;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_9 : RobATM_letter 
		{
			type = 0;
			idc = 6008;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_10 : RobATM_letter 
		{
			type = 0;
			idc = 6009;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_11 : RobATM_letter 
		{
			type = 0;
			idc = 6010;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_12 : RobATM_letter 
		{
			type = 0;
			idc = 6011;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess_13 : RobATM_letter 
		{
			type = 0;
			idc = 6012;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_1 : RobATM_letter 
		{
			type = 0;
			idc = 7000;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_2 : RobATM_letter 
		{
			type = 0;
			idc = 7001;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_3 : RobATM_letter 
		{
			type = 0;
			idc = 7002;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_4 : RobATM_letter 
		{
			type = 0;
			idc = 7003;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_5 : RobATM_letter 
		{
			type = 0;
			idc = 7004;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_6 : RobATM_letter 
		{
			type = 0;
			idc = 7005;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_7 : RobATM_letter 
		{
			type = 0;
			idc = 7006;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_8 : RobATM_letter 
		{
			type = 0;
			idc = 7007;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_9 : RobATM_letter 
		{
			type = 0;
			idc = 7008;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_10 : RobATM_letter 
		{
			type = 0;
			idc = 7009;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_11 : RobATM_letter 
		{
			type = 0;
			idc = 7010;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_12 : RobATM_letter 
		{
			type = 0;
			idc = 7011;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class guess2_13 : RobATM_letter 
		{
			type = 0;
			idc = 7012;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "x";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f1 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f2 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f3 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f4 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f5 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f6 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f7 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f8 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f9 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f10 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f11 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f12 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class f13 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g1 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g2 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g3 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g4 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g5 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g6 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g7 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g8 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g9 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g10 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g11 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g12 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class g13 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h1 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h2 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h3 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h4 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h5 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h6 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.46875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h7 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h8 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h9 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h10 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h11 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h12 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.61875;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class h13 : RobATM_frame 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			text = "";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class target_fake : RobATM_text_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.42375;
			y = safeZoneY + safeZoneH * 0.30444445;
			w = safeZoneW * 0.1825;
			h = safeZoneH * 0.11;
			style = 0;
			text = "atm#23.86.111.0 private port...";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class database_fake : RobATM_text_green 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.42375;
			y = safeZoneY + safeZoneH * 0.36444445;
			w = safeZoneW * 0.1825;
			h = safeZoneH * 0.11;
			style = 0;
			text = "host detected...";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class status : RobATM_text_green 
		{
			type = 0;
			idc = 5000;
			x = safeZoneX + safeZoneW * 0.33875;
			y = safeZoneY + safeZoneH * 0.65444445;
			w = safeZoneW * 0.3225;
			h = safeZoneH * 0.05;
			text = "Status : Waiting";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class execute : RobATM_btn 
		{
			type = 1;
			idc = 7200;
			x = safeZoneX + safeZoneW * 0.44140625;
			y = safeZoneY + safeZoneH * 0.69444445;
			w = safeZoneW * 0.1171875;
			h = safeZoneH * 0.06076389;
			text = "Execute";
			colorText[] = {1,0,0,1};
			borderSize = 0;
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[] spawn the_programmer_robatm_tpfn_executeProgram;";
			blinkingPeriod = 0.7;
		};
	};
};
