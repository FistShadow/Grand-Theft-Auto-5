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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	Vector3 fLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	Vector3 fLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	Vector3 fLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	Vector3 fLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	Vector3 fLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	Vector3 fLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	Vector3 fLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	Vector3 fLocal_46 = 0;
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
	iLocal_20 = add_blip_for_coord(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (has_force_cleanup_occurred(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x67D02A194A2FC2BD("p_bubblegum");
	while (!has_scaleform_movie_loaded(iLocal_18))
	{
		wait(false);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
			if (does_cam_exist(iLocal_19))
			{
				set_cam_params(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, false, 1, 1, 2);
				set_cam_near_clip(iLocal_19, 0.01f);
				set_cam_far_clip(iLocal_19, 0.02f);
				render_script_cams(true, false, 3000, 1, 0, 0);
			}
			set_blip_sprite(iLocal_20, 66);
		}
		iLocal_21 = 1;
		draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(false);
	}
}

void func_1(int iParam0)
{
	if (Global_14392 == 0)
	{
		if (is_control_pressed(2, 189) || is_control_pressed(2, 190))
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
		if (is_control_just_pressed(2, 189))
		{
			iLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (is_control_pressed(2, 189))
		{
			iLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!is_control_pressed(2, 189))
		{
			iLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!iLocal_23 == iLocal_24)
		{
			iLocal_24 = iLocal_23;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(10);
			_push_scaleform_movie_function_parameter_float(fLocal_25);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 190))
		{
			iLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (is_control_pressed(2, 190))
		{
			iLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!is_control_pressed(2, 190))
		{
			iLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!iLocal_26 == iLocal_27)
		{
			iLocal_27 = iLocal_26;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(11);
			_push_scaleform_movie_function_parameter_float(fLocal_28);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 188))
		{
			iLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (is_control_pressed(2, 188))
		{
			iLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!is_control_pressed(2, 188))
		{
			iLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!iLocal_29 == iLocal_30)
		{
			iLocal_30 = iLocal_29;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(8);
			_push_scaleform_movie_function_parameter_float(fLocal_31);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 187))
		{
			iLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (is_control_pressed(2, 187))
		{
			iLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!is_control_pressed(2, 187))
		{
			iLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!iLocal_32 == iLocal_33)
		{
			iLocal_33 = iLocal_32;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(9);
			_push_scaleform_movie_function_parameter_float(fLocal_34);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 202))
		{
			iLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (is_control_pressed(2, 202))
		{
			iLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!is_control_pressed(2, 202))
		{
			iLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!iLocal_35 == iLocal_36)
		{
			iLocal_36 = iLocal_35;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(17);
			_push_scaleform_movie_function_parameter_float(fLocal_37);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 204))
		{
			iLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (is_control_pressed(2, 204))
		{
			iLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!is_control_pressed(2, 204))
		{
			iLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!iLocal_38 == iLocal_39)
		{
			iLocal_39 = iLocal_38;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(15);
			_push_scaleform_movie_function_parameter_float(fLocal_40);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 201))
		{
			iLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (is_control_pressed(2, 201))
		{
			iLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!is_control_pressed(2, 201))
		{
			iLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!iLocal_41 == iLocal_42)
		{
			iLocal_42 = iLocal_41;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(16);
			_push_scaleform_movie_function_parameter_float(fLocal_43);
			_pop_scaleform_movie_function_void();
		}
		if (is_control_just_pressed(2, 203))
		{
			iLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (is_control_pressed(2, 203))
		{
			iLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!is_control_pressed(2, 203))
		{
			iLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!iLocal_44 == iLocal_45)
		{
			iLocal_45 = iLocal_44;
			_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(14);
			_push_scaleform_movie_function_parameter_float(fLocal_46);
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_2()
{
	if (does_cam_exist(iLocal_19))
	{
		destroy_cam(iLocal_19, 0);
	}
	render_script_cams(false, false, 3000, 1, 0, 0);
	func_3(0);
	set_game_paused(false);
	clear_help(1);
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

