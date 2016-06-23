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
	if (has_force_cleanup_occurred(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x67D02A194A2FC2BD("graphic_design");
	while (!has_scaleform_movie_loaded(iLocal_18))
	{
		wait(false);
	}
	while (true)
	{
		draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(false);
	}
}

void func_1(int iParam0)
{
	if (Global_14392 == 0)
	{
		if (((((((is_control_pressed(2, 189) || is_control_pressed(2, 190)) || is_control_pressed(2, 188)) || is_control_pressed(2, 187)) || is_control_pressed(2, 205)) || is_control_pressed(2, 206)) || is_control_pressed(2, 201)) || is_control_pressed(2, 202))
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
		if (is_control_pressed(2, 189))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(10);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 190))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(11);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 205))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(4);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 206))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(6);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 188))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(8);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 187))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(9);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 201))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(16);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_pressed(2, 202))
		{
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(17);
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_2()
{
	func_3(0);
	set_game_paused(false);
	set_scaleform_movie_as_no_longer_needed(&iLocal_18);
	terminate_this_thread();
}

void func_3(int iParam0)
{
	if (iParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_7(0))
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

bool func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
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

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

