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
	struct<17> Local_20 = 0;
	int iLocal_37 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_101154.f_24935.f_145 > 0 || Global_99796)
		{
			if (!Global_99796)
			{
				if ((Global_35711 != 6 && Global_35711 != 15) && !Global_87618)
				{
					func_22();
				}
				if (!Global_99795)
				{
					if (Global_101154.f_24935.f_145 > 0)
					{
						if (func_19(&(Global_101154.f_24935[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_101154.f_24935[iLocal_37 /*16*/].f_12 == Global_101154.f_24935.f_146[func_12()])
									{
										if (GAMEPLAY::GET_GAME_TIMER() > Global_99798)
										{
											if (GAMEPLAY::GET_GAME_TIMER() > Global_101154.f_24935[iLocal_37 /*16*/].f_8)
											{
												if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_24935[iLocal_37 /*16*/].f_4), ""))
												{
													add_next_message_to_previous_briefs(1);
													func_11(&(Global_101154.f_24935[iLocal_37 /*16*/]));
												}
												else
												{
													add_next_message_to_previous_briefs(1);
													func_10(&(Global_101154.f_24935[iLocal_37 /*16*/]), &(Global_101154.f_24935[iLocal_37 /*16*/].f_4));
												}
												if (Global_101154.f_24935[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_101154.f_24935[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = {Global_101154.f_24935[iLocal_37 /*16*/]};
												Local_20.f_4 = {Global_101154.f_24935[iLocal_37 /*16*/].f_4};
												Local_20.f_8 = Global_101154.f_24935[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_101154.f_24935[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_101154.f_24935[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_101154.f_24935[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_101154.f_24935[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_101154.f_24935[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_101154.f_24935[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_101154.f_24935[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_99799 = {Global_101154.f_24935[iLocal_37 /*16*/]};
												Global_99797 = GAMEPLAY::GET_GAME_TIMER();
												iVar0 = iLocal_37;
												while (iVar0 <= Global_101154.f_24935.f_145 - 2)
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7(Global_101154.f_24935.f_145 - 1);
												Global_101154.f_24935.f_145--;
												func_6();
												Global_99796 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						clear_help(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					clear_help(0);
				}
				if (GAMEPLAY::GET_GAME_TIMER() - Global_99797 > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_99798 = GAMEPLAY::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_99797 = 0;
				Global_99796 = 0;
			}
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_24935[iLocal_37 /*16*/]), &Local_20) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_24935[iLocal_37 /*16*/]), ""))
			{
				if (Global_101154.f_24935[iLocal_37 /*16*/].f_10 != -1)
				{
					if (GAMEPLAY::GET_GAME_TIMER() > Global_101154.f_24935[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= Global_101154.f_24935.f_145 - 2)
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7(Global_101154.f_24935.f_145 - 1);
						Global_101154.f_24935.f_145--;
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_101154.f_24935.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35711 != 6 && Global_35711 != 15) && !Global_87618)
		{
			func_22();
		}
		wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_6();
	}
}

int func_2(char* sParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	_add_text_component_item_string(sParam1);
	return _0x10BDDBFC529428DD(0);
}

int func_3(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_4()
{
	if (is_cutscene_playing())
	{
		return false;
	}
	if (func_5())
	{
		return false;
	}
	if (Local_20.f_9 != -1 && GAMEPLAY::GET_GAME_TIMER() - Global_99797 > Local_20.f_9)
	{
		return false;
	}
	if (Global_99795)
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return false;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return false;
	}
	return true;
}

bool func_5()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, auto uParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = {Global_101154.f_24935[uParam1 /*16*/]};
	Global_101154.f_24935[iParam0 /*16*/].f_4 = {Global_101154.f_24935[uParam1 /*16*/].f_4};
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[uParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[uParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[uParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[uParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[uParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[uParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[uParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[uParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = GAMEPLAY::GET_GAME_TIMER() + iParam1;
}

void func_10(char* sParam0, char* sParam1)
{
	_set_text_component_format(sParam0);
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_11(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
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
		if (func_16(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_14(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_17(Global_101154.f_1826.f_539.f_3549))
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
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17(int iParam0)
{
	return iParam0 < 3;
}

auto func_18()
{
	func_13();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_19(auto uParam0)
{
	if (is_help_message_being_displayed())
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (is_warning_message_active())
	{
		return false;
	}
	if (func_21())
	{
		return false;
	}
	if (func_5())
	{
		return false;
	}
	if (*uParam0.f_12 < 3)
	{
		if (func_20())
		{
			return false;
		}
		if (Global_69487)
		{
			return false;
		}
		if (Global_88531)
		{
			return false;
		}
		if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_15, true))
		{
			if (Global_88539)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_20()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

int func_21()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_22()
{
	if (Global_99796)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				clear_help(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			clear_help(1);
		}
	}
	Global_99797 = 0;
	Global_99796 = 0;
	terminate_this_thread();
}

