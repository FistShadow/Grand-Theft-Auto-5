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
	Vector3 vLocal_20 = 0;
	Vector3 fLocal_23 = 0;
	float fLocal_24 = 0;
	Vector3 fLocal_25 = 0;
	Vector3 fLocal_26 = 0;
	Vector3 fLocal_27 = 0;
	Vector3 fLocal_28 = 0;
	Vector3 fLocal_29 = 0;
	Vector3 fLocal_30 = 0;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	network_set_script_is_safe_for_network_game();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_29) * 30 && timerb() > 150)
					{
						_push_scaleform_movie_function(Global_14394, "APP_FUNCTION");
						_push_scaleform_movie_function_parameter_int(true);
						_pop_scaleform_movie_function_void();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						_push_scaleform_movie_function(Global_14394, "APP_FUNCTION");
						_push_scaleform_movie_function_parameter_int(true);
						_pop_scaleform_movie_function_void();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14381, 0))
					{
						func_5();
						Global_14391 = 1;
						func_10();
						func_7();
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	clear_bit(&Global_2284, 22);
	terminate_this_thread();
}

void func_3(int iParam0, int iParam1)
{
	Global_2563602[iParam0] = iParam1;
}

bool func_4()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_5()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_14401)
	{
		func_8(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
}

void func_8(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_9(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_9(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_9(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_9(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_9(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_10()
{
	int iVar0;
	int iVar1;
	
	if (func_18() == 0)
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			vLocal_20 = {get_entity_coords(player_ped_id(), 1)};
			fLocal_23 = get_entity_heading(player_ped_id());
			func_17();
			func_16();
			func_15();
			fLocal_24 = 360f - fLocal_23;
			fLocal_27 -= fLocal_24;
			if (fLocal_27 < 0f)
			{
				fLocal_27 += 360f;
			}
			if (iLocal_31 == 0)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(23);
				_push_scaleform_movie_function_parameter_int(false);
				if (is_bit_set(Global_2284, 30))
				{
					_push_scaleform_movie_function_parameter_int(-99);
					_push_scaleform_movie_function_parameter_int(false);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(floor(fLocal_27));
					_push_scaleform_movie_function_parameter_int(floor(fLocal_28));
				}
				_push_scaleform_movie_function_parameter_int(100);
				if (is_bit_set(Global_2284, 22))
				{
					_push_scaleform_movie_function_parameter_int(true);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(false);
				}
				if (is_bit_set(Global_2284, 29))
				{
					_push_scaleform_movie_function_parameter_bool(false);
				}
				else
				{
					_push_scaleform_movie_function_parameter_bool(true);
				}
				if (is_bit_set(Global_2285, true))
				{
					_push_scaleform_movie_function_parameter_float(fLocal_30);
				}
				_pop_scaleform_movie_function_void();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14394, "DISPLAY_VIEW", 23f, to_float(true), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!is_entity_dead(player_ped_id(), 0))
	{
		vLocal_20 = {get_entity_coords(player_ped_id(), 1)};
		fLocal_23 = get_entity_heading(player_ped_id());
		if (Global_2563608 > 5)
		{
		}
		iVar0 = false;
		while (iVar0 < Global_2563608)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = 360f - fLocal_23;
			fLocal_27 -= fLocal_24;
			if (fLocal_27 < 0f)
			{
				fLocal_27 += 360f;
			}
			if (iLocal_31 == 0)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(23);
				_push_scaleform_movie_function_parameter_int(iVar0);
				iVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (is_bit_set(Global_2563397, 5))
						{
							iVar1 = true;
						}
						break;
					
					case 1:
						if (is_bit_set(Global_2563397, 6))
						{
							iVar1 = true;
						}
						break;
					
					case 2:
						if (is_bit_set(Global_2563397, 7))
						{
							iVar1 = true;
						}
						break;
					
					case 3:
						if (is_bit_set(Global_2563397, 8))
						{
							iVar1 = true;
						}
						break;
				}
				if (iVar1)
				{
					_push_scaleform_movie_function_parameter_int(-99);
					_push_scaleform_movie_function_parameter_int(false);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(floor(fLocal_27));
					_push_scaleform_movie_function_parameter_int(floor(fLocal_28));
				}
				_push_scaleform_movie_function_parameter_int(100);
				if (is_bit_set(Global_2284, 22))
				{
					_push_scaleform_movie_function_parameter_bool(true);
				}
				else
				{
					_push_scaleform_movie_function_parameter_bool(true);
				}
				if (is_bit_set(Global_2284, 29))
				{
					_push_scaleform_movie_function_parameter_bool(false);
				}
				else
				{
					_push_scaleform_movie_function_parameter_bool(true);
				}
				_push_scaleform_movie_function_parameter_float(fLocal_30);
				_push_scaleform_movie_function_parameter_int(Global_2563602[iVar0]);
				_pop_scaleform_movie_function_void();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14394, "DISPLAY_VIEW", 23f, to_float(true), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

auto func_11(int iParam0)
{
	fLocal_25 = Global_2563586[iParam0 /*3*/] - vLocal_20.x;
	fLocal_26 = cos(3.14159f / 180f * vLocal_20.x) * Global_2563586[iParam0 /*3*/].f_1 - vLocal_20.y;
	fLocal_27 = atan2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 += 360f;
	}
	return fLocal_27;
}

auto func_12(int iParam0)
{
	fLocal_29 = sqrt(vdist2(Global_2563586[iParam0 /*3*/], vLocal_20));
	fLocal_30 = Global_2563586[iParam0 /*3*/].f_2 - vLocal_20.z;
	return fLocal_29;
}

auto func_13(int iParam0)
{
	fLocal_28 = sqrt(Global_2563586[iParam0 /*3*/] - vLocal_20.x * Global_2563586[iParam0 /*3*/] - vLocal_20.x + Global_2563586[iParam0 /*3*/].f_1 - vLocal_20.y * Global_2563586[iParam0 /*3*/].f_1 - vLocal_20.y);
	return fLocal_28;
}

void func_14(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

auto func_15()
{
	fLocal_25 = Global_16818 - vLocal_20.x;
	fLocal_26 = cos(3.14159f / 180f * vLocal_20.x) * Global_16818.f_1 - vLocal_20.y;
	fLocal_27 = atan2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 += 360f;
	}
	return fLocal_27;
}

auto func_16()
{
	fLocal_29 = sqrt(vdist2(Global_16818, vLocal_20));
	fLocal_30 = Global_16818.f_2 - vLocal_20.z;
	return fLocal_29;
}

auto func_17()
{
	fLocal_28 = sqrt(Global_16818 - vLocal_20.x * Global_16818 - vLocal_20.x + Global_16818.f_1 - vLocal_20.y * Global_16818.f_1 - vLocal_20.y);
	return fLocal_28;
}

bool func_18()
{
	if (Global_69489 == 1)
	{
		return true;
	}
	return false;
}

