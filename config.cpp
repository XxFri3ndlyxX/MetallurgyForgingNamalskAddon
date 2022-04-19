class CfgPatches
{
	class MetallurgyForgingNamalskAddon
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ns_plants"
		};
	};
};
class CfgMods
{
	class MetallurgyForgingNamalskAddon
	{
		dir="MetallurgyForgingNamalskAddon";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="MetallurgyForgingNamalskAddon";
		credits="Dumpgrah";
		author="Dumpgrah";
		authorID="0";
		version="1.25";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MetallurgyForgingNamalskAddon/scripts/4_World"
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class TreeHard;
	class TreeHard_d_piceaabies_stumpb_dark: TreeHard
	{
		isCuttable = 1;
		primaryDropsAmount = 1;
		secondaryDropsAmount = 1;
		toolDamage = 1.0;
		cycleTimeOverride = 2;
		primaryOutput = "WoodenLog";
		secondaryOutput = "ND_TreeStump";
	};
	class TreeHard_t_piceaabies_2d_dark: TreeHard
	{
		isCuttable = 1;
		primaryDropsAmount = 2;
		secondaryDropsAmount = 1;
		toolDamage = 2.0;
		cycleTimeOverride = 3;
		primaryOutput = "WoodenLog";
		secondaryOutput = "ND_TreeStump";
	};
	class TreeHard_t_piceaabies_3d_dark: TreeHard
	{
		isCuttable = 1;
		primaryDropsAmount = 2;
		secondaryDropsAmount = 1;
		toolDamage = 2.0;
		cycleTimeOverride = 3;
		primaryOutput = "WoodenLog";
		secondaryOutput = "ND_TreeStump";
	};
};
