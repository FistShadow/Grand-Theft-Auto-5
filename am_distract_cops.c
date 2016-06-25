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
	struct<19> Local_96 = 0;
	auto uLocal_115 = 0;
	struct<4>[] Local_116 = new struct<4>[32];
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	auto uLocal_247 = 0;
	auto uLocal_248 = 0;
	auto uLocal_249 = 0;
	auto uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	struct<20> Local_253 = 0;
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
	sLocal_18 = "NULL";
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
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_228(player_id(), 0, 1))
	{
		func_220(Local_253);
	}
	else
	{
		func_217();
	}
	while (true)
	{
		func_216();
		if (func_206() || func_202(16))
		{
			func_217();
		}
		if (network_is_in_tutorial_session())
		{
			func_217();
		}
		switch (func_201(participant_id_to_int()))
		{
			case 0:
				if (func_200() == 1)
				{
					func_199();
					Local_116[participant_id_to_int() /*4*/] = 1;
				}
				else if (func_200() == 4)
				{
					Local_116[participant_id_to_int() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_200() == 1)
				{
					func_99();
				}
				else if (func_200() == 4)
				{
					func_14();
					Local_116[participant_id_to_int() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_96.f_18));
				if (func_12(&(Local_96.f_18)))
				{
					Local_116[participant_id_to_int() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_116[participant_id_to_int() /*4*/] = 4;
			
			case 4:
				func_217();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_200())
			{
				case 0:
					Local_96 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_96 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (Local_96.f_7 == 2)
	{
		return true;
	}
	return false;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_96.f_7)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
			{
				Local_96.f_7 = 1;
			}
			else if (func_9(&(Local_96.f_8), 480000, 0))
			{
				Var0.f_2 = 115;
				func_7(Var0, func_8(1));
				GAMEPLAY::SET_BIT(&(Local_96.f_1), true);
				Local_96.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_96.f_10), Local_96.f_12, 0))
	{
		if (func_9(&(Local_96.f_13), Local_96.f_15, 0))
		{
			Local_96.f_17++;
			Local_96.f_16 = func_6();
			func_5(&(Local_96.f_13));
		}
	}
	else
	{
		Local_96.f_7 = 2;
	}
}

void func_5(auto uParam0)
{
	*uParam0.f_1 = 0;
}

int func_6()
{
	switch (Local_96.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_96.f_16;
}

void func_7(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_8(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_228(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_9(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_10(uParam0, iParam2, 0);
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

void func_10(auto uParam0, int iParam1, int iParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_96 == 1)
	{
		if (network_is_participant_active(int_to_participantindex(iLocal_251)))
		{
			iVar0 = network_get_player_index(int_to_participantindex(iLocal_251));
			if (func_228(iVar0, 1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_116[iLocal_251 /*4*/].f_1, false))
					{
						iLocal_252 = 1;
						GAMEPLAY::SET_BIT(&(Local_96.f_1), false);
					}
				}
			}
		}
	}
	iLocal_251++;
	if (iLocal_251 == _network_get_num_participants_host())
	{
		if (iLocal_252 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_96.f_1), false);
			}
		}
		else
		{
			iLocal_252 = 0;
		}
		iLocal_251 = false;
	}
}

bool func_12(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_13(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	auto uVar1;
	auto uVar5;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_245, true))
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_116[participant_id_to_int() /*4*/].f_1, false) && get_player_wanted_level(player_id()) >= Local_96.f_16 - 1) && Local_116[participant_id_to_int() /*4*/].f_2 < 10)
		{
			Local_116[participant_id_to_int() /*4*/].f_2++;
		}
		if (Local_116[participant_id_to_int() /*4*/].f_2 > 0)
		{
			iVar0 = Local_116[participant_id_to_int() /*4*/].f_2 * Global_262145.f_6472;
			Global_2445403 = iVar0;
			func_82(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_79(iVar0, 1, 1, 0);
				if (func_78())
				{
					func_69(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					_0xFB6DB092FBAE29E6(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_68())
			{
				func_55(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_55(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(50, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (GAMEPLAY::IS_BIT_SET(iLocal_245, 4))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		GAMEPLAY::SET_BIT(&iLocal_245, true);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 += iParam1;
	func_16(iParam0, iVar0, iParam2);
}

void func_16(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_18(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_17(auto uParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

auto func_19()
{
	return Global_1312747;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_54(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_21(&Var0);
}

bool func_21(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_27(uParam0, *uParam0.f_16);
	func_24(uParam0);
	if (func_23(*uParam0.f_1))
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
				GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_22(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_22(int iParam0)
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

bool func_23(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_24(auto uParam0)
{
	if (func_26(*uParam0.f_1))
	{
		*uParam0.f_66 = func_25();
	}
}

int func_25()
{
	return 21;
}

bool func_26(int iParam0)
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

void func_27(auto uParam0, int iParam1)
{
	if (func_26(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_53())
	{
		return;
	}
	if (func_22(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_28(iParam1, -2, 0, 0);
		}
	}
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_49(iParam0))
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
	if (func_49(player_id()) || (func_48() && func_47()))
	{
		iVar0 = func_46();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_228(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_45(iParam1, iParam0, 0);
							}
							else
							{
								return func_36(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_36(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_45(iParam1, iParam0, 0);
				}
				else
				{
					return func_29(0, -1, 0);
				}
			}
			else
			{
				return func_29(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_45(iParam1, iParam0, 0);
		}
		else
		{
			return func_36(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_36(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	return func_30(player_id(), iParam0, iParam1, iParam2);
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_35(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_34(1);
				}
				else
				{
					return func_34(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_31(iVar0, iParam2, 1);
			}
			else
			{
				return func_31(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_34(1);
	}
	return func_34(0);
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_33(iParam0, iParam1);
	if (func_32(Global_1617379.f_70365))
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

bool func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_35(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_34(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_35(int iParam0, int iParam1, int iParam2)
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
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, false);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, true);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_44(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_35(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_34(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_43(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_34(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_39(iParam0);
	if (!iVar3 == -1)
	{
		return func_37(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
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

auto func_38(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_39(int iParam0)
{
	if (!iParam0 == func_53())
	{
		if (func_41(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_40(iParam0)];
		}
	}
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_53();
}

int func_41(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_42(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_53();
}

int func_42(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_53())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_43(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_45(int iParam0, int iParam1, int iParam2)
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
			if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 29))
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
		iVar0 = func_30(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_46()
{
	return Global_2359301.f_2;
}

int func_47()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_48()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_49(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return true;
	}
	if (func_50())
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

int func_50()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_52(-1, 0) == 8;
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

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_53()
{
	return -1;
}

void func_54(auto uParam0, auto uParam1, auto uParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_53();
	*uParam1.f_17 = func_53();
	*uParam1.f_18 = func_53();
	*uParam1.f_1 = uParam0;
	*uParam1.f_2 = 1;
	StringCopy(uParam1.f_19, sParam4, 16);
	StringCopy(uParam1.f_8, sParam3, 32);
	*uParam1.f_3 = uParam2;
	*uParam1.f_65 = 1;
	*uParam1.f_68 = 1;
	*uParam1.f_69 = 1;
	*uParam1.f_67 = 0;
	StringCopy(uParam1.f_23, "", 64);
	StringCopy(uParam1.f_39, "", 64);
}

void func_55(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	func_56(1, iParam0, sParam1, sParam2, iParam3, iParam4);
}

void func_56(int iParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	auto uVar0;
	int iVar1;
	
	uVar0 = uParam1;
	iVar1 = false;
	func_57(iParam0, sParam2, uVar0, iVar1, sParam3, iParam4, iParam5);
}

void func_57(auto uParam0, char* sParam1, auto uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam1) > 15)
	{
		return;
	}
	if (!is_string_null_or_empty(sParam4))
	{
		if (_0x43E4111189E54F0E(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_66();
	if (iVar0 == -1)
	{
		return;
	}
	func_65(iVar0);
	func_64(iVar0, uParam0);
	func_63(iVar0, uParam2, iParam3);
	func_62(iVar0, sParam1);
	if (is_string_null_or_empty(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_61(iVar0);
	if (!is_string_null_or_empty(sParam4))
	{
		func_59(iVar0, sParam4, iParam5);
	}
	if (!iParam6 == -99)
	{
		func_58(iVar0, iParam6);
	}
}

void func_58(int iParam0, int iParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_59(int iParam0, char* sParam1, int iParam2)
{
	StringCopy(&(Global_1332285.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!iParam2)
	{
		return;
	}
	func_60(iParam0);
}

void func_60(auto uParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[uParam0 /*16*/]), 5);
}

void func_61(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 4);
}

void func_62(int iParam0, char* sParam1)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, sParam1, 16);
	Global_1332285.f_59[iParam0 /*16*/].f_3 = {cVar0};
}

void func_63(int iParam0, auto uParam1, int iParam2)
{
	Global_1332285.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
		GAMEPLAY::CLEAR_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
		GAMEPLAY::CLEAR_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
	}
}

void func_64(int iParam0, auto uParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_65(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), false);
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_67(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1332285.f_59[iParam0 /*16*/], false);
}

bool func_68()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(0, 65535), false))
	{
		return true;
	}
	return false;
}

void func_69(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_78())
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
				func_70(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_70(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_70(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_78())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_19()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_77(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_76(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_71(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_72(iParam0);
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_78())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_75(iParam0))
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
		func_73(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_73(auto uParam0)
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
	func_74(uParam0.f_8.f_3);
	func_74(uParam0.f_8.f_16);
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

void func_74(auto uParam0)
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

int func_75(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_76(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_77(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_78())
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

bool func_78()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_79(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_80(iParam0, iParam1, iParam2, fParam3);
}

void func_80(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = iParam0 * iParam1;
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = 100f - fParam3;
		iVar1 = floor(IntToFloat(iVar0) * fVar2 / 100f);
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1587523[player_id() /*444*/].f_195.f_4 = iVar1;
	Global_1587523[player_id() /*444*/].f_195.f_3 += iVar1;
	if (iParam2 == 1)
	{
		func_81(iVar1, 0);
	}
}

void func_81(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	iParam0 = iParam0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_98())
		{
			if (func_97(0))
			{
				if (network_is_player_active(func_96()))
				{
					if (func_95() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_95();
						*iParam0 -= iVar0;
					}
					func_93(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_86("GB_BCUT_TICK1", func_96(), iVar0, 0, 0, 1, 1);
					}
					func_85(20);
					func_83(func_96(), iVar0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_228(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_84(iParam0));
	}
}

auto func_84(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_86(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_28(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_91(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_87(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_87(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_90() || !network_is_activity_session()) || !func_51(player_id(), 0))
	{
		return;
	}
	iVar0 = func_88(iParam2);
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

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_89(iVar0);
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

void func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_90()
{
	return is_dlc_present(-1762644250);
}

auto func_91(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_92(&cVar0);
}

auto func_92(char[4] cParam0)
{
	return cParam0;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_94(1);
	}
	else
	{
		iVar1 = func_94(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_94(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_95()
{
	return Global_262145.f_10328;
}

auto func_96()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_97(int iParam0)
{
	return func_41(player_id(), iParam0);
}

int func_98()
{
	return func_42(player_id());
}

void func_99()
{
	func_197();
	if (does_blip_exist(iLocal_246))
	{
		if (func_195())
		{
			set_blip_display(iLocal_246, 0);
		}
		else
		{
			set_blip_display(iLocal_246, 4);
		}
	}
	switch (Local_116[participant_id_to_int() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96.f_2, Local_96.f_5, Local_96.f_5, 1000f, false, true, 0))
			{
				func_172();
				GAMEPLAY::SET_BIT(&(Local_116[participant_id_to_int() /*4*/].f_1), false);
				GAMEPLAY::SET_BIT(&(Global_2460486.f_4430), false);
				Local_116[participant_id_to_int() /*4*/].f_3 = 1;
			}
			if (Local_96.f_7 > 1)
			{
				Local_116[participant_id_to_int() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_159();
			func_100();
			if (Local_96.f_7 > 1)
			{
				Local_116[participant_id_to_int() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_100()
{
	func_158();
	func_109();
	func_102();
	func_101();
}

void func_101()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 5))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 4))
		{
			if (Local_96.f_17 == 0)
			{
				GAMEPLAY::SET_BIT(&iLocal_245, 4);
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_245, 5);
			}
		}
		else if (!func_228(player_id(), 1, 1))
		{
			GAMEPLAY::SET_BIT(&iLocal_245, 5);
		}
	}
}

void func_102()
{
	if (((_get_ui_language_id() == 7 || _get_ui_language_id() == 8) || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		func_108();
	}
	else
	{
		func_107();
	}
	if (Local_96.f_12 - func_106(&(Local_96.f_10), 0, 0) >= 0)
	{
		func_103(Local_96.f_12 - func_106(&(Local_96.f_10), 0, 0), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_103(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_103(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_105(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_104(7, iVar0);
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

void func_104(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_105(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

int func_106(auto uParam0, int iParam1, int iParam2)
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

void func_107()
{
	Global_1339940.f_942 = 1;
}

void func_108()
{
	Global_1339940.f_941 = 1;
}

void func_109()
{
	if (func_9(&uLocal_247, 30000, 0))
	{
		switch (Local_96.f_16)
		{
			case 2:
				func_155(2097, 1, -1);
				break;
			
			case 3:
				func_155(2098, 1, -1);
				break;
			
			case 4:
				func_155(2099, 1, -1);
				break;
			
			case 5:
				func_155(2100, 1, -1);
				break;
		}
		func_110(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC", -1636175450, 2048546661, Global_262145.f_6473 * Local_96.f_16, 1, -1, 0, 0);
		Local_116[participant_id_to_int() /*4*/].f_2++;
		func_5(&uLocal_247);
	}
}

int func_110(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_116(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_111(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_114(iParam0, 1)};
	if (iParam0 == func_113(PLAYER::PLAYER_PED_ID()))
	{
		func_112(1);
	}
	func_116(vVar0, iParam1, 0, sParam2);
}

void func_112(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_113(int iParam0)
{
	return iParam0;
}

Vector3 func_114(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_115(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
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

int func_115(int iParam0)
{
	return iParam0;
}

void func_116(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_119(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_118();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_117();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_117()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_118()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_119(Vector3 vParam0, auto uParam1, auto uParam2)
{
	float fVar0;
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

auto func_120(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_121(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_121(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_154(player_id()) || func_153(player_id()))
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
	if (func_152(sParam2))
	{
	}
	if (func_151())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_149(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_148(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_145(0, &iVar1);
					break;
				
				case 3:
					func_145(1, &iVar1);
					break;
				
				case 1:
					func_142(&iVar1);
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
			func_155(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_132(func_141(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_155(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_126(iVar1);
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
				func_122(func_124(player_id()) + iVar1);
			}
			else
			{
				func_122(func_124(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_122(int iParam0)
{
	if (func_151())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_123(joaat("mpply_globalxp"), iParam0);
	}
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_124(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_228(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_125(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_125(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_125(int iParam0)
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

void func_126(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_131(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_129(func_130(&Var0));
			if (iVar13 == 0)
			{
				func_128(&Global_1347641, iParam0);
				func_127(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_128(&Global_1347642, iParam0);
				func_127(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_128(&Global_1347643, iParam0);
				func_127(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_128(&Global_1347644, iParam0);
				func_127(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_128(&Global_1347645, iParam0);
				func_127(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
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

void func_128(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_129(int iParam0)
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

auto func_130(auto uParam0)
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

struct<13> func_131(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	if (func_151())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_18(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_18(-1)])
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
		if (func_140(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_138(iParam0, 1);
		}
		func_137(632, iParam0, -1, 1);
		func_136(633, func_138(iParam0, 1), -1, 1);
		Global_1347756[func_18(-1)] = iParam0;
		func_133(7, 0);
	}
}

void func_133(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_135(iParam0, iParam1))
	{
		uVar0 = func_134();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_134()
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

bool func_135(int iParam0, auto uParam1)
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

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_18(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_18(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_18(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_18(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_18(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_18(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_18(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_18(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_18(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_18(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_18(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_18(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_18(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_18(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_18(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_18(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_18(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_18(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_18(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_18(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_18(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_18(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_18(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_18(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_138(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_139(iParam0, 0);
}

int func_139(int iParam0, int iParam1)
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

int func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_141(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_18(-1)];
			}
			else if (func_140(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_18(-1)];
	}
	return 0;
}

void func_142(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_35(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_144(player_id(), iVar5))
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
		iVar6 = round(func_143(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_143(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_143(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_144(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_131(iParam0)};
		Global_2459453 = {func_131(iParam1)};
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

void func_145(int iParam0, int iParam1)
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
				if (func_228(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_144(player_id(), iVar4))
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
			if (func_228(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_146(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_144(player_id(), iVar4))
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
		iVar5 = round(func_143(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_143(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_146(int iParam0, int iParam1)
{
	return vdist(func_147(iParam0), func_147(iParam1));
	return 0f;
}

Vector3 func_147(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

auto func_148(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_143(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_149(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_141(player_id()))
		{
			iParam0 = -func_141(player_id());
		}
	}
	if (func_150(8000, 0, 0) > 0)
	{
		if (func_150(8000, 0, 0) < iParam0 + func_141(player_id()))
		{
			iParam0 = func_150(8000, 0, 0) - func_141(player_id());
		}
	}
	return iParam0;
}

auto func_150(int iParam0, int iParam1, int iParam2)
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

bool func_151()
{
	return true;
}

bool func_152(char* sParam0)
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

int func_153(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_154(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, func_18(iParam2), 0);
	iVar0 += iParam1;
	if (!func_156(iParam0))
	{
		func_136(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_137(iParam0, iVar0, iParam2, 1);
	}
}

bool func_156(int iParam0)
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

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_158()
{
	if (func_9(&uLocal_249, 10000, 0))
	{
		if (get_player_wanted_level(player_id()) < Local_96.f_16)
		{
			set_player_wanted_level(player_id(), Local_96.f_16, 0);
			set_player_wanted_level_now(player_id(), 0);
		}
		_0xBC9490CA15AEA8FB(player_id());
	}
}

void func_159()
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96.f_2, Local_96.f_5, Local_96.f_5, 1000f, false, true, 0))
	{
		func_162();
		Local_116[participant_id_to_int() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96.f_2, Local_96.f_6, Local_96.f_6, 950f, false, true, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_245, false) && GAMEPLAY::IS_BIT_SET(iLocal_245, 3))
		{
			if (!is_help_message_being_displayed() && !func_161())
			{
				if (!func_195())
				{
					func_160("DCP_LEAVE", -1);
				}
				GAMEPLAY::SET_BIT(&iLocal_245, false);
			}
		}
	}
	else
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 3))
		{
			GAMEPLAY::SET_BIT(&iLocal_245, 3);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_245, false))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_245, false);
		}
	}
}

void func_160(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_161()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_162()
{
	func_5(&uLocal_247);
	func_5(&uLocal_249);
	func_163();
	GAMEPLAY::CLEAR_BIT(&(Local_116[participant_id_to_int() /*4*/].f_1), false);
	GAMEPLAY::CLEAR_BIT(&iLocal_245, 3);
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4430), false);
	if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 5))
	{
		GAMEPLAY::SET_BIT(&iLocal_245, 5);
	}
}

void func_163()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_245, 2))
	{
		func_164(1, 1);
		GAMEPLAY::CLEAR_BIT(&iLocal_245, 2);
	}
}

void func_164(int iParam0, int iParam1)
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
		func_171();
	}
	func_167(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_166(0);
	func_165();
}

void func_165()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_166(int iParam0)
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

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_169();
		func_168(8, 0, 0);
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
		func_169();
		func_168(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_168(int iParam0, int iParam1, int iParam2)
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

void func_169()
{
	func_170();
	Global_2404956.f_635 = 0;
}

void func_170()
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

void func_171()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_172()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 2))
	{
		func_191(Local_96.f_2, Local_96.f_6 * 1.5f, 0, 0, 1, 0);
		func_174(Local_96.f_2, Local_96.f_6, 0, 1);
		func_173(Local_96.f_2, 1, 0);
		GAMEPLAY::SET_BIT(&iLocal_245, 2);
	}
}

void func_173(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_174(Vector3 vParam0, auto uParam1, int iParam2, int iParam3)
{
	func_175(vParam0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_175(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5)
{
	struct<12> Var0;
	
	if (func_184(player_id()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_183(&vParam0, &vParam3);
		}
		Var0 = {vParam0};
		Var0.f_3 = {vParam3};
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_178(Var0))
		{
			Global_2404956.f_39.f_64 = func_177(player_id());
			func_176(Var0, uParam8);
		}
	}
}

void func_176(struct<12> Param0, auto uParam1)
{
	Global_2404956.f_347[uParam12 /*12*/] = {Param0};
	Global_2404956.f_347[uParam12 /*12*/].f_9 = 1;
}

int func_177(int iParam0)
{
	if (func_228(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_178(struct<12> Param0)
{
	struct<12>[] Var0 = new struct<12>[1];
	int iVar13;
	
	Var0[0 /*12*/] = {Param0};
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404956.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_179(Global_2404956.f_39[iVar13 /*12*/], &Var0))
			{
				return false;
			}
		}
		iVar13++;
	}
	return true;
}

bool func_179(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if (*(uParam12[iVar0 /*12*/]).f_9)
		{
			switch (*(uParam12[iVar0 /*12*/]).f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_182(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_180(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_182(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_180(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return false;
	}
	return true;
}

int func_180(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	fVar6 = fParam9 * 0.7071068f;
	vVar0 = {vParam6 - Vector(fVar6, fVar6, fVar6)};
	vVar3 = {vParam6 + Vector(fVar6, fVar6, fVar6)};
	return func_181(vParam0, vParam3, vVar0, vVar3);
}

bool func_181(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3)
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return true;
	}
	return false;
}

bool func_182(Vector3 vParam0, float fParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	
	vVar0 = {vParam4 - vParam0};
	if (vmag(vVar0) + fParam3 < fParam7)
	{
		return true;
	}
	return false;
}

void func_183(auto uParam0, auto uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar3.x = *uParam0;
	}
	if (*uParam0.f_1 <= *uParam1.f_1)
	{
		vVar0.y = *uParam0.f_1;
		vVar3.y = *uParam1.f_1;
	}
	else
	{
		vVar0.y = *uParam1.f_1;
		vVar3.y = *uParam0.f_1;
	}
	if (*uParam0.f_2 <= *uParam1.f_2)
	{
		vVar0.z = *uParam0.f_2;
		vVar3.z = *uParam1.f_2;
	}
	else
	{
		vVar0.z = *uParam1.f_2;
		vVar3.z = *uParam0.f_2;
	}
	*uParam0 = {vVar0};
	*uParam1 = {vVar3};
}

bool func_184(int iParam0)
{
	if ((func_187(iParam0, 1) || func_186(iParam0)) || func_185(iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

int func_187(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_177(iParam0) != 0;
	}
	return func_188(iParam0, iParam1);
}

bool func_188(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_189(iParam0))
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

int func_189(auto uParam0)
{
	return func_190(uParam0);
}

int func_190(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

void func_191(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_192(vParam0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_192(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	struct<12> Var0;
	
	if (func_184(player_id()) || uParam9)
	{
		if (Global_2404956.f_634)
		{
			func_194();
		}
		if (Var0.f_10 == 1)
		{
			func_183(&vParam0, &vParam3);
		}
		Var0 = {vParam0};
		Var0.f_3 = {vParam3};
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2404956.f_39.f_64 = func_177(player_id());
		func_193(Var0, uParam8);
	}
}

void func_193(struct<12> Param0, auto uParam1)
{
	Global_2404956.f_39[uParam12 /*12*/] = {Param0};
	Global_2404956.f_39[uParam12 /*12*/].f_9 = 1;
}

void func_194()
{
	func_170();
	Global_2404956.f_634 = 0;
}

bool func_195()
{
	if (func_196(19))
	{
		return true;
	}
	if (func_196(0))
	{
		return true;
	}
	return false;
}

int func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = func_157(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

void func_197()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_245, 6))
	{
		if (((((((func_198(60000) && func_200() == 1) && Local_96.f_7 <= 1) && !is_help_message_being_displayed()) && !is_pause_menu_active()) && func_228(player_id(), 1, 1)) && !func_161()) && Local_96.f_16 != 5)
		{
			if (!func_195())
			{
				func_160("DCP_HELP1", -1);
			}
			GAMEPLAY::SET_BIT(&iLocal_245, 6);
		}
	}
}

int func_198(int iParam0)
{
	return absi(get_time_difference(Global_2410698, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_199()
{
	if (does_blip_exist(iLocal_246))
	{
		if (func_195())
		{
			set_blip_display(iLocal_246, 0);
		}
		else
		{
			set_blip_display(iLocal_246, 4);
		}
	}
	else
	{
		iLocal_246 = add_blip_for_radius(Local_96.f_2, Local_96.f_5);
		set_blip_colour(iLocal_246, 50);
		set_blip_alpha(iLocal_246, 220);
		_0x75A16C3DA34F1245(iLocal_246, false);
		set_blip_name_from_text_file(iLocal_246, "DCP_BLIPN");
		if (func_195())
		{
			set_blip_display(iLocal_246, 0);
		}
	}
}

int func_200()
{
	return Local_96;
}

auto func_201(int iParam0)
{
	return Local_116[iParam0 /*4*/];
}

int func_202(int iParam0)
{
	return !func_203(iParam0);
}

bool func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5064)
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return false;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_204(4))
			{
				return false;
			}
			if (func_205(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return true;
}

bool func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_228(int_to_playerindex(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_205(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_206()
{
	int iVar0;
	
	func_213(&iVar0);
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
	if (func_212())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_211())
	{
		return true;
	}
	if (func_210(157))
	{
		if (!func_209())
		{
			return true;
		}
	}
	if (func_210(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_207() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_207()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_207()
{
	switch (func_208())
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

auto func_208()
{
	return Global_25120;
}

auto func_209()
{
	return Global_2434762.f_574;
}

bool func_210(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_211()
{
	return Global_2443085;
}

auto func_212()
{
	return Global_2434762.f_569;
}

void func_213(auto uParam0)
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
					func_214(iVar0);
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

void func_214(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_228(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_215(iVar4, &iVar5))
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

bool func_215(int iParam0, auto uParam1)
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

void func_216()
{
	wait(0);
}

void func_217()
{
	if (does_blip_exist(iLocal_246))
	{
		remove_blip(&iLocal_246);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, true))
	{
		func_55(12, "DSC_FAIL", 0, 0, -99);
	}
	func_163();
	func_219(16, 0);
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4430), false);
	func_218();
}

void func_218()
{
	terminate_this_thread();
}

void func_219(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
	}
}

void func_220(struct<20> Param0)
{
	func_226(func_227(Param0), Param0);
	func_224(0, -1, 0);
	network_register_host_broadcast_variables(&Local_96, 20);
	network_register_player_broadcast_variables(&Local_116, 129);
	if (!func_223())
	{
		func_217();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
			func_221();
		}
		func_219(16, 1);
		Local_116[participant_id_to_int() /*4*/] = 0;
	}
	else
	{
		func_217();
	}
}

void func_221()
{
	Local_96.f_2 = {func_222()};
	Local_96.f_5 = 200f;
	Local_96.f_6 = 180f;
}

Vector3 func_222()
{
	switch (get_random_int_in_range(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

bool func_223()
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
		if (func_212())
		{
			return false;
		}
		if (func_210(155))
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

bool func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_218();
			}
			else
			{
				return false;
			}
		}
		if (!func_225())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_218();
					}
					else
					{
						return false;
					}
				}
				if (func_212())
				{
					if (!iParam2)
					{
						func_218();
					}
					else
					{
						return false;
					}
				}
				if (func_210(155))
				{
					if (!iParam2)
					{
						func_218();
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
					func_218();
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
				func_218();
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
			func_218();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_225()
{
	return Global_1315888;
}

void func_226(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_218();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_227(int iParam0)
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

bool func_228(int iParam0, int iParam1, int iParam2)
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

