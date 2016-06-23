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
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iVar0 = func_13();
	if (has_force_cleanup_occurred(3))
	{
		terminate_this_thread();
	}
	while (true)
	{
		if (has_scaleform_movie_loaded(iVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&iVar0);
					iLocal_46 = get_game_timer();
					iLocal_45 = 1;
					break;
				
				case 1:
					if (get_game_timer() - iLocal_46 > 3000)
					{
						func_9(&iVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&iVar0, 0))
			{
			}
		}
		wait(0);
	}
}

bool func_1(int iParam0, int iParam1)
{
	if (!func_8(iParam0.f_2))
	{
		func_6(iParam0.f_2);
	}
	hide_hud_component_this_frame(14);
	_set_2d_layer(1);
	draw_scaleform_movie(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (iParam1)
	{
		if (is_control_pressed(2, 201))
		{
			return false;
		}
	}
	if (*iParam0.f_1 == -1)
	{
		return true;
	}
	if (func_3(iParam0.f_2) * 1000f > to_float(*iParam0.f_1))
	{
		func_2(iParam0.f_2);
		return false;
	}
	return true;
}

void func_2(auto uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

float func_3(auto uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_4(is_bit_set(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

float func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

int func_5(auto uParam0)
{
	return is_bit_set(*uParam0, 2);
}

void func_6(int iParam0)
{
	func_7(iParam0, 0f);
}

void func_7(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_4(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

int func_8(auto uParam0)
{
	return is_bit_set(*uParam0, true);
}

void func_9(int iParam0)
{
	*iParam0.f_1 = 300;
	func_6(iParam0.f_2);
	_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	_push_scaleform_movie_function_parameter_int(300);
	_pop_scaleform_movie_function_void();
}

void func_10(int iParam0)
{
	_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	_pop_scaleform_movie_function_void();
}

void func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*iParam0.f_1 = -1;
	_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	_push_scaleform_movie_function_parameter_int(iParam3);
	_push_scaleform_movie_function_parameter_int(iParam4);
	_push_scaleform_movie_function_parameter_int(iParam5);
	_pop_scaleform_movie_function_void();
	if (iParam6)
	{
		_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		_pop_scaleform_movie_function_void();
	}
}

void func_12(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

int func_13()
{
	return unk_0x67D02A194A2FC2BD("SPLASH_TEXT");
}

