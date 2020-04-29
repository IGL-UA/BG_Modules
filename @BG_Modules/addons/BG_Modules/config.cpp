#include "resource\CfgModuls.h"
#include "resource\CfgFunctions.h"

class CfgPatches
{
	class BG_Modules
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"WMT_Main"};
		author = "IGL";
		authorUrl = "https://github.com/IGL-UA/BG_Modules";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};
	};
};

class CfgFactionClasses
{
	class BG
	{
		displayName = "BG Modules";
		priority = 0;
		side = 7;
	};
};

class CfgSounds
{
    // sounds[] = {};
    #include "cfgSounds.hpp"
};
