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
	int iLocal_18 = 0;
	int[] iLocal_19 = new int[12];
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	char[64] cLocal_45 = 0;
	struct<6>[] Local_61 = new struct<6>[19];
	struct<16>[] Local_176 = new struct<16>[19];
	int iLocal_481 = 0;
	Vector3 vLocal_482 = 0;
	Vector3 vLocal_485 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<314> Local_493 = 0;
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
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16778 = 0;
	Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
	Global_14570 = 0;
	func_50();
	func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 7;
	}
	iLocal_42 = GAMEPLAY::GET_GAME_TIMER();
	Global_14417 = 0;
	get_mobile_phone_position(&vLocal_485);
	vLocal_482 = {vLocal_485};
	vLocal_482.x -= 10f;
	vLocal_482.y += 20f;
	Global_16745 = 0;
	Global_16746 = 1;
	while (true)
	{
		wait(0);
		if (Global_16746 == 0 && Global_16745 == 1)
		{
			func_44();
		}
		if (Global_16746 == 1 && Global_16745 == 0)
		{
			func_39();
		}
		if (iLocal_41 == 0)
		{
			iLocal_43 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_43 - iLocal_42 > 500)
			{
				iLocal_41 = 1;
			}
		}
		if ((Global_14413.f_1 != 9 && Global_16746 == 0) && Global_16745 == 0)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						if (Global_2467970 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					Global_16745 = 1;
				}
			}
			else if (func_3(2, Global_14381, 0) || GAMEPLAY::IS_BIT_SET(Global_2284, 12))
			{
				if (are_strings_equal(&(Global_2562132[uLocal_35 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					GAMEPLAY::CLEAR_BIT(&Global_2284, 12);
					func_2();
					Global_14391 = 1;
					Global_16778 = 0;
					if (Global_14413.f_1 > 3)
					{
						Global_14413.f_1 = 7;
					}
					if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_2562132[uLocal_35 /*104*/].f_29 > 0)
					{
						if (Global_2562132[uLocal_35 /*104*/].f_31 == 1)
						{
							Global_2562132[uLocal_35 /*104*/].f_29 = 4;
							Global_2562132[uLocal_35 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2562132[uLocal_35 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		if (func_1())
		{
			func_52();
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
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

bool func_3(int iParam0, int iParam1, int iParam2)
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
	if (iLocal_38)
	{
		if (timera() > 50)
		{
			iLocal_38 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_38 == 0)
	{
		if (func_3(2, Global_14389, 0))
		{
			func_9();
			iLocal_38 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14390, 0))
		{
			func_6();
			iLocal_38 = 1;
			settimera(0);
		}
	}
}

void func_6()
{
	func_49(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_7();
}

void func_7()
{
	if (func_8())
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

bool func_8()
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

void func_9()
{
	func_49(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_2562132[uLocal_35 /*104*/].f_24 == 1)
	{
		if (Global_14391 == 0)
		{
			if (is_control_pressed(2, Global_14384))
			{
				func_2();
				Global_14391 = 1;
				func_26();
				if (Global_2562132[uLocal_35 /*104*/].f_27 == 1)
				{
					Global_2562132[uLocal_35 /*104*/].f_99[0] = 0;
					Global_2562132[uLocal_35 /*104*/].f_99[1] = 0;
					Global_2562132[uLocal_35 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2562132[uLocal_35 /*104*/].f_99[Global_14413] = 0;
				}
				if (func_25(uLocal_35))
				{
				}
				else
				{
					Global_2562132[uLocal_35 /*104*/].f_24 = 0;
					Global_2562132[uLocal_35 /*104*/].f_28 = 0;
				}
				_remove_notification(Global_2562132[uLocal_35 /*104*/].f_16);
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_33 > 0)
				{
					iLocal_33--;
				}
				func_45();
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
					Global_16778 = 0;
				}
			}
		}
	}
	else if (Global_14391 == 0)
	{
		if (is_control_pressed(2, Global_14385))
		{
			if (iLocal_37 == 1)
			{
				if (Global_14413.f_1 > 3)
				{
					StringCopy(&Global_68042, _get_label_text(&Global_16753), 64);
					Global_68069 = 7;
					GAMEPLAY::SET_BIT(&Global_2284, 10);
					Global_14413.f_1 = 6;
				}
				func_52();
			}
		}
	}
	if (Global_2562132[uLocal_35 /*104*/].f_31 == 1)
	{
		if (Global_14391 == 0)
		{
			if (func_3(2, Global_14385, 0))
			{
				func_23();
				Global_14391 = 1;
				Global_2562132[uLocal_35 /*104*/].f_29 = 2;
				Global_2562132[uLocal_35 /*104*/].f_24 = 1;
				Global_2562132[uLocal_35 /*104*/].f_31 = 0;
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14391 == 0 && iLocal_41 == 1)
	{
		if (func_3(2, Global_14382, 0))
		{
			Global_14391 = 1;
			if (Global_2562132[uLocal_35 /*104*/].f_29 > 0)
			{
				func_23();
				Global_2562132[uLocal_35 /*104*/].f_29 = 3;
				Global_2562132[uLocal_35 /*104*/].f_24 = 1;
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_2562132[uLocal_35 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1598 = 144;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14411 = SYSTEM::START_NEW_SCRIPT("appContacts", 3800);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1598 = Global_2562132[uLocal_35 /*104*/].f_17;
				if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_13();
				func_52();
			}
		}
	}
}

void func_13()
{
	struct<6> Var0;
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_14394))
	{
		wait(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2888);
			if (Global_2888 == 1)
			{
				func_49(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_49(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_16();
				func_49(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_49(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_16()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2563609)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = false;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar7);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_15(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_19(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_15(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_15(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_15(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_15(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_15(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_20(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_22() && is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(PLAYER::PLAYER_PED_ID(), false);
			if (Global_69489)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_69489)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								GAMEPLAY::SET_BIT(&Global_2283, 11);
								task_use_mobile_phone(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

bool func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return true;
	}
	return false;
}

void func_23()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		_move_finger(5);
	}
}

bool func_25(auto uParam0)
{
	if ((Global_101154.f_12831[uParam0 /*104*/].f_99[0] == 1 || Global_101154.f_12831[uParam0 /*104*/].f_99[1] == 1) || Global_101154.f_12831[uParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_26()
{
	if (func_18(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_27();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

auto func_27()
{
	func_28();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_31(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER::PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_18(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_29(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	char[64] cVar0;
	
	if (Global_14391 == 0)
	{
		if ((func_3(2, Global_14382, 0) || Global_2563382 == 1) || Global_16772 == 1)
		{
			if (Global_2563382 == 0 && Global_16772 == 0)
			{
				func_23();
			}
			Global_14391 = 1;
			iLocal_41 = 0;
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			uLocal_35 = iLocal_19[iLocal_33];
			if (iLocal_33 < iLocal_492)
			{
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 8;
					Global_16778 = 1;
					iLocal_34 = iLocal_33;
					_0x4737980E8A283806(iLocal_19[iLocal_33], &Local_493);
				}
				settimerb(0);
				iLocal_39 = 0;
				_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
				uLocal_44 = _pop_scaleform_movie_function();
				while (!_0x768FF8961BA904D6(uLocal_44) && iLocal_39 == 0)
				{
					wait(0);
					if (timerb() > 2000)
					{
						iLocal_39 = 1;
					}
				}
				func_37();
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(9);
				_push_scaleform_movie_function_parameter_int(false);
				func_15("CELL_1");
				_begin_text_component("CELL_TO_FIELD");
				add_text_component_substring_player_name(get_player_name(player_id()));
				_end_text_component();
				_begin_text_component("CELL_FROM_FIELD");
				add_text_component_substring_player_name(&(Local_493.f_2));
				_end_text_component();
				_begin_text_component("CELL_EMAIL_BCON");
				add_text_component_substring_player_name(&(Local_493.f_56[0 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[1 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[2 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[3 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[4 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[5 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[6 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[7 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[8 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_56[9 /*16*/]));
				_end_text_component();
				_begin_text_component("CELL_2000");
				add_text_component_substring_player_name(&(Local_493.f_2));
				_end_text_component();
				switch (Local_493.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						_push_scaleform_movie_function_parameter_string("EmailAds_Dock_Tease");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 3:
						_push_scaleform_movie_function_parameter_string("EmailAds_Warstock");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 4:
						_push_scaleform_movie_function_parameter_string("EmailAds_Legendary_Motorsport");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 5:
						_push_scaleform_movie_function_parameter_string("EmailAds_LS_Customs");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 6:
						_push_scaleform_movie_function_parameter_string("EmailAds_Elitas_Travel");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 7:
						_push_scaleform_movie_function_parameter_string("EmailAds_LS_Tourist_Info");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 8:
						_push_scaleform_movie_function_parameter_string("emailads_dynasty8");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 9:
						_push_scaleform_movie_function_parameter_string("emailads_bennys");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 10:
						_push_scaleform_movie_function_parameter_string("emailads_ammunation");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 11:
						_push_scaleform_movie_function_parameter_string("emailads_SSSA");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 12:
						_push_scaleform_movie_function_parameter_string("emailads_maze_bank");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 13:
						_push_scaleform_movie_function_parameter_string("emailads_shark");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
					
					case 14:
						_push_scaleform_movie_function_parameter_string("emailads_RP");
						_push_scaleform_movie_function_parameter_bool(true);
						break;
				}
				_pop_scaleform_movie_function_void();
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_33 == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2563397, 25))
					{
						GAMEPLAY::CLEAR_BIT(&Global_2563397, 25);
					}
					if (Global_2562131 > 0)
					{
						func_34(3855, iLocal_488, -1, 1);
						if (Global_2562131 > 0)
						{
							Global_2562131 = 0;
						}
					}
				}
				return;
			}
			if (Global_2562132[uLocal_35 /*104*/].f_24 != 0)
			{
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 8;
				}
				if (Global_2563382 == 1 || Global_16772 == 1)
				{
					uLocal_35 = iLocal_19[0];
					iLocal_34 = 0;
					if (Global_2563382 == 1)
					{
					}
					Global_16772 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_39 = 0;
					_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_44 = _pop_scaleform_movie_function();
					while (!_0x768FF8961BA904D6(uLocal_44) && iLocal_39 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_39 = 1;
						}
					}
					if (iLocal_39 == 1)
					{
						iLocal_40 = 0;
					}
					else
					{
						iLocal_40 = _0x2DE7EFA66B906036(uLocal_44);
					}
					if (iLocal_40 < 0)
					{
						iLocal_40 = 0;
					}
					uLocal_35 = iLocal_19[iLocal_33];
					iLocal_34 = iLocal_33;
				}
				Global_2562132[uLocal_35 /*104*/].f_28 = 1;
				iLocal_37 = 0;
				StringCopy(&Global_16753, "NO_HYPERLINK", 64);
				cVar0 = {Global_2562132[uLocal_35 /*104*/]};
				StringConCat(&cVar0, "_LINK", 64);
				if (does_text_label_exist(&cVar0))
				{
					Global_16753 = {cVar0};
					iLocal_37 = 1;
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GAMEPLAY::SET_BIT(&Global_2283, 17);
					Global_2562132[uLocal_35 /*104*/].f_26 = 1;
					Global_2562132[uLocal_35 /*104*/].f_24 = 2;
				}
				if (Global_2562132[uLocal_35 /*104*/].f_26 == 0)
				{
					Global_2562132[uLocal_35 /*104*/].f_24 = 1;
				}
				func_37();
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(9);
				_push_scaleform_movie_function_parameter_int(false);
				func_15("CELL_1");
				_begin_text_component("CELL_TO_FIELD");
				add_text_component_substring_player_name(get_player_name(player_id()));
				_end_text_component();
				if (Global_2562132[uLocal_35 /*104*/].f_17 == 145)
				{
					_begin_text_component("CELL_FROM_FIELD");
					add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_50));
					_end_text_component();
				}
				else
				{
					_begin_text_component("CELL_FROM_FIELD");
					_add_text_component_item_string(&(Global_101154.f_32575[Global_2562132[uLocal_35 /*104*/].f_17 /*29*/].f_3));
					_end_text_component();
				}
				switch (Global_2562132[uLocal_35 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_2562132[uLocal_35 /*104*/]));
						break;
					
					case 1:
						_begin_text_component(&(Global_2562132[uLocal_35 /*104*/]));
						add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_33));
						if (Global_2562132[uLocal_35 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_67));
						}
						if ((Global_2562132[uLocal_35 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_2562132[uLocal_35 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_2562132[uLocal_35 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_2562132[uLocal_35 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_2562132[uLocal_35 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 2:
						_begin_text_component(&(Global_2562132[uLocal_35 /*104*/]));
						add_text_component_integer(Global_2562132[uLocal_35 /*104*/].f_49);
						_end_text_component();
						break;
					
					case 3:
						_begin_text_component(&(Global_2562132[uLocal_35 /*104*/]));
						add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_33));
						add_text_component_integer(Global_2562132[uLocal_35 /*104*/].f_49);
						if (Global_2562132[uLocal_35 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_67));
						}
						if ((Global_2562132[uLocal_35 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_2562132[uLocal_35 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_2562132[uLocal_35 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_2562132[uLocal_35 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_2562132[uLocal_35 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_2562132[uLocal_35 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 4:
						func_33(uLocal_35);
						break;
					
					case 5:
						func_33(uLocal_35);
						break;
					
					case 6:
						func_33(uLocal_35);
						break;
					
					case 7:
						func_33(uLocal_35);
						break;
					
					case 8:
						func_33(uLocal_35);
						break;
					
					case 9:
						func_33(uLocal_35);
						break;
					
					case 10:
						func_33(uLocal_35);
						break;
					
					case 11:
						func_33(uLocal_35);
						break;
				}
				if (Global_2562132[uLocal_35 /*104*/].f_17 == 145)
				{
					_begin_text_component("CELL_2000");
					add_text_component_substring_player_name(&(Global_2562132[uLocal_35 /*104*/].f_50));
					_end_text_component();
				}
				else
				{
					func_15(&(Global_101154.f_32575[Global_2562132[uLocal_35 /*104*/].f_17 /*29*/].f_3));
				}
				_pop_scaleform_movie_function_void();
				Global_16778 = 1;
				func_49(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				_remove_notification(Global_2562132[uLocal_35 /*104*/].f_16);
				if (Global_2562132[uLocal_35 /*104*/].f_29 > 0)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2562132[uLocal_35 /*104*/].f_30 == 1)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2562132[uLocal_35 /*104*/].f_29 > 0)
				{
					if (are_strings_equal(&(Global_2562132[uLocal_35 /*104*/]), "CELL_FINV"))
					{
						if (Global_14401)
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2562132[uLocal_35 /*104*/].f_24 == 2)
				{
					if (Global_2562132[uLocal_35 /*104*/].f_31 == 1)
					{
						iLocal_37 = 0;
						if (Global_14401)
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GAMEPLAY::SET_BIT(&Global_2283, 17);
					}
					else if (iLocal_37 == 0)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
				Global_2563382 = 0;
			}
			else
			{
				Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
				Global_2563382 = 0;
			}
		}
		if (Global_2467970 == 0)
		{
			if (Global_69489)
			{
			}
		}
	}
}

void func_33(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_101154.f_12831[uParam0 /*104*/].f_49)
	{
		case 1:
			_begin_text_component("CELL_CL01");
			break;
		
		case 2:
			_begin_text_component("CELL_CL02");
			break;
		
		case 3:
			_begin_text_component("CELL_CL03");
			break;
		
		case 4:
			_begin_text_component("CELL_CL04");
			break;
		
		case 5:
			_begin_text_component("CELL_CL05");
			break;
		
		case 6:
			_begin_text_component("CELL_CL06");
			break;
		
		case 7:
			_begin_text_component("CELL_CL07");
			break;
		
		case 8:
			_begin_text_component("CELL_CL08");
			break;
		
		case 9:
			_begin_text_component("CELL_CL09");
			break;
	}
	_add_text_component_item_string(&(Global_101154.f_12831[uParam0 /*104*/]));
	while (iVar0 < Global_101154.f_12831[uParam0 /*104*/].f_49)
	{
		switch (Global_101154.f_12831[uParam0 /*104*/].f_32)
		{
			case 4:
				_add_text_component_item_string(&(Global_2460486.f_1569[iVar0 /*4*/]));
				break;
			
			case 5:
				_add_text_component_item_string(&(Global_1715404[iVar0 /*4*/]));
				break;
			
			case 6:
				_add_text_component_item_string(&(Global_1715445[iVar0 /*4*/]));
				break;
			
			case 7:
				_add_text_component_item_string(&(Global_1715466[iVar0 /*4*/]));
				break;
			
			case 8:
				_add_text_component_item_string(&(Global_1715483[iVar0 /*4*/]));
				break;
			
			case 9:
				_add_text_component_item_string(&(Global_1715496[iVar0 /*4*/]));
				break;
			
			case 10:
				_add_text_component_item_string(&(Global_1715509[iVar0 /*4*/]));
				break;
			
			case 11:
				_add_text_component_item_string(&(Global_1715522[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	_end_text_component();
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_35(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

auto func_36()
{
	return Global_1312747;
}

void func_37()
{
	if (iLocal_481)
	{
		set_streamed_texture_dict_as_no_longer_needed(&cLocal_45);
	}
	iLocal_481 = 0;
	StringCopy(&cLocal_45, "05_b_sext_stripperJuliet", 64);
	iLocal_481 = 1;
	request_streamed_texture_dict(&cLocal_45, false);
	while (!has_streamed_texture_dict_loaded(&cLocal_45))
	{
		wait(100);
	}
	if (are_strings_equal(&(Global_2562132[1 /*104*/]), &(Local_61[1 /*6*/])))
	{
		Local_176[1 /*16*/] = {cLocal_45};
		if (are_strings_equal(&(Local_176[1 /*16*/]), &cLocal_45))
		{
		}
	}
}

void func_38()
{
	if (iLocal_38)
	{
		if (timera() > 50)
		{
			iLocal_38 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_33 > 0)
			{
				iLocal_33--;
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_33++;
			if (iLocal_33 == iLocal_32)
			{
				iLocal_33 = 0;
			}
			func_6();
		}
	}
	if (iLocal_38 == 0)
	{
		if (func_3(2, Global_14389, 0))
		{
			if (iLocal_33 > 0)
			{
				iLocal_33--;
				func_9();
			}
			iLocal_38 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14390, 0))
		{
			iLocal_33++;
			if (iLocal_33 == iLocal_32)
			{
				iLocal_33 = 0;
			}
			func_6();
			iLocal_38 = 1;
			settimera(0);
		}
	}
}

void func_39()
{
	float fVar0;
	
	fVar0 = func_40(vLocal_485, vLocal_482, Global_14373, -90f, 0f, 90f, 350f, 0);
	set_mobile_phone_scale(500f + 75f * fVar0);
	if (fVar0 >= 1f)
	{
		Global_16746 = 0;
		iLocal_18 = 0;
	}
}

float func_40(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, float fParam4, int iParam5)
{
	struct<2> Var0;
	float fVar3;
	Vector3 fVar4;
	float fVar5;
	
	if (Global_2563612 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 14) && Global_14413.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
			{
				Global_2563612 = 1;
			}
		}
	}
	if (func_43() && Global_2563612 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
	}
	fVar3 = func_42(to_float(GAMEPLAY::GET_GAME_TIMER() - iLocal_18) / fParam12, 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (iParam13)
		{
			fVar4--;
			fVar5 = 0.670158f;
			fVar4 *= fVar4 * fVar5 + 1f * fVar4 + fVar5 + 1f;
		}
		else
		{
			fVar4 = sin(fVar3 * 90f);
		}
		Global_14341 = {func_41(vParam0, vParam3, fVar4)};
		Global_14344 = {func_41(vParam6, vParam9, fVar4)};
	}
	else
	{
		Global_14341 = {vParam3};
		Global_14344 = {vParam9};
	}
	set_mobile_phone_position(Global_14341);
	set_mobile_phone_rotation(Global_14344, 0);
	return fVar3;
}

Vector3 func_41(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_42(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return false;
		}
		if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!_0x4F32C0D5A90A9B40())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return false;
				}
			}
		}
		if (((is_ped_swimming(PLAYER::PLAYER_PED_ID()) || is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID())) || is_player_climbing(player_id())) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		if (Global_100202)
		{
			return false;
		}
	}
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar3)) || is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iVar3))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2563611 || iVar2 == 1)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) > 0 || Global_101154.f_12741.f_89)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
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
			return true;
		}
	}
	return false;
}

void func_44()
{
	float fVar0;
	
	fVar0 = func_40(vLocal_482, vLocal_485, -90f, 0f, 90f, Global_14373, 350f, 0);
	set_mobile_phone_scale(500f + 75f * 1f - fVar0);
	if (fVar0 >= 1f)
	{
		Global_16745 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()
{
	if (Global_2563382 == 0)
	{
		if (iLocal_34 < 0)
		{
			iLocal_34 = 0;
		}
		func_46(Global_14394, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14394, "DISPLAY_VIEW", 8f, to_float(iLocal_34), -1082130432, -1082130432, -1082130432);
		if (Global_14401)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69489)
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
	}
	else
	{
		iLocal_34 = false;
	}
}

void func_46(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_15(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_15(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_15(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_15(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_15(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_47()
{
	int[] iVar0 = new int[12];
	int iVar13;
	int iVar14;
	int[] iVar15 = new int[10];
	int iVar26;
	int iVar27;
	int iVar28;
	struct<16> Var29;
	
	iLocal_32 = 0;
	func_26();
	iVar13 = false;
	iVar14 = 0;
	iVar26 = 0;
	while (iVar13 < iLocal_492)
	{
		iVar14 = 0;
		iVar26 = 0;
		while (iVar14 < iLocal_492 && iVar26 == 0)
		{
			_0x4737980E8A283806(iVar14, &Local_493);
			if (iVar15[iVar14] == 0)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(8);
				_push_scaleform_movie_function_parameter_int(iVar13);
				if (iVar13 == 0)
				{
					if (Global_2562131 == 0)
					{
						_push_scaleform_movie_function_parameter_int(true);
					}
					else
					{
						_push_scaleform_movie_function_parameter_int(false);
					}
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(true);
				}
				_push_scaleform_movie_function_parameter_bool(false);
				_begin_text_component("CELL_2000");
				add_text_component_substring_player_name(&(Local_493.f_2));
				_end_text_component();
				_begin_text_component("CELL_EMAIL_SUBJ");
				add_text_component_substring_player_name(&(Local_493.f_23[0 /*16*/]));
				add_text_component_substring_player_name(&(Local_493.f_23[1 /*16*/]));
				_end_text_component();
				_pop_scaleform_movie_function_void();
				iVar15[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar26 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					iLocal_488 = Local_493.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
	while (iVar13 < 11)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar27 = 0;
		iVar28 = 11;
		Global_2562132[iVar28 /*104*/].f_18 = -1;
		Global_2562132[iVar28 /*104*/].f_18.f_1 = 0;
		Global_2562132[iVar28 /*104*/].f_18.f_2 = 0;
		Global_2562132[iVar28 /*104*/].f_18.f_3 = 0;
		Global_2562132[iVar28 /*104*/].f_18.f_5 = 0;
		while (iVar27 < 12)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar27] == 0)
			{
				if (Global_2562132[iVar27 /*104*/].f_24 != 0)
				{
					if (Global_2562132[iVar27 /*104*/].f_99[Global_14413] == 1)
					{
						if (func_48(Global_2562132[iVar27 /*104*/].f_18, Global_2562132[iVar28 /*104*/].f_18))
						{
							iVar28 = iVar27;
							if (Global_2562132[iVar28 /*104*/].f_28 == 0)
							{
								iLocal_36 = false;
							}
							else
							{
								iLocal_36 = true;
							}
						}
					}
				}
			}
			iVar27++;
		}
		iLocal_19[iVar13] = iVar28;
		iVar0[iVar28] = 1;
		if (Global_2562132[iVar28 /*104*/].f_24 != 0)
		{
			if (Global_2562132[iVar28 /*104*/].f_99[Global_14413] == 1)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(8);
				_push_scaleform_movie_function_parameter_int(iVar13);
				_push_scaleform_movie_function_parameter_int(iLocal_36);
				_push_scaleform_movie_function_parameter_bool(false);
				if (Global_2562132[iVar28 /*104*/].f_17 == 145)
				{
					_begin_text_component("CELL_2000");
					add_text_component_substring_player_name(&(Global_2562132[iVar28 /*104*/].f_50));
					_end_text_component();
				}
				else
				{
					func_15(&(Global_101154.f_32575[Global_2562132[iVar28 /*104*/].f_17 /*29*/].f_3));
				}
				Var29 = {Global_2562132[iVar28 /*104*/]};
				StringConCat(&Var29, "_SUB", 64);
				func_15(&Var29);
				_pop_scaleform_movie_function_void();
				iLocal_32++;
			}
		}
		iVar13++;
	}
}

bool func_48(struct<6> Param0, struct<6> Param1)
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

void func_49(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_50()
{
	switch (_get_ui_language_id())
	{
		case -1:
			unk_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 0:
			unk_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 1:
			unk_0x07DBD622D9533857("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x07DBD622D9533857("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x07DBD622D9533857("gta5mkt_it");
			break;
		
		case 4:
			unk_0x07DBD622D9533857("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x07DBD622D9533857("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x07DBD622D9533857("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x07DBD622D9533857("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x07DBD622D9533857("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x07DBD622D9533857("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x07DBD622D9533857("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x07DBD622D9533857("gta5mkt_me");
			break;
	}
	_0x040ADDCBAFA1018A(0, 6);
	wait(0);
	iLocal_489 = 1;
	iLocal_490 = false;
	while (iLocal_489 && Global_14413.f_1 > 3)
	{
		wait(0);
		iLocal_491 = _0x16DA8172459434AA();
		if (func_4())
		{
			Global_14413.f_1 = 3;
			iLocal_489 = 0;
			iLocal_490 = false;
		}
		switch (iLocal_491)
		{
			case 3:
				iLocal_489 = 0;
				iLocal_490 = true;
				break;
			
			case 0:
				iLocal_489 = 0;
				iLocal_490 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_489 = 0;
				iLocal_490 = false;
				break;
			
			case 2:
				iLocal_489 = 0;
				iLocal_490 = false;
				break;
		}
	}
	if (iLocal_490)
	{
		iLocal_492 = unk_0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_492 = 0;
	}
}

void func_51()
{
	StringCopy(&(Local_61[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_176[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_176[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_176[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_176[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_61[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_176[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_61[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_176[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_61[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_176[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_176[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_176[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_176[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_176[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_176[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_176[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_61[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_176[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_61[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_176[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_61[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_176[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_176[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_176[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_176[18 /*16*/]), "executiveproducer", 64);
}

void func_52()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_481)
	{
		set_streamed_texture_dict_as_no_longer_needed(&cLocal_45);
	}
	Global_16746 = 0;
	Global_16745 = 0;
	terminate_this_thread();
}

void func_53(int iParam0)
{
	if (Global_14571)
	{
		func_55(0, 0);
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
	if (!func_54())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_54()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_55(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_56(0))
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

bool func_56(int iParam0)
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

