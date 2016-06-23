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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_5();
	}
	iLocal_19 = unk_0x67D02A194A2FC2BD("instructional_buttons");
	while (!has_scaleform_movie_loaded(iLocal_19))
	{
		wait(false);
	}
	while (true)
	{
		draw_scaleform_movie_fullscreen(iLocal_19, 255, 255, 255, false, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		wait(false);
	}
}

void func_1(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
			_push_scaleform_movie_function_parameter_int(200);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(false);
			func_3(_get_control_action_name(2, 191, true));
			func_2("PRESS A");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(true);
			func_3(_get_control_action_name(2, 194, true));
			func_2("PRESS B");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(2);
			func_3(_get_control_action_name(2, 193, true));
			func_2("PRESS X");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(3);
			func_3(_get_control_action_name(2, 192, true));
			func_2("PRESS Y");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			iLocal_18 = -1;
			break;
		
		case 1:
			_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
			_push_scaleform_movie_function_parameter_int(200);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(false);
			func_3(_get_control_action_name(2, 187, true));
			func_2("DOWN");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(true);
			func_3(_get_control_action_name(2, 188, true));
			func_2("UP");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(2);
			func_3(_get_control_action_name(2, 190, true));
			func_2("LEFT");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(3);
			func_3(_get_control_action_name(2, 189, true));
			func_2("RIGHT");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			iLocal_18 = -1;
			break;
		
		case 2:
			_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
			_push_scaleform_movie_function_parameter_int(200);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(false);
			func_3(_get_control_action_name(2, 202, true));
			func_2("BACK");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_3(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

void func_4()
{
	if (Global_14392 == 0)
	{
		if (((((((((is_control_pressed(2, 189) || is_control_pressed(2, 190)) || is_control_pressed(2, 188)) || is_control_pressed(2, 187)) || is_control_pressed(2, 205)) || is_control_pressed(2, 206)) || is_control_pressed(2, 207)) || is_control_pressed(2, 208)) || is_control_pressed(2, 201)) || is_control_pressed(2, 202))
		{
			Global_14392 = 1;
			settimera(false);
		}
	}
	else if (timera() > 50)
	{
		Global_14392 = 0;
	}
	if (Global_14392 == 0)
	{
		if (is_control_pressed(2, 217))
		{
			iLocal_18 = 1;
		}
		if (is_control_pressed(2, 189))
		{
			iLocal_18 = 2;
		}
		if (is_control_pressed(2, 190))
		{
			iLocal_18 = 2;
		}
		if (is_control_pressed(2, 205))
		{
		}
		if (is_control_pressed(2, 206))
		{
		}
		if (is_control_pressed(2, 207))
		{
		}
		if (is_control_pressed(2, 208))
		{
		}
		if (is_control_pressed(2, 188))
		{
			iLocal_18 = 2;
		}
		if (is_control_pressed(2, 187))
		{
			iLocal_18 = 2;
		}
		if (is_control_pressed(2, 201))
		{
			iLocal_18 = 1;
		}
		if (is_control_pressed(2, 202))
		{
			iLocal_18 = 0;
		}
		if (is_control_pressed(2, 203))
		{
			iLocal_18 = 1;
		}
		if (is_control_pressed(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	set_game_paused(false);
	set_scaleform_movie_as_no_longer_needed(&iLocal_19);
	terminate_this_thread();
}

void func_6(int iParam0)
{
	if (iParam0)
	{
		func_11();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14571)
	{
		func_9(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_8())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_10(0))
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

bool func_10(int iParam0)
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

void func_11()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

