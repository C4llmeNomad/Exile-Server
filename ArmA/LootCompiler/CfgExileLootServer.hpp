class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0,53%
			PistolAttachments = 1,60%
			ShotgunAmmo       = 1,60%
			SMGAmmo           = 1,60%
			SMGAttachments    = 1,60%
			Shotguns          = 1,07%
			SMG               = 2,14%
			CivilianVests     = 2,67%
			PistolAmmo        = 2,67%
			Pistols           = 4,28%
			Chemlights        = 5,35%
			CivilianItems     = 5,35%
			Drinks            = 5,35%
			RoadFlares        = 5,35%
			CivilianBackpacks = 5,88%
			CivilianClothing  = 10,70%
			CivilianHeadgear  = 10,70%
			Food              = 14,97%
			Trash             = 16,04%
			MedicalItems      = 0,53%
		*/
		CivillianLowerClass[] = {"CivilianClothing", "Trash", "Trash", "CivilianHeadgear", "CivilianClothing", "Trash", "Trash", "Drinks", "Trash", "Food", "CivilianHeadgear", "RoadFlares", "SMGAttachments", "Food", "CivilianHeadgear", "Food", "Chemlights", "Pistols", "Trash", "PistolAmmo", "Pistols", "CivilianHeadgear", "CivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "Food", "CivilianHeadgear", "CivilianClothing", "CivilianBackpacks", "RoadFlares", "Trash", "CivilianClothing", "CivilianBackpacks", "Restraints", "CivilianHeadgear", "CivilianVests", "Trash", "Food", "Drinks", "Food", "Food", "Shotguns", "Trash", "Trash", "CivilianItems", "Food", "RoadFlares", "Trash", "CivilianVests", "Shotguns", "CivilianHeadgear", "CivilianBackpacks", "Trash", "Food", "Food", "Trash", "CivilianBackpacks", "Trash", "CivilianItems", "CivilianBackpacks", "CivilianBackpacks", "Food", "Chemlights", "Trash", "Chemlights", "PistolAmmo", "CivilianClothing", "SMG", "CivilianHeadgear", "CivilianItems", "Food", "CivilianVests", "Trash", "Trash", "CivilianHeadgear", "SMGAmmo", "SMG", "SMGAttachments", "SMGAmmo", "CivilianItems", "CivilianBackpacks", "CivilianClothing", "CivilianBackpacks", "Food", "Food", "SMGAttachments", "RoadFlares", "Trash", "Food", "CivilianItems", "Food", "CivilianHeadgear", "CivilianClothing", "Trash", "Drinks", "Food", "Chemlights", "Chemlights", "CivilianHeadgear", "Trash", "CivilianHeadgear", "Chemlights", "PistolAmmo", "Trash", "RoadFlares", "CivilianVests", "Chemlights", "CivilianClothing", "SMG", "CivilianClothing", "Food", "CivilianHeadgear", "CivilianClothing", "Food", "CivilianItems", "CivilianClothing", "CivilianItems", "ShotgunAmmo", "SMGAmmo", "Food", "CivilianClothing", "Food", "Trash", "ShotgunAmmo", "Chemlights", "Chemlights", "Drinks", "CivilianClothing", "RoadFlares", "Pistols", "CivilianHeadgear", "CivilianHeadgear", "PistolAmmo", "PistolAttachments", "PistolAmmo", "CivilianItems", "RoadFlares", "CivilianBackpacks", "Drinks", "CivilianItems", "Food", "CivilianClothing", "Pistols", "PistolAttachments", "CivilianClothing", "Trash", "Trash", "SMG", "Drinks", "CivilianVests", "Pistols", "Trash", "Drinks", "RoadFlares", "Trash", "Food", "Food", "Trash", "Pistols", "Pistols", "CivilianClothing", "Drinks", "CivilianBackpacks", "MedicalItems", "Food", "Drinks", "CivilianHeadgear", "Food", "CivilianHeadgear", "Trash", "Trash", "Trash", "RoadFlares", "CivilianBackpacks", "CivilianItems", "Chemlights", "RoadFlares", "CivilianClothing", "Food", "CivilianClothing", "CivilianClothing", "ShotgunAmmo", "Pistols", "PistolAttachments", "CivilianHeadgear", "Food", "Drinks"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0,55%
			PistolAttachments = 1,65%
			RifleAmmo         = 1,65%
			RifleAttachments  = 2,20%
			Rifles            = 4,40%
			ShotgunAmmo       = 1,65%
			SMGAmmo           = 1,65%
			SMGAttachments    = 1,65%
			Shotguns          = 2,20%
			SMG               = 3,30%
			CivilianVests     = 2,75%
			PistolAmmo        = 2,75%
			Pistols           = 5,49%
			Chemlights        = 2,75%
			CivilianItems     = 5,49%
			Drinks            = 5,49%
			RoadFlares        = 2,75%
			CivilianBackpacks = 4,95%
			CivilianClothing  = 8,24%
			CivilianHeadgear  = 8,24%
			Food              = 13,74%
			Trash             = 15,38%
			MedicalItems      = 1,10%
		*/
		CivillianUpperClass[] = {"CivilianVests", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "Food", "Rifles", "CivilianBackpacks", "Food", "CivilianClothing", "RifleAttachments", "CivilianVests", "Food", "Rifles", "ShotgunAmmo", "CivilianClothing", "Food", "SMGAmmo", "Food", "Trash", "SMG", "Trash", "Trash", "Trash", "PistolAmmo", "Shotguns", "Food", "CivilianItems", "Food", "Shotguns", "Chemlights", "Trash", "Chemlights", "Trash", "SMGAttachments", "ShotgunAmmo", "Trash", "CivilianItems", "Drinks", "CivilianHeadgear", "Trash", "Food", "Food", "CivilianBackpacks", "CivilianHeadgear", "CivilianClothing", "Drinks", "Food", "Trash", "RifleAmmo", "CivilianBackpacks", "SMG", "Food", "CivilianBackpacks", "CivilianClothing", "Shotguns", "Food", "CivilianClothing", "Pistols", "RifleAttachments", "CivilianItems", "RoadFlares", "CivilianHeadgear", "SMGAmmo", "CivilianBackpacks", "SMGAttachments", "Trash", "Food", "Rifles", "CivilianClothing", "Food", "RoadFlares", "Food", "Rifles", "CivilianItems", "Trash", "ShotgunAmmo", "SMGAmmo", "CivilianVests", "Trash", "Trash", "Rifles", "Pistols", "CivilianBackpacks", "SMG", "Pistols", "Rifles", "Drinks", "PistolAttachments", "Trash", "Food", "CivilianClothing", "Food", "RifleAttachments", "CivilianClothing", "Drinks", "PistolAmmo", "CivilianHeadgear", "Trash", "PistolAttachments", "Food", "CivilianBackpacks", "CivilianVests", "Chemlights", "Chemlights", "RoadFlares", "CivilianHeadgear", "Drinks", "Food", "CivilianClothing", "MedicalItems", "Trash", "Food", "Drinks", "SMGAttachments", "Chemlights", "CivilianHeadgear", "Food", "Restraints", "Drinks", "Pistols", "CivilianClothing", "PistolAttachments", "CivilianItems", "Pistols", "Trash", "Trash", "Trash", "CivilianHeadgear", "Trash", "Drinks", "CivilianClothing", "Trash", "Trash", "CivilianItems", "Food", "CivilianClothing", "Trash", "Food", "Pistols", "Trash", "Trash", "CivilianHeadgear", "Food", "CivilianItems", "Food", "CivilianItems", "RifleAttachments", "CivilianHeadgear", "Shotguns", "CivilianItems", "RifleAmmo", "Pistols", "Pistols", "PistolAmmo", "RoadFlares", "CivilianVests", "Rifles", "SMG", "MedicalItems", "SMG", "RoadFlares", "PistolAmmo", "CivilianClothing", "RifleAmmo", "Trash", "Trash", "SMG", "CivilianHeadgear", "Rifles", "CivilianHeadgear", "Drinks", "CivilianBackpacks", "CivilianItems", "Trash", "CivilianHeadgear", "Drinks", "Pistols", "CivilianHeadgear", "CivilianHeadgear", "PistolAmmo", "CivilianBackpacks", "Pistols"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0,78%
			CivilianVests     = 0,78%
			PistolAttachments = 0,78%
			ShotgunAmmo       = 0,78%
			SMGAmmo           = 0,78%
			SMGAttachments    = 0,78%
			PistolAmmo        = 1,56%
			CivilianHeadgear  = 2,34%
			IndustrialItems   = 2,34%
			MedicalItems      = 2,34%
			Restraints        = 2,34%
			Shotguns          = 3,13%
			SmokeGrenades     = 3,13%
			Chemlights        = 3,91%
			CivilianBackpacks = 3,91%
			RoadFlares        = 3,91%
			SMG               = 3,91%
			CivilianItems     = 5,47%
			Pistols           = 7,81%
			Drinks            = 11,72%
			Food              = 11,72%
			Trash             = 23,44%
			2                 = 2,34%
		*/
		Shop[] = {"ShotgunAmmo", "Trash", "CivilianHeadgear", "CivilianItems", "Trash", "MedicalItems", "CivilianClothing", "CivilianBackpacks", "Shotguns", "Chemlights", "Pistols", "Drinks", "Pistols", "2", "Drinks", "2", "SMG", "Food", "Drinks", "MedicalItems", "Drinks", "Drinks", "IndustrialItems", "Food", "SmokeGrenades", "Trash", "SMG", "2", "Restraints", "IndustrialItems", "SMGAttachments", "Food", "RoadFlares", "Trash", "Trash", "Drinks", "SMG", "Trash", "Pistols", "Drinks", "CivilianBackpacks", "Trash", "Trash", "Trash", "Restraints", "Shotguns", "Food", "RoadFlares", "Food", "CivilianItems", "PistolAttachments", "Trash", "Trash", "Trash", "PistolAmmo", "Chemlights", "Drinks", "Trash", "CivilianBackpacks", "CivilianHeadgear", "Drinks", "Pistols", "Trash", "Trash", "Shotguns", "Restraints", "Food", "SMG", "Food", "RoadFlares", "PistolAmmo", "Food", "Pistols", "Trash", "Trash", "CivilianItems", "CivilianItems", "Chemlights", "Drinks", "CivilianBackpacks", "Food", "SMGAmmo", "RoadFlares", "MedicalItems", "Trash", "SMG", "Trash", "Pistols", "Pistols", "Drinks", "CivilianHeadgear", "Drinks", "CivilianVests", "Drinks", "CivilianItems", "Trash", "RoadFlares", "Food", "IndustrialItems", "CivilianBackpacks", "Trash", "Trash", "Trash", "Chemlights", "Food", "Food", "Pistols", "Food", "SmokeGrenades", "Food", "CivilianItems", "Trash", "SmokeGrenades", "Drinks", "Trash", "Trash", "Chemlights", "Trash", "SmokeGrenades", "Pistols", "Drinks", "CivilianItems", "Shotguns", "Trash", "Trash", "Trash", "Food", "Pistols"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4,17%
			RoadFlares      = 12,50%
			Vehicle         = 20,83%
			Trash           = 25,00%
			IndustrialItems = 33,33%
			Electronics     = 4,17%
		*/
		Industrial[] = {"Vehicle", "IndustrialItems", "Vehicle", "Trash", "Vehicle", "Trash", "Trash", "IndustrialItems", "Trash", "Electronics", "IndustrialItems", "RoadFlares", "IndustrialItems", "Vehicle", "IndustrialItems", "RoadFlares", "Vehicle", "Restraints", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "RoadFlares", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 3,70%
			Trash           = 37,04%
			IndustrialItems = 55,56%
			MedicalItems    = 3,70%
		*/
		Factories[] = {"IndustrialItems", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Electronics", "IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "MedicalItems", "IndustrialItems", "Trash", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 4,35%
			RoadFlares      = 13,04%
			IndustrialItems = 21,74%
			Trash           = 26,09%
			Vehicle         = 34,78%
		*/
		VehicleService[] = {"Restraints", "Vehicle", "Trash", "Vehicle", "IndustrialItems", "Trash", "RoadFlares", "IndustrialItems", "Vehicle", "Trash", "Trash", "Vehicle", "IndustrialItems", "RoadFlares", "Vehicle", "IndustrialItems", "Vehicle", "Trash", "Trash", "IndustrialItems", "RoadFlares", "Vehicle", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0,85%
			Ghillies          = 0,85%
			Rebreathers       = 0,43%
			Bipods            = 1,28%
			DLCAmmo           = 0,85%
			DLCOptics         = 0,85%
			DLCSupressor      = 0,85%
			LMGAmmo           = 2,13%
			MedicalItems      = 1,28%
			Restraints        = 0,85%
			SniperAmmo        = 0,85%
			SniperAttachments = 0,85%
			DLCRifles         = 1,28%
			DLCVests          = 2,13%
			GuerillaHeadgear  = 2,13%
			GuerillaVests     = 2,13%
			HandGrenades      = 1,28%
			HEGrenades        = 1,28%
			MilitaryBackpacks = 1,28%
			MilitaryHeadgear  = 1,28%
			MilitaryVests     = 1,28%
			RifleAmmo         = 2,13%
			RifleAttachments  = 1,28%
			SmokeGrenades     = 1,28%
			Snipers           = 1,28%
			UGLFlares         = 1,28%
			UGLSmokes         = 1,28%
			CivilianItems     = 2,13%
			GuerillaBackpacks = 2,13%
			GuerillaItems     = 2,13%
			LMG               = 2,55%
			Explosives        = 2,98%
			GuerillaClothing  = 2,98%
			MilitaryClothing  = 2,98%
			Rifles            = 4,26%
			Trash             = 42,55%
			EpicWeaponsAmmo   = 0,43%
			EpicWeapons       = 0,43%
		*/
		Military[] = {"GuerillaItems", "Rifles", "Trash", "DLCGhillies", "HandGrenades", "LMG", "UGLSmokes", "Trash", "Trash", "MilitaryClothing", "RifleAmmo", "Trash", "RifleAttachments", "LMG", "Rifles", "Snipers", "Trash", "Trash", "GuerillaVests", "Trash", "Rifles", "CivilianItems", "MilitaryHeadgear", "Trash", "Trash", "Snipers", "Trash", "Explosives", "Rifles", "Trash", "DLCVests", "Trash", "DLCAmmo", "Trash", "Explosives", "DLCRifles", "LMGAmmo", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "HEGrenades", "Trash", "DLCGhillies", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MilitaryBackpacks", "UGLFlares", "GuerillaVests", "HandGrenades", "Bipods", "HandGrenades", "Trash", "Trash", "MilitaryClothing", "DLCVests", "Explosives", "MilitaryVests", "Trash", "RifleAmmo", "Trash", "Trash", "Trash", "Trash", "Restraints", "Explosives", "Trash", "Trash", "DLCVests", "MilitaryClothing", "GuerillaBackpacks", "UGLSmokes", "Trash", "LMGAmmo", "Trash", "GuerillaClothing", "Trash", "Trash", "SniperAttachments", "Trash", "Trash", "EpicWeapons", "Rifles", "SmokeGrenades", "Trash", "Trash", "UGLFlares", "Trash", "LMG", "Trash", "MilitaryHeadgear", "Trash", "MedicalItems", "GuerillaClothing", "Explosives", "GuerillaBackpacks", "DLCAmmo", "Trash", "GuerillaVests", "MedicalItems", "DLCVests", "GuerillaBackpacks", "Trash", "SmokeGrenades", "RifleAmmo", "Trash", "Snipers", "Trash", "LMG", "RifleAmmo", "Bipods", "GuerillaItems", "GuerillaVests", "Trash", "Trash", "Ghillies", "Trash", "Trash", "CivilianItems", "Trash", "Rifles", "Trash", "Explosives", "Trash", "MilitaryBackpacks", "LMG", "Trash", "Trash", "Trash", "DLCRifles", "GuerillaVests", "MilitaryClothing", "Trash", "Trash", "Rebreathers", "CivilianItems", "LMGAmmo", "DLCOptics", "Trash", "Trash", "Trash", "UGLSmokes", "UGLFlares", "Trash", "Trash", "Trash", "DLCRifles", "Rifles", "Ghillies", "GuerillaClothing", "Trash", "Trash", "GuerillaHeadgear", "Trash", "Trash", "MilitaryVests", "RifleAttachments", "Trash", "MilitaryClothing", "GuerillaClothing", "DLCSupressor", "GuerillaHeadgear", "Trash", "EpicWeaponsAmmo", "Trash", "Trash", "Trash", "GuerillaItems", "SniperAttachments", "Rifles", "Rifles", "HEGrenades", "Trash", "Trash", "Trash", "Explosives", "DLCOptics", "Trash", "GuerillaBackpacks", "Trash", "CivilianItems", "Trash", "LMG", "RifleAttachments", "Trash", "MedicalItems", "Trash", "MilitaryBackpacks", "GuerillaHeadgear", "GuerillaHeadgear", "MilitaryVests", "Trash", "SmokeGrenades", "Trash", "Trash", "Trash", "Restraints", "MilitaryClothing", "GuerillaItems", "CivilianItems", "SniperAmmo", "Rifles", "Trash", "GuerillaClothing", "DLCSupressor", "Trash", "GuerillaClothing", "SniperAmmo", "DLCVests", "LMGAmmo", "MilitaryClothing", "Trash", "Trash", "LMGAmmo", "GuerillaClothing", "Trash", "GuerillaItems", "Trash", "Trash", "HEGrenades", "GuerillaBackpacks", "Trash", "GuerillaHeadgear", "Trash", "MilitaryHeadgear", "Trash", "Trash", "RifleAmmo", "Bipods"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 30,00%
			MedicalItems = 70,00%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 4,92%
			DLCOptics         = 1,64%
			DLCSupressor      = 3,28%
			SniperAmmo        = 4,92%
			SniperAttachments = 1,64%
			CivilianItems     = 3,28%
			Explosives        = 3,28%
			HandGrenades      = 3,28%
			MedicalItems      = 4,92%
			Restraints        = 1,64%
			DLCGhillies       = 6,56%
			Ghillies          = 6,56%
			MilitaryBackpacks = 8,20%
			MilitaryHeadgear  = 8,20%
			DLCRifles         = 16,39%
			Snipers           = 16,39%
			EpicWeaponsAmmo   = 3,28%
			EpicWeapons       = 1,64%
		*/
		Tourist[] = {"Snipers", "Snipers", "DLCRifles", "Snipers", "Ghillies", "MilitaryBackpacks", "Snipers", "SniperAmmo", "HandGrenades", "EpicWeapons", "DLCRifles", "HandGrenades", "DLCRifles", "Snipers", "Ghillies", "MilitaryHeadgear", "Snipers", "SniperAmmo", "DLCGhillies", "SniperAmmo", "MilitaryHeadgear", "Snipers", "Snipers", "MedicalItems", "Ghillies", "Explosives", "DLCRifles", "CivilianItems", "MedicalItems", "SniperAttachments", "DLCOptics", "DLCGhillies", "DLCSupressor", "DLCRifles", "Ghillies", "DLCRifles", "DLCAmmo", "EpicWeaponsAmmo", "DLCGhillies", "Snipers", "DLCAmmo", "DLCRifles", "DLCRifles", "MilitaryBackpacks", "EpicWeaponsAmmo", "DLCAmmo", "DLCGhillies", "MilitaryHeadgear", "MilitaryBackpacks", "DLCSupressor", "DLCRifles", "MilitaryHeadgear", "MilitaryHeadgear", "MedicalItems", "MilitaryBackpacks", "DLCRifles", "Snipers", "MilitaryBackpacks", "Explosives", "Restraints", "CivilianItems"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2,27%
			DLCOptics         = 2,27%
			DLCSupressor      = 2,27%
			SniperAmmo        = 2,27%
			SniperAttachments = 2,27%
			EpicWeapons       = 4,55%
			HandGrenades      = 4,55%
			MedicalItems      = 4,55%
			Restraints        = 4,55%
			DLCGhillies       = 6,82%
			Ghillies          = 6,82%
			Explosives        = 11,36%
			MilitaryBackpacks = 11,36%
			MilitaryHeadgear  = 11,36%
			DLCRifles         = 11,36%
			Snipers           = 11,36%
		*/
		Radiation[] = {"Snipers", "DLCRifles", "Snipers", "Restraints", "MilitaryBackpacks", "DLCGhillies", "MilitaryHeadgear", "DLCRifles", "Ghillies", "Explosives", "MedicalItems", "DLCGhillies", "MilitaryHeadgear", "MedicalItems", "DLCSupressor", "MilitaryHeadgear", "Snipers", "MilitaryHeadgear", "EpicWeapons", "DLCRifles", "Snipers", "Ghillies", "EpicWeapons", "HandGrenades", "Explosives", "MilitaryBackpacks", "DLCRifles", "MilitaryBackpacks", "Explosives", "DLCOptics", "DLCGhillies", "MilitaryHeadgear", "Ghillies", "Restraints", "DLCAmmo", "SniperAmmo", "Snipers", "Explosives", "Explosives", "MilitaryBackpacks", "DLCRifles", "HandGrenades", "MilitaryBackpacks", "SniperAttachments"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 1,11%
			Exile_Item_CanOpener         = 1,85%
			Exile_Item_Matches           = 1,85%
			Exile_Item_EMRE              = 1,11%
			Exile_Item_GloriousKnakworst = 2,21%
			Exile_Item_Surstromming      = 2,58%
			Exile_Item_SausageGravy      = 2,58%
			Exile_Item_ChristmasTinner   = 2,58%
			Exile_Item_MacasCheese       = 2,58%
			Exile_Item_BBQSandwich       = 2,58%
			Exile_Item_CatFood           = 2,58%
			Exile_Item_Dogfood           = 2,58%
			Exile_Item_BeefParts         = 2,58%
			Exile_Item_Cheathas          = 2,58%
			Exile_Item_DsNuts            = 2,58%
			Exile_Item_Noodles           = 2,58%
			Exile_Item_CockONut          = 2,95%
			Exile_Item_SeedAstics        = 2,95%
			Exile_Item_Raisins           = 3,32%
			Exile_Item_Moobar            = 3,32%
			Exile_Item_InstantCoffee     = 4,06%
			Exitem_bakedbeans            = 2,58%
			Exitem_pumpkin               = 1,85%
			Exitem_tuna                  = 2,58%
			Exitem_tacticalbacon         = 2,58%
			Exitem_spaghetti             = 2,58%
			Exitem_spam                  = 2,58%
			Exitem_meat                  = 2,58%
			Exitem_rice                  = 2,58%
			Exitem_cereal_bloodsucker    = 2,58%
			Exitem_cereal_kush           = 2,58%
			Exitem_cereal_squares        = 2,58%
			Exitem_cereal_crunchin       = 2,58%
			Exitem_cereal_stars          = 2,58%
			Exitem_cereal_honeyhoops     = 2,58%
			Exitem_cereal_rick           = 2,58%
			Exitem_meatballs             = 2,58%
			Exitem_orange                = 2,58%
			Exitem_hotdogs               = 2,58%
			Exitem_container_beef        = 0,74%
			Exitem_container_soup        = 0,37%
		*/
		Food[] = {"Exitem_meat", "Exile_Item_BBQSandwich", "Exitem_spam", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exile_Item_CookingPot", "Exile_Item_MacasCheese", "Exitem_cereal_bloodsucker", "Exitem_cereal_bloodsucker", "Exitem_cereal_kush", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_ChristmasTinner", "Exitem_bakedbeans", "Exitem_cereal_squares", "Exile_Item_CatFood", "Exile_Item_BeefParts", "Exitem_meat", "Exile_Item_CockONut", "Exitem_spam", "Exile_Item_Surstromming", "Exitem_orange", "Exile_Item_InstantCoffee", "Exitem_cereal_squares", "Exile_Item_Noodles", "Exitem_cereal_bloodsucker", "Exile_Item_Dogfood", "Exile_Item_Moobar", "Exitem_meat", "Exitem_cereal_crunchin", "Exile_Item_CockONut", "Exitem_tuna", "Exitem_meatballs", "Exile_Item_ChristmasTinner", "Exitem_cereal_squares", "Exile_Item_CatFood", "Exile_Item_BBQSandwich", "Exitem_meat", "Exitem_cereal_kush", "Exitem_tacticalbacon", "Exile_Item_Moobar", "Exile_Item_Surstromming", "Exitem_cereal_rick", "Exitem_pumpkin", "Exile_Item_MacasCheese", "Exitem_cereal_kush", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exitem_cereal_rick", "Exitem_spam", "Exitem_rice", "Exile_Item_CatFood", "Exitem_cereal_honeyhoops", "Exitem_cereal_squares", "Exile_Item_SeedAstics", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exitem_bakedbeans", "Exile_Item_Cheathas", "Exile_Item_EMRE", "Exile_Item_Cheathas", "Exitem_tacticalbacon", "Exile_Item_DsNuts", "Exile_Item_SausageGravy", "Exitem_bakedbeans", "Exitem_tuna", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exitem_cereal_stars", "Exile_Item_CookingPot", "Exile_Item_Matches", "Exile_Item_Matches", "Exitem_orange", "Exile_Item_CatFood", "Exile_Item_Noodles", "Exile_Item_Cheathas", "Exile_Item_MacasCheese", "Exile_Item_BeefParts", "Exile_Item_Raisins", "Exitem_meatballs", "Exitem_spaghetti", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exitem_tuna", "Exile_Item_Noodles", "Exile_Item_CookingPot", "Exile_Item_InstantCoffee", "Exitem_hotdogs", "Exitem_rice", "Exitem_tacticalbacon", "Exitem_cereal_rick", "Exile_Item_GloriousKnakworst", "Exile_Item_Surstromming", "Exitem_rice", "Exitem_meatballs", "Exile_Item_ChristmasTinner", "Exile_Item_InstantCoffee", "Exitem_meatballs", "Exile_Item_Matches", "Exitem_cereal_bloodsucker", "Exitem_orange", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exitem_meat", "Exitem_tacticalbacon", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exitem_rice", "Exitem_cereal_bloodsucker", "Exitem_hotdogs", "Exile_Item_SausageGravy", "Exitem_cereal_kush", "Exitem_spaghetti", "Exile_Item_CockONut", "Exitem_pumpkin", "Exitem_cereal_rick", "Exile_Item_EMRE", "Exile_Item_Moobar", "Exitem_cereal_bloodsucker", "Exitem_spam", "Exile_Item_SeedAstics", "Exitem_tacticalbacon", "Exile_Item_Matches", "Exitem_spam", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exitem_cereal_stars", "Exile_Item_CatFood", "Exitem_hotdogs", "Exile_Item_CanOpener", "Exitem_cereal_stars", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_SeedAstics", "Exitem_cereal_rick", "Exile_Item_InstantCoffee", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_CockONut", "Exile_Item_Surstromming", "Exitem_container_beef", "Exile_Item_Moobar", "Exitem_orange", "Exitem_hotdogs", "Exitem_spaghetti", "Exile_Item_Dogfood", "Exile_Item_Raisins", "Exitem_bakedbeans", "Exile_Item_Raisins", "Exitem_cereal_crunchin", "Exile_Item_DsNuts", "Exitem_hotdogs", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Cheathas", "Exile_Item_BeefParts", "Exitem_pumpkin", "Exile_Item_GloriousKnakworst", "Exitem_cereal_squares", "Exitem_cereal_kush", "Exitem_rice", "Exile_Item_MacasCheese", "Exitem_pumpkin", "Exitem_cereal_crunchin", "Exitem_tuna", "Exitem_tuna", "Exile_Item_GloriousKnakworst", "Exile_Item_DsNuts", "Exitem_meatballs", "Exitem_tuna", "Exile_Item_SausageGravy", "Exitem_spaghetti", "Exitem_orange", "Exile_Item_CanOpener", "Exile_Item_Raisins", "Exitem_meatballs", "Exile_Item_Noodles", "Exile_Item_CanOpener", "Exile_Item_CockONut", "Exitem_orange", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exitem_pumpkin", "Exitem_rice", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_DsNuts", "Exitem_cereal_rick", "Exile_Item_CanOpener", "Exitem_cereal_crunchin", "Exitem_meatballs", "Exitem_cereal_squares", "Exile_Item_SausageGravy", "Exile_Item_CatFood", "Exitem_tacticalbacon", "Exitem_cereal_stars", "Exitem_container_beef", "Exile_Item_MacasCheese", "Exile_Item_GloriousKnakworst", "Exile_Item_Moobar", "Exitem_cereal_crunchin", "Exitem_cereal_crunchin", "Exitem_cereal_rick", "Exitem_cereal_honeyhoops", "Exile_Item_GloriousKnakworst", "Exile_Item_Cheathas", "Exitem_spam", "Exitem_hotdogs", "Exitem_spaghetti", "Exitem_cereal_stars", "Exitem_spam", "Exile_Item_CockONut", "Exitem_container_soup", "Exile_Item_Noodles", "Exile_Item_MacasCheese", "Exile_Item_Raisins", "Exile_Item_CanOpener", "Exile_Item_ChristmasTinner", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_DsNuts", "Exile_Item_Matches", "Exile_Item_SeedAstics", "Exile_Item_SausageGravy", "Exile_Item_EMRE", "Exitem_hotdogs", "Exile_Item_SeedAstics", "Exitem_cereal_honeyhoops", "Exitem_tacticalbacon", "Exitem_bakedbeans", "Exitem_meat", "Exitem_cereal_bloodsucker", "Exile_Item_ChristmasTinner", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exitem_cereal_kush", "Exitem_tuna", "Exitem_cereal_kush", "Exitem_cereal_honeyhoops", "Exitem_cereal_honeyhoops", "Exile_Item_DsNuts", "Exile_Item_CockONut", "Exile_Item_BeefParts", "Exitem_orange", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_Dogfood", "Exitem_cereal_honeyhoops", "Exitem_cereal_honeyhoops", "Exitem_cereal_crunchin", "Exitem_cereal_stars", "Exile_Item_Raisins", "Exitem_meat", "Exitem_bakedbeans", "Exitem_spaghetti", "Exitem_spaghetti", "Exitem_rice", "Exile_Item_CatFood", "Exitem_cereal_squares", "Exitem_cereal_stars", "Exile_Item_MacasCheese", "Exitem_bakedbeans", "Exile_Item_ChristmasTinner"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 2,86%
			Exile_Item_EnergyDrink             = 2,86%
			Exile_Item_PlasticBottleFreshWater = 2,86%
			Exile_Item_PowerDrink              = 2,86%
			Exile_Item_MountainDupe            = 5,71%
			Exile_Item_ChocolateMilk           = 8,57%
			Exile_Item_PlasticBottleDirtyWater = 14,29%
			Exitem_canteen_dirty               = 14,29%
			Exitem_canteen_salt                = 8,57%
			Exitem_canteen_coffee              = 2,86%
			Exitem_canteen_fresh               = 5,71%
			Exitem_canteen                     = 11,43%
			Exitem_spirit                      = 5,71%
			Exitem_redgull                     = 5,71%
			Exitem_franta                      = 5,71%
		*/
		Drinks[] = {"Exitem_canteen_fresh", "Exitem_canteen_salt", "Exitem_canteen", "Exitem_canteen_salt", "Exitem_canteen_dirty", "Exile_Item_ChocolateMilk", "Exile_Item_Beer", "Exitem_spirit", "Exitem_canteen", "Exitem_canteen_dirty", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exitem_canteen", "Exitem_redgull", "Exile_Item_EnergyDrink", "Exitem_franta", "Exitem_canteen_dirty", "Exitem_canteen_dirty", "Exile_Item_PlasticBottleDirtyWater", "Exitem_spirit", "Exitem_franta", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exitem_canteen_salt", "Exile_Item_ChocolateMilk", "Exitem_redgull", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_MountainDupe", "Exile_Item_PowerDrink", "Exitem_canteen_coffee", "Exitem_canteen", "Exitem_canteen_dirty", "Exitem_canteen_fresh", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk"};

		/*
			Percental Item Spawn Chances of Pistols:

			hgun_P07_khk_F               = 5,56%
			hgun_P07_blk_F               = 5,56%
			hgun_Pistol_01_F             = 5,56%
			hgun_Pistol_heavy_01_F       = 5,56%
			hgun_Pistol_heavy_01_Black_F = 5,56%
			hgun_Pistol_heavy_02_F       = 5,56%
			hgun_ACPC2_F                 = 11,11%
			hgun_C1911_F                 = 11,11%
			hgun_P07_F                   = 11,11%
			hgun_Rook40_F                = 11,11%
			hgun_P99_F                   = 5,56%
			hgun_P99_blk_F               = 5,56%
			hgun_P99_khk_F               = 5,56%
			hgun_Mk26_F                  = 5,56%
		*/
		Pistols[] = {"hgun_Pistol_heavy_01_F", "hgun_P99_blk_F", "hgun_P99_khk_F", "hgun_P07_khk_F", "hgun_Pistol_heavy_01_Black_F", "hgun_ACPC2_F", "hgun_Mk26_F", "hgun_P07_blk_F", "hgun_P99_F", "hgun_C1911_F", "hgun_P07_F", "hgun_ACPC2_F", "hgun_C1911_F", "hgun_P07_F", "hgun_Pistol_heavy_02_F", "hgun_Rook40_F", "hgun_Rook40_F", "hgun_Pistol_01_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F  = 4,76%
			6Rnd_RedSignal_F    = 4,76%
			16Rnd_9x21_Mag      = 4,76%
			6Rnd_45ACP_Cylinder = 9,52%
			10Rnd_9x21_Mag      = 19,05%
			11Rnd_45ACP_Mag     = 19,05%
			30Rnd_9x21_Mag      = 19,05%
			9Rnd_45ACP_Mag      = 19,05%
		*/
		PistolAmmo[] = {"6Rnd_45ACP_Cylinder", "10Rnd_9x21_Mag", "16Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "10Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "6Rnd_GreenSignal_F", "10Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "10Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "6Rnd_RedSignal_F", "30Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD             = 10,00%
			optic_Yorris          = 10,00%
			muzzle_snds_acp       = 20,00%
			muzzle_snds_L         = 20,00%
			muzzle_mzls_L         = 10,00%
			muzzle_mzls_acp       = 10,00%
			acc_flashlight_pistol = 20,00%
		*/
		PistolAttachments[] = {"acc_flashlight_pistol", "muzzle_snds_acp", "muzzle_snds_L", "muzzle_snds_L", "acc_flashlight_pistol", "muzzle_snds_acp", "muzzle_mzls_L", "muzzle_mzls_acp", "optic_MRD", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of Shotguns:

			sgun_M4_F        = 41,67%
			sgun_KSG_F       = 25,00%
			sgun_KSG_black_F = 25,00%
			sgun_AA40_F      = 8,33%
		*/
		Shotguns[] = {"sgun_KSG_F", "sgun_KSG_black_F", "sgun_M4_F", "sgun_M4_F", "sgun_KSG_F", "sgun_KSG_black_F", "sgun_M4_F", "sgun_AA40_F", "sgun_M4_F", "sgun_KSG_F", "sgun_M4_F", "sgun_KSG_black_F"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			8Rnd_12Gauge_Pellets  = 34,78%
			8Rnd_12Gauge_Slug     = 30,43%
			20Rnd_12Gauge_Pellets = 17,39%
			20Rnd_12Gauge_Slug    = 13,04%
			20Rnd_12Gauge_HE      = 4,35%
		*/
		ShotgunAmmo[] = {"20Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "20Rnd_12Gauge_HE", "8Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Slug", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "20Rnd_12Gauge_Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 14,29%
			SMG_01_Black_F = 14,29%
			SMG_01_khk_F   = 14,29%
			SMG_02_F       = 14,29%
			SMG_05_F       = 14,29%
			hgun_PDW2000_F = 28,57%
		*/
		SMG[] = {"SMG_05_F", "hgun_PDW2000_F", "SMG_01_khk_F", "SMG_02_F", "SMG_01_F", "hgun_PDW2000_F", "SMG_01_Black_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16,67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16,67%
			30Rnd_9x21_Mag_SMG_02               = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16,67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Red"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 6,25%
			optic_Holosight_smg_blk_F = 6,25%
			optic_ACO_grn_smg         = 6,25%
			optic_Aco_smg             = 6,25%
			optic_ACO_grn             = 6,25%
			optic_Aco                 = 6,25%
			muzzle_mzls_smg_01        = 6,25%
			optic_cco                 = 6,25%
			optic_srs                 = 6,25%
			optic_dcl                 = 6,25%
			muzzle_mzls_L             = 6,25%
			muzzle_mzls_acp           = 6,25%
			muzzle_snds_L             = 6,25%
			muzzle_snds_acp           = 6,25%
			acc_flashlight            = 6,25%
			acc_pointer_IR            = 6,25%
		*/
		SMGAttachments[] = {"muzzle_mzls_L", "optic_Holosight_smg_blk_F", "optic_Holosight_smg", "optic_ACO_grn", "muzzle_snds_acp", "muzzle_mzls_acp", "optic_ACO_grn_smg", "muzzle_mzls_smg_01", "optic_Aco", "optic_dcl", "acc_flashlight", "optic_cco", "optic_Aco_smg", "muzzle_snds_L", "optic_srs", "acc_pointer_IR"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F      = 0,63%
			arifle_Mk20_GL_F        = 0,63%
			arifle_MX_GL_Black_F    = 0,63%
			arifle_MX_GL_F          = 0,63%
			arifle_MXM_F            = 1,26%
			arifle_TRG21_GL_F       = 1,89%
			arifle_AK12_GL_F        = 1,26%
			arifle_AKM_F            = 1,26%
			arifle_AKM_FL_F         = 1,26%
			arifle_AKS_F            = 1,26%
			arifle_ARX_blk_F        = 0,63%
			arifle_ARX_ghex_F       = 0,63%
			arifle_ARX_hex_F        = 0,63%
			arifle_CTAR_blk_F       = 1,26%
			arifle_CTAR_ghex_F      = 1,26%
			arifle_CTAR_GL_blk_F    = 1,26%
			arifle_CTAR_hex_F       = 1,26%
			arifle_CTARS_blk_F      = 1,26%
			arifle_CTARS_ghex_F     = 1,26%
			arifle_CTARS_hex_F      = 1,26%
			arifle_Katiba_F         = 1,26%
			arifle_Mk20_F           = 1,26%
			arifle_Mk20C_F          = 1,26%
			arifle_MX_Black_F       = 1,26%
			arifle_MX_F             = 1,26%
			arifle_MXC_Black_F      = 1,26%
			arifle_MXC_F            = 1,26%
			arifle_MXM_Black_F      = 1,26%
			arifle_SDAR_F           = 1,26%
			arifle_SPAR_01_blk_F    = 1,26%
			arifle_SPAR_01_GL_blk_F = 1,26%
			arifle_SPAR_01_GL_khk_F = 1,26%
			arifle_SPAR_01_GL_snd_F = 1,26%
			arifle_SPAR_01_khk_F    = 1,26%
			arifle_SPAR_01_snd_F    = 1,26%
			arifle_SPAR_02_blk_F    = 1,26%
			arifle_SPAR_02_khk_F    = 1,26%
			arifle_SPAR_02_snd_F    = 1,26%
			arifle_SPAR_03_blk_F    = 0,63%
			arifle_SPAR_03_khk_F    = 0,63%
			arifle_SPAR_03_snd_F    = 0,63%
			arifle_TRG20_F          = 1,26%
			arifle_TRG21_F          = 1,26%
			arifle_Mk16_CQC_F       = 1,26%
			arifle_Mk16_CQC_blk_F   = 1,26%
			arifle_Mk16_CQC_khk_F   = 1,26%
			arifle_Mk16_F           = 1,26%
			arifle_Mk16_blk_F       = 1,26%
			arifle_Mk16_khk_F       = 1,26%
			arifle_Mk16_GL_F        = 0,63%
			arifle_Mk16_GL_blk_F    = 0,63%
			arifle_Mk16_GL_khk_F    = 0,63%
			arifle_SA80_F           = 1,26%
			arifle_SA80_blk_F       = 1,26%
			arifle_SA80_camo_F      = 1,26%
			arifle_SA80_GL_F        = 0,63%
			arifle_SA80_GL_blk_F    = 0,63%
			arifle_SA80_GL_camo_F   = 0,63%
			arifle_Mk17_CQC_F       = 1,26%
			arifle_Mk17_CQC_blk_F   = 1,26%
			arifle_Mk17_CQC_khk_F   = 1,26%
			arifle_Mk17_F           = 1,26%
			arifle_Mk17_blk_F       = 1,26%
			arifle_Mk17_khk_F       = 1,26%
			arifle_Mk17_DMR_F       = 0,63%
			arifle_Mk17_DMR_blk_F   = 0,63%
			arifle_Mk17_DMR_khk_F   = 0,63%
			arifle_Mk17_GL_F        = 0,63%
			arifle_Mk17_GL_blk_F    = 0,63%
			arifle_Mk17_GL_khk_F    = 0,63%
			arifle_MXM_khk_F        = 1,89%
			arifle_MX_GL_khk_F      = 1,89%
			arifle_AK12_F           = 1,89%
			Exile_Weapon_CZ550      = 3,14%
			srifle_CZ550_shit_1     = 3,14%
			srifle_CZ550_shit_2     = 3,14%
			arifle_MX_khk_F         = 1,89%
			arifle_MXC_khk_F        = 1,89%
			Exile_Weapon_LeeEnfield = 6,29%
		*/
		Rifles[] = {"arifle_SPAR_02_blk_F", "arifle_MX_khk_F", "arifle_Mk17_CQC_F", "arifle_SPAR_01_GL_snd_F", "arifle_MX_GL_khk_F", "arifle_Mk17_GL_khk_F", "Exile_Weapon_LeeEnfield", "arifle_CTAR_GL_blk_F", "arifle_MXM_khk_F", "arifle_MXC_khk_F", "arifle_MXC_Black_F", "Exile_Weapon_CZ550", "srifle_CZ550_shit_2", "arifle_CTAR_ghex_F", "arifle_CTARS_blk_F", "arifle_Mk17_CQC_khk_F", "arifle_Mk17_F", "Exile_Weapon_CZ550", "arifle_Mk16_CQC_khk_F", "arifle_SPAR_02_snd_F", "arifle_SPAR_01_GL_snd_F", "arifle_CTAR_GL_blk_F", "arifle_Mk16_F", "srifle_CZ550_shit_2", "arifle_CTARS_blk_F", "arifle_Mk16_blk_F", "arifle_Mk16_blk_F", "arifle_MXM_F", "arifle_Mk16_GL_F", "arifle_CTAR_blk_F", "arifle_MX_khk_F", "arifle_SPAR_02_blk_F", "srifle_CZ550_shit_1", "arifle_SA80_GL_F", "arifle_MX_GL_F", "arifle_TRG21_F", "srifle_CZ550_shit_1", "arifle_MXM_Black_F", "arifle_Mk17_CQC_F", "arifle_AK12_F", "arifle_Mk16_F", "arifle_MX_F", "arifle_AKM_FL_F", "arifle_SA80_F", "arifle_Mk20_GL_F", "arifle_Mk17_DMR_blk_F", "arifle_MXM_khk_F", "srifle_CZ550_shit_1", "arifle_Mk16_CQC_blk_F", "arifle_SPAR_01_GL_blk_F", "arifle_MX_khk_F", "arifle_SDAR_F", "arifle_MXC_Black_F", "srifle_CZ550_shit_1", "arifle_MXC_khk_F", "arifle_SPAR_01_snd_F", "arifle_Mk20C_F", "arifle_CTAR_hex_F", "arifle_SPAR_02_khk_F", "arifle_AKM_F", "Exile_Weapon_CZ550", "arifle_CTARS_ghex_F", "arifle_TRG21_F", "Exile_Weapon_LeeEnfield", "arifle_ARX_ghex_F", "arifle_CTARS_hex_F", "arifle_MXM_khk_F", "arifle_Mk17_DMR_F", "arifle_MXM_F", "arifle_CTAR_blk_F", "arifle_TRG20_F", "arifle_Mk17_khk_F", "arifle_Mk17_CQC_blk_F", "arifle_Mk16_GL_khk_F", "Exile_Weapon_CZ550", "arifle_CTAR_hex_F", "Exile_Weapon_LeeEnfield", "arifle_MXC_F", "arifle_AK12_GL_F", "arifle_SDAR_F", "arifle_MX_F", "arifle_Mk17_GL_F", "arifle_SA80_camo_F", "arifle_SPAR_02_snd_F", "arifle_SPAR_03_blk_F", "arifle_TRG20_F", "srifle_CZ550_shit_2", "arifle_ARX_blk_F", "arifle_SPAR_03_khk_F", "arifle_AKS_F", "arifle_SA80_blk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_GL_khk_F", "Exile_Weapon_CZ550", "arifle_MX_GL_Black_F", "arifle_CTARS_hex_F", "srifle_CZ550_shit_1", "arifle_SPAR_01_blk_F", "arifle_AK12_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_blk_F", "arifle_Katiba_F", "arifle_Katiba_GL_F", "arifle_Mk17_blk_F", "arifle_ARX_hex_F", "arifle_SPAR_01_khk_F", "arifle_SA80_F", "arifle_MXC_khk_F", "arifle_Mk20_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_01_GL_blk_F", "arifle_Mk17_DMR_khk_F", "arifle_Katiba_F", "arifle_MXM_Black_F", "arifle_MX_Black_F", "arifle_Mk16_CQC_F", "arifle_SA80_camo_F", "arifle_Mk17_khk_F", "arifle_Mk16_CQC_khk_F", "arifle_CTAR_ghex_F", "arifle_Mk16_CQC_blk_F", "srifle_CZ550_shit_2", "arifle_TRG21_GL_F", "arifle_AK12_GL_F", "arifle_Mk17_CQC_blk_F", "arifle_Mk17_CQC_khk_F", "Exile_Weapon_LeeEnfield", "arifle_AKS_F", "srifle_CZ550_shit_2", "arifle_SA80_GL_blk_F", "arifle_Mk17_GL_blk_F", "arifle_SA80_blk_F", "arifle_Mk20C_F", "arifle_SPAR_01_GL_khk_F", "arifle_TRG21_GL_F", "arifle_MX_GL_khk_F", "arifle_SPAR_02_khk_F", "arifle_SPAR_01_snd_F", "arifle_Mk17_blk_F", "arifle_SPAR_03_snd_F", "arifle_TRG21_GL_F", "arifle_Mk17_F", "arifle_AKM_F", "arifle_MX_GL_khk_F", "Exile_Weapon_LeeEnfield", "arifle_AK12_F", "arifle_SA80_GL_camo_F", "arifle_MXC_F", "Exile_Weapon_LeeEnfield", "arifle_Mk16_khk_F", "arifle_AKM_FL_F", "arifle_Mk16_khk_F", "arifle_MX_Black_F", "arifle_CTARS_ghex_F", "Exile_Weapon_LeeEnfield", "arifle_Mk16_GL_blk_F", "arifle_Mk20_F", "arifle_Mk16_CQC_F", "Exile_Weapon_LeeEnfield"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                   = 3,45%
			30Rnd_556x45_Stanag                   = 3,45%
			30Rnd_556x45_Stanag_green             = 3,45%
			30Rnd_556x45_Stanag_red               = 3,45%
			30Rnd_556x45_Stanag_Tracer_Green      = 3,45%
			30Rnd_556x45_Stanag_Tracer_Red        = 3,45%
			30Rnd_556x45_Stanag_Tracer_Yellow     = 3,45%
			30Rnd_65x39_caseless_green            = 3,45%
			30Rnd_65x39_caseless_green_mag_Tracer = 3,45%
			30Rnd_65x39_caseless_mag              = 3,45%
			30Rnd_65x39_caseless_mag_Tracer       = 3,45%
			Exile_Magazine_10Rnd_303              = 17,24%
			Exile_Magazine_5Rnd_22LR              = 3,45%
			30Rnd_762x39_Mag_F                    = 3,45%
			30Rnd_762x39_Mag_Green_F              = 3,45%
			30Rnd_762x39_Mag_Tracer_F             = 3,45%
			30Rnd_762x39_Mag_Tracer_Green_F       = 3,45%
			10Rnd_50BW_Mag_F                      = 3,45%
			30Rnd_580x42_Mag_F                    = 3,45%
			30Rnd_580x42_Mag_Tracer_F             = 3,45%
			100Rnd_580x42_Mag_F                   = 3,45%
			100Rnd_580x42_Mag_Tracer_F            = 3,45%
			150Rnd_556x45_Drum_Mag_F              = 3,45%
			150Rnd_556x45_Drum_Mag_Tracer_F       = 3,45%
			20Rnd_762x51_Mag                      = 3,45%
		*/
		RifleAmmo[] = {"Exile_Magazine_10Rnd_303", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_762x39_Mag_F", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "100Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_F", "30Rnd_762x39_Mag_Tracer_F", "Exile_Magazine_5Rnd_22LR", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_red", "Exile_Magazine_10Rnd_303", "100Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_F", "30Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_Tracer_Green", "20Rnd_762x51_Mag", "20Rnd_556x45_UW_mag", "10Rnd_50BW_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_65x39_caseless_mag", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_mag_Tracer", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_762x39_Mag_F", "30Rnd_556x45_Stanag", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag_green", "150Rnd_556x45_Drum_Mag_F", "20Rnd_556x45_UW_mag", "20Rnd_762x51_Mag", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_762x39_Mag_Green_F", "30Rnd_556x45_Stanag_Tracer_Yellow"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 2,15%
			muzzle_snds_H            = 2,15%
			muzzle_snds_H_khk_F      = 2,15%
			muzzle_snds_H_snd_F      = 2,15%
			muzzle_snds_58_blk_F     = 2,15%
			muzzle_snds_m_khk_F      = 2,15%
			muzzle_snds_m_snd_F      = 2,15%
			muzzle_snds_58_wdm_F     = 2,15%
			muzzle_snds_65_TI_blk_F  = 2,15%
			muzzle_snds_65_TI_hex_F  = 2,15%
			muzzle_snds_65_TI_ghex_F = 2,15%
			muzzle_snds_H_MG_blk_F   = 2,15%
			muzzle_snds_H_MG_khk_F   = 2,15%
			optic_Arco               = 2,15%
			optic_Arco_blk_F         = 2,15%
			optic_Arco_ghex_F        = 2,15%
			optic_Hamr               = 2,15%
			optic_Hamr_khk_F         = 2,15%
			optic_Holosight          = 2,15%
			optic_Holosight_blk_F    = 2,15%
			optic_Holosight_khk_F    = 2,15%
			acc_flashlight           = 2,15%
			acc_pointer_IR           = 2,15%
			optic_MRCO               = 2,15%
			optic_DMS                = 2,15%
			optic_DMS_ghex_F         = 2,15%
			optic_ERCO_blk_F         = 2,15%
			optic_ERCO_khk_F         = 2,15%
			optic_ERCO_snd_F         = 2,15%
			optic_NVS                = 1,08%
			muzzle_mzls_M            = 2,15%
			muzzle_mzls_58_F         = 2,15%
			muzzle_mzls_H            = 2,15%
			muzzle_mzls_B            = 2,15%
			optic_ACOG               = 2,15%
			optic_dcl                = 1,08%
			optic_cco                = 3,23%
			optic_srs                = 2,15%
			bipod_01_F_snd           = 2,15%
			bipod_01_F_blk           = 2,15%
			bipod_01_F_mtp           = 2,15%
			bipod_02_F_blk           = 2,15%
			bipod_02_F_tan           = 2,15%
			bipod_02_F_hex           = 2,15%
			bipod_03_F_blk           = 2,15%
			bipod_03_F_oli           = 2,15%
			bipod_01_F_khk           = 2,15%
		*/
		RifleAttachments[] = {"muzzle_mzls_58_F", "optic_ERCO_khk_F", "bipod_02_F_hex", "optic_ERCO_blk_F", "muzzle_snds_58_wdm_F", "acc_flashlight", "muzzle_snds_65_TI_hex_F", "bipod_02_F_hex", "bipod_01_F_mtp", "optic_Hamr", "optic_DMS", "optic_Arco_ghex_F", "optic_ERCO_khk_F", "muzzle_snds_58_blk_F", "optic_MRCO", "bipod_01_F_snd", "muzzle_snds_H_khk_F", "bipod_01_F_khk", "muzzle_mzls_H", "bipod_01_F_mtp", "optic_Hamr_khk_F", "muzzle_snds_H_MG_khk_F", "acc_pointer_IR", "muzzle_snds_58_wdm_F", "bipod_01_F_snd", "muzzle_snds_58_blk_F", "optic_Holosight", "bipod_02_F_blk", "optic_cco", "muzzle_snds_m_snd_F", "optic_srs", "bipod_02_F_blk", "bipod_03_F_oli", "acc_pointer_IR", "optic_Arco_blk_F", "muzzle_mzls_M", "optic_NVS", "optic_Hamr", "optic_Arco_ghex_F", "muzzle_snds_H_MG_khk_F", "optic_Holosight_khk_F", "optic_cco", "muzzle_snds_H_MG_blk_F", "optic_Holosight_khk_F", "bipod_01_F_khk", "bipod_03_F_blk", "muzzle_snds_65_TI_ghex_F", "optic_DMS_ghex_F", "muzzle_snds_H_snd_F", "optic_dcl", "optic_Holosight", "muzzle_snds_M", "muzzle_mzls_B", "optic_ACOG", "muzzle_mzls_B", "muzzle_snds_H_snd_F", "optic_cco", "muzzle_snds_H_MG_blk_F", "bipod_01_F_blk", "optic_ACOG", "acc_flashlight", "muzzle_mzls_H", "bipod_01_F_blk", "muzzle_snds_m_khk_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_65_TI_blk_F", "optic_Holosight_blk_F", "bipod_03_F_oli", "optic_Arco", "muzzle_snds_H", "muzzle_snds_M", "bipod_02_F_tan", "optic_DMS_ghex_F", "optic_Arco", "optic_MRCO", "optic_Arco_blk_F", "optic_ERCO_snd_F", "muzzle_mzls_M", "muzzle_snds_H_khk_F", "optic_DMS", "muzzle_mzls_58_F", "optic_ERCO_snd_F", "optic_Hamr_khk_F", "muzzle_snds_H", "optic_ERCO_blk_F", "optic_Holosight_blk_F", "muzzle_snds_m_khk_F", "bipod_03_F_blk", "muzzle_snds_65_TI_blk_F", "muzzle_snds_65_TI_hex_F", "optic_srs", "muzzle_snds_m_snd_F", "bipod_02_F_tan"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F   = 4,55%
			arifle_MX_SW_F         = 4,55%
			LMG_Mk200_F            = 4,55%
			LMG_Mk200_blk_F        = 4,55%
			LMG_Mk200_khk_F        = 4,55%
			LMG_Mk200_plain_F      = 4,55%
			LMG_Zafir_F            = 4,55%
			LMG_Zafir_Black_F      = 4,55%
			LMG_Zafir_ghex_F       = 4,55%
			LMG_03_F               = 4,55%
			arifle_SA80_LSW_F      = 9,09%
			arifle_SA80_LSW_blk_F  = 9,09%
			arifle_SA80_LSW_camo_F = 9,09%
			arifle_Mk16_LMG_F      = 9,09%
			arifle_Mk16_LMG_blk_F  = 9,09%
			arifle_Mk16_LMG_khk_F  = 9,09%
		*/
		LMG[] = {"LMG_Mk200_blk_F", "arifle_Mk16_LMG_khk_F", "arifle_Mk16_LMG_blk_F", "LMG_Mk200_F", "arifle_Mk16_LMG_khk_F", "arifle_SA80_LSW_camo_F", "LMG_Mk200_plain_F", "LMG_Zafir_Black_F", "LMG_Zafir_ghex_F", "arifle_SA80_LSW_blk_F", "arifle_SA80_LSW_blk_F", "LMG_03_F", "arifle_MX_SW_F", "arifle_SA80_LSW_F", "arifle_Mk16_LMG_blk_F", "arifle_MX_SW_Black_F", "LMG_Mk200_khk_F", "arifle_SA80_LSW_camo_F", "arifle_Mk16_LMG_F", "arifle_Mk16_LMG_F", "arifle_SA80_LSW_F", "LMG_Zafir_F"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag         = 5,71%
			100Rnd_65x39_caseless_mag_Tracer  = 8,57%
			150Rnd_762x54_Box                 = 8,57%
			150Rnd_762x54_Box_Tracer          = 2,86%
			130Rnd_338_Mag                    = 2,86%
			150Rnd_93x64_Mag                  = 2,86%
			200Rnd_65x39_Belt                 = 5,71%
			200Rnd_65x39_Belt_Tracer_Green    = 5,71%
			200Rnd_65x39_Belt_Tracer_Red      = 5,71%
			200Rnd_65x39_Belt_Tracer_Yellow   = 5,71%
			200Rnd_556x45_Box_F               = 2,86%
			200Rnd_556x45_Box_Red_F           = 2,86%
			200Rnd_556x45_Box_Tracer_F        = 2,86%
			200Rnd_556x45_Box_Tracer_Red_F    = 2,86%
			30Rnd_556x45_Stanag               = 5,71%
			30Rnd_556x45_Stanag_green         = 5,71%
			30Rnd_556x45_Stanag_red           = 5,71%
			30Rnd_556x45_Stanag_Tracer_Green  = 5,71%
			30Rnd_556x45_Stanag_Tracer_Red    = 5,71%
			30Rnd_556x45_Stanag_Tracer_Yellow = 5,71%
		*/
		LMGAmmo[] = {"130Rnd_338_Mag", "30Rnd_556x45_Stanag_Tracer_Green", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_Belt_Tracer_Green", "30Rnd_556x45_Stanag_red", "200Rnd_65x39_Belt_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "100Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag_red", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_556x45_Box_Tracer_Red_F", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Red", "100Rnd_65x39_caseless_mag", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_65x39_Belt_Tracer_Green", "150Rnd_762x54_Box", "200Rnd_65x39_Belt", "150Rnd_762x54_Box", "150Rnd_93x64_Mag", "30Rnd_556x45_Stanag_Tracer_Yellow", "150Rnd_762x54_Box_Tracer", "200Rnd_65x39_Belt_Tracer_Yellow", "30Rnd_556x45_Stanag_green", "200Rnd_556x45_Box_Tracer_F", "100Rnd_65x39_caseless_mag_Tracer", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "200Rnd_65x39_Belt", "30Rnd_556x45_Stanag_Tracer_Green", "150Rnd_762x54_Box"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F       = 7,14%
			srifle_DMR_01_Black_F = 7,14%
			srifle_EBR_F          = 7,14%
			srifle_EBR_grey_F     = 7,14%
			srifle_GM6_F          = 7,14%
			srifle_LRR_F          = 7,14%
			srifle_LRR_tna_F      = 7,14%
			srifle_LRR_camo_F     = 7,14%
			srifle_GM6_ghex_F     = 7,14%
			srifle_GM6_camo_F     = 7,14%
			srifle_DMR_07_blk_F   = 7,14%
			srifle_DMR_07_hex_F   = 7,14%
			srifle_DMR_07_ghex_F  = 7,14%
			Exile_Weapon_ksvk     = 7,14%
		*/
		Snipers[] = {"srifle_DMR_01_F", "srifle_LRR_F", "srifle_EBR_grey_F", "srifle_GM6_camo_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_GM6_F", "Exile_Weapon_ksvk", "srifle_LRR_camo_F", "srifle_LRR_tna_F", "srifle_GM6_ghex_F", "srifle_DMR_01_Black_F"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 0,82%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 0,82%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 1,64%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 1,64%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 2,46%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 4,10%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 4,10%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 6,56%
			5Rnd_127x108_APDS_Mag                                = 6,56%
			5Rnd_127x108_Mag                                     = 8,20%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 8,20%
			7Rnd_408_Mag                                         = 8,20%
			10Rnd_762x54_Mag                                     = 13,93%
			20Rnd_762x51_Mag                                     = 15,57%
			20Rnd_650x39_Cased_Mag_F                             = 17,21%
		*/
		SniperAmmo[] = {"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "7Rnd_408_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "7Rnd_408_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11,11%
			muzzle_snds_B_snd_F = 11,11%
			muzzle_snds_B       = 11,11%
			optic_LRPS          = 11,11%
			optic_LRPS_ghex_F   = 11,11%
			optic_LRPS_tna_F    = 11,11%
			optic_SOS           = 11,11%
			optic_SOS_khk_F     = 11,11%
			optic_DMS           = 11,11%
		*/
		SniperAttachments[] = {"optic_LRPS_ghex_F", "optic_SOS", "optic_SOS_khk_F", "optic_DMS", "muzzle_snds_B_snd_F", "muzzle_snds_B", "muzzle_snds_B_khk_F", "optic_LRPS", "optic_LRPS_tna_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 5,45%
			srifle_DMR_03_khaki_F    = 5,45%
			srifle_DMR_03_tan_F      = 5,45%
			srifle_DMR_03_woodland_F = 5,45%
			srifle_DMR_03_multicam_F = 5,45%
			srifle_DMR_03_CTRG_F     = 5,45%
			srifle_DMR_06_camo_F     = 5,45%
			srifle_DMR_06_olive_F    = 5,45%
			srifle_DMR_06_black_F    = 5,45%
			srifle_DMR_06_wood_F     = 7,27%
			srifle_DMR_02_camo_F     = 3,64%
			srifle_DMR_02_F          = 3,64%
			srifle_DMR_02_sniper_F   = 3,64%
			srifle_DMR_04_F          = 9,09%
			srifle_DMR_04_Tan_F      = 9,09%
			srifle_DMR_05_blk_F      = 3,64%
			srifle_DMR_05_hex_F      = 3,64%
			srifle_DMR_05_tan_F      = 3,64%
			srifle_DMR_05_ghex_F     = 3,64%
		*/
		DLCRifles[] = {"srifle_DMR_06_olive_F", "srifle_DMR_04_Tan_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_black_F", "srifle_DMR_06_camo_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_02_camo_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_multicam_F", "srifle_DMR_03_F", "srifle_DMR_03_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_wood_F", "srifle_DMR_03_CTRG_F", "srifle_DMR_04_Tan_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_woodland_F", "srifle_DMR_04_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_multicam_F", "srifle_DMR_05_ghex_F", "srifle_DMR_03_tan_F", "srifle_DMR_06_black_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_F", "srifle_DMR_06_wood_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_CTRG_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_Tan_F", "srifle_DMR_06_black_F", "srifle_DMR_06_wood_F", "srifle_DMR_04_F", "srifle_DMR_03_multicam_F", "srifle_DMR_06_camo_F", "srifle_DMR_04_F", "srifle_DMR_04_Tan_F", "srifle_DMR_06_wood_F", "srifle_DMR_02_F", "srifle_DMR_03_khaki_F", "srifle_DMR_05_ghex_F", "srifle_DMR_03_CTRG_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20,00%
			20Rnd_762x51_Mag       = 20,00%
			10Rnd_338_Mag          = 30,00%
			10Rnd_93x64_DMR_05_Mag = 30,00%
		*/
		DLCAmmo[] = {"10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_127x54_Mag", "20Rnd_762x51_Mag", "10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_127x54_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14,29%
			optic_AMS_khk = 14,29%
			optic_AMS_snd = 14,29%
			optic_KHS_blk = 14,29%
			optic_KHS_hex = 14,29%
			optic_KHS_old = 14,29%
			optic_KHS_tan = 14,29%
		*/
		DLCOptics[] = {"optic_KHS_hex", "optic_KHS_old", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16,67%
			muzzle_snds_338_green = 16,67%
			muzzle_snds_338_sand  = 16,67%
			muzzle_snds_93mmg     = 16,67%
			muzzle_snds_93mmg_tan = 16,67%
			muzzle_snds_B         = 16,67%
		*/
		DLCSupressor[] = {"muzzle_snds_B", "muzzle_snds_338_sand", "muzzle_snds_338_green", "muzzle_snds_93mmg", "muzzle_snds_93mmg_tan", "muzzle_snds_338_black"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F      = 7,14%
			MMG_01_tan_F      = 7,14%
			MMG_02_black_F    = 7,14%
			MMG_02_camo_F     = 7,14%
			MMG_02_sand_F     = 7,14%
			sgun_AA40_F       = 14,29%
			srifle_WF50_F     = 7,14%
			srifle_LRR_F      = 7,14%
			srifle_GM6_ghex_F = 7,14%
			srifle_GM6_camo_F = 7,14%
			srifle_GM6_F      = 7,14%
			srifle_LRR_camo_F = 7,14%
			srifle_LRR_tna_F  = 7,14%
		*/
		EpicWeapons[] = {"srifle_GM6_camo_F", "MMG_02_sand_F", "srifle_WF50_F", "srifle_LRR_F", "srifle_LRR_camo_F", "sgun_AA40_F", "MMG_01_tan_F", "MMG_02_camo_F", "sgun_AA40_F", "srifle_GM6_F", "MMG_01_hex_F", "srifle_LRR_tna_F", "MMG_02_black_F", "srifle_GM6_ghex_F"};

		/*
			Percental Item Spawn Chances of EpicWeaponsAmmo:

			20Rnd_12Gauge_Pellets                                = 1,79%
			20Rnd_12Gauge_Slug                                   = 1,79%
			20Rnd_12Gauge_HE                                     = 5,36%
			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 1,79%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 1,79%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 3,57%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 3,57%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 5,36%
			5Rnd_127x108_APDS_Mag                                = 14,29%
			5Rnd_127x108_Mag                                     = 17,86%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 17,86%
			7Rnd_408_Mag                                         = 17,86%
			150Rnd_93x64_Mag                                     = 3,57%
			130Rnd_338_Mag                                       = 3,57%
		*/
		EpicWeaponsAmmo[] = {"7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_12Gauge_HE", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "150Rnd_93x64_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "20Rnd_12Gauge_Pellets", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_12Gauge_HE", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "150Rnd_93x64_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "130Rnd_338_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "7Rnd_408_Mag", "20Rnd_12Gauge_Slug", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "130Rnd_338_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "7Rnd_408_Mag", "20Rnd_12Gauge_HE"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11,11%
			bipod_03_F_blk = 11,11%
			bipod_02_F_tan = 11,11%
			bipod_02_F_hex = 11,11%
			bipod_02_F_blk = 11,11%
			bipod_01_F_snd = 11,11%
			bipod_01_F_mtp = 11,11%
			bipod_01_F_blk = 11,11%
			bipod_01_F_khk = 11,11%
		*/
		Bipods[] = {"bipod_02_F_blk", "bipod_01_F_snd", "bipod_01_F_mtp", "bipod_01_F_blk", "bipod_02_F_tan", "bipod_03_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_03_F_oli"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25,00%
			1Rnd_HE_Grenade_shell = 75,00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6,25%
			3Rnd_UGL_FlareRed_F    = 6,25%
			3Rnd_UGL_FlareWhite_F  = 6,25%
			3Rnd_UGL_FlareYellow_F = 6,25%
			UGL_FlareGreen_F       = 18,75%
			UGL_FlareRed_F         = 18,75%
			UGL_FlareWhite_F       = 18,75%
			UGL_FlareYellow_F      = 18,75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareRed_F", "UGL_FlareGreen_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3,57%
			3Rnd_SmokeBlue_Grenade_shell   = 3,57%
			3Rnd_SmokeGreen_Grenade_shell  = 3,57%
			3Rnd_SmokeOrange_Grenade_shell = 3,57%
			3Rnd_SmokePurple_Grenade_shell = 3,57%
			3Rnd_SmokeRed_Grenade_shell    = 3,57%
			3Rnd_SmokeYellow_Grenade_shell = 3,57%
			1Rnd_Smoke_Grenade_shell       = 10,71%
			1Rnd_SmokeBlue_Grenade_shell   = 10,71%
			1Rnd_SmokeGreen_Grenade_shell  = 10,71%
			1Rnd_SmokeOrange_Grenade_shell = 10,71%
			1Rnd_SmokePurple_Grenade_shell = 10,71%
			1Rnd_SmokeRed_Grenade_shell    = 10,71%
			1Rnd_SmokeYellow_Grenade_shell = 10,71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50,00%
			MiniGrenade = 50,00%
		*/
		HandGrenades[] = {"MiniGrenade", "HandGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 5,26%
			APERSBoundingMine_Range_Mag = 15,79%
			APERSMine_Range_Mag         = 15,79%
			APERSTripMine_Wire_Mag      = 15,79%
			DemoCharge_Remote_Mag       = 15,79%
			IEDLandSmall_Remote_Mag     = 15,79%
			IEDUrbanSmall_Remote_Mag    = 15,79%
		*/
		Explosives[] = {"APERSMine_Range_Mag", "SatchelCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSBoundingMine_Range_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "APERSMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "DemoCharge_Remote_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2,78%
			Binocular              = 11,11%
			ItemGPS                = 11,11%
			ItemRadio              = 16,67%
			ItemWatch              = 16,67%
			ItemMap                = 19,44%
			Exile_Item_Heatpack    = 22,22%
		*/
		CivilianItems[] = {"Binocular", "ItemGPS", "ItemMap", "Binocular", "Exile_Item_Heatpack", "ItemGPS", "ItemRadio", "Exile_Item_Heatpack", "ItemGPS", "Exile_Item_MobilePhone", "ItemRadio", "ItemMap", "ItemWatch", "ItemMap", "ItemWatch", "ItemRadio", "ItemWatch", "ItemRadio", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "Binocular", "Exile_Item_Heatpack", "ItemMap", "ItemWatch", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemWatch", "ItemWatch", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "Exile_Item_Heatpack", "Binocular", "ItemRadio", "ItemMap"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0,58%
			U_NikosBody              = 0,58%
			U_OrestesBody            = 0,58%
			U_C_Man_casual_1_F       = 2,92%
			U_C_Man_casual_2_F       = 2,92%
			U_C_Man_casual_3_F       = 2,92%
			U_C_Man_casual_4_F       = 2,92%
			U_C_Man_casual_5_F       = 2,92%
			U_C_Man_casual_6_F       = 2,92%
			U_C_man_sport_1_F        = 2,92%
			U_C_man_sport_2_F        = 2,92%
			U_C_man_sport_3_F        = 2,92%
			U_I_C_Soldier_Bandit_1_F = 2,92%
			U_I_C_Soldier_Bandit_2_F = 2,92%
			U_I_C_Soldier_Bandit_3_F = 2,92%
			U_I_C_Soldier_Bandit_4_F = 2,92%
			U_I_C_Soldier_Bandit_5_F = 2,92%
			U_C_Poloshirt_blue       = 4,09%
			U_C_Poloshirt_burgundy   = 4,09%
			U_C_Poloshirt_salmon     = 4,09%
			U_C_Poloshirt_stripped   = 4,09%
			U_C_Poloshirt_tricolour  = 4,09%
			U_C_HunterBody_grn       = 5,26%
			U_C_Journalist           = 5,26%
			U_C_Poor_1               = 5,26%
			U_C_Poor_2               = 5,26%
			U_C_Poor_shorts_1        = 5,26%
			U_C_Scientist            = 5,26%
			U_Rangemaster            = 5,26%
		*/
		CivilianClothing[] = {"U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_2_F", "U_C_man_sport_2_F", "U_C_Poloshirt_blue", "U_C_man_sport_1_F", "U_C_Journalist", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Scientist", "U_C_Poor_2", "U_C_Scientist", "U_Rangemaster", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_blue", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Scientist", "U_C_Poor_1", "U_C_Man_casual_5_F", "U_C_Man_casual_3_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_salmon", "U_C_Poloshirt_blue", "U_C_Poor_shorts_1", "U_C_Man_casual_3_F", "U_C_Man_casual_2_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_tricolour", "U_C_man_sport_3_F", "U_C_Poloshirt_tricolour", "U_C_Poor_1", "U_C_man_sport_2_F", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_Journalist", "U_C_Journalist", "U_C_Poloshirt_burgundy", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_Scientist", "U_C_Poor_1", "U_C_Poloshirt_salmon", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_2_F", "U_Rangemaster", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_stripped", "U_C_Scientist", "U_C_Man_casual_5_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_1_F", "U_C_Poor_2", "U_C_Man_casual_4_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_Rangemaster", "U_C_man_sport_1_F", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_6_F", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_1_F", "U_C_HunterBody_grn", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Scientist", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_3_F", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poloshirt_blue", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_C_man_sport_1_F", "U_C_Man_casual_3_F", "U_Rangemaster", "U_C_Poloshirt_salmon", "U_C_Journalist", "U_C_HunterBody_grn", "U_C_Man_casual_3_F", "U_C_Poor_2", "U_OrestesBody", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Journalist", "U_I_C_Soldier_Bandit_3_F", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_Man_casual_6_F", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_tricolour", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_stripped", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_4_F", "U_C_HunterBody_grn", "U_C_Journalist", "U_C_man_sport_3_F", "U_C_Man_casual_1_F", "U_C_Man_casual_5_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_4_F", "U_C_man_sport_2_F", "U_C_Poor_2", "U_C_Poor_shorts_1", "U_C_Poor_2", "U_Rangemaster", "U_C_Man_casual_1_F", "U_C_Scientist", "U_C_Poor_shorts_1", "U_C_Poloshirt_tricolour", "U_C_Poor_2", "U_C_Man_casual_4_F", "U_I_C_Soldier_Bandit_3_F", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_C_Journalist", "U_C_Poor_1", "U_C_Man_casual_1_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Man_casual_5_F", "U_NikosBody", "U_C_Poor_2", "U_C_Man_casual_4_F", "U_C_Man_casual_6_F", "U_C_Man_casual_2_F", "U_C_HunterBody_grn", "U_Rangemaster", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_C_man_sport_2_F", "U_C_man_sport_2_F", "U_NikosAgedBody"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6,67%
			B_Kitbag_mcamo      = 6,67%
			B_Kitbag_sgg        = 6,67%
			B_AssaultPack_blk   = 6,67%
			B_AssaultPack_cbr   = 6,67%
			B_AssaultPack_dgtl  = 6,67%
			B_AssaultPack_khk   = 6,67%
			B_AssaultPack_mcamo = 6,67%
			B_AssaultPack_rgr   = 6,67%
			B_AssaultPack_sgg   = 6,67%
			B_AssaultPack_tna_F = 6,67%
			B_HuntingBackpack   = 6,67%
			B_OutdoorPack_blu   = 6,67%
			B_OutdoorPack_tan   = 6,67%
			B_OutdoorPack_blk   = 6,67%
		*/
		CivilianBackpacks[] = {"B_Kitbag_cbr", "B_AssaultPack_mcamo", "B_Kitbag_sgg", "B_AssaultPack_khk", "B_AssaultPack_cbr", "B_AssaultPack_dgtl", "B_HuntingBackpack", "B_AssaultPack_sgg", "B_AssaultPack_rgr", "B_AssaultPack_tna_F", "B_OutdoorPack_blu", "B_Kitbag_mcamo", "B_AssaultPack_blk", "B_OutdoorPack_tan", "B_OutdoorPack_blk"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25,00%
			V_TacVest_blk_POLICE = 25,00%
			V_Rangemaster_belt   = 50,00%
		*/
		CivilianVests[] = {"V_TacVest_blk_POLICE", "V_Rangemaster_belt", "V_Rangemaster_belt", "V_Press_F"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5,56%
			H_Beret_blk_POLICE = 5,56%
			H_Cap_blk          = 5,56%
			H_Cap_blk_Raven    = 5,56%
			H_Cap_blu          = 5,56%
			H_Cap_grn          = 5,56%
			H_Cap_headphones   = 5,56%
			H_Cap_oli          = 5,56%
			H_Cap_press        = 5,56%
			H_Cap_red          = 5,56%
			H_Cap_tan          = 5,56%
			H_Hat_blue         = 5,56%
			H_Hat_brown        = 5,56%
			H_Hat_checker      = 5,56%
			H_Hat_grey         = 5,56%
			H_Hat_tan          = 5,56%
			H_StrawHat         = 5,56%
			H_StrawHat_dark    = 5,56%
		*/
		CivilianHeadgear[] = {"H_Cap_blk_Raven", "H_Cap_tan", "H_Cap_oli", "H_Cap_press", "H_Cap_blu", "H_StrawHat_dark", "H_Cap_red", "H_Bandanna_surfer", "H_Hat_brown", "H_Hat_blue", "H_Cap_grn", "H_Cap_headphones", "H_Hat_tan", "H_Hat_grey", "H_Beret_blk_POLICE", "H_Cap_blk", "H_StrawHat", "H_Hat_checker"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6,25%
			ItemCompass        = 62,50%
			NVGoggles          = 6,25%
			NVGoggles_tna_F    = 6,25%
			O_NVGoggles_ghex_F = 6,25%
			O_NVGoggles_hex_F  = 6,25%
			O_NVGoggles_urb_F  = 6,25%
		*/
		GuerillaItems[] = {"NVGoggles_tna_F", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "O_NVGoggles_urb_F", "O_NVGoggles_ghex_F", "ItemCompass", "NVGoggles", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "ItemCompass", "Rangefinder", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1,75%
			U_I_C_Soldier_Camo_F     = 5,26%
			U_I_C_Soldier_Para_1_F   = 5,26%
			U_I_C_Soldier_Para_2_F   = 5,26%
			U_I_C_Soldier_Para_3_F   = 5,26%
			U_I_C_Soldier_Para_4_F   = 5,26%
			U_I_C_Soldier_Para_5_F   = 5,26%
			U_IG_leader              = 7,02%
			U_IG_Guerilla3_1         = 8,77%
			U_IG_Guerilla3_2         = 8,77%
			U_IG_Guerilla1_1         = 10,53%
			U_IG_Guerilla2_1         = 10,53%
			U_IG_Guerilla2_2         = 10,53%
			U_IG_Guerilla2_3         = 10,53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_IG_Guerilla2_3", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_2", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_leader", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_IG_leader", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_leader", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_1", "U_IG_Guerilla3_1", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla1_1", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_5_F", "U_I_G_resistanceLeader_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_2"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1,82%
			B_Bergen_mcamo             = 1,82%
			B_Bergen_rgr               = 1,82%
			B_Bergen_sgg               = 1,82%
			B_FieldPack_ghex_F         = 1,82%
			B_ViperHarness_base_F      = 3,64%
			B_ViperHarness_blk_F       = 3,64%
			B_ViperHarness_ghex_F      = 3,64%
			B_ViperHarness_hex_F       = 3,64%
			B_ViperHarness_khk_F       = 3,64%
			B_ViperHarness_oli_F       = 3,64%
			B_ViperLightHarness_base_F = 5,45%
			B_ViperLightHarness_blk_F  = 5,45%
			B_ViperLightHarness_ghex_F = 5,45%
			B_ViperLightHarness_hex_F  = 5,45%
			B_ViperLightHarness_khk_F  = 5,45%
			B_ViperLightHarness_oli_F  = 5,45%
			B_FieldPack_blk            = 9,09%
			B_FieldPack_cbr            = 9,09%
			B_FieldPack_ocamo          = 9,09%
			B_FieldPack_oucamo         = 9,09%
		*/
		GuerillaBackpacks[] = {"B_FieldPack_cbr", "B_ViperHarness_hex_F", "B_FieldPack_blk", "B_FieldPack_ocamo", "B_Bergen_blk", "B_ViperLightHarness_oli_F", "B_Bergen_sgg", "B_FieldPack_ocamo", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_ViperHarness_blk_F", "B_FieldPack_oucamo", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_ViperHarness_oli_F", "B_Bergen_rgr", "B_ViperLightHarness_oli_F", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_ViperHarness_khk_F", "B_ViperHarness_oli_F", "B_FieldPack_cbr", "B_ViperHarness_ghex_F", "B_FieldPack_blk", "B_ViperLightHarness_base_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_blk_F", "B_FieldPack_cbr", "B_FieldPack_blk", "B_ViperHarness_base_F", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_FieldPack_ocamo", "B_ViperHarness_blk_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_blk", "B_FieldPack_ghex_F", "B_FieldPack_cbr", "B_ViperHarness_base_F", "B_ViperLightHarness_ghex_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_hex_F", "B_ViperHarness_khk_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_hex_F", "B_Bergen_mcamo", "B_ViperLightHarness_hex_F", "B_FieldPack_blk"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3,23%
			V_BandollierB_blk        = 6,45%
			V_BandollierB_cbr        = 6,45%
			V_BandollierB_khk        = 6,45%
			V_BandollierB_oli        = 6,45%
			V_BandollierB_rgr        = 6,45%
			V_Chestrig_blk           = 6,45%
			V_Chestrig_khk           = 6,45%
			V_Chestrig_oli           = 6,45%
			V_Chestrig_rgr           = 6,45%
			V_HarnessO_brn           = 6,45%
			V_HarnessO_gry           = 6,45%
			V_HarnessOGL_brn         = 6,45%
			V_HarnessOGL_gry         = 6,45%
			V_HarnessOSpec_brn       = 6,45%
			V_HarnessOSpec_gry       = 6,45%
		*/
		GuerillaVests[] = {"V_Chestrig_blk", "V_Chestrig_khk", "V_HarnessOSpec_brn", "V_Chestrig_oli", "V_BandollierB_khk", "V_HarnessOGL_brn", "V_BandollierB_cbr", "V_BandollierB_oli", "V_BandollierB_blk", "V_Chestrig_khk", "V_I_G_resistanceLeader_F", "V_HarnessOGL_gry", "V_BandollierB_oli", "V_HarnessO_gry", "V_HarnessO_brn", "V_BandollierB_rgr", "V_Chestrig_oli", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_Chestrig_rgr", "V_BandollierB_blk", "V_HarnessOSpec_gry", "V_HarnessO_gry", "V_HarnessOSpec_gry", "V_HarnessOGL_brn", "V_BandollierB_khk", "V_BandollierB_rgr", "V_HarnessOSpec_brn", "V_Chestrig_rgr", "V_HarnessO_brn", "V_Chestrig_blk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0,82%
			H_Beret_blk               = 0,82%
			H_Beret_brn_SF            = 0,82%
			H_Beret_Colonel           = 0,82%
			H_Beret_grn               = 0,82%
			H_Beret_grn_SF            = 0,82%
			H_Beret_ocamo             = 0,82%
			H_Beret_red               = 0,82%
			H_Booniehat_tna_F         = 1,64%
			H_Cap_blk_Syndikat_F      = 1,64%
			H_Cap_grn_Syndikat_F      = 1,64%
			H_Cap_oli_Syndikat_F      = 1,64%
			H_Cap_tan_Syndikat_F      = 1,64%
			H_FakeHeadgear_Syndikat_F = 1,64%
			H_MilCap_gen_F            = 1,64%
			H_MilCap_ghex_F           = 1,64%
			H_MilCap_tna_F            = 1,64%
			H_Shemag_khk              = 1,64%
			H_Shemag_olive            = 1,64%
			H_Shemag_olive_hs         = 1,64%
			H_Shemag_tan              = 1,64%
			H_ShemagOpen_khk          = 1,64%
			H_ShemagOpen_tan          = 1,64%
			H_TurbanO_blk             = 1,64%
			H_Watchcap_camo           = 1,64%
			H_Watchcap_sgg            = 1,64%
			H_Bandanna_camo           = 2,46%
			H_Bandanna_cbr            = 2,46%
			H_Bandanna_gry            = 2,46%
			H_Bandanna_khk            = 2,46%
			H_Bandanna_khk_hs         = 2,46%
			H_Bandanna_mcamo          = 2,46%
			H_Bandanna_sgg            = 2,46%
			H_BandMask_blk            = 2,46%
			H_Cap_brn_SPECOPS         = 2,46%
			H_Cap_khaki_specops_UK    = 2,46%
			H_Cap_tan_specops_US      = 2,46%
			H_Hat_camo                = 2,46%
			H_Watchcap_blk            = 2,46%
			H_Watchcap_khk            = 2,46%
			Exile_Headgear_GasMask    = 3,28%
			H_Booniehat_dgtl          = 3,28%
			H_Booniehat_dirty         = 3,28%
			H_Booniehat_grn           = 3,28%
			H_Booniehat_indp          = 3,28%
			H_Booniehat_khk           = 3,28%
			H_Booniehat_khk_hs        = 3,28%
			H_Booniehat_mcamo         = 3,28%
			H_Booniehat_tan           = 3,28%
		*/
		GuerillaHeadgear[] = {"H_MilCap_ghex_F", "H_Booniehat_tna_F", "H_Cap_tan_specops_US", "H_Beret_ocamo", "H_Bandanna_gry", "H_Watchcap_blk", "H_Booniehat_dgtl", "H_Booniehat_khk", "H_Cap_brn_SPECOPS", "Exile_Headgear_GasMask", "H_MilCap_ghex_F", "H_Beret_02", "H_Hat_camo", "H_Booniehat_tan", "H_Hat_camo", "H_Cap_khaki_specops_UK", "H_ShemagOpen_khk", "H_Beret_blk", "H_Booniehat_khk", "H_Booniehat_mcamo", "H_MilCap_gen_F", "Exile_Headgear_GasMask", "H_Cap_tan_Syndikat_F", "H_Booniehat_khk_hs", "H_Booniehat_grn", "H_Shemag_khk", "H_Cap_blk_Syndikat_F", "H_Cap_grn_Syndikat_F", "H_Watchcap_camo", "H_Bandanna_khk_hs", "H_Watchcap_khk", "H_Bandanna_khk_hs", "H_Watchcap_blk", "H_Cap_brn_SPECOPS", "H_Booniehat_tan", "H_Shemag_olive_hs", "Exile_Headgear_GasMask", "H_BandMask_blk", "H_Shemag_olive", "H_Bandanna_mcamo", "H_Beret_red", "H_ShemagOpen_tan", "H_Booniehat_tna_F", "H_Booniehat_grn", "H_Bandanna_sgg", "H_Bandanna_cbr", "H_Booniehat_mcamo", "H_Bandanna_camo", "H_Cap_tan_Syndikat_F", "H_TurbanO_blk", "H_Booniehat_dgtl", "H_Shemag_tan", "H_Cap_blk_Syndikat_F", "H_Shemag_tan", "H_Booniehat_indp", "H_Watchcap_khk", "H_Bandanna_mcamo", "H_MilCap_tna_F", "H_Beret_grn", "H_Booniehat_dgtl", "H_Shemag_khk", "H_Shemag_olive_hs", "H_Booniehat_dirty", "H_Booniehat_dirty", "H_Watchcap_sgg", "H_Cap_tan_specops_US", "H_Booniehat_tan", "H_Booniehat_indp", "H_Booniehat_khk_hs", "H_Bandanna_mcamo", "H_Bandanna_gry", "H_Booniehat_mcamo", "H_Cap_khaki_specops_UK", "H_Bandanna_khk", "H_MilCap_gen_F", "H_Hat_camo", "H_Booniehat_khk", "H_FakeHeadgear_Syndikat_F", "H_Bandanna_gry", "H_Watchcap_sgg", "H_Booniehat_dgtl", "H_Cap_brn_SPECOPS", "H_Watchcap_blk", "H_Cap_oli_Syndikat_F", "H_Bandanna_sgg", "H_Beret_grn_SF", "H_MilCap_tna_F", "H_Booniehat_mcamo", "H_BandMask_blk", "H_FakeHeadgear_Syndikat_F", "H_Bandanna_sgg", "H_Bandanna_camo", "H_Beret_Colonel", "H_Bandanna_cbr", "H_Booniehat_indp", "H_Bandanna_camo", "H_Booniehat_khk_hs", "Exile_Headgear_GasMask", "H_Cap_oli_Syndikat_F", "H_Bandanna_cbr", "H_Bandanna_khk", "H_Watchcap_camo", "H_Watchcap_khk", "H_ShemagOpen_tan", "H_Booniehat_khk", "H_Cap_khaki_specops_UK", "H_Cap_tan_specops_US", "H_Bandanna_khk", "H_Booniehat_grn", "H_Beret_brn_SF", "H_ShemagOpen_khk", "H_Shemag_olive", "H_Booniehat_indp", "H_Cap_grn_Syndikat_F", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Booniehat_khk_hs", "H_TurbanO_blk", "H_Bandanna_khk_hs", "H_Booniehat_dirty", "H_Booniehat_grn", "H_BandMask_blk"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1,32%
			U_I_OfficerUniform            = 1,32%
			U_I_Wetsuit                   = 1,32%
			U_O_CombatUniform_ocamo       = 1,32%
			U_O_CombatUniform_oucamo      = 1,32%
			U_O_OfficerUniform_ocamo      = 1,32%
			U_O_SpecopsUniform_blk        = 1,32%
			U_O_SpecopsUniform_ocamo      = 1,32%
			U_O_V_Soldier_Viper_F         = 1,32%
			U_O_V_Soldier_Viper_hex_F     = 1,32%
			U_O_Wetsuit                   = 1,32%
			U_B_SpecopsUniform_sgg        = 1,97%
			U_B_HeliPilotCoveralls        = 2,63%
			U_B_PilotCoveralls            = 2,63%
			U_I_CombatUniform             = 2,63%
			U_I_CombatUniform_shortsleeve = 2,63%
			U_I_CombatUniform_tshirt      = 2,63%
			U_I_HeliPilotCoveralls        = 2,63%
			U_I_pilotCoveralls            = 2,63%
			U_O_PilotCoveralls            = 2,63%
			U_B_CombatUniform_mcam        = 3,29%
			U_B_CombatUniform_mcam_tshirt = 3,29%
			U_B_CombatUniform_mcam_vest   = 3,29%
			U_B_CombatUniform_mcam_worn   = 3,29%
			U_B_CTRG_1                    = 3,29%
			U_B_CTRG_2                    = 3,29%
			U_B_CTRG_3                    = 3,29%
			U_B_CTRG_Soldier_2_F          = 3,29%
			U_B_CTRG_Soldier_3_F          = 3,29%
			U_B_CTRG_Soldier_F            = 3,29%
			U_B_CTRG_Soldier_urb_1_F      = 3,29%
			U_B_CTRG_Soldier_urb_2_F      = 3,29%
			U_B_CTRG_Soldier_urb_3_F      = 3,29%
			U_B_GEN_Commander_F           = 3,29%
			U_B_GEN_Soldier_F             = 3,29%
			U_B_T_Soldier_AR_F            = 3,29%
			U_B_T_Soldier_SL_F            = 3,29%
			U_O_T_Officer_F               = 3,29%
			U_O_T_Soldier_F               = 3,29%
		*/
		MilitaryClothing[] = {"U_I_CombatUniform", "U_O_T_Officer_F", "U_I_CombatUniform_shortsleeve", "U_O_PilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_Wetsuit", "U_B_CTRG_1", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_F", "U_B_HeliPilotCoveralls", "U_O_V_Soldier_Viper_hex_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_OfficerUniform_ocamo", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_worn", "U_O_PilotCoveralls", "U_B_HeliPilotCoveralls", "U_B_T_Soldier_AR_F", "U_I_HeliPilotCoveralls", "U_B_GEN_Soldier_F", "U_B_SpecopsUniform_sgg", "U_O_SpecopsUniform_blk", "U_B_CTRG_1", "U_B_CombatUniform_mcam", "U_B_Wetsuit", "U_B_CTRG_3", "U_B_CTRG_Soldier_2_F", "U_O_T_Soldier_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_3_F", "U_B_PilotCoveralls", "U_O_OfficerUniform_ocamo", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_3_F", "U_I_CombatUniform_tshirt", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_CombatUniform_ocamo", "U_I_Wetsuit", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_2", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_GEN_Soldier_F", "U_O_T_Soldier_F", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_worn", "U_B_Wetsuit", "U_B_CTRG_3", "U_B_CTRG_Soldier_F", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_3_F", "U_O_SpecopsUniform_ocamo", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_I_HeliPilotCoveralls", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_3_F", "U_O_V_Soldier_Viper_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_T_Officer_F", "U_I_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_O_Wetsuit", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_tshirt", "U_O_CombatUniform_ocamo", "U_B_SpecopsUniform_sgg", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_I_Wetsuit", "U_B_CombatUniform_mcam_tshirt", "U_O_CombatUniform_oucamo", "U_B_CTRG_Soldier_F", "U_B_CombatUniform_mcam", "U_O_SpecopsUniform_blk", "U_B_CTRG_3", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_3", "U_I_CombatUniform_shortsleeve", "U_O_T_Officer_F", "U_B_T_Soldier_SL_F", "U_B_T_Soldier_SL_F", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_2", "U_I_CombatUniform_tshirt", "U_B_CTRG_1", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_O_T_Soldier_F", "U_B_T_Soldier_SL_F", "U_I_OfficerUniform", "U_B_CombatUniform_mcam_vest", "U_O_V_Soldier_Viper_F", "U_O_T_Officer_F", "U_B_T_Soldier_AR_F", "U_I_CombatUniform", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_GEN_Soldier_F", "U_I_OfficerUniform", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_2_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_1", "U_B_SpecopsUniform_sgg", "U_B_CTRG_2", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_2", "U_B_CombatUniform_mcam_tshirt", "U_I_CombatUniform_tshirt", "U_B_GEN_Commander_F", "U_O_V_Soldier_Viper_hex_F", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_SL_F", "U_O_SpecopsUniform_ocamo", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Commander_F", "U_B_CTRG_2", "U_B_PilotCoveralls", "U_B_CTRG_3", "U_B_CombatUniform_mcam_worn", "U_I_CombatUniform_tshirt", "U_B_CombatUniform_mcam_worn", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_CombatUniform", "U_I_CombatUniform", "U_I_CombatUniform_shortsleeve", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5,26%
			B_Bergen_dgtl_F   = 5,26%
			B_Bergen_hex_F    = 5,26%
			B_Bergen_mcamo_F  = 5,26%
			B_Bergen_tna_F    = 5,26%
			B_Carryall_mcamo  = 10,53%
			B_Carryall_ocamo  = 10,53%
			B_Carryall_oucamo = 10,53%
			B_Carryall_khk    = 10,53%
			B_Carryall_oli    = 10,53%
			B_Carryall_cbr    = 10,53%
			B_Carryall_ghex_F = 10,53%
		*/
		MilitaryBackpacks[] = {"B_Carryall_cbr", "B_Carryall_oucamo", "B_Bergen_hex_F", "B_Carryall_ocamo", "B_Carryall_oli", "B_Carryall_ghex_F", "B_Carryall_ocamo", "B_Carryall_oucamo", "B_Bergen_mcamo_F", "B_Carryall_mcamo", "B_Bergen_dgtl_F", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_oli", "B_Bergen_Base_F", "B_Bergen_tna_F", "B_Carryall_khk"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5,00%
			V_PlateCarrierL_CTRG    = 5,00%
			V_PlateCarrier1_blk     = 10,00%
			V_PlateCarrier1_rgr     = 10,00%
			V_PlateCarrier2_rgr     = 10,00%
			V_PlateCarrier3_rgr     = 10,00%
			V_PlateCarrierGL_rgr    = 10,00%
			V_PlateCarrierIA1_dgtl  = 10,00%
			V_PlateCarrierIA2_dgtl  = 10,00%
			V_PlateCarrierIAGL_dgtl = 10,00%
			V_PlateCarrierSpec_rgr  = 10,00%
		*/
		MilitaryVests[] = {"V_PlateCarrierIAGL_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierH_CTRG", "V_PlateCarrier1_blk", "V_PlateCarrier1_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierL_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierIA1_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0,81%
			H_CrewHelmetHeli_I        = 0,81%
			H_CrewHelmetHeli_O        = 0,81%
			H_HelmetB_camo            = 0,81%
			H_HelmetCrew_B            = 0,81%
			H_HelmetCrew_I            = 0,81%
			H_HelmetCrew_O            = 0,81%
			H_HelmetLeaderO_ocamo     = 0,81%
			H_HelmetLeaderO_oucamo    = 0,81%
			H_HelmetO_ghex_F          = 0,81%
			H_HelmetO_ocamo           = 0,81%
			H_HelmetO_oucamo          = 0,81%
			H_HelmetSpecO_blk         = 0,81%
			H_HelmetSpecO_ocamo       = 0,81%
			H_PilotHelmetFighter_B    = 0,81%
			H_PilotHelmetFighter_I    = 0,81%
			H_PilotHelmetFighter_O    = 0,81%
			H_PilotHelmetHeli_B       = 0,81%
			H_PilotHelmetHeli_I       = 0,81%
			H_PilotHelmetHeli_O       = 0,81%
			H_BandMask_demon          = 1,63%
			H_BandMask_khk            = 1,63%
			H_BandMask_reaper         = 1,63%
			H_Beret_gen_F             = 1,63%
			H_Helmet_Skate            = 1,63%
			H_HelmetB_black           = 1,63%
			H_HelmetB_desert          = 1,63%
			H_HelmetB_Enh_tna_F       = 1,63%
			H_HelmetB_grass           = 1,63%
			H_HelmetB_light_black     = 1,63%
			H_HelmetB_light_desert    = 1,63%
			H_HelmetB_light_grass     = 1,63%
			H_HelmetB_light_sand      = 1,63%
			H_HelmetB_light_snakeskin = 1,63%
			H_HelmetB_Light_tna_F     = 1,63%
			H_HelmetB_sand            = 1,63%
			H_HelmetB_snakeskin       = 1,63%
			H_HelmetB_TI_tna_F        = 1,63%
			H_HelmetB_tna_F           = 1,63%
			H_HelmetCrew_O_ghex_F     = 1,63%
			H_HelmetIA_camo           = 1,63%
			H_HelmetIA_net            = 1,63%
			H_HelmetLeaderO_ghex_F    = 1,63%
			H_HelmetSpecO_ghex_F      = 1,63%
			H_HelmetB                 = 2,44%
			H_HelmetB_light           = 2,44%
			H_HelmetB_paint           = 2,44%
			H_HelmetB_plain_blk       = 2,44%
			H_HelmetIA                = 2,44%
			H_HelmetSpecB             = 2,44%
			H_HelmetSpecB_blk         = 2,44%
			H_HelmetSpecB_paint1      = 2,44%
			H_HelmetSpecB_paint2      = 2,44%
			Exile_Headgear_GasMask    = 3,25%
			H_MilCap_blue             = 3,25%
			H_MilCap_dgtl             = 3,25%
			H_MilCap_mcamo            = 3,25%
			H_MilCap_ocamo            = 3,25%
			H_MilCap_oucamo           = 3,25%
			H_MilCap_rucamo           = 3,25%
		*/
		MilitaryHeadgear[] = {"H_HelmetSpecB", "H_HelmetB_light", "H_HelmetCrew_O_ghex_F", "H_MilCap_ocamo", "H_BandMask_reaper", "H_HelmetB_light_sand", "H_MilCap_ocamo", "H_MilCap_rucamo", "H_BandMask_khk", "H_Helmet_Skate", "H_MilCap_dgtl", "H_HelmetO_ghex_F", "H_CrewHelmetHeli_I", "H_MilCap_dgtl", "H_HelmetSpecB_blk", "H_HelmetSpecB_paint1", "H_HelmetLeaderO_oucamo", "H_HelmetB_plain_blk", "H_HelmetB_camo", "H_HelmetB_Light_tna_F", "H_HelmetIA", "H_HelmetB_plain_blk", "H_HelmetSpecB_paint1", "H_HelmetB_light_black", "H_PilotHelmetFighter_O", "H_CrewHelmetHeli_O", "H_HelmetLeaderO_ghex_F", "H_MilCap_ocamo", "H_HelmetSpecO_ghex_F", "H_BandMask_demon", "H_HelmetB_snakeskin", "H_HelmetB_light_snakeskin", "H_HelmetLeaderO_ocamo", "H_HelmetB_Enh_tna_F", "H_HelmetB_light_grass", "H_MilCap_dgtl", "H_MilCap_oucamo", "H_Beret_gen_F", "H_MilCap_blue", "H_MilCap_rucamo", "H_CrewHelmetHeli_B", "H_HelmetCrew_B", "H_HelmetB_grass", "H_HelmetSpecB", "H_HelmetB_black", "H_HelmetB_light", "H_HelmetB_light", "H_HelmetB", "H_PilotHelmetFighter_I", "H_MilCap_oucamo", "H_HelmetB_Enh_tna_F", "H_HelmetCrew_O_ghex_F", "H_MilCap_rucamo", "Exile_Headgear_GasMask", "H_HelmetB_desert", "H_HelmetB_tna_F", "H_HelmetO_oucamo", "H_HelmetIA_camo", "H_HelmetCrew_O", "H_BandMask_reaper", "H_HelmetB_light_desert", "H_HelmetB_sand", "H_HelmetB_desert", "H_HelmetIA_net", "H_HelmetSpecB_paint2", "H_BandMask_khk", "H_HelmetB_light_snakeskin", "H_Helmet_Skate", "H_HelmetB_black", "H_MilCap_mcamo", "H_HelmetIA", "H_MilCap_mcamo", "H_HelmetSpecO_ocamo", "H_MilCap_mcamo", "H_HelmetB_TI_tna_F", "H_HelmetSpecB_paint2", "H_MilCap_blue", "H_HelmetB_paint", "H_HelmetSpecB_blk", "H_HelmetIA_camo", "H_HelmetB_light_black", "Exile_Headgear_GasMask", "H_PilotHelmetHeli_B", "H_HelmetSpecB_paint2", "H_MilCap_blue", "H_MilCap_rucamo", "H_MilCap_blue", "H_HelmetIA", "H_MilCap_ocamo", "Exile_Headgear_GasMask", "H_HelmetB_light_grass", "H_HelmetB_sand", "H_HelmetSpecB_blk", "H_PilotHelmetHeli_I", "H_HelmetIA_net", "H_HelmetB", "H_HelmetSpecB_paint1", "H_MilCap_oucamo", "H_BandMask_demon", "H_HelmetB_tna_F", "H_HelmetSpecO_ghex_F", "H_HelmetB_plain_blk", "H_PilotHelmetHeli_O", "H_HelmetB_snakeskin", "Exile_Headgear_GasMask", "H_MilCap_oucamo", "H_HelmetSpecB", "H_PilotHelmetFighter_B", "H_HelmetSpecO_blk", "H_HelmetB_light_desert", "H_HelmetB_paint", "H_HelmetB_paint", "H_HelmetB_Light_tna_F", "H_HelmetCrew_I", "H_HelmetB", "H_HelmetB_grass", "H_HelmetLeaderO_ghex_F", "H_HelmetB_TI_tna_F", "H_HelmetO_ocamo", "H_MilCap_dgtl", "H_MilCap_mcamo", "H_HelmetB_light_sand", "H_Beret_gen_F"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33,33%
			U_O_GhillieSuit = 33,33%
			U_I_GhillieSuit = 33,33%
		*/
		Ghillies[] = {"U_I_GhillieSuit", "U_B_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2,94%
			U_B_FullGhillie_lsh     = 2,94%
			U_B_FullGhillie_sard    = 2,94%
			U_O_FullGhillie_ard     = 2,94%
			U_O_FullGhillie_lsh     = 2,94%
			U_O_FullGhillie_sard    = 2,94%
			U_I_FullGhillie_ard     = 2,94%
			U_I_FullGhillie_lsh     = 2,94%
			U_I_FullGhillie_sard    = 2,94%
			U_B_T_Sniper_F          = 14,71%
			U_B_T_Soldier_F         = 14,71%
			U_B_T_FullGhillie_tna_F = 14,71%
			U_O_T_Sniper_F          = 14,71%
			U_O_T_FullGhillie_tna_F = 14,71%
		*/
		DLCGhillies[] = {"U_O_T_FullGhillie_tna_F", "U_O_FullGhillie_ard", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_B_T_Soldier_F", "U_I_FullGhillie_sard", "U_B_T_Soldier_F", "U_B_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_sard", "U_I_FullGhillie_lsh", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_FullGhillie_lsh", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_I_FullGhillie_ard", "U_O_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_FullGhillie_ard", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4,76%
			V_PlateCarrierGL_mtp         = 4,76%
			V_PlateCarrierGL_rgr         = 4,76%
			V_PlateCarrierIAGL_dgtl      = 4,76%
			V_PlateCarrierIAGL_oli       = 4,76%
			V_PlateCarrierSpec_blk       = 4,76%
			V_PlateCarrierSpec_mtp       = 4,76%
			V_PlateCarrierSpec_rgr       = 4,76%
			V_TacChestrig_grn_F          = 4,76%
			V_TacChestrig_oli_F          = 4,76%
			V_TacChestrig_cbr_F          = 4,76%
			V_PlateCarrier1_tna_F        = 4,76%
			V_PlateCarrier2_tna_F        = 4,76%
			V_PlateCarrierSpec_tna_F     = 4,76%
			V_PlateCarrierGL_tna_F       = 4,76%
			V_HarnessO_ghex_F            = 4,76%
			V_HarnessOGL_ghex_F          = 4,76%
			V_BandollierB_ghex_F         = 4,76%
			V_TacVest_gen_F              = 4,76%
			V_PlateCarrier1_rgr_noflag_F = 4,76%
			V_PlateCarrier2_rgr_noflag_F = 4,76%
		*/
		DLCVests[] = {"V_PlateCarrierGL_mtp", "V_BandollierB_ghex_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_rgr", "V_TacVest_gen_F", "V_PlateCarrierSpec_blk", "V_TacChestrig_oli_F", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrier2_tna_F", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_tna_F", "V_HarnessOGL_ghex_F", "V_TacChestrig_grn_F", "V_HarnessO_ghex_F", "V_PlateCarrierIAGL_oli", "V_PlateCarrier1_tna_F", "V_PlateCarrier2_rgr_noflag_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33,33%
			V_RebreatherIR = 33,33%
			V_RebreatherIA = 33,33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherIA", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc        = 3,77%
			Exile_Item_Bandage         = 9,43%
			Exile_Item_Vishpirin       = 5,66%
			Exile_Item_Heatpack        = 11,32%
			Exile_Item_Defibrillato    = 1,89%
			Exitem_makeshift_bandage   = 9,43%
			Exitem_dressing            = 7,55%
			Exitem_antibiotic          = 7,55%
			Exitem_painkillers         = 7,55%
			Exitem_firstaid            = 5,66%
			Exitem_surgerykit          = 1,89%
			Exitem_bloodbag            = 1,89%
			Exitem_bandage_dirty       = 18,87%
			Exitem_morphine            = 1,89%
			Exitem_morphineauto        = 1,89%
			Exitem_splint              = 1,89%
			Exitem_purificationtablets = 1,89%
		*/
		MedicalItems[] = {"Exitem_bandage_dirty", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exitem_splint", "Exitem_bloodbag", "Exitem_bandage_dirty", "Exile_Item_Heatpack", "Exitem_antibiotic", "Exitem_bandage_dirty", "Exile_Item_Heatpack", "Exitem_painkillers", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exitem_makeshift_bandage", "Exile_Item_Heatpack", "Exitem_dressing", "Exile_Item_Bandage", "Exitem_makeshift_bandage", "Exitem_bandage_dirty", "Exitem_painkillers", "Exitem_morphine", "Exile_Item_Vishpirin", "Exitem_bandage_dirty", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exitem_makeshift_bandage", "Exile_Item_Bandage", "Exitem_makeshift_bandage", "Exitem_firstaid", "Exitem_painkillers", "Exitem_dressing", "Exitem_purificationtablets", "Exitem_bandage_dirty", "Exitem_firstaid", "Exile_Item_Defibrillato", "Exitem_bandage_dirty", "Exitem_antibiotic", "Exitem_bandage_dirty", "Exitem_bandage_dirty", "Exitem_bandage_dirty", "Exitem_firstaid", "Exitem_morphineauto", "Exitem_antibiotic", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exitem_dressing", "Exitem_makeshift_bandage", "Exile_Item_Heatpack", "Exitem_surgerykit", "Exitem_dressing", "Exitem_painkillers", "Exile_Item_Heatpack", "Exitem_antibiotic"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0,33%
			Exile_Item_Knife                = 0,66%
			Exile_Item_Cement               = 1,00%
			Exile_Item_FloodLightKit        = 1,00%
			Exile_Item_PortableGeneratorKit = 1,00%
			Exile_Item_CamoTentKit          = 1,33%
			Exile_Item_MetalBoard           = 1,33%
			Exile_Item_Foolbox              = 1,33%
			Exile_Item_Sand                 = 1,33%
			Exile_Item_Grinder              = 1,66%
			Exile_Item_MetalScrews          = 1,66%
			Exile_Melee_SledgeHammer        = 1,66%
			Exile_Item_ExtensionCord        = 2,66%
			Exile_Item_LightBulb            = 2,99%
			Exile_Item_WaterCanisterEmpty   = 3,32%
			Exile_Melee_Shovel              = 3,32%
			Exile_Item_JunkMetal            = 3,65%
			Exile_Item_Handsaw              = 4,32%
			Exile_Item_Pliers               = 4,32%
			Exile_Item_ScrewDriver          = 4,32%
			Exile_Melee_Axe                 = 7,31%
			Exile_Item_Hammer               = 1,33%
			Exile_Item_Wrench               = 1,00%
			Exile_Item_CordlessScrewdriver  = 0,66%
			Exile_Item_Rope                 = 1,66%
			Exile_Item_Carwheel             = 0,33%
			Exitem_nails                    = 3,32%
			Exitem_torch                    = 0,66%
			Exitem_apsi                     = 0,66%
			Exitem_airhorn                  = 0,66%
			Exitem_tarp                     = 1,66%
			Exitem_cinderblock              = 1,66%
			Exitem_camera                   = 0,33%
			Exitem_disinfectant             = 1,00%
			Exitem_electricalcomp           = 3,32%
			Exitem_engine                   = 1,66%
			Exitem_electronics              = 2,33%
			Exitem_fueltank                 = 0,66%
			Exitem_gascooker                = 1,00%
			Exitem_glue                     = 1,66%
			Exitem_rotor                    = 0,66%
			Exitem_measuringtape            = 1,66%
			Exitem_bucket                   = 3,32%
			Exitem_multimeter               = 1,00%
			Exitem_pencil                   = 1,66%
			Exitem_peptobismol              = 1,00%
			Exitem_cloth                    = 3,32%
			Exitem_drum                     = 1,66%
			Exitem_plywood                  = 1,99%
			Exitem_scrapmetal               = 3,32%
			Exitem_cot                      = 1,00%
			Exitem_toolbox                  = 0,33%
			Exitem_trucktire                = 0,66%
			Exitem_carbattery               = 0,66%
			Exitem_board                    = 1,00%
			Exitem_windshield               = 0,66%
		*/
		IndustrialItems[] = {"Exile_Item_WaterCanisterEmpty", "Exitem_scrapmetal", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exitem_pencil", "Exitem_apsi", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exitem_scrapmetal", "Exitem_bucket", "Exitem_cloth", "Exile_Item_Pliers", "Exitem_cloth", "Exitem_electronics", "Exitem_electricalcomp", "Exitem_electricalcomp", "Exitem_disinfectant", "Exitem_cloth", "Exile_Melee_Shovel", "Exitem_drum", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_LightBulb", "Exile_Item_WaterCanisterEmpty", "Exitem_plywood", "Exitem_peptobismol", "Exile_Melee_SledgeHammer", "Exitem_electricalcomp", "Exitem_windshield", "Exile_Item_Knife", "Exitem_cloth", "Exile_Item_ExtensionCord", "Exitem_apsi", "Exitem_drum", "Exile_Item_LightBulb", "Exitem_bucket", "Exile_Item_ScrewDriver", "Exitem_cot", "Exitem_toolbox", "Exile_Item_Rope", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exitem_scrapmetal", "Exile_Item_Wrench", "Exitem_drum", "Exile_Item_Hammer", "Exile_Melee_Axe", "Exitem_peptobismol", "Exile_Item_PortableGeneratorKit", "Exitem_nails", "Exitem_nails", "Exitem_torch", "Exitem_bucket", "Exile_Item_JunkMetal", "Exile_Item_LightBulb", "Exitem_cinderblock", "Exitem_tarp", "Exile_Melee_Axe", "Exitem_nails", "Exitem_tarp", "Exile_Melee_Axe", "Exitem_bucket", "Exitem_cinderblock", "Exitem_measuringtape", "Exitem_multimeter", "Exitem_plywood", "Exile_Item_JunkMetal", "Exitem_board", "Exitem_glue", "Exitem_engine", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exitem_electricalcomp", "Exile_Item_PortableGeneratorKit", "Exile_Item_ScrewDriver", "Exitem_nails", "Exitem_bucket", "Exile_Item_WaterCanisterEmpty", "Exitem_trucktire", "Exitem_bucket", "Exitem_fueltank", "Exitem_cloth", "Exitem_board", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_MetalBoard", "Exitem_multimeter", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exitem_scrapmetal", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exitem_nails", "Exitem_glue", "Exitem_electronics", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalBoard", "Exitem_carbattery", "Exitem_electronics", "Exitem_electricalcomp", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exitem_glue", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Hammer", "Exitem_gascooker", "Exile_Item_Foolbox", "Exile_Item_Carwheel", "Exitem_scrapmetal", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exitem_nails", "Exitem_cot", "Exitem_pencil", "Exile_Item_Pliers", "Exitem_board", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Melee_Shovel", "Exitem_cinderblock", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exitem_plywood", "Exitem_cinderblock", "Exitem_airhorn", "Exitem_electricalcomp", "Exile_Item_FloodLightKit", "Exitem_multimeter", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exitem_electricalcomp", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Hammer", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_Knife", "Exile_Item_CordlessScrewdriver", "Exile_Item_Grinder", "Exitem_nails", "Exile_Item_ScrewDriver", "Exile_Item_ThermalScannerPro", "Exile_Item_ExtensionCord", "Exile_Item_MetalScrews", "Exitem_measuringtape", "Exitem_plywood", "Exitem_nails", "Exile_Item_Cement", "Exitem_electricalcomp", "Exitem_cloth", "Exile_Melee_Shovel", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Item_Handsaw", "Exitem_plywood", "Exitem_engine", "Exitem_measuringtape", "Exile_Item_ScrewDriver", "Exitem_electronics", "Exitem_electricalcomp", "Exile_Item_LightBulb", "Exitem_fueltank", "Exitem_drum", "Exile_Item_Pliers", "Exitem_carbattery", "Exitem_gascooker", "Exile_Item_Rope", "Exile_Melee_SledgeHammer", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exitem_scrapmetal", "Exitem_glue", "Exitem_plywood", "Exile_Item_Foolbox", "Exile_Item_ExtensionCord", "Exile_Item_Rope", "Exile_Item_JunkMetal", "Exitem_engine", "Exile_Item_Hammer", "Exitem_measuringtape", "Exitem_engine", "Exile_Item_Foolbox", "Exitem_nails", "Exile_Melee_SledgeHammer", "Exile_Item_CamoTentKit", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Item_Sand", "Exitem_electricalcomp", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exitem_cot", "Exile_Melee_SledgeHammer", "Exile_Item_Grinder", "Exitem_electronics", "Exitem_scrapmetal", "Exitem_bucket", "Exitem_bucket", "Exile_Item_MetalBoard", "Exile_Item_WaterCanisterEmpty", "Exitem_tarp", "Exile_Item_Grinder", "Exile_Item_MetalBoard", "Exile_Item_Cement", "Exile_Item_Pliers", "Exitem_cloth", "Exitem_tarp", "Exitem_drum", "Exile_Item_Handsaw", "Exitem_cloth", "Exile_Item_MetalScrews", "Exitem_pencil", "Exile_Melee_Shovel", "Exile_Item_Sand", "Exile_Item_Pliers", "Exitem_peptobismol", "Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exitem_electronics", "Exitem_pencil", "Exile_Item_MetalScrews", "Exile_Item_FloodLightKit", "Exitem_airhorn", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_Wrench", "Exitem_disinfectant", "Exitem_rotor", "Exile_Item_CamoTentKit", "Exile_Item_LightBulb", "Exile_Item_Rope", "Exile_Item_Pliers", "Exitem_electronics", "Exile_Melee_Axe", "Exitem_nails", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Item_CordlessScrewdriver", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Melee_SledgeHammer", "Exitem_tarp", "Exitem_glue", "Exitem_cinderblock", "Exitem_engine", "Exitem_scrapmetal", "Exile_Item_CamoTentKit", "Exile_Item_CamoTentKit", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exitem_bucket", "Exitem_pencil", "Exitem_measuringtape", "Exile_Melee_Axe", "Exitem_camera", "Exile_Item_Grinder", "Exitem_torch", "Exitem_bucket", "Exitem_cloth", "Exitem_scrapmetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Wrench", "Exitem_cloth", "Exitem_scrapmetal", "Exitem_gascooker", "Exitem_trucktire", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exitem_disinfectant", "Exitem_rotor", "Exile_Item_Rope", "Exitem_windshield"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 36,36%
			Exile_Item_FuelCanisterEmpty = 45,45%
			Exile_Item_DuctTape          = 9,09%
			Exitem_tire_repair_kit       = 9,09%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exitem_tire_repair_kit", "Exile_Item_FuelCanisterEmpty"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25,00%
			Chemlight_green  = 25,00%
			Chemlight_red    = 25,00%
			Chemlight_yellow = 25,00%
		*/
		Chemlights[] = {"Chemlight_red", "Chemlight_blue", "Chemlight_green", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25,00%
			FlareRed_F    = 25,00%
			FlareWhite_F  = 25,00%
			FlareYellow_F = 25,00%
		*/
		RoadFlares[] = {"FlareYellow_F", "FlareRed_F", "FlareWhite_F", "FlareGreen_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14,29%
			SmokeShellRed    = 14,29%
			SmokeShellGreen  = 14,29%
			SmokeShellYellow = 14,29%
			SmokeShellPurple = 14,29%
			SmokeShellBlue   = 14,29%
			SmokeShellOrange = 14,29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShellPurple", "SmokeShellYellow", "SmokeShellOrange", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100,00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50,00%
			Exile_Item_BaseCameraKit = 50,00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 2,63%
			Exile_Item_Magazine02         = 2,63%
			Exile_Item_Magazine03         = 2,63%
			Exile_Item_Magazine04         = 2,63%
			Exile_Item_Can_Empty          = 10,53%
			Exile_Item_PlasticBottleEmpty = 10,53%
			Exile_Item_ToiletPaper        = 10,53%
			Exitem_book2                  = 5,26%
			Exitem_book1                  = 5,26%
			Exitem_book3                  = 5,26%
			Exitem_can_crushed2           = 10,53%
			Exitem_can_crushed            = 10,53%
			Exitem_documents              = 5,26%
			Exitem_feathers               = 2,63%
			Exitem_pillow_flannel         = 5,26%
			Exitem_pillow                 = 5,26%
			Exile_Item_SleepingMat        = 2,63%
		*/
		Trash[] = {"Exitem_book3", "Exitem_book1", "Exile_Item_ToiletPaper", "Exitem_can_crushed", "Exitem_pillow", "Exile_Item_Magazine03", "Exitem_can_crushed2", "Exitem_can_crushed", "Exitem_feathers", "Exile_Item_PlasticBottleEmpty", "Exitem_can_crushed", "Exitem_pillow_flannel", "Exitem_pillow_flannel", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exitem_documents", "Exitem_pillow", "Exitem_can_crushed2", "Exitem_can_crushed", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exitem_book2", "Exile_Item_Can_Empty", "Exitem_book3", "Exitem_can_crushed2", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_SleepingMat", "Exitem_documents", "Exile_Item_PlasticBottleEmpty", "Exitem_book1", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exitem_can_crushed2", "Exile_Item_Magazine02", "Exitem_book2", "Exile_Item_ToiletPaper"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_FireExtinguisher = 50,00%
			Exile_Item_OilCanister      = 50,00%
		*/
		Unused[] = {"Exile_Item_OilCanister", "Exile_Item_FireExtinguisher"};
	};
};