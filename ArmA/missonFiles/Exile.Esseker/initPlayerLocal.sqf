/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 30 NPCs
private _npcs = [
["Exile_Trader_Food", ["InBaseMoves_table1"], "Exile_Trader_Food", "Barklem", [[],[],[],["U_C_Man_casual_4_F",[]],[],[],"H_Bandanna_blu","G_Tactical_Clear",[],["","","","","",""]], [3934.17, 9292.73, 150.275], [0.773315, -0.634022, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["c4coming2cDf_genericstani1"], "Exile_Trader_Equipment", "WhiteHead_09", [["srifle_DMR_06_olive_F","","","optic_KHS_old",["20Rnd_762x51_Mag",20],[],"bipod_03_F_blk"],[],["hgun_Pistol_heavy_01_F","","","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_survival_uniform",[["20Rnd_762x51_Mag",2,20]]],["V_HarnessOSpec_brn",[["20Rnd_762x51_Mag",1,20]]],["rhs_M252_Gun_Bag",[]],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [3943.36, 9302.87, 150.275], [0.892759, -0.450535, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubSittingChairUB_idle1"], "Exile_Trader_Office", "Barklem", [[],[],["TaurusTracker455","","","",["6Rnd_45ACP",6],[],""],["U_C_Journalist",[["6Rnd_45ACP",3,6]]],["V_Rangemaster_belt",[]],[],"H_Cap_Black_IDAP_F","G_Aviator",[],["","","","","",""]], [3956.34, 9317.22, 150.761], [-0.855845, -0.517233, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle3"], "Exile_Trader_Hardware", "WhiteHead_07", [[],[],[],["U_C_WorkerCoveralls",[]],[],["B_LegStrapBag_coyote_F",[]],"H_Bandanna_sgg","G_Shades_Black",[],["","","","","",""]], [3945.35, 9282.31, 150.275], [-0.750088, 0.661338, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle2"], "Exile_Trader_Vehicle", "WhiteHead_21", [[],[],[],["U_C_IDAP_Man_cargo_F",[]],[],[],"H_Bandanna_cbr","G_Lady_Blue",[],["","","","","",""]], [3967.94, 9259.76, 150.329], [0.95191, -0.306377, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_idle2"], "Exile_Trader_VehicleCustoms", "Harris", [[],[],[],["U_C_Driver_4",[]],[],[],"H_Cap_headphones_gry","G_Tactical_Clear",[],["","","","","",""]], [4020.1, 9220.02, 150.275], [-0.403673, 0.914903, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["c4coming2cDf_genericstani1"], "Exile_Trader_SpecialOperations", "Barklem", [["exile_weapons_m107","","","optic_AMS",["10Rnd_127x99_m107",10],[],""],["launch_O_Titan_ghex_F","","","",[],[],""],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",[],[],""],["U_O_V_Soldier_Viper_F",[["10Rnd_127x99_m107",1,10]]],[],[],"Exile_Headgear_SantaHat","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [4011.8, 9256.56, 150.553], [-0.668404, -0.743799, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", ["HubSittingChairUB_idle1"], "Exile_Trader_RussianRoulette", "WhiteHead_09", [[],[],["Exile_Weapon_Taurus","","","",["Exile_Magazine_6Rnd_45ACP",6],[],""],["U_Marshal",[["Exile_Magazine_6Rnd_45ACP",2,6]]],["V_Rangemaster_belt",[["Exile_Magazine_6Rnd_45ACP",1,6]]],[],"H_Cap_usblack","G_Sport_BlackWhite",[],["","","","","",""]], [3973.46, 9292.98, 150.59], [-0.142422, -0.989806, 0], [0, 0, 1]],
["Exile_Trader_Food", ["InBaseMoves_table1"], "Exile_Trader_Food", "GreekHead_A3_08", [[],[],[],["U_C_Man_casual_4_F",[]],[],[],"H_Bandanna_blu","G_Tactical_Clear",[],["","","","","",""]], [10150.2, 7969.95, 71.0568], [-0.388716, -0.921358, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["c4coming2cDf_genericstani1"], "Exile_Trader_Equipment", "Sturrock", [["arifle_MX_Black_F","muzzle_snds_H","","optic_DMS",["30Rnd_65x39_caseless_mag",30],[],"bipod_02_F_blk"],[],["hgun_Pistol_heavy_01_F","","","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_survival_uniform",[["30Rnd_65x39_caseless_mag",2,30]]],["V_HarnessO_brn",[["30Rnd_65x39_caseless_mag",1,30],["11Rnd_45ACP_Mag",3,11]]],["B_Carryall_khk",[]],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [10141.1, 7987.35, 70.8082], [-0.824782, -0.565451, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle3"], "Exile_Trader_Hardware", "WhiteHead_06", [[],[],[],["U_C_Commoner2_2",[]],[],["B_LegStrapBag_coyote_F",[]],"H_Bandanna_sgg","G_Shades_Black",[],["","","","","",""]], [10164.2, 7939.73, 66.5119], [-0.991446, -0.130514, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubSittingChairUB_idle1"], "Exile_Trader_Office", "Sturrock", [[],[],["TaurusTracker455","","","",["6Rnd_45ACP",6],[],""],["U_C_Journalist",[["6Rnd_45ACP",3,6]]],["V_Rangemaster_belt",[]],[],"H_Cap_Black_IDAP_F","G_Aviator",[],["","","","","",""]], [10165.5, 7973.47, 77.3313], [-0.449928, -0.893065, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle2"], "Exile_Trader_Vehicle", "WhiteHead_14", [[],[],[],["U_BG_Guerilla2_1",[]],[],[],"H_Bandanna_cbr","G_Lady_Blue",[],["","","","","",""]], [10105.3, 7909.4, 67.4209], [0.0895372, 0.995983, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_idle2"], "Exile_Trader_VehicleCustoms", "WhiteHead_07", [[],[],[],["U_I_G_resistanceLeader_F",[]],[],[],"","rhsusf_shemagh2_grn",[],["","","","","",""]], [10146.2, 7944.88, 66.678], [-0.341389, -0.939922, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["c4coming2cDf_genericstani1"], "Exile_Trader_SpecialOperations", "GreekHead_A3_06", [["exile_weapons_m107","","","optic_AMS",["10Rnd_127x99_m107",10],[],""],["launch_O_Titan_ghex_F","","","",[],[],""],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",[],[],""],["U_O_V_Soldier_Viper_F",[]],[],[],"Exile_Headgear_SantaHat","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [10155.5, 7978.36, 77.3398], [0.340046, -0.940409, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubStandingUA_idle3"], "Exile_Trader_AircraftCustoms", "AfricanHead_01", [[],[],[],["U_C_ConstructionCoverall_Black_F",[]],["V_PlateCarrier1_blk",[]],[],"H_HelmetCrew_B","G_Combat",[],["","","","","",""]], [10835, 4790.14, 12.5011], [0.646204, 0.763165, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle3"], "Exile_Trader_Hardware", "GreekHead_A3_09", [[],[],[],["U_C_WorkerCoveralls",[]],[],["B_LegStrapBag_coyote_F",[]],"H_Bandanna_sgg","G_Shades_Black",[],["","","","","",""]], [3091.95, 4480.22, 113.759], [0.100236, 0.994964, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStandingUA_idle1"], "Exile_Trader_WasteDump", "Harris", [[],[],[],["U_B_PilotCoveralls",[]],[],[],"H_Cap_blk","G_Shades_Black",[],["","","","","",""]], [3094.24, 4502.27, 113.576], [-0.144507, -0.989504, 0], [0, 0, 1]],
["Exile_Trader_Food", ["InBaseMoves_table1"], "Exile_Trader_Food", "WhiteHead_02", [[],[],[],["U_C_Man_casual_4_F",[]],[],[],"H_Bandanna_blu","G_Tactical_Clear",[],["","","","","",""]], [3083.6, 4503.65, 113.021], [-0.0581978, -0.998305, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["c4coming2cDf_genericstani1"], "Exile_Trader_Equipment", "AfricanHead_03", [["arifle_MX_Black_F","muzzle_snds_H","","optic_DMS",["30Rnd_65x39_caseless_mag",30],[],"bipod_02_F_blk"],[],["hgun_Pistol_heavy_01_F","","","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_survival_uniform",[["30Rnd_65x39_caseless_mag",2,30]]],["V_HarnessO_brn",[["30Rnd_65x39_caseless_mag",1,30],["11Rnd_45ACP_Mag",3,11]]],["B_Carryall_khk",[]],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [3068.65, 4501.51, 112.826], [-0.215135, -0.976584, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["c4coming2cDf_genericstani1"], "Exile_Trader_SpecialOperations", "WhiteHead_08", [["exile_weapons_m107","","","optic_AMS",["10Rnd_127x99_m107",10],[],""],["launch_O_Titan_ghex_F","","","",[],[],""],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",[],[],""],["U_O_V_Soldier_Viper_F",[["10Rnd_127x99_m107",1,10]]],[],[],"Exile_Headgear_SantaHat","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [3061.04, 4493.87, 112.834], [0.660285, -0.751015, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle2"], "Exile_Trader_Vehicle", "WhiteHead_16", [[],[],[],["U_C_IDAP_Man_cargo_F",[]],[],[],"H_Bandanna_cbr","G_Lady_Blue",[],["","","","","",""]], [3108.62, 4489.28, 113.819], [0.927218, 0.374523, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubSittingChairUB_idle1"], "Exile_Trader_Office", "WhiteHead_13", [[],[],["TaurusTracker455","","","",["6Rnd_45ACP",6],[],""],["U_C_Journalist",[["6Rnd_45ACP",3,6]]],["V_Rangemaster_belt",[]],[],"H_Cap_Black_IDAP_F","G_Aviator",[],["","","","","",""]], [3080.04, 4480.83, 113.028], [0.13356, 0.991041, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStandingUA_idle1"], "Exile_Trader_WasteDump", "WhiteHead_08", [[],[],[],["U_C_Commoner2_1",[]],[],[],"H_Cap_blk","G_Shades_Black",[],["","","","","",""]], [10140.4, 7947.73, 66.7634], [-0.319627, -0.947543, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["c4coming2cDf_genericstani1"], "Exile_Trader_Armory", "Sturrock", [["ksvk","","","optic_KHS_old",[],[],""],[],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_CombatUniform_mcam_vest",[["11Rnd_45ACP_Mag",1,11]]],["V_PlateCarrierGL_rgr",[["11Rnd_45ACP_Mag",2,11]]],["B_Carryall_cbr",[]],"H_HelmetB_light_desert","G_Bandanna_aviator",[],["","","","","","NVGoggles"]], [10152.8, 7972.1, 77.3421], [0.978423, 0.206613, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStandingUA_idle1"], "Exile_Trader_WasteDump", "GreekHead_A3_08", [[],[],[],["U_B_PilotCoveralls",[]],[],[],"H_Cap_blk","G_Shades_Black",[],["","","","","",""]], [4021.68, 9223, 150.275], [-0.969736, 0.244156, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["c4coming2cDf_genericstani1"], "Exile_Trader_Armory", "AfricanHead_02", [["arifle_SPAR_01_GL_blk_F","muzzle_snds_M","acc_pointer_IR","optic_ERCO_blk_F",["30Rnd_556x45_Stanag",30],[],""],[],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_CTRG_2",[["11Rnd_45ACP_Mag",1,11],["30Rnd_556x45_Stanag",3,30]]],["V_PlateCarrierH_CTRG",[["11Rnd_45ACP_Mag",2,11]]],["B_Carryall_khk",[]],"H_HelmetSpecB_snakeskin","G_Bandanna_tan",[],["","","","","",""]], [3060.81, 4487.05, 112.834], [0.835175, 0.549984, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_idle2"], "Exile_Trader_VehicleCustoms", "WhiteHead_03", [[],[],[],["U_C_Driver_4",[]],[],[],"H_Construction_headset_black_F","G_Tactical_Clear",[],["","","","","",""]], [3100.53, 4500.52, 113.741], [-0.167282, -0.985909, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUA_idle3"], "Exile_Trader_Aircraft", "WhiteHead_19", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [10838.7, 4789.89, 12.4781], [-0.443681, 0.896185, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["c4coming2cDf_genericstani1"], "Exile_Trader_Armory", "WhiteHead_03", [["ksvk","","","optic_KHS_old",[],[],""],[],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_O_FullGhillie_lsh",[["11Rnd_45ACP_Mag",1,11]]],["V_HarnessOGL_gry",[]],[],"","",[],["","","","","",""]], [4007.83, 9259.07, 150.53], [-0.556919, -0.830567, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;