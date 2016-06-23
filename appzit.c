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
	struct<26> Local_20 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	int iLocal_51 = 0;
	char[32] cLocal_52 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	iLocal_51 = -99;
	StringCopy(&cLocal_52, "TRACKID", 32);
	network_set_script_is_safe_for_network_game();
	request_additional_text(&cLocal_52, true);
	while (!has_additional_text_loaded(true))
	{
		wait(0);
	}
	func_15();
	func_14();
	func_11();
	settimera(0);
	while (true)
	{
		wait(0);
		if (iLocal_61)
		{
			if (iLocal_63 < 101)
			{
				if (timera() > 30)
				{
					iLocal_63++;
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(23);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(true);
					func_10("CELL_4005");
					_push_scaleform_movie_function_parameter_int(iLocal_63);
					_pop_scaleform_movie_function_void();
					func_9(Global_14394, "DISPLAY_VIEW", 23f, to_float(false), -1082130432, -1082130432, -1082130432);
					settimera(0);
				}
			}
			else
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(23);
				_push_scaleform_movie_function_parameter_int(false);
				_push_scaleform_movie_function_parameter_int(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				_pop_scaleform_movie_function_void();
				func_9(Global_14394, "DISPLAY_VIEW", 23f, to_float(false), -1082130432, -1082130432, -1082130432);
				iLocal_62 = 1;
				iLocal_61 = 0;
			}
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					func_8();
					if (iLocal_60 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14381, 0))
					{
						func_4();
						iLocal_61 = 0;
						iLocal_62 = 0;
						Global_14391 = 1;
						func_14();
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
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
	iLocal_61 = 0;
	terminate_this_thread();
}

bool func_3()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_5(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (is_pc_version())
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

void func_6()
{
	if (timera() > 2200)
	{
		if (Global_14401)
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_60 = 1;
	}
}

void func_7(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_10(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_10(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_10(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_10(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_8()
{
	if (Global_14391 == 0)
	{
		if (func_5(2, Global_14382, 0))
		{
			if ((iLocal_60 && iLocal_62 == 0) && iLocal_61 == 0)
			{
				iLocal_63 = false;
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(23);
				_push_scaleform_movie_function_parameter_int(false);
				_push_scaleform_movie_function_parameter_int(true);
				func_10("CELL_4005");
				_push_scaleform_movie_function_parameter_int(iLocal_63);
				_pop_scaleform_movie_function_void();
				func_9(Global_14394, "DISPLAY_VIEW", 23f, to_float(false), -1082130432, -1082130432, -1082130432);
				if (Global_14401)
				{
					func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
				iLocal_61 = 1;
				settimera(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_10(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = get_player_radio_station_index();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		stat_get_int(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stat_set_int(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(23);
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_int(false);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_16));
	func_10("CELL_4002");
	_push_scaleform_movie_function_parameter_int(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&(Local_20.f_25));
	func_10("CELL_4004");
	_pop_scaleform_movie_function_void();
	func_9(Global_14394, "DISPLAY_VIEW", 23f, to_float(false), -1082130432, -1082130432, -1082130432);
	if (Global_14401)
	{
		if (iLocal_60)
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_60)
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
}

void func_15()
{
	iLocal_51 = get_audible_music_track_text_id();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_51, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_51, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), get_player_radio_station_name(), 24);
	if (!does_text_label_exist(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!does_text_label_exist(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195", 32);
		StringCopy(&(Local_20.f_25), "CELL_195", 24);
	}
}

