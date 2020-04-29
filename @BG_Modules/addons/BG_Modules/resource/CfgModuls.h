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
//									Видалення техніки
//=======================================================================================
	class BG_Modules_DeleteVehicles: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Видалення техніки";
		category = "BG";
		function = "BG_fn_InitDeleteVehicles";
		icon = "\BG_Modules\pic\deleteveh.paa";
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
//									Обмеження зони руху
//=======================================================================================
	class BG_Modules_Stopzone: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Стоп-зона";
		category = "BG";
		function = "BG_fnc_initModuleStopZone";
		icon = "\BG_Modules\pic\stopzone.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Marker
			{
				displayName  = "$STR_BG_Marker";
				description  = "$STR_BG_Marker_Point_Desc";
				typeName     = "STRING";
				defaultValue = "";
			};
			class Owner
			{
				displayName = "$STR_BG_DefaultSide";
				description = "$STR_BG_DefaultSide_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_Nobody"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		value = 0;};
					class West	{name = "$STR_BG_West"; 		value = 1;};
					class Independent {name = "$STR_BG_Resistance"; 	value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
			class Message
			{
				displayName  = "$STR_BG_Message";
				description  = "$STR_BG_Message_Point_Desc";
				typeName     = "STRING";
				defaultValue = "Ти в забороненій зоні!";
			};
			class MessageTwo
			{
				displayName  = "$STR_BG_MessageTwo";
				description  = "$STR_BG_MessageTwo_Point_Desc";
				typeName     = "STRING";
				defaultValue = "Повенись назад!";
			};
			class MinHeight
			{
				displayName  = "$STR_BG_MinHeight";
				description  = "$STR_BG_MinHeight_Desc";
				typeName 	 = "NUMBER";
				defaultValue = -5;
			};
			class MaxHeight
			{
				displayName  = "$STR_BG_MaxHeight";
				description  = "$STR_BG_MaxHeight_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 30;
			};
			class TimeStopArea
			{
				displayName  = "$STR_BG_TimeStopArea";
				description  = "$STR_BG_TimeStopArea_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 120;
			};
			class TimeBLACKIN
			{
				displayName  = "$STR_BG_TimeBLACKIN";
				description  = "$STR_BG_TimeBLACKIN_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 8;
			};
			class Condition
			{
				displayName  = "$STR_BG_Condition";
				description  = "$STR_BG_Condition_Desc";
				typeName     = "STRING";
				defaultValue = "true";
			};
		};
	};
//=======================================================================================

};