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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_30();
	}
	if (_get_number_of_instances_of_streamed_script(joaat("controller_races")) > 1)
	{
		terminate_this_thread();
	}
	while (_get_number_of_instances_of_streamed_script(joaat("initial")) > 0)
	{
		wait(0);
	}
	func_29();
	while (true)
	{
		if (func_26(9) || Global_88531)
		{
			func_30();
		}
		if (is_player_playing(player_id()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (func_12() == 1)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		wait(1000);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(8))
	{
		iVar0 = false;
		while (iVar0 <= 5 - 1)
		{
			iVar1 = func_10(iVar0);
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, iVar0))
				{
					fVar2 = vdist2(func_9(player_id()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_101128[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								GAMEPLAY::CLEAR_BIT(&(Global_101154.f_29504.f_3), iVar0);
							}
							else if (GAMEPLAY::GET_GAME_TIMER() - Global_101134[iVar0] > 60000)
							{
								Global_101128[iVar0] = 0;
								Global_101134[iVar0] = GAMEPLAY::GET_GAME_TIMER();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								GAMEPLAY::CLEAR_BIT(&(Global_101154.f_29504.f_3), iVar0);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_29504.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_101128[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if (GAMEPLAY::GET_GAME_TIMER() - Global_101134[iVar0] > 60000)
					{
						Global_101128[iVar0] = 0;
						Global_101134[iVar0] = GAMEPLAY::GET_GAME_TIMER();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

void func_3(int iParam0)
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_5(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 6);
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25433[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
			break;
		
		case 1:
			return 87;
			break;
		
		case 2:
			return 88;
			break;
		
		case 3:
			return 89;
			break;
		
		case 4:
			return 90;
			break;
	}
	return 86;
}

int func_11(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], iParam0);
}

auto func_12()
{
	func_13();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_13()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_14(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_15(Global_101154.f_1826.f_539.f_3549))
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

int func_14(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(7))
	{
		iVar0 = false;
		while (iVar0 <= 4 - 1)
		{
			iVar1 = func_21(iVar0);
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_2, iVar0))
			{
				fVar2 = vdist2(func_9(player_id()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_101118[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_29501.f_2), iVar0);
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - Global_101123[iVar0] > 60000)
						{
							Global_101118[iVar0] = 0;
							Global_101123[iVar0] = GAMEPLAY::GET_GAME_TIMER();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_29501.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_101118[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if (GAMEPLAY::GET_GAME_TIMER() - Global_101123[iVar0] > 60000)
				{
					Global_101118[iVar0] = 0;
					Global_101123[iVar0] = GAMEPLAY::GET_GAME_TIMER();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_101154.f_29501)
			{
				if (iVar1 == 82)
				{
					func_20(82);
					func_19(65, 1000);
					Global_101154.f_29501 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = GAMEPLAY::GET_GAME_TIMER() + iParam1;
}

void func_20(int iParam0)
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 82;
			break;
		
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
	}
	return 82;
}

void func_22()
{
	switch (iLocal_28)
	{
		case 0:
			if (get_clock_hours() < 20 && get_clock_hours() >= 5)
			{
				func_23();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
		
		case 1:
			if (get_clock_hours() >= 20 || get_clock_hours() < 5)
			{
				iLocal_28 = 2;
			}
			break;
		
		case 2:
			if (get_clock_hours() < 20 && get_clock_hours() >= 5)
			{
				func_23();
				iLocal_28 = 1;
			}
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5 - 1)
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

bool func_24()
{
	if (func_26(9))
	{
		return false;
	}
	if (func_25())
	{
		return false;
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		return false;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	return true;
}

bool func_25()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_27(iParam0))
	{
		return false;
	}
	return true;
}

int func_27(int iParam0)
{
	return func_28(iParam0, Global_35711);
}

bool func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4 - 1)
	{
		Global_101118[iVar0] = 0;
		Global_101123[iVar0] = GAMEPLAY::GET_GAME_TIMER();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5 - 1)
	{
		Global_101128[iVar0] = 0;
		iVar0++;
	}
}

void func_30()
{
	terminate_this_thread();
}

