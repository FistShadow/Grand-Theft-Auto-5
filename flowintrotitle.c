#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void main()
{
	if (has_force_cleanup_occurred(83))
	{
		func_10();
	}
	set_game_pauses_for_streaming(0);
	clear_bit(&(Global_101154.f_8706.f_25), true);
	func_7();
	set_no_loading_screen(1);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	iLocal_0 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
	while (!has_scaleform_movie_loaded(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!is_screen_faded_out())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = GAMEPLAY::GET_GAME_TIMER() + 8000 + round(2f * 1000f);
	while (!is_cutscene_playing())
	{
		func_7();
		if (!is_bit_set(Global_101154.f_8706.f_25, true))
		{
			draw_scaleform_movie_fullscreen(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = GAMEPLAY::GET_GAME_TIMER() + round(2f * 1000f);
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8706.f_25), true);
				if (_0x6FDDF453C0C756EC() || is_pc_version())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_91317 = 1;
}

bool func_2()
{
	if (func_3(0))
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

int func_3(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_4(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	_push_scaleform_movie_function(iLocal_0, "HIDE_LOGO");
	_begin_text_component("STRING");
	add_text_component_substring_player_name(sParam0);
	_end_text_component();
	_pop_scaleform_movie_function_void();
}

void func_6(char* sParam0, Vector3 fParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, Vector3 fParam7)
{
	_push_scaleform_movie_function(iLocal_0, "SHOW_LOGO");
	_begin_text_component("STRING");
	add_text_component_substring_player_name(sParam0);
	_end_text_component();
	_push_scaleform_movie_function_parameter_float(fParam1);
	_push_scaleform_movie_function_parameter_float(fParam2);
	_push_scaleform_movie_function_parameter_float(fParam3);
	_push_scaleform_movie_function_parameter_float(fParam4);
	_push_scaleform_movie_function_parameter_float(fParam5);
	_push_scaleform_movie_function_parameter_float(fParam6);
	_push_scaleform_movie_function_parameter_float(fParam7);
	_pop_scaleform_movie_function_void();
}

void func_7()
{
	hide_loading_on_fade_this_frame();
	disable_control_action(2, 199, 1);
	_set_2d_layer(7);
	func_8();
}

void func_8()
{
	_0xEB2D525B57F42B40();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8706.f_25), true);
	if (iLocal_0 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_0);
	}
	_set_2d_layer(4);
	set_no_loading_screen(0);
	set_game_pauses_for_streaming(1);
	terminate_this_thread();
}

