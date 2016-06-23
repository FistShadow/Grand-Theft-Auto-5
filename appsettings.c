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
	int[] iLocal_18 = new int[20];
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	auto uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0;
	float fLocal_59 = 0;
	float fLocal_60 = 0;
	float fLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0;
	float fLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	network_set_script_is_safe_for_network_game();
	func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14358 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_3088[Global_14413 /*2811*/][2 /*281*/].f_259 = Global_101154.f_12741[Global_14413 /*20*/].f_6;
	Global_3088[Global_14413 /*2811*/][4 /*281*/].f_259 = Global_101154.f_12741[Global_14413 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_69489)
		{
			Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 = func_43(1191, -1, 0);
			Global_3088[Global_14413 /*2811*/][2 /*281*/].f_259 = func_43(2020, -1, 0);
			Global_3088[Global_14413 /*2811*/][4 /*281*/].f_259 = func_43(2019, -1, 0);
		}
		else if (are_strings_equal(&(Global_101154.f_12741[Global_14413 /*20*/].f_11), &(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_69489)
	{
		Global_101154.f_12741[3 /*20*/].f_10 = func_43(1190, -1, 0);
	}
	Global_3088[Global_14413 /*2811*/][3 /*281*/].f_259 = Global_101154.f_12741[Global_14413 /*20*/].f_10;
	func_42();
	if (Global_69489)
	{
		Global_3088[3 /*2811*/][0 /*281*/] = 190;
		Global_3088[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3088[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2082, -1, 0) == 0)
		{
			Global_3088[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3088[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		wait(0);
		if (iLocal_50)
		{
			if (timerb() > 3500)
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (iLocal_56 || iLocal_57)
					{
						if (iLocal_56)
						{
							iLocal_56 = false;
							settimerb(0);
							Global_101154.f_12741.f_82 = 1;
							iLocal_57 = 1;
						}
						else if (timerb() > 7500)
						{
							iLocal_57 = 0;
							clear_help(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_14381, 0))
						{
							if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
							{
								stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
							}
							iLocal_53 = 0;
							func_9();
							Global_14391 = 1;
							func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14413.f_1 > 3)
							{
								Global_14413.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_14415 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

bool func_1()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_56)
	{
		clear_help(1);
	}
	if (Global_101154.f_12741.f_83 == 0 || Global_101154.f_12741.f_82 == 0)
	{
		func_3();
	}
	set_game_paused(false);
	terminate_this_thread();
}

void func_3()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 25);
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
}

bool func_4(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_5(iParam0))
	{
		return false;
	}
	return true;
}

int func_5(int iParam0)
{
	return func_6(iParam0, Global_35711);
}

bool func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_44();
	Global_3088[Global_14413 /*2811*/][0 /*281*/].f_124[2] = 1;
}

bool func_8()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_9()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_10(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (update_onscreen_keyboard() == 0 || (_network_is_text_chat_active() && _is_input_disabled(2)))
			{
				return false;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_11()
{
	int iVar0;
	
	iLocal_54 = GAMEPLAY::GET_GAME_TIMER();
	iVar0 = iLocal_54 - iLocal_55;
	if (iVar0 % 600 <= 300 && iVar0 < 3000)
	{
		set_pad_shake(0, 100, 100);
	}
}

void func_12()
{
	auto uVar0;
	auto uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_43 == 1)
	{
		if (iLocal_52)
		{
			iLocal_54 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_54 - iLocal_55 > 1000)
			{
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (_is_input_disabled(2))
		{
			if (is_control_just_pressed(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (is_control_just_pressed(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_14389, 0) || func_10(2, Global_14390, 0)) || iLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			settimerb(0);
			iLocal_50 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_41))
			{
				wait(0);
			}
			uLocal_47 = iLocal_18[_0x2DE7EFA66B906036(uLocal_41)];
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
				wait(100);
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!is_ped_ringtone_playing(PLAYER::PLAYER_PED_ID()))
					{
						if (are_strings_equal(&(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[uLocal_47 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							play_ped_ringtone(&(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[uLocal_47 /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14391 == 0)
	{
		if (func_10(2, Global_14382, 0))
		{
			func_23();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_41))
			{
				wait(0);
			}
			iLocal_46 = _0x2DE7EFA66B906036(uLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = false;
			}
			Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				uVar0 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_101154.f_12741[Global_14413 /*20*/].f_6 = Global_3088[Global_14413 /*2811*/][2 /*281*/].f_260[uVar0];
				func_45(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_69489)
				{
					Global_2563609 = Global_3088[3 /*2811*/][2 /*281*/].f_259;
					func_20(2020, Global_3088[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_45(Global_14394, "SET_THEME", to_float(Global_2563609), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(23), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 4)
			{
				Global_101154.f_12741[Global_14413 /*20*/].f_9 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69489)
				{
					Global_2563610 = Global_3088[3 /*2811*/][4 /*281*/].f_259;
					func_20(2019, Global_3088[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_2563610 == 0)
					{
						Var17 = {func_17(player_id())};
						iVar30 = 0;
						if (_0x72D918C99BCACC54(0) == 0)
						{
						}
						if ((network_clan_player_is_active(&Var17) && _0x72D918C99BCACC54(0)) && Global_2563613 == 0)
						{
							settimera(0);
							while (!_0x5835D9CD92E83184(&Var17, &uVar1) && timera() < 3000)
							{
								wait(0);
								if (timera() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								_push_scaleform_movie_function(Global_14394, "SET_BACKGROUND_CREW_IMAGE");
								_begin_text_component("CELL_2000");
								add_text_component_substring_player_name(&uVar1);
								_end_text_component();
								_pop_scaleform_movie_function_void();
							}
						}
						else
						{
							func_45(Global_14394, "SET_BACKGROUND_IMAGE", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14394, "SET_BACKGROUND_IMAGE", to_float(Global_2563610), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14394, "SET_BACKGROUND_IMAGE", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(23), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 1)
			{
				Global_101154.f_12741[Global_14413 /*20*/].f_11 = {Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 /*6*/]};
				if (Global_69489)
				{
					func_20(1191, Global_3088[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(18), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 3)
			{
				Global_101154.f_12741[Global_14413 /*20*/].f_10 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69489)
				{
					func_20(1190, Global_101154.f_12741[3 /*20*/].f_10, -1, 1);
				}
				if (Global_101154.f_12741[Global_14413 /*20*/].f_10 == 1)
				{
					iLocal_53 = 1;
					iLocal_55 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_69489 == 1)
				{
					Global_3088[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(19), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_45(Global_14394, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2082, Global_3088[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_3088[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3088[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3088[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_35711 == 15)
						{
							if (Global_101154.f_12741.f_82 == 0)
							{
								clear_help(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								iLocal_56 = true;
							}
							else
							{
								func_45(Global_14394, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 25);
								GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
								if (Global_101154.f_12741.f_83 == 0)
								{
									clear_help(1);
									func_15("CELL_7051", -1);
									Global_101154.f_12741.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						GAMEPLAY::CLEAR_BIT(&Global_2283, 25);
						GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
					}
				}
			}
			func_13(Global_14394, "SET_HEADER", &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_14(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_14(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_14(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_14(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_14(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_14(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_15(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_16(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_14(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_14(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_14(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_14(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_19()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2563609)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_21(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

auto func_22()
{
	return Global_1312747;
}

void func_23()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		_move_finger(5);
	}
}

bool func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2563611 || iVar2)
	{
		return true;
	}
	return true;
}

void func_26()
{
	if (Global_14391 == 0)
	{
		if (func_10(2, Global_14382, 0))
		{
			func_23();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_41))
			{
				wait(0);
			}
			iLocal_44 = _0x2DE7EFA66B906036(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_69489 == 0)
					{
						if (Global_35711 == 15)
						{
							if (Global_101154.f_12741.f_82 == 0)
							{
								clear_help(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								iLocal_56 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_27()
{
	int[] iVar0 = new int[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = false;
	if (Global_69489)
	{
		StringCopy(&(Global_3088[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = {func_17(player_id())};
		if (!network_clan_player_is_active(&Var21))
		{
			StringCopy(&(Global_3088[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] < Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (are_strings_equal(&(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_69489 == 1)
			{
				func_18(Global_14394, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_45(Global_14394, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14394, "SET_HEADER", &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14401)
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
}

void func_28()
{
	if (iLocal_62)
	{
		if (timera() > 50)
		{
			iLocal_62 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40--;
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0)
	{
		if (func_10(2, Global_14389, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40--;
			}
			func_31();
			iLocal_62 = 1;
			settimera(0);
		}
		if (func_10(2, Global_14390, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			settimera(0);
		}
	}
}

void func_29()
{
	func_45(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_14576 == 0)
		{
			_move_finger(2);
		}
		else
		{
			_move_finger(1);
		}
	}
}

void func_31()
{
	func_45(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_14576 == 0)
		{
			_move_finger(1);
		}
		else
		{
			_move_finger(2);
		}
	}
}

void func_33()
{
	int[] iVar0 = new int[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_39 = 0;
	iVar21 = false;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_3088[Global_14413 /*2811*/][iVar23 /*281*/] = 5000;
		if (get_profile_setting(2) == 0)
		{
			Global_3088[Global_14413 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3088[Global_14413 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_3088[Global_14413 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_3088[Global_14413 /*2811*/][iVar22 /*281*/] < Global_3088[Global_14413 /*2811*/][iVar23 /*281*/])
					{
						if (Global_69489)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3088[Global_14413 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_45(Global_14394, "DISPLAY_VIEW", 13f, to_float(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_14394, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
}

auto func_34()
{
	if (Global_69489)
	{
		Global_14413 = 3;
	}
	else
	{
		Global_14413 = func_35();
	}
	if (Global_14413 > 3)
	{
		Global_14413 = 3;
	}
	return Global_101154.f_12741[Global_14413 /*20*/].f_7;
}

auto func_35()
{
	func_36();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_37(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_38(Global_101154.f_1826.f_539.f_3549))
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

int func_37(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_69489)
			{
				iLocal_49 = 19;
			}
			else if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		
		case 3:
			if (Global_3088[Global_14413 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		
		default:
			iLocal_49 = Global_3088[Global_14413 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()
{
	if (Global_35711 != 15)
	{
		func_44();
		Global_3088[Global_14413 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_21(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()
{
	if (func_37(14))
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
		Global_14413 = func_35();
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

void func_45(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

