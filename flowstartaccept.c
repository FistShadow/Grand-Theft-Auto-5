#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (has_force_cleanup_occurred(83))
	{
		func_6();
	}
	if ((!Global_1 && !is_pc_version()) && _0x6FDDF453C0C756EC())
	{
		set_no_loading_screen(1);
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(800);
			}
		}
		iLocal_20 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
		while (!has_scaleform_movie_loaded(iLocal_20) || !has_scaleform_movie_loaded(iLocal_21))
		{
			wait(0);
		}
		_push_scaleform_movie_function(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(iLocal_21, "SET_DATA_SLOT_EMPTY");
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(iLocal_21, "SET_DATA_SLOT");
		_push_scaleform_movie_function_parameter_int(false);
		func_4(_get_control_action_name(2, 201, true));
		func_5("HUD_CONTINUE");
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
		while (!is_screen_faded_out())
		{
			wait(0);
		}
		shutdown_loading_screen();
		while (!iLocal_22)
		{
			hide_loading_on_fade_this_frame();
			_set_2d_layer(7);
			draw_scaleform_movie_fullscreen(iLocal_20, 255, 255, 255, false, 0);
			draw_scaleform_movie_fullscreen(iLocal_21, 255, 255, 255, false, 0);
			if (is_control_pressed(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		set_no_loading_screen(0);
		func_3(1, 1);
		func_1();
	}
	Global_69758.f_1 = 0;
	set_bit(&(Global_101154.f_8706.f_25), false);
	func_6();
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
	return is_bit_set(Global_69737, false);
}

void func_3(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

void func_5(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_21);
	}
	_set_2d_layer(4);
	set_no_loading_screen(0);
	terminate_this_thread();
}

