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
	int[] iLocal_19 = new int[35];
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	auto uLocal_67 = 0;
	struct<16> Local_68 = 0;
	struct<6>[] Local_84 = new struct<6>[25];
	struct<16>[] Local_235 = new struct<16>[25];
	int iLocal_636 = 0;
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
		func_42();
	}
	func_41();
	Global_16778 = 0;
	Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
	Global_14570 = 0;
	func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 7;
	}
	iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
	Global_14417 = 1;
	while (true)
	{
		wait(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_66 - iLocal_65 > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						if (Global_2467970 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					func_42();
				}
			}
			else if (func_3(2, Global_14381, 0) || GAMEPLAY::IS_BIT_SET(Global_2284, 12))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/]), "CELL_FINV"))
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
						func_42();
					}
					func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_101154.f_12831[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_101154.f_12831[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_101154.f_12831[iLocal_58 /*104*/].f_29 = 4;
							Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_101154.f_12831[iLocal_58 /*104*/].f_29 = 4;
							Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		if (func_1())
		{
			func_42();
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
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
	func_6();
}

void func_6()
{
	if (Global_101154.f_12831[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_14391 == 0)
		{
			if (is_control_just_pressed(2, Global_14384))
			{
				func_2();
				Global_14391 = 1;
				func_22();
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_101154.f_12831[iLocal_58 /*104*/].f_99[0] = 0;
					Global_101154.f_12831[iLocal_58 /*104*/].f_99[1] = 0;
					Global_101154.f_12831[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_101154.f_12831[iLocal_58 /*104*/].f_99[Global_14413] = 0;
				}
				if (func_21(iLocal_58))
				{
				}
				else
				{
					Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 0;
					Global_101154.f_12831[iLocal_58 /*104*/].f_28 = 0;
				}
				_remove_notification(Global_101154.f_12831[iLocal_58 /*104*/].f_16);
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_56 > 0)
				{
					iLocal_56--;
				}
				func_37();
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
		if (CONTROLS::IS_CONTROL_PRESSED(2, Global_14385))
		{
			if (iLocal_60 == 1)
			{
				if (Global_14413.f_1 > 3)
				{
					StringCopy(&Global_68042, _get_label_text(&Global_16753), 64);
					Global_68069 = 7;
					GAMEPLAY::SET_BIT(&Global_2284, 10);
					Global_14413.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_101154.f_12831[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_14391 == 0)
		{
			if (func_3(2, Global_14385, 0))
			{
				func_18();
				Global_14391 = 1;
				Global_101154.f_12831[iLocal_58 /*104*/].f_29 = 2;
				Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 1;
				Global_101154.f_12831[iLocal_58 /*104*/].f_31 = 0;
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14391 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_14382, 0))
		{
			Global_14391 = 1;
			if (Global_101154.f_12831[iLocal_58 /*104*/].f_29 > 0)
			{
				func_18();
				Global_101154.f_12831[iLocal_58 /*104*/].f_29 = 3;
				Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 1;
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_101154.f_12831[iLocal_58 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1598 = 144;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14411 = SYSTEM::START_NEW_SCRIPT("appContacts", 3800);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1598 = Global_101154.f_12831[iLocal_58 /*104*/].f_17;
				if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_7();
				func_42();
			}
		}
	}
}

void func_7()
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
			func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2888);
			if (Global_2888 == 1)
			{
				func_40(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_40(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_10();
				func_40(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_40(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_10()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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

void func_11(int iParam0)
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
		if (func_12(14))
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
								func_9(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_9(&(Global_2290[iVar1 /*15*/]));
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
								func_9(&(Global_2290[iVar1 /*15*/]));
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
								func_9(&(Global_2290[iVar1 /*15*/]));
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
								func_9(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_9(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

int func_12(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_13(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_9(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_9(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_9(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_9(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_14(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16() && is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
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
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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

bool func_16()
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

bool func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
		if (func_12(14))
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
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
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

void func_18()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		_move_finger(5);
	}
}

bool func_20()
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

bool func_21(int iParam0)
{
	if ((Global_101154.f_12831[iParam0 /*104*/].f_99[0] == 1 || Global_101154.f_12831[iParam0 /*104*/].f_99[1] == 1) || Global_101154.f_12831[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_22()
{
	if (func_12(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_23();
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

auto func_23()
{
	func_24();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_24()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_12(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_25(Global_101154.f_1826.f_539.f_3549))
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

int func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()
{
	char[64] cVar0;
	char* sVar16;
	int iVar17;
	
	if (Global_14391 == 0)
	{
		if ((func_3(2, Global_14382, 0) || Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1) || Global_16772 == 1)
		{
			if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 0 && Global_16772 == 0)
			{
				func_18();
			}
			Global_14391 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_101154.f_12831[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_14413.f_1 > 3)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
					Global_14413.f_1 = 8;
				}
				if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1 || Global_16772 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
					{
					}
					Global_16772 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_62 = 0;
					_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_67 = _pop_scaleform_movie_function();
					while (!_0x768FF8961BA904D6(uLocal_67) && iLocal_62 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = _0x2DE7EFA66B906036(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_101154.f_12831[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_16753, "NO_HYPERLINK", 64);
				cVar0 = {Global_101154.f_12831[iLocal_58 /*104*/]};
				StringConCat(&cVar0, "_LINK", 64);
				if (does_text_label_exist(&cVar0))
				{
					Global_16753 = {cVar0};
					iLocal_60 = 1;
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GAMEPLAY::SET_BIT(&Global_2283, 17);
					Global_101154.f_12831[iLocal_58 /*104*/].f_26 = 1;
					Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_101154.f_12831[iLocal_58 /*104*/].f_24 = 1;
				}
				func_31();
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(7);
				_push_scaleform_movie_function_parameter_int(false);
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_17 == 145)
				{
					_begin_text_component("CELL_2000");
					add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_50));
					_end_text_component();
				}
				else
				{
					func_9(&(Global_101154.f_32575[Global_101154.f_12831[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101154.f_12831[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101154.f_12831[iLocal_58 /*104*/]));
						break;
					
					case 1:
						_begin_text_component(&(Global_101154.f_12831[iLocal_58 /*104*/]));
						add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_33));
						if (Global_101154.f_12831[iLocal_58 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101154.f_12831[iLocal_58 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 2:
						_begin_text_component(&(Global_101154.f_12831[iLocal_58 /*104*/]));
						add_text_component_integer(Global_101154.f_12831[iLocal_58 /*104*/].f_49);
						_end_text_component();
						break;
					
					case 3:
						_begin_text_component(&(Global_101154.f_12831[iLocal_58 /*104*/]));
						add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_33));
						add_text_component_integer(Global_101154.f_12831[iLocal_58 /*104*/].f_49);
						if (Global_101154.f_12831[iLocal_58 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101154.f_12831[iLocal_58 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iLocal_58 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 4:
						func_30(iLocal_58);
						break;
					
					case 5:
						func_30(iLocal_58);
						break;
					
					case 6:
						func_30(iLocal_58);
						break;
					
					case 7:
						func_30(iLocal_58);
						break;
					
					case 8:
						func_30(iLocal_58);
						break;
					
					case 9:
						func_30(iLocal_58);
						break;
					
					case 10:
						func_30(iLocal_58);
						break;
					
					case 11:
						func_30(iLocal_58);
						break;
				}
				if (Global_16781[iLocal_58] == 0)
				{
					func_9(&(Global_101154.f_32575[Global_101154.f_12831[iLocal_58 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (is_pedheadshot_valid(Global_16781[iLocal_58]))
					{
						if (is_pedheadshot_ready(Global_16781[iLocal_58]))
						{
							sVar16 = get_pedheadshot_txd_string(Global_16781[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					_begin_text_component("CELL_2000");
					add_text_component_substring_player_name(sVar16);
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
				Global_16778 = 1;
				func_40(Global_14394, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14394, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				_remove_notification(Global_101154.f_12831[iLocal_58 /*104*/].f_16);
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_101154.f_12831[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_29 > 0)
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_14401)
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_101154.f_12831[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_101154.f_12831[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_14401)
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GAMEPLAY::SET_BIT(&Global_2283, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
				Global_101154.f_12741[Global_14413 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1 || Global_16772 == 1)
				{
					if (Global_16772)
					{
					}
					iVar17 = 1;
				}
				Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
				Global_101154.f_12741[Global_14413 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14413.f_1 = 3;
				}
			}
		}
		if (Global_2467970 == 0)
		{
			if (Global_69489)
			{
				set_input_exclusive(0, Global_14385);
				if (func_3(2, Global_14385, 0))
				{
					Global_14391 = 1;
					Global_2467970 = 1;
				}
			}
		}
	}
}

void func_29(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_9(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_9(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_9(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_9(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_9(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_101154.f_12831[iParam0 /*104*/].f_49)
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
	_add_text_component_item_string(&(Global_101154.f_12831[iParam0 /*104*/]));
	while (iVar0 < Global_101154.f_12831[iParam0 /*104*/].f_49)
	{
		switch (Global_101154.f_12831[iParam0 /*104*/].f_32)
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

void func_31()
{
	int iVar0;
	
	if (iLocal_636)
	{
		set_streamed_texture_dict_as_no_longer_needed(&Local_68);
	}
	iLocal_636 = 0;
	if (Global_101154.f_12831[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				Local_68 = {Local_235[iVar0 /*16*/]};
				iLocal_636 = 1;
				request_streamed_texture_dict(&Local_68, false);
				while (!has_streamed_texture_dict_loaded(&Local_68))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()
{
	if (iLocal_61)
	{
		if (timera() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_14389, 0) || is_control_just_pressed(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56--;
			}
			func_35();
			iLocal_61 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14390, 0) || is_control_just_pressed(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_33();
			iLocal_61 = 1;
			settimera(0);
		}
	}
}

void func_33()
{
	func_40(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_34();
}

void func_34()
{
	if (func_20())
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

void func_35()
{
	func_40(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_36();
}

void func_36()
{
	if (func_20())
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

void func_37()
{
	if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_40(Global_14394, "DISPLAY_VIEW", 6f, to_float(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_29(Global_14394, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14401)
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69489)
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
	}
	else
	{
		iLocal_57 = false;
	}
}

void func_38()
{
	int[] iVar0 = new int[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_55 = 0;
	func_22();
	iVar36 = false;
	while (iVar36 < 34)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_101154.f_12831[iVar38 /*104*/].f_18 = -1;
		Global_101154.f_12831[iVar38 /*104*/].f_18.f_1 = 0;
		Global_101154.f_12831[iVar38 /*104*/].f_18.f_2 = 0;
		Global_101154.f_12831[iVar38 /*104*/].f_18.f_3 = 0;
		Global_101154.f_12831[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_101154.f_12831[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_101154.f_12831[iVar37 /*104*/].f_99[Global_14413] == 1)
					{
						if (func_39(Global_101154.f_12831[iVar37 /*104*/].f_18, Global_101154.f_12831[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_101154.f_12831[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_101154.f_12831[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_101154.f_12831[iVar38 /*104*/].f_99[Global_14413] == 1)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(6);
				_push_scaleform_movie_function_parameter_int(iVar36);
				_push_scaleform_movie_function_parameter_int(Global_101154.f_12831[iVar38 /*104*/].f_18.f_2);
				_push_scaleform_movie_function_parameter_int(Global_101154.f_12831[iVar38 /*104*/].f_18.f_1);
				_push_scaleform_movie_function_parameter_int(iLocal_59);
				if (Global_101154.f_12831[iVar38 /*104*/].f_17 == 145)
				{
					_begin_text_component("CELL_CONDFNH");
					add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_50));
					_end_text_component();
				}
				else
				{
					func_9(&(Global_101154.f_32575[Global_101154.f_12831[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101154.f_12831[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101154.f_12831[iVar38 /*104*/]));
						break;
					
					case 1:
						_begin_text_component(&(Global_101154.f_12831[iVar38 /*104*/]));
						add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_33));
						if (Global_101154.f_12831[iVar38 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
						}
						if ((Global_101154.f_12831[iVar38 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_101154.f_12831[iVar38 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_101154.f_12831[iVar38 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iVar38 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 2:
						_begin_text_component(&(Global_101154.f_12831[iVar38 /*104*/]));
						add_text_component_integer(Global_101154.f_12831[iVar38 /*104*/].f_49);
						_end_text_component();
						break;
					
					case 3:
						_begin_text_component(&(Global_101154.f_12831[iVar38 /*104*/]));
						add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_33));
						add_text_component_integer(Global_101154.f_12831[iVar38 /*104*/].f_49);
						if (Global_101154.f_12831[iVar38 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
						}
						if ((Global_101154.f_12831[iVar38 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_12831[iVar38 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_101154.f_12831[iVar38 /*104*/].f_67)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_101154.f_12831[iVar38 /*104*/].f_83)))
							{
								_add_text_component_item_string(&(Global_101154.f_12831[iVar38 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_101154.f_12831[iVar38 /*104*/].f_83));
							}
						}
						_end_text_component();
						break;
					
					case 4:
						func_30(iVar38);
						break;
					
					case 5:
						func_30(iVar38);
						break;
					
					case 6:
						func_30(iVar38);
						break;
					
					case 7:
						func_30(iVar38);
						break;
					
					case 8:
						func_30(iVar38);
						break;
					
					case 9:
						func_30(iVar38);
						break;
					
					case 10:
						func_30(iVar38);
						break;
					
					case 11:
						func_30(iVar38);
						break;
				}
				_pop_scaleform_movie_function_void();
			}
		}
		if (Global_101154.f_12831[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_101154.f_12831[iVar36 /*104*/].f_99[Global_14413] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

bool func_39(struct<6> Param0, struct<6> Param1)
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

void func_41()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_235[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_235[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_235[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_235[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_235[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_235[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_235[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_235[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_235[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_235[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_235[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_235[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_235[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_235[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_235[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_235[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_235[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_235[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_235[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_235[19 /*16*/]), "mt_phone_image_1", 64);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_235[20 /*16*/]), "mt_phone_image_2", 64);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_235[21 /*16*/]), "mt_phone_image_3", 64);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_235[22 /*16*/]), "mt_phone_image_4", 64);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_235[23 /*16*/]), "mt_phone_image_5", 64);
}

void func_42()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_636)
	{
		set_streamed_texture_dict_as_no_longer_needed(&Local_68);
	}
	terminate_this_thread();
}

void func_43(int iParam0)
{
	if (Global_14571)
	{
		func_45(0, 0);
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
	if (!func_44())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_44()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_46(0))
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

bool func_46(int iParam0)
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

