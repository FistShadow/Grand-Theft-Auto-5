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
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	float fLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 8;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 2;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 8;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 8;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	auto uLocal_95 = 0;
	int iLocal_96 = 0;
	struct<4> Local_97 = 0;
	struct<4> Local_101 = 0;
	struct<4> Local_105 = 0;
	struct<4> Local_109 = 0;
	struct<4> Local_113 = 0;
	struct<4> Local_117 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	auto uLocal_125 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	StringCopy(&Local_97, "CELL_206", 16);
	StringCopy(&Local_101, "CELL_214", 16);
	StringCopy(&Local_105, "CELL_243", 16);
	StringCopy(&Local_109, "CELL_244", 16);
	StringCopy(&Local_113, "CELL_265", 16);
	StringCopy(&Local_117, "CELL_300", 16);
	network_set_script_is_safe_for_network_game();
	func_82(&iLocal_124);
	iLocal_121 = 0;
	func_80();
	func_79(Global_14394, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_71(0);
	while (true)
	{
		wait(0);
		func_70();
		func_69();
		if (!Global_14413.f_1 == 9 && Global_14413.f_1 > 3)
		{
			switch (iLocal_96)
			{
				case 0:
					func_36();
					break;
				
				case 1:
					func_20();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_14413.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
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
	Global_1609099.f_5 = 0;
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
}

void func_5()
{
	Global_1609099.f_5 = 1;
	if (iLocal_123)
	{
		if (is_control_just_released(2, Global_14382))
		{
			iLocal_123 = 0;
		}
		return;
	}
	if (is_control_just_released(2, 201))
	{
		iLocal_96 = 1;
		func_6();
		return;
	}
	if (is_control_just_released(2, 202))
	{
		iLocal_96 = 1;
		return;
	}
	_set_warning_message_2("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1);
}

void func_6()
{
	int iVar0;
	
	iVar0 = Global_1609099.f_6[iLocal_121 /*7*/].f_2;
	if (Global_1609099.f_6[iLocal_121 /*7*/].f_1 == 1 && iLocal_122 == iVar0)
	{
		func_17(iVar0, Global_1609099.f_6[iLocal_121 /*7*/].f_6);
		func_11(iLocal_121);
	}
	Global_1609099.f_5 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (Global_14571)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_10(0))
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

bool func_10(int iParam0)
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

void func_11(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1609099.f_6[iParam0 /*7*/].f_1 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1609099.f_6[iParam0 /*7*/].f_5, false))
			{
				func_16();
			}
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_17), Global_1609099.f_6[iParam0 /*7*/].f_2);
			_remove_notification(Global_1609099.f_6[iParam0 /*7*/].f_4);
			func_15();
			func_13(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1609099.f_6[iVar0 /*7*/] = {Global_1609099.f_6[iVar0 + 1 /*7*/]};
			iVar0++;
		}
		Global_1609099.f_6[9 /*7*/].f_1 = 0;
		Global_1609099.f_6[9 /*7*/].f_2 = func_12();
	}
}

int func_12()
{
	return -1;
}

void func_13(int iParam0)
{
	if (!func_14(iParam0))
	{
		GAMEPLAY::SET_BIT(&(Global_1609099.f_3), iParam0);
	}
}

int func_14(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1609099.f_3, iParam0);
}

void func_15()
{
	Global_1609099--;
}

void func_16()
{
	Global_1609099.f_1--;
	if (Global_1609099.f_1 < 0)
	{
		Global_1609099.f_1 = 0;
	}
}

void func_17(int iParam0, auto uParam1)
{
	if (Global_1610316[player_id() /*174*/].f_10.f_21 == func_12())
	{
		if (network_is_player_active(iParam0))
		{
			Global_1610316[player_id() /*174*/].f_10.f_21 = iParam0;
			Global_2460486.f_4660.f_27 = uParam1;
			func_18(func_19(iParam0));
		}
	}
}

void func_18(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 440;
	Var0.f_1 = player_id();
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 2, iParam0);
	}
}

auto func_19(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_121 == -1)
	{
		func_71(1);
		return;
	}
	iVar0 = Global_1609099.f_6[iLocal_121 /*7*/].f_2;
	if (!func_35(iVar0, 0, 1) || iLocal_122 != iVar0)
	{
		func_71(1);
		return;
	}
	func_30(&iLocal_124);
	if (func_28(&iLocal_124))
	{
		func_71(1);
		return;
	}
	if (func_27(&iLocal_124))
	{
		func_11(iLocal_121);
		func_71(1);
		return;
	}
	if (func_23(&iLocal_124))
	{
		if (func_22())
		{
			iLocal_123 = 1;
			iLocal_96 = 3;
		}
		else if (Global_1609099.f_6[iLocal_121 /*7*/] == 0)
		{
			func_6();
		}
		else if (Global_1609099.f_6[iLocal_121 /*7*/] == 1)
		{
			func_21();
		}
		else
		{
			func_7(0);
		}
	}
}

void func_21()
{
	GAMEPLAY::SET_BIT(&Global_1573410, 15);
	func_11(iLocal_121);
	Global_1609099.f_5 = 0;
	func_7(0);
}

auto func_22()
{
	return Global_1312416;
}

bool func_23(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*iParam0, false))
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
	func_24();
	Global_14391 = 1;
	return true;
}

void func_24()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_25();
	}
}

void func_25()
{
	if (func_26())
	{
		_move_finger(5);
	}
}

bool func_26()
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

bool func_27(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*iParam0, true))
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
	if (!is_control_just_pressed(2, Global_14385))
	{
		return false;
	}
	func_24();
	Global_14391 = 1;
	return true;
}

bool func_28(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*iParam0, 2))
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
	if (!is_control_just_pressed(2, Global_14383))
	{
		return false;
	}
	func_29();
	Global_14391 = 1;
	return true;
}

void func_29()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_30(int iParam0)
{
	if (GAMEPLAY::GET_GAME_TIMER() < *iParam0.f_1)
	{
		return;
	}
	if (!is_screen_faded_in())
	{
		return;
	}
	if (is_control_just_pressed(2, Global_14389) || is_control_just_pressed(2, 181))
	{
		func_33();
		*iParam0.f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
	if (is_control_just_pressed(2, Global_14390) || is_control_just_pressed(2, 180))
	{
		func_31();
		*iParam0.f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
}

void func_31()
{
	func_79(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_32();
}

void func_32()
{
	if (func_26())
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

void func_33()
{
	func_79(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_34();
}

void func_34()
{
	if (func_26())
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

bool func_35(int iParam0, int iParam1, int iParam2)
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

void func_36()
{
	auto uVar0;
	auto uVar1;
	
	if (func_68() > 1)
	{
		func_30(&iLocal_124);
	}
	if (func_23(&iLocal_124))
	{
		_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
		uVar0 = _pop_scaleform_movie_function();
		while (!_0x768FF8961BA904D6(uVar0))
		{
			wait(0);
		}
		iLocal_121 = _0x2DE7EFA66B906036(uVar0);
		switch (Global_1609099.f_6[iLocal_121 /*7*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_38();
				break;
			
			default:
				return;
		}
		Global_14413.f_1 = 8;
		return;
	}
	if (func_27(&iLocal_124))
	{
		_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
		uVar1 = _pop_scaleform_movie_function();
		while (!_0x768FF8961BA904D6(uVar1))
		{
			wait(0);
		}
		iLocal_121 = _0x2DE7EFA66B906036(uVar1);
		switch (Global_1609099.f_6[iLocal_121 /*7*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_11(iLocal_121);
				func_71(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_14(0))
	{
		func_37(0);
		func_71(0);
	}
}

void func_37(int iParam0)
{
	if (func_14(iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1609099.f_3), iParam0);
	}
}

void func_38()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	var[] uVar20 = new var[3];
	int iVar24;
	int iVar25;
	int iVar26;
	char[16] cVar27;
	struct<16> Var31;
	char[16] cVar47;
	
	if (Global_14413.f_1 != 8)
	{
		Global_14413.f_1 = 8;
	}
	func_79(Global_14394, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = false;
	iLocal_122 = Global_1609099.f_6[iLocal_121 /*7*/].f_2;
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(26);
	_push_scaleform_movie_function_parameter_int(false);
	if (func_35(Global_1609099.f_6[iLocal_121 /*7*/].f_2, 0, 1))
	{
		Var3 = {func_67(Global_1609099.f_6[iLocal_121 /*7*/].f_2)};
		_begin_text_component("STRING");
		_0x39BBF623FC803EAC(func_61(Global_1609099.f_6[iLocal_121 /*7*/].f_2));
		add_text_component_substring_player_name(&Var3);
		_end_text_component();
		iVar0 = true;
	}
	else
	{
		func_60("");
	}
	if (Global_1609099.f_6[iLocal_121 /*7*/] == 0)
	{
		if (Global_262145.f_12340)
		{
			iVar19 = Global_1609099.f_6[iLocal_121 /*7*/].f_2;
			iVar24 = func_59(iVar19);
			iVar25 = 0;
			while (iVar25 < 3)
			{
				if (iVar26 < 3)
				{
					if (Global_1610316[iVar19 /*174*/].f_10.f_10[iVar25] != func_12())
					{
						if (func_35(Global_1610316[iVar19 /*174*/].f_10.f_10[iVar25], 0, 1))
						{
							uVar20[iVar26] = Global_1610316[iVar19 /*174*/].f_10.f_10[iVar25];
							iVar26++;
						}
					}
				}
				iVar25++;
			}
			if (iVar26 == 0)
			{
				if (iVar24)
				{
					func_60("BA_APP_BODYCTA");
				}
				else
				{
					func_60("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar27, "BA_APP_BODY_T4", 16);
				if (iVar24)
				{
					StringCopy(&cVar27, "BA_APP_BODYCT4", 16);
				}
				if (iVar26 == 2)
				{
					if (iVar24)
					{
						StringCopy(&cVar27, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar27, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar26 > 2)
				{
					if (iVar24)
					{
						StringCopy(&cVar27, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar27, "BA_APP_BODY_T6", 16);
					}
				}
				_begin_text_component(&cVar27);
				iVar25 = 0;
				while (iVar25 < iVar26)
				{
					Var31 = {func_67(uVar20[iVar25])};
					add_text_component_substring_player_name(&Var31);
					iVar25++;
				}
				_end_text_component();
			}
		}
		else
		{
			if (Global_1609099.f_77[iLocal_121 /*5*/].f_1)
			{
				if (Global_1609099.f_77[iLocal_121 /*5*/].f_2)
				{
					StringCopy(&cVar47, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar47, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1609099.f_77[iLocal_121 /*5*/].f_2)
			{
				StringCopy(&cVar47, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar47, "BA_APP_BODY_T10", 16);
			}
			_begin_text_component(&cVar47);
			add_text_component_integer(Global_1609099.f_77[iLocal_121 /*5*/]);
			add_text_component_integer(func_58(Global_1609099.f_6[iLocal_121 /*7*/].f_2));
			add_text_component_integer(Global_1609099.f_77[iLocal_121 /*5*/].f_3);
			add_text_component_integer(Global_1609099.f_77[iLocal_121 /*5*/].f_4);
			_end_text_component();
		}
	}
	else if (Global_1609099.f_6[iLocal_121 /*7*/] == 1)
	{
		_begin_text_component("BA_APP_BODY_DM2");
		_0x39BBF623FC803EAC(func_61(Global_1609099.f_6[iLocal_121 /*7*/].f_2));
		add_text_component_substring_player_name(func_51(Global_1609099.f_6[iLocal_121 /*7*/].f_2));
		_end_text_component();
	}
	if (iVar0)
	{
		iVar2 = func_45(Global_1609099.f_6[iLocal_121 /*7*/].f_2);
		if (iVar2 == 0)
		{
			iVar0 = false;
		}
		else
		{
			sVar1 = get_pedheadshot_txd_string(iVar2);
		}
	}
	if (iVar0)
	{
		_push_scaleform_movie_function_parameter_string(sVar1);
	}
	else
	{
		func_60(&Local_117);
	}
	_pop_scaleform_movie_function_void();
	func_79(Global_14394, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_43(&Local_113);
	func_39(13, &Local_105, 12, &Local_109, 4, &Local_97, &iLocal_124);
	iLocal_96 = 1;
}

void func_39(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_40(2, iParam0, sParam1, 0, iParam6, -1);
	func_40(1, iParam2, sParam3, 1, iParam6, 17);
	func_40(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_42(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(iParam4, iParam3);
		func_41(iParam5, 0);
		return;
	}
	if (Global_14401)
	{
		func_42(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(iParam4, iParam3);
		func_41(iParam5, 1);
		return;
	}
	func_42(Global_14394, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	GAMEPLAY::SET_BIT(iParam4, iParam3);
	func_41(iParam5, 1);
}

void func_41(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, iParam0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, iParam0);
}

void func_42(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_60(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_60(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_60(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_60(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_60(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_43(char* sParam0)
{
	func_44(Global_14394, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_60(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_60(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_60(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_60(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_60(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		func_46(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_46(int iParam0, int iParam1)
{
	if (!func_35(iParam0, 0, 1))
	{
		return;
	}
	if (func_48(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_47(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (!func_35(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_49(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_49(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_50(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_50(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_12();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_51(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_57(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_56(iParam0, 28) || func_56(player_id(), 28)) || func_55(iParam0)) && !func_53(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_52(iParam0);
	if (iVar1 != func_12())
	{
		sVar0 = func_57(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar0))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_12();
}

bool func_53(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_54(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

struct<13> func_54(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_55(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_54(iParam0)};
	if (is_orbis_version() || GAMEPLAY::IS_PC_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			return false;
		}
	}
	else if (is_durango_version())
	{
		if (_0xB57A49545BA53CE7(&Var0))
		{
			return false;
		}
	}
	return true;
}

int func_56(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

auto func_57(auto uParam0)
{
	return uParam0;
}

auto func_58(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_14;
}

int func_59(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

void func_60(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (iVar0 != -1)
	{
		return func_62(iVar0);
	}
	return 1;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_63(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_64(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_65(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_52(iParam0)];
		}
	}
	return -1;
}

int func_65(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_66(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_12();
}

int func_66(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_12())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

struct<16> func_67(int iParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, get_player_name(iParam0), 64);
	StringConCat(&cVar0, "</C>", 64);
	return cVar0;
}

auto func_68()
{
	return Global_1609099;
}

void func_69()
{
	if (Global_1609099.f_5)
	{
		if (iLocal_96 != 3)
		{
			if (!is_warning_message_active())
			{
				Global_1609099.f_5 = 0;
			}
		}
	}
}

void func_70()
{
	set_input_exclusive(0, 176);
	set_input_exclusive(0, 177);
}

void func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iLocal_122 = func_12();
	if (!Global_14413.f_1 == 7)
	{
		Global_14413.f_1 = 7;
	}
	iVar0 = false;
	if (iParam0)
	{
		iVar0 = iLocal_121;
	}
	if (iVar0 >= Global_1347371)
	{
		iVar0 = false;
	}
	if (Global_16772)
	{
		func_38();
		Global_16772 = 0;
		return;
	}
	if (func_65(player_id(), 0) && func_68() <= 0)
	{
		func_77();
		return;
	}
	func_72();
	func_79(Global_14394, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_43("CELL_BOSSAGE");
	iVar1 = false;
	if (func_68() > 0)
	{
		iVar1 = true;
	}
	if (iVar1)
	{
		func_39(13, &Local_101, 12, &Local_109, 4, &Local_97, &iLocal_124);
	}
	else
	{
		func_39(1, "", 1, "", 4, &Local_97, &iLocal_124);
	}
	iLocal_96 = 0;
}

void func_72()
{
	int iVar0;
	int iVar1;
	
	func_79(Global_14394, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = false;
	while (iVar0 < func_68())
	{
		if (Global_1609099.f_6[iVar0 /*7*/].f_1 == 1)
		{
			switch (Global_1609099.f_6[iVar0 /*7*/])
			{
				case 0:
					if (func_76(iVar0))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_74(iVar0))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_73();
}

void func_73()
{
	int iVar0;
	
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(25);
	_push_scaleform_movie_function_parameter_int(false);
	if (func_66(player_id()))
	{
		func_60("BA_APP_NONEB");
	}
	else
	{
		func_60("BA_APP_NONE");
	}
	func_60("");
	_push_scaleform_movie_function_parameter_int(-1);
	_push_scaleform_movie_function_parameter_int(true);
	iVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	_push_scaleform_movie_function_parameter_bool(iVar0);
	_pop_scaleform_movie_function_void();
}

bool func_74(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	
	if (Global_1609099.f_6[iParam0 /*7*/].f_2 == func_12() || !func_35(Global_1609099.f_6[iParam0 /*7*/].f_2, 0, 1))
	{
		return false;
	}
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(25);
	_push_scaleform_movie_function_parameter_int(iParam0);
	Var0 = {func_67(Global_1609099.f_6[iParam0 /*7*/].f_2)};
	func_75(&Var0);
	_begin_text_component("BA_APP_BODY_DM1");
	_end_text_component();
	_push_scaleform_movie_function_parameter_int(-1);
	iVar16 = true;
	iVar17 = func_64(Global_1609099.f_6[iParam0 /*7*/].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_62(iVar17);
	}
	_push_scaleform_movie_function_parameter_int(iVar16);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	return true;
}

void func_75(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_76(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (Global_1609099.f_6[iParam0 /*7*/].f_2 == func_12() || !func_35(Global_1609099.f_6[iParam0 /*7*/].f_2, 0, 1))
	{
		return false;
	}
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(25);
	_push_scaleform_movie_function_parameter_int(iParam0);
	Var0 = {func_67(Global_1609099.f_6[iParam0 /*7*/].f_2)};
	func_75(&Var0);
	iVar16 = func_59(Global_1609099.f_6[iParam0 /*7*/].f_2);
	iVar17 = func_58(Global_1609099.f_6[iParam0 /*7*/].f_2);
	if (iVar17 == 0)
	{
		if (iVar16)
		{
			func_60("BA_APP_BODYCT");
		}
		else
		{
			func_60("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (iVar16)
		{
			_begin_text_component("BA_APP_BODYCT3");
		}
		else
		{
			_begin_text_component("BA_APP_BODY_T3");
		}
		add_text_component_integer(iVar17);
		_end_text_component();
	}
	else
	{
		if (iVar16)
		{
			_begin_text_component("BA_APP_BODYCT2");
		}
		else
		{
			_begin_text_component("BA_APP_BODY_T2");
		}
		add_text_component_integer(iVar17);
		_end_text_component();
	}
	_push_scaleform_movie_function_parameter_int(-1);
	iVar18 = true;
	iVar19 = func_64(Global_1609099.f_6[iParam0 /*7*/].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_62(iVar19);
	}
	_push_scaleform_movie_function_parameter_int(iVar18);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	return true;
}

void func_77()
{
	func_79(Global_14394, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(26);
	_push_scaleform_movie_function_parameter_int(false);
	_begin_text_component("STRING");
	_0x39BBF623FC803EAC(func_61(player_id()));
	add_text_component_substring_player_name(func_78());
	_end_text_component();
	func_60("BA_APP_NONEG");
	func_60("CELL_AGBOSSPIC");
	_pop_scaleform_movie_function_void();
	func_79(Global_14394, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_43("CELL_BOSSAGE");
	func_39(1, "", 1, "", 4, &Local_97, &iLocal_124);
	iLocal_96 = 2;
}

char* func_78()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_52(player_id());
	if (iVar0 != func_12())
	{
		if (iVar0 != player_id())
		{
			if (((func_56(iVar0, 28) || func_56(player_id(), 28)) || func_55(iVar0)) && !func_53(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_57(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar1))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_79(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_80()
{
	Global_1609099.f_1 = 0;
	func_81();
}

void func_81()
{
	Global_1609099.f_4 = 0;
}

void func_82(auto uParam0)
{
	*uParam0 = 0;
}

