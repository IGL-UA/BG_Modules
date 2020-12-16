class ArgumentsBaseUnits;
class CfgVehicles
{
	//==========Видалення багів mapTools====//
	class Land;
	class Man: Land
	{
	    class EventHandlers;
	};	
	class CAManBase: Man
	{
		class EventHandlers: EventHandlers
		{
			class BG_mapToolsDelToObjOnMap
			{
				init = "_this call BG_fn_DeleteMapToolsBags";
			};
		};
	};
	//======================================//	
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
		};
		class ModuleDescription
		{
			class Anything;
			class AnyPlayer;
			class AnyObject;
			class EmptyDetector;
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
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		    value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
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
				defaultValue = "Повернись назад!";
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
//									Видача радіостанцій
//=======================================================================================
	class BG_Modules_GetRadio: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Видача радіостанцій";
		category = "BG";
		function = "BG_fn_InitGetRadio";
		icon = "\BG_Modules\pic\radio.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class RadioWest
			{
				displayName = "$STR_BG_RadioWest";
				description = "$STR_BG_RadioWest_Desc";
				typeName 	= "NUMBER";
				class values
				{ 	
					class Empty	{name = "$STR_BG_Nobody"; 		value = 12; default = 1;};
					class Radio0 {name = "$STR_BG_Radio1"; 	    value = 0;};  //"tf_anarc210"
					class Radio1 {name = "$STR_BG_Radio10";    value = 1;};   //"tf_rt1523g"
					class Radio2 {name = "$STR_BG_Radio11";    value = 2;};   //"tf_rt1523g_big"
					class Radio3 {name = "$STR_BG_Radio12";    value = 3;};   //"tf_rt1523g_big_bwmod"
					class Radio4 {name = "$STR_BG_Radio13";    value = 4;};   //"tf_rt1523g_big_bwmod_tropen"
					class Radio5 {name = "$STR_BG_Radio14";    value = 5;};   //"tf_rt1523g_big_rhs"
					class Radio6 {name = "$STR_BG_Radio15";    value = 6;};   //"tf_rt1523g_black"
					class Radio7 {name = "$STR_BG_Radio16";    value = 7;};   //"tf_rt1523g_bwmod"
					class Radio8 {name = "$STR_BG_Radio17";    value = 8;};   //"tf_rt1523g_fabric"
					class Radio9 {name = "$STR_BG_Radio18";    value = 9;};   //"tf_rt1523g_green"
					class Radio10 {name = "$STR_BG_Radio19";    value = 10;}; //"tf_rt1523g_rhs"
					class Radio11 {name = "$STR_BG_Radio20";    value = 11;}; //"tf_rt1523g_sage"
				};
			};
			class RadioEast
			{
				displayName = "$STR_BG_RadioEast";
				description = "$STR_BG_RadioEast_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_Nobody"; 		value = 6; default = 1;};
					class Radio0 {name = "$STR_BG_Radio4";      value = 0;}; //"tf_mr3000"
					class Radio1 {name = "$STR_BG_Radio5";      value = 1;}; //"tf_mr3000_bwmod"
					class Radio2 {name = "$STR_BG_Radio6";      value = 2;}; //"tf_mr3000_bwmod_tropen"
					class Radio3 {name = "$STR_BG_Radio7";      value = 3;}; //"tf_mr3000_multicam"
					class Radio4 {name = "$STR_BG_Radio8";      value = 4;}; //"tf_mr3000_rhs"
					class Radio5 {name = "$STR_BG_Radio9";      value = 5;}; //"tf_mr6000l"
				};
			};
			class RadioGuer
			{
				displayName = "$STR_BG_RadioGuer";
				description = "$STR_BG_RadioGuer_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_Nobody"; 		value = 3; default = 1;};
					class Radio0 {name = "$STR_BG_Radio0"; 		value = 0;}; //"tf_anarc164"
					class Radio1 {name = "$STR_BG_Radio2"; 	    value = 1;}; //"tf_anprc155"
					class Radio2 {name = "$STR_BG_Radio3";      value = 2;}; //"tf_anprc155_coyote"
				};
			};
			class RadioCiv
			{
				displayName = "$STR_BG_RadioCiv";
				description = "$STR_BG_RadioCiv_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_Nobody"; 		value = 21; default = 1;};
					class Radio0 {name = "$STR_BG_Radio0"; 		value = 0;};
					class Radio1 {name = "$STR_BG_Radio1"; 	    value = 1;};
					class Radio2 {name = "$STR_BG_Radio2"; 	    value = 2;};
					class Radio3 {name = "$STR_BG_Radio3";      value = 3;};
					class Radio4 {name = "$STR_BG_Radio4";      value = 4;};
					class Radio5 {name = "$STR_BG_Radio5";      value = 5;};
					class Radio6 {name = "$STR_BG_Radio6";      value = 6;};
					class Radio7 {name = "$STR_BG_Radio7";      value = 7;};
					class Radio8 {name = "$STR_BG_Radio8";      value = 8;};
					class Radio9 {name = "$STR_BG_Radio9";      value = 9;};
					class Radio10 {name = "$STR_BG_Radio10";    value = 10;};
					class Radio11 {name = "$STR_BG_Radio11";    value = 11;};
					class Radio12 {name = "$STR_BG_Radio12";    value = 12;};
					class Radio13 {name = "$STR_BG_Radio13";    value = 13;};
					class Radio14 {name = "$STR_BG_Radio14";    value = 14;};
					class Radio15 {name = "$STR_BG_Radio15";    value = 15;};
					class Radio16 {name = "$STR_BG_Radio16";    value = 16;};
					class Radio17 {name = "$STR_BG_Radio17";    value = 17;};
					class Radio18 {name = "$STR_BG_Radio18";    value = 18;};
					class Radio19 {name = "$STR_BG_Radio19";    value = 19;};
					class Radio20 {name = "$STR_BG_Radio20";    value = 20;};
				};
			};

			
		};
	};
//=======================================================================================
//									Госпіталь
//=======================================================================================
	class BG_Modules_Hospital: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Госпіталь";
		category = "BG";
		function = "BG_fn_InitModuleHospital";
		icon = "\BG_Modules\pic\hospital.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class MarkerHospital
			{
				displayName  = "$STR_BG_Marker";
				description  = "$STR_BG_Marker_Hospital_Desc";
				typeName     = "STRING";
				defaultValue = "";
			};
			class SideOwner
			{
				displayName = "$STR_BG_DefaultSide";
				description = "$STR_BG_DefaultSide_Hospital_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
			class MinHeightHospital
			{
				displayName  = "$STR_BG_MinHeight";
				description  = "$STR_BG_MinHeight_Desc";
				typeName 	 = "NUMBER";
				defaultValue = -5;
			};
			class MaxHeightHospital
			{
				displayName  = "$STR_BG_MaxHeight";
				description  = "$STR_BG_MaxHeight_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 30;
			};
		};
	};
//=======================================================================================
//									Мінне поле
//=======================================================================================
	class BG_Modules_Minefield: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Мінне поле";
		category = "BG";
		function = "BG_fn_InitModuleMinefield";
		icon = "\BG_Modules\pic\minefield.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Miner
			{
				displayName  = "$STR_BG_Miner";
				description  = "$STR_BG_Marker_Miner_Desc";
				typeName     = "STRING";
				defaultValue = "";
			};
			class MarkerMinefield
			{
				displayName  = "$STR_BG_MarkerMinefield";
				description  = "$STR_BG_MarkerMinefield_Desc";
				typeName     = "STRING";
				defaultValue = "";
			};
			class CountMinefield
			{
				displayName  = "$STR_BG_CountMinefield";
				description  = "$STR_BG_CountMinefield_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 1;
			};
			class TypeMinesPP
			{
				displayName = "$STR_BG_TypeMinesPP";
				description = "$STR_BG_TypeMinesPP_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Minetype0 {name = "$STR_BG_Minetype11";    value = 0;};
					class Minetype1 {name = "$STR_BG_Minetype12";    value = 1;};
					class Minetype2 {name = "$STR_BG_Minetype13";    value = 2;};
					class Minetype3 {name = "$STR_BG_Minetype14";    value = 3;};
					class Minetype4 {name = "$STR_BG_Minetype15";    value = 4;};
					class Minetype5 {name = "$STR_BG_Minetype16";    value = 5;};
					class Minetype6 {name = "$STR_BG_Minetype17";    value = 6; default = 1;};
					class Minetype7 {name = "$STR_BG_Minetype18";    value = 7;};
					class Minetype8 {name = "$STR_BG_Minetype20";    value = 8;};
					class Minetype9 {name = "$STR_BG_Minetype24";    value = 9;};
					class Minetype10 {name = "$STR_BG_Minetype25";    value = 10;};
					class Minetype11 {name = "$STR_BG_Minetype26";    value = 11;};
					class Minetype12 {name = "$STR_BG_Minetype27";    value = 12;};
					class Minetype13 {name = "$STR_BG_Minetype28";    value = 13;};
					class Minetype14 {name = "$STR_BG_Minetype29";    value = 14;};
					class Minetype15 {name = "$STR_BG_Minetype30";    value = 15;};
					class Minetype16 {name = "$STR_BG_Minetype31";    value = 16;};
					class Minetype17 {name = "$STR_BG_Minetype32";    value = 17;};
					class Minetype18 {name = "$STR_BG_Minetype33";    value = 18;};
					class Minetype19 {name = "$STR_BG_Minetype34";    value = 19;};
					class Minetype20 {name = "$STR_BG_Minetype35";    value = 20;};
					class Minetype21 {name = "$STR_BG_Minetype36";    value = 21;};
					class Minetype22 {name = "$STR_BG_Minetype37";    value = 22;};
					class Minetype23 {name = "$STR_BG_Minetype38";    value = 23;};
					class Minetype24 {name = "$STR_BG_Minetype39";    value = 24;};
					class Minetype25 {name = "$STR_BG_Minetype40";    value = 25;};
					class Minetype26 {name = "$STR_BG_Minetype41";    value = 26;};
					class Minetype27 {name = "$STR_BG_Minetype42";    value = 27;};
					class Minetype28 {name = "$STR_BG_Minetype43";    value = 28;};
					class Minetype29 {name = "$STR_BG_Minetype44";    value = 29;};
					class Minetype30 {name = "$STR_BG_Minetype45";    value = 30;};
				};
			};
			class TypeMinesAT
			{
				displayName = "$STR_BG_TypeMinesAT";
				description = "$STR_BG_TypeMinesAT_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Minetype0 {name = "$STR_BG_Minetype11";    value = 0;};
					class Minetype1 {name = "$STR_BG_Minetype12";    value = 1; default = 1;};
					class Minetype2 {name = "$STR_BG_Minetype13";    value = 2;};
					class Minetype3 {name = "$STR_BG_Minetype14";    value = 3;};
					class Minetype4 {name = "$STR_BG_Minetype15";    value = 4;};
					class Minetype5 {name = "$STR_BG_Minetype16";    value = 5;};
					class Minetype6 {name = "$STR_BG_Minetype17";    value = 6;};
					class Minetype7 {name = "$STR_BG_Minetype18";    value = 7;};
					class Minetype8 {name = "$STR_BG_Minetype20";    value = 8;};
					class Minetype9 {name = "$STR_BG_Minetype24";    value = 9;};
					class Minetype10 {name = "$STR_BG_Minetype25";    value = 10;};
					class Minetype11 {name = "$STR_BG_Minetype26";    value = 11;};
					class Minetype12 {name = "$STR_BG_Minetype27";    value = 12;};
					class Minetype13 {name = "$STR_BG_Minetype28";    value = 13;};
					class Minetype14 {name = "$STR_BG_Minetype29";    value = 14;};
					class Minetype15 {name = "$STR_BG_Minetype30";    value = 15;};
					class Minetype16 {name = "$STR_BG_Minetype31";    value = 16;};
					class Minetype17 {name = "$STR_BG_Minetype32";    value = 17;};
					class Minetype18 {name = "$STR_BG_Minetype33";    value = 18;};
					class Minetype19 {name = "$STR_BG_Minetype34";    value = 19;};
					class Minetype20 {name = "$STR_BG_Minetype35";    value = 20;};
					class Minetype21 {name = "$STR_BG_Minetype36";    value = 21;};
					class Minetype22 {name = "$STR_BG_Minetype37";    value = 22;};
					class Minetype23 {name = "$STR_BG_Minetype38";    value = 23;};
					class Minetype24 {name = "$STR_BG_Minetype39";    value = 24;};
					class Minetype25 {name = "$STR_BG_Minetype40";    value = 25;};
					class Minetype26 {name = "$STR_BG_Minetype41";    value = 26;};
					class Minetype27 {name = "$STR_BG_Minetype42";    value = 27;};
					class Minetype28 {name = "$STR_BG_Minetype43";    value = 28;};
					class Minetype29 {name = "$STR_BG_Minetype44";    value = 29;};
					class Minetype30 {name = "$STR_BG_Minetype45";    value = 30;};
				};
			};
			class RadiusMinefield
			{
				displayName  = "$STR_BG_RadiusMinefield";
				description  = "$STR_BG_RadiusMinefield_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 500;
			};
			class CountMines
			{
				displayName  = "$STR_BG_CountMines";
				description  = "$STR_BG_CountMines_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 75;
			};
			class GlobalMarkerMinefield
			{
				displayName = "$STR_BG_GlobalMarkerMinefield";
				description = "$STR_BG_GlobalMarkerMinefield_Desc";
				typeName 	= "NUMBER";
				class values
				{
					class Tak {name = "$STR_BG_Tak"; 		value = 0; default = 1;};
					class Ni {name = "$STR_BG_Ni";   	    value = 1;};
				};
			};
			
			
			
			
			
			
			
			
		};
	};
//=======================================================================================
//									Основний
//=======================================================================================
	class BG_Modules_Main: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Основний";
		category = "BG";
		function = "BG_fn_InitMain";
		icon = "\BG_Modules\pic\main.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class Arguments
		{

		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_BG_Main_Desc";
			sync[]=
			{
				"BG_Modules_Prustrilka"
			};
			class BG_Modules_Prustrilka
			{
				optional=1;
			};
		};

	};
//=======================================================================================
//									Пристрілка озброєння
//=======================================================================================
	class BG_Modules_Prustrilka: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Пристрілка озброєння";
		category = "BG";
		function = "BG_fn_InitModulePrustrilka";
		icon = "\BG_Modules\pic\prustrilka.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class Arguments
		{

		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_BG_PRUSTRILKA_Desc";
			sync[]=
			{
				"BG_Modules_Prustrilka"
			};
			class BG_Modules_Prustrilka
			{
				optional=1;
			};
		};
	};
//=======================================================================================
//                                    Зона без мін
//=======================================================================================
	class BG_Modules_ZonaNotMines: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Зони без мін";
		category = "BG";
		function = "BG_fn_InitModuleZonaNotMines";
		icon = "\BG_Modules\pic\zonanotmines.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase
		{
			class MarkerZonaNotMines: Edit
			{
				property = "BG_Modules_ZonaNotMines_MarkerZonaNotMines";
				displayName  = "$STR_BG_Marker";
				tooltip = "$STR_BG_Marker_ZonaNotMines_Desc";
				typeName = "STRING";
			};
			class SideOwnerZNM: Combo
			{
				property = "BG_Modules_ZonaNotMines_SideOwnerZNM";
				displayName = "$STR_BG_DefaultSide";
				tooltip = "$STR_BG_DefaultSide_ZonaNotMines_Desc";
				typeName="NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class Arguments
		{
			class MarkerZonaNotMines
			{
				displayName="$STR_BG_Marker";
				typeName = "STRING";
				defaultValue = "";
			};
			class SideOwnerZNM
			{
				displayName="$STR_BG_DefaultSide";
				typeName="NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_BG_ZonaNotMines_Desc";
			sync[]=
			{
				"BG_Modules_ZonaNotMines"
			};
			class BG_Modules_ZonaNotMines
			{
				optional=1;
			};
		};
	};
//=======================================================================================
//									Артилерійський набір для мапи
//=======================================================================================
	class BG_Modules_ArtyleryMapTools: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Артилерійська лінійка";
		category = "BG";
		function = "BG_fn_InitModuleArtyleryMapTools";
		icon = "\BG_Modules\pic\artylerymaptools.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class Arguments
		{

		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_BG_ArtyleryMapTools_Desc";
			sync[]=	{ "BG_Modules_ArtyleryMapTools" };
			class BG_Modules_ArtyleryMapTools
			{
				optional=1;
			};
		};
	};
//=======================================================================================
//                                    Симулятор резидентури
//=======================================================================================
	class BG_Modules_Resedenture: Module_F
	{
		scope = 2;
		author = "IGL";
		displayName = "BG Модуль: Резидентура";
		category = "BG";
		function = "BG_fn_InitResedenture";
		icon = "\BG_Modules\pic\resedenture.paa";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase
		{
			class sidePoshuku: Combo
			{
				property = "BG_Modules_Resedenture_sidePoshuku";
				displayName = "$STR_BG_DefaultSide";
				tooltip = "$STR_BG_Resedenture_sidePoshuku_Desc";
				typeName="NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
			class RadiusSpracuvannya: Edit
			{
				property = "BG_Modules_Resedenture_RadiusSpracuvannya";
				displayName  = "$STR_BG_Resedenture_RadiusSpracuvannya";
				tooltip  = "$STR_BG_Resedenture_RadiusSpracuvannya_Desc";
				typeName 	 = "NUMBER";
				defaultValue = 500;
			};
			class UmovaResidenture: Edit
			{
				property = "BG_Modules_Resedenture_UmovaResidenture";
				displayName  = "$STR_BG_Condition";
				tooltip = "$STR_BG_Resedenture_UmovaResidenture_Desc";
				typeName = "BOOL";
				defaultValue = true;
			};
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class Arguments
		{
			class sidePoshuku
			{
				displayName="$STR_BG_DefaultSide";
				typeName="NUMBER";
				class values
				{
					class Empty	{name = "$STR_BG_ANYPLAYER"; 		value = 4; default = 1;};
					class East  {name = "$STR_BG_East"; 		    value = 0;};
					class West	{name = "$STR_BG_West"; 		    value = 1;};
					class Independent {name = "$STR_BG_Resistance"; value = 2;};
					class Civilian 	{name = "$STR_BG_Civilian"; 	value = 3;};
				};
			};
			class RadiusSpracuvannya
			{
				displayName  = "$STR_BG_Resedenture_RadiusSpracuvannya";
				typeName 	 = "NUMBER";
				defaultValue = 500;
			};
			class UmovaResidenture
			{
				displayName="$STR_BG_Condition";
				typeName = "STRING";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_BG_Resedenture_Desc";
			sync[]=
			{
				"BG_Modules_Resedenture"
			};
			class BG_Modules_Resedenture
			{
				optional=1;
			};
		};
	};
//=======================================================================================

};