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
	int iLocal_28 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_38();
	}
	func_37(20);
	func_36();
	func_35(1);
	func_35(0);
	func_35(2);
	func_35(13);
	func_35(12);
	Global_2288 = 1;
	func_34();
	if (!func_33(-1615086084))
	{
		func_32(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_33(-1970925435))
	{
		func_32(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_33(-1817481777))
	{
		func_32(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	iVar0 = false;
	while (func_31(23) && !func_30(134))
	{
		if (func_26() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((!is_ped_falling(PLAYER::PLAYER_PED_ID()) && !is_entity_in_water(PLAYER::PLAYER_PED_ID())) && !is_entity_on_fire(PLAYER::PLAYER_PED_ID()))
					{
						if (!iVar0)
						{
							if (!((func_25() || is_player_switch_in_progress()) || func_24()))
							{
								if (func_13())
								{
									iVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								set_player_control(player_id(), false, 384);
								set_ped_max_move_blend_ratio(PLAYER::PLAYER_PED_ID(), 0f);
								enable_control_action(0, 173, 1);
								enable_control_action(0, 172, 1);
								enable_control_action(0, 174, 1);
								enable_control_action(0, 175, 1);
								enable_control_action(0, 176, 1);
								enable_control_action(0, 177, 1);
								enable_control_action(0, 178, 1);
								enable_control_action(0, 179, 1);
								enable_control_action(0, 180, 1);
								enable_control_action(0, 181, 1);
							}
							else
							{
								set_player_control(player_id(), true, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_33(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_33(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), true, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										iVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		wait(0);
	}
	func_3(20);
	Global_91317 = 0;
	func_1();
	func_38();
}

bool func_1()
{
	if (func_2(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

int func_2(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

bool func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

bool func_4()
{
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_205[iParam0] = iParam1;
}

bool func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_2(0))
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam7 == 76)
	{
		return false;
	}
	if (iParam8 == 235)
	{
		return false;
	}
	if (iParam3 == iParam2)
	{
		return false;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return false;
	}
	if (Global_101154.f_6378.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_101154.f_6378.f_911 == Var0)
		{
			Global_101154.f_6378.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = GAMEPLAY::GET_GAME_TIMER() + iParam5;
		Var0.f_1 = iParam10;
		iVar15 = 0;
		GAMEPLAY::SET_BIT(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		GAMEPLAY::SET_BIT(&(Var0.f_1), false);
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 10);
		}
		Global_101154.f_6378[Global_101154.f_6378.f_136 /*15*/] = {Var0};
		Global_101154.f_6378.f_136++;
		func_9(iParam2);
		return true;
	}
	return false;
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101154.f_6378[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101154.f_6378[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101154.f_6378.f_764)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101154.f_6378.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101154.f_6378.f_919[iParam0] = iVar1;
}

int func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

auto func_12()
{
	return Global_101154.f_6378.f_911;
}

bool func_13()
{
	if (Global_14413.f_1 > 3)
	{
		GAMEPLAY::CLEAR_BIT(&Global_2284, false);
		func_21(0);
		return false;
	}
	GAMEPLAY::SET_BIT(&Global_2284, false);
	if (func_14(0, 0, 1, 1))
	{
		return true;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2284, false);
	return false;
}

bool func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Global_69489)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return false;
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 14))
		{
			if (iParam0 == 17)
			{
				GAMEPLAY::SET_BIT(&Global_2563397, 14);
				GAMEPLAY::SET_BIT(&Global_2563397, 16);
			}
			if (iParam0 == 3)
			{
				GAMEPLAY::SET_BIT(&Global_2563397, 14);
				GAMEPLAY::SET_BIT(&Global_2563397, 15);
			}
		}
		if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) > 0)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2563397, 14);
			GAMEPLAY::CLEAR_BIT(&Global_2563397, 16);
			GAMEPLAY::CLEAR_BIT(&Global_2563397, 15);
			return true;
		}
		else
		{
			return false;
		}
	}
	func_20();
	if (Global_14413.f_1 == 9)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return false;
		}
	}
	if (Global_14379 == 1)
	{
		return false;
	}
	if (Global_14413.f_1 == 7)
	{
		return false;
	}
	if (iParam1 == 1)
	{
	}
	if (!is_thread_active(Global_14410))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14413.f_1 < 4)
			{
				func_19("cellphone_flashhand");
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					Global_14410 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14395)
	{
		wait(0);
	}
	func_18();
	func_15();
	if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
	{
		Global_2889 = 0;
		Global_14413.f_1 = 7;
		func_19(&(Global_2290[iParam0 /*15*/].f_5));
		if (iParam3)
		{
			if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
			{
				Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
		{
			Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2290[iParam0 /*15*/].f_5));
		return true;
	}
	return true;
}

void func_15()
{
	if (Global_69489 == 0)
	{
		Global_2290[14 /*15*/].f_4 = -99;
		Global_2290[4 /*15*/].f_4 = -99;
		if (Global_2443081)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2290[iParam0 /*15*/]), sParam1, 16);
	Global_2290[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2290[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2290[iParam0 /*15*/].f_9 = GAMEPLAY::GET_HASH_KEY(sParam3);
	Global_2290[iParam0 /*15*/].f_10 = iParam4;
	Global_2290[iParam0 /*15*/].f_11 = iParam5;
	Global_2290[iParam0 /*15*/].f_12 = iParam6;
	Global_2290[iParam0 /*15*/].f_13 = iParam7;
	Global_2290[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2290[iParam0 /*15*/].f_12 == 0)
	{
		Global_2290[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_13 == 0)
	{
		Global_2290[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_14 == 0)
	{
		Global_2290[iParam0 /*15*/].f_14 = 0;
	}
}

int func_17(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2290[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69489 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_101154.f_32575[iVar2 /*29*/].f_19[Global_14413] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35711 == 15 && func_2(0) == 0) && Global_2288 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 0;
			Global_2289 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 1;
			Global_2289 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101154.f_12741.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101154.f_12741.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 1)
		{
			if (Global_1573431)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
		}
		if (((GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 0 && Global_1573431 == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_19(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

void func_20()
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_26();
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

void func_21(int iParam0)
{
	if (Global_14571)
	{
		func_23(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_22())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_22()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_5(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

int func_24()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_25()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

auto func_26()
{
	func_27();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_27()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_17(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_10(Global_101154.f_1826.f_539.f_3549))
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_31(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

bool func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return false;
	}
	if (iParam2 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam1, iParam2))
		{
			return false;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return false;
	}
	if (iParam4 <= 0)
	{
		return false;
	}
	if (Global_101154.f_6378.f_650 < 30)
	{
		Var0 = iParam0;
		if (Global_101154.f_6378.f_911 == Var0)
		{
			Global_101154.f_6378.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = GAMEPLAY::GET_GAME_TIMER() + iParam4;
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		GAMEPLAY::SET_BIT(&(Var0.f_1), false);
		GAMEPLAY::SET_BIT(&(Var0.f_1), 6);
		Global_101154.f_6378.f_199[Global_101154.f_6378.f_650 /*15*/] = {Var0};
		Global_101154.f_6378.f_650++;
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar0 /*10*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_34()
{
	Global_91317 = 1;
}

void func_35(int iParam0)
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 147) || iParam0 == 148)
	{
		return;
	}
	Global_36263[iParam0] = GAMEPLAY::GET_GAME_TIMER();
}

void func_36()
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER();
}

bool func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return false;
	}
	GAMEPLAY::SET_BIT(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

void func_38()
{
	func_39(-1615086084);
	func_39(-1989308064);
	func_39(-1970925435);
	func_39(-1060930305);
	func_39(-1817481777);
	Global_2288 = 0;
	set_player_control(player_id(), true, 0);
	terminate_this_thread();
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/] == iParam0)
		{
			if (Global_36258 != iVar0)
			{
				func_46(iVar0);
				func_43(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar0 /*15*/] == iParam0)
		{
			func_43(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/] == iParam0)
		{
			func_42(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			func_41(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar0 /*10*/] == iParam0)
		{
			func_40(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_40(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_866)
	{
		return;
	}
	if (Global_101154.f_6378.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_866 - 2)
		{
			Global_101154.f_6378.f_765[iVar0 /*10*/] = {Global_101154.f_6378.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_866 > 0)
	{
		Global_101154.f_6378.f_765[Global_101154.f_6378.f_866 - 1 /*10*/] = {Var1};
		Global_101154.f_6378.f_866--;
	}
}

void func_41(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_764)
	{
		return;
	}
	if (Global_101154.f_6378.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_764 - 2)
		{
			Global_101154.f_6378.f_651[iVar0 /*14*/] = {Global_101154.f_6378.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_764 > 0)
	{
		Global_101154.f_6378.f_651[Global_101154.f_6378.f_764 - 1 /*14*/] = {Var1};
		Global_101154.f_6378.f_764--;
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_42(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= Global_101154.f_6378.f_650 - 2)
			{
				Global_101154.f_6378.f_199[iVar16 /*15*/] = {Global_101154.f_6378.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101154.f_6378.f_199[Global_101154.f_6378.f_650 - 1 /*15*/] = {Var0};
			Global_101154.f_6378.f_650--;
			return;
		}
		iVar15++;
	}
}

void func_43(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar15 /*15*/] == iParam0)
		{
			func_44(Global_101154.f_6378.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= Global_101154.f_6378.f_198 - 2)
			{
				Global_101154.f_6378.f_137[iVar16 /*15*/] = {Global_101154.f_6378.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101154.f_6378.f_137[Global_101154.f_6378.f_198 - 1 /*15*/] = {Var0};
			Global_101154.f_6378.f_198--;
			return;
		}
		iVar15++;
	}
}

bool func_44(auto uParam0)
{
	int iVar0;
	
	if (Global_117[uParam0 /*10*/].f_8 != 138)
	{
		if (Global_101154.f_32575[uParam0 /*29*/].f_19[Global_14413] == 1)
		{
			Global_101154.f_32575[uParam0 /*29*/].f_19[Global_14413] = 0;
			if (Global_101154.f_32575[uParam0 /*29*/].f_24[Global_14413] == 0)
			{
				iVar0 = Global_14413;
				func_45(uParam0, iVar0);
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_45(auto uParam0, int iParam1)
{
	if (Global_117[uParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101154.f_32575[uParam0 /*29*/].f_12[iParam1] = 0;
			Global_101154.f_32575[uParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_136)
	{
		return;
	}
	iVar1 = Global_101154.f_6378[iParam0 /*15*/].f_2;
	if (Global_101154.f_6378.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_136 - 2)
		{
			Global_101154.f_6378[iVar0 /*15*/] = {Global_101154.f_6378[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_136 > 0)
	{
		Global_101154.f_6378[Global_101154.f_6378.f_136 - 1 /*15*/] = {Var2};
		Global_101154.f_6378.f_136--;
	}
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

