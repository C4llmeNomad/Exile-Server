uiSleep 2;
_respect = ExileClientPlayerScore;
switch (true) do
{

case (_respect > 500 && _respect < 5000):
{
	_rank = "Bambi";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player forceAddUniform "U_C_WorkerOveralls";
	player addVest "V_Rangemaster_belt";
	player addItemToUniform "Exitem_bandage_dirty";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "hgun_ACP2C_F";
	player addItemToVest "9Rnd_45ACP_Mag";
	player addItemToVest "9Rnd_45ACP_Mag";
};
case (_respect > 4999 && _respect < 10000):
{
	_rank = "Peashooter";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_IK_Kabeiroi_5";
	player addVest "V_Rangemaster_belt";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "hgun_P99_khi_F";
	player addItemToUniform "Exitem_bandage_dirty";
	player addItemToUniform "Exitem_franta";
	player addHeadgear "H_Cap_blu";
	player addItemToVest "16Rnd_9x21_Mag";
	player addItemToVest "16Rnd_9x21_Mag";
	player addItemToUniform "16Rnd_9x21_Mag";
};

case (_respect > 9999 && _respect < 15000):
{
	_rank = "Gunslinger";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_OB_Bandit_5";
	player addVest "V_Rangemaster_belt";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "hgun_Pistol_heavy_02_F";
	player addItemToUniform "Exile_Item_Bandage";
	player addItemToUniform "Exitem_franta";
	player addHeadgear "H_Bandanna_cbr";
	player addItemToVest "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
};

case (_respect > 14999 && _respect < 20000):
{
	_rank = "Hit Man";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_C_Commoner4_1";
	player addVest "V_Rangemaster_belt";
	player addHeadgear "H_Watchcap_sgg";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "hgun_Pistol_heavy_02_F";
	player addItemToUniform "Exile_Item_Bandage";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
	player addItemToUniform "6Rnd_45ACP_Cylinder";
	player addItemToVest "acc_flashlight_pistol";
	player addItemToVest "optic_Yorris";
};
case (_respect > 19999 && _respect < 25000):
{
	_rank = "Outlaw";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_Flames_F";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Hat_brown";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "rhsusf_weap_glock17g4";
	player addItemToUniform "Exile_Item_Bandage";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "acc_flashlight_pistol";
};

case (_respect > 24999 && _respect < 30000):
{
	_rank = "Crampfish";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 30000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_IK_Kabeiroi_1";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Cap_brn_SERO";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "hgun_Pistol_heavy_01_F";
	player addItemToUniform "Exitem_dressing";
	player addItemToUniform "Exitem_spirit";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToUniform "11Rnd_45ACP_Mag";
	player addItemToUniform "11Rnd_45ACP_Mag";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToVest "acc_flashlight_pistol";
	player addItemToVest "optric_MRD";
};

case (_respect > 29999 && _respect < 40000):
{
	_rank = "Silent Hunter";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 40000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_BG_Guerrilla_6_1";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Booniehat_CTRG_F";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "rhsusf_weap_glock17g4";
	player addItemToUniform "Exitem_dressing";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";
	player addItemToVest "acc_flashlight_pistol";
	player addItemToVest "rhsusf_acc_omega9k";
};

case (_respect > 39999 && _respect < 50000):
{
	_rank = "Triggerman";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 50000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_I_C_Soldier_Para_4_F";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Booniehat_oli";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToVest "hgun_Pistol_heavy_01_F";
	player addItemToUniform "Exitem_dressing";
	player addItemToUniform "Exitem_franta";
	player addItemToUniform "11Rnd_45ACP_Mag";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToVest "11Rnd_45ACP_Mag";
	player addItemToVest "optric_MRD";
	player addItemToVest "acc_flashlight_pistol";
	player addItemToVest "muzzle_sdns_pistol_heavy_01";
};

case (_respect > 49999 && _respect < 60000):
{
	_rank = "Gangster";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 60000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_I_RiotPoliceBody";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Cap_police";
	player addBackpack "rhs_assault_umbts";
	player addItemToBackpack "rhs_weap_lzh18";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exitem_painkillers";
	player addItemToUniform "Exitem_franta";
	player addItemToUniform "Exitem_antibiotic";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
	player addItemToVest "rhsgref_1Rnd_00Buck";
	player addItemToVest "rhsgref_1Rnd_Slug";
};
case (_respect > 59999 && _respect < 70000):
{
	_rank = "Fugitive";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 70000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_BG_Guerilla1_2_F";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_MilCap_dgtl";
	player addBackpack "B_OutdoorPack_tan";
	player addItemToBackpack "sgun_M4_F";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exitem_painkillers";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "8Rnd_12Gauge_Pellets";
	player addItemToVest "8Rnd_12Gauge_Slug";
	player addItemToVest "8Rnd_12Gauge_Pellets";
	player addItemToVest "8Rnd_12Gauge_Slug";
	player addItemToVest "8Rnd_12Gauge_Pellets";
};
case (_respect > 69999 && _respect < 80000):
{
	_rank = "Yokel";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 80000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_C_HunterBody_grn";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Booniehat_tan";
	player addBackpack "B_OutdoorPack_blu";
	player addItemToBackpack "Exile_Weapon_CZ550";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exitem_painkillers";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
	player addItemToVest "Exile_Magazine_5Rnd_22LR";
};
case (_respect > 79999 && _respect < 90000):
{
	_rank = "Mercenary";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 90000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_IR_PilotCoveralls";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_HeadBandage_bloody_F";
	player addBackpack "B_AssaultPack_Kerry";
	player addItemToBackpack "rhs_weap_m38";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exitem_painkillers";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
};
case (_respect > 89999 && _respect < 100000):
{
	_rank = "Angry Grandpa";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 100000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_I_G_resistanceLeader_F";
	player addVest "V_LegStrapBag_black_F";
	player addHeadgear "H_Booniehat_deu_wdl_F";
	player addBackpack "rhs_rpg_empty";
	player addItemToBackpack "rhs_weap_kar98k";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exitem_painkillers";
	player addItemToUniform "Exitem_franta";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
	player addItemToVest "rhsgref_5Rnd_792x57_kar98k";
};
case (_respect > 99999 && _respect < 125000):
{
	_rank = "1 of 2000";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 125000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_CTRG_Soldier_alt_2_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_dazzle";
	player addBackpack "rhs_sidor";
	player addItemToBackpack "rhs_weap_pp2000";
	player addItemToBackpack "optic_aco_smg";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_Vishpirin";
	player addItemToUniform "Exitem_redgull";
	player addItemToUniform "Exile_Item_Moobar";
	player addItemToVest "rhs_mag_9x19mm_7n21_20";
	player addItemToVest "rhs_mag_9x19mm_7n21_20";
	player addItemToVest "rhs_mag_9x19mm_7n21_20";
	player addItemToVest "rhs_mag_9x19mm_7n31_20";
};
case (_respect > 124999 && _respect < 150000):
{
	_rank = "Angler";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 150000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_E_Soldier_AR_ita_wdl_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_ita_wdl_F";
	player addBackpack "B_FieldPack_khk";
	player addItemToBackpack "SMG_01_khk_F";
	player addItemToBackpack "optic_Holosight_smg_khk_F";
	player addItemToBackpack "muzzle_mzls_acp";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_Vishpirin";
	player addItemToUniform "Exitem_redgull";
	player addItemToUniform "Exile_Item_Moobar";
	player addItemToVest "30Rnd_45ACP_Mag_SMG_01";
	player addItemToVest "30Rnd_45ACP_Mag_SMG_01";
	player addItemToVest "30Rnd_45ACP_Mag_SMG_01";
};
case (_respect > 159999 && _respect < 200000):
{
	_rank = "Spray 'n Pray God";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 200000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_CombatUniform_ddgtl_tshirt";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_ddgtl";
	player addBackpack "rhsusf_assault_eagleaiii_coy";
	player addItemToBackpack "rhsusf_weap_MP7A1_aor1";
	player addItemToBackpack "rhsusf_acc_eotech_552_d";
	player addItemToBackpack "rhsusf_acc_anpeq15_wmx_light";
	player addItemToBackpack "rhsusf_acc_rotex_mp7_aor1";
	player addItemToBackpack "rhsusf_acc_grip2";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_Vishpirin";
	player addItemToUniform "Exile_Item_Beer";
	player addItemToUniform "Exile_Item_Moobar";
	player addItemToVest "rhsusf_mag_40Rnd_46x30_JHP";
	player addItemToVest "rhsusf_mag_40Rnd_46x30_AP";
	player addItemToVest "rhsusf_mag_40Rnd_46x30_FMJ";
};
case (_respect > 199999 && _respect < 300000):
{
	_rank = "Enfielder";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 300000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_E_Soldier_AR_fra_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_fra_F";
	player addBackpack "B_BergenC_blu";
	player addItemToBackpack "Exile_Weapon_LeeEnflield";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_InstaDoc";
	player addItemToUniform "Exile_Item_Beer";
	player addItemToUniform "Exitem_orange";
	player addItemToVest "Exile_Magazine_10Rnd_303";
	player addItemToVest "Exile_Magazine_10Rnd_303";
	player addItemToVest "Exile_Magazine_10Rnd_303";
	player addItemToVest "Exile_Magazine_10Rnd_303";
	player addItemToVest "Exile_Magazine_10Rnd_303";
};
case (_respect > 299999 && _respect < 400000):
{
	_rank = "Hooligan";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 40000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_E_Soldier_AR_deu_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_deu_F";
	player addBackpack "B_BergenC_red";
	player addItemToBackpack "rhs_weap_mosin_sbr";
	player addItemToBackpack "optic_aco";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_InstaDoc";
	player addItemToUniform "Exile_Item_Beer";
	player addItemToUniform "Exitem_orange";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
};
case (_respect > 399999 && _respect < 500000):
{
	_rank = "Mosin Sniper";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 500000 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_E_Soldier_AR_ndl_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_nld_F";
	player addBackpack "B_BergenC_grn";
	player addItemToBackpack "rhs_weap_m38_rail";
	player addItemToBackpack "optic_aco";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_InstaDoc";
	player addItemToUniform "Exile_Item_PlasticBottleFreshWater";
	player addItemToUniform "Exile_Item_CockONut";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
	player addItemToVest "rhsgref_5Rnd_762x54_m38";
};
case (_respect > 500000):
{
	_rank = "Cheater";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You have the highest Rank!</t>", _rank], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player forceAddUniform "U_B_E_Soldier_AR_F";
	player addVest "V_BandollierB_sgg";
	player addHeadgear "H_Booniehat_ubacs_F";
	player addBackpack "B_BergenC_grn";
	player addItemToBackpack "rhs_weap_m24sws_blk";
	player addItemToBackpack "rhsusf_acc_eotech_xps3";
	player linkItem "Exile_Item_XM8";
	player linkItem "ItemCompass";
	player linkItem "ItemMap";
	player addItemToUniform "Exile_Item_InstaDoc";
	player addItemToUniform "Exile_Item_PlasticBottleCoffee";
	player addItemToUniform "Exile_Item_DsNuts";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
	player addItemToVest "rhsusf_5Rnd_762x51_m118_special_Mag";
};



default
{
	_rank = "Inmate";
	[parseText format["<br/><br/><br/><t size='0.6'font='OrbitronLight'>Your Rank is %1</t><br/><t size='0.5'font='OrbitronLight'>You need to earn %2 more respect for the next rank!</t>", _rank, 2500 - _respect], 0, 0, 10, 0] spawn bis_fnc_dynamictext;
	player linkItem "ItemMap";
	player addWeapon "Exile_Melee_Shovel";
	//player addItem "Exile_Item_DuctTape";
	//  "Your rank is Inmate";
};
};