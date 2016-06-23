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
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
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
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	float fLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	auto uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var[] uLocal_110 = new var[4];
	auto uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	Vector3 vLocal_118 = 0;
	int iLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<22> Local_129 = 0;
	Vector3[] vLocal_151 = new Vector3[32];
	struct<20> Local_248 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_567(Local_248))
		{
			func_549();
		}
	}
	while (true)
	{
		func_548();
		if (func_541())
		{
			func_549();
		}
		if (func_538())
		{
			func_549();
		}
		switch (func_537(participant_id_to_int()))
		{
			case 0:
				if (func_536() == 1)
				{
					func_535(1);
					func_521();
				}
				break;
			
			case 1:
				if (func_536() == 1)
				{
					func_32();
				}
				else if (func_536() == 3)
				{
					func_535(3);
				}
				break;
			
			case 3:
				func_549();
				break;
		}
		if (network_is_host_of_this_script())
		{
			if (func_536() != 3 && func_31())
			{
				func_30(3);
			}
			switch (func_536())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				
				case 3:
					func_549();
					break;
				}
		}
	}
}

bool func_1()
{
	auto uVar0;
	int iVar1;
	
	func_22();
	switch (Local_129.f_1)
	{
		case 0:
			if (!func_21(&(Local_129.f_10)))
			{
				func_20(&(Local_129.f_10), 0, 0);
			}
			else if (func_19(&(Local_129.f_10), Global_262145.f_10428, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 4);
				func_18(2);
			}
			if (!func_17(Local_129.f_7))
			{
				if (func_13(Global_262145.f_10433 - 1, &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (is_bit_set(Local_129.f_2, true))
			{
				func_18(2);
			}
			if (func_12(Local_129.f_5) || func_10(Local_129.f_5, 1, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 2);
				func_18(2);
			}
			break;
		
		case 1:
			if (!func_21(&(Local_129.f_12)))
			{
				func_20(&(Local_129.f_12), 0, 0);
			}
			else
			{
				if (!func_21(&(Local_129.f_16)))
				{
					if (!func_13(Global_262145.f_10433, &uVar0, 1123024896, 0))
					{
						func_9(&(Local_129.f_16), 0, 0);
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 6);
					}
				}
				else if (!func_13(Global_262145.f_10433, &uVar0, 1123024896, 0))
				{
					if (func_19(&(Local_129.f_16), 20000, 0))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 2);
					}
				}
				else
				{
					func_8(&(Local_129.f_16));
					func_9(&(Local_129.f_18), 0, 0);
					clear_bit(&(Local_129.f_2), 6);
				}
				if (func_21(&(Local_129.f_18)))
				{
					if (func_19(&(Local_129.f_18), 5000, 0))
					{
						func_8(&(Local_129.f_18));
					}
				}
				iVar1 = func_7();
				if (func_19(&(Local_129.f_12), Global_262145.f_10429, 0) || iVar1)
				{
					func_18(2);
					if (!iVar1)
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), false);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_129.f_5) || func_10(Local_129.f_5, 1, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 2);
				func_18(2);
			}
			break;
		
		case 2:
			if (!func_21(&(Local_129.f_14)))
			{
				func_20(&(Local_129.f_14), 0, 0);
			}
			else if (func_19(&(Local_129.f_14), 15000, 0))
			{
				func_18(3);
			}
			break;
		
		case 3:
			return true;
	}
	return false;
}

void func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	struct<14> Var28;
	
	if (!is_bit_set(Local_129.f_2, 5))
	{
		if (is_bit_set(Local_129.f_2, 3))
		{
			Var0 = 0;
			Var0.f_1 = player_id();
			Var0.f_2 = 186;
			Var0.f_10 = func_6();
			func_3(Var0, func_4());
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 5);
		}
		else if (is_bit_set(Local_129.f_2, false))
		{
			Var14 = 0;
			Var14.f_1 = player_id();
			Var14.f_2 = 188;
			func_3(Var14, func_4());
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 5);
		}
		else if (is_bit_set(Local_129.f_2, 2) || is_bit_set(Local_129.f_2, true))
		{
			Var28 = 0;
			Var28.f_1 = player_id();
			Var28.f_2 = 187;
			func_3(Var28, func_4());
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 5);
		}
	}
}

void func_3(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_4()
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (!is_bit_set(vLocal_151[iVar1 /*3*/].f_2, false))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_5(int iParam0, int iParam1, int iParam2)
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

auto func_6()
{
	return Local_129.f_6;
}

bool func_7()
{
	if ((((is_bit_set(Local_129.f_2, false) || is_bit_set(Local_129.f_2, true)) || is_bit_set(Local_129.f_2, 2)) || is_bit_set(Local_129.f_2, 3)) || is_bit_set(Local_129.f_2, 4))
	{
		return true;
	}
	return false;
}

void func_8(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_9(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	*uParam0.f_1 = 1;
}

bool func_10(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_11())
	{
		return false;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
	{
		return true;
	}
	if (iParam1)
	{
		if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, true))
		{
			return true;
		}
	}
	if (iParam2)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_11()
{
	return -1;
}

int func_12(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

bool func_13(int iParam0, auto uParam1, float fParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	
	iVar0 = get_player_ped(func_16());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	*uParam1 = func_15(iVar0, Local_129.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return false;
	}
	fVar1 = get_entity_height_above_ground(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !iParam3)
	{
		return false;
	}
	return true;
}

float func_14(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

auto func_15(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

auto func_16()
{
	return Local_129.f_5;
}

bool func_17(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	Local_129.f_1 = iParam0;
}

bool func_19(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_20(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_20(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

auto func_21(auto uParam0)
{
	return *uParam0.f_1;
}

void func_22()
{
	int iVar0;
	
	if (!is_bit_set(Local_129.f_2, true))
	{
		if (!network_is_player_active(func_16()))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), true);
		}
	}
	if (!is_bit_set(Local_129.f_2, true) && !is_bit_set(Local_129.f_2, 2))
	{
		iVar0 = network_get_participant_index(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (is_bit_set(vLocal_151[iVar0 /*3*/].f_2, 11))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 2);
				if (Local_129.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

bool func_23()
{
	Vector3[] vVar0 = new Vector3[4];
	var[] uVar13 = new var[4];
	float fVar18;
	int iVar19;
	int iVar20;
	
	Local_129.f_5 = func_29();
	Local_129.f_6 = func_11();
	_0x6DEE77AFF8C21BD1(&(Local_129.f_20), &(Local_129.f_21));
	vVar0[0 /*3*/] = {-1976.481f, -638.13f, 4.6219f};
	vVar0[1 /*3*/] = {2306.744f, -400.686f, 86.3213f};
	vVar0[2 /*3*/] = {3505.623f, 3787.041f, 28.9708f};
	vVar0[3 /*3*/] = {-1976.225f, 4546.3f, 56.0401f};
	iVar19 = 0;
	while (iVar19 <= 3)
	{
		uVar13[iVar19] = func_15(PLAYER::PLAYER_PED_ID(), vVar0[iVar19 /*3*/], 1);
		iVar19++;
	}
	fVar18 = uVar13[0];
	iVar20 = 1;
	iVar19 = 0;
	while (iVar19 <= 3)
	{
		if (uVar13[iVar19] < fVar18)
		{
			fVar18 = uVar13[iVar19];
			iVar20 = iVar19 + 1;
		}
		iVar19++;
	}
	Local_129.f_3 = iVar20;
	Local_129.f_7 = {func_24(Local_129.f_3)};
	return true;
}

Vector3 func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = _get_posix_time();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			iVar4 = false;
			iVar5 = 7;
			break;
		
		case 2:
			iVar1 = 6;
			iVar4 = 8;
			iVar5 = 7;
			break;
		
		case 3:
			iVar1 = 5;
			iVar4 = 16;
			iVar5 = 6;
			break;
		
		case 4:
			iVar1 = 4;
			iVar4 = 24;
			iVar5 = 5;
			break;
	}
	_0xF1B84178F8674195(iVar0);
	iVar2 = _network_get_random_int_in_range(0, iVar1);
	iVar3 = func_28(2929, -1, 0);
	if (iVar5 > 1)
	{
		if (is_bit_set(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= iVar4 + 1 + iVar5 - 1)
			{
				if (is_bit_set(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1 >= iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = iVar6 - iVar4 + 1 + 1;
					}
					iVar6 = iVar4 + 1 + iVar5 - 1;
				}
				iVar6++;
			}
		}
	}
	iVar3 = false;
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar3, iVar4 + 1 + iVar2);
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar3, iVar4);
	func_25(2929, iVar3, -1, 1);
	Local_129.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472.415f, -1689.474f, 17.9477f;
				
				case 1:
					return -1654.092f, 213.143f, 59.6413f;
				
				case 2:
					return -1008.389f, -1020.496f, 1.1503f;
				
				case 3:
					return -604.266f, -142.684f, 38.0086f;
				
				case 4:
					return -1700.562f, -322.726f, 49.0851f;
				
				case 5:
					return -1158.28f, -383.876f, 50.7161f;
				
				case 6:
					return -1191.066f, -1491.259f, 3.3797f;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160.142f, -1761.704f, 28.0984f;
				
				case 1:
					return 1097.841f, -554.319f, 54.7365f;
				
				case 2:
					return 191.932f, 124.653f, 96.9401f;
				
				case 3:
					return 323.693f, -867.527f, 28.1726f;
				
				case 4:
					return 1386.79f, -1689.002f, 61.0964f;
				
				case 5:
					return 968.623f, -3067.462f, 4.9008f;
				
				case 6:
					return 928.85f, -2270.156f, 29.5096f;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667.876f, 3710.527f, 33.0008f;
				
				case 1:
					return 2459.918f, 4827.391f, 34.4214f;
				
				case 2:
					return 1506.714f, 6513.564f, 19.8804f;
				
				case 3:
					return 2501.049f, 2639.483f, 42.5508f;
				
				case 4:
					return 2658.239f, 1542.729f, 23.4847f;
				
				case 5:
					return 1415.427f, 1819.726f, 102.3258f;
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194.476f, 6316.824f, 30.5625f;
				
				case 1:
					return -660.505f, 5677.562f, 30.7898f;
				
				case 2:
					return -1557.125f, 4561.964f, 18.5454f;
				
				case 3:
					return -159.803f, 2713.044f, 54.3232f;
				
				case 4:
					return -3240.385f, 1106.345f, 1.5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

auto func_27()
{
	return Global_1312747;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_26(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_29()
{
	return Global_1610316[player_id() /*174*/].f_10.f_30;
}

void func_30(int iParam0)
{
	Local_129 = iParam0;
}

bool func_31()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return true;
	}
	return false;
}

void func_32()
{
	iLocal_116 = func_5(func_16(), 0, 1);
	func_517();
	func_465();
	func_464();
	func_461();
	func_443();
	func_438();
	func_417();
	func_399();
	func_389();
	switch (vLocal_151[participant_id_to_int() /*3*/].f_1)
	{
		case 0:
			if (func_388())
			{
				func_380(0);
			}
			else if (func_378(player_id(), func_16(), 0))
			{
				func_380(6);
			}
			break;
		
		case 1:
			if (func_388())
			{
				func_380(5);
				func_361(2);
				if (iLocal_116)
				{
					if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 8))
					{
						func_359();
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 8);
					}
				}
				if (!func_358(player_id(), 0))
				{
					func_357(player_id(), 0);
				}
				if (is_bit_set(Local_129.f_2, 6))
				{
					func_380(4);
				}
			}
			else if (iLocal_116)
			{
				if (func_378(player_id(), func_16(), 0))
				{
					func_380(3);
					func_361(1);
				}
				else
				{
					func_361(0);
					if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, false))
					{
						func_380(8);
					}
					else
					{
						func_380(1);
					}
					if (func_356(participant_id_to_int()))
					{
						func_353();
						func_337();
					}
				}
			}
			if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 7))
			{
				func_333();
				GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 7);
			}
			func_221(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
			break;
		
		case 2:
			if (!func_378(player_id(), func_16(), 1))
			{
				if (!func_220(player_id(), 19))
				{
					func_218();
					return;
				}
			}
			if (func_388())
			{
				if (func_358(player_id(), 0))
				{
					func_217(player_id(), 0);
				}
				if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 11))
				{
					func_549();
					return;
				}
			}
			func_71();
			func_218();
			if (is_bit_set(Local_129.f_2, false))
			{
				if (func_388())
				{
					func_361(10);
				}
				else if (func_378(player_id(), func_16(), 0))
				{
					func_361(11);
				}
				else
				{
					func_361(6);
				}
				func_67(Local_129.f_5);
			}
			else if (is_bit_set(Local_129.f_2, true))
			{
				if (func_356(participant_id_to_int()))
				{
					if (!func_378(player_id(), Local_129.f_5, 1))
					{
						func_361(7);
					}
				}
				func_67(0);
			}
			else if (is_bit_set(Local_129.f_2, 2))
			{
				if (func_388())
				{
					func_361(12);
				}
				else if (func_378(player_id(), func_16(), 0))
				{
					func_361(13);
				}
				else if (func_356(participant_id_to_int()))
				{
					func_361(14);
				}
				func_67(0);
			}
			else if (is_bit_set(Local_129.f_2, 3))
			{
				if (func_388())
				{
					if (func_66())
					{
						func_361(9);
					}
					else
					{
						func_361(8);
					}
				}
				else if (Local_129.f_6 == player_id())
				{
					if (func_378(player_id(), func_16(), 0))
					{
						func_361(15);
					}
					else
					{
						func_361(3);
					}
				}
				else if (func_356(participant_id_to_int()))
				{
					if (func_66())
					{
						func_361(17);
					}
					else
					{
						func_361(4);
					}
				}
				func_67(Local_129.f_6);
			}
			else if (is_bit_set(Local_129.f_2, 4))
			{
				if (func_388())
				{
					func_361(16);
				}
				func_67(0);
			}
			if (func_33(&uLocal_98, 1))
			{
				func_535(3);
			}
			break;
		
		case 3:
			break;
	}
}

bool func_33(auto uParam0, int iParam1)
{
	int iVar0;
	
	func_65(29);
	if ((*uParam0 > 0 && !func_64()) && func_48(player_id()) != 0)
	{
		if (!func_45())
		{
			func_44();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(uParam0.f_3))
			{
				func_20(uParam0.f_3, 0, 0);
			}
			else if (func_19(uParam0.f_3, 1000, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), 2);
				if (iParam1)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), false);
					func_20(uParam0.f_5, 0, 0);
				}
				func_20(uParam0.f_1, 0, 0);
				func_43(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(uParam0.f_5))
			{
				if (func_19(uParam0.f_5, 3000, 0))
				{
					iVar0 = true;
				}
			}
			else
			{
				iVar0 = true;
			}
			if (iVar0)
			{
				func_38();
				func_43(uParam0, 2);
			}
			break;
		
		case 2:
			func_38();
			if (func_19(uParam0.f_1, 15000, 0))
			{
				if (func_34(func_35()))
				{
					clear_help(1);
				}
				func_43(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(uParam0.f_1, 23500, 0))
			{
				clear_bit(&(Global_2460486.f_4426), true);
				clear_bit(&(Global_1727391.f_3), 2);
				func_43(uParam0, 4);
				return true;
			}
			break;
		
		case 4:
			clear_bit(&(Global_2460486.f_4426), true);
			clear_bit(&(Global_1727391.f_3), 2);
			return true;
	}
	return false;
}

int func_34(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

char* func_35()
{
	if (func_36(func_37()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

bool func_36(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

auto func_37()
{
	return Global_1615885;
}

void func_38()
{
	if (is_bit_set(Global_2460486.f_4426, false))
	{
		if ((((((((!is_radar_hidden() && !is_bit_set(Global_2460486.f_743, 2)) && func_5(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out()) && !func_220(player_id(), 22)) && func_48(player_id()) != 0) && !func_41(func_42()))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), true);
			func_40(func_35(), -1);
			func_39(1);
			clear_bit(&(Global_2460486.f_4426), false);
		}
	}
}

void func_39(int iParam0)
{
	if (iParam0 && !func_64())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_40(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

bool func_41(int iParam0)
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

int func_42()
{
	char* sVar0;
	
	sVar0 = get_this_script_name();
	if (are_strings_equal(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (are_strings_equal(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (are_strings_equal(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (are_strings_equal(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (are_strings_equal(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (are_strings_equal(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (are_strings_equal(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (are_strings_equal(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (are_strings_equal(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_43(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_44()
{
	Global_2444574 = 1;
}

bool func_45()
{
	if (func_46(player_id()) == 170)
	{
		return true;
	}
	return false;
}

int func_46(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_47(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_63(iParam0) && !func_62(iParam0)) && !is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_61(iParam0);
	uVar3 = func_60();
	uVar4 = func_53();
	if ((iVar1 && (func_52(iParam0) || func_51(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_50(iParam0)) && !func_49(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

int func_49(int iParam0)
{
	return func_220(iParam0, 19);
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_220(iParam0, 9);
	}
	return false;
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

bool func_53()
{
	if ((func_220(player_id(), 21) || func_220(player_id(), 22)) || func_58())
	{
		return true;
	}
	if (func_54())
	{
		func_65(22);
		return true;
	}
	return false;
}

bool func_54()
{
	if (func_47(player_id(), 0))
	{
		if ((func_60() && !func_57()) || func_56(player_id(), 21))
		{
			if (!func_220(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_55(27);
		}
	}
	return false;
}

void func_55(int iParam0)
{
	clear_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_56(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

auto func_57()
{
	return Global_1312416.f_1;
}

int func_58()
{
	return func_59(283, -1);
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_26(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_60()
{
	return Global_1312416;
}

int func_61(int iParam0)
{
	return func_220(iParam0, 20);
}

int func_62(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 2);
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

int func_64()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_65(int iParam0)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_66()
{
	if (Local_129.f_6 == func_11() || Local_129.f_5 == func_11())
	{
		return false;
	}
	if (!func_378(Local_129.f_6, Local_129.f_5, 0))
	{
		return false;
	}
	return true;
}

void func_67(int iParam0)
{
	if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 6))
	{
		if (iParam0 != func_11())
		{
			func_68(0, iParam0);
		}
		else
		{
			func_68(0, 0);
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 6);
	}
}

void func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (network_is_player_active(iParam1))
		{
			if (iParam1 == player_id())
			{
				iVar0 = 1;
			}
			else if (func_69(iParam1, player_id()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(player_id(), 1, 1))
		{
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			Global_2460486.f_4660.f_170 = _get_posix_time();
		}
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_70(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_70(iParam1);
		}
	}
	return false;
}

int func_70(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_11();
}

void func_71()
{
	struct<10> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 5))
	{
		if (is_bit_set(Local_129.f_2, 3))
		{
			if (player_id() == func_6())
			{
				if (func_378(player_id(), func_16(), 0))
				{
					func_72(164, 0, &Var0);
				}
				else
				{
					func_72(164, 1, &Var0);
				}
			}
			else
			{
				func_72(164, 0, &Var0);
			}
			GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 5);
		}
		else if (is_bit_set(Local_129.f_2, false))
		{
			if (func_378(player_id(), func_16(), 1))
			{
				func_72(164, 1, &Var0);
			}
			else
			{
				func_72(164, 0, &Var0);
			}
			GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 5);
		}
		else if (is_bit_set(Local_129.f_2, 2) || is_bit_set(Local_129.f_2, true))
		{
			func_72(164, 0, &Var0);
			GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 5);
		}
	}
}

void func_72(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	auto uVar18;
	auto uVar19;
	int iVar20;
	int iVar21;
	auto uVar22;
	
	func_215(iParam0, &fVar2, &fVar3);
	if (*uParam2.f_6 == 0)
	{
		iVar1 += *uParam2.f_1;
		iVar0 += *uParam2;
	}
	if (iParam1)
	{
		iVar1 += func_214(iParam0);
		iVar1 = round(to_float(iVar1) / to_float(*uParam2.f_4));
		iVar1 = round(IntToFloat(iVar1) * fVar3);
		iVar1 = round(IntToFloat(iVar1) * *uParam2.f_3);
		iVar0 += func_213(iParam0);
		iVar0 = round(to_float(iVar0) / to_float(*uParam2.f_4));
		iVar0 = round(IntToFloat(iVar0) * fVar2);
		iVar0 = round(IntToFloat(iVar0) * *uParam2.f_2);
	}
	if (iParam1)
	{
		if (func_212(player_id()) > 0)
		{
			func_211();
		}
		else
		{
			func_210();
		}
	}
	else
	{
		func_209();
	}
	if (iParam0 == 168)
	{
		if (iParam1)
		{
			if (func_208(player_id()))
			{
				if (*uParam2.f_5)
				{
					iVar0 += func_200(Global_1610316[player_id() /*174*/].f_10.f_119);
				}
				else
				{
					iVar4 = *uParam2.f_7;
					if (*uParam2.f_8 > 0)
					{
						iVar4 += *uParam2.f_8;
					}
					iVar5 = func_199(iVar4);
					iVar6 = iVar5 * iVar4;
					iVar0 += iVar6;
					iVar8 = func_198(&uVar7);
					iVar9 = Global_262145.f_13508;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = ceil(IntToFloat(iVar8) * Global_262145.f_12730);
					iVar11 = iVar0 / 100 * iVar10;
					iVar0 += iVar11;
					if (*uParam2.f_6)
					{
						iVar0 += *uParam2;
					}
					if (iVar8 > 0 && *uParam2.f_9 != 4)
					{
						func_197(44);
					}
				}
				func_191(iVar0);
				func_190();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < _network_get_num_participants_host())
				{
					iVar13 = iVar12;
					if (network_is_participant_active(iVar13))
					{
						iVar14 = network_get_player_index(iVar13);
						if (func_189(iVar14))
						{
							func_181(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_208(player_id()))
		{
			func_180();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_208(player_id()))
		{
			if (iParam1)
			{
				func_179();
			}
			func_178();
		}
	}
	iVar15 = func_29();
	if (iVar15 != func_11() && iParam0 != 148)
	{
		if (func_177(player_id(), 0))
		{
			if (!func_378(player_id(), iVar15, 1))
			{
				func_142(&iVar0, 1);
			}
		}
	}
	func_138(iParam0, &iVar16, &iVar17);
	iVar1 += iVar16;
	iVar0 += iVar17;
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_137();
		func_89(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_88();
		if (iVar20 != func_11())
		{
			func_87(iVar20, &uVar18, &uVar19);
		}
		iVar21 = !func_86(1);
		if (iParam0 == 168)
		{
			if (!func_85())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_85())
		{
			func_76(-856006867, iVar0, &uVar22, 0, 1, 0);
			Global_2558146[uVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[uVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[uVar22 /*73*/].f_8.f_56 = iVar21;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar18, uVar19, iVar0, iVar21);
		}
		if (func_75(iParam0))
		{
			if (func_74(iParam0) > -1)
			{
				func_73(func_74(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_9(&Global_2443512, 0, 0);
	}
}

void func_73(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = uParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_76(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_85())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_77(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_77(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_77(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_85())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_27()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_84(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_83(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_78(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_79(iParam0);
	}
}

void func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_85())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_82(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_80(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_80(auto uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_81(uParam0.f_8.f_3);
	func_81(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_81(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_82(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_83(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_84(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_85())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_85()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

int func_86(int iParam0)
{
	return func_177(player_id(), iParam0);
}

void func_87(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

auto func_88()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_89(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_90(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_96(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_91(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_91(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_94(iParam0, 1)};
	if (iParam0 == func_93(PLAYER::PLAYER_PED_ID()))
	{
		func_92(1);
	}
	func_96(vVar0, iParam1, 0, sParam2);
}

void func_92(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_93(int iParam0)
{
	return iParam0;
}

Vector3 func_94(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_95(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!is_entity_dead(iParam0, 0))
	{
		fVar3 = get_entity_heading(iParam0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar4, &vVar7);
	if (iParam1)
	{
		fVar10 = vVar7.z + 0.18f;
	}
	else
	{
		fVar10 = vVar4.z + 0.18f;
	}
	vVar0 = {_get_object_offset_from_coords(vVar0, fVar3, 0f, 0f, fVar10)};
	return vVar0;
}

int func_95(int iParam0)
{
	return iParam0;
}

void func_96(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = {vParam0};
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_99(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_98();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_97();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_97()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_98()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_99(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = 1f - fVar0 - 5f / 20f - 5f;
	fVar2 = fVar1 * 0.402f - 0.212f;
	fVar3 = fVar1 * 0.476f - 0.286f;
	*uParam3 = fVar2 + 0.212f;
	*uParam4 = fVar3 + 0.286f;
	return fVar1;
}

auto func_100(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_101(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_101(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_136(player_id()) || func_135(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_134(sParam2))
	{
	}
	if (func_133())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_131(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_130(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_127(0, &iVar1);
					break;
				
				case 3:
					func_127(1, &iVar1);
					break;
				
				case 1:
					func_123(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_121(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_112(func_120(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_121(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_106(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_102(func_104(player_id()) + iVar1);
			}
			else
			{
				func_102(func_104(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_102(int iParam0)
{
	if (func_133())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_103(joaat("mpply_globalxp"), iParam0);
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_5(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_105(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_105(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_111(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_109(func_110(&Var0));
			if (iVar13 == 0)
			{
				func_108(&Global_1347641, iParam0);
				func_107(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_108(&Global_1347642, iParam0);
				func_107(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_108(&Global_1347643, iParam0);
				func_107(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_108(&Global_1347644, iParam0);
				func_107(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_108(&Global_1347645, iParam0);
				func_107(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_108(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_109(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_110(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

struct<13> func_111(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	if (func_133())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_26(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_26(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_119(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_117(iParam0, 1);
		}
		func_116(632, iParam0, -1, 1);
		func_25(633, func_117(iParam0, 1), -1, 1);
		Global_1347756[func_26(-1)] = iParam0;
		func_113(7, 0);
	}
}

void func_113(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_115(iParam0, iParam1))
	{
		uVar0 = func_114();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_115(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_26(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_26(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_26(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_26(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_26(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_26(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_26(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_26(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_26(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_26(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_26(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_26(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_26(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_26(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_26(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_26(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_26(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_26(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_26(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_26(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_26(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_26(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_26(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_26(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_26(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_26(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_26(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_26(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_26(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_26(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_117(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_118(iParam0, 0);
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = true;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_119(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return is_bit_set(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_120(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_26(-1)];
			}
			else if (func_119(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_26(-1)];
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0);
	iVar0 += iParam1;
	if (!func_122(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_116(iParam0, iVar0, iParam2, 1);
	}
}

bool func_122(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_126(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_125(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_124(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_124(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_124(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_125(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_111(iParam0)};
		Global_2459453 = {func_111(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, false);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, true);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 2);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 4);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 5);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 6);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 8);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 9);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 10);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 12);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 13);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 14);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_5(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_125(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_5(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_128(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_125(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_124(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_124(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_128(int iParam0, int iParam1)
{
	return vdist(func_129(iParam0), func_129(iParam1));
	return 0f;
}

Vector3 func_129(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

auto func_130(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_124(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_131(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_120(player_id()))
		{
			iParam0 = -func_120(player_id());
		}
	}
	if (func_132(8000, 0, 0) > 0)
	{
		if (func_132(8000, 0, 0) < iParam0 + func_120(player_id()))
		{
			iParam0 = func_132(8000, 0, 0) - func_120(player_id());
		}
	}
	return iParam0;
}

auto func_132(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_133()
{
	return true;
}

bool func_134(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_135(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_136(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_137()
{
	Global_2444573 = 1;
}

void func_138(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_141(7))
	{
		return;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_139(iParam0);
	iVar2 = absi(get_time_difference(Global_2460486.f_4660.f_67, NETWORK::GET_NETWORK_TIME()));
	if (iVar2 > Global_262145.f_10334)
	{
		iVar2 = Global_262145.f_10334;
	}
	iVar3 = floor(to_float(iVar2) / 1000f * 60f);
	if (iVar3 < 1)
	{
		iVar3 = true;
	}
	*uParam1 = iVar3 * iVar1;
	*uParam2 = iVar3 * iVar0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10425;
		
		case 152:
			return Global_262145.f_10460;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10448;
		
		case 157:
			return Global_262145.f_10415;
		
		case 159:
			return Global_262145.f_10398;
		
		case 164:
			return Global_262145.f_10438;
		
		case 160:
			return Global_262145.f_10488;
		
		case 162:
			return Global_262145.f_10508;
		
		case 163:
			return Global_262145.f_10473;
		
		case 154:
			return Global_262145.f_10543;
		
		case 155:
			return Global_262145.f_10533;
		
		case 153:
			return Global_262145.f_10497;
		
		case 170:
			return Global_262145.f_12375;
		
		case 171:
			return Global_262145.f_12434;
		
		case 172:
			return Global_262145.f_12452;
		
		case 173:
			return Global_262145.f_12393;
		
		case 166:
			return Global_262145.f_12408;
		
		case 167:
			return Global_262145.f_12499;
		
		case 169:
			return Global_262145.f_12471;
		
		case 168:
			return Global_262145.f_12464;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10424;
		
		case 152:
			return Global_262145.f_10459;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10447;
		
		case 157:
			return Global_262145.f_10414;
		
		case 159:
			return Global_262145.f_10397;
		
		case 164:
			return Global_262145.f_10437;
		
		case 160:
			return Global_262145.f_10487;
		
		case 162:
			return Global_262145.f_10507;
		
		case 163:
			return Global_262145.f_10472;
		
		case 154:
			return Global_262145.f_10542;
		
		case 155:
			return Global_262145.f_10532;
		
		case 153:
			return Global_262145.f_10496;
		
		case 170:
			return Global_262145.f_12374;
		
		case 171:
			return Global_262145.f_12433;
		
		case 172:
			return Global_262145.f_12451;
		
		case 173:
			return Global_262145.f_12392;
		
		case 166:
			return Global_262145.f_12407;
		
		default:
	}
	return 0;
}

int func_141(int iParam0)
{
	return is_bit_set(Global_2460486.f_4660.f_18, iParam0);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_176())
		{
			if (func_86(0))
			{
				if (network_is_player_active(func_88()))
				{
					if (func_175() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_175();
						*iParam0 -= iVar0;
					}
					func_173(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_145("GB_BCUT_TICK1", func_88(), iVar0, 0, 0, 1, 1);
					}
					func_197(20);
					func_143(func_88(), iVar0, 1);
				}
			}
		}
	}
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_144(iParam0));
	}
}

auto func_144(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam5)
	{
		if (!iParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(func_154(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_152(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_146(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_146(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_151() || !network_is_activity_session()) || !func_149(player_id(), 0))
	{
		return;
	}
	iVar0 = func_147(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_148(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_150(-1, 0) == 8;
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

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_151()
{
	return is_dlc_present(-1762644250);
}

auto func_152(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_153(&cVar0);
}

auto func_153(char[4] cParam0)
{
	return cParam0;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_171(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_171(player_id()) || (func_170() && func_169()))
	{
		iVar0 = func_168();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_5(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_167(iParam1, iParam0, 0);
							}
							else
							{
								return func_161(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_161(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_167(iParam1, iParam0, 0);
				}
				else
				{
					return func_155(0, -1, 0);
				}
			}
			else
			{
				return func_155(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_167(iParam1, iParam0, 0);
		}
		else
		{
			return func_161(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_161(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_155(int iParam0, int iParam1, int iParam2)
{
	return func_156(player_id(), iParam0, iParam1, iParam2);
}

int func_156(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_126(iVar0, iParam2, 0) && !is_bit_set(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_160(1);
				}
				else
				{
					return func_160(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (is_bit_set(Global_1617379.f_4, 20))
			{
				return func_157(iVar0, iParam2, 1);
			}
			else
			{
				return func_157(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_160(1);
	}
	return func_160(0);
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_159(iParam0, iParam1);
	if (func_158(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_158(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_126(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_160(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_166(iParam1, iParam0, iVar0, 0) && !is_bit_set(Global_1617379.f_15, 18)) || ((func_126(get_player_team(iParam1), get_player_team(iParam0), 0) && is_bit_set(Global_1617379.f_15, 23)) && !is_bit_set(Global_1617379.f_15, 18)))
			{
				return func_160(1);
			}
			else if (is_bit_set(Global_1617379.f_15, 26))
			{
				return func_165(1);
			}
			else
			{
				return func_156(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_160(1);
			}
			else
			{
				return func_156(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_164(iParam0);
	if (!iVar3 == -1)
	{
		return func_162(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_163(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_164(int iParam0)
{
	if (!iParam0 == func_11())
	{
		if (func_177(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_165(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

int func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (is_bit_set(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_156(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_168()
{
	return Global_2359301.f_2;
}

int func_169()
{
	return is_bit_set(Global_2359301, 4);
}

int func_170()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_171(int iParam0)
{
	if (func_149(iParam0, 0))
	{
		return true;
	}
	if (func_172())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_172()
{
	return is_bit_set(Global_2359301, 3);
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_174(1);
	}
	else
	{
		iVar1 = func_174(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_174(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_175()
{
	return Global_262145.f_10328;
}

int func_176()
{
	return func_208(player_id());
}

int func_177(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_208(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_11();
}

void func_178()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_27()];
	iVar0++;
	Global_2493048[func_27()] = iVar0;
	func_116(3245, iVar0, -1, 1);
}

void func_179()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_27()];
	iVar1 = Global_2493058[func_27()];
	iVar0++;
	iVar1++;
	Global_2493043[func_27()] = iVar0;
	Global_2493058[func_27()] = iVar1;
	Global_1587523[player_id() /*444*/].f_250.f_85 = iVar1;
	func_116(3243, iVar0, -1, 1);
	func_116(3244, iVar1, -1, 1);
}

void func_180()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_27()];
	iVar0++;
	func_116(3247, iVar0, -1, 1);
}

void func_181(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_183(iParam0);
	func_182(iParam0, uVar0, iParam1);
}

void func_182(int iParam0, auto uParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 444;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_11())
	{
		if (network_is_player_active(iParam0))
		{
			trigger_script_event(1, &Var0, 4, func_144(iParam0));
		}
	}
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188();
	iVar0 = func_186(iParam0, iVar0);
	iVar1 = Global_1610316[func_88() /*174*/].f_10.f_152;
	iVar0 += iVar1 * Global_262145.f_12335;
	if (iVar0 < func_185())
	{
		iVar0 = func_185();
	}
	if (iVar0 > func_184())
	{
		iVar0 = func_184();
	}
	return iVar0;
}

auto func_184()
{
	return Global_262145.f_12336;
}

auto func_185()
{
	return Global_262145.f_13498;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_212(iParam0) * func_187();
	iParam1 -= iVar0;
	return iParam1;
}

auto func_187()
{
	return Global_262145.f_13497;
}

auto func_188()
{
	return Global_262145.f_10320;
}

bool func_189(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		if (iParam0 != player_id())
		{
			if (func_378(iParam0, player_id(), 0))
			{
				if (!func_220(iParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_190()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_27()];
	iVar0++;
	func_116(3246, iVar0, -1, 1);
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_27()];
	iVar0 += iParam0;
	func_116(3248, iVar0, -1, 1);
	if (func_194(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_193(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_192(7666, iVar2, -1, 1);
	}
}

auto func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = false;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13641;
			break;
		
		case 2:
			return Global_262145.f_13642;
			break;
		
		case 3:
			return Global_262145.f_13643;
			break;
		
		case 4:
			return Global_262145.f_13644;
			break;
		
		case 5:
			return Global_262145.f_13645;
			break;
		
		case 6:
			return Global_262145.f_13646;
			break;
		
		case 7:
			return Global_262145.f_13647;
			break;
		
		case 8:
			return Global_262145.f_13648;
			break;
		
		case 9:
			return Global_262145.f_13649;
			break;
		
		case 10:
			return Global_262145.f_13650;
			break;
		
		case 11:
			return Global_262145.f_13651;
			break;
		
		case 12:
			return Global_262145.f_13652;
			break;
		
		case 13:
			return Global_262145.f_13653;
			break;
		
		case 14:
			return Global_262145.f_13654;
			break;
		
		case 15:
			return Global_262145.f_13655;
			break;
		
		case 16:
			return Global_262145.f_13656;
			break;
		
		case 17:
			return Global_262145.f_13657;
			break;
		
		case 18:
			return Global_262145.f_13658;
			break;
		
		case 19:
			return Global_262145.f_13659;
			break;
		
		case 20:
			return Global_262145.f_13660;
			break;
		
		case 21:
			return Global_262145.f_13661;
			break;
		
		case 22:
			return Global_262145.f_13662;
			break;
		
		case 23:
			return Global_262145.f_13663;
			break;
		
		case 24:
			return Global_262145.f_13664;
			break;
	}
	return 0;
}

int func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_196(iParam0, iParam1);
	iVar2 = func_195(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_198(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)))
		{
			iVar2 = int_to_playerindex(iVar0);
			if (!func_149(iVar2, 0) && !func_378(iVar2, player_id(), 1))
			{
				iVar1++;
			}
			else if (func_149(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

auto func_199(int iParam0)
{
	if (iParam0 >= Global_262145.f_12708)
	{
		return Global_262145.f_12729;
	}
	else if (iParam0 >= Global_262145.f_12707)
	{
		return Global_262145.f_12728;
	}
	else if (iParam0 >= Global_262145.f_12706)
	{
		return Global_262145.f_12727;
	}
	else if (iParam0 >= Global_262145.f_12705)
	{
		return Global_262145.f_12726;
	}
	else if (iParam0 >= Global_262145.f_12704)
	{
		return Global_262145.f_12725;
	}
	else if (iParam0 >= Global_262145.f_12703)
	{
		return Global_262145.f_12724;
	}
	else if (iParam0 >= Global_262145.f_12702)
	{
		return Global_262145.f_12723;
	}
	else if (iParam0 >= Global_262145.f_12701)
	{
		return Global_262145.f_12722;
	}
	else if (iParam0 >= Global_262145.f_12700)
	{
		return Global_262145.f_12721;
	}
	else if (iParam0 >= Global_262145.f_12699)
	{
		return Global_262145.f_12720;
	}
	else if (iParam0 >= Global_262145.f_12698)
	{
		return Global_262145.f_12719;
	}
	else if (iParam0 >= Global_262145.f_12697)
	{
		return Global_262145.f_12718;
	}
	else if (iParam0 >= Global_262145.f_12696)
	{
		return Global_262145.f_12717;
	}
	else if (iParam0 >= Global_262145.f_12695)
	{
		return Global_262145.f_12716;
	}
	else if (iParam0 >= Global_262145.f_12694)
	{
		return Global_262145.f_12715;
	}
	else if (iParam0 >= Global_262145.f_12693)
	{
		return Global_262145.f_12714;
	}
	else if (iParam0 >= Global_262145.f_12692)
	{
		return Global_262145.f_12713;
	}
	else if (iParam0 >= Global_262145.f_12691)
	{
		return Global_262145.f_12712;
	}
	else if (iParam0 >= Global_262145.f_12690)
	{
		return Global_262145.f_12711;
	}
	else if (iParam0 >= Global_262145.f_12689)
	{
		return Global_262145.f_12710;
	}
	return Global_262145.f_12709;
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_207(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_206(iParam0, iVar3))
			{
				iVar0 += func_205(iVar3);
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_201(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= func_201(iParam0) - iVar1)
			{
				iVar0 += func_205(get_random_int_in_range(true, 6));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (func_204(iParam0))
	{
		iVar0 = func_202(func_203(iParam0));
		return func_28(iVar0, -1, 0);
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (func_204(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_204(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_205(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_12908;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_12906;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_12910;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_12904;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_12902;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_12912;
	}
	return 0;
}

bool func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_204(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1728679[iVar0] == iParam1 && Global_1728686[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_207(int iParam0)
{
	int iVar0;
	
	if (func_204(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_208(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_11())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

void func_209()
{
	if (func_176())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_210()
{
	if (func_176())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_211()
{
	if (func_176())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70--;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

auto func_212(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10445) * Global_262145.f_10450);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10395) * Global_262145.f_10400);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10422) * Global_262145.f_10426);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10435) * Global_262145.f_10439);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10457) * Global_262145.f_10462);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10619) * Global_262145.f_10620);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10625) * Global_262145.f_10626);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10623) * Global_262145.f_10624);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10617) * Global_262145.f_10618);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10621) * Global_262145.f_10622);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10615) * Global_262145.f_10616);
		
		case 170:
			return false;
		
		case 171:
			return Global_262145.f_12431;
		
		case 172:
			return Global_262145.f_12447;
		
		case 173:
			return Global_262145.f_12390;
		
		case 166:
			return false;
		
		default:
	}
	return false;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10446) * Global_262145.f_10451);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10396) * Global_262145.f_10401);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10423) * Global_262145.f_10427);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10436) * Global_262145.f_10440);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10458) * Global_262145.f_10463);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10495) * Global_262145.f_10498);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10541) * Global_262145.f_10544);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10531) * Global_262145.f_10534);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10486) * Global_262145.f_10489);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10506) * Global_262145.f_10511);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10471) * Global_262145.f_10474);
		
		case 170:
			return Global_262145.f_12373;
		
		case 171:
			return Global_262145.f_12432;
		
		case 172:
			return Global_262145.f_12448;
		
		case 173:
			return Global_262145.f_12391;
		
		case 166:
			return false;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return false;
}

void func_215(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_216(iParam0))
	{
		if (!func_176())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10339;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10338;
	*uParam2 = Global_262145.f_10337;
	if (func_177(player_id(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_378(player_id(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_216(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

void func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (decor_exist_on(get_player_ped_script_index(iParam0), "MPBitset"))
	{
		iVar0 = decor_get_int(get_player_ped_script_index(iParam0), "MPBitset");
	}
	clear_bit(&iVar0, iParam1);
	decor_set_int(get_player_ped_script_index(iParam0), "MPBitset", iVar0);
}

void func_218()
{
	if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 7))
	{
		if (is_bit_set(Local_129.f_2, false))
		{
			if (func_378(player_id(), func_16(), 1))
			{
				func_219(1, 7);
			}
			else
			{
				func_219(0, 7);
			}
		}
		else if (is_bit_set(Local_129.f_2, true))
		{
			func_219(0, 8);
		}
		else if (is_bit_set(Local_129.f_2, 2))
		{
			func_219(0, 2);
		}
		else if (is_bit_set(Local_129.f_2, 3))
		{
			if (!func_388())
			{
				if (player_id() == func_6())
				{
					if (func_378(player_id(), func_16(), 0))
					{
						func_219(0, 2);
					}
					else
					{
						func_219(1, 1);
					}
				}
				else
				{
					func_219(0, 2);
				}
			}
			else
			{
				func_219(0, 2);
			}
		}
		else if (is_bit_set(Local_129.f_2, 4))
		{
			func_219(0, 7);
		}
		else
		{
			func_219(0, 0);
		}
		clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 7);
	}
}

void func_219(int iParam0, int iParam1)
{
	Global_1727400.f_6 = _get_posix_time();
	if (iParam0)
	{
		Global_1727400.f_7 = 1;
	}
	else
	{
		Global_1727400.f_7 = 0;
	}
	Global_1727400.f_8 = iParam1;
	if (Global_1727400.f_4 == 0)
	{
		if ((func_50(player_id()) || func_49(player_id())) || func_61(player_id()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

int func_220(int iParam0, int iParam1)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_221(auto uParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int[] iVar1 = new int[32];
	int iVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	Vector3 fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_332(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_330() || iParam2 == 24)
	{
		if (func_283(iParam1, iParam2, uParam3, Global_1573685, 0, func_328()))
		{
			func_282(1);
			if ((!func_280() && !func_278()) || is_bit_set(Global_2460486.f_4426, true))
			{
				if (func_277())
				{
					func_275();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_274(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_273(iParam1);
							if (is_bit_set(*uParam3.f_33, 7))
							{
								clear_bit(uParam3.f_33, 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = false;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = false;
							while (iVar52 < 32)
							{
								if (func_5(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_149(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_12(iVar35))
										{
											iVar44 = iVar35;
											if (func_208(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_272(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_271(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_269())
							{
								if (func_5(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_11();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_268(iVar35) && func_263(iVar35, iParam2)) && func_5(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_258(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_111(iVar35)};
								iVar37 = func_252(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = get_pedheadshot_txd_string(iVar37);
								}
								Global_1573685++;
								if (*(uParam0[iVar52 /*47*/]).f_22 != -1f)
								{
									fVar45 = *(uParam0[iVar52 /*47*/]).f_22;
								}
								if (*(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									iVar46 = *(uParam0[iVar52 /*47*/]).f_30;
								}
								if (*(uParam0[iVar52 /*47*/]).f_46 != -1)
								{
									iVar47 = *(uParam0[iVar52 /*47*/]).f_46;
								}
								iVar43 = *(uParam0[iVar52 /*47*/]).f_9;
								if ((*(uParam0[iVar52 /*47*/]).f_9 != -1 || *(uParam0[iVar52 /*47*/]).f_22 != -1f) || *(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									if (!func_269())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_247(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_246(iParam5, 1, 0, 0), 16);
								}
								if (iParam6)
								{
									iVar48 = *(uParam0[iVar52 /*47*/]).f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_244(iVar35, 0);
								if (iVar34)
								{
									if (func_177(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = iVar0 + iVar56;
										iVar56++;
									}
								}
								*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
								if (func_243(iParam5))
								{
									func_242(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_242(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								GAMEPLAY::GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_5(iVar35, 0, 1) && !is_bit_set(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_11();
							}
							if (func_268(iVar35))
							{
								if (func_5(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_258(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_111(iVar35)};
									iVar37 = func_252(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_244(iVar35, 1);
									if (iVar34)
									{
										if (func_177(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = iVar0 + iVar56;
											iVar56++;
										}
									}
									*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
									func_234(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (is_bit_set(*uParam3.f_33, 11))
						{
							func_231(uParam3, iParam1);
						}
						func_8(uParam3.f_21);
						func_230();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!is_bit_set(*uParam3.f_33, 7))
						{
							func_229(uParam3, iParam1);
							func_228(iParam1, 0, 1);
							GAMEPLAY::GAMEPLAY::SET_BIT(uParam3.f_33, 7);
						}
						func_229(uParam3, iParam1);
						if (!is_bit_set(*uParam3.f_33, 11))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(uParam3.f_33, 11);
						}
						if (func_224(uParam3))
						{
							Global_1573833 = 1;
						}
						func_222(uParam3);
						if (Global_1573833 == 1)
						{
							*uParam3.f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							*uParam3.f_27 = 0;
						}
					}
					if (has_scaleform_movie_loaded(*iParam1))
					{
						_set_2d_layer(7);
						draw_scaleform_movie(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_set_2d_layer(4);
					}
				}
			}
		}
		else
		{
			*uParam3.f_27 = 0;
			func_230();
			func_274(0);
			if (is_bit_set(*uParam3.f_33, 7))
			{
				clear_bit(uParam3.f_33, 7);
			}
			if (is_bit_set(*uParam3.f_33, 10))
			{
				clear_bit(uParam3.f_33, 10);
			}
		}
	}
	_0xE3A3DB414A373DAB();
}

void func_222(auto uParam0)
{
	if (!func_21(uParam0.f_21))
	{
		func_20(uParam0.f_21, 0, 0);
	}
	else if (func_19(uParam0.f_21, 250, 0))
	{
		func_8(uParam0.f_21);
		func_223(0);
	}
}

void func_223(int iParam0)
{
	if (iParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_224(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_11() && func_5(iVar15, 0, 1))
	{
		Var2 = {func_111(iVar15)};
		iVar1 = func_227(uParam0, *uParam0.f_37);
		if (func_226(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_225(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_225(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_225(uParam0, uVar0, 0);
					}
					break;
				}
			}
	}
	*uParam0.f_37++;
	if (*uParam0.f_37 >= 32)
	{
		*uParam0.f_37 = 0;
	}
	return iVar16;
}

void func_225(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_226(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_227(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	if (_push_scaleform_movie_function(*iParam0, "COLLAPSE"))
	{
		_push_scaleform_movie_function_parameter_bool(iParam1);
		_pop_scaleform_movie_function_void();
	}
	if (iParam2 == 1)
	{
		if (_push_scaleform_movie_function(*iParam0, "DISPLAY_VIEW"))
		{
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_229(auto uParam0, int iParam1)
{
	if (!is_bit_set(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_33, 10);
	}
}

void func_230()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_231(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_233(*uParam0.f_38[iVar0 /*2*/], 0);
					func_232(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_232(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (_push_scaleform_movie_function(*uParam0, "SET_ICON"))
		{
			_push_scaleform_movie_function_parameter_int(iParam1);
			_push_scaleform_movie_function_parameter_int(iParam2);
			if (iParam2 == 65)
			{
				_push_scaleform_movie_function_parameter_int(iParam3);
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (iParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_234(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_241() && iParam3 < func_240())
	{
		iParam3 %= 16;
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (_push_scaleform_movie_function(*iParam1, sVar1))
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
			if (is_bit_set(*uParam2.f_33, 8) || *uParam2.f_108 == 6)
			{
				func_239("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_239(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_239("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_239("");
			if (*uParam2.f_108 == 6)
			{
				func_239("");
			}
			else
			{
				func_239(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_238(uParam2))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_236(uParam2))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_235(uParam2))
			{
				func_237("DPAD_CREW");
			}
			else
			{
				func_237("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_235(auto uParam0)
{
	return is_bit_set(*uParam0.f_33, 6);
}

int func_236(auto uParam0)
{
	return is_bit_set(*uParam0.f_33, 5);
}

void func_237(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_238(auto uParam0)
{
	if (func_236(uParam0) && func_235(uParam0))
	{
		return true;
	}
	return false;
}

void func_239(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_240()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_241()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_242(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, Vector3 fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_241() && iParam2 < func_240())
	{
		iParam2 %= 16;
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (iParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (has_scaleform_movie_loaded(*iParam0))
		{
			if (_push_scaleform_movie_function(*iParam0, sVar1))
			{
				_push_scaleform_movie_function_parameter_int(iParam2);
				if (is_bit_set(*uParam1.f_33, 8) || *uParam1.f_108 == 6)
				{
					func_239("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_237(sParam15);
				}
				else
				{
					func_239(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_239("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(65);
				}
				if (iParam11 == 1)
				{
					_push_scaleform_movie_function_parameter_int(iVar0);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(-1);
				}
				if (func_269())
				{
					func_239("");
				}
				else if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 5 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if ((*uParam1.f_108 == 7 && !is_string_null_or_empty(sParam15)) && !is_string_null_or_empty(sParam16))
				{
					_begin_text_component("FM_AE_TWO_INT");
					_add_text_component_item_string(sParam15);
					_add_text_component_item_string(sParam16);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 8 && !is_string_null_or_empty(uParam1.f_104))
				{
					_begin_text_component("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						add_text_component_float(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						add_text_component_integer(iParam9);
					}
					_add_text_component_item_string(uParam1.f_104);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 9)
				{
					_begin_text_component("FM_AE_CASH");
					_add_text_component_substring_cash(iParam9, 1);
					_end_text_component();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !is_string_null_or_empty(uParam1.f_104))
					{
						func_237(uParam1.f_104);
					}
					else
					{
						func_239("");
					}
				}
				else if (iParam13 != -1)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam13, 6);
					_end_text_component();
				}
				else if (fParam12 != -1f)
				{
					_begin_text_component("NUMBER");
					add_text_component_float(fParam12, 1);
					_end_text_component();
				}
				else if (iParam9 != -1)
				{
					_push_scaleform_movie_function_parameter_int(iParam9);
				}
				else
				{
					func_239("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_239("");
				}
				else
				{
					func_239(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_239("");
					func_239("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_238(uParam1))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_236(uParam1))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_235(uParam1))
				{
					func_237("DPAD_CREW");
				}
				else
				{
					func_237("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_243(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_63(iParam0)) && !func_61(iParam0))
	{
		iVar0 = func_245();
	}
	iVar1 = func_164(iParam0);
	if (!iVar1 == -1)
	{
		return func_162(iVar1);
	}
	return iVar0;
}

int func_245()
{
	return 21;
}

char* func_246(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_M_LB";
				}
				else if (iParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (iParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (iParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (iParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (iParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (iParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (iParam1 || iParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

bool func_247(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_251(iParam3))
	{
		*fParam1 = func_248(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_243(iParam3))
	{
		*fParam1 = func_248(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_248(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_250(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_249(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_249(Vector3 fParam0)
{
	return fParam0 / 1.609344f;
}

float func_250(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		func_253(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_253(int iParam0, int iParam1)
{
	if (!func_5(iParam0, 0, 1))
	{
		return;
	}
	if (func_255(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_254(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (!func_5(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_256(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_256(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_257(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_257(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_11();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_258(int iParam0)
{
	struct<4> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Global_2459440 = {func_111(iParam0)};
		if (is_durango_version())
		{
			if (func_226(Global_2459440))
			{
				if (!_0xB57A49545BA53CE7(&Global_2459440))
				{
					return Var0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_262(&Global_2459440))
		{
			Global_2459370 = {func_260(iParam0)};
			func_259(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_259(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_260(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_261(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_111(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_261(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_262(auto uParam0)
{
	if (is_player_online())
	{
		if (_network_player_is_in_clan() && network_clan_player_is_active(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_263(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_62(iParam0) || func_267(iParam0)) || func_266(iParam0))
		{
			return false;
		}
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	if ((!func_264(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_12(iParam0))
	{
		return false;
	}
	return true;
}

bool func_264(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		if (func_5(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_265(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_266(int iParam0)
{
	if (func_62(iParam0))
	{
		return true;
	}
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 10) || is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_268(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return false;
	}
	if (func_149(iParam0, 0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (is_bit_set(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_269()
{
	switch (func_270(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_61(player_id()))
	{
		switch (func_46(player_id()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
				break;
			}
	}
	return false;
}

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_271(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_36(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_36(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_5(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_149(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_12(iVar1))
				{
					if (func_378(iVar1, iParam1, 0))
					{
						*iParam0[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_273(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_274(int iParam0)
{
	if (iParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_275()
{
	if (is_bit_set(Global_2460486.f_4426, true))
	{
		if (func_64())
		{
			func_276();
		}
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

bool func_277()
{
	if (is_bit_set(Global_2460486.f_4426, false) && func_64())
	{
		return true;
	}
	if (is_bit_set(Global_2460486.f_4426, true) && func_64())
	{
		return true;
	}
	return false;
}

bool func_278()
{
	if (func_64())
	{
		if (func_279(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_279(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return true;
		
		default:
	}
	return false;
}

bool func_280()
{
	if (func_64())
	{
		if (func_281(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_281(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return true;
		
		default:
	}
	return false;
}

void func_282(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_283(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_327(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_326();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_325())
		{
			if (func_324() > 0 && Global_1573687)
			{
				_0x25F87B30C382FCA7();
				_0x55598D21339CB998(fVar7);
				hide_hud_component_this_frame(18);
				if (is_help_message_being_displayed())
				{
					hide_help_text_this_frame();
				}
				hide_hud_component_this_frame(10);
			}
		}
	}
	if (!iParam5)
	{
		if (!func_309())
		{
			func_308(iParam0, uParam2, 1);
			return false;
		}
	}
	if (is_bit_set(Global_2460486.f_4429, 26))
	{
		func_308(iParam0, uParam2, 1);
		return false;
	}
	if (!func_21(uParam2.f_19))
	{
		if (func_324() == 1)
		{
			func_307(iVar6, iParam0, 0);
			func_20(uParam2.f_19, 0, 0);
			func_308(iParam0, uParam2, 0);
		}
	}
	if (func_21(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_19(uParam2.f_19, 10000, 0) || (func_324() == 0 && !iParam5))
		{
			func_308(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_306();
				if (iParam1 == 23 || iParam1 == 24)
				{
					_0x25F87B30C382FCA7();
				}
				hide_hud_component_this_frame(18);
			}
			if (is_bit_set(*uParam2.f_33, false))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				_0x55598D21339CB998(fVar7);
				if (iVar5)
				{
					if (*uParam2.f_34 != Global_1573686)
					{
						clear_bit(uParam2.f_33, false);
					}
				}
				return true;
			}
			else
			{
				if (iVar5 == 0)
				{
					func_306();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_307(iVar6, iParam0, 0))
				{
					func_273(iParam0);
					sVar4 = func_304(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_301(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_294(iParam0, func_298(uParam2), func_295(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_291(iParam0, func_293(), func_292(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_301(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_289(iParam1)};
						iVar8 = func_284(iParam1);
						func_301(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_288())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_287(player_id()))
			{
				iVar0 = 20;
			}
			if (func_286(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_285(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_285(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_286(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_287(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_288()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_289(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_290(player_id()) || func_285(player_id()))
	{
		return cVar0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&cVar0, "LBD_DIF_", 16);
			StringIntConCat(&cVar0, Global_1617379.f_23, 16);
			break;
	}
	return cVar0;
}

int func_290(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_291(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_237(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_237("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_292()
{
	switch (func_46(player_id()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_293()
{
	switch (func_46(player_id()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_294(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_237(sParam1);
		}
		else if (func_270(player_id()) == 133)
		{
			_begin_text_component("FM_AE_BRACKT_C");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_237("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_295(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_270(player_id());
	if (func_297())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_296())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_296()
{
	if (func_270(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

auto func_297()
{
	return Global_1587522;
}

char* func_298(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_270(player_id());
	if (func_297())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_300() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_300() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_296())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_299() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

auto func_299()
{
	return Global_2460486.f_4650;
}

int func_300()
{
	if (func_270(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_301(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_239(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_237(sParam1);
		}
		if (func_325() && iParam6)
		{
			if (func_303())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = true;
				iVar1 = 2;
			}
			_begin_text_component("LBD_DPD_CNT");
			add_text_component_integer(iVar0);
			add_text_component_integer(iVar1);
			_end_text_component();
		}
		else
		{
			func_237(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_302(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_302(int iParam0)
{
	if (func_287(iParam0) || func_286(iParam0))
	{
		return true;
	}
	return false;
}

auto func_303()
{
	return Global_1573687;
}

char* func_304(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_305();
		return uVar0;
	}
	else if (iParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!is_string_null_or_empty(sParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_305()
{
	if (_0xFBCFA2EA2E206890())
	{
		return "HUD_LBD_FMF";
	}
	if (_0x74732C6CA90DA2B4())
	{
		return "HUD_LBD_FMC";
	}
	if (_0xF3929C2379B60CCE())
	{
		return "HUD_LBD_FMS";
	}
	if (_0xCEF70AA5B3F89BA1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_306()
{
	Global_36611 = 1;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (iParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return has_scaleform_movie_loaded(*iParam1);
}

void func_308(int iParam0, auto uParam1, int iParam2)
{
	clear_bit(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_230();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_21(uParam1.f_19))
		{
			func_8(uParam1.f_19);
		}
	}
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
	}
	if (is_bit_set(*uParam1.f_33, false))
	{
		clear_bit(uParam1.f_33, false);
	}
	_0x55598D21339CB998(0f);
}

bool func_309()
{
	if (func_323())
	{
		return false;
	}
	if (func_322())
	{
		return false;
	}
	if (!func_320())
	{
		return false;
	}
	if (!func_318())
	{
		return false;
	}
	if (func_317(8, -1))
	{
		return false;
	}
	if (func_324() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_316())
	{
		return false;
	}
	else if (!func_313(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_312(1) || func_310(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_171(player_id()))
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (Global_1715402)
	{
		return false;
	}
	if (func_141(0))
	{
		return false;
	}
	if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_311(PLAYER::PLAYER_PED_ID()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return false;
	}
	if (is_control_pressed(0, 19) || (!iParam0 && is_disabled_control_pressed(0, 19)))
	{
		return true;
	}
	if (is_pc_version())
	{
		if (((is_control_pressed(0, 166) || is_control_pressed(0, 167)) || is_control_pressed(0, 168)) || is_control_pressed(0, 169))
		{
			return true;
		}
		if (!iParam0)
		{
			if (((is_disabled_control_pressed(0, 166) || is_disabled_control_pressed(0, 167)) || is_disabled_control_pressed(0, 168)) || is_disabled_control_pressed(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_311(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			get_current_ped_weapon(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_312(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_313(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_314(iParam0))
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

int func_314(int iParam0)
{
	return func_315(iParam0);
}

int func_315(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_316()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_317(int iParam0, int iParam1)
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
	return is_bit_set(Global_1338622.f_949, iParam0);
}

bool func_318()
{
	if (func_319() == 0)
	{
		return true;
	}
	return false;
}

auto func_319()
{
	return Global_1312466.f_18;
}

bool func_320()
{
	if (func_321())
	{
		return true;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (is_screen_fading_out() || is_screen_fading_in())
	{
		return false;
	}
	if (is_frontend_fading())
	{
		return false;
	}
	return true;
}

auto func_321()
{
	return Global_1312438;
}

int func_322()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_323()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

auto func_324()
{
	return Global_1338622.f_68;
}

bool func_325()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_326()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_327(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return true;
			break;
	}
	return false;
}

int func_328()
{
	if (func_329(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_329(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_149(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

bool func_330()
{
	if (func_328())
	{
		return true;
	}
	if (func_266(player_id()))
	{
		return false;
	}
	if (func_297())
	{
		return true;
	}
	if (func_63(player_id()))
	{
		switch (func_270(player_id()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
				break;
			
			case 140:
				if (!func_331(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_331(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_331(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_332(int iParam0)
{
	if ((iParam0 == 24 && func_63(player_id())) && !func_61(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_47(player_id(), 0) && func_61(player_id()))
		{
			return true;
		}
		if (func_48(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

void func_333()
{
	if (func_88() != func_11())
	{
		Global_1727400 = func_336(func_88());
		Global_1727400.f_1 = func_335(func_88());
	}
	Global_1727400.f_5 = _get_posix_time();
	Global_1727400.f_13 = func_334();
	Global_1727400.f_15 = 0;
	if (func_86(1))
	{
		if (func_29() == func_88())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_334()
{
	int iVar0;
	
	iVar0 = func_88();
	if (iVar0 != func_11())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

auto func_335(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[1];
}

auto func_336(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[0];
}

void func_337()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	
	if (func_338())
	{
		return;
	}
	if (func_378(player_id(), func_16(), 1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(get_player_ped(func_16())))
	{
		return;
	}
	vVar0 = {get_entity_coords(get_player_ped(func_16()), 0)};
	vVar3 = {get_entity_coords(get_player_ped(player_id()), 0)};
	fVar6 = vdist(vVar0, vVar3);
	if (fVar6 < 25f)
	{
		draw_marker(2, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_110[0], uLocal_110[1], uLocal_110[2], 100, 1, 1, 2, 0, 0, 0, false);
	}
}

bool func_338()
{
	if (((func_352(164) || func_53()) || !func_339(1)) || iLocal_96 == 0)
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0)
{
	if (func_56(player_id(), 21))
	{
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		return false;
	}
	if (iParam0)
	{
		if (network_is_in_mp_cutscene())
		{
			return false;
		}
	}
	if (func_351(player_id()))
	{
		return false;
	}
	if (func_350())
	{
		return false;
	}
	if (func_322())
	{
		return false;
	}
	if (func_349())
	{
		return false;
	}
	if (func_316())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_314(player_id()))
	{
		return false;
	}
	if (!func_318())
	{
		return false;
	}
	if (func_56(player_id(), 0) || func_56(player_id(), 3))
	{
		return false;
	}
	if ((func_56(player_id(), 12) || func_56(player_id(), 14)) || func_56(player_id(), 13))
	{
		return false;
	}
	if (func_348(player_id(), 0, 0))
	{
		if ((!func_347(Global_1587523[player_id() /*444*/].f_250.f_9) && !func_345(player_id())) || (func_46(player_id()) != 167 && func_46(player_id()) != 168))
		{
			return false;
		}
	}
	if (func_344())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_343(player_id()))
	{
		return false;
	}
	if (func_342())
	{
		return false;
	}
	if (func_341(player_id()))
	{
		return false;
	}
	if (func_340(player_id()))
	{
		return false;
	}
	return true;
}

bool func_340(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

bool func_341(int iParam0)
{
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_342()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_343(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_344()
{
	return Global_91330.f_297 > 0;
}

int func_345(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_346(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

bool func_347(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

bool func_348(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!iParam2)
	{
		if (func_345(iParam0))
		{
			return true;
		}
	}
	return false;
}

auto func_349()
{
	return Global_1315913;
}

int func_350()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_351(int iParam0)
{
	if (func_313(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_352(int iParam0)
{
	if (!func_176() && !func_177(player_id(), 1))
	{
		if (!func_50(player_id()))
		{
			if (func_53())
			{
				return true;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return false;
}

void func_353()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	float fVar7;
	Vector3 fVar8;
	
	if (func_378(player_id(), func_16(), 0))
	{
		return;
	}
	vVar0 = {get_entity_coords(get_player_ped(func_16()), 0)};
	vVar3 = {get_entity_coords(get_player_ped(player_id()), 0)};
	fVar6 = vdist(vVar0, vVar3);
	if (fVar6 < 25f)
	{
		if (fVar6 < 5f)
		{
			fVar8 = 175f;
		}
		else
		{
			fVar7 = 1f - func_355(fVar6, 5f, 25f) / 25f;
			fVar8 = func_354(26f, 175f, fVar7);
		}
		set_pad_shake(0, 1000, round(fVar8));
	}
}

float func_354(float fParam0, float fParam1, float fParam2)
{
	return 1f - fParam2 * fParam0 + fParam2 * fParam1;
}

float func_355(Vector3 fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_356(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return false;
	}
	if (!is_bit_set(vLocal_151[iParam0 /*3*/].f_2, false))
	{
		return false;
	}
	return true;
}

void func_357(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (decor_exist_on(get_player_ped_script_index(iParam0), "MPBitset"))
	{
		iVar0 = decor_get_int(get_player_ped_script_index(iParam0), "MPBitset");
	}
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iParam1);
	decor_set_int(get_player_ped_script_index(iParam0), "MPBitset", iVar0);
}

bool func_358(int iParam0, int iParam1)
{
	if (decor_is_registered_as_type("MPBitset", 3))
	{
		if (decor_exist_on(get_player_ped_script_index(iParam0), "MPBitset"))
		{
			if (is_bit_set(decor_get_int(get_player_ped_script_index(iParam0), "MPBitset"), iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_359()
{
	if (!func_360(player_id()))
	{
		func_65(25);
	}
}

int func_360(int iParam0)
{
	return func_220(iParam0, 25);
}

void func_361(int iParam0)
{
	if (iLocal_96 != 2 && iLocal_96 != 3)
	{
		func_276();
		return;
	}
	if (func_338())
	{
		func_276();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_374(84, "GB_HTB_BMT0", "GB_HTB_BMS0", func_375(func_16()), iLocal_97, 0, -1, -1, -1, 2, -1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(84, "GB_HTB_BMT0", "GB_HTB_BMS1", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(84, "GB_HTB_BMT0", "GB_HTB_BMS2", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 3:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_372(85, Local_129.f_5, -1, "GB_HTB_BMS3", "GB_WINNER", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 4:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_372(86, func_6(), -1, "GB_HTB_BMS4", "GB_WORK_OVER", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 5:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(85, "GB_WINNER", "GB_HTB_BMS5", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 6:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS5", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 7:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS6", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 8:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_372(86, func_6(), -1, "GB_HTB_BMS7", "GB_WORK_OVER", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 9:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_362(86, "GB_WORK_OVER", "GB_HTB_BMS8", func_368(), iLocal_97, func_6(), 0, 0, 0, -1, -1, -1, 2, -1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 10:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(85, "GB_WINNER", "GB_HTB_BMS9", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 11:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(85, "GB_WINNER", "GB_HTB_BMS10", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 12:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS11", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 13:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS12", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 14:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS13", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 15:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS14", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 16:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_373(86, "GB_WORK_OVER", "GB_HTB_BMS15", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
		
		case 17:
			if (!is_bit_set(iLocal_107, iParam0))
			{
				if (func_377())
				{
					func_376();
					func_372(86, func_6(), -1, "GB_HTB_BMS16", "GB_WORK_OVER", 1, -1, 2);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_107, iParam0);
				}
			}
			break;
	}
}

int func_362(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, auto uParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_367(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_16 = uParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_66 = iParam12;
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Var0.f_63), 2);
	return func_363(&Var0);
}

bool func_363(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_366(uParam0, *uParam0.f_16);
	func_365(uParam0);
	if (func_364(*uParam0.f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = {*uParam0};
			return true;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = {Global_2428492.f_2171[iVar0 /*72*/]};
			iVar0 += -1;
		}
		Global_2428492.f_2171[1 /*72*/] = {*uParam0};
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = {*uParam0};
			return true;
		}
		else
		{
			if (*uParam0.f_1 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_279(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_364(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_365(auto uParam0)
{
	if (func_281(*uParam0.f_1))
	{
		*uParam0.f_66 = func_245();
	}
}

void func_366(auto uParam0, int iParam1)
{
	if (func_281(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_11())
	{
		return;
	}
	if (func_279(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_154(iParam1, -2, 0, 0);
		}
	}
}

void func_367(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_11();
	*uParam1.f_17 = func_11();
	*uParam1.f_18 = func_11();
	*uParam1.f_1 = uParam0;
	*uParam1.f_2 = 1;
	StringCopy(uParam1.f_19, sParam4, 16);
	StringCopy(uParam1.f_8, sParam3, 32);
	*uParam1.f_3 = iParam2;
	*uParam1.f_65 = 1;
	*uParam1.f_68 = 1;
	*uParam1.f_69 = 1;
	*uParam1.f_67 = 0;
	StringCopy(uParam1.f_23, "", 64);
	StringCopy(uParam1.f_39, "", 64);
}

char* func_368()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_70(player_id());
	if (iVar0 != func_11())
	{
		if (iVar0 != player_id())
		{
			if (((func_220(iVar0, 28) || func_220(player_id(), 28)) || func_371(iVar0)) && !func_370(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_369(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar1))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

auto func_369(auto uParam0)
{
	return uParam0;
}

bool func_370(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_111(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_371(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_111(iParam0)};
	if (is_orbis_version() || is_pc_version())
	{
		if (_0x72D918C99BCACC54(0))
		{
			return false;
		}
	}
	else if (is_durango_version())
	{
		if (_0xB57A49545BA53CE7(&Var0))
		{
			return false;
		}
	}
	return true;
}

int func_372(int iParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_367(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = uParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_363(&Var0);
}

int func_373(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_367(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_363(&Var0);
}

int func_374(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	uVar0 = func_11();
	uVar1 = func_11();
	uVar2 = func_11();
	return func_362(iParam0, sParam1, sParam2, sParam3, iParam4, uVar0, uVar1, uVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

char* func_375(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_369(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_220(iParam0, 28) || func_220(player_id(), 28)) || func_371(iParam0)) && !func_370(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_70(iParam0);
	if (iVar1 != func_11())
	{
		sVar0 = func_369(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar0))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_376()
{
	if (is_help_message_being_displayed())
	{
		clear_help(1);
	}
}

bool func_377()
{
	if ((func_5(player_id(), 1, 1) && !is_pause_menu_active()) && !func_323())
	{
		return true;
	}
	return false;
}

int func_378(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_11())
	{
		if (!iParam2)
		{
			if (func_379(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_11())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_379(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_11())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

void func_380(int iParam0)
{
	if (func_338())
	{
		func_376();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_385("GB_HTB_HB0", "GB_HTB_BLP", func_386(func_16()), -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_384("GB_HTB_HR0", func_375(func_16()), func_386(func_16()), "GB_HTB_BLP", func_386(func_16()), -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_40("GB_HTB_HELP2", -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 3:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_40("GB_HTB_HELP3", -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 4:
			if (func_387(0))
			{
				func_40("GB_HTB_HELP4", -1);
				func_39(0);
			}
			break;
		
		case 5:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_40("GB_HTB_HELP5", -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 6:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_385("GB_HTB_HG0", "GB_HTB_BLP", func_386(func_16()), -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
				}
			}
			break;
		
		case 7:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_40("GB_HTB_HELP7", -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
					func_382(54, func_383(0));
				}
			}
			break;
		
		case 8:
			if (!is_bit_set(iLocal_108, iParam0))
			{
				if (func_387(0))
				{
					func_381("GB_HTB_HR1", func_375(func_16()), func_386(func_16()), -1);
					func_39(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_108, iParam0);
					func_382(54, func_383(0));
				}
			}
			break;
	}
}

void func_381(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam3);
}

void func_382(int iParam0, int iParam1)
{
	Vector3 vVar0;
	
	vVar0.x = 2;
	vVar0.y = player_id();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam1);
	}
}

auto func_383(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (iParam0)
			{
				if (is_bit_set(vLocal_151[iVar1 /*3*/].f_2, false))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_129.f_5)
			{
				if (is_bit_set(vLocal_151[iVar1 /*3*/].f_2, false))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_384(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	if (!iParam4 == 0)
	{
		_0x39BBF623FC803EAC(iParam4);
	}
	_add_text_component_item_string(sParam3);
	_display_help_text_from_string_label(0, 0, false, iParam5);
}

void func_385(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam3);
}

int func_386(int iParam0)
{
	int iVar0;
	
	iVar0 = func_164(iParam0);
	if (iVar0 != -1)
	{
		return func_162(iVar0);
	}
	return 1;
}

bool func_387(int iParam0)
{
	if ((((!func_323() && !is_pause_menu_active()) && !is_radar_hidden()) && func_5(player_id(), 1, 1)) && !func_64())
	{
		if (iParam0)
		{
			if (!is_help_message_being_displayed())
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_388()
{
	if (player_id() == func_16())
	{
		return true;
	}
	return false;
}

void func_389()
{
	int iVar0;
	auto uVar1;
	char* sVar2;
	
	iVar0 = 1;
	iLocal_128 = iLocal_128;
	if (func_21(&(Local_129.f_12)))
	{
		if (func_398(Local_129.f_12, Global_262145.f_10429 - 35000, 0))
		{
			func_397(&iLocal_127, 3, 1);
		}
		if (func_398(Local_129.f_12, Global_262145.f_10429 - 30000, 0))
		{
			func_397(&iLocal_127, 4, 1);
		}
		if (func_398(Local_129.f_12, Global_262145.f_10429 - 27000, 0))
		{
			func_397(&iLocal_127, 5, 1);
		}
		if (func_398(Local_129.f_12, Global_262145.f_10429, 0))
		{
			func_397(&iLocal_127, 2, 1);
		}
	}
	if (func_395(player_id(), Global_262145.f_10433, &uVar1, func_397(&iLocal_127, 13, -1), 1123024896, 0))
	{
		func_397(&iLocal_127, 13, 1);
	}
	else
	{
		func_397(&iLocal_127, 13, 0);
	}
	if (iLocal_117 || (!func_393() && !func_397(&iLocal_127, 13, -1)))
	{
		iVar0 = 0;
	}
	switch (func_392(participant_id_to_int()))
	{
		case 0:
			break;
		
		case 1:
			if (!func_397(&iLocal_127, 12, 1))
			{
				iLocal_128 = NETWORK::GET_NETWORK_TIME();
			}
			if (iVar0 && !func_397(&iLocal_127, 3, -1))
			{
				if (!func_397(&iLocal_127, 1, -1))
				{
					sVar2 = func_391(func_393(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (prepare_music_event(sVar2) && func_397(&iLocal_127, 11, -1))
					{
						trigger_music_event(sVar2);
						func_397(&iLocal_127, 1, 1);
					}
					if (!func_397(&iLocal_127, 11, -1))
					{
						func_390(1);
					}
				}
			}
			else if (func_397(&iLocal_127, 1, -1) && !func_397(&iLocal_127, 3, -1))
			{
				if (prepare_music_event("BG_HUNT_STOP"))
				{
					trigger_music_event("BG_HUNT_STOP");
					func_390(0);
					func_397(&iLocal_127, 1, 0);
				}
			}
			if (func_397(&iLocal_127, 3, -1))
			{
				if (func_397(&iLocal_127, 1, -1))
				{
					if (prepare_music_event("APT_PRE_COUNTDOWN_STOP"))
					{
						trigger_music_event("APT_PRE_COUNTDOWN_STOP");
						func_397(&iLocal_127, 1, 0);
					}
				}
			}
			if (func_397(&iLocal_127, 4, -1))
			{
				if ((!func_397(&iLocal_127, 7, -1) && !func_397(&iLocal_127, 5, -1)) && !(func_338() || iLocal_96 != 3))
				{
					if (prepare_music_event("APT_COUNTDOWN_30S"))
					{
						set_audio_flag("AllowScoreAndRadio", 1);
						trigger_music_event("APT_COUNTDOWN_30S");
						func_397(&iLocal_127, 7, 1);
					}
				}
				if ((!func_397(&iLocal_127, 6, -1) && !func_397(&iLocal_127, 5, -1)) && func_397(&iLocal_127, 7, -1))
				{
					set_user_radio_control_enabled(0);
					func_397(&iLocal_127, 6, 1);
				}
			}
			break;
		
		case 2:
			if (!func_397(&iLocal_127, 8, -1) && func_397(&iLocal_127, 7, -1))
			{
				if (prepare_music_event("APT_FADE_IN_RADIO"))
				{
					trigger_music_event("APT_FADE_IN_RADIO");
					func_397(&iLocal_127, 8, 1);
				}
			}
			if (func_397(&iLocal_127, 1, -1))
			{
				if (prepare_music_event("BG_HUNT_STOP"))
				{
					cancel_music_event("APT_COUNTDOWN_30S_KILL");
					trigger_music_event("BG_HUNT_STOP");
					func_397(&iLocal_127, 1, 0);
				}
			}
			if (func_397(&iLocal_127, 7, -1) && !func_397(&iLocal_127, 2, -1))
			{
				if (prepare_music_event("APT_COUNTDOWN_30S_KILL"))
				{
					func_397(&iLocal_127, 7, 0);
					trigger_music_event("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_397(&iLocal_127, 11, -1))
			{
				func_390(0);
			}
			break;
	}
	if (func_397(&iLocal_127, 6, -1) && (func_397(&iLocal_127, 5, -1) || func_392(participant_id_to_int()) == 2))
	{
		set_user_radio_control_enabled(1);
		set_audio_flag("AllowScoreAndRadio", 0);
		func_397(&iLocal_127, 6, 0);
	}
	if (func_21(&(Local_129.f_16)) && func_398(Local_129.f_16, 10000, 0))
	{
		if (!func_397(&iLocal_127, 10, -1))
		{
			iLocal_126 = get_sound_id();
			play_sound_frontend(iLocal_126, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			func_397(&iLocal_127, 10, 1);
		}
	}
	else if (func_397(&iLocal_127, 10, -1))
	{
		stop_sound(iLocal_126);
		iLocal_126 = -1;
		func_397(&iLocal_127, 10, 0);
	}
}

void func_390(int iParam0)
{
	if (iParam0)
	{
		set_audio_flag("DisableFlightMusic", 1);
		set_audio_flag("WantedMusicDisabled", 1);
		func_397(&iLocal_127, 11, 1);
	}
	else
	{
		set_audio_flag("DisableFlightMusic", 0);
		set_audio_flag("WantedMusicDisabled", 0);
		func_397(&iLocal_127, 11, 0);
	}
}

char* func_391(int iParam0, char* sParam1, char* sParam2)
{
	if (iParam0)
	{
		return sParam1;
	}
	return sParam2;
}

auto func_392(int iParam0)
{
	return vLocal_151[iParam0 /*3*/].f_1;
}

int func_393()
{
	return func_394(func_16(), 1);
}

int func_394(int iParam0, int iParam1)
{
	return func_378(player_id(), iParam0, iParam1);
}

bool func_395(int iParam0, int iParam1, auto uParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = get_player_ped(iParam0);
	fVar1 = func_396(iParam3, 30f, 0f);
	fVar2 = 4f;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	*uParam2 = func_15(iVar0, Local_129.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1) + fVar1 * fVar2)
	{
		return false;
	}
	fVar3 = get_entity_height_above_ground(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > fParam4 + fVar1 && !iParam5)
	{
		return false;
	}
	return true;
}

float func_396(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = is_bit_set(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		clear_bit(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(iParam0, iParam1);
	}
	return iVar0;
}

bool func_398(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam3)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return true;
	}
	return false;
}

void func_399()
{
	switch (vLocal_151[participant_id_to_int() /*3*/].f_1)
	{
		case 1:
			if (func_388())
			{
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 3))
				{
					if (func_400(82, "GB_INTTXT_HBB", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 3);
					}
				}
			}
			else if (func_378(player_id(), func_16(), 0))
			{
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 3))
				{
					if (func_400(82, "GB_INTTXT_HBG", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

bool func_400(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_401(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_401(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_411();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_410() == 0)
	{
		func_408();
		return false;
	}
	func_407(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (is_bit_set(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_406(0);
		func_406(2);
		func_406(1);
	}
	else
	{
		func_411();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_406(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_406(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_406(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_406(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (is_bit_set(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_411();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_349())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_405(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_402(1);
			func_405(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = false;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_404(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar7);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_237(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_403(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_403(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_237(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_237(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_237(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_237(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_237(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

int func_404(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_405(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	_pop_scaleform_movie_function_void();
}

void func_406(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_407(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_408()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_409(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_409(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_409(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

void func_411()
{
	if (func_404(14))
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
		Global_14413 = func_412();
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

auto func_412()
{
	func_413();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_413()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_416(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_415(PLAYER::PLAYER_PED_ID());
			if (func_414(iVar0) && (!func_404(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_414(Global_101154.f_1826.f_539.f_3549))
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

int func_414(int iParam0)
{
	return iParam0 < 3;
}

int func_415(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_416(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_416(int iParam0)
{
	if (func_414(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_417()
{
	if (func_338())
	{
		if (func_437())
		{
			func_436();
		}
		return;
	}
	if (iLocal_96 != 3)
	{
		if (func_437())
		{
			func_436();
		}
		return;
	}
	switch (func_392(participant_id_to_int()))
	{
		case 0:
			break;
		
		case 1:
			if (func_388())
			{
				if (func_21(&(Local_129.f_16)))
				{
					if (!func_434("GB_HTB_OT4"))
					{
						func_433("GB_HTB_OT4", 0);
					}
				}
				else if (!func_434("GB_HTB_OT1"))
				{
					func_433("GB_HTB_OT1", 0);
				}
			}
			else if (func_378(player_id(), func_16(), 0))
			{
				if (iLocal_96 == 3)
				{
					if (!func_434("GB_HTB_OT2"))
					{
						func_430("GB_HTB_OT2", "GB_BOSS_LC", iLocal_97, 0);
					}
				}
			}
			else if (func_356(participant_id_to_int()))
			{
				if (!func_434("GB_HTB_OT3"))
				{
					if (func_5(Local_129.f_5, 0, 1))
					{
						func_418("GB_HTB_OT3", Local_129.f_5, "GB_BOSS_LC", iLocal_97, 0);
					}
				}
			}
			break;
		
		case 2:
			if (func_437())
			{
				func_436();
			}
			break;
		
		case 3:
			if (func_437())
			{
				func_436();
			}
			break;
	}
}

void func_418(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (func_419(sParam0, get_player_name(iParam1), sParam2, iParam4, iParam3))
	{
		Global_1312577 = 13;
		Global_1312577.f_54 = iParam3;
	}
}

bool func_419(char* sParam0, char* sParam1, char* sParam2, int iParam3, auto uParam4)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 63)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam2) > 63)
	{
		return false;
	}
	if (func_429(sParam0, sParam1, sParam2) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_423();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	Global_1312577.f_56 = uParam4;
	func_422();
	func_421(iParam3);
	func_420();
	return true;
}

void func_420()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1312577.f_57), true);
}

void func_421(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1312577.f_57), false);
		return;
	}
	clear_bit(&(Global_1312577.f_57), false);
}

void func_422()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

void func_423()
{
	func_425();
	func_424(0);
}

void func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (iVar0)
	{
		Global_1312577.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (iParam0)
	{
		return;
	}
}

void func_425()
{
	if (!func_428())
	{
	}
	if (func_427())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_426();
		_0xFCC75460ABA29378();
	}
}

void func_426()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			add_text_component_integer(Global_1312577.f_50);
			return;
		
		case 2:
			add_text_component_integer(Global_1312577.f_50);
			add_text_component_integer(Global_1312577.f_51);
			return;
		
		case 3:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 4:
			_add_text_component_item_string(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 5:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 6:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 7:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 8:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 9:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 10:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		case 12:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 11:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 13:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 14:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_55);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 16:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			return;
		
		case 15:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 18:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 17:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

bool func_427()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_428()
{
	if (!func_427())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_426();
	return _0x8A9BA1AB3E237613();
}

int func_429(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_427())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	if (!get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14)))
	{
		return false;
	}
	return get_hash_key(sParam2) == get_hash_key(&(Global_1312577.f_30));
}

void func_430(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_431(sParam0, sParam1, iParam3, iParam2))
	{
		Global_1312577 = 18;
		Global_1312577.f_54 = iParam2;
	}
}

bool func_431(char* sParam0, char* sParam1, int iParam2, auto uParam3)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 23)
	{
		return false;
	}
	if (func_432(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_423();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = uParam3;
	func_422();
	func_421(iParam2);
	func_420();
	return true;
}

int func_432(char* sParam0, char* sParam1)
{
	if (!func_427())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	return get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14));
}

void func_433(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_434(sParam0))
	{
		return;
	}
	func_423();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_422();
	func_421(iParam1);
	func_420();
}

int func_434(char* sParam0)
{
	if (!func_427())
	{
		return false;
	}
	if (Global_1312577 == 11)
	{
		return func_435(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10));
}

int func_435(char* sParam0)
{
	if (!func_427())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_14));
}

void func_436()
{
	if (!func_427())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_423();
}

bool func_437()
{
	if (!func_427())
	{
		return false;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return false;
	}
	return true;
}

void func_438()
{
	int iVar0;
	
	if (func_338())
	{
		return;
	}
	if (iLocal_96 != 3)
	{
		return;
	}
	switch (func_392(participant_id_to_int()))
	{
		case 0:
			break;
		
		case 1:
			if (func_388())
			{
				if (func_21(&(Local_129.f_16)))
				{
					iVar0 = 20000 - func_442(&(Local_129.f_16), 0, 0);
					if (iVar0 > 0)
					{
						func_439(iVar0, "GB_HTB_TM2", 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_439(0, "GB_HTB_TM2", 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
					}
					return;
				}
			}
			if (func_21(&(Local_129.f_12)))
			{
				iVar0 = Global_262145.f_10429 - func_442(&(Local_129.f_12), 0, 0);
				if (iVar0 > 0)
				{
					func_439(iVar0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_439(0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (iLocal_96 == 2 || iLocal_96 == 3)
			{
				if (func_21(&(Local_129.f_14)))
				{
					func_439(0, "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
	}
}

void func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_441(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_440(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_440(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_441(int iParam0, int iParam1)
{
	return is_bit_set(Global_1339940.f_4726[iParam0], iParam1);
}

int func_442(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return get_time_difference(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_443()
{
	auto uVar0;
	int iVar1;
	
	if (func_338())
	{
		func_460();
		return;
	}
	switch (vLocal_151[participant_id_to_int() /*3*/].f_1)
	{
		case 0:
			if (!func_17(Local_129.f_7))
			{
				if (func_378(player_id(), func_16(), 1))
				{
					if (func_459(player_id(), Global_262145.f_10433, &uVar0, 1123024896, 0))
					{
						if (does_blip_exist(iLocal_106))
						{
							remove_blip(&iLocal_106);
						}
					}
					else if (!does_blip_exist(iLocal_106))
					{
						iLocal_106 = add_blip_for_coord(Local_129.f_7);
						_0x75A16C3DA34F1245(iLocal_106, true);
						set_blip_name_from_text_file(iLocal_106, "GB_HTB_BLIP1");
						set_blip_flashes(iLocal_106, 1);
						set_blip_flash_timer(iLocal_106, 7000);
						set_blip_sprite(iLocal_106, 458);
						set_blip_priority(iLocal_106, 12);
						set_blip_scale(iLocal_106, Global_262145.f_10294);
						func_458(&iLocal_106, iLocal_97);
					}
					if (!does_blip_exist(iLocal_105))
					{
						iLocal_105 = add_blip_for_radius(Local_129.f_7, to_float(Global_262145.f_10433 - 1));
						func_458(&iLocal_105, iLocal_97);
						_0x75A16C3DA34F1245(iLocal_105, true);
						_0xC4278F70131BAA6D(iLocal_105, 1);
						set_blip_name_from_text_file(iLocal_105, "GB_HTB_BLIP0");
					}
					if (func_457(Local_129.f_5) != iLocal_109)
					{
						iLocal_109 = func_457(Local_129.f_5);
						set_blip_alpha(iLocal_105, iLocal_109);
					}
				}
			}
			break;
		
		case 1:
			if (func_388())
			{
				func_455();
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 4))
				{
					if (!func_21(&(Local_129.f_16)) && !func_21(&(Local_129.f_18)))
					{
						if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 2))
						{
							func_454(1);
							GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 2);
						}
					}
					else if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 2))
					{
						func_454(0);
						clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_453();
				if (!func_378(player_id(), func_16(), 0))
				{
					if (iLocal_116)
					{
						if (vLocal_151[network_get_participant_index(Local_129.f_5) /*3*/].f_1 == 1 && !is_bit_set(vLocal_151[network_get_participant_index(Local_129.f_5) /*3*/].f_2, 2))
						{
							if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 10))
							{
								func_451(Local_129.f_5, 432, 1);
								func_446(Local_129.f_5, func_450(iLocal_97), 1);
								if (func_5(func_16(), 1, 1))
								{
									func_444(Local_129.f_5, 1, 0);
								}
								GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 10);
							}
						}
						else if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 10))
						{
							func_451(Local_129.f_5, 432, 0);
							func_446(Local_129.f_5, func_450(iLocal_97), 0);
							if (func_5(func_16(), 1, 1))
							{
								func_444(Local_129.f_5, 0, 0);
							}
							clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!func_17(Local_129.f_7))
			{
				if (func_459(player_id(), Global_262145.f_10433, &uVar0, 1123024896, 0))
				{
					if (does_blip_exist(iLocal_106))
					{
						remove_blip(&iLocal_106);
					}
				}
				else if (!does_blip_exist(iLocal_106))
				{
					iLocal_106 = add_blip_for_coord(Local_129.f_7);
					_0x75A16C3DA34F1245(iLocal_106, true);
					set_blip_name_from_text_file(iLocal_106, "GB_HTB_BLIP1");
					set_blip_flashes(iLocal_106, 1);
					set_blip_flash_timer(iLocal_106, 7000);
					set_blip_sprite(iLocal_106, 458);
					set_blip_priority(iLocal_106, 12);
					set_blip_scale(iLocal_106, Global_262145.f_10294);
					func_458(&iLocal_106, iLocal_97);
				}
				if (!does_blip_exist(iLocal_105))
				{
					iLocal_105 = add_blip_for_radius(Local_129.f_7, to_float(Global_262145.f_10433 - 1));
					func_458(&iLocal_105, iLocal_97);
					_0x75A16C3DA34F1245(iLocal_105, true);
					_0xC4278F70131BAA6D(iLocal_105, 1);
					set_blip_name_from_text_file(iLocal_105, "GB_HTB_BLIP0");
					set_blip_alpha(iLocal_105, Global_262145.f_10178);
				}
				if (func_378(player_id(), func_16(), 1) || func_177(player_id(), 1))
				{
					if (func_177(player_id(), 1))
					{
						iVar1 = func_70(player_id());
					}
					else
					{
						iVar1 = Local_129.f_5;
					}
					if (func_457(iVar1) != iLocal_109)
					{
						iLocal_109 = func_457(iVar1);
						set_blip_alpha(iLocal_105, iLocal_109);
					}
				}
			}
			break;
		
		case 2:
		case 3:
			func_460();
			break;
	}
}

void func_444(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2412879.f_625[iParam0] = get_id_of_this_thread();
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2412879.f_364), iParam0);
			func_445(iParam0, iParam2);
		}
	}
	else
	{
		func_445(iParam0, iParam2);
		clear_bit(&(Global_2412879.f_364), iParam0);
		Global_2412879.f_625[iParam0] = -1;
	}
}

void func_445(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2412879.f_365), iParam0);
	}
	else
	{
		clear_bit(&(Global_2412879.f_365), iParam0);
	}
	if (does_blip_exist(Global_2412879[iParam0]))
	{
		if (iParam1)
		{
			set_blip_as_short_range(Global_2412879[iParam0], false);
		}
		else
		{
			set_blip_as_short_range(Global_2412879[iParam0], true);
		}
	}
}

void func_446(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_448())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_447(iParam0))
	{
		if (iParam2)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = get_id_of_this_thread();
			Global_2412879.f_427[iVar0] = uParam1;
		}
		else
		{
			clear_bit(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

bool func_447(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

int func_448()
{
	switch (func_449())
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

auto func_449()
{
	return Global_25120;
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return iVar0 * 16777216 + iVar1 * 65536 + iVar2 * 256 + iVar3;
	return 0;
}

void func_451(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_448())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!is_thread_active(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			if (!is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_452();
			}
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = get_id_of_this_thread();
		}
		else
		{
			if (is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_452();
			}
			clear_bit(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_452()
{
	Global_2412879.f_880 = 1;
}

void func_453()
{
	if (is_bit_set(vLocal_151[func_16() /*3*/].f_2, 4))
	{
		if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 9))
		{
			if (func_16() != func_88())
			{
				play_sound_frontend(-1, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 9);
			}
		}
	}
	else if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 9))
	{
		clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 9);
	}
}

void func_454(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_876) || Global_2412879.f_876 == get_id_of_this_thread())
	{
		if (iParam0)
		{
			Global_2412879.f_876 = get_id_of_this_thread();
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_69.f_2), 25);
		}
		else
		{
			Global_2412879.f_876 = -1;
			clear_bit(&(Global_2418472[player_id() /*313*/].f_69.f_2), 25);
		}
	}
}

void func_455()
{
	if (!func_388())
	{
		return;
	}
	if (func_21(&(Local_129.f_16)) && func_21(&(Local_129.f_18)))
	{
		if (func_21(&uLocal_124))
		{
			func_8(&uLocal_124);
		}
		return;
	}
	if (!func_21(&uLocal_122) && !func_21(&uLocal_124))
	{
		vLocal_118 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		func_20(&uLocal_122, 0, 0);
		iLocal_121 = 0;
	}
	else if (func_21(&uLocal_124))
	{
		if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 2))
		{
			func_454(0);
			clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 2);
		}
		if (func_19(&uLocal_124, round(Global_262145.f_10432), 0))
		{
			func_8(&uLocal_124);
			clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 4);
			func_456(0, -1, 500, 500, 0);
			if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 2))
			{
				func_454(1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 2);
			}
		}
	}
	else if (func_442(&uLocal_122, 0, 0) > 500 * iLocal_121)
	{
		if (vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_118) > IntToFloat(Global_262145.f_10430))
		{
			func_8(&uLocal_122);
			if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 4))
			{
				func_20(&uLocal_124, 0, 0);
			}
		}
		else if (IntToFloat(func_442(&uLocal_122, 0, 0)) > Global_262145.f_10431)
		{
			if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 2))
			{
				func_454(0);
				clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 2);
				func_380(7);
				func_456(1, -1, 2147483647, 0, 0);
			}
			if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 4))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 4);
			}
		}
		iLocal_121++;
	}
}

void func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if ((!is_thread_active(Global_2412879.f_853) || Global_2412879.f_853 == get_id_of_this_thread()) || iParam4)
	{
		if (iParam0)
		{
			Global_2412879.f_853 = get_id_of_this_thread();
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_69.f_2), 21);
			Global_2412879.f_854 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2412879.f_853 = -1;
			clear_bit(&(Global_2418472[player_id() /*313*/].f_69.f_2), 21);
		}
		Global_2412879.f_857 = iParam2;
		Global_2412879.f_858 = iParam3;
		Global_2412879.f_856 = iParam1;
	}
	else if (!iParam4)
	{
	}
}

int func_457(int iParam0)
{
	auto uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_129.f_7))
		{
			if (func_459(iParam0, Global_262145.f_10433, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_262145.f_10178;
}

void func_458(int iParam0, int iParam1)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_colour(*iParam0, func_450(iParam1));
	}
}

bool func_459(int iParam0, int iParam1, auto uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	
	iVar0 = get_player_ped(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	*uParam2 = func_15(iVar0, Local_129.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return false;
	}
	fVar1 = get_entity_height_above_ground(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !iParam4)
	{
		return false;
	}
	return true;
}

void func_460()
{
	if (does_blip_exist(iLocal_105))
	{
		remove_blip(&iLocal_105);
	}
	if (does_blip_exist(iLocal_106))
	{
		remove_blip(&iLocal_106);
	}
	if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 10))
	{
		func_451(Local_129.f_5, 432, 0);
		func_446(Local_129.f_5, func_450(iLocal_97), 0);
		func_444(Local_129.f_5, 0, 0);
		clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 10);
	}
}

void func_461()
{
	int iVar0;
	int iVar1;
	
	switch (func_392(participant_id_to_int()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < get_number_of_events(1))
			{
				iVar1 = get_event_at_index(1, iVar0);
				if (iVar1 == 179)
				{
					func_462(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar14;
	
	iVar2 = func_11();
	iVar3 = func_11();
	get_event_data(1, iParam0, &Var4, 10);
	if (ENTITY::DOES_ENTITY_EXIST(Var4))
	{
		if (is_entity_a_ped(Var4))
		{
			iVar0 = get_ped_index_from_entity_index(Var4);
			if (is_ped_a_player(iVar0))
			{
				iVar2 = _network_get_ped_player(iVar0);
				if (network_is_player_a_participant(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var4.f_1))
		{
			if (is_entity_a_ped(Var4.f_1))
			{
				iVar1 = get_ped_index_from_entity_index(Var4.f_1);
				if (is_ped_a_player(iVar1))
				{
					iVar3 = _network_get_ped_player(iVar1);
					if (network_is_player_a_participant(iVar3))
					{
						if (is_bit_set(vLocal_151[network_get_participant_index(iVar3) /*3*/].f_2, false))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == player_id())
		{
			if (!func_378(player_id(), func_16(), 1))
			{
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 8))
				{
					func_359();
					GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_3)
		{
			if (player_id() == iVar3)
			{
				if (!func_220(player_id(), 20))
				{
					func_463(0);
				}
			}
		}
		else
		{
			if (!network_is_host_of_this_script())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_129.f_6 = iVar3;
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_129.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != func_11() && func_177(iVar2, 0))
	{
		iVar14 = func_70(iVar2);
		if (iVar14 == Local_129.f_5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_1))
			{
				if (is_entity_a_ped(Var4.f_1))
				{
					iVar1 = get_ped_index_from_entity_index(Var4.f_1);
					if (is_ped_a_player(iVar1))
					{
						iVar3 = _network_get_ped_player(iVar1);
						if (network_is_player_a_participant(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == player_id())
			{
				if (!func_378(player_id(), func_16(), 1))
				{
					if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 8))
					{
						func_359();
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_463(int iParam0)
{
	if (!func_61(player_id()))
	{
		if (iParam0 || func_48(player_id()) != 0)
		{
			func_65(20);
			if (func_63(player_id()))
			{
				if (!is_bit_set(Global_1610316[player_id() /*174*/].f_1, 8))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
				}
			}
		}
	}
}

void func_464()
{
	auto uVar0;
	
	switch (vLocal_151[participant_id_to_int() /*3*/].f_1)
	{
		case 1:
			if (func_459(player_id(), Global_262145.f_10433 - 1, &uVar0, 1123024896, 0))
			{
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 8))
				{
					func_359();
					GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_465()
{
	auto uVar0;
	
	if (!func_17(Local_129.f_7))
	{
		if (Local_129.f_1 >= 1 || func_88() == Local_129.f_5)
		{
			func_490(164, Local_129.f_7, &uLocal_115, 1140457472, 1144750080, 0);
		}
		if (iLocal_96 != func_48(player_id()))
		{
			iLocal_96 = func_48(player_id());
		}
	}
	if (func_388())
	{
		if (func_480())
		{
			if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 11))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_392(participant_id_to_int()))
	{
		case 1:
			iLocal_117 = (func_53() || func_475(func_388()));
			if (iLocal_117)
			{
				if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, false))
				{
					clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), false);
					if (func_388())
					{
						func_469(0);
						func_468(2);
					}
				}
			}
			else if (func_459(player_id(), 500, &uVar0, 1123024896, 0))
			{
				if (!is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, false))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(vLocal_151[participant_id_to_int() /*3*/].f_2), false);
					if (func_388())
					{
						func_469(1);
						func_468(2);
					}
				}
			}
			else if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, false))
			{
				clear_bit(&(vLocal_151[participant_id_to_int() /*3*/].f_2), false);
				if (func_388())
				{
					func_469(0);
					func_467(2);
				}
			}
			if (!func_466())
			{
				if (func_459(player_id(), Global_262145.f_10433, &uVar0, 1123024896, 0))
				{
					if (!func_220(player_id(), 20))
					{
						func_463(0);
					}
				}
			}
			break;
	}
}

bool func_466()
{
	if (func_378(player_id(), func_16(), 1))
	{
		return true;
	}
	return false;
}

void func_467(int iParam0)
{
	clear_bit(&Global_1572926, iParam0);
}

void func_468(int iParam0)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_1572926, iParam0);
}

void func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_470(iVar0, iParam0);
		iVar0++;
	}
}

void func_470(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_474(iParam0, 8, 1))
		{
			func_473(iParam0, 8, 1);
		}
	}
	else if (func_474(iParam0, 8, 1))
	{
		func_471(iParam0, 8, 1);
	}
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_449() == 0)
		{
			iVar0 = func_28(func_472(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_25(func_472(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

void func_473(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_449() == 0)
		{
			iVar0 = func_28(func_472(iParam0), -1, 0);
			GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_25(func_472(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_474(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_449() == 0)
		{
			return is_bit_set(func_28(func_472(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

bool func_475(int iParam0)
{
	if (iParam0)
	{
		return false;
	}
	if (func_348(player_id(), 0, 0))
	{
		return true;
	}
	if (func_476(4))
	{
		return true;
	}
	if (func_316())
	{
		return true;
	}
	if (func_56(player_id(), 0))
	{
		return true;
	}
	if (func_344())
	{
		return true;
	}
	if (network_is_in_mp_cutscene())
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
{
	int iVar0;
	
	if (func_479())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_478(iVar0) == iParam0)
			{
				if (func_477(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_477(int iParam0)
{
	return func_474(iParam0, 5, 1);
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_479()
{
	return Global_91330.f_296 > 0;
}

bool func_480()
{
	if (((((((((func_489() || func_488()) || func_487()) || func_316()) || (func_486() && !network_is_activity_session())) || (func_483() && !func_482())) || Global_2394645) || Global_2394645.f_1 != 0) || Global_2394718 != 0) || (func_481() == 2 && !network_is_activity_session()))
	{
		return true;
	}
	return false;
}

auto func_481()
{
	return Global_978143;
}

int func_482()
{
	return is_bit_set(Global_2434762.f_2, 27);
}

int func_483()
{
	if (func_485() || func_484())
	{
		return Global_1587523[player_id() /*444*/].f_87 == 8;
	}
	return false;
}

auto func_484()
{
	return Global_2434762.f_610;
}

int func_485()
{
	return is_bit_set(Global_2434762.f_2, 11);
}

int func_486()
{
	return is_bit_set(Global_2434762, 5);
}

int func_487()
{
	return is_bit_set(Global_2434762, 2);
}

int func_488()
{
	return is_bit_set(Global_2434762, 20);
}

auto func_489()
{
	return Global_2434762.f_574;
}

void func_490(int iParam0, Vector3 vParam1, auto uParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 fVar0;
	float fVar1;
	
	if (((func_63(player_id()) && !func_62(player_id())) && !is_bit_set(Global_1610316[player_id() /*174*/].f_1, 8)) && (func_52(player_id()) || func_51(player_id())))
	{
		return;
	}
	Global_1727391 = {vParam1};
	fVar0 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_515(iParam0, fVar0);
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_50(player_id()) || func_514(player_id()))
		{
			if (!_0x84698AB38D0C6636(1344549371))
			{
				_0xDD564BDD0472C936(1344549371);
			}
		}
		else if (_0x84698AB38D0C6636(1344549371))
		{
			object_decal_toggle(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_56(player_id(), 21))
		{
			func_513(vParam1, 1, 0);
		}
		if (!*uParam4 && func_5(player_id(), 1, 1))
		{
			*uParam4 = 1;
			if (func_512(iParam0))
			{
				set_wanted_level_multiplier(func_511(iParam0));
				if (func_510(iParam0, -1))
				{
					set_max_wanted_level(false);
					if (get_player_wanted_level(player_id()) > 0)
					{
						set_player_wanted_level(player_id(), false, 1);
						set_player_wanted_level_now(player_id(), 1);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
				}
			}
			if (func_509(iParam0))
			{
				fVar1 = func_508(iParam0);
				if (fVar1 != 1f)
				{
					func_507(fVar1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
				}
			}
			if (!Global_2391042)
			{
				if (func_506(iParam0) && func_50(player_id()))
				{
					func_505(1);
					func_504(2);
				}
			}
			func_65(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_220(player_id(), 19))
			{
				func_55(19);
			}
		}
		if (*uParam4 && func_5(player_id(), 1, 1))
		{
			*uParam4 = 0;
			if (func_512(iParam0))
			{
				if (is_bit_set(Global_1727391.f_3, false))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					clear_bit(&(Global_1727391.f_3), false);
				}
			}
			if (func_509(iParam0))
			{
				func_503();
				clear_bit(&(Global_1727391.f_3), true);
			}
			if (iParam7 && !func_63(player_id()))
			{
				if (func_46(player_id()) != 152)
				{
					func_492();
				}
			}
			if (func_141(2))
			{
				func_505(0);
				func_491(2);
			}
		}
	}
}

void func_491(int iParam0)
{
	clear_bit(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_492()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_501();
	func_493(1, 1);
}

void func_493(int iParam0, int iParam1)
{
	if (iParam1)
	{
		Global_2404956.f_39 = {Global_2406784};
	}
	else
	{
		Global_2404956.f_39 = {Global_2406784};
		Global_2404956.f_39.f_49 = {Global_2406784.f_49};
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (iParam0)
	{
		func_500();
	}
	func_496(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_495(0);
	func_494();
}

void func_494()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_495(int iParam0)
{
	if (iParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_496(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_498();
		func_497(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_498();
		func_497(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = get_id_of_this_thread();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_498()
{
	func_499();
	Global_2404956.f_635 = 0;
}

void func_499()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = {Var1};
		iVar0++;
	}
}

void func_500()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_501()
{
	func_502();
	Global_2404956.f_1280 = 0;
}

void func_502()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = {Var1};
		iVar0++;
	}
}

void func_503()
{
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

void func_504(int iParam0)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_505(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

bool func_506(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return true;
		
		default:
	}
	return false;
}

void func_507(float fParam0)
{
	Vector3 fVar0;
	
	if (get_hash_key(get_this_script_name()) == func_448())
	{
		return;
	}
	fVar0 = Global_2460486.f_4655 - fParam0;
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && absf(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = get_id_of_this_thread();
}

float func_508(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_509(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return true;
		
		default:
	}
	return false;
}

bool func_510(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return true;
	}
	return false;
}

float func_511(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_512(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return true;
		
		default:
	}
	return false;
}

void func_513(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

bool func_514(int iParam0)
{
	if (func_208(iParam0))
	{
		if (func_50(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_515(int iParam0, Vector3 fParam1)
{
	int iVar0;
	
	iVar0 = func_516(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_359();
	}
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10461;
		
		case 142:
			return Global_262145.f_10449;
		
		case 157:
			return Global_262145.f_10416;
		
		case 159:
			return Global_262145.f_10399;
		
		case 162:
			return Global_262145.f_10510;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_517()
{
	switch (func_520())
	{
		case 1:
			if (func_392(participant_id_to_int()) != 1)
			{
				func_519(func_466());
				func_518(1);
			}
			break;
		
		case 2:
			if (func_392(participant_id_to_int()) != 2)
			{
				func_519(func_466());
				func_518(2);
			}
			break;
		
		case 3:
			if (func_392(participant_id_to_int()) != 3)
			{
				func_519(func_466());
				func_518(3);
			}
			break;
	}
}

void func_518(int iParam0)
{
	vLocal_151[participant_id_to_int() /*3*/].f_1 = iParam0;
}

void func_519(int iParam0)
{
	if (iParam0)
	{
		if (!func_220(player_id(), 9))
		{
			if (func_48(player_id()) != 0)
			{
				func_65(9);
			}
		}
	}
	else if (func_220(player_id(), 9))
	{
		func_55(9);
	}
}

auto func_520()
{
	return Local_129.f_1;
}

void func_521()
{
	iLocal_96 = func_48(player_id());
	func_522(164, 1, -1);
	iLocal_97 = func_154(Local_129.f_5, -2, 0, 0);
	get_hud_colour(iLocal_97, &(uLocal_110[0]), &(uLocal_110[1]), &(uLocal_110[2]), &(uLocal_110[3]));
}

void func_522(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != iParam0)
	{
		func_534(-1);
		Global_1610316[player_id() /*174*/].f_10.f_28 = iParam0;
		if (func_533() != -1)
		{
			func_532(-1);
		}
		if (func_531() != -1)
		{
			func_530(-1);
		}
		func_528(iParam2);
		func_526(iParam0);
		if (!func_509(iParam0))
		{
			fVar0 = func_508(iParam0);
			if (fVar0 != 1f)
			{
				func_507(fVar0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
			}
		}
		if (!func_512(iParam0))
		{
			if (func_510(iParam0, iParam2))
			{
				set_max_wanted_level(false);
				set_player_wanted_level(player_id(), false, 0);
				set_player_wanted_level_now(player_id(), 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
			}
			else if (get_max_wanted_level() < 5)
			{
				set_wanted_level_multiplier(1f);
				set_max_wanted_level(5);
			}
		}
		if (func_60())
		{
			func_65(27);
		}
		if (iParam1)
		{
			if (!func_53())
			{
				func_505(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((is_bit_set(Global_2460486.f_4414, true) || is_bit_set(Global_2460486.f_4414, 4)) || is_bit_set(Global_2460486.f_4414, false))
			{
				func_197(6);
			}
			func_525();
		}
		if (iParam0 == 164)
		{
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
		}
		if (func_63(player_id()) && func_50(player_id()))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
		}
		func_523();
	}
}

void func_523()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_524();
	iVar2 = func_70(player_id());
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			if (func_378(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(player_id(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, player_id(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_524()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return is_bit_set(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_525()
{
	if (is_bit_set(Global_2460486.f_4414, true))
	{
		clear_bit(&(Global_2460486.f_4414), true);
	}
	if (is_bit_set(Global_2460486.f_4414, 4))
	{
		clear_bit(&(Global_2460486.f_4414), 4);
	}
	if (is_bit_set(Global_2460486.f_4414, 6))
	{
		clear_bit(&(Global_2460486.f_4414), 6);
	}
	clear_bit(&(Global_2460486.f_4414), false);
	clear_bit(&(Global_2460486.f_4414), 2);
	Global_1587523[player_id() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		set_max_wanted_level(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(3351, -1, 0);
	iVar1 = func_527(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_25(3351, iVar0, -1, 1);
	}
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_528(int iParam0)
{
	func_529(player_id(), iParam0);
}

void func_529(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_530(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

auto func_531()
{
	return Global_2460486.f_4660.f_138;
}

void func_532(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

auto func_533()
{
	return Global_2460486.f_4660.f_137;
}

void func_534(int iParam0)
{
	Global_1610316[player_id() /*174*/].f_10.f_27 = iParam0;
}

void func_535(int iParam0)
{
	vLocal_151[participant_id_to_int() /*3*/] = iParam0;
}

auto func_536()
{
	return Local_129;
}

auto func_537(int iParam0)
{
	return vLocal_151[iParam0 /*3*/];
}

bool func_538()
{
	if (func_539(1))
	{
		return true;
	}
	if (Global_2460486.f_4660.f_14)
	{
		Global_2460486.f_4660.f_14 = 0;
		return true;
	}
	return false;
}

bool func_539(int iParam0)
{
	int iVar0;
	
	if (!func_86(1))
	{
		iVar0 = false;
		if (Global_1610316[player_id() /*174*/].f_10.f_51 != func_11())
		{
			if (func_5(Global_1610316[player_id() /*174*/].f_10.f_51, 0, 1) && Global_1610316[player_id() /*174*/].f_10.f_19 == 4)
			{
				iVar0 = true;
			}
		}
		else if (func_540(func_46(player_id())) == 0)
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (iParam0)
			{
				func_197(31);
				if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_154(Global_1610316[player_id() /*174*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609014 = 1;
				}
				Global_1608998 = {Global_1610316[player_id() /*174*/].f_10.f_74};
			}
			return true;
		}
	}
	return false;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

bool func_541()
{
	int iVar0;
	
	func_545(&iVar0);
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
	if (func_544())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_543())
	{
		return true;
	}
	if (func_542(157))
	{
		if (!func_489())
		{
			return true;
		}
	}
	if (func_542(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_448() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_448()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_542(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_543()
{
	return Global_2443085;
}

auto func_544()
{
	return Global_2434762.f_569;
}

void func_545(auto uParam0)
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
					func_546(iVar0);
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

void func_546(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_547(iVar4, &iVar5))
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

bool func_547(int iParam0, auto uParam1)
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

void func_548()
{
	wait(0);
}

void func_549()
{
	if (func_388())
	{
		if (func_358(player_id(), 0))
		{
			func_217(player_id(), 0);
		}
	}
	if (participant_id_to_int() != -1)
	{
		if (is_bit_set(vLocal_151[participant_id_to_int() /*3*/].f_2, 7))
		{
			func_219(0, 4);
		}
	}
	if (func_566(2))
	{
		func_467(2);
	}
	if (func_397(&iLocal_127, 10, -1))
	{
		stop_sound(iLocal_126);
		iLocal_126 = -1;
		func_397(&iLocal_127, 10, 0);
	}
	if (func_397(&iLocal_127, 11, -1))
	{
		func_390(0);
	}
	Global_1727400.f_2 = Local_129.f_20;
	Global_1727400.f_3 = Local_129.f_21;
	func_564(Local_129.f_4, -1, -1, -1082130432);
	func_469(0);
	func_550(0);
	terminate_this_thread();
}

void func_550(int iParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 167 || Global_1610316[player_id() /*174*/].f_10.f_28 == 168)
	{
		func_562();
		clear_bit(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 164)
	{
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[player_id() /*174*/].f_10.f_28 = -1;
		if (!is_bit_set(Global_1573883.f_1, 14) && !func_63(player_id()))
		{
			func_505(0);
		}
	}
	else if (func_560(player_id()) != -1)
	{
		func_534(-1);
	}
	func_528(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_557(iVar0);
		iVar0++;
	}
	if (is_bit_set(Global_1727391.f_3, false))
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		clear_bit(&(Global_1727391.f_3), false);
	}
	if (func_36(func_42()))
	{
		func_556(-1);
	}
	else if (func_41(func_42()))
	{
	}
	else
	{
		func_552(-1, 1);
	}
	func_55(19);
	func_55(20);
	func_55(21);
	func_55(22);
	func_55(27);
	func_491(3);
	func_491(4);
	func_491(7);
	func_551();
	if (func_50(player_id()))
	{
		func_519(0);
	}
	func_55(29);
	Global_1610316[player_id() /*174*/].f_10.f_51 = func_11();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (iParam0)
	{
		func_492();
	}
	if (!func_63(player_id()))
	{
		func_503();
		clear_bit(&(Global_1727391.f_3), true);
	}
}

void func_551()
{
	if (func_360(player_id()))
	{
		func_55(25);
	}
}

void func_552(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 > 0)
	{
		if (func_88() != func_11())
		{
			if (func_555(player_id()) == player_id())
			{
				Global_2459488.f_35[func_554(iParam0)] = 1;
			}
		}
		uVar0 = func_554(159);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(157);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(148);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(164);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(142);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(152);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(166);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(170);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(173);
		if (func_553(uVar0, Global_262145.f_10545, iParam1))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_553(auto uParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if ((!func_220(player_id(), 19) && !func_220(player_id(), 20)) && !func_220(player_id(), 9))
		{
			return false;
		}
	}
	if (Global_2459488.f_35[uParam0] == 1 && func_21(&(Global_2459488[uParam0 /*2*/])))
	{
		if (func_442(&(Global_2459488[uParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[uParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

auto func_555(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_556(int iParam0)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 > 0)
	{
		if (func_88() != func_11())
		{
			Global_2459488.f_35[func_554(iParam0)] = 1;
		}
		uVar0 = func_554(155);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(163);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(160);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(153);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(162);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(154);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(171);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_554(172);
		if (func_553(uVar0, Global_262145.f_10546, 0))
		{
			func_8(&(Global_2459488[uVar0 /*2*/]));
			func_20(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

void func_557(int iParam0)
{
	if (!func_558(Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/], func_559(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/] = {func_559()};
	}
	if (!func_558(Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/], func_559(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/] = {func_559()};
	}
}

int func_558(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_559()
{
	Vector3 vVar0;
	
	return vVar0;
}

int func_560(int iParam0)
{
	if (func_561(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

bool func_561(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_28 != -1))
	{
		return true;
	}
	return false;
}

void func_562()
{
	clear_bit(&(Global_2460486.f_1643), 28);
	clear_bit(&(Global_2460486.f_1643), 29);
	func_563(24);
}

void func_563(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	clear_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_564(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	sVar0 = get_this_script_name();
	Var1 = Global_1727400;
	Var1.f_1 = Global_1727400.f_1;
	Var1.f_2 = Global_1727400.f_2;
	Var1.f_3 = Global_1727400.f_3;
	Var1.f_4 = Global_1727400.f_4;
	Var1.f_5 = Global_1727400.f_5;
	Var1.f_6 = Global_1727400.f_6;
	Var1.f_7 = Global_1727400.f_7;
	Var1.f_8 = Global_1727400.f_8;
	Var1.f_9 = Global_1727400.f_9;
	Var1.f_10 = Global_1727400.f_10;
	Var1.f_11 = Global_1727400.f_11;
	Var1.f_12 = Global_1727400.f_12;
	Var1.f_13 = Global_1727400.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = {Var1};
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = {Var1};
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = {Var1};
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = uParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = {Var1};
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (are_strings_equal(sVar0, "GB_ASSAULT"))
		{
			Var82 = {Var1};
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = uParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = {Var1};
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = {Var1};
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = {Var1};
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = {Var1};
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_565();
}

void func_565()
{
	struct<18> Var0;
	
	Global_1727400 = {Var0};
}

int func_566(int iParam0)
{
	return is_bit_set(Global_1572926, iParam0);
}

bool func_567(struct<20> Param0)
{
	func_575(func_576(Param0), Param0);
	func_571(164, 0);
	reserve_network_mission_objects(0);
	func_568(0, -1, 0);
	network_register_host_broadcast_variables(&Local_129, 22);
	network_register_player_broadcast_variables(&vLocal_151, 97);
	set_this_script_can_be_paused(0);
	return true;
}

bool func_568(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_570();
			}
			else
			{
				return false;
			}
		}
		if (!func_569())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_570();
					}
					else
					{
						return false;
					}
				}
				if (func_544())
				{
					if (!iParam2)
					{
						func_570();
					}
					else
					{
						return false;
					}
				}
				if (func_542(155))
				{
					if (!iParam2)
					{
						func_570();
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
					func_570();
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
				func_570();
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
			func_570();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_569()
{
	return Global_1315888;
}

void func_570()
{
	terminate_this_thread();
}

void func_571(int iParam0, int iParam1)
{
	func_574();
	func_573();
	if ((iParam0 != 0 && network_is_player_active(iParam1)) && func_394(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_1727386, false);
				break;
			}
	}
	if (!func_176() && !func_177(player_id(), 1))
	{
		if (func_58())
		{
			func_504(3);
		}
		func_504(4);
	}
	if (func_86(0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_51 = func_88();
	}
	func_572();
}

void func_572()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_11();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

void func_573()
{
	func_563(33);
	func_563(34);
	func_563(35);
	func_563(36);
	func_563(37);
	func_563(38);
	func_563(39);
	func_563(40);
	func_563(43);
	func_563(41);
	func_563(54);
	func_563(42);
	func_563(47);
}

void func_574()
{
	struct<14> Var0;
	
	Global_1727400 = {Var0};
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

void func_575(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_570();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_576(int iParam0)
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

