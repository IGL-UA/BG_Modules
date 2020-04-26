class ArgumentsBaseUnits;
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
//=======================================================================================
//									CAPTURE POINT
//=======================================================================================
	class BG_Modules_DeleteVehicles: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Видалення техніки";
		category = "BG";
		function = "BG_fn_InitDeleteVehicles";
		icon = "\BG_DeleteVehicles\pic\deleteveh.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Radius
			{
				displayName  = "$STR_BG_Radius";
				description  = "$STR_BG_Radius_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 20;
			};
			class TimeRun
			{
				displayName  = "$STR_BG_TimeRunScript";
				description  = "$STR_BG_TimeRunScript_Desc";
				typeName     = "NUMBER";
				defaultValue = 240;
			};
		};
	};
//=======================================================================================
};