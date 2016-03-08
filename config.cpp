/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
};

class CfgCraftingRecipes
{
	
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft a Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_BushKit_Green"}
	};
	components[] = 
	{
		{10, "Exile_Item_Leaves"},
		{5, "Exile_Item_WoodSticks"},
		{1, "Exile_Item_Rope"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_B_GhillieSuit							{ quality = 2; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_I_GhillieSuit							{ quality = 2; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_O_GhillieSuit							{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 3; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 2; price = 60; };
	class H_HelmetB_black							{ quality = 2; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 60; };
	class H_HelmetB_grass							{ quality = 2; price = 60; };
	class H_HelmetB_paint							{ quality = 2; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 60; };
	class H_HelmetB_sand							{ quality = 2; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 2; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 3; price = 150; };
	class H_HelmetO_oucamo							{ quality = 3; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 3; price = 1000; };
	class optic_NVS									{ quality = 2; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = 3; price = 1500; };
	//class optic_tws_mg								{ quality = 3; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 3; price = 10000; };
	class Exile_Item_CodeLock						{ quality = 2; price = 5000; };
	//class Exile_Item_Laptop						{ quality = 2; price = 9000; };
	//class Exile_Item_BaseCameraKit				{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	//class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Exile_Item_MetalWire						{ quality = 1; price = 100; };
	//class Exile_Item_Cement							{ quality = 1; price = 20; };
	//class Exile_Item_Sand							{ quality = 1; price = 20; };
	//class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Exile_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 40; }; //100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 1; price = 300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 100; };
	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1250; };
	//class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	//class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	//class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	//class Exile_Item_Hammer						{ quality = 1; price = 600; };
	//class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	//class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	//class Exile_Item_Shovel						{ quality = 1; price = 700; };
	//class Exile_Item_Wrench						{ quality = 1; price = 250; };
	//class Exile_Item_SleepingMat					{ quality = 1; price = 1250; };
	//class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	//class Exile_Item_ZipTie						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };	
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 2; price = 200; };
	class B_Bergen_mcamo							{ quality = 2; price = 200; };
	class B_Bergen_rgr								{ quality = 2; price = 200; };
	class B_Bergen_sgg								{ quality = 2; price = 200; };
	class B_Carryall_cbr							{ quality = 3; price = 300; };
	class B_Carryall_khk							{ quality = 3; price = 300; };
	class B_Carryall_mcamo							{ quality = 3; price = 300; };
	class B_Carryall_ocamo							{ quality = 3; price = 300; };
	class B_Carryall_oli							{ quality = 3; price = 300; };
	class B_Carryall_oucamo							{ quality = 3; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag 						{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 2; price = 350; };
	class MMG_01_hex_F								{ quality = 3; price = 800; };
	class MMG_01_tan_F								{ quality = 3; price = 800; };
	class MMG_02_black_F							{ quality = 3; price = 450; };
	class MMG_02_camo_F								{ quality = 3; price = 450; };
	class MMG_02_sand_F								{ quality = 3; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 3; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 27500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 27500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 50000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 45000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 28000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 28000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 17000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 17000; };
	
	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 33000; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 33000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 43000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Military		{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 1; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 1; price = 20000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_White				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 48000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 26500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 16000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 44000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 48300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 43000; };
	
///////////////////////////////////////////////////////////////////////////////
	// Attachments
	///////////////////////////////////////////////////////////////////////////////
	class CUP_acc_Glock17_Flashlight 				{ quality = 1; price = 500; };
	class CUP_acc_ANPEQ_15 							{ quality = 1; price = 150; };
	class CUP_acc_ANPEQ_2 							{ quality = 1; price = 150; };
	class CUP_acc_Flashlight 						{ quality = 1; price = 500; };
	class CUP_acc_Flashlight_wdl 					{ quality = 1; price = 500; };
	class CUP_acc_Flashlight_desert 				{ quality = 1; price = 500; };
	class CUP_acc_XM8_light_module 					{ quality = 1; price = 500; };
	class CUP_acc_ANPEQ_2_camo 						{ quality = 1; price = 150; };
	class CUP_acc_ANPEQ_2_desert 					{ quality = 1; price = 150; };
	class CUP_acc_ANPEQ_2_grey 						{ quality = 1; price = 150; };
	class CUP_acc_CZ_M3X 							{ quality = 1; price = 150; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class CUP_muzzle_snds_AWM 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_SCAR_H 					{ quality = 1; price = 500; };
	class CUP_muzzle_mfsup_SCAR_H 					{ quality = 1; price = 500; };
	class CUP_muzzle_snds_XM8 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_G36_black 				{ quality = 1; price = 500; };
	class CUP_muzzle_snds_G36_desert 				{ quality = 1; price = 500; };
	class CUP_muzzle_snds_L85 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_M16_camo 					{ quality = 1; price = 500; };
	class CUP_muzzle_snds_M16 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_SCAR_L 					{ quality = 1; price = 500; };
	class CUP_muzzle_mfsup_SCAR_L 					{ quality = 1; price = 500; };
	class CUP_muzzle_PBS4 							{ quality = 1; price = 500; };
	class CUP_muzzle_PB6P9 							{ quality = 1; price = 500; };
	class CUP_muzzle_Bizon 							{ quality = 1; price = 500; };
	class CUP_muzzle_snds_M110 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_M14 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_M9 						{ quality = 1; price = 500; };
	class CUP_muzzle_snds_MicroUzi 					{ quality = 1; price = 500; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class CUP_optic_PSO_1 							{ quality = 1; price = 1500; };
	class CUP_optic_PSO_3 							{ quality = 1; price = 1500; };
	class CUP_optic_Kobra 							{ quality = 1; price = 1500; };
	class CUP_optic_GOSHAWK 						{ quality = 1; price = 1500; };
	class CUP_optic_NSPU 							{ quality = 1; price = 1500; };
	class CUP_optic_PechenegScope 					{ quality = 1; price = 1500; };
	class CUP_optic_HoloBlack 						{ quality = 1; price = 1500; };
	class CUP_optic_HoloWdl 						{ quality = 1; price = 1500; };
	class CUP_optic_HoloDesert 						{ quality = 1; price = 1500; };
	class CUP_optic_Eotech533 						{ quality = 1; price = 1500; };
	class CUP_optic_Eotech533Grey 					{ quality = 1; price = 1500; };
	class CUP_optic_CompM4 							{ quality = 1; price = 1500; };
	class CUP_optic_SUSAT 							{ quality = 1; price = 1500; };
	class CUP_optic_CWS  							{ quality = 1; price = 1500; };
	class CUP_optic_RCO 							{ quality = 1; price = 1500; };
	class CUP_optic_RCO_desert 						{ quality = 1; price = 1500; };
	class CUP_optic_CompM2_Woodland2 				{ quality = 1; price = 1500; };
	class CUP_optic_CompM2_Woodland 				{ quality = 1; price = 1500; };
	class CUP_optic_CompM2_Black 					{ quality = 1; price = 1500; };
	class CUP_optic_CompM2_Desert 					{ quality = 1; price = 1500; };
	class CUP_optic_ACOG 							{ quality = 1; price = 1500; };
	class CUP_optic_SB_3_12x50_PMII 				{ quality = 1; price = 1500; };
	class CUP_optic_AN_PAS_13c2 					{ quality = 1; price = 1500; };
	class CUP_optic_AN_PVS_4 						{ quality = 1; price = 1500; };
	class CUP_optic_AN_PVS_10 						{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldMk4 						{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldM3LR 					{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldMk4_CQ_T 				{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldMk4_MRT_tan 				{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert 	{ quality = 1; price = 1500; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland 	{ quality = 1; price = 1500; };
	class CUP_optic_Leupold_VX3 					{ quality = 1; price = 1500; };
	class CUP_optic_ElcanM145 						{ quality = 1; price = 1500; };
	class CUP_optic_ELCAN_SpecterDR 				{ quality = 1; price = 1500; };
	class CUP_optic_AN_PAS_13c1 					{ quality = 1; price = 1500; };
	class CUP_optic_SB_11_4x20_PM 					{ quality = 1; price = 1500; };
	class CUP_optic_ZDDot 							{ quality = 1; price = 1500; };
	class CUP_optic_MRad 							{ quality = 1; price = 1500; };
	class CUP_optic_TrijiconRx01_black 				{ quality = 1; price = 1500; };
	class CUP_optic_TrijiconRx01_desert 			{ quality = 1; price = 1500; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class CUP_100Rnd_556x45_BetaCMag    					{ quality = 2; price = 1300; };
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag			{ quality = 2; price = 1300; };
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag		{ quality = 2; price = 1300; };
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag		{ quality = 2; price = 1300; };
    class CUP_100Rnd_TE4_Green_Tracer_556x45_M249    		{ quality = 2; price = 800; };
	class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249			{ quality = 2; price = 800; };
	class CUP_100Rnd_TE4_Red_Tracer_556x45_M249				{ quality = 2; price = 800; };
    class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M    	{ quality = 2; price = 800; };
    class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M    	{ quality = 2; price = 800; };
    class CUP_10Rnd_762x51_CZ750    						{ quality = 2; price = 500; };
	class CUP_10Rnd_762x51_CZ750_Tracer						{ quality = 2; price = 500; };
    class CUP_10Rnd_762x54_SVD_M    						{ quality = 2; price = 800; };
    class CUP_10Rnd_9x19_Compact    						{ quality = 2; price = 400; };
    class CUP_10Rnd_9x39_SP5_VSS_M    						{ quality = 2; price = 500; };
    class CUP_20Rnd_9x39_SP5_VSS_M    						{ quality = 2; price = 700; };
    class CUP_10x_303_M    									{ quality = 2; price = 800; };
    class CUP_15Rnd_9x19_M9    								{ quality = 2; price = 400; };
    class CUP_17Rnd_9x19_glock17    						{ quality = 2; price = 400; };
    class CUP_18Rnd_9x19_Phantom    						{ quality = 2; price = 400; };
    class CUP_1Rnd_HE_GP25_M    							{ quality = 2; price = 1000; };
    class CUP_1Rnd_HEDP_M203    							{ quality = 2; price = 1000; };
    class CUP_1Rnd_SMOKE_GP25_M    							{ quality = 2; price = 200; };
    class CUP_1Rnd_Smoke_M203    							{ quality = 2; price = 200; };
    class CUP_1Rnd_SmokeGreen_M203    						{ quality = 2; price = 200; };
    class CUP_1Rnd_SmokeRed_M203    						{ quality = 2; price = 200; };
    class CUP_1Rnd_SmokeYellow_M203    						{ quality = 2; price = 200; };
    class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1    		{ quality = 2; price = 800; };
    class CUP_200Rnd_TE4_Green_Tracer_556x45_M249    		{ quality = 2; price = 800; };
    class CUP_20Rnd_762x51_DMR    							{ quality = 2; price = 800; };
    class CUP_20Rnd_762x51_FNFAL_M    						{ quality = 2; price = 800; };
    class CUP_20Rnd_762x51_B_SCAR    						{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR			{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR				{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR			{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR			{ quality = 2; price = 800; };
    class CUP_20Rnd_762x51_B_M110    						{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110			{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110				{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110			{ quality = 2; price = 800; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110			{ quality = 2; price = 800; };
    class CUP_20Rnd_762x51_CZ805B    						{ quality = 2; price = 800; };
    class CUP_30Rnd_9x19_EVO    							{ quality = 2; price = 500; };
    class CUP_20Rnd_B_AA12_Pellets    						{ quality = 2; price = 1000; };
	class CUP_20Rnd_B_AA12_74Slug    						{ quality = 2; price = 1000; };
	class CUP_20Rnd_B_AA12_HE		   						{ quality = 2; price = 1800; };	
    class CUP_30Rnd_545x39_AK_M    							{ quality = 2; price = 700; };
    class CUP_30Rnd_556x45_G36    							{ quality = 2; price = 600; };
	class CUP_30Rnd_TE1_Red_Tracer_556x45_G36				{ quality = 2; price = 600; };
	class CUP_30Rnd_TE1_Green_Tracer_556x45_G36				{ quality = 2; price = 600; };
	class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36			{ quality = 2; price = 600; };
    class CUP_30Rnd_556x45_Stanag    						{ quality = 2; price = 600; };
    class CUP_30Rnd_762x39_AK47_M    						{ quality = 2; price = 650; };
    class CUP_30Rnd_Sa58_M    								{ quality = 2; price = 500; };
	class CUP_30Rnd_Sa58_M_TracerG							{ quality = 2; price = 500; };
    class CUP_30Rnd_9x19_MP5    							{ quality = 2; price = 400; };
    class CUP_5Rnd_127x108_KSVK_M    						{ quality = 2; price = 750; };
    class CUP_5Rnd_127x99_as50_M    						{ quality = 2; price = 1000; };
    class CUP_5Rnd_762x51_M24    							{ quality = 2; price = 750; };
    class CUP_5Rnd_86x70_L115A1    							{ quality = 2; price = 1000; };
    class CUP_5x_22_LR_17_HMR_M    							{ quality = 2; price = 700; };
    class CUP_64Rnd_9x19_Bizon_M    						{ quality = 2; price = 500; };
    class CUP_6Rnd_45ACP_M    								{ quality = 2; price = 400; };
    class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M    	{ quality = 2; price = 700; };
	class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M    	{ quality = 2; price = 700; };
    class CUP_7Rnd_45ACP_1911    							{ quality = 2; price = 500; };
    class CUP_8Rnd_9x18_Makarov_M    						{ quality = 2; price = 500; };
    class CUP_8Rnd_9x18_MakarovSD_M    						{ quality = 2; price = 500; };
    class CUP_8Rnd_B_Beneli_74Slug    						{ quality = 2; price = 500; };
	class CUP_50Rnd_UK59_762x54R_Tracer						{ quality = 2; price = 800; };
    class CUP_8Rnd_B_Saiga12_74Slug_M    					{ quality = 2; price = 500; };
    class CUP_HandGrenade_L109A1_HE    						{ quality = 2; price = 120; };
    class CUP_FlareGreen_M203    							{ quality = 2; price = 200; };
    class CUP_FlareRed_GP25_M    							{ quality = 2; price = 200; };
    class CUP_FlareWhite_GP25_M    							{ quality = 2; price = 200; };
    class CUP_FlareWhite_M203    							{ quality = 2; price = 200; };
    class CUP_HandGrenade_RGD5    							{ quality = 2; price = 800; };
    class CUP_HandGrenade_M67    							{ quality = 2; price = 800; };
    class CUP_Mine_M   										{ quality = 2; price = 100; };
    class CUP_PipeBomb_M    								{ quality = 2; price = 100; };
	class CUP_10Rnd_127x99_M107								{ quality = 2; price = 1000; };
	class CUP_30Rnd_9x19_UZI								{ quality = 2; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares AND SMOKES
	///////////////////////////////////////////////////////////////////////////////
	class CUP_6Rnd_Smoke_M203						{ quality = 1; price = 300; };
	class CUP_6Rnd_SmokeRed_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_SmokeGreen_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_SmokeYellow_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_FlareYellow_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_FlareRed_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_FlareGreen_M203					{ quality = 1; price = 300; };
	class CUP_6Rnd_FlareWhite_M203					{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
    class CUP_hgun_Colt1911 						{ quality = 1; price = 500; };
    class CUP_hgun_Compact 							{ quality = 1; price = 500; };
    class CUP_hgun_Makarov 							{ quality = 1; price = 500; };
    class CUP_hgun_MicroUzi 						{ quality = 1; price = 1500; };
    class CUP_hgun_TaurusTracker455 				{ quality = 1; price = 500; };
    class CUP_hgun_TaurusTracker455_gold 			{ quality = 1; price = 500; };
    class CUP_hgun_M9 								{ quality = 1; price = 500; };
    class CUP_hgun_SA61 							{ quality = 1; price = 1500; };
    class CUP_hgun_Duty 							{ quality = 1; price = 500; };
    class CUP_hgun_Phantom 							{ quality = 1; price = 500; };
    class CUP_hgun_PB6P9 							{ quality = 1; price = 500; };
    class CUP_hgun_Glock17 							{ quality = 1; price = 500; };	

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
    class CUP_smg_MP5SD6 							{ quality = 1; price = 800; };
    class CUP_smg_MP5A5 							{ quality = 1; price = 800; };
    class CUP_smg_EVO 								{ quality = 1; price = 800; };
    class CUP_smg_bizon 							{ quality = 1; price = 800; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
    class CUP_lmg_M249_para 						{ quality = 1; price = 3500; };
    class CUP_lmg_Mk48_des 							{ quality = 1; price = 3500; };
    class CUP_lmg_Mk48_wdl 							{ quality = 1; price = 3500; };
    class CUP_lmg_L110A1 							{ quality = 1; price = 4000; };
    class CUP_lmg_Pecheneg 							{ quality = 1; price = 2500; };
    class CUP_lmg_UK59 								{ quality = 1; price = 2500; };
    class CUP_lmg_L7A2 								{ quality = 1; price = 2500; };
    class CUP_lmg_M60E4 							{ quality = 1; price = 3500; };
    class CUP_lmg_M240 								{ quality = 1; price = 3000; };
    class CUP_lmg_M249 								{ quality = 1; price = 3500; };
    class CUP_lmg_PKM 								{ quality = 1; price = 4000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Explosive and Shotgun
	///////////////////////////////////////////////////////////////////////////////
	class CUP_sgun_AA12 							{ quality = 1; price = 4000; };
    class CUP_sgun_M1014 							{ quality = 1; price = 1000; };
    class CUP_sgun_Saiga12K 						{ quality = 1; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////	
    class CUP_arifle_Mk16_CQC_FG 					{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_CQC_SFG 					{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_CQC_EGLM 					{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_STD 						{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_STD_FG 					{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_STD_SFG 					{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_STD_EGLM 					{ quality = 1; price = 1850; };
    class CUP_arifle_Mk16_SV 						{ quality = 1; price = 1800; };
    class CUP_arifle_Mk17_CQC 						{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_CQC_FG 					{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_CQC_SFG 					{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_CQC_EGLM 					{ quality = 1; price = 2500; };
    class CUP_arifle_Mk17_STD 						{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_STD_FG 					{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_STD_SFG 					{ quality = 1; price = 2200; };
    class CUP_arifle_Mk17_STD_EGLM 					{ quality = 1; price = 2500; };
    class CUP_arifle_Mk20 							{ quality = 1; price = 2200; };
    class CUP_arifle_XM8_Compact_Rail 				{ quality = 1; price = 1800; };
    class CUP_arifle_XM8_Railed 					{ quality = 1; price = 1800; };
    class CUP_arifle_M16A4_Base 					{ quality = 1; price = 1800; };
    class CUP_arifle_M4A1_BUIS_GL 					{ quality = 1; price = 1850; };
    class CUP_arifle_M4A1_BUIS_camo_GL 				{ quality = 1; price = 1850; };
    class CUP_arifle_M4A1_BUIS_desert_GL 			{ quality = 1; price = 1850; };
    class CUP_arifle_M4A1_black 					{ quality = 1; price = 1800; };
    class CUP_arifle_M4A1_desert 					{ quality = 1; price = 1800; };
    class CUP_arifle_L85A2 							{ quality = 1; price = 1800; };
    class CUP_arifle_L85A2_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_L86A2 							{ quality = 1; price = 1800; };
    class CUP_arifle_FNFAL_railed 					{ quality = 1; price = 2200; };
    class CUP_arifle_AK107_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_Sa58P_des 						{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58V_camo 					{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58RIS1 						{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58RIS1_des 					{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58RIS2 						{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58RIS2_camo 					{ quality = 1; price = 2200; };
    class CUP_arifle_CZ805_A1 						{ quality = 1; price = 1800; };
    class CUP_arifle_CZ805_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_CZ805_B_GL 					{ quality = 1; price = 1850; };
    class CUP_arifle_CZ805_B 						{ quality = 1; price = 1800; };
    class CUP_arifle_XM8_Carbine 					{ quality = 1; price = 1800; };
    class CUP_arifle_XM8_Carbine_FG 				{ quality = 1; price = 1800; };
    class CUP_arifle_XM8_Carbine_GL 				{ quality = 1; price = 1850; };
    class CUP_arifle_XM8_Compact 					{ quality = 1; price = 1800; };
    class CUP_arifle_xm8_SAW 						{ quality = 1; price = 2200; };
    class CUP_arifle_xm8_sharpshooter 				{ quality = 1; price = 1800; };
    class CUP_arifle_Mk16_CQC 						{ quality = 1; price = 1800; };
    class CUP_arifle_Sa58P 							{ quality = 1; price = 2200; };
    class CUP_arifle_Sa58V 							{ quality = 1; price = 2200; };
    class CUP_arifle_M16A2 							{ quality = 1; price = 1800; };
    class CUP_arifle_M16A2_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_M16A4_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_M4A1 							{ quality = 1; price = 1800; };
    class CUP_arifle_M4A1_camo 						{ quality = 1; price = 1800; };
    class CUP_arifle_FNFAL 							{ quality = 1; price = 2200; };
    class CUP_arifle_G36A 							{ quality = 1; price = 1800; };
    class CUP_arifle_G36A_camo 						{ quality = 1; price = 1800; };
    class CUP_arifle_G36K 							{ quality = 1; price = 1800; };
    class CUP_arifle_G36K_camo 						{ quality = 1; price = 1800; };
    class CUP_arifle_G36C 							{ quality = 1; price = 1800; };
    class CUP_arifle_G36C_camo 						{ quality = 1; price = 1800; };
    class CUP_arifle_MG36 							{ quality = 1; price = 1800; };
    class CUP_arifle_MG36_camo 						{ quality = 1; price = 1800; };
    class CUP_arifle_AK74 							{ quality = 1; price = 1800; };
    class CUP_arifle_AK107 							{ quality = 1; price = 1800; };
    class CUP_arifle_AKS74 							{ quality = 1; price = 1800; };
    class CUP_arifle_AKS74U 						{ quality = 1; price = 1800; };
    class CUP_arifle_AK74_GL 						{ quality = 1; price = 1850; };
    class CUP_arifle_AKM 							{ quality = 1; price = 2200; };
    class CUP_arifle_AKS 							{ quality = 1; price = 2200; };
    class CUP_arifle_AKS_Gold 						{ quality = 1; price = 2900; };
    class CUP_arifle_RPK74 							{ quality = 1; price = 2500; };
    class CUP_arifle_AK74_GL_kobra 					{ quality = 1; price = 1800; };
    class CUP_arifle_CZ805_A2 						{ quality = 1; price = 2200; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////	
    class CUP_srifle_SVD_wdl_ghillie 				{ quality = 1; price = 3600; };
    class CUP_srifle_SVD_des_ghillie_pso 			{ quality = 1; price = 3600; };
    class CUP_srifle_DMR 							{ quality = 1; price = 3200; };
    class CUP_srifle_ksvk 							{ quality = 1; price = 3900; };
    class CUP_srifle_M110 							{ quality = 1; price = 3200; };
    class CUP_srifle_M14 							{ quality = 1; price = 3200; };
	class CUP_srifle_M14_DMR						{ quality = 1; price = 3200; };
    class CUP_srifle_M24_des 						{ quality = 1; price = 3200; };
    class CUP_srifle_M24_wdl 						{ quality = 1; price = 3200; };
    class CUP_srifle_M24_ghillie 					{ quality = 1; price = 3200; };
    class CUP_srifle_SVD 							{ quality = 1; price = 3200; };
    class CUP_srifle_SVD_des 						{ quality = 1; price = 3200; };
    class CUP_srifle_VSSVintorez 					{ quality = 1; price = 3100; };
    class CUP_srifle_CZ750 							{ quality = 1; price = 3200; };
    class CUP_srifle_Mk12SPR 						{ quality = 1; price = 3700; };
    class CUP_srifle_AS50 							{ quality = 1; price = 4200; };
    class CUP_srifle_AWM_des 						{ quality = 1; price = 4100; };
    class CUP_srifle_AWM_wdl 						{ quality = 1; price = 4100; };
    class CUP_srifle_CZ550 							{ quality = 1; price = 2200; };
    class CUP_srifle_LeeEnfield 					{ quality = 1; price = 2200; };
    class CUP_srifle_M40A3 							{ quality = 1; price = 3200; };	
	class CUP_srifle_M107_Base						{ quality = 1; price = 4000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Launchers
	///////////////////////////////////////////////////////////////////////////////
    class CUP_glaunch_M32 							{ quality = 1; price = 40000; sellprice = 2000; };
    class CUP_glaunch_M79 							{ quality = 1; price = 40000; sellprice = 2000; };
    class CUP_glaunch_Mk13 							{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_RPG18							{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_RPG7V							{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_M47							{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_MAAWS_Scope					{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_FIM92Stinger					{ quality = 1; price = 40000; sellprice = 2000; };
	class CUP_launch_M136							{ quality = 1; price = 40000; sellprice = 2000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Launcher Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_RPG18_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_SMAW_HEAA_M    						{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_SMAW_HEDP_M    						{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_Stinger_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_Strela_2_M    						{ quality = 2; price = 15000; sellprice = 2000; };
	class CUP_NLAW_M   						 		{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_OG7_M    								{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_PG7VL_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_PG7VR_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_Igla_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_Javelin_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_M136_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_MAAWS_HEAT_M   						{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_MAAWS_HEDP_M  						{ quality = 2; price = 15000; sellprice = 2000; };
	class CUP_6Rnd_HE_M203    						{ quality = 2; price = 15000; sellprice = 2000; };
	class CUP_1Rnd_HE_M203    						{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_AT13_M    							{ quality = 2; price = 15000; sellprice = 2000; };
    class CUP_Dragon_EP1_M    						{ quality = 2; price = 15000; sellprice = 2000; };
	
///////////////////////////////////////////////////////////////////////////////
	//CUP Unarmed
	///////////////////////////////////////////////////////////////////////////////
	class CUP_C_Datsun	                    { quality = 1; price = 10000; };
	class CUP_C_Datsun_4seat	            { quality = 1; price = 10000; };
	class CUP_C_Datsun_Plain	            { quality = 1; price = 10000; };
	class CUP_C_Datsun_Covered	            { quality = 1; price = 10000; };
	class CUP_C_Datsun_Tubeframe	        { quality = 1; price = 10000; };
	class CUP_C_Ural_Civ_01	                { quality = 1; price = 32500; };
	class CUP_C_Ural_Civ_02	                { quality = 1; price = 32500; };
	class CUP_C_Ural_Civ_03	                { quality = 1; price = 32500; };
	class CUP_C_Ural_Open_Civ_01	        { quality = 1; price = 32500; };
	class CUP_C_Ural_Open_Civ_02	        { quality = 1; price = 32500; };
	class CUP_C_Ural_Open_Civ_03	        { quality = 1; price = 32500; };
	class CUP_O_Ural_TKA	                { quality = 1; price = 32500; };
	class CUP_O_Ural_RU	                    { quality = 1; price = 32500; };
	class CUP_I_Ural_UN	                    { quality = 1; price = 32500; };
	class CUP_B_Ural_CDF	                { quality = 1; price = 32500; };
	class CUP_O_Ural_CHDKZ	                { quality = 1; price = 32500; };
	class CUP_O_Ural_SLA	                { quality = 1; price = 32500; };
	class CUP_B_Ural_Reammo_CDF             { quality = 1; price = 68000; };
	class CUP_O_Ural_Open_TKA	            { quality = 1; price = 32500; };
	class CUP_B_Ural_Open_CDF	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Open_RU	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Open_CHDKZ	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Open_SLA	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Empty_SLA	            { quality = 1; price = 32500; };
	class CUP_B_Ural_Empty_CDF	            { quality = 1; price = 32500; };
	class CUP_I_Ural_Empty_UN	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Empty_RU	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Empty_CHDKZ	        { quality = 1; price = 32500; };
	class CUP_O_Ural_Empty_TKA	            { quality = 1; price = 32500; };
	class CUP_O_Ural_Repair_SLA	            { quality = 1; price = 56000; };
	class CUP_O_Ural_Repair_TKA	            { quality = 1; price = 56000; };
	class CUP_O_Ural_Repair_CHDKZ	        { quality = 1; price = 56000; };
	class CUP_O_Ural_Repair_RU	            { quality = 1; price = 56000; };
	class CUP_I_Ural_Repair_UN	            { quality = 1; price = 56000; };
	class CUP_B_Ural_Repair_CDF	            { quality = 1; price = 56000; };
	class CUP_B_Ural_Refuel_CDF	            { quality = 1; price = 58500; };
	class CUP_O_Ural_Refuel_RU	            { quality = 1; price = 58500; };
	class CUP_O_Ural_Refuel_CHDKZ	        { quality = 1; price = 58500; };
	class CUP_O_Ural_Refuel_TKA	            { quality = 1; price = 58500; };
	class CUP_O_Ural_Refuel_SLA	            { quality = 1; price = 58500; };
	class CUP_C_LR_Transport_CTK	        { quality = 1; price = 35800; };
	class CUP_O_LR_Transport_TKA	        { quality = 1; price = 35800; };
	class CUP_O_LR_Transport_TKM	        { quality = 1; price = 35800; };
	class CUP_B_LR_Transport_CZ_W	        { quality = 1; price = 35800; };
	class CUP_B_LR_Transport_CZ_D	        { quality = 1; price = 35800; };
	class CUP_B_LR_Transport_GB_W	        { quality = 1; price = 35800; };
	class CUP_B_LR_Transport_GB_D	        { quality = 1; price = 35800; };
	class CUP_B_LR_Ambulance_CZ_W	        { quality = 1; price = 25800; };
	class CUP_B_LR_Ambulance_CZ_D	        { quality = 1; price = 25800; };
	class CUP_B_LR_Ambulance_GB_W	        { quality = 1; price = 25800; };
	class CUP_B_LR_Ambulance_GB_D	        { quality = 1; price = 25800; };
	class CUP_O_LR_Ambulance_TKA	        { quality = 1; price = 25800; };
	class CUP_C_UAZ_Unarmed_TK_CIV	        { quality = 1; price = 15500; };
	class CUP_O_UAZ_Unarmed_RU	            { quality = 1; price = 15500; };
	class CUP_I_UAZ_Unarmed_UN	            { quality = 1; price = 15500; };
	class CUP_O_UAZ_Unarmed_TKA	            { quality = 1; price = 15500; };
	class CUP_O_UAZ_Unarmed_CHDKZ	        { quality = 1; price = 15500; };
	class CUP_B_UAZ_Unarmed_ACR	            { quality = 1; price = 15500; };
	class CUP_B_UAZ_Unarmed_CDF	            { quality = 1; price = 15500; };
	class CUP_O_UAZ_Open_CHDKZ	            { quality = 1; price = 15500; };
	class CUP_O_UAZ_Open_RU	                { quality = 1; price = 15500; };
	class CUP_O_UAZ_Open_TKA	            { quality = 1; price = 15500; };
	class CUP_I_UAZ_Open_UN	                { quality = 1; price = 15500; };
	class CUP_B_UAZ_Open_ACR	            { quality = 1; price = 15500; };
	class CUP_B_UAZ_Open_CDF	            { quality = 1; price = 15500; };
	class CUP_C_UAZ_Open_TK_CIV	            { quality = 1; price = 15500; };
	class CUP_B_HMMWV_Unarmed_USA	        { quality = 1; price = 30500; };
	class CUP_B_HMMWV_Unarmed_USMC	        { quality = 1; price = 30000; };
	class CUP_B_HMMWV_Ambulance_USMC	    { quality = 1; price = 30000; };
	class CUP_B_HMMWV_Ambulance_USA		    { quality = 1; price = 30000; };
	class CUP_B_HMMWV_Ambulance_ACR	        { quality = 1; price = 30000; };
	class CUP_B_HMMWV_Transport_USA	        { quality = 1; price = 30000; };
	class CUP_I_M113_Med_RACS			    { quality = 1; price = 25500; };
	class CUP_I_M113_Med_UN	    		    { quality = 1; price = 25500; };	
	class CUP_C_Golf4_whiteblood_Civ		{ quality = 1; price = 25500; };
	class CUP_C_Golf4_camo_Civ				{ quality = 1; price = 25500; };
	class CUP_C_Golf4_camodigital_Civ		{ quality = 1; price = 25500; };
	class CUP_C_Golf4_camodark_Civ			{ quality = 1; price = 25500; };
	class CUP_C_Golf4_reptile_Civ			{ quality = 1; price = 25500; };
	class CUP_C_Golf4_kitty_Civ				{ quality = 1; price = 25500; };
	
	///////////////////////////////////////////////////////////////////////////////
	//CUP Armed
	///////////////////////////////////////////////////////////////////////////////
	class CUP_O_LR_MG_TKM	                { quality = 1; price = 185000; };
	class CUP_O_LR_MG_TKA	                { quality = 1; price = 185000; };
	class CUP_I_Datsun_PK	                { quality = 1; price = 80500; };
	class CUP_I_Datsun_PK_Random	        { quality = 1; price = 80500; };
	class CUP_I_Datsun_PK_TK	            { quality = 1; price = 80500; };
	class CUP_I_Datsun_PK_TK_Random	        { quality = 1; price = 80500; };
	class CUP_O_Datsun_PK	                { quality = 1; price = 80500; };
	class CUP_O_Datsun_PK_Random	        { quality = 1; price = 80500; };
	class CUP_O_UAZ_MG_CHDKZ	            { quality = 1; price = 160500; };
	class CUP_O_UAZ_MG_RU	                { quality = 1; price = 160500; };
	class CUP_O_UAZ_MG_TKA	                { quality = 1; price = 160500; };
	class CUP_I_UAZ_MG_UN	                { quality = 1; price = 160500; };
	class CUP_B_UAZ_MG_ACR	                { quality = 1; price = 160500; };
	class CUP_B_UAZ_MG_CDF	                { quality = 1; price = 160500; };
	class CUP_B_UAZ_AGS30_CDF	            { quality = 1; price = 163500; };
	class CUP_O_UAZ_AGS30_CHDKZ	            { quality = 1; price = 163500; };
	class CUP_O_UAZ_AGS30_RU	            { quality = 1; price = 163500; };
	class CUP_O_UAZ_AGS30_TKA	            { quality = 1; price = 163500; };
	class CUP_I_UAZ_AGS30_UN	            { quality = 1; price = 163500; };
	class CUP_I_M113_RACS		            { quality = 1; price = 185500; };
	class CUP_I_M113_UN			            { quality = 1; price = 185500; };
	class CUP_B_BRDM2_HQ_CDF	            { quality = 1; price = 170000; };
	class CUP_O_BRDM2_HQ_SLA	            { quality = 1; price = 170000; };
	class CUP_I_BRDM2_HQ_UN	            	{ quality = 1; price = 170000; };
	class CUP_I_BRDM2_HQ_NAPA	            { quality = 1; price = 170000; };
	class CUP_I_BRDM2_HQ_TK_Gue	            { quality = 1; price = 170000; };
	class CUP_O_BRDM2_HQ_TKA	            { quality = 1; price = 170000; };
	class CUP_O_BRDM2_HQ_CHDKZ	            { quality = 1; price = 170000; };
	class CUP_O_BRDM2_CHDKZ	            	{ quality = 1; price = 173000; };
	class CUP_O_BRDM2_SLA	            	{ quality = 1; price = 173000; };
	class CUP_O_BRDM2_TKA	            	{ quality = 1; price = 173000; };
	class CUP_I_BRDM2_NAPA	            	{ quality = 1; price = 173000; };
	class CUP_I_BRDM2_TK_Gue	            { quality = 1; price = 173000; };
	class CUP_I_BRDM2_UN	            	{ quality = 1; price = 173000; };
	class CUP_B_BRDM2_CDF					{ quality = 1; price = 173000; };
	class CUP_BAF_Jackal2_L2A1_W	        { quality = 1; price = 180000; };
	class CUP_BAF_Jackal2_L2A1_D	        { quality = 1; price = 180000; };
	class CUP_BAF_Jackal2_GMG_D		        { quality = 1; price = 185000; };
	class CUP_BAF_Jackal2_GMG_W		        { quality = 1; price = 185000; };
	class CUP_B_LR_Special_CZ_W	            { quality = 1; price = 178500; };
	class CUP_B_LR_Special_Des_CZ_D	        { quality = 1; price = 178500; };
	class CUP_B_LR_MG_CZ_W	                { quality = 1; price = 174500; };
	class CUP_B_LR_MG_GB_W	                { quality = 1; price = 174500; };
	class CUP_B_HMMWV_M1114_USMC	        { quality = 1; price = 175000; };
	class CUP_B_HMMWV_M2_USMC	            { quality = 1; price = 175000; };
	class CUP_B_HMMWV_Crows_M2_USA	        { quality = 1; price = 185000; };
	class CUP_B_HMMWV_M2_GPK_USA	        { quality = 1; price = 176500; };
	class CUP_B_HMMWV_M2_USA	            { quality = 1; price = 176500; };
	class CUP_B_HMMWV_DSHKM_GPK_ACR	        { quality = 1; price = 176500; };
	class CUP_B_HMMWV_AGS_GPK_ACR	        { quality = 1; price = 179500; };
	class CUP_B_HMMWV_MK19_USMC	            { quality = 1; price = 179500; };
	class CUP_B_HMMWV_MK19_USA	            { quality = 1; price = 179500; };
	class CUP_B_HMMWV_Crows_MK19_USA	    { quality = 1; price = 179500; };
	class CUP_B_HMMWV_SOV_USA	            { quality = 1; price = 178500; };
	class CUP_O_BTR60_TK				    { quality = 1; price = 325000; };
	class CUP_O_BTR90_HQ_RU	       		    { quality = 1; price = 280000; };
	class CUP_I_SUV_Armored_ION				{ quality = 1; price = 145000; };
	
	///////////////////////////////////////////////////////////////////////////////
	//CUP Helis
	///////////////////////////////////////////////////////////////////////////////
	class CUP_B_CH53E_USMC	                { quality = 1; price = 100000; };
	class CUP_B_UH1Y_UNA_F	                { quality = 1; price = 100000; };
	class CUP_B_UH1Y_MEV_F	                { quality = 1; price = 100000; };
	class CUP_C_Mi17_Civilian_RU	        { quality = 1; price = 100000; };
	class CUP_B_Mi17_CDF	                { quality = 1; price = 130000; };
	class CUP_O_Mi17_TK	                    { quality = 1; price = 130000; };
	class CUP_B_Mi17_medevac_CDF	        { quality = 1; price = 120000; };
	class CUP_B_Mi171Sh_Unarmed_ACR	        { quality = 1; price = 120000; };
	class CUP_O_Mi8_medevac_CHDKZ	        { quality = 1; price = 120000; };
	class CUP_O_Mi8_medevac_RU	            { quality = 1; price = 120000; };
	class CUP_B_Merlin_HC3_GB	            { quality = 1; price = 120000; };
	class CUP_B_Merlin_HC3A_GB	            { quality = 1; price = 120000; };
	class CUP_B_MH60S_USMC	                { quality = 1; price = 132500; };
	class CUP_B_MH60S_FFV_USMC	            { quality = 1; price = 122500; };
	class CUP_B_AW159_Unarmed_BAF	        { quality = 1; price = 120000; };
	class CUP_B_CH47F_USA	                { quality = 1; price = 122500; };
	class CUP_B_CH47F_GB	                { quality = 1; price = 122500; };
	class CUP_B_UH60M_US	                { quality = 1; price = 122500; };
	class CUP_B_UH60L_US	                { quality = 1; price = 117500; };
	class CUP_B_UH60M_FFV_US	            { quality = 1; price = 150500; };
	class CUP_B_UH60L_FFV_US	            { quality = 1; price = 150500; };
	class CUP_B_UH60M_Unarmed_US	        { quality = 1; price = 117000; };
	class CUP_B_UH60L_Unarmed_US	        { quality = 1; price = 117000; };
	class CUP_B_UH60M_Unarmed_FFV_US	    { quality = 1; price = 117000; };
	class CUP_B_UH60L_Unarmed_FFV_US	    { quality = 1; price = 117000; };
	class CUP_B_UH60M_Unarmed_FFV_MEV_US	{ quality = 1; price = 117000; };
	class CUP_B_UH60L_Unarmed_FFV_MEV_US	{ quality = 1; price = 150000; };
	class CUP_I_UH60L_RACS	                { quality = 1; price = 150500; };
	class CUP_I_UH60L_FFV_RACS	            { quality = 1; price = 150500; };
	class CUP_I_UH60L_Unarmed_RACS	        { quality = 1; price = 117000; };
	class CUP_I_UH60L_Unarmed_FFV_Racs	    { quality = 1; price = 117000; };
	class CUP_I_UH60L_Unarmed_FFV_MEV_Racs	{ quality = 1; price = 117000; };
	class CUP_B_AH1Z_NoWeapons				{ quality = 1; price = 375000; sellprice = 40000; };	// BM trader
	class B_Heli_Transport_01_F				{ quality = 1; price = 350000; sellprice = 40000; };	// BM Trader
	class CUP_O_UH1H_TKA					{ quality = 1; price = 225000; sellprice = 40000; };	// BM Trader
	class CUP_I_UH1H_TK_GUE					{ quality = 1; price = 225000; sellprice = 40000; };	// BM Trader
	class CUP_O_Mi8_CHDKZ					{ quality = 1; price = 200000; sellprice = 40000; };	// BM Trader
	class CUP_O_Mi8_SLA_1					{ quality = 1; price = 200000; sellprice = 40000; };	// BM Trader
	class CUP_B_Mi24_D_MEV_CDF				{ quality = 1; price = 200000; sellprice = 40000; };	// BM trader
	class B_Heli_Light_01_armed_F			{ quality = 1; price = 125000; sellprice = 30000; };	// BM trader
	
	///////////////////////////////////////////////////////////////////////////////
	//CUP Planes
	///////////////////////////////////////////////////////////////////////////////
	class CUP_C_DC3_CIV	                    { quality = 1; price = 25000; };
	class CUP_C_C47_CIV	                    { quality = 1; price = 25000; };
	class CUP_B_C130J_USMC	                { quality = 1; price = 50000; };
	class CUP_B_MV22_USMC	                { quality = 1; price = 200000; };
	
		///////////////////////////////////////////////////////////////////////////////
    // TRYK Glasses Glasses w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
    class TRYK_US_ESS_Glasses                           { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_WH                        { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_BLK                       { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_TAN                       { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_TAN_BLK                   { quality = 1; price = 350; };
    class TRYK_SPGEAR_Glasses                           { quality = 1; price = 350; };
    class TRYK_headset_Glasses                          { quality = 1; price = 350; };
    class TRYK_SpsetG_Glasses                           { quality = 1; price = 350; };
    class TRYK_Spset_PHC1_Glasses                       { quality = 1; price = 350; };
    class TRYK_Spset_PHC2_Glasses                       { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_H                         { quality = 1; price = 350; };
    class TRYK_US_ESS_Glasses_Cover                     { quality = 1; price = 350; };
    class TRYK_headset2_glasses                         { quality = 1; price = 350; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear
    ///////////////////////////////////////////////////////////////////////////////
    class TRYK_US_ESS_Glasses_NV                        { quality = 1; price = 1250; };
    class TRYK_US_ESS_Glasses_TAN_NV                    { quality = 1; price = 1250; };
    class TRYK_ESS_BLKTAN_NV                            { quality = 1; price = 1250; };
    class TRYK_ESS_BLKBLK_NV                            { quality = 1; price = 1250; };
    class TRYK_G_Shades_Black_NV                        { quality = 1; price = 1250; };
    class TRYK_G_Shades_Blue_NV                         { quality = 1; price = 1250; };
    class TRYK_G_bala_ess_NVv                           { quality = 1; price = 1250; };
    class TRYK_bandana_NV                               { quality = 1; price = 1250; };
    class TRYK_SPgearG_NV                               { quality = 1; price = 1250; };
    class TRYK_SPgear_PHC1_NV                           { quality = 1; price = 1250; };
    class TRYK_SPgear_PHC2_NV                           { quality = 1; price = 1250; };
    class TRYK_G_bala_wh_NV                             { quality = 1; price = 1250; };
    class TRYK_ESS_wh_NV                                { quality = 1; price = 1250; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear
    ///////////////////////////////////////////////////////////////////////////////
    class TRYK_ESS_CAP_OD                               { quality = 1; price = 350; };
    class TRYK_ESS_CAP_tan                              { quality = 1; price = 350; };
    class TRYK_R_CAP_BLK                                { quality = 1; price = 350; };
    class TRYK_R_CAP_TAN                                { quality = 1; price = 350; };
    class TRYK_R_CAP_OD_US                              { quality = 1; price = 350; };
    class TRYK_r_cap_tan_Glasses                        { quality = 1; price = 350; };
    class TRYK_r_cap_blk_Glasses                        { quality = 1; price = 350; };
    class TRYK_r_cap_od_Glasses                         { quality = 1; price = 350; };
    class TRYK_H_headsetcap_Glasses                     { quality = 1; price = 350; };
    class TRYK_H_headsetcap_blk_Glasses                 { quality = 1; price = 350; };
    class TRYK_H_headsetcap_od_Glasses                  { quality = 1; price = 350; };
    class TRYK_TAC_EARMUFF_SHADE                        { quality = 1; price = 350; };
    class TRYK_TAC_EARMUFF                              { quality = 1; price = 350; };
    class TRYK_NOMIC_TAC_EARMUFF                        { quality = 1; price = 350; };
    class TRYK_headset2                                 { quality = 1; price = 350; };
    class TRYK_TAC_EARMUFF_Gs                           { quality = 1; price = 350; };
    class TRYK_TAC_SET_bn                               { quality = 1; price = 350; };
    class TRYK_NOMIC_TAC_EARMUFF_Gs                     { quality = 1; price = 350; };
    class TRYK_TAC_EARMUFF_SHADE_Gs                     { quality = 1; price = 350; };
    class TRYK_TAC_SET_TAN                              { quality = 1; price = 350; };
    class TRYK_TAC_SET_OD                               { quality = 1; price = 350; };
    class TRYK_TAC_SET_WH                               { quality = 1; price = 350; };
    class TRYK_TAC_SET_MESH                             { quality = 1; price = 350; };
    class TRYK_TAC_SET_TAN_2                            { quality = 1; price = 350; };
    class TRYK_TAC_SET_OD_2                             { quality = 1; price = 350; };
    class TRYK_TAC_SET_WH_2                             { quality = 1; price = 350; };
    class TRYK_TAC_SET_MESH_2                           { quality = 1; price = 350; };
    class TRYK_bandana_g                                { quality = 1; price = 350; };
    class TRYK_H_PASGT_BLK                              { quality = 1; price = 350; };
    class TRYK_H_PASGT_OD                               { quality = 1; price = 350; };
    class TRYK_H_PASGT_COYO                             { quality = 1; price = 350; };
    class TRYK_H_PASGT_TAN                              { quality = 1; price = 350; };
    class TRYK_H_Helmet_Snow                            { quality = 1; price = 350; };
    class TRYK_H_WH                                     { quality = 1; price = 350; };
    class TRYK_H_GR                                     { quality = 1; price = 350; };
    class TRYK_H_AOR1                                   { quality = 1; price = 350; };
    class TRYK_H_AOR2                                   { quality = 1; price = 350; };
    class TRYK_H_EARMUFF                                { quality = 1; price = 350; };
    class TRYK_H_TACEARMUFF_H                           { quality = 1; price = 350; };
    class TRYK_H_Bandana_H                              { quality = 1; price = 350; };
    class TRYK_H_Bandana_wig                            { quality = 1; price = 350; };
    class TRYK_H_Bandana_wig_g                          { quality = 1; price = 350; };
    class TRYK_H_wig                                    { quality = 1; price = 350; };
    class TRYK_H_headset2                               { quality = 1; price = 350; };
    class TRYK_H_ghillie_over                           { quality = 1; price = 350; };
    class TRYK_H_ghillie_top                            { quality = 1; price = 350; };
    class TRYK_H_ghillie_top_headless                   { quality = 1; price = 350; };
    class TRYK_H_ghillie_over_green                     { quality = 1; price = 350; };
    class TRYK_H_ghillie_top_green                      { quality = 1; price = 350; };
    class TRYK_H_ghillie_top_headless_green             { quality = 1; price = 350; };
    class TRYK_H_woolhat                                { quality = 1; price = 350; };
    class TRYK_H_woolhat_CW                             { quality = 1; price = 350; };
    class TRYK_H_woolhat_WH                             { quality = 1; price = 350; };
    class TRYK_H_woolhat_br                             { quality = 1; price = 350; };
    class TRYK_H_woolhat_cu                             { quality = 1; price = 350; };
    class TRYK_H_woolhat_tan                            { quality = 1; price = 350; };
    class TRYK_H_headsetcap                             { quality = 1; price = 350; };
    class TRYK_H_headsetcap_blk                         { quality = 1; price = 350; };
    class TRYK_H_headsetcap_od                          { quality = 1; price = 350; };
    class TRYK_H_pakol                                  { quality = 1; price = 350; };
    class TRYK_H_pakol2                                 { quality = 1; price = 350; };
    class TRYK_H_LHS_HEL_G                              { quality = 1; price = 350; };
    class TRYK_H_Helmet_Winter                          { quality = 1; price = 350; };
    class TRYK_H_Helmet_Winter_2                        { quality = 1; price = 350; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_Headphone_NV                             { quality = 1; price = 1250; };
    class TRYK_HRPIGEAR_NV                              { quality = 1; price = 1250; };
    class TRYK_Headset_NV                               { quality = 1; price = 1250; };
    class TRYK_TAC_boonie_SET_NV                        { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_TAN                           { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_OD                            { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_WH                            { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_MESH                          { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_TAN_2                         { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_OD_2                          { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_WH_2                          { quality = 1; price = 1250; };
    class TRYK_TAC_SET_NV_MESH_2                        { quality = 1; price = 1250; };
    class TRYK_H_DELTAHELM_NV                           { quality = 1; price = 1250; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK NeckGear
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_Shemagh_shade_MESH                       { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_N                          { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_G_N                        { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_WH_N                       { quality = 1; price = 350; };
    class TRYK_kio_balaclava_WH                         { quality = 1; price = 350; };
    class TRYK_kio_balaclava_BLK                        { quality = 1; price = 350; };
    class TRYK_kio_balaclavas                           { quality = 1; price = 350; };
    class TRYK_kio_balaclava_BLK_ear                    { quality = 1; price = 350; };
    class TRYK_kio_balaclava_ear                        { quality = 1; price = 350; };
    class TRYK_kio_balaclava_ESS                        { quality = 1; price = 350; };
    class TRYK_Shemagh                                  { quality = 1; price = 350; };
    class TRYK_Shemagh_mesh                             { quality = 1; price = 350; };
    class TRYK_Shemagh_G                                { quality = 1; price = 350; };
    class TRYK_Shemagh_WH                               { quality = 1; price = 350; };
    class TRYK_Shemagh_shade                            { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_G                          { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_WH                         { quality = 1; price = 350; };
    class TRYK_Shemagh_shade_MH                         { quality = 1; price = 350; };
    class TRYK_Shemagh_ESS                              { quality = 1; price = 350; };
    class TRYK_Shemagh_ESS_G                            { quality = 1; price = 350; };
    class TRYK_Shemagh_ESS_WH                           { quality = 1; price = 350; };
    class TRYK_Shemagh_EAR_TAN                          { quality = 1; price = 350; };
    class TRYK_Shemagh_EAR_WH                           { quality = 1; price = 350; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK NeckGear NeckGear w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_balaclava_BLACK_NV                       { quality = 1; price = 1250; };
    class TRYK_balaclava_NV                             { quality = 1; price = 1250; };
    class TRYK_balaclava_BLACK_EAR_NV                   { quality = 1; price = 1250; };
    class TRYK_balaclava_EAR_NV                         { quality = 1; price = 1250; };
    class TRYK_Shemagh_TAN_NV                           { quality = 1; price = 1250; };
    class TRYK_Shemagh_MESH_NV                          { quality = 1; price = 1250; };
    class TRYK_Shemagh_G_NV                             { quality = 1; price = 1250; };
    class TRYK_Shemagh_WH_NV                            { quality = 1; price = 1250; };
    class TRYK_Shemagh_EAR_NV                           { quality = 1; price = 1250; };
    class TRYK_Shemagh_EAR_G_NV                         { quality = 1; price = 1250; };
    class TRYK_Shemagh_EAR_WH_NV                        { quality = 1; price = 1250; };
    class TRYK_ShemaghESSTAN_NV                         { quality = 1; price = 1250; };
    class TRYK_ShemaghESSOD_NV                          { quality = 1; price = 1250; };
    class TRYK_ShemaghESSWH_NV                          { quality = 1; price = 1250; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK Uniforms
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_HRP_UCP                                  { quality = 1; price = 350; };
    class TRYK_HRP_USMC                                 { quality = 1; price = 350; };
    class TRYK_HRP_khk                                  { quality = 1; price = 350; };
    class TRYK_U_B_OD_OD_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_OD_OD_R_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_TANTAN_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_TANTAN_R_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_BLKBLK_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_BLKBLK_R_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_GRYOCP_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_GRYOCP_R_CombatUniformTshirt         { quality = 1; price = 350; };
    class TRYK_U_B_TANOCP_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_TANOCP_R_CombatUniformTshirt         { quality = 1; price = 350; };
    class TRYK_U_B_BLKOCP_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_BLKOCP_R_CombatUniformTshirt         { quality = 1; price = 350; };
    class TRYK_U_B_BLKTAN_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_BLKTANR_CombatUniformTshirt          { quality = 1; price = 350; };
    class TRYK_U_B_ODTAN_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_ODTANR_CombatUniformTshirt           { quality = 1; price = 350; };
    class TRYK_U_B_GRTAN_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_GRTANR_CombatUniformTshirt           { quality = 1; price = 350; };
    class TRYK_U_B_wood_CombatUniform                   { quality = 1; price = 350; };
    class TRYK_U_B_woodR_CombatUniformTshirt            { quality = 1; price = 350; };
    class TRYK_U_B_wood3c_CombatUniform                 { quality = 1; price = 350; };
    class TRYK_U_B_wood3c_CombatUniformTshirt           { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_WOOD_CombatUniform            { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt      { quality = 1; price = 350; };
    class TRYK_U_B_WOOD_MARPAT_CombatUniform            { quality = 1; price = 350; };
    class TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt      { quality = 1; price = 350; };
    class TRYK_U_B_woodtan_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_woodtanR_CombatUniformTshirt         { quality = 1; price = 350; };
    class TRYK_U_B_JSDF_CombatUniform                   { quality = 1; price = 350; };
    class TRYK_U_B_JSDF_CombatUniformTshirt             { quality = 1; price = 350; };
    class TRYK_U_B_3CD_Delta_BDU                        { quality = 1; price = 350; };
    class TRYK_U_B_3CD_Delta_BDUTshirt                  { quality = 1; price = 350; };
    class TRYK_U_B_3CD_Ranger_BDU                       { quality = 1; price = 350; };
    class TRYK_U_B_3CD_Ranger_BDUTshirt                 { quality = 1; price = 350; };
    class TRYK_U_B_3CD_BLK_BDUTshirt                    { quality = 1; price = 350; };
    class TRYK_U_B_3CD_BLK_BDUTshirt2                   { quality = 1; price = 350; };
    class TRYK_U_B_ACU                                  { quality = 1; price = 350; };
    class TRYK_U_B_ACUTshirt                            { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Wood                          { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Wood_Tshirt                   { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Desert                        { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Desert_Tshirt                 { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Desert2                       { quality = 1; price = 350; };
    class TRYK_U_B_MARPAT_Desert2_Tshirt                { quality = 1; price = 350; };
    class TRYK_U_B_3c                                   { quality = 1; price = 350; };
    class TRYK_U_B_3cr                                  { quality = 1; price = 350; };
    class TRYK_U_B_Sage_Tshirt                          { quality = 1; price = 350; };
    class TRYK_U_B_BLK3CD                               { quality = 1; price = 350; };
    class TRYK_U_B_BLK3CD_Tshirt                        { quality = 1; price = 350; };
    class TRYK_U_B_BLK                                  { quality = 1; price = 350; };
    class TRYK_U_B_BLK_Tshirt                           { quality = 1; price = 350; };
    class TRYK_U_B_BLKTAN                               { quality = 1; price = 350; };
    class TRYK_U_B_BLKTAN_Tshirt                        { quality = 1; price = 350; };
    class TRYK_U_B_ODTAN                                { quality = 1; price = 350; };
    class TRYK_U_B_ODTAN_Tshirt                         { quality = 1; price = 350; };
    class TRYK_U_B_BLK_OD                               { quality = 1; price = 350; };
    class TRYK_U_B_BLK_OD_Tshirt                        { quality = 1; price = 350; };
    class TRYK_U_B_C01_Tsirt                            { quality = 1; price = 350; };
    class TRYK_U_B_C02_Tsirt                            { quality = 1; price = 350; };
    class TRYK_U_B_OD_BLK                               { quality = 1; price = 350; };
    class TRYK_U_B_OD_BLK_2                             { quality = 1; price = 350; };
    class TRYK_U_B_BLK_TAN_1                            { quality = 1; price = 350; };
    class TRYK_U_B_BLK_TAN_2                            { quality = 1; price = 350; };
    class TRYK_U_B_wh_tan_Rollup_CombatUniform          { quality = 1; price = 350; };
    class TRYK_U_B_wh_OD_Rollup_CombatUniform           { quality = 1; price = 350; };
    class TRYK_U_B_wh_blk_Rollup_CombatUniform          { quality = 1; price = 350; };
    class TRYK_U_B_BLK_tan_Rollup_CombatUniform         { quality = 1; price = 350; };
    class TRYK_U_B_BLK_OD_Rollup_CombatUniform          { quality = 1; price = 350; };
    class TRYK_U_B_NATO_UCP_GRY_Combatniform            { quality = 1; price = 350; };
    class TRYK_U_B_NATO_UCP_GRY_R_CombatUniform         { quality = 1; price = 350; };
    class TRYK_U_B_NATO_UCP_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_NATO_UCP_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_c_BLK_CombatUniform         { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform       { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_BLK_CombatUniform           { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_BLK_R_CombatUniform         { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCPD_CombatUniform              { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCPD_R_CombatUniform            { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_NATO_OCP_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_AOR1_Rollup_CombatUniform            { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_Rollup_CombatUniform            { quality = 1; price = 350; };
    class TRYK_U_B_MTP_CombatUniform                    { quality = 1; price = 350; };
    class TRYK_U_B_MTP_R_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_MTP_BLK_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_MTP_BLK_R_CombatUniform              { quality = 1; price = 350; };
    class TRYK_U_B_Woodland                             { quality = 1; price = 350; };
    class TRYK_U_B_Woodland_Tshirt                      { quality = 1; price = 350; };
    class TRYK_U_B_WDL_GRY_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_WDL_GRY_R_CombatUniform              { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_GR_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_GR_R_CombatUniform              { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_GRY_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_GRY_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_CombatUniform                   { quality = 1; price = 350; };
    class TRYK_U_B_ARO1R_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_BLK_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_BLK_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_CBR_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_ARO1_CBR_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_ARO2_CombatUniform                   { quality = 1; price = 350; };
    class TRYK_U_B_ARO2R_CombatUniform                  { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_BLK_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_BLK_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_OD_CombatUniform                { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_OD_R_CombatUniform              { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_GRY_CombatUniform               { quality = 1; price = 350; };
    class TRYK_U_B_AOR2_GRY_R_CombatUniform             { quality = 1; price = 350; };
    class TRYK_U_B_Snow_CombatUniform                   { quality = 1; price = 350; };
    class TRYK_U_B_Snowt                                { quality = 1; price = 350; };
    class TRYK_U_B_Denim_T_WH                           { quality = 1; price = 350; };
    class TRYK_U_B_Denim_T_BK                           { quality = 1; price = 350; };
    class TRYK_U_B_BLK_T_WH                             { quality = 1; price = 350; };
    class TRYK_U_B_BLK_T_BK                             { quality = 1; price = 350; };
    class TRYK_U_B_RED_T_BR                             { quality = 1; price = 350; };
    class TRYK_U_B_Denim_T_BG_WH                        { quality = 1; price = 350; };
    class TRYK_U_B_Denim_T_BG_BK                        { quality = 1; price = 350; };
    class TRYK_U_B_BLK_T_BG_WH                          { quality = 1; price = 350; };
    class TRYK_U_B_BLK_T_BG_BK                          { quality = 1; price = 350; };
    class TRYK_U_B_RED_T_BG_BR                          { quality = 1; price = 350; };
    class TRYK_U_B_fleece                               { quality = 1; price = 350; };
    class TRYK_U_B_fleece_UCP                           { quality = 1; price = 350; };
    class TRYK_U_B_UCP_PCUs                             { quality = 1; price = 350; };
    class TRYK_U_B_GRY_PCUs                             { quality = 1; price = 350; };
    class TRYK_U_B_Wood_PCUs                            { quality = 1; price = 350; };
    class TRYK_U_B_PCUs                                 { quality = 1; price = 350; };
    class TRYK_U_B_UCP_PCUs_R                           { quality = 1; price = 350; };
    class TRYK_U_B_GRY_PCUs_R                           { quality = 1; price = 350; };
    class TRYK_U_B_Wood_PCUs_R                          { quality = 1; price = 350; };
    class TRYK_U_B_PCUs_R                               { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs                                { quality = 1; price = 350; };
    class TRYK_U_B_PCUODs                               { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_gry                            { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_BLK                            { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_OD                             { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_gry_R                          { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_BLK_R                          { quality = 1; price = 350; };
    class TRYK_U_B_PCUGs_OD_R                           { quality = 1; price = 350; };
    class TRYK_U_Bts_GRYGRY_PCUs                        { quality = 1; price = 350; };
    class TRYK_U_Bts_UCP_PCUs                           { quality = 1; price = 350; };
    class TRYK_U_Bts_Wood_PCUs                          { quality = 1; price = 350; };
    class TRYK_U_Bts_PCUs                               { quality = 1; price = 350; };
    class TRYK_U_pad_j                                  { quality = 1; price = 350; };
    class TRYK_U_pad_j_blk                              { quality = 1; price = 350; };
    class TRYK_U_pad_hood_Cl                            { quality = 1; price = 350; };
    class TRYK_U_pad_hood_Cl_blk                        { quality = 1; price = 350; };
    class TRYK_U_pad_hood_tan                           { quality = 1; price = 350; };
    class TRYK_U_pad_hood_Blk                           { quality = 1; price = 350; };
    class TRYK_U_pad_hood_CSATBlk                       { quality = 1; price = 350; };
    class TRYK_U_pad_hood_Blod                          { quality = 1; price = 350; };
    class TRYK_U_pad_hood_odBK                          { quality = 1; price = 350; };
    class TRYK_U_pad_hood_BKT2                          { quality = 1; price = 350; };
    class TRYK_hoodie_Blk                               { quality = 1; price = 350; };
    class TRYK_hoodie_FR                                { quality = 1; price = 350; };
    class TRYK_hoodie_Wood                              { quality = 1; price = 350; };
    class TRYK_hoodie_3c                                { quality = 1; price = 350; };
    class TRYK_T_camo_tan                               { quality = 1; price = 350; };
    class TRYK_T_camo_3c                                { quality = 1; price = 350; };
    class TRYK_T_camo_Wood                              { quality = 1; price = 350; };
    class TRYK_T_camo_wood_marpat                       { quality = 1; price = 350; };
    class TRYK_T_camo_Desert_marpat                     { quality = 1; price = 350; };
    class TRYK_T_camo_3c_BG                             { quality = 1; price = 350; };
    class TRYK_T_camo_Wood_BG                           { quality = 1; price = 350; };
    class TRYK_T_camo_wood_marpat_BG                    { quality = 1; price = 350; };
    class TRYK_T_camo_desert_marpat_BG                  { quality = 1; price = 350; };
    class TRYK_T_PAD                                    { quality = 1; price = 350; };
    class TRYK_T_OD_PAD                                 { quality = 1; price = 350; };
    class TRYK_T_TAN_PAD                                { quality = 1; price = 350; };
    class TRYK_T_BLK_PAD                                { quality = 1; price = 350; };
    class TRYK_T_T2_PAD                                 { quality = 1; price = 350; };
    class TRYK_T_CSAT_PAD                               { quality = 1; price = 350; };
    class TRYK_U_nohoodPcu_gry                          { quality = 1; price = 350; };
    class TRYK_U_hood_nc                                { quality = 1; price = 350; };
    class TRYK_U_hood_mc                                { quality = 1; price = 350; };
    class TRYK_U_denim_hood_blk                         { quality = 1; price = 350; };
    class TRYK_U_denim_hood_mc                          { quality = 1; price = 350; };
    class TRYK_U_denim_hood_3c                          { quality = 1; price = 350; };
    class TRYK_U_denim_hood_nc                          { quality = 1; price = 350; };
    class TRYK_U_denim_jersey_blu                       { quality = 1; price = 350; };
    class TRYK_U_denim_jersey_blk                       { quality = 1; price = 350; };
    class TRYK_shirts_PAD                               { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD                            { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD                           { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD                           { quality = 1; price = 350; };
    class TRYK_shirts_PAD_BK                            { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_BK                         { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_BK                        { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_BK                        { quality = 1; price = 350; };
    class TRYK_shirts_PAD_BLW                           { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_BLW                        { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_BLW                       { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_BLW                       { quality = 1; price = 350; };
    class TRYK_shirts_PAD_YEL                           { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_YEL                        { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_YEL                       { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_YEL                       { quality = 1; price = 350; };
    class TRYK_shirts_PAD_RED2                          { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_RED2                       { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_RED2                      { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_RED2                      { quality = 1; price = 350; };
    class TRYK_shirts_PAD_BLU3                          { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_BLU3                       { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_BLU3                      { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_BLU3                      { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_R                           { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BL                          { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BK                          { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_WH                          { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BWH                         { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_RED2                        { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_WHB                         { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_ylb                         { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_od                          { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_R_Sleeve                    { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BL_Sleeve                   { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BK_Sleeve                   { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_WH_Sleeve                   { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_BWH_Sleeve                  { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_RED2_Sleeve                 { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_WHB_Sleeve                  { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_ylb_Sleeve                  { quality = 1; price = 350; };
    class TRYK_shirts_DENIM_od_Sleeve                   { quality = 1; price = 350; };
    class TRYK_shirts_PAD_BL                            { quality = 1; price = 350; };
    class TRYK_shirts_OD_PAD_BL                         { quality = 1; price = 350; };
    class TRYK_shirts_TAN_PAD_BL                        { quality = 1; price = 350; };
    class TRYK_shirts_BLK_PAD_BL                        { quality = 1; price = 350; };
    class TRYK_U_taki_wh                                { quality = 1; price = 350; };
    class TRYK_U_taki_COY                               { quality = 1; price = 350; };
    class TRYK_U_taki_BL                                { quality = 1; price = 350; };
    class TRYK_U_taki_BLK                               { quality = 1; price = 350; };
    class TRYK_U_Bts_PCUGs                              { quality = 1; price = 350; };
    class TRYK_U_Bts_PCUODs                             { quality = 1; price = 350; };
    class TRYK_U_taki_G_WH                              { quality = 1; price = 350; };
    class TRYK_U_taki_G_COY                             { quality = 1; price = 350; };
    class TRYK_U_taki_G_BL                              { quality = 1; price = 350; };
    class TRYK_U_taki_G_BLK                             { quality = 1; price = 350; };
    class TRYK_U_B_PCUHs                                { quality = 1; price = 350; };
    class TRYK_U_B_PCUGHs                               { quality = 1; price = 350; };
    class TRYK_U_B_PCUODHs                              { quality = 1; price = 350; };
    class TRYK_B_USMC_R                                 { quality = 1; price = 350; };
    class TRYK_B_USMC_R_ROLL                            { quality = 1; price = 350; };
    class TRYK_ZARATAKI                                 { quality = 1; price = 350; };
    class TRYK_ZARATAKI2                                { quality = 1; price = 350; };
    class TRYK_ZARATAKI3                                { quality = 1; price = 350; };
    class TRYK_B_TRYK_UCP_T                             { quality = 1; price = 350; };
    class TRYK_B_TRYK_3C_T                              { quality = 1; price = 350; };
    class TRYK_B_TRYK_MTP_T                             { quality = 1; price = 350; };
    class TRYK_B_TRYK_OCP_T                             { quality = 1; price = 350; };
    class TRYK_B_TRYK_OCP_D_T                           { quality = 1; price = 350; };
    class TRYK_DMARPAT_T                                { quality = 1; price = 350; };
    class TRYK_C_AOR2_T                                 { quality = 1; price = 350; };
    class TRYK_U_B_Sage_T                               { quality = 1; price = 350; };
    class TRYK_U_B_Wood_T                               { quality = 1; price = 350; };
    class TRYK_U_B_BLTAN_T                              { quality = 1; price = 350; };
    class TRYK_U_B_BLOD_T                               { quality = 1; price = 350; };
    class TRYK_OVERALL_flesh                            { quality = 1; price = 350; };
    class TRYK_OVERALL_nok_flesh                        { quality = 1; price = 350; };
    class TRYK_OVERALL_SAGE_BLKboots                    { quality = 1; price = 350; };
    class TRYK_OVERALL_SAGE_BLKboots_nk_blk             { quality = 1; price = 350; };
    class TRYK_OVERALL_SAGE_BLKboots_nk                 { quality = 1; price = 350; };
    class TRYK_OVERALL_SAGE_BLKboots_nk_blk2            { quality = 1; price = 350; };
    class TRYK_OVERALL_SAGE                             { quality = 1; price = 350; };
    class TRYK_SUITS_BLK_F                              { quality = 1; price = 350; };
    class TRYK_SUITS_BR_F                               { quality = 1; price = 350; };
    class TRYK_H_ghillie_top_headless3glass             { quality = 1; price = 350; };
    class TRYK_shoulder_armor_BK                        { quality = 1; price = 350; };
    class TRYK_shoulder_armor_OD                        { quality = 1; price = 350; };
    class TRYK_shoulder_armor_CY                        { quality = 1; price = 350; };
    class TRYK_H_ghillie_top_headless3                  { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW                               { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW2                              { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW3                              { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW3nh                            { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW4                              { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW5                              { quality = 1; price = 350; };
    class TRYK_U_B_PCUHsW6                              { quality = 1; price = 350; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK Vests
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_Hrp_vest_ucp                             { quality = 1; price = 350; };
    class TRYK_Hrp_vest_od                              { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_JSDF                      { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_AOR1                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_AOR2                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_coyo                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Brown                        { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_CBR                          { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_khk                          { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_rgr                          { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_green                        { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_tan                          { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Delta                        { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Ranger                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_AOR1_2                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_AOR2_2                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_coyo2                        { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Brown2                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_cbr2                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_khk2                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_rgr2                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_green2                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_tan2                         { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Delta2                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Ranger2                      { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_blk                       { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_oli                       { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_coyo                      { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_wood                      { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_ACU                       { quality = 1; price = 350; };
    class TRYK_V_TacVest_coyo                           { quality = 1; price = 350; };
    class TRYK_V_harnes_blk_L                           { quality = 1; price = 350; };
    class TRYK_V_harnes_od_L                            { quality = 1; price = 350; };
    class TRYK_V_harnes_TAN_L                           { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_blk_L                     { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_wood_L                    { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_ACU_L                     { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_coyo_L                    { quality = 1; price = 350; };
    class TRYK_V_ChestRig_L                             { quality = 1; price = 350; };
    class TRYK_V_ChestRig                               { quality = 1; price = 350; };
    class TRYK_V_Bulletproof                            { quality = 1; price = 350; };
    class TRYK_V_Bulletproof_BLK                        { quality = 1; price = 350; };
    class TRYK_V_Bulletproof_BL                         { quality = 1; price = 350; };
    class TRYK_V_IOTV_BLK                               { quality = 1; price = 350; };
    class TRYK_V_tacv1M_BK                              { quality = 1; price = 350; };
    class TRYK_V_tacv1MLC_BK                            { quality = 1; price = 350; };
    class TRYK_V_tacv1                                  { quality = 1; price = 350; };
    class TRYK_V_tacv1_CY                               { quality = 1; price = 350; };
    class TRYK_V_tacv1_BK                               { quality = 1; price = 350; };
    class TRYK_V_tacv1_P_BK                             { quality = 1; price = 350; };
    class TRYK_V_tacv1_SHERIFF_BK                       { quality = 1; price = 350; };
    class TRYK_V_tacv1_FBI_BK                           { quality = 1; price = 350; };
    class TRYK_V_tacv1LP_BK                             { quality = 1; price = 350; };
    class TRYK_V_tacv1LSRF_BK                           { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_BK                             { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_CY                             { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_OD                             { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_FBI_BK                         { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_SRF_BK                         { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_SRF_OD                         { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_P_BK                           { quality = 1; price = 350; };
    class TRYK_V_PlateCarrier_POLICE                    { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_HRT_B                        { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_HRT_OD                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_HRT2_B                       { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_HRT2_OD                      { quality = 1; price = 350; };
    class TRYK_V_ArmorVest_Winter                       { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_OD                          { quality = 1; price = 350; };
    class TRYK_V_tacv10_BK                              { quality = 1; price = 350; };
    class TRYK_V_tacv10_OD                              { quality = 1; price = 350; };
    class TRYK_V_tacv10_TN                              { quality = 1; price = 350; };
    class TRYK_V_tacv10LC_BK                            { quality = 1; price = 350; };
    class TRYK_V_tacv10LC_OD                            { quality = 1; price = 350; };
    class TRYK_V_tacv10LC_TN                            { quality = 1; price = 350; };
    class TRYK_V_tacv1L_BK                              { quality = 1; price = 350; };
    class TRYK_V_tacv1L_OD                              { quality = 1; price = 350; };
    class TRYK_V_tacv1L_CY                              { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_FBI2_BK                        { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_SRF2_BK                        { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_SRF2_OD                        { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_P2_BK                          { quality = 1; price = 350; };
    class TRYK_V_tacv1_MSL_BK                           { quality = 1; price = 350; };
    class TRYK_V_tacv1_MSL_NV                           { quality = 1; price = 350; };
    class TRYK_V_tacv1LMSL_BK                           { quality = 1; price = 350; };
    class TRYK_V_tacv1LMSL_NV                           { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_MSL_BK                         { quality = 1; price = 350; };
    class TRYK_V_tacv1LC_MSL_NV                         { quality = 1; price = 350; };
    class TRYK_V_tacSVD_BK                              { quality = 1; price = 350; };
    class TRYK_V_tacSVD_OD                              { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TL                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TBL                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TCL                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TL2                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TBL2                        { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TCL2                        { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_T                           { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TB                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_T2                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TB2                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_T3                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TB3                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_T4                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TB4                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_T5                          { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TB5                         { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TBL3_BK                     { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TBL3_OD                     { quality = 1; price = 350; };
    class TRYK_V_Sheriff_BA_TBL3_TN                     { quality = 1; price = 350; };
    class TRYK_LOC_AK_chestrig_OD                       { quality = 1; price = 350; };
    class TRYK_LOC_AK_chestrig_TAN                      { quality = 1; price = 350; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK BackPacks
    ///////////////////////////////////////////////////////////////////////////////
   
    class TRYK_B_AssaultPack_UCP                        { quality = 1; price = 350; };
    class TRYK_B_AssaultPack_Type2camo                  { quality = 1; price = 350; };
    class TRYK_B_AssaultPack_MARPAT_Desert              { quality = 1; price = 350; };
    class TRYK_B_AssaultPack_MARPAT_Wood                { quality = 1; price = 350; };
    class TRYK_B_Kitbag_Base                            { quality = 2; price = 350; };
    class TRYK_B_Kitbag_blk                             { quality = 2; price = 350; };
    class TRYK_B_Kitbag_aaf                             { quality = 2; price = 350; };
    class TRYK_B_Carryall_blk                           { quality = 3; price = 800; };
    class TRYK_B_Carryall_wh                            { quality = 3; price = 800; };
    class TRYK_B_Carryall_wood                          { quality = 3; price = 800; };
    class TRYK_B_Carryall_JSDF                          { quality = 3; price = 800; };
    class TRYK_B_Kitbag_Base_JSDF                       { quality = 1; price = 350; };
    class TRYK_B_Coyotebackpack                         { quality = 1; price = 350; };
    class TRYK_B_Coyotebackpack_OD                      { quality = 1; price = 350; };
    class TRYK_B_Coyotebackpack_BLK                     { quality = 1; price = 350; };
    class TRYK_B_Coyotebackpack_WH                      { quality = 1; price = 350; };
    class TRYK_B_Alicepack                              { quality = 1; price = 350; };
    class TRYK_B_Medbag                                 { quality = 1; price = 350; };
    class TRYK_B_Medbag_OD                              { quality = 1; price = 350; };
    class TRYK_B_Medbag_BK                              { quality = 1; price = 350; };
    class TRYK_B_Medbag_ucp                             { quality = 1; price = 350; };
    class TRYK_B_Belt                                   { quality = 1; price = 350; };
    class TRYK_B_Belt_BLK                               { quality = 1; price = 350; };
    class TRYK_B_Belt_CYT                               { quality = 1; price = 350; };
    class TRYK_B_Belt_tan                               { quality = 1; price = 350; };
    class TRYK_B_Belt_br                                { quality = 1; price = 350; };
    class TRYK_B_Belt_GR                                { quality = 1; price = 350; };
    class TRYK_B_Belt_AOR1                              { quality = 1; price = 350; };
    class TRYK_B_Belt_AOR2                              { quality = 1; price = 350; };
    class TRYK_B_BAF_BAG_BLK                            { quality = 1; price = 350; };
    class TRYK_B_BAF_BAG_CYT                            { quality = 1; price = 350; };
    class TRYK_B_BAF_BAG_OD                             { quality = 1; price = 350; };
    class TRYK_B_BAF_BAG_rgr                            { quality = 1; price = 350; };
    class TRYK_B_BAF_BAG_mcamo                          { quality = 1; price = 350; };
    class TRYK_B_tube_cyt                               { quality = 1; price = 350; };
    class TRYK_B_tube_od                                { quality = 1; price = 350; };
    class TRYK_B_tube_blk                               { quality = 1; price = 350; };
    class TRYK_B_FieldPack_Wood                         { quality = 1; price = 350; };
    class TRYK_Winter_pack                              { quality = 1; price = 350; };
};
class CfgExileCustomCode 
{
ExileClient_gui_xm8_slide_apps_onOpen = "xm8Apps\ExileClient_gui_xm8_slide_apps_onOpen.sqf";
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			/*
				Defines contaminated zones in a specific map. 
				You can define multiple zones per map. The format
				of the zones is:

				[Position ASL(!), Full Radiation Radius, Maximum Radius]

				The radius works as follows:

	            |-------------------------------------------------------|
	                                Maximum Radius
				
				|------------------------|
				  Full Radiation Radius   

				Within the full radiation radius, radiation factor is
				always at a maximum. Outside of this, it lowers down
				to no radiation smoothly.

				Radiation:

	            |------------------------|------------------------------|
	            1        1      1        1     0.75    0.5     0.25    0
			*/
			contaminatedZones[] = {};
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction. Does not refund anything YET!
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class Upgrade: ExileAbstractAction
			{
				title = "Upgrade";
				condition = "true";
				action = "_this call ExileClient_gui_upgradeterritoryDialog_request";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	class BushSource
	{
		name = "Bushes";
		models[] = {" b_"};
	};

	class StoneSource
	{
		name = "Stones, stone walls or rocks";
		models[] = 
		{
			// We are using find() so this should match everything that is out of stone/rock
			"stone",
			"Stone",
			"Rock",
			"rock",
			"cobble",
			"Cobble",
			"sea_wall_f.p3d"
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d"
		};	
	};

	class Wrecks
	{
		name = "Wrecks";
		models[] = 
		{
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/
		};
	};

	class Trash
	{
		name = "Trash";
		models[] = 
		{
			"trash",
			"garbage",
			"crabcages_f.p3d",
			"fishinggear",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
/*
			"barreltrash_f.p3d",
			"barreltrash_grey_f.p3d",
			"crabcages_f.p3d",
			"fishinggear_01_f.p3d",
			"fishinggear_02_f.p3d",
			"garbage_square3_f.p3d",
			"garbage_square5_f.p3d",
			"garbagebags_f.p3d",
			"garbagebarrel_01_f.p3d",
			"garbagecontainer_closed_f.p3d",
			"garbagecontainer_open_f.p3d",
			"garbagepallet_f.p3d",
			"garbagewashingmachine_f.p3d",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
*/
		};
	};
};
class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs or respect per object to pay
	popTabAmountPerObject = 10;
	respectAmountPerObject = 5;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr"
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O"
		};
	};


	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
			
			/*
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_CarWheel",
			"Exile_Item_Cement",
			"Exile_Item_Sand"
			*/
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			
			/*
			"Exile_Item_Foolbox",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",	
			"Exile_Item_ToiletPaper",			
			"Exile_Item_ZipTie",
			*/

			"Binocular",
			"Rangefinder",
			/*"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",*/
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"		
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F"

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F"
		};
	};
	
	class CUPPointerAttachments
	{
		name = "CUP Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_acc_Glock17_Flashlight",
	"CUP_acc_ANPEQ_15",
	"CUP_acc_ANPEQ_2",
	"CUP_acc_Flashlight",
	"CUP_acc_Flashlight_wdl",
	"CUP_acc_Flashlight_desert",
	"CUP_acc_XM8_light_module",
	"CUP_acc_ANPEQ_2_camo",
	"CUP_acc_ANPEQ_2_desert",
	"CUP_acc_ANPEQ_2_grey",
	"CUP_acc_CZ_M3X"
		};
	};

	class CUPMuzzleAttachments 
	{
		name = "CUP Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
	"CUP_muzzle_snds_AWM",
	"CUP_muzzle_snds_SCAR_H",
	"CUP_muzzle_mfsup_SCAR_H",
	"CUP_muzzle_snds_XM8",
	"CUP_muzzle_snds_G36_black",
	"CUP_muzzle_snds_G36_desert",
	"CUP_muzzle_snds_L85",
	"CUP_muzzle_snds_M16_camo",
	"CUP_muzzle_snds_M16",
	"CUP_muzzle_snds_SCAR_L",
	"CUP_muzzle_mfsup_SCAR_L",
	"CUP_muzzle_PBS4",
	"CUP_muzzle_PB6P9",
	"CUP_muzzle_Bizon",
	"CUP_muzzle_snds_M110",
	"CUP_muzzle_snds_M14",
	"CUP_muzzle_snds_M9",
	"CUP_muzzle_snds_MicroUzi"
		};
	};

	class CUPOpticAttachments
	{
		name = "CUP Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
	"CUP_optic_PSO_1",
	"CUP_optic_PSO_3",
	"CUP_optic_Kobra",
	//"CUP_optic_GOSHAWK",
	"CUP_optic_NSPU",
	"CUP_optic_PechenegScope",
	"CUP_optic_HoloBlack",
	"CUP_optic_HoloWdl",
	"CUP_optic_HoloDesert",
	"CUP_optic_Eotech533",
	"CUP_optic_Eotech533Grey",
	"CUP_optic_CompM4",
	"CUP_optic_SUSAT",
	//"CUP_optic_CWS",
	"CUP_optic_RCO",
	"CUP_optic_RCO_desert",
	"CUP_optic_CompM2_Woodland2",
	"CUP_optic_CompM2_Woodland",
	"CUP_optic_CompM2_Black",
	"CUP_optic_CompM2_Desert",
	"CUP_optic_ACOG",
	"CUP_optic_SB_3_12x50_PMII",
	//"CUP_optic_AN_PAS_13c2",
	//"CUP_optic_AN_PVS_4",
	"CUP_optic_AN_PVS_10",
	"CUP_optic_LeupoldMk4",
	"CUP_optic_LeupoldM3LR",
	"CUP_optic_LeupoldMk4_CQ_T",
	"CUP_optic_LeupoldMk4_MRT_tan",
	"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
	"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
	"CUP_optic_Leupold_VX3",
	"CUP_optic_ElcanM145",
	"CUP_optic_ELCAN_SpecterDR",
	//"CUP_optic_AN_PAS_13c1",
	"CUP_optic_SB_11_4x20_PM",
	"CUP_optic_ZDDot",
	"CUP_optic_MRad",
	"CUP_optic_TrijiconRx01_black",
	"CUP_optic_TrijiconRx01_desert"		
		};
	};

	class CUPAmmunition
	{
		name = "CUP Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_100Rnd_556x45_BetaCMag",
	"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
	"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
	"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
	"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
	"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
	"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
	"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
	"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
	"CUP_10Rnd_762x51_CZ750",
	"CUP_10Rnd_762x51_CZ750_Tracer",
	"CUP_10Rnd_762x54_SVD_M",
	"CUP_10Rnd_9x19_Compact",
	"CUP_10Rnd_9x39_SP5_VSS_M",
	"CUP_10x_303_M",
	"CUP_15Rnd_9x19_M9",
	"CUP_17Rnd_9x19_glock17",
	"CUP_18Rnd_9x19_Phantom",
	"CUP_1Rnd_HE_GP25_M",
	"CUP_1Rnd_HEDP_M203",
	"CUP_1Rnd_SMOKE_GP25_M",
	"CUP_1Rnd_Smoke_M203",
	"CUP_1Rnd_SmokeGreen_M203",
	"CUP_1Rnd_SmokeRed_M203",
	"CUP_1Rnd_SmokeYellow_M203",
	"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
	"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
	"CUP_20Rnd_762x51_DMR",
	"CUP_20Rnd_762x51_FNFAL_M",
	"CUP_20Rnd_762x51_B_SCAR",
	"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
	"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
	"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
	"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR",
	"CUP_20Rnd_762x51_B_M110",
	"CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
	"CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
	"CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
	"CUP_20Rnd_TE1_White_Tracer_762x51_M110",
	"CUP_20Rnd_762x51_CZ805B",
	"CUP_30Rnd_9x19_EVO",
	"CUP_20Rnd_B_AA12_Pellets",
	"CUP_20Rnd_B_AA12_74Slug",
	"CUP_20Rnd_B_AA12_HE",	
	"CUP_30Rnd_545x39_AK_M",
	"CUP_30Rnd_556x45_G36",
	"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
	"CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
	"CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
	"CUP_30Rnd_556x45_Stanag",
	"CUP_30Rnd_762x39_AK47_M",
	"CUP_30Rnd_Sa58_M",
	"CUP_30Rnd_Sa58_M_TracerG",
	"CUP_30Rnd_9x19_MP5",
	"CUP_5Rnd_127x108_KSVK_M",
	"CUP_5Rnd_127x99_as50_M",
	"CUP_5Rnd_762x51_M24",
	"CUP_5Rnd_86x70_L115A1",
	"CUP_5x_22_LR_17_HMR_M",
	"CUP_64Rnd_9x19_Bizon_M",
	"CUP_6Rnd_45ACP_M",
	"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
	"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
	"CUP_7Rnd_45ACP_1911",
	"CUP_8Rnd_9x18_Makarov_M",
	"CUP_8Rnd_9x18_MakarovSD_M",
	"CUP_8Rnd_B_Beneli_74Slug",
	"CUP_50Rnd_UK59_762x54R_Tracer",
	"CUP_8Rnd_B_Saiga12_74Slug_M",
	"CUP_HandGrenade_L109A1_HE",
	"CUP_FlareGreen_M203",
	"CUP_FlareRed_GP25_M",
	"CUP_FlareWhite_GP25_M",
	"CUP_FlareWhite_M203",
	"CUP_HandGrenade_RGD5",
	"CUP_HandGrenade_M67",
	// "CUP_Mine_M",
	// "CUP_PipeBomb_M",
	"CUP_10Rnd_127x99_M107",
	"CUP_6Rnd_Smoke_M203",
	"CUP_6Rnd_SmokeRed_M203",
	"CUP_6Rnd_SmokeGreen_M203",
	"CUP_6Rnd_SmokeYellow_M203",
	"CUP_6Rnd_FlareYellow_M203",
	"CUP_6Rnd_FlareRed_M203",
	"CUP_6Rnd_FlareGreen_M203",
	"CUP_6Rnd_FlareWhite_M203",
	"CUP_30Rnd_9x19_UZI"
		};
	};

	class CUPPistols 
	{
		name = "CUP Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
	"CUP_hgun_Colt1911",
	"CUP_hgun_Compact",
	"CUP_hgun_Makarov",
	"CUP_hgun_MicroUzi",
	"CUP_hgun_TaurusTracker455",
	"CUP_hgun_TaurusTracker455_gold",
	"CUP_hgun_M9",
	"CUP_hgun_SA61",
	"CUP_hgun_Duty",
	"CUP_hgun_Phantom",
	"CUP_hgun_PB6P9",
	"CUP_hgun_Glock17"
		};
	};

	class CUPSubMachineGuns 
	{
		name = "CUP Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_smg_MP5SD6",
	"CUP_smg_MP5A5",
	"CUP_smg_EVO",
	"CUP_smg_bizon"
		};
	};

	class CUPLightMachineGuns
	{
		name = "CUP Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_lmg_M249_para",
	"CUP_lmg_Mk48_des",
	"CUP_lmg_Mk48_wdl",
	"CUP_lmg_L110A1",
	"CUP_lmg_Pecheneg",
	"CUP_lmg_UK59",
	"CUP_lmg_L7A2",
	"CUP_lmg_M60E4",
	"CUP_lmg_M240",
	"CUP_lmg_M249",
	"CUP_lmg_PKM"	
		};
	};

	class CUPAssaultRifles
	{
		name = "CUP Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_arifle_Mk16_CQC_FG",
	"CUP_arifle_Mk16_CQC_SFG",
	"CUP_arifle_Mk16_CQC_EGLM",
	"CUP_arifle_Mk16_STD",
	"CUP_arifle_Mk16_STD_FG",
	"CUP_arifle_Mk16_STD_SFG",
	"CUP_arifle_Mk16_STD_EGLM",
	"CUP_arifle_Mk16_SV",
	"CUP_arifle_Mk17_CQC",
	"CUP_arifle_Mk17_CQC_FG",
	"CUP_arifle_Mk17_CQC_SFG",
	"CUP_arifle_Mk17_CQC_EGLM",
	"CUP_arifle_Mk17_STD",
	"CUP_arifle_Mk17_STD_FG",
	"CUP_arifle_Mk17_STD_SFG",
	"CUP_arifle_Mk17_STD_EGLM",
	"CUP_arifle_Mk20",
	"CUP_arifle_XM8_Compact_Rail",
	"CUP_arifle_XM8_Railed",
	"CUP_arifle_M16A4_Base",
	"CUP_arifle_M4A1_BUIS_GL",
	"CUP_arifle_M4A1_BUIS_camo_GL",
	"CUP_arifle_M4A1_BUIS_desert_GL",
	"CUP_arifle_M4A1_black",
	"CUP_arifle_M4A1_desert",
	"CUP_arifle_L85A2",
	"CUP_arifle_L85A2_GL",
	"CUP_arifle_L86A2",
	"CUP_arifle_FNFAL_railed",
	"CUP_arifle_AK107_GL",
	"CUP_arifle_Sa58P_des",
	"CUP_arifle_Sa58V_camo",
	"CUP_arifle_Sa58RIS1",
	"CUP_arifle_Sa58RIS1_des",
	"CUP_arifle_Sa58RIS2",
	"CUP_arifle_Sa58RIS2_camo",
	"CUP_arifle_CZ805_A1",
	"CUP_arifle_CZ805_GL",
	"CUP_arifle_CZ805_B_GL",
	"CUP_arifle_CZ805_B",
	"CUP_arifle_XM8_Carbine",
	"CUP_arifle_XM8_Carbine_FG",
	"CUP_arifle_XM8_Carbine_GL",
	"CUP_arifle_XM8_Compact",
	"CUP_arifle_xm8_SAW",
	"CUP_arifle_xm8_sharpshooter",
	"CUP_arifle_Mk16_CQC",
	"CUP_arifle_Sa58P",
	"CUP_arifle_Sa58V",
	"CUP_arifle_M16A2",
	"CUP_arifle_M16A2_GL",
	"CUP_arifle_M16A4_GL",
	"CUP_arifle_M4A1",
	"CUP_arifle_M4A1_camo",
	"CUP_arifle_FNFAL",
	"CUP_arifle_G36A",
	"CUP_arifle_G36A_camo",
	"CUP_arifle_G36K",
	"CUP_arifle_G36K_camo",
	"CUP_arifle_G36C",
	"CUP_arifle_G36C_camo",
	"CUP_arifle_MG36",
	"CUP_arifle_MG36_camo",
	"CUP_arifle_AK74",
	"CUP_arifle_AK107",
	"CUP_arifle_AKS74",
	"CUP_arifle_AKS74U",
	"CUP_arifle_AK74_GL",
	"CUP_arifle_AKM",
	"CUP_arifle_AKS",
	"CUP_arifle_AKS_Gold",
	"CUP_arifle_RPK74",
	"CUP_arifle_AK74_GL_kobra",
	"CUP_arifle_CZ805_A2"
		};
	};

	class CUPSniperRifles
	{
		name = "CUP Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_srifle_SVD_wdl_ghillie",
	"CUP_srifle_SVD_des_ghillie_pso",
	"CUP_srifle_DMR",
	"CUP_srifle_ksvk",
	"CUP_srifle_M110",
	"CUP_srifle_M14",
	"CUP_srifle_M14_DMR",
	"CUP_srifle_M24_des",
	"CUP_srifle_M24_wdl",
	"CUP_srifle_M24_ghillie",
	"CUP_srifle_SVD",
	"CUP_srifle_SVD_des",
	"CUP_srifle_VSSVintorez",
	"CUP_srifle_CZ750",
	"CUP_srifle_Mk12SPR",
	"CUP_srifle_AS50",
	"CUP_srifle_AWM_des",
	"CUP_srifle_AWM_wdl",
	"CUP_srifle_CZ550",
	"CUP_srifle_LeeEnfield",
	"CUP_srifle_M40A3",
	"CUP_srifle_M107_Base"
		};
	};

	class CUPShotguns
	{
		name = "CUP Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{	
	"CUP_sgun_AA12",
	"CUP_sgun_M1014",
	"CUP_sgun_Saiga12K"
		};
	};	
	
	class CUPLaunchers
	{
		name = "CUP Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_glaunch_M32",
	"CUP_glaunch_M79",
	"CUP_glaunch_Mk13",
	"CUP_launch_M136",
	"CUP_launch_RPG18",
	"CUP_launch_RPG7V",
	"CUP_launch_M47",
	"CUP_launch_MAAWS_Scope",
	"CUP_launch_FIM92Stinger"
	
		};
	};	
	
	class CUPLauncherAmmo
	{
		name = "CUP Launcher Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
	"CUP_RPG18_M",
	"CUP_6Rnd_HE_M203",
	"CUP_1Rnd_HE_M203",
	"CUP_Dragon_EP1_M",
	"CUP_AT13_M",
	"CUP_PG7VL_M",
	"CUP_PG7VR_M",	
	"CUP_M136_M",
	"CUP_Stinger_M",
	"CUP_Dragon_EP1_M",
	"CUP_MAAWS_HEDP_M",
	"CUP_MAAWS_HEAT_M"
		};
	};		

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna"
		};
	};
	
		class CUPUnarmed
	{
		name = "CUP Vehicles Unarmed";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_C_Datsun",
			"CUP_C_Datsun_4seat",
			"CUP_C_Datsun_Plain",
			"CUP_C_Datsun_Covered",
			"CUP_C_Datsun_Tubeframe",
			"CUP_C_Ural_Civ_01",
			"CUP_C_Ural_Civ_02",
			"CUP_C_Ural_Civ_03",
			"CUP_C_Ural_Open_Civ_01",
			"CUP_C_Ural_Open_Civ_02",
			"CUP_C_Ural_Open_Civ_03",
			"CUP_O_Ural_TKA",
			"CUP_O_Ural_RU",
			"CUP_I_Ural_UN",
			"CUP_B_Ural_CDF",
			"CUP_O_Ural_CHDKZ",
			"CUP_O_Ural_SLA",
			"CUP_O_Ural_Open_TKA",
			"CUP_B_Ural_Open_CDF",
			"CUP_O_Ural_Open_RU",
			"CUP_O_Ural_Open_CHDKZ",
			"CUP_O_Ural_Open_SLA",
			"CUP_O_Ural_Empty_SLA",
			"CUP_B_Ural_Empty_CDF",
			"CUP_I_Ural_Empty_UN",
			"CUP_O_Ural_Empty_RU",
			"CUP_O_Ural_Empty_CHDKZ",
			"CUP_O_Ural_Empty_TKA",
			"CUP_O_Ural_Repair_SLA",
			"CUP_O_Ural_Repair_TKA",
			"CUP_O_Ural_Repair_CHDKZ",
			"CUP_O_Ural_Repair_RU",
			"CUP_I_Ural_Repair_UN",
			"CUP_B_Ural_Repair_CDF",
			"CUP_B_Ural_Refuel_CDF",
			"CUP_O_Ural_Refuel_RU",
			"CUP_O_Ural_Refuel_CHDKZ",
			"CUP_O_Ural_Refuel_TKA",
			"CUP_O_Ural_Refuel_SLA",
			"CUP_C_LR_Transport_CTK",
			"CUP_O_LR_Transport_TKA",
			"CUP_O_LR_Transport_TKM",
			"CUP_B_LR_Transport_CZ_W",
			"CUP_B_LR_Transport_CZ_D",
			"CUP_B_LR_Transport_GB_W",
			"CUP_B_LR_Transport_GB_D",
			"CUP_B_LR_Ambulance_CZ_W",
			"CUP_B_LR_Ambulance_CZ_D",
			"CUP_B_LR_Ambulance_GB_W",
			"CUP_B_LR_Ambulance_GB_D",
			"CUP_O_LR_Ambulance_TKA",
			"CUP_C_UAZ_Unarmed_TK_CIV",
			"CUP_O_UAZ_Unarmed_RU",
			"CUP_I_UAZ_Unarmed_UN",
			"CUP_O_UAZ_Unarmed_TKA",
			"CUP_O_UAZ_Unarmed_CHDKZ",
			"CUP_B_UAZ_Unarmed_ACR",
			"CUP_B_UAZ_Unarmed_CDF",
			"CUP_C_UAZ_Open_TK_CIV",
			"CUP_O_UAZ_Open_CHDKZ",
			"CUP_O_UAZ_Open_RU",
			"CUP_O_UAZ_Open_TKA",
			"CUP_I_UAZ_Open_UN",
			"CUP_B_UAZ_Open_ACR",
			"CUP_B_UAZ_Open_CDF",
			"CUP_B_HMMWV_Unarmed_USA",
			"CUP_B_HMMWV_Unarmed_USMC",
			"CUP_B_HMMWV_Ambulance_USMC",
			"CUP_B_HMMWV_Ambulance_USA",
			"CUP_B_HMMWV_Ambulance_ACR",
			"CUP_B_HMMWV_Transport_USA",
			"CUP_I_M113_Med_RACS",
			"CUP_I_M113_Med_UN"
		};
	};
	
	class CUPArmed
	{
		name = "CUP Vehicles Armed";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_O_LR_MG_TKM",
			"CUP_O_LR_MG_TKA",
			"CUP_I_Datsun_PK",
			"CUP_I_Datsun_PK_Random",
			"CUP_I_Datsun_PK_TK",
			"CUP_I_Datsun_PK_TK_Random",
			"CUP_O_Datsun_PK",
			"CUP_O_Datsun_PK_Random",
			"CUP_O_UAZ_MG_CHDKZ",
			"CUP_O_UAZ_MG_RU",
			"CUP_O_UAZ_MG_TKA",
			"CUP_I_UAZ_MG_UN",
			"CUP_B_UAZ_MG_ACR",
			"CUP_B_UAZ_MG_CDF",
			"CUP_B_UAZ_AGS30_CDF",
			"CUP_O_UAZ_AGS30_CHDKZ",
			"CUP_O_UAZ_AGS30_RU",
			"CUP_O_UAZ_AGS30_TKA",
			"CUP_I_UAZ_AGS30_UN",
			"CUP_I_M113_RACS",
			"CUP_I_M113_UN",
			"CUP_BAF_Jackal2_L2A1_W",
			"CUP_BAF_Jackal2_L2A1_D",
			"CUP_BAF_Jackal2_GMG_D",
			"CUP_BAF_Jackal2_GMG_W",
			"CUP_B_LR_Special_CZ_W",
			"CUP_B_LR_Special_Des_CZ_D",
			"CUP_B_LR_MG_CZ_W",
			"CUP_B_LR_MG_GB_W",
			"CUP_B_HMMWV_M1114_USMC",
			"CUP_B_HMMWV_M2_USMC",
			"CUP_B_HMMWV_Crows_M2_USA",
			"CUP_B_HMMWV_M2_GPK_USA",
			"CUP_B_HMMWV_M2_USA",
			"CUP_B_HMMWV_DSHKM_GPK_ACR",
			"CUP_B_HMMWV_AGS_GPK_ACR",
			"CUP_B_HMMWV_MK19_USMC",
			"CUP_B_HMMWV_MK19_USA",
			"CUP_B_HMMWV_Crows_MK19_USA",
			"CUP_B_HMMWV_SOV_USA",
			"CUP_B_BRDM2_HQ_CDF",
			"CUP_O_BRDM2_HQ_SLA",
			"CUP_I_BRDM2_HQ_UN",
			"CUP_I_BRDM2_HQ_NAPA",
			"CUP_I_BRDM2_HQ_TK_Gue",
			"CUP_O_BRDM2_HQ_TKA",
			"CUP_O_BRDM2_HQ_CHDKZ",
			"CUP_O_BRDM2_CHDKZ",
			"CUP_O_BRDM2_SLA",
			"CUP_O_BRDM2_TKA",
			"CUP_I_BRDM2_NAPA",
			"CUP_I_BRDM2_TK_Gue",
			"CUP_I_BRDM2_UN",
			"CUP_B_BRDM2_CDF"
		};
	};

	class CUPChoppers
	{
		name = "CUP Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_B_CH53E_USMC",
			"CUP_B_UH1Y_UNA_F",
			"CUP_B_UH1Y_MEV_F",
			"CUP_C_Mi17_Civilian_RU",
			"CUP_B_Mi17_CDF",
			"CUP_O_Mi17_TK",
			"CUP_B_Mi17_medevac_CDF",
			"CUP_B_Mi171Sh_Unarmed_ACR",
			"CUP_O_Mi8_medevac_CHDKZ",
			"CUP_O_Mi8_medevac_RU",
			"CUP_Merlin_HC3_FFV",
			"CUP_Merlin_HC3",
			"CUP_Merlin_HC3_MED",
			"CUP_B_MH60S_USMC",
			"CUP_B_MH60S_FFV_USMC",
			"CUP_B_AW159_Unarmed_BAF",
			"CUP_B_CH47F_USA",
			"CUP_B_CH47F_GB",
			"CUP_B_UH60M_US",
			"CUP_B_UH60L_US",
			"CUP_B_UH60M_FFV_US",
			"CUP_B_UH60L_FFV_US",
			"CUP_B_UH60M_Unarmed_US",
			"CUP_B_UH60L_Unarmed_US",
			"CUP_B_UH60M_Unarmed_FFV_US",
			"CUP_B_UH60L_Unarmed_FFV_US",
			"CUP_B_UH60M_Unarmed_FFV_MEV_US",
			"CUP_B_UH60L_Unarmed_FFV_MEV_US",
			"CUP_I_UH60L_RACS",
			"CUP_I_UH60L_FFV_RACS",
			"CUP_I_UH60L_Unarmed_RACS",
			"CUP_I_UH60L_Unarmed_FFV_Racs",
			"CUP_I_UH60L_Unarmed_FFV_MEV_Racs",
			"CUP_B_AH1Z_NoWeapons"
		};
	};
	
	class TRYKUniforms
	{
		name = "TRYK Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"TRYK_HRP_UCP",
			"TRYK_HRP_USMC",
			"TRYK_HRP_khk",
			"TRYK_U_B_OD_OD_CombatUniform",
			"TRYK_U_B_OD_OD_R_CombatUniform",
			"TRYK_U_B_TANTAN_CombatUniform",
			"TRYK_U_B_TANTAN_R_CombatUniform",
			"TRYK_U_B_BLKBLK_CombatUniform",
			"TRYK_U_B_BLKBLK_R_CombatUniform",
			"TRYK_U_B_GRYOCP_CombatUniform",
			"TRYK_U_B_GRYOCP_R_CombatUniformTshirt",
			"TRYK_U_B_TANOCP_CombatUniform",
			"TRYK_U_B_TANOCP_R_CombatUniformTshirt",
			"TRYK_U_B_BLKOCP_CombatUniform",
			"TRYK_U_B_BLKOCP_R_CombatUniformTshirt",
			"TRYK_U_B_BLKTAN_CombatUniform",
			"TRYK_U_B_BLKTANR_CombatUniformTshirt",
			"TRYK_U_B_ODTAN_CombatUniform",
			"TRYK_U_B_ODTANR_CombatUniformTshirt",
			"TRYK_U_B_GRTAN_CombatUniform",
			"TRYK_U_B_GRTANR_CombatUniformTshirt",
			"TRYK_U_B_wood_CombatUniform",
			"TRYK_U_B_woodR_CombatUniformTshirt",
			"TRYK_U_B_wood3c_CombatUniform",
			"TRYK_U_B_wood3c_CombatUniformTshirt",
			"TRYK_U_B_MARPAT_WOOD_CombatUniform",
			"TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt",
			"TRYK_U_B_WOOD_MARPAT_CombatUniform",
			"TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt",
			"TRYK_U_B_woodtan_CombatUniform",
			"TRYK_U_B_woodtanR_CombatUniformTshirt",
			"TRYK_U_B_JSDF_CombatUniform",
			"TRYK_U_B_JSDF_CombatUniformTshirt",
			"TRYK_U_B_3CD_Delta_BDU",
			"TRYK_U_B_3CD_Delta_BDUTshirt",
			"TRYK_U_B_3CD_Ranger_BDU",
			"TRYK_U_B_3CD_Ranger_BDUTshirt",
			"TRYK_U_B_3CD_BLK_BDUTshirt",
			"TRYK_U_B_3CD_BLK_BDUTshirt2",
			"TRYK_U_B_ACU",
			"TRYK_U_B_ACUTshirt",
			"TRYK_U_B_MARPAT_Wood",
			"TRYK_U_B_MARPAT_Wood_Tshirt",
			"TRYK_U_B_MARPAT_Desert",
			"TRYK_U_B_MARPAT_Desert_Tshirt",
			"TRYK_U_B_MARPAT_Desert2",
			"TRYK_U_B_MARPAT_Desert2_Tshirt",
			"TRYK_U_B_3c",
			"TRYK_U_B_3cr",
			"TRYK_U_B_Sage_Tshirt",
			"TRYK_U_B_BLK3CD",
			"TRYK_U_B_BLK3CD_Tshirt",
			"TRYK_U_B_BLK",
			"TRYK_U_B_BLK_Tshirt",
			"TRYK_U_B_BLKTAN",
			"TRYK_U_B_BLKTAN_Tshirt",
			"TRYK_U_B_ODTAN",
			"TRYK_U_B_ODTAN_Tshirt",
			"TRYK_U_B_BLK_OD",
			"TRYK_U_B_BLK_OD_Tshirt",
			"TRYK_U_B_C01_Tsirt",
			"TRYK_U_B_C02_Tsirt",
			"TRYK_U_B_OD_BLK",
			"TRYK_U_B_OD_BLK_2",
			"TRYK_U_B_BLK_TAN_1",
			"TRYK_U_B_BLK_TAN_2",
			"TRYK_U_B_wh_tan_Rollup_CombatUniform",
			"TRYK_U_B_wh_OD_Rollup_CombatUniform",
			"TRYK_U_B_wh_blk_Rollup_CombatUniform",
			"TRYK_U_B_BLK_tan_Rollup_CombatUniform",
			"TRYK_U_B_BLK_OD_Rollup_CombatUniform",
			"TRYK_U_B_NATO_UCP_GRY_CombatUniform",
			"TRYK_U_B_NATO_UCP_GRY_R_CombatUniform",
			"TRYK_U_B_NATO_UCP_CombatUniform",
			"TRYK_U_B_NATO_UCP_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_c_BLK_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_R_CombatUniform",
			"TRYK_U_B_NATO_OCPD_CombatUniform",
			"TRYK_U_B_NATO_OCPD_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_CombatUniform",
			"TRYK_U_B_NATO_OCP_R_CombatUniform",
			"TRYK_U_B_AOR1_Rollup_CombatUniform",
			"TRYK_U_B_AOR2_Rollup_CombatUniform",
			"TRYK_U_B_MTP_CombatUniform",
			"TRYK_U_B_MTP_R_CombatUniform",
			"TRYK_U_B_MTP_BLK_CombatUniform",
			"TRYK_U_B_MTP_BLK_R_CombatUniform",
			"TRYK_U_B_Woodland",
			"TRYK_U_B_Woodland_Tshirt",
			"TRYK_U_B_WDL_GRY_CombatUniform",
			"TRYK_U_B_WDL_GRY_R_CombatUniform",
			"TRYK_U_B_ARO1_GR_CombatUniform",
			"TRYK_U_B_ARO1_GR_R_CombatUniform",
			"TRYK_U_B_ARO1_GRY_CombatUniform",
			"TRYK_U_B_ARO1_GRY_R_CombatUniform",
			"TRYK_U_B_ARO1_CombatUniform",
			"TRYK_U_B_ARO1R_CombatUniform",
			"TRYK_U_B_ARO1_BLK_CombatUniform",
			"TRYK_U_B_ARO1_BLK_R_CombatUniform",
			"TRYK_U_B_ARO1_CBR_CombatUniform",
			"TRYK_U_B_ARO1_CBR_R_CombatUniform",
			"TRYK_U_B_ARO2_CombatUniform",
			"TRYK_U_B_ARO2R_CombatUniform",
			"TRYK_U_B_AOR2_BLK_CombatUniform",
			"TRYK_U_B_AOR2_BLK_R_CombatUniform",
			"TRYK_U_B_AOR2_OD_CombatUniform",
			"TRYK_U_B_AOR2_OD_R_CombatUniform",
			"TRYK_U_B_AOR2_GRY_CombatUniform",
			"TRYK_U_B_AOR2_GRY_R_CombatUniform",
			"TRYK_U_B_Snow_CombatUniform",
			"TRYK_U_B_Snowt",
			"TRYK_U_B_Denim_T_WH",
			"TRYK_U_B_Denim_T_BK",
			"TRYK_U_B_BLK_T_WH",
			"TRYK_U_B_BLK_T_BK",
			"TRYK_U_B_RED_T_BR",
			"TRYK_U_B_Denim_T_BG_WH",
			"TRYK_U_B_Denim_T_BG_BK",
			"TRYK_U_B_BLK_T_BG_WH",
			"TRYK_U_B_BLK_T_BG_BK",
			"TRYK_U_B_RED_T_BG_BR",
			"TRYK_U_B_fleece",
			"TRYK_U_B_fleece_UCP",
			"TRYK_U_B_UCP_PCUs",
			"TRYK_U_B_GRY_PCUs",
			"TRYK_U_B_Wood_PCUs",
			"TRYK_U_B_PCUs",
			"TRYK_U_B_UCP_PCUs_R",
			"TRYK_U_B_GRY_PCUs_R",
			"TRYK_U_B_Wood_PCUs_R",
			"TRYK_U_B_PCUs_R",
			"TRYK_U_B_PCUGs",
			"TRYK_U_B_PCUODs",
			"TRYK_U_B_PCUGs_gry",
			"TRYK_U_B_PCUGs_BLK",
			"TRYK_U_B_PCUGs_OD",
			"TRYK_U_B_PCUGs_gry_R",
			"TRYK_U_B_PCUGs_BLK_R",
			"TRYK_U_B_PCUGs_OD_R",
			"TRYK_U_Bts_GRYGRY_PCUs",
			"TRYK_U_Bts_UCP_PCUs",
			"TRYK_U_Bts_Wood_PCUs",
			"TRYK_U_Bts_PCUs",
			"TRYK_U_pad_j",
			"TRYK_U_pad_j_blk",
			"TRYK_U_pad_hood_Cl",
			"TRYK_U_pad_hood_Cl_blk",
			"TRYK_U_pad_hood_tan",
			"TRYK_U_pad_hood_Blk",
			"TRYK_U_pad_hood_CSATBlk",
			"TRYK_U_pad_hood_Blod",
			"TRYK_U_pad_hood_odBK",
			"TRYK_U_pad_hood_BKT2",
			"TRYK_hoodie_Blk",
			"TRYK_hoodie_FR",
			"TRYK_hoodie_Wood",
			"TRYK_hoodie_3c",
			"TRYK_T_camo_tan",
			"TRYK_T_camo_3c",
			"TRYK_T_camo_Wood",
			"TRYK_T_camo_wood_marpat",
			"TRYK_T_camo_Desert_marpat",
			"TRYK_T_camo_3c_BG",
			"TRYK_T_camo_Wood_BG",
			"TRYK_T_camo_wood_marpat_BG",
			"TRYK_T_camo_desert_marpat_BG",
			"TRYK_T_PAD",
			"TRYK_T_OD_PAD",
			"TRYK_T_TAN_PAD",
			"TRYK_T_BLK_PAD",
			"TRYK_T_T2_PAD",
			"TRYK_T_CSAT_PAD",
			"TRYK_U_nohoodPcu_gry",
			"TRYK_U_hood_nc",
			"TRYK_U_hood_mc",
			"TRYK_U_denim_hood_blk",
			"TRYK_U_denim_hood_mc",
			"TRYK_U_denim_hood_3c",
			"TRYK_U_denim_hood_nc",
			"TRYK_U_denim_jersey_blu",
			"TRYK_U_denim_jersey_blk",
			"TRYK_shirts_PAD",
			"TRYK_shirts_OD_PAD",
			"TRYK_shirts_TAN_PAD",
			"TRYK_shirts_BLK_PAD",
			"TRYK_shirts_PAD_BK",
			"TRYK_shirts_OD_PAD_BK",
			"TRYK_shirts_TAN_PAD_BK",
			"TRYK_shirts_BLK_PAD_BK",
			"TRYK_shirts_PAD_BLW",
			"TRYK_shirts_OD_PAD_BLW",
			"TRYK_shirts_TAN_PAD_BLW",
			"TRYK_shirts_BLK_PAD_BLW",
			"TRYK_shirts_PAD_YEL",
			"TRYK_shirts_OD_PAD_YEL",
			"TRYK_shirts_TAN_PAD_YEL",
			"TRYK_shirts_BLK_PAD_YEL",
			"TRYK_shirts_PAD_RED2",
			"TRYK_shirts_OD_PAD_RED2",
			"TRYK_shirts_TAN_PAD_RED2",
			"TRYK_shirts_BLK_PAD_RED2",
			"TRYK_shirts_PAD_BLU3",
			"TRYK_shirts_OD_PAD_BLU3",
			"TRYK_shirts_TAN_PAD_BLU3",
			"TRYK_shirts_BLK_PAD_BLU3",
			"TRYK_shirts_DENIM_R",
			"TRYK_shirts_DENIM_BL",
			"TRYK_shirts_DENIM_BK",
			"TRYK_shirts_DENIM_WH",
			"TRYK_shirts_DENIM_BWH",
			"TRYK_shirts_DENIM_RED2",
			"TRYK_shirts_DENIM_WHB",
			"TRYK_shirts_DENIM_ylb",
			"TRYK_shirts_DENIM_od",
			"TRYK_shirts_DENIM_R_Sleeve",
			"TRYK_shirts_DENIM_BL_Sleeve",
			"TRYK_shirts_DENIM_BK_Sleeve",
			"TRYK_shirts_DENIM_WH_Sleeve",
			"TRYK_shirts_DENIM_BWH_Sleeve",
			"TRYK_shirts_DENIM_RED2_Sleeve",
			"TRYK_shirts_DENIM_WHB_Sleeve",
			"TRYK_shirts_DENIM_ylb_Sleeve",
			"TRYK_shirts_DENIM_od_Sleeve",
			"TRYK_shirts_PAD_BL",
			"TRYK_shirts_OD_PAD_BL",
			"TRYK_shirts_TAN_PAD_BL",
			"TRYK_shirts_BLK_PAD_BL",
			"TRYK_U_taki_wh",
			"TRYK_U_taki_COY",
			"TRYK_U_taki_BL",
			"TRYK_U_taki_BLK",
			"TRYK_U_Bts_PCUGs",
			"TRYK_U_Bts_PCUODs",
			"TRYK_U_taki_G_WH",
			"TRYK_U_taki_G_COY",
			"TRYK_U_taki_G_BL",
			"TRYK_U_taki_G_BLK",
			"TRYK_U_B_PCUHs",
			"TRYK_U_B_PCUGHs",
			"TRYK_U_B_PCUODHs",
			"TRYK_B_USMC_R",
			"TRYK_B_USMC_R_ROLL",
			"TRYK_ZARATAKI",
			"TRYK_ZARATAKI2",
			"TRYK_ZARATAKI3",
			"TRYK_B_TRYK_UCP_T",
			"TRYK_B_TRYK_3C_T",
			"TRYK_B_TRYK_MTP_T",
			"TRYK_B_TRYK_OCP_T",
			"TRYK_B_TRYK_OCP_D_T",
			"TRYK_DMARPAT_T",
			"TRYK_C_AOR2_T",
			"TRYK_U_B_Sage_T",
			"TRYK_U_B_Wood_T",
			"TRYK_U_B_BLTAN_T",
			"TRYK_U_B_BLOD_T",
			"TRYK_OVERALL_flesh",
			"TRYK_OVERALL_nok_flesh",
			"TRYK_OVERALL_SAGE_BLKboots",
			"TRYK_OVERALL_SAGE_BLKboots_nk_blk",
			"TRYK_OVERALL_SAGE_BLKboots_nk",
			"TRYK_OVERALL_SAGE_BLKboots_nk_blk2",
			"TRYK_OVERALL_SAGE",
			"TRYK_SUITS_BLK_F",
			"TRYK_SUITS_BR_F",
			"TRYK_H_ghillie_top_headless3glass",
			"TRYK_shoulder_armor_BK",
			"TRYK_shoulder_armor_OD",
			"TRYK_shoulder_armor_CY",
			"TRYK_H_ghillie_top_headless3",
			"TRYK_U_B_PCUHsW",
			"TRYK_U_B_PCUHsW2",
			"TRYK_U_B_PCUHsW3",
			"TRYK_U_B_PCUHsW3nh",
			"TRYK_U_B_PCUHsW4",
			"TRYK_U_B_PCUHsW5",
			"TRYK_U_B_PCUHsW6"
			};
	};

	class TRYKVests
	{
		name = "TRYK Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"TRYK_Hrp_vest_ucp",
			"TRYK_V_PlateCarrier_JSDF",
			"TRYK_V_ArmorVest_AOR1",
			"TRYK_V_ArmorVest_AOR2",
			"TRYK_V_ArmorVest_coyo",
			"TRYK_V_ArmorVest_Brown",
			"TRYK_V_ArmorVest_CBR",
			"TRYK_V_ArmorVest_khk",
			"TRYK_V_ArmorVest_rgr",
			"TRYK_V_ArmorVest_green",
			"TRYK_V_ArmorVest_tan",
			"TRYK_V_ArmorVest_Delta",
			"TRYK_V_ArmorVest_Ranger",
			"TRYK_V_ArmorVest_AOR1_2",
			"TRYK_V_ArmorVest_AOR2_2",
			"TRYK_V_ArmorVest_coyo2",
			"TRYK_V_ArmorVest_Brown2",
			"TRYK_V_ArmorVest_cbr2",
			"TRYK_V_ArmorVest_khk2",
			"TRYK_V_ArmorVest_rgr2",
			"TRYK_V_ArmorVest_green2",
			"TRYK_V_ArmorVest_tan2",
			"TRYK_V_ArmorVest_Delta2",
			"TRYK_V_ArmorVest_Ranger2",
			"TRYK_V_PlateCarrier_blk",
			"TRYK_V_PlateCarrier_coyo",
			"TRYK_V_PlateCarrier_wood",
			"TRYK_V_PlateCarrier_ACU",
			"TRYK_V_TacVest_coyo",
			"TRYK_V_harnes_blk_L",
			"TRYK_V_harnes_od_L",
			"TRYK_V_harnes_TAN_L",
			"TRYK_V_PlateCarrier_blk_L",
			"TRYK_V_PlateCarrier_wood_L",
			"TRYK_V_PlateCarrier_ACU_L",
			"TRYK_V_PlateCarrier_coyo_L",
			"TRYK_V_ChestRig_L",
			"TRYK_V_ChestRig",
			"TRYK_V_Bulletproof",
			"TRYK_V_Bulletproof_BLK",
			"TRYK_V_Bulletproof_BL",
			"TRYK_V_IOTV_BLK",
			"TRYK_V_tacv1M_BK",
			"TRYK_V_tacv1MLC_BK",
			"TRYK_V_tacv1",
			"TRYK_V_tacv1_CY",
			"TRYK_V_tacv1_BK",
			"TRYK_V_tacv1_P_BK",
			"TRYK_V_tacv1_SHERIFF_BK",
			"TRYK_V_tacv1_FBI_BK",
			"TRYK_V_tacv1LP_BK",
			"TRYK_V_tacv1LSRF_BK",
			"TRYK_V_tacv1LC_BK",
			"TRYK_V_tacv1LC_CY",
			"TRYK_V_tacv1LC_OD",
			"TRYK_V_tacv1LC_FBI_BK",
			"TRYK_V_tacv1LC_SRF_BK",
			"TRYK_V_tacv1LC_SRF_OD",
			"TRYK_V_tacv1LC_P_BK",
			"TRYK_V_PlateCarrier_POLICE",
			"TRYK_V_ArmorVest_HRT_B",
			"TRYK_V_ArmorVest_HRT_OD",
			"TRYK_V_ArmorVest_HRT2_B",
			"TRYK_V_ArmorVest_HRT2_OD",
			"TRYK_V_ArmorVest_Winter",
			"TRYK_V_Sheriff_BA_OD",
			"TRYK_V_tacv10_BK",
			"TRYK_V_tacv10_OD",
			"TRYK_V_tacv10_TN",
			"TRYK_V_tacv10LC_BK",
			"TRYK_V_tacv10LC_OD",
			"TRYK_V_tacv10LC_TN",
			"TRYK_V_tacv1L_BK",
			"TRYK_V_tacv1L_OD",
			"TRYK_V_tacv1L_CY",
			"TRYK_V_tacv1LC_FBI2_BK",
			"TRYK_V_tacv1LC_SRF2_BK",
			"TRYK_V_tacv1LC_SRF2_OD",
			"TRYK_V_tacv1LC_P2_BK",
			"TRYK_V_tacv1_MSL_BK",
			"TRYK_V_tacv1_MSL_NV",
			"TRYK_V_tacv1LMSL_BK",
			"TRYK_V_tacv1LMSL_NV",
			"TRYK_V_tacv1LC_MSL_BK",
			"TRYK_V_tacv1LC_MSL_NV",
			"TRYK_V_tacSVD_BK",
			"TRYK_V_tacSVD_OD",
			"TRYK_V_Sheriff_BA_TL",
			"TRYK_V_Sheriff_BA_TBL",
			"TRYK_V_Sheriff_BA_TCL",
			"TRYK_V_Sheriff_BA_TL2",
			"TRYK_V_Sheriff_BA_TBL2",
			"TRYK_V_Sheriff_BA_TCL2",
			"TRYK_V_Sheriff_BA_T",
			"TRYK_V_Sheriff_BA_TB",
			"TRYK_V_Sheriff_BA_T2",
			"TRYK_V_Sheriff_BA_TB2",
			"TRYK_V_Sheriff_BA_T3",
			"TRYK_V_Sheriff_BA_TB3",
			"TRYK_V_Sheriff_BA_T4",
			"TRYK_V_Sheriff_BA_TB4",
			"TRYK_V_Sheriff_BA_T5",
			"TRYK_V_Sheriff_BA_TB5",
			"TRYK_V_Sheriff_BA_TBL3_BK",
			"TRYK_V_Sheriff_BA_TBL3_OD",
			"TRYK_V_Sheriff_BA_TBL3_TN",
			"TRYK_LOC_AK_chestrig_OD",
			"TRYK_LOC_AK_chestrig_TAN"
		};
	};

	class TRYKHeadgear
	{
		name = "TRYK Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"TRYK_US_ESS_Glasses",
			"TRYK_US_ESS_Glasses_WH",
			"TRYK_US_ESS_Glasses_BLK",
			"TRYK_US_ESS_Glasses_TAN",
			"TRYK_US_ESS_Glasses_TAN_BLK",
			"TRYK_SPGEAR_Glasses",
			"TRYK_headset_Glasses",
			"TRYK_SpsetG_Glasses",
			"TRYK_Spset_PHC1_Glasses",
			"TRYK_Spset_PHC2_Glasses",
			"TRYK_US_ESS_Glasses_H",
			"TRYK_US_ESS_Glasses_Cover",
			"TRYK_headset2_glasses",
			"TRYK_US_ESS_Glasses_NV",
			"TRYK_US_ESS_Glasses_TAN_NV",
			"TRYK_ESS_BLKTAN_NV",
			"TRYK_ESS_BLKBLK_NV",
			"TRYK_G_Shades_Black_NV",
			"TRYK_G_Shades_Blue_NV",
			"TRYK_G_bala_ess_NV",
			"TRYK_bandana_NV",
			"TRYK_SPgearG_NV",
			"TRYK_SPgear_PHC1_NV",
			"TRYK_SPgear_PHC2_NV",
			"TRYK_G_bala_wh_NV",
			"TRYK_ESS_wh_NV",
			"TRYK_ESS_CAP_OD",
			"TRYK_ESS_CAP_tan",
			"TRYK_R_CAP_BLK",
			"TRYK_R_CAP_TAN",
			"TRYK_R_CAP_OD_US",
			"TRYK_r_cap_tan_Glasses",
			"TRYK_r_cap_blk_Glasses",
			"TRYK_r_cap_od_Glasses",
			"TRYK_H_headsetcap_Glasses",
			"TRYK_H_headsetcap_blk_Glasses",
			"TRYK_H_headsetcap_od_Glasses",
			"TRYK_TAC_EARMUFF_SHADE",
			"TRYK_TAC_EARMUFF",
			"TRYK_NOMIC_TAC_EARMUFF",
			"TRYK_headset2",
			"TRYK_TAC_EARMUFF_Gs",
			"TRYK_TAC_SET_bn",
			"TRYK_NOMIC_TAC_EARMUFF_Gs",
			"TRYK_TAC_EARMUFF_SHADE_Gs",
			"TRYK_TAC_SET_TAN",
			"TRYK_TAC_SET_OD",
			"TRYK_TAC_SET_WH",
			"TRYK_TAC_SET_MESH",
			"TRYK_TAC_SET_TAN_2",
			"TRYK_TAC_SET_OD_2",
			"TRYK_TAC_SET_WH_2",
			"TRYK_TAC_SET_MESH_2",
			"TRYK_bandana_g",
			"TRYK_H_PASGT_BLK",
			"TRYK_H_PASGT_OD",
			"TRYK_H_PASGT_COYO",
			"TRYK_H_PASGT_TAN",
			"TRYK_H_Helmet_Snow",
			"TRYK_H_WH",
			"TRYK_H_GR",
			"TRYK_H_AOR1",
			"TRYK_H_AOR2",
			"TRYK_H_EARMUFF",
			"TRYK_H_TACEARMUFF_H",
			"TRYK_H_Bandana_H",
			"TRYK_H_Bandana_wig",
			"TRYK_H_Bandana_wig_g",
			"TRYK_H_wig",
			"TRYK_H_headset2",
			"TRYK_H_ghillie_over",
			"TRYK_H_ghillie_top",
			"TRYK_H_ghillie_top_headless",
			"TRYK_H_ghillie_over_green",
			"TRYK_H_ghillie_top_green",
			"TRYK_H_ghillie_top_headless_green",
			"TRYK_H_woolhat",
			"TRYK_H_woolhat_CW",
			"TRYK_H_woolhat_WH",
			"TRYK_H_woolhat_br",
			"TRYK_H_woolhat_cu",
			"TRYK_H_woolhat_tan",
			"TRYK_H_headsetcap",
			"TRYK_H_headsetcap_blk",
			"TRYK_H_headsetcap_od",
			"TRYK_H_pakol",
			"TRYK_H_pakol2",
			"TRYK_H_LHS_HEL_G",
			"TRYK_H_Helmet_Winter",
			"TRYK_H_Helmet_Winter_2",
			"TRYK_Headphone_NV",
			"TRYK_HRPIGEAR_NV",
			"TRYK_Headset_NV",
			"TRYK_TAC_boonie_SET_NV",
			"TRYK_TAC_SET_NV_TAN",
			"TRYK_TAC_SET_NV_OD",
			"TRYK_TAC_SET_NV_WH",
			"TRYK_TAC_SET_NV_MESH",
			"TRYK_TAC_SET_NV_TAN_2",
			"TRYK_TAC_SET_NV_OD_2",
			"TRYK_TAC_SET_NV_WH_2",
			"TRYK_TAC_SET_NV_MESH_2",
			"TRYK_H_DELTAHELM_NV",
			"TRYK_Shemagh_shade_MESH",
			"TRYK_Shemagh_shade_N",
			"TRYK_Shemagh_shade_G_N",
			"TRYK_Shemagh_shade_WH_N",
			"TRYK_kio_balaclava_WH",
			"TRYK_kio_balaclava_BLK",
			"TRYK_kio_balaclavas",
			"TRYK_kio_balaclava_BLK_ear",
			"TRYK_kio_balaclava_ear",
			"TRYK_kio_balaclava_ESS",
			"TRYK_Shemagh",
			"TRYK_Shemagh_mesh",
			"TRYK_Shemagh_G",
			"TRYK_Shemagh_WH",
			"TRYK_Shemagh_shade",
			"TRYK_Shemagh_shade_G",
			"TRYK_Shemagh_shade_WH",
			"TRYK_Shemagh_shade_MH",
			"TRYK_Shemagh_ESS",
			"TRYK_Shemagh_ESS_G",
			"TRYK_Shemagh_ESS_WH",
			"TRYK_Shemagh_EAR_TAN",
			"TRYK_Shemagh_EAR_WH",
			"TRYK_balaclava_BLACK_NV",
			"TRYK_balaclava_NV",
			"TRYK_balaclava_BLACK_EAR_NV",
			"TRYK_balaclava_EAR_NV",
			"TRYK_Shemagh_TAN_NV",
			"TRYK_Shemagh_MESH_NV",
			"TRYK_Shemagh_G_NV",
			"TRYK_Shemagh_WH_NV",
			"TRYK_Shemagh_EAR_NV",
			"TRYK_Shemagh_EAR_G_NV",
			"TRYK_Shemagh_EAR_WH_NV",
			"TRYK_ShemaghESSTAN_NV",
			"TRYK_ShemaghESSOD_NV",
			"TRYK_ShemaghESSWH_NV"
		};
	};

 
	class TRYKBackpacks
	{
		name = "TRYK Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"TRYK_B_AssaultPack_UCP",
			"TRYK_B_AssaultPack_Type2camo",
			"TRYK_B_AssaultPack_MARPAT_Desert",
			"TRYK_B_AssaultPack_MARPAT_Wood",
			"TRYK_B_Kitbag_Base",
			"TRYK_B_Kitbag_blk",
			"TRYK_B_Kitbag_aaf",
			"TRYK_B_Carryall_blk",
			"TRYK_B_Carryall_wh",
			"TRYK_B_Carryall_wood",
			"TRYK_B_Carryall_JSDF",
			"TRYK_B_Kitbag_Base_JSDF",
			"TRYK_B_Coyotebackpack",
			"TRYK_B_Coyotebackpack_OD",
			"TRYK_B_Coyotebackpack_BLK",
			"TRYK_B_Coyotebackpack_WH",
			"TRYK_B_Alicepack",
			"TRYK_B_Medbag",
			"TRYK_B_Medbag_OD",
			"TRYK_B_Medbag_BK",
			"TRYK_B_Medbag_ucp",
			"TRYK_B_Belt",
			"TRYK_B_Belt_BLK",
			"TRYK_B_Belt_CYT",
			"TRYK_B_Belt_tan",
			"TRYK_B_Belt_br",
			"TRYK_B_Belt_GR",
			"TRYK_B_Belt_AOR1",
			"TRYK_B_Belt_AOR2",
			"TRYK_B_BAF_BAG_BLK",
			"TRYK_B_BAF_BAG_CYT",
			"TRYK_B_BAF_BAG_OD",
			"TRYK_B_BAF_BAG_rgr",
			"TRYK_B_BAF_BAG_mcamo",
			"TRYK_B_tube_cyt",
			"TRYK_B_tube_od",
			"TRYK_B_tube_blk",
			"TRYK_B_FieldPack_Wood",
			"TRYK_Winter_pack"
		};
	};
};

class CfgTraders
{
	
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"CUPMuzzleAttachments",
			"CUPOpticAttachments", 
			"CUPAmmunition",
			"CUPPistols",
			"CUPShotguns",
			"CUPSubMachineGuns", 
			"CUPLightMachineGuns", 
			"CUPAssaultRifles",
			"CUPSniperRifles"	
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"CUPExplosive",
			"CUPLaunchers", 
			"CUPLauncherAmmo"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid",
			"TRYKUniforms",
			"TRYKVests",
			"TRYKHeadgear",
			"TRYKBackpacks"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"CUPUnarmed",
			"CUPArmed"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes",
			"CUPChoppers"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};