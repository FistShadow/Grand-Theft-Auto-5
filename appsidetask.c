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
	int[] iLocal_18 = new int[4];
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	float fLocal_30 = 0;
	int iLocal_31 = 0;
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
	fLocal_27 = 0.72f;
	fLocal_28 = 0.42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	network_set_script_is_safe_for_network_game();
	Global_16778 = 0;
	Global_14570 = 0;
	func_18();
	Global_14413.f_1 = 7;
	func_17(Global_14394, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					terminate_this_thread();
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_14381, 0))
			{
				Global_14391 = 1;
				Global_16778 = 0;
				Global_14413.f_1 = 7;
				func_18();
				func_17(Global_14394, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
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

bool func_2(int iParam0, int iParam1, int iParam2)
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

void func_3()
{
	terminate_this_thread();
}

bool func_4()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_5()
{
	draw_rect(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &(Global_101154.f_32575[Global_17000[uLocal_25 /*9*/] /*29*/].f_3), 0);
	fLocal_29 += 0.07f;
	func_10(255, 255, 255, 205);
	if (Global_17000[uLocal_25 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_29, fLocal_30, "CELL_506", Global_17000[uLocal_25 /*9*/].f_2.f_2, Global_17000[uLocal_25 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_29, fLocal_30, "CELL_503", Global_17000[uLocal_25 /*9*/].f_2.f_2, Global_17000[uLocal_25 /*9*/].f_2.f_1);
	}
	fLocal_29 += 0.07f;
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505", Global_17000[uLocal_25 /*9*/].f_2.f_3, Global_17000[uLocal_25 /*9*/].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 += 0.02f;
	if (Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	set_text_wrap(0f, 0.93f);
	func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_30 += 0.07f;
	iVar0 = 1;
	while (iVar0 <= Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_30 += 0.04f;
		if (Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, &(Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_27[iVar0], Global_16831[Global_17000[uLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_9()
{
	set_text_scale(0.4f, 0.4f);
	set_text_colour(255, 128, 0, 255);
	set_text_dropshadow(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_text_scale(0.3f, 0.3f);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(1, 0, 0, 0, 205);
	set_text_proportional(1);
	set_text_font(0);
	set_text_colour(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_14382, 0))
	{
		uLocal_25 = iLocal_18[iLocal_24];
		Global_16778 = 1;
		func_12(Global_14394, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_14394, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_14413.f_1 = 8;
		Global_16778 = 1;
	}
}

void func_12(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_13(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_13(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_13(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_13(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_13(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_13(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_14()
{
	if (iLocal_31)
	{
		if (timera() > 50)
		{
			iLocal_31 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24--;
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
		}
	}
	if (iLocal_31 == 0)
	{
		if (func_2(2, Global_14389, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24--;
			}
			iLocal_31 = 1;
			settimera(0);
		}
		if (func_2(2, Global_14390, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
			iLocal_31 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;
	while (iVar0 < iLocal_26)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		func_8(fLocal_29, fLocal_30, &(Global_101154.f_32575[Global_17000[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_29 += 0.07f;
		func_10(255, 255, 255, 205);
		if (Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_29, fLocal_30, "CELL_506", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, "CELL_503", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_29 += 0.07f;
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		fLocal_30 += 0.02f;
		set_text_wrap(0f, 0.93f);
		func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_30 += 0.05f;
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_13(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_13(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_13(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_13(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_13(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_17(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_18()
{
	int[] iVar0 = new int[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iLocal_23 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_17000[iVar7 /*9*/].f_2 = -1;
		Global_17000[iVar7 /*9*/].f_2.f_1 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_2 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_3 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_17000[iVar6 /*9*/].f_8 != 0)
				{
					if (func_19(Global_17000[iVar6 /*9*/].f_2, Global_17000[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_18[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_17000[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_23++;
		}
		iVar5++;
	}
	func_12(Global_14394, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

bool func_19(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

