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
	auto uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	auto uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int[] iLocal_26 = new int[25];
	struct<6>[] Local_52 = new struct<6>[25];
	int iLocal_203 = 0;
	Vector3 vLocal_204 = 0;
	Vector3 vLocal_207 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
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
	func_27();
	func_26();
	while (true)
	{
		wait(0);
		if (iLocal_24 == 0)
		{
			if (Global_14413.f_1 != 9)
			{
				switch (Global_14413.f_1)
				{
					case 7:
						if ((iLocal_210 == 0 && iLocal_211 == 0) && Global_16747 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14381, 0) && iLocal_210 == 0) && iLocal_211 == 0)
						{
							func_14();
							Global_14391 = 1;
							if (Global_14413.f_1 > 3)
							{
								if (is_bit_set(Global_2284, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_210)
				{
					func_9();
				}
				if (iLocal_211)
				{
					func_8();
				}
			}
			else
			{
				Global_14415 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = _0xF5BED327CEA362B1(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14413.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = get_maximum_number_of_photos();
	iLocal_22 = 0;
	iVar0 = false;
	while (iLocal_22 < iLocal_21)
	{
		if (_0xE791DF1F73ED2C8B(iLocal_22))
		{
			func_6(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(false), -1f, -1f, &(Local_52[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14394, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_5(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_5(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_5(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_5(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_5(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_5(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_6(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_5(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_5(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_5(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_5(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_7(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_8()
{
	if (iLocal_210 == 0 && iLocal_211 == 1)
	{
		if (iLocal_215)
		{
			vLocal_207.x++;
		}
		if (vLocal_207.x > vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			vLocal_207.y -= 2f;
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.y = vLocal_204.y;
			iLocal_216 = 0;
		}
		if (iLocal_217)
		{
			vLocal_207.z -= 7f;
		}
		if (vLocal_207.z < vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.z = vLocal_204.z;
			iLocal_217 = 0;
		}
		if ((iLocal_215 == 0 && iLocal_216 == 0) && iLocal_217 == 0)
		{
			iLocal_211 = 0;
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 7;
				clear_help(1);
				Global_16749 = 1;
				func_26();
			}
		}
		set_mobile_phone_rotation(vLocal_207, 0);
	}
}

void func_9()
{
	if ((iLocal_210 == 1 && iLocal_211 == 0) && Global_16747 == 6)
	{
		if (iLocal_212)
		{
			vLocal_207.x--;
		}
		if (vLocal_207.x < vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			vLocal_207.y -= 0.5f;
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.y = vLocal_204.y;
			iLocal_213 = 0;
		}
		if (iLocal_214)
		{
			vLocal_207.z += 7f;
		}
		if (vLocal_207.z > vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.z = vLocal_204.z;
			iLocal_214 = 0;
		}
		if ((iLocal_212 == 0 && iLocal_213 == 0) && iLocal_214 == 0)
		{
			iLocal_210 = 0;
			func_10("CELL_MSHELP_2");
		}
		set_mobile_phone_rotation(vLocal_207, 0);
	}
	if (is_bit_set(Global_2284, 15))
	{
		iLocal_210 = 0;
		iLocal_211 = 0;
		func_7(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14401)
		{
			func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_2283, 17);
		func_7(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14394, "SET_HEADER", &(Local_52[uLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_11()
{
	Global_16749 = 1;
	clear_help(1);
	terminate_this_thread();
}

bool func_12()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_13()
{
	if (iLocal_210 == 0)
	{
		get_mobile_phone_rotation(&vLocal_207, 0);
		vLocal_204 = {Global_14373};
		iLocal_211 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
		iLocal_217 = 1;
	}
}

void func_14()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_203)
	{
		if (timera() > 50)
		{
			iLocal_203 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_203 == 0)
	{
		if (func_15(2, Global_14389, 0))
		{
			func_20();
			iLocal_203 = 1;
			settimera(0);
		}
		if (func_15(2, Global_14390, 0))
		{
			func_17();
			iLocal_203 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_7(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_14576 == 0)
		{
			_move_finger(2);
		}
		else
		{
			_move_finger(1);
		}
	}
}

bool func_19()
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

void func_20()
{
	func_7(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_14576 == 0)
		{
			_move_finger(1);
		}
		else
		{
			_move_finger(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_14391 == 0)
	{
		if (func_15(2, Global_14382, 0))
		{
			clear_bit(&Global_2284, 15);
			func_24();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_20 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_20))
			{
				wait(0);
			}
			iVar0 = _0x2DE7EFA66B906036(uLocal_20);
			if (iVar0 > -1)
			{
				uLocal_23 = iLocal_26[iVar0];
				if (Global_14413.f_1 > 3)
				{
					if (Global_16747 == 0)
					{
						func_7(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14394, "SET_HEADER", &(Local_52[uLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_14401)
						{
							func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						clear_bit(&Global_2283, 17);
						Global_16751 = uLocal_23;
						Global_16747 = 12;
						Global_14413.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_211 == 0)
	{
		get_mobile_phone_rotation(&vLocal_207, 0);
		vLocal_204 = {-90.3f, -0.8f, 90f};
		iLocal_210 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
		iLocal_214 = 1;
	}
}

void func_24()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		_move_finger(5);
	}
}

void func_26()
{
	if ((is_xbox360_version() || is_durango_version()) || is_pc_version())
	{
		_0x4AF92ACD3141D96C();
		if (_0x2A893980E96B659A(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_16749 = 1;
			Global_14413.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_52[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_52[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_52[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_52[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_52[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_52[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_52[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_52[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_52[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_52[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_52[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_52[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_52[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_52[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_52[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_52[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_52[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_52[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_52[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_52[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

