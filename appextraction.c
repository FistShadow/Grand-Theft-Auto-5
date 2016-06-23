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
	int iLocal_20 = 0;
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
	network_set_script_is_safe_for_network_game();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		settimera(0);
	}
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && timera() > 1500)
					{
						func_6();
						settimera(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14381, 0))
					{
						func_4();
						Global_14391 = 1;
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
	func_7();
}

void func_7()
{
	func_9(Global_14394, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(24);
	_push_scaleform_movie_function_parameter_int(false);
	if (is_bit_set(Global_2563397, 23))
	{
		_push_scaleform_movie_function_parameter_bool(false);
		func_8("CELL_EXTBYOU");
		_push_scaleform_movie_function_parameter_int(Global_2563398);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614));
		_push_scaleform_movie_function_parameter_int(Global_2563399);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614.f_1));
		_push_scaleform_movie_function_parameter_int(Global_2563400);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614.f_2));
		func_8("CELL_BODYG");
		_push_scaleform_movie_function_parameter_int(Global_2563401);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617));
		_push_scaleform_movie_function_parameter_int(Global_2563402);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617.f_1));
		_push_scaleform_movie_function_parameter_int(Global_2563403);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617.f_2));
	}
	else
	{
		_push_scaleform_movie_function_parameter_bool(false);
		func_8("CELL_EXTBYOU");
		_push_scaleform_movie_function_parameter_int(Global_2563401);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617));
		_push_scaleform_movie_function_parameter_int(Global_2563402);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617.f_1));
		_push_scaleform_movie_function_parameter_int(Global_2563403);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563617.f_2));
		func_8("CELL_EXTBTARG");
		_push_scaleform_movie_function_parameter_int(Global_2563398);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614));
		_push_scaleform_movie_function_parameter_int(Global_2563399);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614.f_1));
		_push_scaleform_movie_function_parameter_int(Global_2563400);
		_push_scaleform_movie_function_parameter_int(floor(Global_2563614.f_2));
	}
	_pop_scaleform_movie_function_void();
	func_9(Global_14394, "DISPLAY_VIEW", 24f, to_float(true), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
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

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14401)
	{
		func_12(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
}

void func_12(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_8(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_8(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_8(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_8(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_8(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

