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
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	struct<4> Local_30 = 0;
	struct<4> Local_34 = 0;
	struct<4> Local_38 = 0;
	struct<4> Local_42 = 0;
	struct<4> Local_46 = 0;
	struct<4> Local_50 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_34, "CELL_213", 16);
	StringCopy(&Local_38, "CELL_39", 16);
	StringCopy(&Local_42, "CELL_MP_300", 16);
	StringCopy(&Local_46, "CELL_MP_301", 16);
	StringCopy(&Local_50, "CELL_MP_302", 16);
	network_set_script_is_safe_for_network_game();
	func_41(&iLocal_28);
	func_32();
	while (true)
	{
		wait(0);
		if (!network_is_in_session())
		{
			func_30(1);
			func_29();
		}
		if (!Global_14413.f_1 == 9 && Global_14413.f_1 > 3)
		{
			func_3();
			if (Global_14413.f_1 != 8)
			{
				if (func_2())
				{
					func_29();
				}
			}
		}
		if (func_1())
		{
			func_29();
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

bool func_2()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_3()
{
	if (func_25(&iLocal_28))
	{
		if (func_14())
		{
			if (Global_2443010)
			{
				_0x57B192B4D4AD23D5(0);
				func_8(37, func_9(1, 1));
				Global_2443010 = 0;
			}
			else
			{
				_0x57B192B4D4AD23D5(1);
				func_8(36, func_9(1, 1));
				Global_2443010 = 1;
			}
			func_4(0);
			return;
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

void func_8(int iParam0, int iParam1)
{
	Vector3 vVar0;
	
	vVar0.x = 2;
	vVar0.y = player_id();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam1);
	}
}

auto func_9(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

auto func_12()
{
	return Global_1312747;
}

bool func_13(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_14()
{
	if (!func_20(player_id(), 1) && func_15())
	{
		return true;
	}
	return false;
}

int func_15()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	return func_16(120, -1);
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_17(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

auto func_18()
{
	return Global_1315901;
}

auto func_19()
{
	return Global_1315903;
}

int func_20(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_24(iParam0) != 0;
	}
	return func_21(iParam0, iParam1);
}

bool func_21(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_22(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_22(auto uParam0)
{
	return func_23(uParam0);
}

int func_23(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_24(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_25(int iParam0)
{
	if (!is_bit_set(*iParam0, false))
	{
		return false;
	}
	if (Global_14391)
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (!is_control_just_pressed(2, Global_14382))
	{
		return false;
	}
	func_26();
	Global_14391 = 1;
	return true;
}

void func_26()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_27();
	}
}

void func_27()
{
	if (func_28())
	{
		_move_finger(5);
	}
}

bool func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2563611 || iVar2)
	{
		return true;
	}
	return true;
}

void func_29()
{
	terminate_this_thread();
}

void func_30(int iParam0)
{
	if (iParam0)
	{
		func_31();
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

void func_31()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_32()
{
	if (!Global_14413.f_1 == 7)
	{
		Global_14413.f_1 = 7;
	}
	func_40(Global_14394, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_2443010)
		{
			func_39(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(false), to_float(12), -1f, -1f, &Local_46, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(false), to_float(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_14394, "SET_DATA_SLOT", to_float(13), to_float(false), to_float(12), -1f, -1f, &Local_50, 0, 0, 0, 0);
	}
	func_40(Global_14394, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&Local_38);
	if (func_14())
	{
		func_33(13, &Local_30, 1, "", 4, &Local_34, &iLocal_28);
	}
	else
	{
		func_33(1, "", 1, "", 4, &Local_34, &iLocal_28);
	}
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_34(2, iParam0, sParam1, 0, iParam6, -1);
	func_34(1, iParam2, sParam3, 1, iParam6, 17);
	func_34(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_34(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_39(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(iParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14401)
	{
		func_39(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		set_bit(iParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	set_bit(iParam4, iParam3);
	func_35(iParam5, 1);
}

void func_35(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&Global_2283, iParam0);
		return;
	}
	clear_bit(&Global_2283, iParam0);
}

void func_36(char* sParam0)
{
	func_37(Global_14394, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_37(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_38(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_38(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_38(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_38(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_38(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_38(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_39(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_38(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_38(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_38(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_38(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_38(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_40(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_41(auto uParam0)
{
	*uParam0 = 0;
}

