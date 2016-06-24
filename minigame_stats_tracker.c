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
	int iLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	struct<68> Local_50 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x67D02A194A2FC2BD("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (has_scaleform_movie_loaded(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				_call_scaleform_movie_function_string_params(iLocal_46, "SET_MISSION_TITLE", Local_50, Local_50.f_1, 0, 0, 0);
				_call_scaleform_movie_function_float_params(iLocal_46, "SET_MISSION_TITLE_COLOUR", Local_50.f_2, Local_50.f_2, Local_50.f_2, -1082130432, -1082130432);
				if (Local_50.f_5.f_1 != -1f && !is_string_null(Local_50.f_5.f_2))
				{
					_call_scaleform_movie_function_mixed_params(iLocal_46, "SET_TOTAL", to_float(Local_50.f_5), Local_50.f_5.f_1, -1f, -1f, -1f, Local_50.f_5.f_2, 0, 0, 0, 0);
				}
				_call_scaleform_movie_function_float_params(iLocal_46, "SET_MEDAL", to_float(Local_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < Local_50.f_66 + 1)
				{
					_push_scaleform_movie_function(iLocal_46, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(Local_50.f_9[iVar0 /*7*/]);
					_push_scaleform_movie_function_parameter_int(Local_50.f_9[iVar0 /*7*/].f_1);
					if (Local_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						_push_scaleform_movie_function_parameter_int(2);
						_push_scaleform_movie_function_parameter_int(false);
						_push_scaleform_movie_function_parameter_int(false);
						_begin_text_component("STRING");
						add_text_component_substring_time(floor(Local_50.f_9[iVar0 /*7*/].f_3 * 1000f), 6);
						_end_text_component();
						if (!is_string_null(Local_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(Local_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (Local_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!is_string_null(Local_50.f_9[iVar0 /*7*/].f_5) && !is_string_null(Local_50.f_9[iVar0 /*7*/].f_6))
						{
							_begin_text_component(Local_50.f_9[iVar0 /*7*/].f_6);
							add_text_component_substring_player_name(Local_50.f_9[iVar0 /*7*/].f_5);
							_end_text_component();
						}
					}
					else
					{
						_push_scaleform_movie_function_parameter_int(Local_50.f_9[iVar0 /*7*/].f_2);
						if (Local_50.f_9[iVar0 /*7*/].f_3 % 1f == 0f)
						{
							_push_scaleform_movie_function_parameter_float(Local_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							_begin_text_component("NUMBER");
							add_text_component_float(Local_50.f_9[iVar0 /*7*/].f_3, 2);
							_end_text_component();
						}
						if (Local_50.f_9[iVar0 /*7*/].f_4 % 1f == 0f)
						{
							_push_scaleform_movie_function_parameter_float(Local_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							_begin_text_component("NUMBER");
							add_text_component_float(Local_50.f_9[iVar0 /*7*/].f_4, 2);
							_end_text_component();
						}
						if (!is_string_null(Local_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(Local_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!is_string_null(Local_50.f_9[iVar0 /*7*/].f_6))
						{
							func_16(Local_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					_pop_scaleform_movie_function_void();
					iVar0++;
				}
				if (Local_50.f_5 != 0 && !is_string_null(Local_50.f_5.f_2))
				{
					_push_scaleform_movie_function(iLocal_46, "SET_TOTAL");
					_push_scaleform_movie_function_parameter_int(Local_50.f_5);
					if (!is_string_null(Local_50.f_5.f_3))
					{
						func_16(Local_50.f_5.f_3);
					}
					else
					{
						_push_scaleform_movie_function_parameter_float(Local_50.f_5.f_1);
					}
					func_16(Local_50.f_5.f_2);
					_pop_scaleform_movie_function_void();
				}
				_push_scaleform_movie_function(iLocal_46, "DRAW_MENU_LIST");
				_pop_scaleform_movie_function_void();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_101154.f_17787, 4096))
				{
					func_6(&(Global_101154.f_17787), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > Local_50.f_67 && Local_50.f_67 != -1f) || is_screen_faded_out()) || Global_25264)
				{
					func_17();
				}
				else
				{
					func_1(1);
					draw_scaleform_movie(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (is_hud_component_active(10))
					{
						hide_hud_component_this_frame(10);
					}
				}
				break;
		}
		wait(0);
	}
	func_17();
}

void func_1(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

float func_2(int iParam0)
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_3(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_3(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_4(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_5(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

void func_6(auto uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_8(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int iParam0)
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_3(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_12(int iParam0)
{
	if (Global_14571)
	{
		func_14(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_13())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_15(0))
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

bool func_15(int iParam0)
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

void func_16(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_17()
{
	set_scaleform_movie_as_no_longer_needed(&iLocal_46);
	Global_25264 = 0;
	func_1(0);
	terminate_this_thread();
}

