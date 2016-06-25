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
	int[] iLocal_20 = new int[94];
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int[] iLocal_120 = new int[5];
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	auto uLocal_129 = 0;
	int iLocal_130 = 0;
	struct<6>[] Local_131 = new struct<6>[5];
	int[] iLocal_162 = new int[5];
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
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					func_25();
					if (iLocal_119 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_119 == 2)
					{
						func_25();
						if (iLocal_130)
						{
							func_10();
						}
					}
					if (iLocal_119 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_14381, 0))
					{
						func_8();
						Global_14391 = 1;
						if (iLocal_119 == 2 || iLocal_119 == 1)
						{
							func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_14413.f_1 > 3)
							{
								Global_14413.f_1 = 7;
							}
						}
						if (iLocal_119 == 3)
						{
							func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
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
	terminate_this_thread();
}

bool func_3()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_130 = false;
	func_31();
	iLocal_115 = false;
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14409 == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(iLocal_115), to_float(false), -1f, -1f, &(Local_131[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_120[iLocal_115] = iVar0;
			iLocal_115++;
			iVar0++;
		}
	}
	if (Global_14409 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_162[iVar2] = 0;
			iVar2++;
		}
		iVar1 = 5 - 1;
		while (iVar0 < 5)
		{
			if (Local_131[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_162[iVar1] == 0)
				{
					func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(iLocal_115), to_float(false), -1f, -1f, &(Local_131[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_120[iLocal_115] = iVar1;
					iLocal_115++;
					iLocal_162[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1--;
			}
			iVar0++;
		}
	}
	if (iLocal_115 == 0)
	{
		func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		iLocal_130 = true;
	}
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_2283, 17);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_2283, 17);
	}
	iLocal_119 = 2;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_6(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_6(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_6(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_6(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_6(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_6(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_7(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_6(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_6(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_6(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_6(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_6(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_8()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_9(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
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

void func_10()
{
	int iVar0;
	
	if (Global_14391 == 0)
	{
		if (func_9(2, Global_14382, 0))
		{
			func_12();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_129 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_129))
			{
				wait(0);
			}
			iVar0 = _0x2DE7EFA66B906036(uLocal_129);
			iLocal_117 = iLocal_120[iVar0];
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_117 == 1)
			{
			}
			func_11();
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("CELL_3206");
			add_text_component_integer(iLocal_126);
			_end_text_component();
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("CELL_3101");
			add_text_component_integer(iLocal_127);
			_end_text_component();
			_pop_scaleform_movie_function_void();
			func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_14394, "SET_HEADER", &(Local_131[iLocal_117 /*6*/]), 0, 0, 0, 0);
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (Global_14401)
			{
				func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_119 = 3;
		}
	}
}

void func_11()
{
	switch (iLocal_117)
	{
		case 0:
			iLocal_126 = Global_100873;
			iLocal_127 = Global_100890;
			break;
		
		case 1:
			iLocal_126 = Global_100874 + Global_100875;
			iLocal_127 = Global_100891 + Global_100892;
			break;
		
		case 2:
			iLocal_126 = Global_100876;
			iLocal_127 = Global_100893;
			break;
		
		case 3:
			iLocal_126 = Global_100877;
			iLocal_127 = Global_100894;
			break;
		
		case 4:
			iLocal_126 = Global_100878 + Global_100879;
			iLocal_127 = Global_100895 + Global_100896;
			break;
		
		default:
			iLocal_126 = false;
			iLocal_127 = false;
			break;
	}
}

void func_12()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_13();
	}
}

void func_13()
{
	if (func_14())
	{
		_move_finger(5);
	}
}

bool func_14()
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

void func_15()
{
	if (Global_14391 == 0)
	{
		if (func_9(2, Global_14382, 0))
		{
			func_12();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_129 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_129))
			{
				wait(0);
			}
			iLocal_128 = _0x2DE7EFA66B906036(uLocal_129);
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
				if (iLocal_128 == 0)
				{
					iLocal_119 = 1;
					func_16();
				}
				else
				{
					iLocal_119 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()
{
	int iVar0;
	
	iLocal_115 = false;
	func_20();
	iVar0 = false;
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0))
	{
		func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(false), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_86612)
		{
			func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(false), -1f, -1f, &(Global_86403[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_115++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_86612 == 0)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		if (Global_14401)
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 1;
}

bool func_17(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_18(iParam0))
	{
		return false;
	}
	return true;
}

int func_18(int iParam0)
{
	return func_19(iParam0, Global_35711);
}

bool func_19(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

void func_20()
{
	int iVar0;
	int iVar1;
	
	Global_86612 = 0;
	iVar0 = false;
	while (iVar0 < 7)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_86612 < 52)
			{
				iVar1 = Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_86403[Global_86612 /*4*/]), {func_24(iVar1)}, 4);
				Global_86612++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 63)
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar0 /*6*/], false) && GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar0 /*6*/], true)) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar0 /*6*/], 3))
		{
			if (Global_86612 < 52)
			{
				MemCopy(&(Global_86403[Global_86612 /*4*/]), {func_22(iVar0)}, 4);
				Global_86612++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 20)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], iVar0))
		{
			if (Global_86612 < 52)
			{
				StringCopy(&(Global_86403[Global_86612 /*4*/]), func_21(iVar0), 16);
				Global_86612++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_23(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_23(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

struct<2> func_24(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "M_", 8);
	StringConCat(&cVar0, &(Global_82399[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_101154.f_7775.f_99.f_205[7])
		{
			case 1:
				StringConCat(&cVar0, "A", 8);
				break;
			
			case 2:
				StringConCat(&cVar0, "B", 8);
				break;
			
			default:
				StringConCat(&cVar0, "A", 8);
				break;
			}
	}
	return cVar0;
}

void func_25()
{
	if (iLocal_118)
	{
		if (timera() > 50)
		{
			iLocal_118 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116--;
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
		}
	}
	if (iLocal_118 == 0)
	{
		if (func_9(2, Global_14389, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116--;
			}
			func_28();
			iLocal_118 = 1;
			settimera(0);
		}
		if (func_9(2, Global_14390, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
			iLocal_118 = 1;
			settimera(0);
		}
	}
}

void func_26()
{
	func_33(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_27();
}

void func_27()
{
	if (func_14())
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

void func_28()
{
	func_33(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_29();
}

void func_29()
{
	if (func_14())
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

void func_30()
{
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	func_7(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_115 = 2;
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 0;
}

void func_31()
{
	func_32(0, "CELL_3001", 1, Global_100890);
	func_32(1, "CELL_3008", 3, Global_100890);
	func_32(2, "CELL_3004", 7, Global_100893);
	func_32(3, "CELL_3005", 9, Global_100894);
	func_32(4, "CELL_3007", 11, Global_100895);
}

void func_32(int iParam0, char* sParam1, int iParam2, auto uParam3)
{
	StringCopy(&(Local_131[iParam0 /*6*/]), sParam1, 16);
	Local_131[iParam0 /*6*/].f_4 = iParam2;
	Local_131[iParam0 /*6*/].f_5 = uParam3;
	if (Local_131[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

