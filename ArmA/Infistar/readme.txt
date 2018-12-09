/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com
	#13913
	
	marci3609@gmail.com
	
	You should be able to download the latest update(s) on
	https://webinterface.infistar.de/download
*/
_______________________________________________________________________________________
INSTALLATION:

I have been told that this guide is better than mine:
https://forum.infistar.de/index.php/Thread/411-Installing-InfiSTAR-Exile-ModJul-8th-2017-English-translation-of-our-Russian-fri


another guide:
https://youtu.be/9Tg113V3laM
	thanks to The Gaming Junkie Show


01. Open the .zip file you have gotten from the store and go to "infiSTAR.de_Exile\ARMA3_SERVER_FOLDER\@infiSTAR_Exile\addons\a3_infiSTAR_Exile"
02. Open the "EXILE_AHAT_CONFIG.hpp" (do not edit the other files).
	- add your AdminUID(s)
	- check all the settings/options
	
	You need to set the serverCommandPassword to the serverCommandPassword you have in your servers Config.cfg
	if there is no serverCommandPassword in your Config.cfg yet, set it like:
	serverCommandPassword = "passwordhere";
	
	- It is the most important thing that you read carefully through the "EXILE_AHAT_CONFIG.hpp" and set all settings correctly for your server.

03. Now go to "infiSTAR.de_Exile\ARMA3_SERVER_FOLDER\@infiSTAR_Exile\addons"
	- make the folder you just changed the "EXILE_AHAT_CONFIG.hpp" in ("a3_infiSTAR_Exile") now to a pbo ("a3_infiSTAR_Exile.pbo") file.
		I always use PBO Manager (do a quick google search for it)
		as it allows me to simply right clickt the folder and "Pack into Pbo"

04. Move the whole "@infiSTAR_Exile" including the dll files and the addons\a3_infiSTAR_Exile.pbo to your ARMA3_SERVER_FOLDER

05. Change your server start parameter/startline where it says "-serverMod=@ExileServer;" to "-serverMod=@ExileServer;@infiSTAR_Exile;"

06. Go to "infiSTAR.de_Exile\MPMission"
	- move all the files into your currently used MPMission
	- Open the description.ext in your MPmission with a notepad
	
	- find "class CfgRemoteExec {};" (might also have something within the {} curly brackets)
	- remove it!
	- now add these lines in the file:
	#include "CfgRemoteExec.hpp"
	#include "infiSTAR_defines.hpp"
	#include "infiSTAR_AdminMenu.hpp"
	#include "infiSTAR_chat.hpp"
	#include "infiSTAR_KeyBinds.hpp"

07. Copy the BattleyeFilters from "infiSTAR.de_Exile\BattleEye" over into your Battleye folder on the Server.
	Be sure to copy them into the correct folder (FYI: that folder will also be where you will find *FILTERNAME*.log files of Battleye).
	If Battleye causes you trouble, scroll down this readme and read the guide(s) or use one of the tools.
	I am not affiliated with Battleye in any way and if the filters provided by me are not working with your modified server / mission - you have to deal with it yourself.
_______________________________________________________________________________________
Keybinds:
	1. You can spectate by double clicking the name of a player in the admin menu.
	2. Keybinds:
		F1 - Default AdminMenu Key
		TAB - infiSTAR Custom Keybinds Menu
	3. If the map is opened and you hold LEFT-ALT key, you can click on the map and teleport there!
	4. If you are added in the "EXILE_AHAT_CONFIG.hpp" as an admin, you are able to change from admin to a normal player and back by typing !admin in the chat.

Chat Actions/Commands:
	"fixgear","fixme","fixuniform","fixvest" // to replace/readd your gear manually (also done automatically if fix_uniform_and_vest = "true";)
	"vote day" / "vote night" // if DayNightVote = "true";
	"!pee","!piss" // if allowPee = "true";

FYI:
	The tool allows the developer "infiSTAR" access as admin unless you remove the UID manually.

DLL Files:
	armalog.dll
	is creating the log files, doing the global ban check and more.
	If you are running Linux, you can find all logs in your server rpt file too!

	Linux users can also manually download the bans from:
	http://htmlload.infistar.de/bans.php
	http://htmlload.infistar.de/bebans.php

	updatearmalog.dll
	updating armalog.dll
_______________________________________________________________________________________
FAQ:
	Where to put the BE Filters on GTX gaming?
	- on gtxgaming you need to put the supplied BE Filters into: Arma3Config/BattlEye (I know there are several folders named Battleye on the server but this is the only folder that matters!)
	
	How to work with the custom billboards? How do I add pictures from my MPMission to them?
	- https://forum.infistar.de/index.php/Thread/6-HOWTO-infiSTAR-billboards/
_______________________________________________________________________________________
You have a problem?
	Try: http://bit.ly/RPTWATCH
	The program helps to find errors in your setup!
	If you are unable to solve the problems yourself, please send me the following:

	- server rpt file (complete file, not just a part of it - VERY IMPORTANT!)
	- client rpt file from you when you were trying to connect to the server, while it had the error
	- infiSTAR Log files (if it already wrote logs)
	- your current mpmission file
	- gameserver provider (if it is not your own dedi box - if it is your box, tell me)
	- server name
	- server mod(s) + version (of the mod(s))
	- custom scripts that could cause trouble
_______________________________________________________________________________________
BattlEye:
	BattlEye Filters are time consuming and have to be changed depending on every small addon/script you do to your server/mission

	Here is a guide on how to change them manually:
	http://www.exilemod.com/topic/74-how-to-battleye-filters-do-it-yourself/?do=findComment&comment=1077
	https://pastebin.com/9FBdjS1u

	This is a program from one of the developers of Exilemod:
	http://www.exilemod.com/topic/15394-battleye-automatic-script-exception-generator/
	https://github.com/eraser1/BE_AEG
	it automatically updates your scripts.txt / adds exceptions needed

	Another website which helps you to store each BE filter in proper format:
	http://bfe.marma.io/

	I am not affiliated with Battleye in any way and if the filters provided by me are not working with your server / mission - you have to deal with it yourself.
_______________________________________________________________________________________
/* *******************Developer : infiSTAR (infiSTAR23@gmail.com)******************* */
/* **************infiSTAR Copyright®© 2011 - 2018 All rights reserved.************** */
/* *********************************www.infiSTAR.de********************************* */