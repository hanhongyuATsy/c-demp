#ifndef __ARA_COM_VSOMEIP__LIGHTSHOWLEDBRIGTNESS_H__
#define __ARA_COM_VSOMEIP__LIGHTSHOWLEDBRIGTNESS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LightShowLEDBrigtness {
public:
	std::uint8_t LED1;
	std::uint8_t LED2;
	std::uint8_t LED3;
	std::uint8_t LED4;
	std::uint8_t LED5;
	std::uint8_t LED6;
	std::uint8_t LED7;
	std::uint8_t LED8;
	std::uint8_t LED9;
	std::uint8_t LED10;
	std::uint8_t LED11;
	std::uint8_t LED12;
	std::uint8_t LED13;
	std::uint8_t LED14;
	std::uint8_t LED15;
	std::uint8_t LED16;
	std::uint8_t LED17;
	std::uint8_t LED18;
	std::uint8_t LED19;
	std::uint8_t LED20;
	std::uint8_t LED21;
	std::uint8_t LED22;
	std::uint8_t LED23;
	std::uint8_t LED24;
	std::uint8_t LED25;
	std::uint8_t LED26;
	std::uint8_t LED27;
	std::uint8_t LED28;
	std::uint8_t LED29;
	std::uint8_t LED30;
	std::uint8_t LED31;
	std::uint8_t LED32;
	std::uint8_t LED33;
	std::uint8_t LED34;
	std::uint8_t LED35;
	std::uint8_t LED36;
	std::uint8_t LED37;
	std::uint8_t LED38;
	std::uint8_t LED39;
	std::uint8_t LED40;
	std::uint8_t LED41;
	std::uint8_t LED42;
	std::uint8_t LED43;
	std::uint8_t LED44;
	std::uint8_t LED45;
	std::uint8_t LED46;
	std::uint8_t LED47;
	std::uint8_t LED48;
	std::uint8_t LED49;
	std::uint8_t LED50;
	std::uint8_t LED51;
	std::uint8_t LED52;
	std::uint8_t LED53;
	std::uint8_t LED54;
	std::uint8_t LED55;
	std::uint8_t LED56;
	std::uint8_t LED57;
	std::uint8_t LED58;
	std::uint8_t LED59;
	std::uint8_t LED60;
	std::uint8_t LED61;
	std::uint8_t LED62;
	std::uint8_t LED63;
	std::uint8_t LED64;
	std::uint8_t LED65;
	std::uint8_t LED66;
	std::uint8_t LED67;
	std::uint8_t LED68;
	std::uint8_t LED69;
	std::uint8_t LED70;
	std::uint8_t LED71;
	std::uint8_t LED72;
	std::uint8_t LED73;
	std::uint8_t LED74;
	std::uint8_t LED75;
	std::uint8_t LED76;
	std::uint8_t LED77;
	std::uint8_t LED78;
	std::uint8_t LED79;
	std::uint8_t LED80;
	std::uint8_t LED81;
	std::uint8_t LED82;
	std::uint8_t LED83;
	std::uint8_t LED84;
	std::uint8_t LED85;
	std::uint8_t LED86;
	std::uint8_t LED87;
	std::uint8_t LED88;
	std::uint8_t LED89;
	std::uint8_t LED90;
	std::uint8_t LED91;
	std::uint8_t LED92;
	std::uint8_t LED93;
	std::uint8_t LED94;
	std::uint8_t LED95;
	std::uint8_t LED96;
	std::uint8_t LED97;
	std::uint8_t LED98;
	std::uint8_t LED99;
	std::uint8_t LED100;
	std::uint8_t LED101;
	std::uint8_t LED102;
	std::uint8_t LED103;
	std::uint8_t LED104;
	std::uint8_t LED105;
	std::uint8_t LED106;
	std::uint8_t LED107;
	std::uint8_t LED108;
	std::uint8_t LED109;
	std::uint8_t LED110;
	std::uint8_t LED111;
	std::uint8_t LED112;
	std::uint8_t LED113;
	std::uint8_t LED114;
	std::uint8_t LED115;
	std::uint8_t LED116;
	std::uint8_t LED117;
	std::uint8_t LED118;
	std::uint8_t LED119;
	std::uint8_t LED120;
	std::uint8_t LED121;
	std::uint8_t LED122;
	std::uint8_t LED123;
	std::uint8_t LED124;
	std::uint8_t LED125;
	std::uint8_t LED126;
	std::uint8_t LED127;
	std::uint8_t LED128;
/*
	LightShowLEDBrigtness() {}
	~LightShowLEDBrigtness() {}
	LightShowLEDBrigtness(const std::uint8_t _LED1,const std::uint8_t _LED2,const std::uint8_t _LED3,const std::uint8_t _LED4,const std::uint8_t _LED5,const std::uint8_t _LED6,const std::uint8_t _LED7,const std::uint8_t _LED8,const std::uint8_t _LED9,const std::uint8_t _LED10,const std::uint8_t _LED11,const std::uint8_t _LED12,const std::uint8_t _LED13,const std::uint8_t _LED14,const std::uint8_t _LED15,const std::uint8_t _LED16,const std::uint8_t _LED17,const std::uint8_t _LED18,const std::uint8_t _LED19,const std::uint8_t _LED20,const std::uint8_t _LED21,const std::uint8_t _LED22,const std::uint8_t _LED23,const std::uint8_t _LED24,const std::uint8_t _LED25,const std::uint8_t _LED26,const std::uint8_t _LED27,const std::uint8_t _LED28,const std::uint8_t _LED29,const std::uint8_t _LED30,const std::uint8_t _LED31,const std::uint8_t _LED32,const std::uint8_t _LED33,const std::uint8_t _LED34,const std::uint8_t _LED35,const std::uint8_t _LED36,const std::uint8_t _LED37,const std::uint8_t _LED38,const std::uint8_t _LED39,const std::uint8_t _LED40,const std::uint8_t _LED41,const std::uint8_t _LED42,const std::uint8_t _LED43,const std::uint8_t _LED44,const std::uint8_t _LED45,const std::uint8_t _LED46,const std::uint8_t _LED47,const std::uint8_t _LED48,const std::uint8_t _LED49,const std::uint8_t _LED50,const std::uint8_t _LED51,const std::uint8_t _LED52,const std::uint8_t _LED53,const std::uint8_t _LED54,const std::uint8_t _LED55,const std::uint8_t _LED56,const std::uint8_t _LED57,const std::uint8_t _LED58,const std::uint8_t _LED59,const std::uint8_t _LED60,const std::uint8_t _LED61,const std::uint8_t _LED62,const std::uint8_t _LED63,const std::uint8_t _LED64,const std::uint8_t _LED65,const std::uint8_t _LED66,const std::uint8_t _LED67,const std::uint8_t _LED68,const std::uint8_t _LED69,const std::uint8_t _LED70,const std::uint8_t _LED71,const std::uint8_t _LED72,const std::uint8_t _LED73,const std::uint8_t _LED74,const std::uint8_t _LED75,const std::uint8_t _LED76,const std::uint8_t _LED77,const std::uint8_t _LED78,const std::uint8_t _LED79,const std::uint8_t _LED80,const std::uint8_t _LED81,const std::uint8_t _LED82,const std::uint8_t _LED83,const std::uint8_t _LED84,const std::uint8_t _LED85,const std::uint8_t _LED86,const std::uint8_t _LED87,const std::uint8_t _LED88,const std::uint8_t _LED89,const std::uint8_t _LED90,const std::uint8_t _LED91,const std::uint8_t _LED92,const std::uint8_t _LED93,const std::uint8_t _LED94,const std::uint8_t _LED95,const std::uint8_t _LED96,const std::uint8_t _LED97,const std::uint8_t _LED98,const std::uint8_t _LED99,const std::uint8_t _LED100,const std::uint8_t _LED101,const std::uint8_t _LED102,const std::uint8_t _LED103,const std::uint8_t _LED104,const std::uint8_t _LED105,const std::uint8_t _LED106,const std::uint8_t _LED107,const std::uint8_t _LED108,const std::uint8_t _LED109,const std::uint8_t _LED110,const std::uint8_t _LED111,const std::uint8_t _LED112,const std::uint8_t _LED113,const std::uint8_t _LED114,const std::uint8_t _LED115,const std::uint8_t _LED116,const std::uint8_t _LED117,const std::uint8_t _LED118,const std::uint8_t _LED119,const std::uint8_t _LED120,const std::uint8_t _LED121,const std::uint8_t _LED122,const std::uint8_t _LED123,const std::uint8_t _LED124,const std::uint8_t _LED125,const std::uint8_t _LED126,const std::uint8_t _LED127,const std::uint8_t _LED128):LED1(_LED1),LED2(_LED2),LED3(_LED3),LED4(_LED4),LED5(_LED5),LED6(_LED6),LED7(_LED7),LED8(_LED8),LED9(_LED9),LED10(_LED10),LED11(_LED11),LED12(_LED12),LED13(_LED13),LED14(_LED14),LED15(_LED15),LED16(_LED16),LED17(_LED17),LED18(_LED18),LED19(_LED19),LED20(_LED20),LED21(_LED21),LED22(_LED22),LED23(_LED23),LED24(_LED24),LED25(_LED25),LED26(_LED26),LED27(_LED27),LED28(_LED28),LED29(_LED29),LED30(_LED30),LED31(_LED31),LED32(_LED32),LED33(_LED33),LED34(_LED34),LED35(_LED35),LED36(_LED36),LED37(_LED37),LED38(_LED38),LED39(_LED39),LED40(_LED40),LED41(_LED41),LED42(_LED42),LED43(_LED43),LED44(_LED44),LED45(_LED45),LED46(_LED46),LED47(_LED47),LED48(_LED48),LED49(_LED49),LED50(_LED50),LED51(_LED51),LED52(_LED52),LED53(_LED53),LED54(_LED54),LED55(_LED55),LED56(_LED56),LED57(_LED57),LED58(_LED58),LED59(_LED59),LED60(_LED60),LED61(_LED61),LED62(_LED62),LED63(_LED63),LED64(_LED64),LED65(_LED65),LED66(_LED66),LED67(_LED67),LED68(_LED68),LED69(_LED69),LED70(_LED70),LED71(_LED71),LED72(_LED72),LED73(_LED73),LED74(_LED74),LED75(_LED75),LED76(_LED76),LED77(_LED77),LED78(_LED78),LED79(_LED79),LED80(_LED80),LED81(_LED81),LED82(_LED82),LED83(_LED83),LED84(_LED84),LED85(_LED85),LED86(_LED86),LED87(_LED87),LED88(_LED88),LED89(_LED89),LED90(_LED90),LED91(_LED91),LED92(_LED92),LED93(_LED93),LED94(_LED94),LED95(_LED95),LED96(_LED96),LED97(_LED97),LED98(_LED98),LED99(_LED99),LED100(_LED100),LED101(_LED101),LED102(_LED102),LED103(_LED103),LED104(_LED104),LED105(_LED105),LED106(_LED106),LED107(_LED107),LED108(_LED108),LED109(_LED109),LED110(_LED110),LED111(_LED111),LED112(_LED112),LED113(_LED113),LED114(_LED114),LED115(_LED115),LED116(_LED116),LED117(_LED117),LED118(_LED118),LED119(_LED119),LED120(_LED120),LED121(_LED121),LED122(_LED122),LED123(_LED123),LED124(_LED124),LED125(_LED125),LED126(_LED126),LED127(_LED127),LED128(_LED128) {}
	LightShowLEDBrigtness(const LightShowLEDBrigtness &_x){
		LED1 = _x.LED1;
		LED2 = _x.LED2;
		LED3 = _x.LED3;
		LED4 = _x.LED4;
		LED5 = _x.LED5;
		LED6 = _x.LED6;
		LED7 = _x.LED7;
		LED8 = _x.LED8;
		LED9 = _x.LED9;
		LED10 = _x.LED10;
		LED11 = _x.LED11;
		LED12 = _x.LED12;
		LED13 = _x.LED13;
		LED14 = _x.LED14;
		LED15 = _x.LED15;
		LED16 = _x.LED16;
		LED17 = _x.LED17;
		LED18 = _x.LED18;
		LED19 = _x.LED19;
		LED20 = _x.LED20;
		LED21 = _x.LED21;
		LED22 = _x.LED22;
		LED23 = _x.LED23;
		LED24 = _x.LED24;
		LED25 = _x.LED25;
		LED26 = _x.LED26;
		LED27 = _x.LED27;
		LED28 = _x.LED28;
		LED29 = _x.LED29;
		LED30 = _x.LED30;
		LED31 = _x.LED31;
		LED32 = _x.LED32;
		LED33 = _x.LED33;
		LED34 = _x.LED34;
		LED35 = _x.LED35;
		LED36 = _x.LED36;
		LED37 = _x.LED37;
		LED38 = _x.LED38;
		LED39 = _x.LED39;
		LED40 = _x.LED40;
		LED41 = _x.LED41;
		LED42 = _x.LED42;
		LED43 = _x.LED43;
		LED44 = _x.LED44;
		LED45 = _x.LED45;
		LED46 = _x.LED46;
		LED47 = _x.LED47;
		LED48 = _x.LED48;
		LED49 = _x.LED49;
		LED50 = _x.LED50;
		LED51 = _x.LED51;
		LED52 = _x.LED52;
		LED53 = _x.LED53;
		LED54 = _x.LED54;
		LED55 = _x.LED55;
		LED56 = _x.LED56;
		LED57 = _x.LED57;
		LED58 = _x.LED58;
		LED59 = _x.LED59;
		LED60 = _x.LED60;
		LED61 = _x.LED61;
		LED62 = _x.LED62;
		LED63 = _x.LED63;
		LED64 = _x.LED64;
		LED65 = _x.LED65;
		LED66 = _x.LED66;
		LED67 = _x.LED67;
		LED68 = _x.LED68;
		LED69 = _x.LED69;
		LED70 = _x.LED70;
		LED71 = _x.LED71;
		LED72 = _x.LED72;
		LED73 = _x.LED73;
		LED74 = _x.LED74;
		LED75 = _x.LED75;
		LED76 = _x.LED76;
		LED77 = _x.LED77;
		LED78 = _x.LED78;
		LED79 = _x.LED79;
		LED80 = _x.LED80;
		LED81 = _x.LED81;
		LED82 = _x.LED82;
		LED83 = _x.LED83;
		LED84 = _x.LED84;
		LED85 = _x.LED85;
		LED86 = _x.LED86;
		LED87 = _x.LED87;
		LED88 = _x.LED88;
		LED89 = _x.LED89;
		LED90 = _x.LED90;
		LED91 = _x.LED91;
		LED92 = _x.LED92;
		LED93 = _x.LED93;
		LED94 = _x.LED94;
		LED95 = _x.LED95;
		LED96 = _x.LED96;
		LED97 = _x.LED97;
		LED98 = _x.LED98;
		LED99 = _x.LED99;
		LED100 = _x.LED100;
		LED101 = _x.LED101;
		LED102 = _x.LED102;
		LED103 = _x.LED103;
		LED104 = _x.LED104;
		LED105 = _x.LED105;
		LED106 = _x.LED106;
		LED107 = _x.LED107;
		LED108 = _x.LED108;
		LED109 = _x.LED109;
		LED110 = _x.LED110;
		LED111 = _x.LED111;
		LED112 = _x.LED112;
		LED113 = _x.LED113;
		LED114 = _x.LED114;
		LED115 = _x.LED115;
		LED116 = _x.LED116;
		LED117 = _x.LED117;
		LED118 = _x.LED118;
		LED119 = _x.LED119;
		LED120 = _x.LED120;
		LED121 = _x.LED121;
		LED122 = _x.LED122;
		LED123 = _x.LED123;
		LED124 = _x.LED124;
		LED125 = _x.LED125;
		LED126 = _x.LED126;
		LED127 = _x.LED127;
		LED128 = _x.LED128;
	}
	LightShowLEDBrigtness(LightShowLEDBrigtness &&_x){
		LED1 = std::move(_x.LED1);
		LED2 = std::move(_x.LED2);
		LED3 = std::move(_x.LED3);
		LED4 = std::move(_x.LED4);
		LED5 = std::move(_x.LED5);
		LED6 = std::move(_x.LED6);
		LED7 = std::move(_x.LED7);
		LED8 = std::move(_x.LED8);
		LED9 = std::move(_x.LED9);
		LED10 = std::move(_x.LED10);
		LED11 = std::move(_x.LED11);
		LED12 = std::move(_x.LED12);
		LED13 = std::move(_x.LED13);
		LED14 = std::move(_x.LED14);
		LED15 = std::move(_x.LED15);
		LED16 = std::move(_x.LED16);
		LED17 = std::move(_x.LED17);
		LED18 = std::move(_x.LED18);
		LED19 = std::move(_x.LED19);
		LED20 = std::move(_x.LED20);
		LED21 = std::move(_x.LED21);
		LED22 = std::move(_x.LED22);
		LED23 = std::move(_x.LED23);
		LED24 = std::move(_x.LED24);
		LED25 = std::move(_x.LED25);
		LED26 = std::move(_x.LED26);
		LED27 = std::move(_x.LED27);
		LED28 = std::move(_x.LED28);
		LED29 = std::move(_x.LED29);
		LED30 = std::move(_x.LED30);
		LED31 = std::move(_x.LED31);
		LED32 = std::move(_x.LED32);
		LED33 = std::move(_x.LED33);
		LED34 = std::move(_x.LED34);
		LED35 = std::move(_x.LED35);
		LED36 = std::move(_x.LED36);
		LED37 = std::move(_x.LED37);
		LED38 = std::move(_x.LED38);
		LED39 = std::move(_x.LED39);
		LED40 = std::move(_x.LED40);
		LED41 = std::move(_x.LED41);
		LED42 = std::move(_x.LED42);
		LED43 = std::move(_x.LED43);
		LED44 = std::move(_x.LED44);
		LED45 = std::move(_x.LED45);
		LED46 = std::move(_x.LED46);
		LED47 = std::move(_x.LED47);
		LED48 = std::move(_x.LED48);
		LED49 = std::move(_x.LED49);
		LED50 = std::move(_x.LED50);
		LED51 = std::move(_x.LED51);
		LED52 = std::move(_x.LED52);
		LED53 = std::move(_x.LED53);
		LED54 = std::move(_x.LED54);
		LED55 = std::move(_x.LED55);
		LED56 = std::move(_x.LED56);
		LED57 = std::move(_x.LED57);
		LED58 = std::move(_x.LED58);
		LED59 = std::move(_x.LED59);
		LED60 = std::move(_x.LED60);
		LED61 = std::move(_x.LED61);
		LED62 = std::move(_x.LED62);
		LED63 = std::move(_x.LED63);
		LED64 = std::move(_x.LED64);
		LED65 = std::move(_x.LED65);
		LED66 = std::move(_x.LED66);
		LED67 = std::move(_x.LED67);
		LED68 = std::move(_x.LED68);
		LED69 = std::move(_x.LED69);
		LED70 = std::move(_x.LED70);
		LED71 = std::move(_x.LED71);
		LED72 = std::move(_x.LED72);
		LED73 = std::move(_x.LED73);
		LED74 = std::move(_x.LED74);
		LED75 = std::move(_x.LED75);
		LED76 = std::move(_x.LED76);
		LED77 = std::move(_x.LED77);
		LED78 = std::move(_x.LED78);
		LED79 = std::move(_x.LED79);
		LED80 = std::move(_x.LED80);
		LED81 = std::move(_x.LED81);
		LED82 = std::move(_x.LED82);
		LED83 = std::move(_x.LED83);
		LED84 = std::move(_x.LED84);
		LED85 = std::move(_x.LED85);
		LED86 = std::move(_x.LED86);
		LED87 = std::move(_x.LED87);
		LED88 = std::move(_x.LED88);
		LED89 = std::move(_x.LED89);
		LED90 = std::move(_x.LED90);
		LED91 = std::move(_x.LED91);
		LED92 = std::move(_x.LED92);
		LED93 = std::move(_x.LED93);
		LED94 = std::move(_x.LED94);
		LED95 = std::move(_x.LED95);
		LED96 = std::move(_x.LED96);
		LED97 = std::move(_x.LED97);
		LED98 = std::move(_x.LED98);
		LED99 = std::move(_x.LED99);
		LED100 = std::move(_x.LED100);
		LED101 = std::move(_x.LED101);
		LED102 = std::move(_x.LED102);
		LED103 = std::move(_x.LED103);
		LED104 = std::move(_x.LED104);
		LED105 = std::move(_x.LED105);
		LED106 = std::move(_x.LED106);
		LED107 = std::move(_x.LED107);
		LED108 = std::move(_x.LED108);
		LED109 = std::move(_x.LED109);
		LED110 = std::move(_x.LED110);
		LED111 = std::move(_x.LED111);
		LED112 = std::move(_x.LED112);
		LED113 = std::move(_x.LED113);
		LED114 = std::move(_x.LED114);
		LED115 = std::move(_x.LED115);
		LED116 = std::move(_x.LED116);
		LED117 = std::move(_x.LED117);
		LED118 = std::move(_x.LED118);
		LED119 = std::move(_x.LED119);
		LED120 = std::move(_x.LED120);
		LED121 = std::move(_x.LED121);
		LED122 = std::move(_x.LED122);
		LED123 = std::move(_x.LED123);
		LED124 = std::move(_x.LED124);
		LED125 = std::move(_x.LED125);
		LED126 = std::move(_x.LED126);
		LED127 = std::move(_x.LED127);
		LED128 = std::move(_x.LED128);
	}
	LightShowLEDBrigtness& operator=(const LightShowLEDBrigtness &_x){
		LED1 = _x.LED1;
		LED2 = _x.LED2;
		LED3 = _x.LED3;
		LED4 = _x.LED4;
		LED5 = _x.LED5;
		LED6 = _x.LED6;
		LED7 = _x.LED7;
		LED8 = _x.LED8;
		LED9 = _x.LED9;
		LED10 = _x.LED10;
		LED11 = _x.LED11;
		LED12 = _x.LED12;
		LED13 = _x.LED13;
		LED14 = _x.LED14;
		LED15 = _x.LED15;
		LED16 = _x.LED16;
		LED17 = _x.LED17;
		LED18 = _x.LED18;
		LED19 = _x.LED19;
		LED20 = _x.LED20;
		LED21 = _x.LED21;
		LED22 = _x.LED22;
		LED23 = _x.LED23;
		LED24 = _x.LED24;
		LED25 = _x.LED25;
		LED26 = _x.LED26;
		LED27 = _x.LED27;
		LED28 = _x.LED28;
		LED29 = _x.LED29;
		LED30 = _x.LED30;
		LED31 = _x.LED31;
		LED32 = _x.LED32;
		LED33 = _x.LED33;
		LED34 = _x.LED34;
		LED35 = _x.LED35;
		LED36 = _x.LED36;
		LED37 = _x.LED37;
		LED38 = _x.LED38;
		LED39 = _x.LED39;
		LED40 = _x.LED40;
		LED41 = _x.LED41;
		LED42 = _x.LED42;
		LED43 = _x.LED43;
		LED44 = _x.LED44;
		LED45 = _x.LED45;
		LED46 = _x.LED46;
		LED47 = _x.LED47;
		LED48 = _x.LED48;
		LED49 = _x.LED49;
		LED50 = _x.LED50;
		LED51 = _x.LED51;
		LED52 = _x.LED52;
		LED53 = _x.LED53;
		LED54 = _x.LED54;
		LED55 = _x.LED55;
		LED56 = _x.LED56;
		LED57 = _x.LED57;
		LED58 = _x.LED58;
		LED59 = _x.LED59;
		LED60 = _x.LED60;
		LED61 = _x.LED61;
		LED62 = _x.LED62;
		LED63 = _x.LED63;
		LED64 = _x.LED64;
		LED65 = _x.LED65;
		LED66 = _x.LED66;
		LED67 = _x.LED67;
		LED68 = _x.LED68;
		LED69 = _x.LED69;
		LED70 = _x.LED70;
		LED71 = _x.LED71;
		LED72 = _x.LED72;
		LED73 = _x.LED73;
		LED74 = _x.LED74;
		LED75 = _x.LED75;
		LED76 = _x.LED76;
		LED77 = _x.LED77;
		LED78 = _x.LED78;
		LED79 = _x.LED79;
		LED80 = _x.LED80;
		LED81 = _x.LED81;
		LED82 = _x.LED82;
		LED83 = _x.LED83;
		LED84 = _x.LED84;
		LED85 = _x.LED85;
		LED86 = _x.LED86;
		LED87 = _x.LED87;
		LED88 = _x.LED88;
		LED89 = _x.LED89;
		LED90 = _x.LED90;
		LED91 = _x.LED91;
		LED92 = _x.LED92;
		LED93 = _x.LED93;
		LED94 = _x.LED94;
		LED95 = _x.LED95;
		LED96 = _x.LED96;
		LED97 = _x.LED97;
		LED98 = _x.LED98;
		LED99 = _x.LED99;
		LED100 = _x.LED100;
		LED101 = _x.LED101;
		LED102 = _x.LED102;
		LED103 = _x.LED103;
		LED104 = _x.LED104;
		LED105 = _x.LED105;
		LED106 = _x.LED106;
		LED107 = _x.LED107;
		LED108 = _x.LED108;
		LED109 = _x.LED109;
		LED110 = _x.LED110;
		LED111 = _x.LED111;
		LED112 = _x.LED112;
		LED113 = _x.LED113;
		LED114 = _x.LED114;
		LED115 = _x.LED115;
		LED116 = _x.LED116;
		LED117 = _x.LED117;
		LED118 = _x.LED118;
		LED119 = _x.LED119;
		LED120 = _x.LED120;
		LED121 = _x.LED121;
		LED122 = _x.LED122;
		LED123 = _x.LED123;
		LED124 = _x.LED124;
		LED125 = _x.LED125;
		LED126 = _x.LED126;
		LED127 = _x.LED127;
		LED128 = _x.LED128;
		return *this;
	}
	LightShowLEDBrigtness& operator=(LightShowLEDBrigtness &&_x){
		LED1 = std::move(_x.LED1);
		LED2 = std::move(_x.LED2);
		LED3 = std::move(_x.LED3);
		LED4 = std::move(_x.LED4);
		LED5 = std::move(_x.LED5);
		LED6 = std::move(_x.LED6);
		LED7 = std::move(_x.LED7);
		LED8 = std::move(_x.LED8);
		LED9 = std::move(_x.LED9);
		LED10 = std::move(_x.LED10);
		LED11 = std::move(_x.LED11);
		LED12 = std::move(_x.LED12);
		LED13 = std::move(_x.LED13);
		LED14 = std::move(_x.LED14);
		LED15 = std::move(_x.LED15);
		LED16 = std::move(_x.LED16);
		LED17 = std::move(_x.LED17);
		LED18 = std::move(_x.LED18);
		LED19 = std::move(_x.LED19);
		LED20 = std::move(_x.LED20);
		LED21 = std::move(_x.LED21);
		LED22 = std::move(_x.LED22);
		LED23 = std::move(_x.LED23);
		LED24 = std::move(_x.LED24);
		LED25 = std::move(_x.LED25);
		LED26 = std::move(_x.LED26);
		LED27 = std::move(_x.LED27);
		LED28 = std::move(_x.LED28);
		LED29 = std::move(_x.LED29);
		LED30 = std::move(_x.LED30);
		LED31 = std::move(_x.LED31);
		LED32 = std::move(_x.LED32);
		LED33 = std::move(_x.LED33);
		LED34 = std::move(_x.LED34);
		LED35 = std::move(_x.LED35);
		LED36 = std::move(_x.LED36);
		LED37 = std::move(_x.LED37);
		LED38 = std::move(_x.LED38);
		LED39 = std::move(_x.LED39);
		LED40 = std::move(_x.LED40);
		LED41 = std::move(_x.LED41);
		LED42 = std::move(_x.LED42);
		LED43 = std::move(_x.LED43);
		LED44 = std::move(_x.LED44);
		LED45 = std::move(_x.LED45);
		LED46 = std::move(_x.LED46);
		LED47 = std::move(_x.LED47);
		LED48 = std::move(_x.LED48);
		LED49 = std::move(_x.LED49);
		LED50 = std::move(_x.LED50);
		LED51 = std::move(_x.LED51);
		LED52 = std::move(_x.LED52);
		LED53 = std::move(_x.LED53);
		LED54 = std::move(_x.LED54);
		LED55 = std::move(_x.LED55);
		LED56 = std::move(_x.LED56);
		LED57 = std::move(_x.LED57);
		LED58 = std::move(_x.LED58);
		LED59 = std::move(_x.LED59);
		LED60 = std::move(_x.LED60);
		LED61 = std::move(_x.LED61);
		LED62 = std::move(_x.LED62);
		LED63 = std::move(_x.LED63);
		LED64 = std::move(_x.LED64);
		LED65 = std::move(_x.LED65);
		LED66 = std::move(_x.LED66);
		LED67 = std::move(_x.LED67);
		LED68 = std::move(_x.LED68);
		LED69 = std::move(_x.LED69);
		LED70 = std::move(_x.LED70);
		LED71 = std::move(_x.LED71);
		LED72 = std::move(_x.LED72);
		LED73 = std::move(_x.LED73);
		LED74 = std::move(_x.LED74);
		LED75 = std::move(_x.LED75);
		LED76 = std::move(_x.LED76);
		LED77 = std::move(_x.LED77);
		LED78 = std::move(_x.LED78);
		LED79 = std::move(_x.LED79);
		LED80 = std::move(_x.LED80);
		LED81 = std::move(_x.LED81);
		LED82 = std::move(_x.LED82);
		LED83 = std::move(_x.LED83);
		LED84 = std::move(_x.LED84);
		LED85 = std::move(_x.LED85);
		LED86 = std::move(_x.LED86);
		LED87 = std::move(_x.LED87);
		LED88 = std::move(_x.LED88);
		LED89 = std::move(_x.LED89);
		LED90 = std::move(_x.LED90);
		LED91 = std::move(_x.LED91);
		LED92 = std::move(_x.LED92);
		LED93 = std::move(_x.LED93);
		LED94 = std::move(_x.LED94);
		LED95 = std::move(_x.LED95);
		LED96 = std::move(_x.LED96);
		LED97 = std::move(_x.LED97);
		LED98 = std::move(_x.LED98);
		LED99 = std::move(_x.LED99);
		LED100 = std::move(_x.LED100);
		LED101 = std::move(_x.LED101);
		LED102 = std::move(_x.LED102);
		LED103 = std::move(_x.LED103);
		LED104 = std::move(_x.LED104);
		LED105 = std::move(_x.LED105);
		LED106 = std::move(_x.LED106);
		LED107 = std::move(_x.LED107);
		LED108 = std::move(_x.LED108);
		LED109 = std::move(_x.LED109);
		LED110 = std::move(_x.LED110);
		LED111 = std::move(_x.LED111);
		LED112 = std::move(_x.LED112);
		LED113 = std::move(_x.LED113);
		LED114 = std::move(_x.LED114);
		LED115 = std::move(_x.LED115);
		LED116 = std::move(_x.LED116);
		LED117 = std::move(_x.LED117);
		LED118 = std::move(_x.LED118);
		LED119 = std::move(_x.LED119);
		LED120 = std::move(_x.LED120);
		LED121 = std::move(_x.LED121);
		LED122 = std::move(_x.LED122);
		LED123 = std::move(_x.LED123);
		LED124 = std::move(_x.LED124);
		LED125 = std::move(_x.LED125);
		LED126 = std::move(_x.LED126);
		LED127 = std::move(_x.LED127);
		LED128 = std::move(_x.LED128);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LED1);
		fun(LED2);
		fun(LED3);
		fun(LED4);
		fun(LED5);
		fun(LED6);
		fun(LED7);
		fun(LED8);
		fun(LED9);
		fun(LED10);
		fun(LED11);
		fun(LED12);
		fun(LED13);
		fun(LED14);
		fun(LED15);
		fun(LED16);
		fun(LED17);
		fun(LED18);
		fun(LED19);
		fun(LED20);
		fun(LED21);
		fun(LED22);
		fun(LED23);
		fun(LED24);
		fun(LED25);
		fun(LED26);
		fun(LED27);
		fun(LED28);
		fun(LED29);
		fun(LED30);
		fun(LED31);
		fun(LED32);
		fun(LED33);
		fun(LED34);
		fun(LED35);
		fun(LED36);
		fun(LED37);
		fun(LED38);
		fun(LED39);
		fun(LED40);
		fun(LED41);
		fun(LED42);
		fun(LED43);
		fun(LED44);
		fun(LED45);
		fun(LED46);
		fun(LED47);
		fun(LED48);
		fun(LED49);
		fun(LED50);
		fun(LED51);
		fun(LED52);
		fun(LED53);
		fun(LED54);
		fun(LED55);
		fun(LED56);
		fun(LED57);
		fun(LED58);
		fun(LED59);
		fun(LED60);
		fun(LED61);
		fun(LED62);
		fun(LED63);
		fun(LED64);
		fun(LED65);
		fun(LED66);
		fun(LED67);
		fun(LED68);
		fun(LED69);
		fun(LED70);
		fun(LED71);
		fun(LED72);
		fun(LED73);
		fun(LED74);
		fun(LED75);
		fun(LED76);
		fun(LED77);
		fun(LED78);
		fun(LED79);
		fun(LED80);
		fun(LED81);
		fun(LED82);
		fun(LED83);
		fun(LED84);
		fun(LED85);
		fun(LED86);
		fun(LED87);
		fun(LED88);
		fun(LED89);
		fun(LED90);
		fun(LED91);
		fun(LED92);
		fun(LED93);
		fun(LED94);
		fun(LED95);
		fun(LED96);
		fun(LED97);
		fun(LED98);
		fun(LED99);
		fun(LED100);
		fun(LED101);
		fun(LED102);
		fun(LED103);
		fun(LED104);
		fun(LED105);
		fun(LED106);
		fun(LED107);
		fun(LED108);
		fun(LED109);
		fun(LED110);
		fun(LED111);
		fun(LED112);
		fun(LED113);
		fun(LED114);
		fun(LED115);
		fun(LED116);
		fun(LED117);
		fun(LED118);
		fun(LED119);
		fun(LED120);
		fun(LED121);
		fun(LED122);
		fun(LED123);
		fun(LED124);
		fun(LED125);
		fun(LED126);
		fun(LED127);
		fun(LED128);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LED1);
		fun(LED2);
		fun(LED3);
		fun(LED4);
		fun(LED5);
		fun(LED6);
		fun(LED7);
		fun(LED8);
		fun(LED9);
		fun(LED10);
		fun(LED11);
		fun(LED12);
		fun(LED13);
		fun(LED14);
		fun(LED15);
		fun(LED16);
		fun(LED17);
		fun(LED18);
		fun(LED19);
		fun(LED20);
		fun(LED21);
		fun(LED22);
		fun(LED23);
		fun(LED24);
		fun(LED25);
		fun(LED26);
		fun(LED27);
		fun(LED28);
		fun(LED29);
		fun(LED30);
		fun(LED31);
		fun(LED32);
		fun(LED33);
		fun(LED34);
		fun(LED35);
		fun(LED36);
		fun(LED37);
		fun(LED38);
		fun(LED39);
		fun(LED40);
		fun(LED41);
		fun(LED42);
		fun(LED43);
		fun(LED44);
		fun(LED45);
		fun(LED46);
		fun(LED47);
		fun(LED48);
		fun(LED49);
		fun(LED50);
		fun(LED51);
		fun(LED52);
		fun(LED53);
		fun(LED54);
		fun(LED55);
		fun(LED56);
		fun(LED57);
		fun(LED58);
		fun(LED59);
		fun(LED60);
		fun(LED61);
		fun(LED62);
		fun(LED63);
		fun(LED64);
		fun(LED65);
		fun(LED66);
		fun(LED67);
		fun(LED68);
		fun(LED69);
		fun(LED70);
		fun(LED71);
		fun(LED72);
		fun(LED73);
		fun(LED74);
		fun(LED75);
		fun(LED76);
		fun(LED77);
		fun(LED78);
		fun(LED79);
		fun(LED80);
		fun(LED81);
		fun(LED82);
		fun(LED83);
		fun(LED84);
		fun(LED85);
		fun(LED86);
		fun(LED87);
		fun(LED88);
		fun(LED89);
		fun(LED90);
		fun(LED91);
		fun(LED92);
		fun(LED93);
		fun(LED94);
		fun(LED95);
		fun(LED96);
		fun(LED97);
		fun(LED98);
		fun(LED99);
		fun(LED100);
		fun(LED101);
		fun(LED102);
		fun(LED103);
		fun(LED104);
		fun(LED105);
		fun(LED106);
		fun(LED107);
		fun(LED108);
		fun(LED109);
		fun(LED110);
		fun(LED111);
		fun(LED112);
		fun(LED113);
		fun(LED114);
		fun(LED115);
		fun(LED116);
		fun(LED117);
		fun(LED118);
		fun(LED119);
		fun(LED120);
		fun(LED121);
		fun(LED122);
		fun(LED123);
		fun(LED124);
		fun(LED125);
		fun(LED126);
		fun(LED127);
		fun(LED128);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LED1);
		fun << (LED2);
		fun << (LED3);
		fun << (LED4);
		fun << (LED5);
		fun << (LED6);
		fun << (LED7);
		fun << (LED8);
		fun << (LED9);
		fun << (LED10);
		fun << (LED11);
		fun << (LED12);
		fun << (LED13);
		fun << (LED14);
		fun << (LED15);
		fun << (LED16);
		fun << (LED17);
		fun << (LED18);
		fun << (LED19);
		fun << (LED20);
		fun << (LED21);
		fun << (LED22);
		fun << (LED23);
		fun << (LED24);
		fun << (LED25);
		fun << (LED26);
		fun << (LED27);
		fun << (LED28);
		fun << (LED29);
		fun << (LED30);
		fun << (LED31);
		fun << (LED32);
		fun << (LED33);
		fun << (LED34);
		fun << (LED35);
		fun << (LED36);
		fun << (LED37);
		fun << (LED38);
		fun << (LED39);
		fun << (LED40);
		fun << (LED41);
		fun << (LED42);
		fun << (LED43);
		fun << (LED44);
		fun << (LED45);
		fun << (LED46);
		fun << (LED47);
		fun << (LED48);
		fun << (LED49);
		fun << (LED50);
		fun << (LED51);
		fun << (LED52);
		fun << (LED53);
		fun << (LED54);
		fun << (LED55);
		fun << (LED56);
		fun << (LED57);
		fun << (LED58);
		fun << (LED59);
		fun << (LED60);
		fun << (LED61);
		fun << (LED62);
		fun << (LED63);
		fun << (LED64);
		fun << (LED65);
		fun << (LED66);
		fun << (LED67);
		fun << (LED68);
		fun << (LED69);
		fun << (LED70);
		fun << (LED71);
		fun << (LED72);
		fun << (LED73);
		fun << (LED74);
		fun << (LED75);
		fun << (LED76);
		fun << (LED77);
		fun << (LED78);
		fun << (LED79);
		fun << (LED80);
		fun << (LED81);
		fun << (LED82);
		fun << (LED83);
		fun << (LED84);
		fun << (LED85);
		fun << (LED86);
		fun << (LED87);
		fun << (LED88);
		fun << (LED89);
		fun << (LED90);
		fun << (LED91);
		fun << (LED92);
		fun << (LED93);
		fun << (LED94);
		fun << (LED95);
		fun << (LED96);
		fun << (LED97);
		fun << (LED98);
		fun << (LED99);
		fun << (LED100);
		fun << (LED101);
		fun << (LED102);
		fun << (LED103);
		fun << (LED104);
		fun << (LED105);
		fun << (LED106);
		fun << (LED107);
		fun << (LED108);
		fun << (LED109);
		fun << (LED110);
		fun << (LED111);
		fun << (LED112);
		fun << (LED113);
		fun << (LED114);
		fun << (LED115);
		fun << (LED116);
		fun << (LED117);
		fun << (LED118);
		fun << (LED119);
		fun << (LED120);
		fun << (LED121);
		fun << (LED122);
		fun << (LED123);
		fun << (LED124);
		fun << (LED125);
		fun << (LED126);
		fun << (LED127);
		fun << (LED128);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LED1);
		fun >> (LED2);
		fun >> (LED3);
		fun >> (LED4);
		fun >> (LED5);
		fun >> (LED6);
		fun >> (LED7);
		fun >> (LED8);
		fun >> (LED9);
		fun >> (LED10);
		fun >> (LED11);
		fun >> (LED12);
		fun >> (LED13);
		fun >> (LED14);
		fun >> (LED15);
		fun >> (LED16);
		fun >> (LED17);
		fun >> (LED18);
		fun >> (LED19);
		fun >> (LED20);
		fun >> (LED21);
		fun >> (LED22);
		fun >> (LED23);
		fun >> (LED24);
		fun >> (LED25);
		fun >> (LED26);
		fun >> (LED27);
		fun >> (LED28);
		fun >> (LED29);
		fun >> (LED30);
		fun >> (LED31);
		fun >> (LED32);
		fun >> (LED33);
		fun >> (LED34);
		fun >> (LED35);
		fun >> (LED36);
		fun >> (LED37);
		fun >> (LED38);
		fun >> (LED39);
		fun >> (LED40);
		fun >> (LED41);
		fun >> (LED42);
		fun >> (LED43);
		fun >> (LED44);
		fun >> (LED45);
		fun >> (LED46);
		fun >> (LED47);
		fun >> (LED48);
		fun >> (LED49);
		fun >> (LED50);
		fun >> (LED51);
		fun >> (LED52);
		fun >> (LED53);
		fun >> (LED54);
		fun >> (LED55);
		fun >> (LED56);
		fun >> (LED57);
		fun >> (LED58);
		fun >> (LED59);
		fun >> (LED60);
		fun >> (LED61);
		fun >> (LED62);
		fun >> (LED63);
		fun >> (LED64);
		fun >> (LED65);
		fun >> (LED66);
		fun >> (LED67);
		fun >> (LED68);
		fun >> (LED69);
		fun >> (LED70);
		fun >> (LED71);
		fun >> (LED72);
		fun >> (LED73);
		fun >> (LED74);
		fun >> (LED75);
		fun >> (LED76);
		fun >> (LED77);
		fun >> (LED78);
		fun >> (LED79);
		fun >> (LED80);
		fun >> (LED81);
		fun >> (LED82);
		fun >> (LED83);
		fun >> (LED84);
		fun >> (LED85);
		fun >> (LED86);
		fun >> (LED87);
		fun >> (LED88);
		fun >> (LED89);
		fun >> (LED90);
		fun >> (LED91);
		fun >> (LED92);
		fun >> (LED93);
		fun >> (LED94);
		fun >> (LED95);
		fun >> (LED96);
		fun >> (LED97);
		fun >> (LED98);
		fun >> (LED99);
		fun >> (LED100);
		fun >> (LED101);
		fun >> (LED102);
		fun >> (LED103);
		fun >> (LED104);
		fun >> (LED105);
		fun >> (LED106);
		fun >> (LED107);
		fun >> (LED108);
		fun >> (LED109);
		fun >> (LED110);
		fun >> (LED111);
		fun >> (LED112);
		fun >> (LED113);
		fun >> (LED114);
		fun >> (LED115);
		fun >> (LED116);
		fun >> (LED117);
		fun >> (LED118);
		fun >> (LED119);
		fun >> (LED120);
		fun >> (LED121);
		fun >> (LED122);
		fun >> (LED123);
		fun >> (LED124);
		fun >> (LED125);
		fun >> (LED126);
		fun >> (LED127);
		fun >> (LED128);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LIGHTSHOWLEDBRIGTNESS_H__
