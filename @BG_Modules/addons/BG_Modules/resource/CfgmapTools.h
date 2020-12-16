//================================================================================================================//
//
// Для виправлення багу створення частин діалогів на мапі необхідно перенести створення цих діалогів в sqf-файл
//
//================================================================================================================//
class RscBackground;
class ctrlStaticLine;
class RscText;
class RscMapControl;
class RscDisplayMainMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			drawShaded=0.25;
			shadedSea=0.30000001;
		};
	};
	class controls
	{
		class PLP_MapTools_Height_Background: RscBackground
		{
			idc=20001;
			x="(safeZoneX+safeZoneW*0.1)";
			y="(safeZoneY+safeZoneH*0.6)";
			w="(safeZoneW*0.8)";
			h="(safeZoneH*0.3)";
			colorBackground[]={0,0,0,0.80000001};
		};
		class PLP_MapTools_Height_InnerL: RscBackground
		{
			idc=20001;
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)";
			y="(	(safeZoneY+safeZoneH*0.6)+pixelH*15)";
			w="pixelW";
			h="(	(safeZoneH*0.3)-pixelH*30)";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_InnerR: PLP_MapTools_Height_InnerL
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+	(	(safeZoneW*0.8)-pixelW*30)";
		};
		class PLP_MapTools_Height_InnerT: PLP_MapTools_Height_InnerL
		{
			w="(	(safeZoneW*0.8)-pixelW*30)";
			h="pixelH";
		};
		class PLP_MapTools_Height_InnerB: PLP_MapTools_Height_InnerT
		{
			y="(	(safeZoneY+safeZoneH*0.6)+pixelH*15)+	(	(safeZoneH*0.3)-pixelH*30)";
		};
		class PLP_MapTools_Height_Ygraph1: PLP_MapTools_Height_InnerL
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*1)";
			colorBackground[]={1,1,1,0.25};
		};
		class PLP_MapTools_Height_Ygraph2: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*2)";
		};
		class PLP_MapTools_Height_Ygraph3: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*3)";
		};
		class PLP_MapTools_Height_Ygraph4: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*4)";
		};
		class PLP_MapTools_Height_Ygraph5: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*5)";
			colorBackground[]={1,1,1,0.5};
		};
		class PLP_MapTools_Height_Ygraph6: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*6)";
		};
		class PLP_MapTools_Height_Ygraph7: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*7)";
		};
		class PLP_MapTools_Height_Ygraph8: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*8)";
		};
		class PLP_MapTools_Height_Ygraph9: PLP_MapTools_Height_Ygraph1
		{
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15)+(	(	(safeZoneW*0.8)-pixelW*30)/10*9)";
		};
		class PLP_MapTools_Height_graph0_line: ctrlStaticLine
		{
			idc="30000 + 0";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(0-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph0_bg: RscBackground
		{
			idc="40000 + 0";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(0-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph1_line: ctrlStaticLine
		{
			idc="30000 + 1";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(1-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph1_bg: RscBackground
		{
			idc="40000 + 1";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(1-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph2_line: ctrlStaticLine
		{
			idc="30000 + 2";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(2-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph2_bg: RscBackground
		{
			idc="40000 + 2";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(2-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph3_line: ctrlStaticLine
		{
			idc="30000 + 3";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(3-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph3_bg: RscBackground
		{
			idc="40000 + 3";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(3-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph4_line: ctrlStaticLine
		{
			idc="30000 + 4";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(4-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph4_bg: RscBackground
		{
			idc="40000 + 4";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(4-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph5_line: ctrlStaticLine
		{
			idc="30000 + 5";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(5-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph5_bg: RscBackground
		{
			idc="40000 + 5";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(5-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph6_line: ctrlStaticLine
		{
			idc="30000 + 6";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(6-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph6_bg: RscBackground
		{
			idc="40000 + 6";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(6-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph7_line: ctrlStaticLine
		{
			idc="30000 + 7";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(7-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph7_bg: RscBackground
		{
			idc="40000 + 7";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(7-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph8_line: ctrlStaticLine
		{
			idc="30000 + 8";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(8-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph8_bg: RscBackground
		{
			idc="40000 + 8";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(8-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph9_line: ctrlStaticLine
		{
			idc="30000 + 9";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(9-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph9_bg: RscBackground
		{
			idc="40000 + 9";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(9-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph10_line: ctrlStaticLine
		{
			idc="30000 + 10";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(10-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph10_bg: RscBackground
		{
			idc="40000 + 10";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(10-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph11_line: ctrlStaticLine
		{
			idc="30000 + 11";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(11-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph11_bg: RscBackground
		{
			idc="40000 + 11";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(11-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph12_line: ctrlStaticLine
		{
			idc="30000 + 12";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(12-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph12_bg: RscBackground
		{
			idc="40000 + 12";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(12-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph13_line: ctrlStaticLine
		{
			idc="30000 + 13";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(13-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph13_bg: RscBackground
		{
			idc="40000 + 13";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(13-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph14_line: ctrlStaticLine
		{
			idc="30000 + 14";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(14-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph14_bg: RscBackground
		{
			idc="40000 + 14";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(14-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph15_line: ctrlStaticLine
		{
			idc="30000 + 15";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(15-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph15_bg: RscBackground
		{
			idc="40000 + 15";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(15-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph16_line: ctrlStaticLine
		{
			idc="30000 + 16";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(16-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph16_bg: RscBackground
		{
			idc="40000 + 16";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(16-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph17_line: ctrlStaticLine
		{
			idc="30000 + 17";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(17-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph17_bg: RscBackground
		{
			idc="40000 + 17";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(17-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph18_line: ctrlStaticLine
		{
			idc="30000 + 18";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(18-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph18_bg: RscBackground
		{
			idc="40000 + 18";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(18-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph19_line: ctrlStaticLine
		{
			idc="30000 + 19";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(19-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph19_bg: RscBackground
		{
			idc="40000 + 19";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(19-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph20_line: ctrlStaticLine
		{
			idc="30000 + 20";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(20-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph20_bg: RscBackground
		{
			idc="40000 + 20";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(20-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph21_line: ctrlStaticLine
		{
			idc="30000 + 21";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(21-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph21_bg: RscBackground
		{
			idc="40000 + 21";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(21-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph22_line: ctrlStaticLine
		{
			idc="30000 + 22";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(22-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph22_bg: RscBackground
		{
			idc="40000 + 22";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(22-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph23_line: ctrlStaticLine
		{
			idc="30000 + 23";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(23-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph23_bg: RscBackground
		{
			idc="40000 + 23";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(23-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph24_line: ctrlStaticLine
		{
			idc="30000 + 24";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(24-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph24_bg: RscBackground
		{
			idc="40000 + 24";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(24-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph25_line: ctrlStaticLine
		{
			idc="30000 + 25";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(25-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph25_bg: RscBackground
		{
			idc="40000 + 25";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(25-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph26_line: ctrlStaticLine
		{
			idc="30000 + 26";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(26-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph26_bg: RscBackground
		{
			idc="40000 + 26";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(26-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph27_line: ctrlStaticLine
		{
			idc="30000 + 27";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(27-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph27_bg: RscBackground
		{
			idc="40000 + 27";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(27-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph28_line: ctrlStaticLine
		{
			idc="30000 + 28";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(28-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph28_bg: RscBackground
		{
			idc="40000 + 28";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(28-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph29_line: ctrlStaticLine
		{
			idc="30000 + 29";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(29-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph29_bg: RscBackground
		{
			idc="40000 + 29";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(29-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph30_line: ctrlStaticLine
		{
			idc="30000 + 30";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(30-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph30_bg: RscBackground
		{
			idc="40000 + 30";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(30-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph31_line: ctrlStaticLine
		{
			idc="30000 + 31";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(31-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph31_bg: RscBackground
		{
			idc="40000 + 31";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(31-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph32_line: ctrlStaticLine
		{
			idc="30000 + 32";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(32-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph32_bg: RscBackground
		{
			idc="40000 + 32";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(32-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph33_line: ctrlStaticLine
		{
			idc="30000 + 33";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(33-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph33_bg: RscBackground
		{
			idc="40000 + 33";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(33-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph34_line: ctrlStaticLine
		{
			idc="30000 + 34";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(34-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph34_bg: RscBackground
		{
			idc="40000 + 34";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(34-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph35_line: ctrlStaticLine
		{
			idc="30000 + 35";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(35-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph35_bg: RscBackground
		{
			idc="40000 + 35";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(35-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph36_line: ctrlStaticLine
		{
			idc="30000 + 36";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(36-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph36_bg: RscBackground
		{
			idc="40000 + 36";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(36-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph37_line: ctrlStaticLine
		{
			idc="30000 + 37";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(37-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph37_bg: RscBackground
		{
			idc="40000 + 37";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(37-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph38_line: ctrlStaticLine
		{
			idc="30000 + 38";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(38-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph38_bg: RscBackground
		{
			idc="40000 + 38";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(38-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph39_line: ctrlStaticLine
		{
			idc="30000 + 39";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(39-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph39_bg: RscBackground
		{
			idc="40000 + 39";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(39-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph40_line: ctrlStaticLine
		{
			idc="30000 + 40";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(40-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph40_bg: RscBackground
		{
			idc="40000 + 40";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(40-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph41_line: ctrlStaticLine
		{
			idc="30000 + 41";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(41-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph41_bg: RscBackground
		{
			idc="40000 + 41";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(41-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph42_line: ctrlStaticLine
		{
			idc="30000 + 42";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(42-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph42_bg: RscBackground
		{
			idc="40000 + 42";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(42-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph43_line: ctrlStaticLine
		{
			idc="30000 + 43";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(43-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph43_bg: RscBackground
		{
			idc="40000 + 43";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(43-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph44_line: ctrlStaticLine
		{
			idc="30000 + 44";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(44-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph44_bg: RscBackground
		{
			idc="40000 + 44";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(44-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph45_line: ctrlStaticLine
		{
			idc="30000 + 45";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(45-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph45_bg: RscBackground
		{
			idc="40000 + 45";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(45-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph46_line: ctrlStaticLine
		{
			idc="30000 + 46";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(46-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph46_bg: RscBackground
		{
			idc="40000 + 46";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(46-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph47_line: ctrlStaticLine
		{
			idc="30000 + 47";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(47-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph47_bg: RscBackground
		{
			idc="40000 + 47";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(47-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph48_line: ctrlStaticLine
		{
			idc="30000 + 48";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(48-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph48_bg: RscBackground
		{
			idc="40000 + 48";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(48-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph49_line: ctrlStaticLine
		{
			idc="30000 + 49";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(49-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph49_bg: RscBackground
		{
			idc="40000 + 49";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(49-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph50_line: ctrlStaticLine
		{
			idc="30000 + 50";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(50-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph50_bg: RscBackground
		{
			idc="40000 + 50";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(50-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph51_line: ctrlStaticLine
		{
			idc="30000 + 51";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(51-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph51_bg: RscBackground
		{
			idc="40000 + 51";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(51-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph52_line: ctrlStaticLine
		{
			idc="30000 + 52";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(52-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph52_bg: RscBackground
		{
			idc="40000 + 52";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(52-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph53_line: ctrlStaticLine
		{
			idc="30000 + 53";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(53-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph53_bg: RscBackground
		{
			idc="40000 + 53";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(53-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph54_line: ctrlStaticLine
		{
			idc="30000 + 54";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(54-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph54_bg: RscBackground
		{
			idc="40000 + 54";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(54-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph55_line: ctrlStaticLine
		{
			idc="30000 + 55";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(55-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph55_bg: RscBackground
		{
			idc="40000 + 55";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(55-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph56_line: ctrlStaticLine
		{
			idc="30000 + 56";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(56-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph56_bg: RscBackground
		{
			idc="40000 + 56";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(56-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph57_line: ctrlStaticLine
		{
			idc="30000 + 57";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(57-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph57_bg: RscBackground
		{
			idc="40000 + 57";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(57-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph58_line: ctrlStaticLine
		{
			idc="30000 + 58";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(58-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph58_bg: RscBackground
		{
			idc="40000 + 58";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(58-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph59_line: ctrlStaticLine
		{
			idc="30000 + 59";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(59-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph59_bg: RscBackground
		{
			idc="40000 + 59";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(59-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph60_line: ctrlStaticLine
		{
			idc="30000 + 60";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(60-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph60_bg: RscBackground
		{
			idc="40000 + 60";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(60-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph61_line: ctrlStaticLine
		{
			idc="30000 + 61";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(61-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph61_bg: RscBackground
		{
			idc="40000 + 61";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(61-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph62_line: ctrlStaticLine
		{
			idc="30000 + 62";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(62-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph62_bg: RscBackground
		{
			idc="40000 + 62";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(62-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph63_line: ctrlStaticLine
		{
			idc="30000 + 63";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(63-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph63_bg: RscBackground
		{
			idc="40000 + 63";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(63-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph64_line: ctrlStaticLine
		{
			idc="30000 + 64";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(64-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph64_bg: RscBackground
		{
			idc="40000 + 64";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(64-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph65_line: ctrlStaticLine
		{
			idc="30000 + 65";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(65-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph65_bg: RscBackground
		{
			idc="40000 + 65";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(65-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph66_line: ctrlStaticLine
		{
			idc="30000 + 66";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(66-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph66_bg: RscBackground
		{
			idc="40000 + 66";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(66-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph67_line: ctrlStaticLine
		{
			idc="30000 + 67";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(67-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph67_bg: RscBackground
		{
			idc="40000 + 67";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(67-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph68_line: ctrlStaticLine
		{
			idc="30000 + 68";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(68-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph68_bg: RscBackground
		{
			idc="40000 + 68";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(68-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph69_line: ctrlStaticLine
		{
			idc="30000 + 69";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(69-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph69_bg: RscBackground
		{
			idc="40000 + 69";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(69-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph70_line: ctrlStaticLine
		{
			idc="30000 + 70";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(70-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph70_bg: RscBackground
		{
			idc="40000 + 70";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(70-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph71_line: ctrlStaticLine
		{
			idc="30000 + 71";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(71-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph71_bg: RscBackground
		{
			idc="40000 + 71";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(71-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph72_line: ctrlStaticLine
		{
			idc="30000 + 72";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(72-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph72_bg: RscBackground
		{
			idc="40000 + 72";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(72-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph73_line: ctrlStaticLine
		{
			idc="30000 + 73";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(73-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph73_bg: RscBackground
		{
			idc="40000 + 73";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(73-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph74_line: ctrlStaticLine
		{
			idc="30000 + 74";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(74-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph74_bg: RscBackground
		{
			idc="40000 + 74";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(74-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph75_line: ctrlStaticLine
		{
			idc="30000 + 75";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(75-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph75_bg: RscBackground
		{
			idc="40000 + 75";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(75-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph76_line: ctrlStaticLine
		{
			idc="30000 + 76";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(76-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph76_bg: RscBackground
		{
			idc="40000 + 76";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(76-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph77_line: ctrlStaticLine
		{
			idc="30000 + 77";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(77-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph77_bg: RscBackground
		{
			idc="40000 + 77";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(77-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph78_line: ctrlStaticLine
		{
			idc="30000 + 78";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(78-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph78_bg: RscBackground
		{
			idc="40000 + 78";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(78-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph79_line: ctrlStaticLine
		{
			idc="30000 + 79";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(79-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph79_bg: RscBackground
		{
			idc="40000 + 79";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(79-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph80_line: ctrlStaticLine
		{
			idc="30000 + 80";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(80-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph80_bg: RscBackground
		{
			idc="40000 + 80";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(80-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph81_line: ctrlStaticLine
		{
			idc="30000 + 81";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(81-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph81_bg: RscBackground
		{
			idc="40000 + 81";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(81-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph82_line: ctrlStaticLine
		{
			idc="30000 + 82";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(82-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph82_bg: RscBackground
		{
			idc="40000 + 82";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(82-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph83_line: ctrlStaticLine
		{
			idc="30000 + 83";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(83-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph83_bg: RscBackground
		{
			idc="40000 + 83";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(83-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph84_line: ctrlStaticLine
		{
			idc="30000 + 84";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(84-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph84_bg: RscBackground
		{
			idc="40000 + 84";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(84-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph85_line: ctrlStaticLine
		{
			idc="30000 + 85";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(85-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph85_bg: RscBackground
		{
			idc="40000 + 85";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(85-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph86_line: ctrlStaticLine
		{
			idc="30000 + 86";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(86-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph86_bg: RscBackground
		{
			idc="40000 + 86";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(86-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph87_line: ctrlStaticLine
		{
			idc="30000 + 87";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(87-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph87_bg: RscBackground
		{
			idc="40000 + 87";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(87-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph88_line: ctrlStaticLine
		{
			idc="30000 + 88";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(88-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph88_bg: RscBackground
		{
			idc="40000 + 88";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(88-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph89_line: ctrlStaticLine
		{
			idc="30000 + 89";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(89-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph89_bg: RscBackground
		{
			idc="40000 + 89";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(89-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph90_line: ctrlStaticLine
		{
			idc="30000 + 90";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(90-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph90_bg: RscBackground
		{
			idc="40000 + 90";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(90-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph91_line: ctrlStaticLine
		{
			idc="30000 + 91";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(91-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph91_bg: RscBackground
		{
			idc="40000 + 91";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(91-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph92_line: ctrlStaticLine
		{
			idc="30000 + 92";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(92-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph92_bg: RscBackground
		{
			idc="40000 + 92";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(92-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph93_line: ctrlStaticLine
		{
			idc="30000 + 93";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(93-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph93_bg: RscBackground
		{
			idc="40000 + 93";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(93-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph94_line: ctrlStaticLine
		{
			idc="30000 + 94";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(94-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph94_bg: RscBackground
		{
			idc="40000 + 94";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(94-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph95_line: ctrlStaticLine
		{
			idc="30000 + 95";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(95-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph95_bg: RscBackground
		{
			idc="40000 + 95";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(95-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph96_line: ctrlStaticLine
		{
			idc="30000 + 96";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(96-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph96_bg: RscBackground
		{
			idc="40000 + 96";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(96-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph97_line: ctrlStaticLine
		{
			idc="30000 + 97";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(97-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph97_bg: RscBackground
		{
			idc="40000 + 97";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(97-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph98_line: ctrlStaticLine
		{
			idc="30000 + 98";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(98-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph98_bg: RscBackground
		{
			idc="40000 + 98";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(98-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph99_line: ctrlStaticLine
		{
			idc="30000 + 99";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(99-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph99_bg: RscBackground
		{
			idc="40000 + 99";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(99-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph100_line: ctrlStaticLine
		{
			idc="30000 + 100";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(100-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorText[]={1,1,1,1};
		};
		class PLP_MapTools_Height_graph100_bg: RscBackground
		{
			idc="40000 + 100";
			x="(	(safeZoneX+safeZoneW*0.1)+pixelW*15) + 	(	(safeZoneW*0.8)-pixelW*30)/100*(100-1)";
			w="(	(safeZoneW*0.8)-pixelW*30)/100";
			colorBackground[]={1,1,1,1};
		};
		class PLP_MapTools_Height_WaterLine: PLP_MapTools_Height_InnerB
		{
			idc=20002;
			colorBackground[]={0,1,1,1};
		};
		class PLP_MapTools_Height_RedBar: PLP_MapTools_Height_InnerL
		{
			idc=10001;
			colorBackground[]={1,0,0,1};
		};
		class PLP_MapTools_Height_RedText: RscText
		{
			idc=10002;
			shadow=2;
			font="PuristaMedium";
			sizeEx=0.039999999;
			colorText[]={1,0,0,1};
		};

	};
};
class PLP_MapTools_MainDisplay
{
	idd=-1;
	movingEnable=0;
	enableSimulation=1;
	class controlsBackground
	{
		class MouseArea
		{
			idc=999;
			type=0;
			style=16;
			sizeEx=0;
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.2};
			font="RobotoCondensed";
			linespacing=1;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			text="";
		};
	};
};
