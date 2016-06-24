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
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
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
	int iLocal_50 = 0;
	float fLocal_51 = 0;
	float fLocal_52 = 0;
	float fLocal_53 = 0;
	float fLocal_54 = 0;
	float fLocal_55 = 0;
	auto uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_51 = -0.05f;
	fLocal_52 = 0.92f;
	fLocal_53 = 1.94f;
	fLocal_54 = 2.99f;
	fLocal_55 = 3.7f;
	iLocal_63 = 1000;
	iLocal_64 = 3333;
	fLocal_65 = 0f;
	iLocal_72 = true;
	network_set_script_is_safe_for_network_game();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		terminate_this_thread();
	}
	iLocal_58 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_67 = 0;
	func_153(iLocal_68);
	func_152();
	func_150(&Global_2563627);
	func_149(&Global_2563627, 1);
	func_147(&uLocal_69);
	while (true)
	{
		if (Global_25366 != iLocal_67)
		{
			if (iLocal_67 == 0 && Global_25366 != 0)
			{
				if (is_ps3_version() || is_orbis_version())
				{
					func_146("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_146("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_67 != 0 && Global_25366 == 0)
			{
			}
		}
		iLocal_67 = Global_25366;
		if (!func_145(14))
		{
			if (!has_achievement_been_passed(24))
			{
				func_136();
			}
			if (!has_achievement_been_passed(25))
			{
				func_134();
			}
			if (Global_25129)
			{
				if (!has_achievement_been_passed(12))
				{
					iVar0 = func_119(1);
					if (iVar0 > 0)
					{
						func_118(12, iVar0);
						STATS::STAT_SET_INT(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70)
					{
						func_112(12, 1);
					}
				}
				Global_25129 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_68++;
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_58)
					{
						func_101(0);
						iLocal_58 = GAMEPLAY::GET_GAME_TIMER() + iLocal_63;
					}
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_59)
					{
						if (!has_achievement_been_passed(14) || iLocal_66 == 1)
						{
							if (func_100(53))
							{
								func_99();
							}
						}
						iLocal_59 = GAMEPLAY::GET_GAME_TIMER() + iLocal_64;
					}
				}
			}
			func_91(&Global_2563627);
			func_1();
		}
		else
		{
			func_91(&Global_2563627);
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	auto uVar0;
	int iVar1;
	
	if (!func_90(&Global_2563627))
	{
		return;
	}
	if (!Global_69489)
	{
		if (iLocal_74)
		{
			iLocal_74 = 0;
		}
		return;
	}
	if (!func_87())
	{
		return;
	}
	if (iLocal_72)
	{
		if (!func_85(3, -1))
		{
			return;
		}
		if (!func_85(5, -1))
		{
			return;
		}
	}
	if (iLocal_74)
	{
		return;
	}
	uVar0 = _0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_73 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
	{
		func_84();
		iLocal_74 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (!has_achievement_been_passed(33))
	{
		if (func_81())
		{
			func_112(33, 1);
		}
	}
	if (!has_achievement_been_passed(29))
	{
		if (func_77(&uLocal_69) > 5f)
		{
			func_19(PLAYER::PLAYER_PED_ID());
			func_147(&uLocal_69);
		}
	}
	iVar0 = func_17(func_18(-1), 0);
	if (iVar0 >= 100)
	{
		if (!has_achievement_been_passed(36))
		{
			func_112(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!has_achievement_been_passed(35))
		{
			func_112(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!has_achievement_been_passed(34))
		{
			func_112(34, 1);
		}
	}
	if (!has_achievement_been_passed(37))
	{
		func_15(0);
	}
	if (!has_achievement_been_passed(38))
	{
		if (func_14(joaat("mpply_total_custom_races_won")) >= 5)
		{
			func_112(38, 1);
		}
	}
	if (!has_achievement_been_passed(39))
	{
		if (func_13(48, -1) >= 10)
		{
			func_112(39, 1);
		}
	}
	if (!has_achievement_been_passed(40))
	{
		if (func_13(52, -1) > 0)
		{
			func_112(40, 1);
		}
	}
	if (!has_achievement_been_passed(41))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_2084.f_18, true))
		{
			func_112(41, 1);
		}
	}
	if (!has_achievement_been_passed(43))
	{
		if (func_12(748, -1, 0) >= 30)
		{
			func_112(43, 1);
		}
	}
	if (!has_achievement_been_passed(44))
	{
		if (func_13(14, -1) >= 20)
		{
			func_112(44, 1);
		}
	}
	if (!has_achievement_been_passed(45))
	{
		func_10(0);
	}
	if (!has_achievement_been_passed(48))
	{
		if (func_7(11, -1, -1))
		{
			func_112(48, 1);
		}
	}
	if (!has_achievement_been_passed(49))
	{
		func_3(0);
	}
}

bool func_3(int iParam0)
{
	if (!func_87())
	{
		return false;
	}
	if (!Global_69489)
	{
		return false;
	}
	if (has_achievement_been_passed(49))
	{
		return false;
	}
	if (iParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	if (!func_4(102, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	if (!func_4(101, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	func_112(49, 1);
	return true;
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_5(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

auto func_6()
{
	return Global_1312747;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	uVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	return iVar0;
}

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

bool func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_87())
	{
		return false;
	}
	if (has_achievement_been_passed(45))
	{
		return false;
	}
	if (!Global_69489)
	{
		return false;
	}
	iVar2 = func_12(749, -1, 0);
	iVar0 = false;
	while (iVar0 < 9)
	{
		if (func_11(iVar2, iVar0, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_112(45, 1);
		return true;
	}
	return false;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::IS_BIT_SET(iParam0, iParam1);
	if (!iParam2)
	{
		return iVar0;
	}
	switch (iParam1)
	{
		case 0:
			return iVar0;
		
		case 1:
			return iVar0;
		
		case 2:
			return iVar0;
		
		case 3:
			return iVar0;
		
		case 4:
			return iVar0;
		
		case 5:
			return iVar0;
		
		case 6:
			return iVar0;
		
		case 7:
			return iVar0;
		
		case 8:
			return iVar0;
		
		default:
	}
	return false;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[iParam0 /*5*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	int iVar0;
	
	if (has_achievement_been_passed(37))
	{
		return false;
	}
	if (!func_87())
	{
		return false;
	}
	if (!Global_69489)
	{
		return false;
	}
	if (iParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 -= func_13(58, -1);
		iVar0 -= func_13(57, -1);
	}
	if (func_16(8, -1))
	{
		func_112(37, 1);
		return true;
	}
	return false;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492706[iParam0 /*5*/][func_5(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
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
				iVar3 = 1;
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

auto func_18(int iParam0)
{
	return Global_1347756[func_5(iParam0)];
}

void func_19(int iParam0)
{
	int iVar0;
	struct<134> Var1;
	
	Var1 = 44;
	Var1.f_133 = 50;
	if (has_achievement_been_passed(29))
	{
		return;
	}
	func_73(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (func_20(iParam0, Var1[iVar0 /*3*/]))
		{
			func_112(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_133)
	{
		if (func_20(iParam0, Var1.f_133[iVar0 /*3*/]))
		{
			func_112(29, 1);
			return;
		}
		iVar0++;
	}
}

bool func_20(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<6> Var45;
	
	if (iParam1 == -61829581)
	{
		return false;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (!has_ped_got_weapon(iParam0, iParam1, 0))
	{
		return false;
	}
	iVar39 = func_72(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar39 == -1 || get_num_dlc_weapon_components(iVar39) < 3))
	{
		return false;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, iParam1, iVar44, 0))
	{
		if (Var45.f_4 == -571619404)
		{
			iVar41++;
		}
		if (Var45.f_4 == 196630833)
		{
			iVar40++;
		}
		if (has_ped_got_weapon_component(iParam0, iParam1, Var45))
		{
			if (Var45.f_4 == -571619404)
			{
				iVar43 = Var45.f_5;
			}
			else if (Var45.f_4 == 196630833)
			{
				iVar42 = Var45.f_5;
			}
		}
		else if (((Var45.f_4 == -571619404 || Var45.f_4 == 196630833) || Var45.f_4 == -1843287667) || Var45.f_4 == 962500902)
		{
		}
		else
		{
			return false;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return false;
	}
	if (iVar41 > iVar43)
	{
		return false;
	}
	if (get_weapon_tint_count(iParam1) > 0 && get_ped_weapon_tint_index(iParam0, iParam1) == 0)
	{
		return false;
	}
	return true;
}

int func_21(auto uParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	auto uVar12;
	struct<4> Var51;
	
	func_71(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_pistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_pistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_pi_supp_02"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_pistol_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_combatpistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_combatpistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_combatpistol_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_appistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_appistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_appistol_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_microsmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_microsmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_microsmg_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_smg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_smg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_smg_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_scope_macro_02"), 196630833, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 6:
					func_71(uParam0, joaat("component_smg_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_assaultrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_assaultrifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_assaultrifle_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 6:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 7:
					func_71(uParam0, joaat("component_assaultrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_carbinerifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_carbinerifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_carbinerifle_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_railcover_01"), -1843287667, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 6:
					func_71(uParam0, joaat("component_at_scope_medium"), 196630833, 1, 0);
					break;
				
				case 7:
					func_71(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
				
				case 8:
					func_71(uParam0, joaat("component_carbinerifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_advancedrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_advancedrifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_scope_small"), 196630833, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_advancedrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_mg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_mg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_scope_small_02"), 196630833, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_mg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_combatmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_combatmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_scope_medium"), 196630833, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_combatmg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_at_sr_supp"), 1863181664, 1, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_assaultshotgun_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_assaultshotgun_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_sniperrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_scope_large"), 196630833, 1, 1);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_scope_max"), 196630833, 2, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_sniperrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_heavysniper_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_at_scope_large"), 196630833, 1, 1);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_scope_max"), 196630833, 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_scope_small"), 196630833, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_minigun_clip_01"), -571619404, 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_assaultsmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_assaultsmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_71(uParam0, joaat("component_assaultsmg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_pistol50_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_71(uParam0, joaat("component_pistol50_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_71(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_71(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_71(uParam0, joaat("component_pistol50_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = func_72(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = false;
				while (iVar11 < get_num_dlc_weapon_components(iVar10))
				{
					if (get_dlc_weapon_component_data(iVar10, iVar11, &Var51))
					{
						if (Var51 == -571619404 || Var51 == 291640902)
						{
							iVar1++;
						}
						else if (Var51 == 679107254 || Var51 == -1572840598)
						{
							iVar2++;
						}
						else if (Var51 == 196630833 || Var51 == 1684637069)
						{
							iVar3++;
						}
						else if (Var51 == -1843287667 || Var51 == 497110245)
						{
							iVar4++;
						}
						else if (Var51 == -1322016827 || Var51 == -546751811)
						{
							iVar5++;
						}
						else if (Var51 == 1863181664 || Var51 == 945598191)
						{
							iVar6++;
						}
						else if (Var51 == 1731751835)
						{
							iVar7++;
						}
						else if (Var51 == 962500902)
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var51 == -571619404 || Var51 == 291640902)
							{
								iVar0 = iVar1;
							}
							else if (Var51 == 679107254 || Var51 == -1572840598)
							{
								iVar0 = iVar2;
							}
							else if (Var51 == 196630833 || Var51 == 1684637069)
							{
								iVar0 = iVar3;
							}
							else if (Var51 == -1843287667 || Var51 == 497110245)
							{
								iVar0 = iVar4;
							}
							else if (Var51 == -1322016827 || Var51 == -546751811)
							{
								iVar0 = iVar5;
							}
							else if (Var51 == 1863181664 || Var51 == 945598191)
							{
								iVar0 = iVar6;
							}
							else if (Var51 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var51 == 962500902)
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_71(uParam0, Var51.f_3, Var51, iVar0, Var51.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (iParam3)
	{
		*uParam0.f_2 = func_22(iParam1, *uParam0);
	}
	return *uParam0.f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	auto uVar67;
	struct<6> Var106;
	char* sVar128;
	char[16] cVar144;
	float fVar148;
	
	iVar0 = false;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_70() && (func_69() || func_68()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_70() && (func_69() || func_68()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_70() && (func_69() || func_68()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = false;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case 371102273:
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_72(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = false;
					while (iVar3 < get_num_dlc_weapon_components(iVar2))
					{
						if (get_dlc_weapon_component_data(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (!func_67(iParam1))
								{
									Var43.f_5 = -1;
								}
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (func_70() && (func_69() || func_68()))
									{
										iVar0 = false;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2880);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4330);
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4331);
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8528;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4408);
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2881);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4332);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4333);
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9895;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4403);
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2883);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4334);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4335);
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8527;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4397);
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2884);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4338);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4340);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4339);
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8531;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4407);
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2885);
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_13494;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4341);
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4343);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4342);
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8530;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4412);
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2887);
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_13489;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4351);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4348);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4350);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4349);
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8524;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4398);
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2888);
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_13488;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4359);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4356);
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4358);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4357);
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8526;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4401);
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2890);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4361);
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4363);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4362);
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8525;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4396);
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2891);
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_9896;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4406);
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2892);
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4386);
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4387);
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9897;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4402);
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4368);
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4369);
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_9892;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4410);
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2894);
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4372);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4373);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4374);
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4375);
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4376);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4377);
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8533;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4413);
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4378);
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4379);
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4388);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4384);
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4385);
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2886);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4344);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4347);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4345);
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9893;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4346);
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_5006;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5584;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9894;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5589;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_13491;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5592;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5588;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5586;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5591;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_9898;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5590;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5594;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5587;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5614;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5597;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5600;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5595;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5596;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5598;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_9899;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_6070;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6071;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6725;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_13495;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6726;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6727;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6728;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6731;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6732;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6734;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6735;
						break;
					
					case 371102273:
						iVar0 = Global_262145.f_6736;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_12052);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4370);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4371);
						break;
				}
				if (func_70() && (func_69() || func_68()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2882);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4336);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4337);
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8529;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4409);
						break;
				}
				if (func_70() && (func_69() || func_68()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8532;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4411);
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_8844;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4416);
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_8845;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4417);
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_8846;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4418);
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_8847;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4419);
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_8848;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4420);
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_8849;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4421);
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_8850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4422);
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_8851;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4423);
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_8852;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4424);
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_8869;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4426);
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_13493;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8870;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4427);
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = false;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_10740;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_10741;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_10798;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_10739;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_11982;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_13490;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = false;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_13492;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 2400;
						break;
				}
				break;
			
			default:
				iVar65 = func_72(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = false;
					while (iVar66 < get_num_dlc_weapon_components(iVar65))
					{
						if (get_dlc_weapon_component_data(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_65())
	{
		StringCopy(&cVar144, func_63(iParam1, iParam0), 16);
		func_60(&sVar128, cVar144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_61(iParam0), -1, -1);
		if (_0xBD4D7EAF8A30F637(&sVar128))
		{
			iVar0 = _network_shop_get_price(get_hash_key(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_23(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_65())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = floor(to_float(*iParam1) * fParam2);
	}
	if (!Global_69489)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_50 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = floor(to_float(*iParam1) * Global_262145.f_76);
			fVar1 += to_float(Global_262145.f_119) / 100f;
		}
	}
	if (iLocal_50 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = floor(to_float(*iParam1) * Global_262145.f_76);
			if (func_24())
			{
				fVar1 += to_float(Global_262145.f_119) / 100f;
				iLocal_50 = 1;
			}
			else
			{
				iLocal_50 = -1;
			}
		}
	}
	fVar0 = 1f - fVar1;
	*iParam1 = floor(to_float(*iParam1) * fVar0);
	return fVar0;
}

bool func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return false;
	}
	if (func_87())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = to_float(iVar1) / to_float(iVar0) * 100f;
			if (fVar2 > IntToFloat(Global_262145.f_118) && iVar0 >= 8)
			{
				return true;
			}
		}
	}
	return false;
}

int func_25()
{
	int iVar0;
	
	iVar0 += Global_1347647;
	iVar0 += Global_1347650;
	return iVar0;
}

int func_26()
{
	int iVar0;
	
	iVar0 += Global_1347648;
	iVar0 += Global_1347649;
	iVar0 += Global_1347647;
	iVar0 += Global_1347650;
	iVar0 += Global_1347652;
	iVar0 += Global_1347651;
	iVar0 += func_14(joaat("mpply_exploits"));
	iVar0 += func_14(joaat("mpply_vc_annoyingme"));
	iVar0 += func_14(joaat("mpply_vc_hate"));
	iVar0 += func_14(joaat("mpply_bad_crew_name"));
	iVar0 += func_14(joaat("mpply_bad_crew_motto"));
	iVar0 += func_14(joaat("mpply_bad_crew_status"));
	iVar0 += func_14(joaat("mpply_bad_crew_emblem"));
	iVar0 += func_14(joaat("mpply_playermade_title"));
	iVar0 += func_14(joaat("mpply_playermade_desc"));
	return iVar0;
}

bool func_27()
{
	struct<7> Var0;
	struct<7> Var7;
	
	get_posix_time(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = {func_51(joaat("mpply_started_mp"))};
	if (func_28(Var7, Var0, 7))
	{
		return true;
	}
	return false;
}

bool func_28(struct<7> Param0, struct<7> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param7);
	iVar1 = func_39(Param0, iParam14);
	if (iVar1 == -15)
	{
		return false;
	}
	if (func_29(iVar0, iVar1) == 1)
	{
		return true;
	}
	return false;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return true;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_30(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_31(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_32(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_33(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_34(int iParam0)
{
	return (iParam0 && 15);
}

auto func_35(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_36(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

auto func_39(struct<7> Param0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
}

void func_42(auto uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_43(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_44(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_46(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_47(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_48(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return true;
	}
	return false;
}

auto func_49(struct<6> Param0, auto uParam1)
{
	auto uVar0;
	
	if (Param0 > 0)
	{
		func_42(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_51(int iParam0)
{
	auto uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (stat_get_date(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var[] uVar3 = new var[6];
	int iVar10;
	
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		uVar3[0] = func_53(1, iVar0);
		uVar3[1] = func_53(3, iVar0);
		uVar3[2] = func_53(2, iVar0);
		uVar3[3] = func_53(4, iVar0);
		uVar3[4] = func_53(5, iVar0);
		uVar3[5] = func_53(0, iVar0);
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 3)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 1;
		}
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 2)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 2;
		}
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 1)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

auto func_54(int iParam0, auto uParam1)
{
	return Global_101154.f_17837[uParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_55(int iParam0)
{
	return iParam0 < 3;
}

auto func_56()
{
	func_57();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_58(PLAYER::PLAYER_PED_ID());
			if (func_55(iVar0) && (!func_145(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_55(Global_101154.f_1826.f_539.f_3549))
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

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_55(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_60(char* sParam0, struct<4> Param1, int iParam2, int iParam3, int iParam4, auto uParam5, int iParam6, int iParam7)
{
	switch (get_hash_key(&Param1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&Param1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&Param1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&Param1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&Param1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&Param1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&Param1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&Param1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &Param1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 4:
			if (iParam5 == Global_68041)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &Param1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1) || get_hash_key(&Param1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else if (iParam7 == 40)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1))
				{
					return;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &Param1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			break;
	}
}

int func_61(int iParam0)
{
	return func_62(iParam0);
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
	}
	return 0;
}

char* func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_72(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar0))
					{
						if (get_dlc_weapon_component_data(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_64(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

auto func_64(auto uParam0)
{
	return uParam0;
}

bool func_65()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_66())
	{
		return true;
	}
	return false;
}

bool func_66()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return false;
			}
		
		default:
	}
	return true;
}

bool func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 2) || GAMEPLAY::IS_BIT_SET(Global_25, 4))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 2) || GAMEPLAY::IS_BIT_SET(iVar0, 4))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 8))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, 2) || GAMEPLAY::IS_BIT_SET(iVar3, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 5))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, true) || GAMEPLAY::IS_BIT_SET(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, true) || GAMEPLAY::IS_BIT_SET(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, true) || GAMEPLAY::IS_BIT_SET(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				GAMEPLAY::SET_BIT(&iVar4, true);
				GAMEPLAY::SET_BIT(&iVar4, 3);
				GAMEPLAY::SET_BIT(&iVar4, 5);
				GAMEPLAY::SET_BIT(&Global_25, true);
				GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar4, true);
					GAMEPLAY::SET_BIT(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_70()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_71(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	*uParam0.f_4 = iParam2;
	*uParam0.f_5 = iParam3;
	*uParam0.f_1 = iParam4;
}

int func_72(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_73(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_76(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_76(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_75(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_75(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_74(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_74(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_72(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

float func_77(auto uParam0)
{
	if (func_80(uParam0))
	{
		if (func_79(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_78(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

float func_78(int iParam0)
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

int func_79(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_80(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

int func_81()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_83())
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	return func_4(124, -1);
}

auto func_82()
{
	return Global_1315901;
}

auto func_83()
{
	return Global_1315903;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!has_achievement_been_passed(iVar0))
		{
			if (_0x418DC16FAE452C1C(iVar0))
			{
				func_112(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!has_achievement_been_passed(iVar0))
		{
			if (_0x418DC16FAE452C1C(iVar0))
			{
				func_112(iVar0, 1);
			}
		}
		iVar0++;
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_86(iParam1);
	iVar1 = get_profile_setting(iVar0);
	return GAMEPLAY::IS_BIT_SET(iVar1, iParam0);
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_87()
{
	if (func_89() && func_88(0))
	{
		return true;
	}
	return false;
}

auto func_88(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_89()
{
	return func_88(func_6() + 1);
}

int func_90(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

void func_91(auto uParam0)
{
	float fVar0;
	
	fVar0 = Global_2563626;
	*uParam0.f_72 += get_frame_time();
	if (!func_90(uParam0))
	{
		return;
	}
	if (func_98(uParam0) < 0f)
	{
		func_97(uParam0, 0);
		return;
	}
	if (func_145(14))
	{
		fVar0 = 10f;
	}
	if (func_98(uParam0) < fVar0)
	{
		return;
	}
	if (func_96(uParam0, 0))
	{
		return;
	}
	if (func_94(*uParam0[0]))
	{
		func_93(uParam0);
		func_92(uParam0);
		func_97(uParam0, 0);
	}
}

void func_92(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_96(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_93(auto uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_96(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0 - 1] = *uParam0[iVar0];
		iVar0++;
	}
}

bool func_94(int iParam0)
{
	if (has_achievement_been_passed(iParam0))
	{
		return false;
	}
	if (func_145(14) && !func_95(iParam0))
	{
		return false;
	}
	if (!give_achievement_to_player(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0))
	{
		return true;
	}
	return false;
}

bool func_95(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_96(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_97(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_98(auto uParam0)
{
	return *uParam0.f_72;
}

bool func_99()
{
	float fVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_69489)
	{
		return false;
	}
	if (is_player_playing(player_id()))
	{
		if (is_player_control_on(player_id()))
		{
			fVar0 = _0xE0130B41D3CF4574();
			if (fVar0 > 0.01f && GAMEPLAY::IS_PC_VERSION())
			{
				func_118(14, floor(fVar0 * 100f));
			}
			if (fVar0 >= 0.975f)
			{
				func_112(14, 1);
				return true;
			}
		}
	}
	return false;
}

int func_100(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_101(int iParam0)
{
	if (Global_69489)
	{
		if (iParam0)
		{
			func_10(iParam0);
		}
		func_3(iParam0);
		func_15(iParam0);
		if (iParam0)
		{
		}
	}
	func_111(iParam0);
	func_104(iParam0);
	func_103();
	func_102();
	if (iParam0)
	{
		if (func_80(&uLocal_60))
		{
		}
	}
}

bool func_102()
{
	int iVar0;
	int iVar1;
	
	if (has_achievement_been_passed(50))
	{
		return false;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 += _0xE0E854F5280FB769(joaat("first_person_cam_time")) * 24;
	iVar0 += _0xF2D4B2FE415AAFC3(joaat("first_person_cam_time"));
	iVar1 += _0xE0E854F5280FB769(joaat("mp_first_person_cam_time")) * 24;
	iVar1 += _0xF2D4B2FE415AAFC3(joaat("mp_first_person_cam_time"));
	if (iVar0 + iVar1 >= 15)
	{
		func_112(50, 1);
		return true;
	}
	return false;
}

bool func_103()
{
	int iVar0;
	
	if (has_achievement_been_passed(22))
	{
		return false;
	}
	iVar0 = _0x996DD1E1E02F1008();
	if (iVar0 > 0)
	{
		if (Global_25381 < iVar0)
		{
			if (Global_25381 >= 0)
			{
				func_118(22, iVar0);
			}
			Global_25381 = iVar0;
		}
	}
	if (_0x996DD1E1E02F1008() >= 50)
	{
		func_112(22, 1);
		return true;
	}
	return false;
}

bool func_104(int iParam0)
{
	var[] uVar0 = new var[6];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (has_achievement_been_passed(17))
	{
		return false;
	}
	uVar0[0] = func_110();
	uVar0[1] = func_109();
	uVar0[2] = func_108();
	uVar0[3] = func_107();
	uVar0[4] = func_106();
	uVar0[5] = func_105();
	iVar7 = false;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (uVar0[iVar8])
		{
			iVar7++;
		}
		iVar8++;
	}
	STATS::STAT_GET_INT(joaat("num_discipline_gold_earned"), &iVar9, -1);
	if (iVar7 > iVar9 && iVar7 > 0)
	{
		STATS::STAT_SET_INT(joaat("num_discipline_gold_earned"), iVar7, 1);
		func_118(17, iVar7);
	}
	if (iParam0)
	{
	}
	if (!uVar0[0])
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!uVar0[1])
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!uVar0[2])
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!uVar0[3])
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!uVar0[4])
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!uVar0[5])
	{
		if (iParam0)
		{
		}
		return false;
	}
	func_112(17, 1);
	return true;
}

bool func_105()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_101154.f_1451[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return true;
		}
		else if (Global_101154.f_1451[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return true;
		}
		else if (Global_101154.f_1451[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_106()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_101154.f_17837[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return true;
		}
		else if (Global_101154.f_17837[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return true;
		}
		else if (Global_101154.f_17837[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_107()
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_1, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_108()
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 5)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_2, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_109()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_101154.f_17706.f_19[iVar0] == 1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_110()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_101154.f_18701[iVar0] == 1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_118(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_112(27, 1);
	return true;
}

int func_112(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_113(iParam0, iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	if (func_145(14) && !func_95(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_90(&Global_2563627))
	{
		if (func_116(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_114(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_114(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_145(14) && !func_95(iParam1))
	{
		return false;
	}
	if (func_116(uParam0, iParam1))
	{
		return false;
	}
	if (func_98(uParam0) < 0f)
	{
		func_97(uParam0, 0);
	}
	func_150(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_115(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_115(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_145(14) && !func_95(iParam1))
	{
		return false;
	}
	if (func_116(uParam0, iParam1))
	{
		return false;
	}
	if (func_98(uParam0) < 0f)
	{
		func_97(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_96(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_116(auto uParam0, int iParam1)
{
	return func_117(uParam0, iParam1) != -1;
}

int func_117(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_132(iParam0) + func_120(iParam0);
	if (iParam0)
	{
	}
	return iVar0;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = false;
	iVar4 = false;
	if (iParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_17264)
	{
		if (Global_101154.f_17264[iVar0 /*6*/].f_3 != -1 && func_130(iVar0, 7))
		{
			iVar3 = false;
			iVar4 = false;
			iVar5 = 0;
			while (iVar5 < func_128(iVar0, 7))
			{
				iVar7 = func_126(iVar0, 7, iVar5);
				if (!Global_55974[iVar7 /*13*/].f_7)
				{
					if (func_123(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_122(iVar4, iVar3, 0);
			iVar2 = func_121(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (iParam0)
				{
				}
				iVar2 = Global_101154.f_1815[iVar0 - 52 /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iParam0)
	{
	}
	return iVar1;
}

int func_121(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_122(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = to_float(iParam0) / to_float(iParam1);
	fVar1 = 50f * fVar0 + 50f;
	fVar1 = to_float(ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

bool func_123(int iParam0)
{
	if (func_124(iParam0, func_125(Global_55974[iParam0 /*13*/].f_4)))
	{
		return true;
	}
	return false;
}

bool func_124(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (Global_55974[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return false;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return false;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_101154.f_29429[4 /*4*/] == func_56())
	{
		Global_55974[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_55974[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_55974[iParam0 /*13*/].f_2)
		{
			return true;
		}
	}
	else if (iParam1 >= Global_55974[iParam0 /*13*/].f_2)
	{
		return true;
	}
	return false;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return iVar0 - 1;
	}
	return -1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			return Global_82399[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_127(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return Global_82399[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_129(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return !GAMEPLAY::IS_BIT_SET(Global_82399[iParam0 /*34*/].f_15, 5);
			break;
		
		case 7:
			return func_131(iParam0);
			break;
		
		default:
			break;
	}
	return false;
}

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = false;
	iVar4 = false;
	if (iParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_7775.f_330)
	{
		if (Global_101154.f_7775.f_330[iVar0 /*6*/].f_3 != -1 && func_130(iVar0, 1))
		{
			iVar3 = false;
			iVar4 = false;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_128(iVar0, 1))
			{
				iVar7 = func_126(iVar0, 1, iVar5);
				if (!Global_55974[iVar7 /*13*/].f_7)
				{
					if (func_123(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_133(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_122(iVar4, iVar3, 0);
			iVar2 = func_121(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iParam0)
	{
	}
	return iVar1;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = func_125(Global_55974[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	is_entity_dead(PLAYER::PLAYER_PED_ID(), 0);
	if (!is_entity_in_water(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_112(25, 1);
		return;
	}
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = _get_ped_killer(PLAYER::PLAYER_PED_ID());
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (func_135(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
				{
					func_112(25, 1);
					return;
				}
			}
		}
	}
}

int func_135(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

void func_136()
{
	switch (iLocal_57)
	{
		case 0:
			fLocal_65 = 0f;
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				return;
			}
			if (get_player_wanted_level(player_id()) >= 3 && get_mission_flag() == 0)
			{
				if (func_141() == 2)
				{
					func_147(&uLocal_60);
					iLocal_57++;
				}
			}
			break;
		
		case 1:
			if (func_140() || is_player_switch_in_progress())
			{
				return;
			}
			if (get_player_wanted_level(player_id()) < 3)
			{
				func_139(&uLocal_60);
				iLocal_57 = 0;
				return;
			}
			if (get_mission_flag() == 1)
			{
				func_139(&uLocal_60);
				iLocal_57 = 0;
				return;
			}
			if (func_141() < 2)
			{
				func_139(&uLocal_60);
				iLocal_57 = 0;
				return;
			}
			if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_139(&uLocal_60);
				iLocal_57 = 0;
				return;
			}
			fLocal_65 = func_138(&uLocal_60);
			if (fLocal_65 >= 180f)
			{
				func_112(24, 1);
				func_137(&uLocal_60);
				iLocal_57++;
			}
			break;
		
		case 2:
			iLocal_57++;
			break;
	}
}

void func_137(auto uParam0)
{
	if (func_80(uParam0))
	{
		if (!func_79(uParam0))
		{
			*uParam0.f_2 = func_78(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
			GAMEPLAY::SET_BIT(uParam0, 2);
		}
	}
}

float func_138(auto uParam0)
{
	if (func_80(uParam0))
	{
		if (func_79(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_78(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return 0f;
}

void func_139(auto uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

int func_140()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_143(2);
	if (func_142(iVar1, 0) || GAMEPLAY::IS_BIT_SET(Global_87462, 2))
	{
		iVar0++;
	}
	iVar1 = func_143(1);
	if (func_142(iVar1, 0) || GAMEPLAY::IS_BIT_SET(Global_87462, true))
	{
		iVar0++;
	}
	iVar1 = func_143(0);
	if (func_142(iVar1, 0) || GAMEPLAY::IS_BIT_SET(Global_87462, false))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_58(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_143(iVar0) != iParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_87464, iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_143(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 == func_56())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_89089[func_144(iParam0)];
}

int func_144(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_145(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_146(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_147(auto uParam0)
{
	func_148(uParam0, 0f);
}

void func_148(auto uParam0, float fParam1)
{
	*uParam0.f_1 = func_78(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(uParam0, true);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	*uParam0.f_2 = 0f;
}

void func_149(auto uParam0, int iParam1)
{
	*uParam0.f_71 = iParam1;
	if (*uParam0.f_71)
	{
		func_97(uParam0, 0);
	}
}

void func_150(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_151(uParam0, iVar0);
		iVar0++;
	}
	func_97(uParam0, Global_2563626 - 0.5f);
}

void func_151(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 70;
	iVar0 = 1;
	while (iVar0 <= iVar1 - 1)
	{
		if (has_achievement_been_passed(iVar0))
		{
		}
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

