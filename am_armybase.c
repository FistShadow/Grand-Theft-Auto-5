#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
	char* sLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 8;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 2;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 8;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 8;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	float fLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	float fLocal_95 = 0;
	float fLocal_96 = 0;
	auto uLocal_97 = 0;
	struct<4> Local_98 = 2;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	auto uLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 2;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 2;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	struct<8>[] Local_125 = new struct<8>[32];
	struct<178> Local_382 = 0;
	struct<20> Local_560 = 0;
#endregion

void main()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = 0.05f + 0.275f - 0.01f;
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_110(Local_560);
	}
	else
	{
		func_107();
	}
	while (true)
	{
		func_106();
		func_98();
		if (func_87() || network_is_in_tutorial_session())
		{
			func_107();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_25())
			{
				func_107();
			}
			if ((((((((!Global_1573484 && !func_24(2)) && !func_21(player_id(), 0)) && !is_player_switch_in_progress()) && is_player_control_on(player_id())) && !func_19(player_id())) && !func_17(func_18(player_id()))) && !func_15(player_id(), 146)) && !func_11(player_id()))
			{
				if (func_10(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_9(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 1000))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, false))
					{
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
							{
								if (func_10(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 3, 0, 0) || func_9(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (get_player_wanted_level(player_id()) < 4)
									{
										report_crime(player_id(), 36, get_wanted_level_threshold(4) - get_wanted_level_threshold(get_player_wanted_level(player_id())));
									}
									else
									{
										_0xDC64D2C53493ED12(player_id());
									}
								}
								else if (!func_8(&(Local_382.f_3)))
								{
									func_5(&(Local_382.f_3));
								}
								else if (func_2(&(Local_382.f_3)) > 20f || Local_382.f_177)
								{
									if (get_player_wanted_level(player_id()) < 4)
									{
										report_crime(player_id(), 36, get_wanted_level_threshold(4) - get_wanted_level_threshold(get_player_wanted_level(player_id())));
									}
									else
									{
										_0xDC64D2C53493ED12(player_id());
									}
								}
							}
							else if (get_player_wanted_level(player_id()) < 4)
							{
								report_crime(player_id(), 36, get_wanted_level_threshold(4) - get_wanted_level_threshold(get_player_wanted_level(player_id())));
							}
							else
							{
								_0xDC64D2C53493ED12(player_id());
							}
						}
						else
						{
							if (func_8(&(Local_382.f_3)))
							{
								func_1(&(Local_382.f_3));
							}
							if (Local_382.f_177)
							{
								Local_382.f_177 = 0;
							}
						}
					}
					else if (!Local_382.f_177)
					{
						Local_382.f_177 = 1;
					}
				}
				else if (Local_382.f_177)
				{
					Local_382.f_177 = 0;
				}
			}
		}
		else
		{
			func_107();
		}
	}
}

void func_1(auto uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

float func_2(int iParam0)
{
	if (func_8(iParam0))
	{
		if (func_4(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_3(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_3(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_4(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

void func_5(int iParam0)
{
	if (!func_8(iParam0))
	{
		func_6(iParam0);
	}
}

void func_6(int iParam0)
{
	func_7(iParam0, 0f);
}

void func_7(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_3(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

int func_8(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

bool func_9(Vector3 vParam0, int iParam1)
{
	Vector3[] vVar0 = new Vector3[15];
	Vector3[] vVar46 = new Vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	vVar0[0 /*3*/] = {-1877.436f, 2783.151f, 31.80618f};
	vVar46[0 /*3*/] = {-1797.873f, 2924.37f, 307.1106f + IntToFloat(iParam3)};
	fVar92[0] = 88f;
	vVar0[1 /*3*/] = {-1761.116f, 2834.651f, 31.80622f};
	vVar46[1 /*3*/] = {-1720.887f, 2906.419f, 281.8062f + IntToFloat(iParam3)};
	fVar92[1] = 88f;
	vVar0[2 /*3*/] = {-1761.493f, 2817.68f, 32.37125f};
	vVar46[2 /*3*/] = {-1769.704f, 2913.734f, 281.8066f + IntToFloat(iParam3)};
	fVar92[2] = 88f;
	vVar0[3 /*3*/] = {-1879.297f, 2772.653f, 29.57795f};
	vVar46[3 /*3*/] = {-1864.521f, 2825.472f, 281.8062f + IntToFloat(iParam3)};
	fVar92[3] = 88f;
	vVar0[4 /*3*/] = {-2676.74f, 3366.988f, 29.92394f};
	vVar46[4 /*3*/] = {-2744.79f, 3340.347f, 37.80379f + IntToFloat(iParam3)};
	fVar92[4] = 9f;
	vVar0[5 /*3*/] = {-2676.74f, 3366.988f, 29.92394f};
	vVar46[5 /*3*/] = {-2744.79f, 3340.347f, 37.80379f + IntToFloat(iParam3)};
	fVar92[5] = 9.5f;
	vVar0[6 /*3*/] = {-2807.397f, 3264.226f, 29.92764f};
	vVar46[6 /*3*/] = {-2879.805f, 3309.01f, 37.57864f + IntToFloat(iParam3)};
	fVar92[6] = 9.5f;
	vVar0[7 /*3*/] = {-2808.236f, 3264.634f, 29.92764f};
	vVar46[7 /*3*/] = {-2747.55f, 3187.8f, 37.45682f + IntToFloat(iParam3)};
	fVar92[7] = 9.5f;
	vVar0[8 /*3*/] = {-2530.996f, 3064.151f, 29.71081f};
	vVar46[8 /*3*/] = {-2748.557f, 3189.939f, 37.45682f + IntToFloat(iParam3)};
	fVar92[8] = 9.5f;
	vVar0[9 /*3*/] = {-2533.902f, 3062.491f, 29.70715f};
	vVar46[9 /*3*/] = {-2520.674f, 2996.817f, 37.45715f + IntToFloat(iParam3)};
	fVar92[9] = 9.5f;
	vVar0[10 /*3*/] = {-2500.716f, 2927.103f, 29.45663f};
	vVar46[10 /*3*/] = {-2445.696f, 2896.657f, 37.68009f + IntToFloat(iParam3)};
	fVar92[10] = 9.5f;
	vVar0[11 /*3*/] = {-2020.543f, 2810.747f, 29.45658f};
	vVar46[11 /*3*/] = {-1927.949f, 2785.779f, 37.67057f + IntToFloat(iParam3)};
	fVar92[11] = 9.5f;
	vVar0[12 /*3*/] = {-2261.899f, 3376.549f, 29.77859f};
	vVar46[12 /*3*/] = {-2141.067f, 3376.773f, 37.90019f + IntToFloat(iParam3)};
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

bool func_10(Vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3[] vVar0 = new Vector3[15];
	Vector3[] vVar46 = new Vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
			vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
			vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
			vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
			vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
			vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
			vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
			vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
			vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
			vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
			vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
			vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
			vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
			vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
			vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
			vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
			vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
			vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
			fVar92[0] = 250f;
			vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
			vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
			vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
			fVar92[2] = 200f;
			vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
			vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
			vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[4] = 140.5f;
			vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
			vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
			vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
			vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
			vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
			vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
			vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
			vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
			vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
			vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
			fVar92[13] = 65.75f;
			if (iParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
			vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
			vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
			vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
			vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
			vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
			vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
			vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
			vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
			vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
			vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
			vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
			vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
			vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
			vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
			vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
			vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
			vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
			vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
			vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
			vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
			vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
			vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
			vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
			vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
			vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
			vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

int func_11(int iParam0)
{
	return func_12(func_13(iParam0));
}

bool func_12(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		
		default:
	}
	return false;
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_14(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_15(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/] == iParam1)
	{
		return func_16(iParam0);
	}
	return false;
}

int func_16(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		
		case 141:
			if (func_16(player_id()))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_19(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return true;
	}
	if (func_20())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_20()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_22(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

auto func_23()
{
	return Global_1312747;
}

int func_24(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1573483, iParam0);
}

int func_25()
{
	int iVar0;
	
	iVar0 = 0;
	if (network_is_host_of_this_script())
	{
		if (func_66())
		{
			iVar0 = 1;
		}
	}
	if (func_26())
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_26()
{
	int iVar0;
	
	switch (Local_382.f_6)
	{
		case 0:
			func_65();
			if ((func_62(player_id(), 1) && func_61()) || func_13(player_id()) == 159)
			{
				set_vehicle_model_is_suppressed(joaat("rhino"), true);
			}
			func_59(&(Local_125[participant_id_to_int() /*8*/]), 1);
			Local_382.f_176 = 1;
			Local_382.f_6 = 1;
			break;
		
		case 1:
			if (func_58())
			{
				func_59(&(Local_125[participant_id_to_int() /*8*/]), 2);
				Local_382.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_57(Local_98.f_20, 1))
			{
				Local_382.f_6 = 3;
			}
			break;
		
		case 3:
			if (!func_62(player_id(), 1) && !func_61())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_34(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_27(iVar0);
				iVar0++;
			}
			if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_382.f_6 = 4;
			}
			break;
		
		case 4:
			if ((func_62(player_id(), 1) && func_61()) || func_13(player_id()) == 159)
			{
				set_vehicle_model_is_suppressed(joaat("rhino"), false);
			}
			return true;
			break;
	}
	return false;
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_98.f_3[iParam0 /*5*/].f_2 > 2 && network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam0 /*5*/]))
	{
		if (is_entity_dead(net_to_veh(Local_98.f_3[iParam0 /*5*/]), 0))
		{
			if (does_blip_exist(Local_382.f_172[iParam0]))
			{
				remove_blip(&(Local_382.f_172[iParam0]));
			}
		}
		else if (!does_blip_exist(Local_382.f_172[iParam0]) && get_player_wanted_level(player_id()) >= 2)
		{
			Local_382.f_172[iParam0] = add_blip_for_entity(net_to_ent(Local_98.f_3[iParam0 /*5*/]));
			set_blip_colour(Local_382.f_172[iParam0], 1);
		}
	}
	else if (does_blip_exist(Local_382.f_172[iParam0]))
	{
		remove_blip(&(Local_382.f_172[iParam0]));
	}
	switch (Local_98.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_4[iParam0], 16))
			{
				Local_125[participant_id_to_int() /*8*/].f_4[iParam0] = 0;
				func_32(&(Local_125[participant_id_to_int() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_4[iParam0], 1))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
					{
						if (get_player_wanted_level(player_id()) >= 4)
						{
							if (func_10(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 3, 500, 0))
							{
								func_32(&(Local_125[participant_id_to_int() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_4[iParam0], 2))
			{
				if (func_31(iParam0))
				{
					iVar2 = get_player_ped(Local_98.f_3[iParam0 /*5*/].f_4);
					iVar0 = net_to_ped(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar1 = net_to_veh(Local_98.f_3[iParam0 /*5*/]);
					if (!is_entity_dead(iVar2, 0))
					{
						if (is_ped_in_any_plane(iVar2))
						{
							iVar3 = get_vehicle_ped_is_in(iVar2, 0);
							if ((!is_entity_dead(iVar0, 0) && !is_entity_dead(iVar1, 0)) && !is_entity_dead(iVar3, 0))
							{
								task_plane_mission(iVar0, iVar1, iVar3, iVar2, get_entity_coords(iVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								set_current_ped_vehicle_weapon(iVar0, joaat("vehicle_weapon_space_rocket"));
								set_ped_can_switch_weapon(iVar0, false);
							}
						}
					}
				}
				if (func_30(iParam0))
				{
					iVar0 = net_to_ped(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar2 = get_player_ped(Local_98.f_3[iParam0 /*5*/].f_4);
					if (!is_entity_dead(iVar2, 0))
					{
						if (is_ped_in_any_plane(iVar2))
						{
							set_vehicle_shoot_at_target(iVar0, iVar2, get_entity_coords(iVar2, 1));
						}
					}
				}
				if (func_29(iParam0, 6))
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_4[iParam0], 8))
			{
				if (func_31(iParam0))
				{
					iVar0 = net_to_ped(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar1 = net_to_veh(Local_98.f_3[iParam0 /*5*/]);
					if (!is_entity_dead(iVar0, 0) && !is_entity_dead(iVar1, 0))
					{
						task_plane_mission(iVar0, iVar1, false, false, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_29(iParam0, 9))
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (network_does_network_id_exist(Local_98.f_3[iParam0 /*5*/]) || network_does_network_id_exist(Local_98.f_3[iParam0 /*5*/].f_1))
			{
				if (!is_sphere_visible(get_entity_coords(net_to_ent(Local_98.f_3[iParam0 /*5*/]), 0), 10f) && !is_sphere_visible_to_another_machine(get_entity_coords(net_to_ent(Local_98.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam0 /*5*/].f_1) && network_has_control_of_network_id(Local_98.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = net_to_ent(Local_98.f_3[iParam0 /*5*/].f_1);
						delete_entity(&iVar4);
					}
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam0 /*5*/]) && network_has_control_of_network_id(Local_98.f_3[iParam0 /*5*/]))
					{
						iVar5 = net_to_ent(Local_98.f_3[iParam0 /*5*/]);
						delete_entity(&iVar5);
					}
				}
			}
			else if (func_33(Local_125[participant_id_to_int() /*8*/].f_4[iParam0], 16))
			{
				func_28(&(Local_125[participant_id_to_int() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_28(auto uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 && iParam1);
}

bool func_29(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[uParam0 /*5*/]))
	{
		return true;
	}
	iVar0 = net_to_veh(Local_98.f_3[uParam0 /*5*/]);
	if (is_entity_dead(iVar0, 0))
	{
		return true;
	}
	if (get_active_vehicle_mission_type(iVar0) != iParam1)
	{
		return false;
	}
	return true;
}

bool func_30(auto uParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[uParam0 /*5*/].f_1))
	{
		return false;
	}
	iVar0 = net_to_ped(Local_98.f_3[uParam0 /*5*/].f_1);
	if (is_entity_dead(iVar0, 0))
	{
		return false;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return false;
	}
	return true;
}

bool func_31(auto uParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[uParam0 /*5*/]))
	{
		return false;
	}
	iVar0 = net_to_veh(Local_98.f_3[uParam0 /*5*/]);
	if (is_entity_dead(iVar0, 0))
	{
		return false;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return false;
	}
	return true;
}

void func_32(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_33(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_34(int iParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[iParam0]))
	{
		return;
	}
	iVar0 = net_to_ped(Local_98[iParam0]);
	if (is_entity_dead(iVar0, 0))
	{
		return;
	}
	switch (Local_98.f_21[iParam0])
	{
		case 0:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 64))
			{
				Local_125[participant_id_to_int() /*8*/].f_1[iParam0] = 0;
				func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 1))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iVar0, 1)) <= 900f)
					{
						func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 2) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iVar0, 1)) <= 900f)
			{
				func_56(&(Local_382.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_39(&(Local_382.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					task_aim_gun_at_entity(iVar0, func_37(iParam0), -1, 0);
				}
				if (func_36(iParam0, 1630799643))
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 8) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), get_entity_coords(iVar0, 1)) <= 900f) && get_player_wanted_level(player_id()) < 1)
			{
				if (!func_8(&Local_382))
				{
					func_5(&Local_382);
				}
				if (func_2(&Local_382) >= 7f)
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 8);
					func_39(&(Local_382.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_382))
			{
				func_1(&Local_382);
			}
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), get_entity_coords(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 16);
					report_crime(player_id(), 36, get_wanted_level_threshold(4));
				}
			}
			if (func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 1))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iVar0, 1)) > 900f)
					{
						func_28(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), get_entity_coords(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 16);
					report_crime(player_id(), 36, get_wanted_level_threshold(4) - get_wanted_level_threshold(get_player_wanted_level(player_id())));
				}
			}
			if (func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 1))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iVar0, 1)) > 900f)
					{
						func_28(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_36(iParam0, 1630799643))
			{
				if (func_38(iParam0))
				{
					task_aim_gun_at_entity(iVar0, func_37(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_33(Local_125[participant_id_to_int() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					clear_ped_tasks(iVar0);
				}
				if (!func_36(iParam0, 1435919172))
				{
					func_28(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 4);
					func_28(&(Local_125[participant_id_to_int() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

bool func_35(auto uParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[uParam0]))
	{
		return false;
	}
	iVar0 = net_to_ped(Local_98[uParam0]);
	if (is_entity_dead(iVar0, 0))
	{
		return false;
	}
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (is_player_free_aiming_at_entity(player_id(), iVar0))
	{
		return true;
	}
	if (is_player_targetting_entity(player_id(), iVar0))
	{
		return true;
	}
	if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iVar0, 1)) <= 64f)
	{
		return true;
	}
	return false;
}

bool func_36(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[uParam0]))
	{
		return true;
	}
	iVar0 = net_to_ped(Local_98[uParam0]);
	if (is_entity_dead(iVar0, 0))
	{
		return true;
	}
	if (get_script_task_status(iVar0, iParam1) != 1 && get_script_task_status(iVar0, iParam1) != 0)
	{
		return false;
	}
	return true;
}

int func_37(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar2 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
			if (!is_entity_dead(iVar2, 0))
			{
				fVar4 = vdist2(get_entity_coords(iVar2, 1), get_entity_coords(net_to_ent(Local_98[uParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_38(auto uParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[uParam0]))
	{
		return false;
	}
	iVar0 = net_to_ped(Local_98[uParam0]);
	if (is_entity_dead(iVar0, 0))
	{
		return false;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return false;
	}
	return true;
}

int func_39(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 1;
	return func_40(sParam2, iParam3, 0);
}

bool func_40(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_54();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_53(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_52();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_45();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_44())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_43())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_42();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_41();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_54();
	}
	return false;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_42()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_43()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_44()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_45()
{
	if (func_51(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_46();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

auto func_46()
{
	func_47();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_47()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_50(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_49(PLAYER::PLAYER_PED_ID());
			if (func_48(iVar0) && (!func_51(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_48(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_51(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_54()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_55(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_56(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

int func_57(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_58()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return false;
	}
	return true;
}

void func_59(auto uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_63(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_63(auto uParam0)
{
	return func_64(uParam0);
}

int func_64(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

void func_65()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("lazer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

bool func_66()
{
	int iVar0;
	
	switch (Local_98.f_19)
	{
		case 0:
			if (func_86())
			{
				Local_98.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_85())
			{
				Local_98.f_19 = 2;
			}
			break;
		
		case 2:
			if (func_62(player_id(), 1) || func_61())
			{
				func_59(&(Local_98.f_20), 1);
				Local_98.f_19 = 3;
			}
			else if (func_83())
			{
				func_59(&(Local_98.f_20), 1);
				Local_98.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_62(player_id(), 1) && !func_61())
			{
				iVar0 = false;
				while (iVar0 < 2)
				{
					func_80(iVar0);
					iVar0++;
				}
				iVar0 = false;
				while (iVar0 < 3)
				{
					func_69(iVar0);
					iVar0++;
				}
			}
			if (func_68())
			{
				Local_98.f_19 = 4;
			}
			break;
		
		case 4:
			func_67();
			return true;
			break;
	}
	return false;
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[iVar0]))
		{
			iVar1 = net_to_ped(Local_98[iVar0]);
			if (!is_entity_dead(iVar1, 0))
			{
				set_ped_as_no_longer_needed(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = net_to_ped(Local_98.f_3[iVar0 /*5*/].f_1);
			if (!is_entity_dead(iVar1, 0))
			{
				set_ped_as_no_longer_needed(&iVar1);
			}
		}
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iVar0 /*5*/]))
		{
			iVar2 = net_to_veh(Local_98.f_3[iVar0 /*5*/]);
			if (!is_entity_dead(iVar2, 0))
			{
				set_vehicle_as_no_longer_needed(&iVar2);
			}
		}
		iVar0++;
	}
}

bool func_68()
{
	if (network_get_num_participants() > 1)
	{
		return false;
	}
	if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return true;
	}
	return false;
}

void func_69(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	
	if (Local_98.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam0 /*5*/].f_1))
		{
			if (!is_entity_dead(net_to_ped(Local_98.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = net_to_ped(Local_98.f_3[iParam0 /*5*/].f_1);
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vVar1.z <= -150f)
				{
					set_ped_as_no_longer_needed(&iVar0);
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam0 /*5*/]))
					{
						if (!is_entity_dead(net_to_veh(Local_98.f_3[iParam0 /*5*/]), 0))
						{
							iVar4 = net_to_veh(Local_98.f_3[iParam0 /*5*/]);
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_98.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_79(iParam0, 16))
			{
				Local_98.f_3[iParam0 /*5*/].f_4 = -1;
				Local_98.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_77(iParam0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar5 = {func_76(iParam0)};
			if (!func_75(vVar5))
			{
				if (!is_sphere_visible_to_another_machine(vVar5, 20f) && !is_sphere_visible(vVar5, 20f))
				{
					if (func_72(vVar5, get_entity_heading(get_player_ped(Local_98.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_98.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_79(iParam0, 2))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = get_player_ped(Local_98.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (is_entity_dead(iVar8, 0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (is_ped_in_any_plane(iVar8) || is_ped_in_any_heli(iVar8))
			{
				if (func_71(get_vehicle_ped_is_in(iVar8, 0)))
				{
					Local_98.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_79(iParam0, 8))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 6;
				Local_98.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_70(iParam0, 16))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_77(iParam0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_33(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_71(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_entity_dead(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_72(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	iVar0 = 1;
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam4 /*5*/]))
	{
		if (!func_74(&(Local_98.f_3[iParam4 /*5*/]), joaat("lazer"), vParam0, fParam3, 1, 1, 1, 0, 1, 1))
		{
			iVar0 = 0;
		}
		else
		{
			_set_vehicle_landing_gear(net_to_veh(Local_98.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam4 /*5*/]))
	{
		if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_73(&(Local_98.f_3[iParam4 /*5*/].f_1), Local_98.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				set_current_ped_vehicle_weapon(net_to_ped(Local_98.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				set_ped_can_switch_weapon(net_to_ped(Local_98.f_3[iParam4 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_73(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return false;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), 0))
	{
		return false;
	}
	*uParam0 = ped_to_net(PED::CREATE_PED_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_ped(*uParam0), iParam7);
		if (_0xC7827959479DCC78(net_to_ped(*uParam0)))
		{
			if (iParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_74(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (iParam11)
	{
		clear_area_of_vehicles(vParam2, 1f, 0, 0, 1, 1, true);
	}
	iVar0 = create_vehicle(iParam1, vParam2, fParam5, iParam7, iParam6);
	*uParam0 = veh_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam10);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam8)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
			else
			{
				set_network_id_exists_on_all_machines(*uParam0, 0);
			}
		}
		set_vehicle_is_stolen(iVar0, iParam9);
		return true;
	}
	return false;
}

bool func_75(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_76(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = get_player_ped(Local_98.f_3[iParam0 /*5*/].f_4);
	if (is_entity_dead(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = {_get_object_offset_from_coords(get_entity_coords(iVar0, 1), get_entity_heading(iVar0), 0f, -250f, 40f * to_float(iParam0))};
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

bool func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
			if (!func_78(network_get_player_index(int_to_participantindex(iVar0))))
			{
				if (is_ped_in_any_plane(iVar1) || is_ped_in_any_heli(iVar1))
				{
					if (get_player_wanted_level(network_get_player_index(int_to_participantindex(iVar0))) >= 4)
					{
						vVar2 = {get_entity_coords(iVar1, 0)};
						if (func_10(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_98.f_3[iParam0 /*5*/].f_4 = network_get_player_index(int_to_participantindex(iVar0));
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = get_player_ped(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (is_entity_dead(iVar0, 0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = get_player_ped(Local_98.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_98.f_3[iVar1 /*5*/].f_4)
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!func_33(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_80(int iParam0)
{
	switch (Local_98.f_21[iParam0])
	{
		case 0:
			if (func_82(iParam0, 64))
			{
				Local_98.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_81(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_81(iParam0, 2))
			{
				Local_98.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_82(iParam0, 4))
			{
				Local_98.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_81(iParam0, 8))
			{
				Local_98.f_21[iParam0] = 5;
			}
			if (!func_81(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 7;
			}
			if (func_81(iParam0, 16))
			{
				Local_98.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_81(iParam0, 16))
			{
				Local_98.f_21[iParam0] = 6;
			}
			if (!func_81(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_81(iParam0, 4))
			{
				Local_98.f_21[iParam0] = 0;
			}
			break;
	}
}

bool func_81(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_33(Local_125[iVar0 /*8*/].f_1[uParam0], iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_82(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!func_33(Local_125[iVar0 /*8*/].f_1[uParam0], iParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_83()
{
	int iVar0;
	
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_84(&(Local_98[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[0]))
	{
		give_weapon_to_ped(net_to_ped(Local_98[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_84(&(Local_98[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_98[1]))
	{
		give_weapon_to_ped(net_to_ped(Local_98[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

bool func_84(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, iParam7);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam9);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam7)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			if (!func_57(Local_125[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_86()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			if (!func_57(Local_125[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_87()
{
	int iVar0;
	
	func_94(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_93())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_92())
	{
		return true;
	}
	if (func_91(157))
	{
		if (!func_90())
		{
			return true;
		}
	}
	if (func_91(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_88() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_88()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_88()
{
	switch (func_89())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_89()
{
	return Global_25120;
}

auto func_90()
{
	return Global_2434762.f_574;
}

bool func_91(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_92()
{
	return Global_2443085;
}

auto func_93()
{
	return Global_2434762.f_569;
}

void func_94(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_95(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_97(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_96(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_96(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_97(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_98()
{
	if (get_num_reserved_mission_peds(false) != 5)
	{
		if (func_105(5, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= 5)
			{
				reserve_network_mission_peds(5);
			}
		}
	}
	if (get_num_reserved_mission_vehicles(false) != 3)
	{
		if (func_99(3, 0, 1))
		{
			if (_0x0CD9AB83489430EA(0) <= 3)
			{
				reserve_network_mission_vehicles(3);
			}
		}
	}
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	return func_100(1, iParam0, 1, iParam1, iParam2);
}

bool func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_104(iParam0) - func_103(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_103(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_104(iParam0) - func_102(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_103(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_104(iParam0) - func_103(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_101(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return get_num_reserved_mission_peds(!iParam1);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!iParam1);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return get_num_reserved_mission_objects(!iParam1);
			}
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	return func_100(0, iParam0, 1, iParam1, iParam2);
}

void func_106()
{
	wait(0);
}

void func_107()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (network_is_host_of_this_script())
		{
			if (func_68())
			{
				func_67();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_blip_exist(Local_382.f_172[iVar0]))
		{
			remove_blip(&(Local_382.f_172[iVar0]));
		}
		iVar0++;
	}
	func_109();
	func_108();
}

void func_108()
{
	terminate_this_thread();
}

void func_109()
{
	if (!Local_382.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		set_model_as_no_longer_needed(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		set_model_as_no_longer_needed(joaat("lazer"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		set_model_as_no_longer_needed(joaat("s_m_y_pilot_01"));
	}
}

void func_110(struct<20> Param0)
{
	func_114(func_115(Param0), Param0);
	func_112(0, -1, 0);
	reserve_network_mission_peds(5);
	reserve_network_mission_vehicles(3);
	network_register_host_broadcast_variables(&Local_98, 27);
	network_register_player_broadcast_variables(&Local_125, 257);
	set_this_script_can_be_paused(0);
	if (!func_111())
	{
		func_107();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_107();
	}
}

bool func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_93())
		{
			return false;
		}
		if (func_91(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

bool func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_108();
			}
			else
			{
				return false;
			}
		}
		if (!func_113())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_108();
					}
					else
					{
						return false;
					}
				}
				if (func_93())
				{
					if (!iParam2)
					{
						func_108();
					}
					else
					{
						return false;
					}
				}
				if (func_91(155))
				{
					if (!iParam2)
					{
						func_108();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_108();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!iParam2)
			{
				func_108();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_108();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_113()
{
	return Global_1315888;
}

void func_114(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_108();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

