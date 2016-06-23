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
	char* sLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	struct<11>[] Local_57 = new struct<11>[50];
	int iLocal_608 = 0;
	char* sLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	char*[] sLocal_614 = new char*[4];
	int iLocal_619 = 0;
	auto uLocal_620 = 0;
	int iLocal_621 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_40 = true;
	iLocal_41 = true;
	iLocal_608 = 4;
	sLocal_609 = "id1_11_tunnel6_int";
	if (has_force_cleanup_occurred(210))
	{
		func_73();
	}
	if (_get_number_of_instances_of_streamed_script(joaat("letterscraps")) > 1)
	{
		terminate_this_thread();
	}
	func_72(12);
	if (func_71(106) == 1)
	{
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true)
	{
		wait(0);
		func_64(player_ped_id());
		switch (iLocal_42)
		{
			case 0:
				func_19();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_43)
	{
		case 0:
			if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!is_ped_injured(player_ped_id()))
			{
				if (is_screen_faded_in())
				{
					if (!func_18())
					{
						if (((!is_mobile_phone_call_ongoing() && !func_12()) && !func_11()) && !func_10())
						{
							iLocal_619 = 0;
							iLocal_613 = 0;
							sLocal_614[0] = "LETTERS_PAGE_ONE";
							sLocal_614[1] = "LETTERS_PAGE_TWO";
							sLocal_614[2] = "LETTERS_PAGE_THREE";
							sLocal_614[3] = "LETTERS_PAGE_FOUR";
							iLocal_612 = unk_0x67D02A194A2FC2BD("LETTER_SCRAPS");
							while (!has_scaleform_movie_loaded(iLocal_612))
							{
								wait(0);
							}
							_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
							func_9(sLocal_614[0]);
							_pop_scaleform_movie_function_void();
							_0xC6372ECD45D73BCD(1);
							func_6(1);
							func_5(1, 1, 1, 0);
							display_help_text_this_frame("LETTERS_HELP2", 0);
							set_game_paused(true);
							display_radar(false);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3();
			disable_frontend_this_frame();
			_0xC6372ECD45D73BCD(1);
			_set_2d_layer(1);
			if (iLocal_613 < 4)
			{
				if (!iLocal_619)
				{
					if (is_control_pressed(2, 190))
					{
						if (iLocal_613 >= 0 && iLocal_613 < 3)
						{
							iLocal_613++;
							_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
							func_9(sLocal_614[iLocal_613]);
							_pop_scaleform_movie_function_void();
						}
						iLocal_619 = 1;
					}
					else if (is_control_pressed(2, 189))
					{
						if (iLocal_613 > 0 && iLocal_613 < 4)
						{
							iLocal_613--;
							_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
							func_9(sLocal_614[iLocal_613]);
							_pop_scaleform_movie_function_void();
						}
						iLocal_619 = 1;
					}
					else if (is_control_just_released(2, 202))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_619 = 0;
				}
				draw_scaleform_movie_fullscreen(iLocal_612, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		
		case 2:
			display_radar(true);
			clear_help(1);
			func_5(0, 1, 1, 0);
			func_70(12);
			func_73();
			break;
	}
}

bool func_2()
{
	if ((is_control_pressed(2, 190) || is_control_pressed(2, 189)) || is_control_pressed(2, 202))
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_4(0))
		{
			func_6(0);
		}
		set_bit(&Global_2284, 2);
	}
}

bool func_4(int iParam0)
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

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_6(int iParam0)
{
	if (Global_14571)
	{
		func_8(0, 0);
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
	if (!func_7())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_7()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_4(0))
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

void func_9(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

auto func_10()
{
	return Global_1318698;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] != 0)
		{
			Global_1318699 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_99808)
	{
		if (func_13(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!are_strings_equal(&(Global_99808[iParam0 /*28*/]), "") && !is_string_null(&(Global_99808[iParam0 /*28*/])))
	{
		if (is_bit_set(Global_99808[iParam0 /*28*/].f_27, true))
		{
			if (is_bit_set(Global_99808[iParam0 /*28*/].f_27, 2))
			{
				return func_17(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4), Global_99808[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_16(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4));
			}
		}
		else if (is_bit_set(Global_99808[iParam0 /*28*/].f_27, 2))
		{
			return func_15(iVar0, &(Global_99808[iParam0 /*28*/]), Global_99808[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_14(iVar0, &(Global_99808[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_14(int iParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam1);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_15(int iParam0, char* sParam1, int iParam2)
{
	_0x0A24DA3A41B718F5(sParam1);
	add_text_component_integer(iParam2);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_16(int iParam0, char* sParam1, char* sParam2)
{
	_0x0A24DA3A41B718F5(sParam1);
	_add_text_component_item_string(sParam2);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_17(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_0x0A24DA3A41B718F5(sParam1);
	_add_text_component_item_string(sParam2);
	add_text_component_integer(iParam3);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

bool func_18()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

void func_19()
{
	switch (iLocal_43)
	{
		case 0:
			func_62();
			func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_43 = 1;
			iLocal_621 = 1;
			break;
		
		case 1:
			if (!func_58(14) && !is_screen_faded_out())
			{
				if (func_21(&Local_44, &Local_57) || uLocal_620)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_71(106) == 0)
					{
						func_66(106, 1);
						func_65(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_66(106, 1);
			func_65(168, 0);
			func_20(1);
			break;
	}
}

void func_20(int iParam0)
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_21(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	
	iVar5 = (!func_18() && !func_18());
	is_ped_injured(player_ped_id());
	vVar2 = {get_entity_coords(player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_57(uParam0.f_1, *uParam0.f_10);
		if (!*(iParam1[*uParam0.f_10 /*11*/]).f_10)
		{
			if (!iVar1)
			{
				if (((((((*uParam0.f_10 == 1 || *uParam0.f_10 == 5) || *uParam0.f_10 == 7) || *uParam0.f_10 == 13) || *uParam0.f_10 == 18) || *uParam0.f_10 == 20) || *uParam0.f_10 == 37) || *uParam0.f_10 == 42)
				{
					func_55(iParam1[*uParam0.f_10 /*11*/], *uParam0.f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (*uParam0.f_10 == iLocal_608)
				{
					func_55(iParam1[*uParam0.f_10 /*11*/], *uParam0.f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (does_pickup_exist(*(iParam1[*uParam0.f_10 /*11*/]).f_1))
					{
						add_pickup_to_interior_room_by_name(*(iParam1[*uParam0.f_10 /*11*/]).f_1, sLocal_609);
					}
				}
				else
				{
					func_55(iParam1[*uParam0.f_10 /*11*/], *uParam0.f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!iVar1)
		{
			if (func_38(uParam0, iParam1, vVar2))
			{
				if (iVar5)
				{
					if (!func_37(33))
					{
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		*uParam0.f_10++;
		if (*uParam0.f_10 >= *iParam1)
		{
			*uParam0.f_10 = 0;
		}
		iVar0++;
	}
	if (*uParam0.f_11)
	{
		if (!Global_69749)
		{
			func_22(uParam0.f_11, uParam0.f_12, uParam0.f_9, 1, &iLocal_610, &iLocal_611, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!*uParam0.f_12 && !*uParam0.f_11)
	{
		return *uParam0.f_1.f_4 >= *uParam0.f_1.f_3;
	}
	return false;
}

void func_22(auto uParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_32(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				if (has_scaleform_movie_loaded(*iParam5))
				{
					iVar0 = get_sound_id();
					if (iParam3 == 6)
					{
						play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				_push_scaleform_movie_function(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				_begin_text_component(sParam6);
				_end_text_component();
				_begin_text_component(sParam7);
				add_text_component_integer(func_24(iParam3));
				_end_text_component();
				_pop_scaleform_movie_function_void();
				*uParam2 = get_game_timer();
				*iParam4++;
				break;
			
			case 2:
				if (get_game_timer() - *uParam2 > 7000)
				{
					_push_scaleform_movie_function(*iParam5, "SHARD_ANIM_OUT");
					_push_scaleform_movie_function_parameter_int(true);
					_push_scaleform_movie_function_parameter_float(0.33f);
					_pop_scaleform_movie_function_void();
					*iParam4++;
				}
				else if (!func_23())
				{
					if (has_scaleform_movie_loaded(*iParam5))
					{
						func_32(1);
						draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if (get_game_timer() - *uParam2 > 7500)
				{
					*iParam4++;
				}
				else if (!func_23())
				{
					if (has_scaleform_movie_loaded(*iParam5))
					{
						func_32(1);
						draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (has_scaleform_movie_loaded(*iParam5))
				{
					set_scaleform_movie_as_no_longer_needed(iParam5);
				}
				func_32(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

bool func_23()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			if (is_bit_set(Global_101154.f_8739.f_108, func_30(func_31(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			iVar2 = func_29(iParam0) + iVar1;
			if (func_25(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_27(iParam0, iParam1);
	uVar2 = func_26(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

auto func_28()
{
	return Global_1312747;
}

int func_29(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return iParam0 - iParam1;
}

int func_31(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_32(int iParam0)
{
	if (Global_69756 != iParam0)
	{
		Global_69756 = iParam0;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		set_bit(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = get_game_timer() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = get_game_timer() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_36();
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

bool func_38(auto uParam0, auto uParam1, Vector3 vParam2)
{
	int iVar0;
	
	iVar0 = *uParam0.f_10;
	if (*(uParam1[iVar0 /*11*/]).f_10)
	{
		if (*(uParam1[iVar0 /*11*/]).f_1 != 0)
		{
			if (has_pickup_been_collected(*(uParam1[iVar0 /*11*/]).f_1) || func_53(*(uParam1[iVar0 /*11*/]).f_1))
			{
				func_40(uParam0, uParam1, iVar0);
				return true;
			}
		}
	}
	if (does_pickup_exist(*(uParam1[iVar0 /*11*/]).f_1))
	{
		if ((vdist2(vParam2, get_pickup_coords(*(uParam1[iVar0 /*11*/]).f_1)) > 60f * 60f || func_58(13)) || func_58(14))
		{
			func_39(uParam1[iVar0 /*11*/].f_1);
			*(uParam1[iVar0 /*11*/]).f_1 = 0;
			*(uParam1[iVar0 /*11*/]).f_10 = 0;
		}
	}
	return false;
}

void func_39(auto uParam0)
{
	if (does_pickup_exist(*uParam0))
	{
		remove_pickup(*uParam0);
	}
}

void func_40(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_29(*uParam0) + iParam2;
	func_39(uParam1[iParam2 /*11*/].f_1);
	func_52(uParam1[iParam2 /*11*/].f_2);
	*(uParam1[iParam2 /*11*/]).f_1 = 0;
	*(uParam1[iParam2 /*11*/]).f_10 = 0;
	func_51(uParam0.f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_50(*uParam0, iParam2, 1);
	}
	set_pad_shake(0, 200, 250);
	stat_increment(*uParam0.f_6, 1f);
	if (iLocal_41)
	{
		func_49(uParam0.f_1, iParam2);
	}
	else
	{
		func_47(uParam0.f_1);
	}
	func_44();
	_0x79AB33F0FBFAC40C(iVar0);
	func_43(1, 0);
	func_41();
	*uParam0.f_11 = 1;
}

bool func_41()
{
	if (func_42(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

int func_42(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_43(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = false;
	stat_get_int(func_46(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_45(18, iVar0);
	}
	stat_get_int(func_46(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_45(19, iVar0);
	}
	stat_get_int(func_46(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_45(20, iVar0);
	}
	iVar2 = func_31(0) + func_31(1) + func_31(3);
	if (iVar2 > 0)
	{
		iVar3 = iVar1 * 100 / iVar2;
	}
	stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_47(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (*uParam0.f_3 <= 0)
	{
	}
	if (*uParam0.f_2 <= 0)
	{
	}
	if (iLocal_40)
	{
	}
	iVar0 = false;
	while (iVar0 < *uParam0.f_3)
	{
		if (func_57(uParam0, iVar0))
		{
			iVar1++;
			func_48(*uParam0.f_2 + iVar0, 1, -1, 1);
			if (iLocal_40)
			{
			}
		}
		iVar0++;
	}
	*uParam0.f_4 = iVar1;
	if (iLocal_40)
	{
	}
	if (iVar1 == *uParam0.f_3 && *uParam0.f_2 == 705)
	{
		func_65(168, 0);
	}
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49(auto uParam0, int iParam1)
{
	if (*uParam0.f_3 <= 0)
	{
	}
	if (*uParam0.f_2 <= 0)
	{
	}
	if (iLocal_40)
	{
	}
	if (iParam1 >= *uParam0.f_3)
	{
	}
	if (func_57(uParam0, iParam1))
	{
		*uParam0.f_4++;
		func_48(*uParam0.f_2 + iParam1, 1, -1, 1);
		if (iLocal_40)
		{
		}
	}
	if (iLocal_40)
	{
	}
	if (*uParam0.f_4 == *uParam0.f_3 && *uParam0.f_2 == 705)
	{
		func_65(168, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (iParam2)
			{
				set_bit(&(Global_101154.f_8739.f_122), iParam1);
			}
			else
			{
				clear_bit(&(Global_101154.f_8739.f_122), iParam1);
			}
			return;
		}
		if (iParam2)
		{
			set_bit(&(Global_101154.f_8739.f_122.f_1), iParam1 - 32);
		}
		else
		{
			clear_bit(&(Global_101154.f_8739.f_122.f_1), iParam1 - 32);
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (iParam2)
			{
				set_bit(&(Global_101154.f_8739.f_125), iParam1);
			}
			else
			{
				clear_bit(&(Global_101154.f_8739.f_125), iParam1);
			}
			return;
		}
		if (iParam2)
		{
			set_bit(&(Global_101154.f_8739.f_125.f_1), iParam1 - 32);
		}
		else
		{
			clear_bit(&(Global_101154.f_8739.f_125.f_1), iParam1 - 32);
		}
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (iParam2)
		{
			set_bit(iParam0, iParam1);
		}
		else
		{
			clear_bit(iParam0, iParam1);
		}
		return;
	}
	if (iParam2)
	{
		set_bit(iParam0.f_1, iParam1 - 32);
	}
	else
	{
		clear_bit(iParam0.f_1, iParam1 - 32);
	}
}

void func_52(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

bool func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!does_pickup_exist(iParam0))
	{
		return false;
	}
	if (func_54(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			iVar1 = get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_pickup_coords(iParam0)) < 5f * 5f || is_entity_touching_entity(player_ped_id(), get_pickup_object(iParam0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_54(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_55(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!*uParam0.f_10)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!func_58(13) && !func_58(14))
			{
				if (!does_pickup_exist(*uParam0.f_1))
				{
					if (vdist2(get_entity_coords(player_ped_id(), 1), *uParam0.f_3) <= 50f * 50f)
					{
						request_model(iParam1);
						while (!has_model_loaded(iParam1))
						{
							request_model(iParam1);
							wait(0);
						}
						if (iParam3)
						{
							func_56(*uParam0.f_3);
						}
						clear_area(*uParam0.f_3, 2.5f, 0, 0, 0, false);
						if (iParam4)
						{
							set_bit(&iVar0, true);
							*uParam0.f_1 = create_pickup_rotate(joaat("pickup_custom_script"), *uParam0.f_3, *uParam0.f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							set_bit(&iVar0, 3);
							set_bit(&iVar0, 4);
							set_bit(&iVar0, 8);
							set_bit(&iVar0, true);
							*uParam0.f_1 = create_pickup(iParam2, *uParam0.f_3, iVar0, -1, 1, iParam1);
						}
						set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (does_pickup_exist(*uParam0.f_1))
			{
				*uParam0.f_10 = 1;
			}
		}
	}
}

void func_56(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = get_interior_at_coords(vParam0);
	if (is_valid_interior(iVar0))
	{
		_0x2CA429C029CCF247(iVar0);
		while (!is_interior_ready(iVar0))
		{
			wait(0);
		}
		wait(0);
		unpin_interior(iVar0);
	}
}

int func_57(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return false;
	}
	if (iParam1 <= 31)
	{
		return is_bit_set(*uParam0, iParam1);
	}
	return is_bit_set(*uParam0.f_1, iParam1 - 32);
}

int func_58(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_59(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0.f_6 = iParam1;
	func_60(uParam0.f_1, iParam2, iParam3);
}

void func_60(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	*iParam0.f_1 = 0;
	*iParam0.f_2 = uParam1;
	*iParam0.f_3 = uParam2;
	if (iLocal_40)
	{
	}
	iVar0 = false;
	while (iVar0 < *iParam0.f_3)
	{
		if (func_25(*iParam0.f_2 + iVar0, -1, -1))
		{
			iVar1++;
			func_51(iParam0, iVar0, 1);
			if (iLocal_40)
			{
			}
		}
		iVar0++;
	}
	*iParam0.f_4 = iVar1;
	if (iLocal_40)
	{
	}
}

void func_61(auto uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	*uParam0.f_7 = iParam2;
	*uParam0.f_8 = sParam3;
	*uParam0.f_10 = 0;
}

void func_62()
{
	int iVar0;
	
	Global_101154.f_8739.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_57[iVar0 /*11*/].f_3 = {func_63(iVar0, 0)};
		Local_57[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_610 = 0;
	Local_57[0 /*11*/].f_9 = 179.4746f;
	Local_57[1 /*11*/].f_6 = {0f, 0f, 198f};
	Local_57[2 /*11*/].f_9 = 104f;
	Local_57[3 /*11*/].f_9 = 321.5f;
	Local_57[4 /*11*/].f_6 = {0f, 0f, 49f};
	Local_57[5 /*11*/].f_6 = {0f, 0f, 286.5f};
	Local_57[6 /*11*/].f_9 = 278.0092f;
	Local_57[7 /*11*/].f_6 = {5.3f, -1801.4f, 15.57f};
	Local_57[8 /*11*/].f_9 = 80.5f;
	Local_57[9 /*11*/].f_9 = 116f;
	Local_57[10 /*11*/].f_9 = 15f;
	Local_57[11 /*11*/].f_9 = 305.5f;
	Local_57[12 /*11*/].f_9 = 0f;
	Local_57[13 /*11*/].f_9 = 95f;
	Local_57[13 /*11*/].f_6 = {-0.91f, -0.03f, -0.81f};
	Local_57[14 /*11*/].f_9 = 40f;
	Local_57[15 /*11*/].f_9 = 40f;
	Local_57[16 /*11*/].f_9 = 40f;
	Local_57[17 /*11*/].f_9 = 90f;
	Local_57[17 /*11*/].f_6 = {-0.55f, 0f, 0.78f};
	Local_57[18 /*11*/].f_6 = {0f, 0f, 0f};
	Local_57[19 /*11*/].f_9 = 40f;
	Local_57[20 /*11*/].f_6 = {0f, 2f, 15f};
	Local_57[21 /*11*/].f_9 = 40f;
	Local_57[22 /*11*/].f_9 = 40f;
	Local_57[23 /*11*/].f_9 = 40f;
	Local_57[24 /*11*/].f_9 = 40f;
	Local_57[25 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_6 = {-6f, 10f, 0f};
	Local_57[27 /*11*/].f_9 = 40f;
	Local_57[27 /*11*/].f_6 = {-4.66f, 8.7f, 67.03f};
	Local_57[28 /*11*/].f_9 = 40f;
	Local_57[28 /*11*/].f_6 = {1.54f, -8.31f, -19.94f};
	Local_57[29 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_6 = {27.21f, -3.11f, -2.09f};
	Local_57[31 /*11*/].f_9 = 40f;
	Local_57[32 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_6 = {-9.89f, 0.3f, -0.01f};
	Local_57[34 /*11*/].f_9 = 40f;
	Local_57[35 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_6 = {6.5f, -4.41f, -0.62f};
	Local_57[37 /*11*/].f_6 = {-9f, 5.3f, -2f};
	Local_57[38 /*11*/].f_9 = 40f;
	Local_57[38 /*11*/].f_6 = {-13.32f, -0.57f, -0.15f};
	Local_57[39 /*11*/].f_9 = 40f;
	Local_57[39 /*11*/].f_6 = {4.71f, -21.26f, -0.06f};
	Local_57[40 /*11*/].f_9 = 40f;
	Local_57[41 /*11*/].f_9 = 80f;
	Local_57[42 /*11*/].f_6 = {-2f, 9f, 1f};
	Local_57[43 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_6 = {0f, -20f, 0f};
	Local_57[45 /*11*/].f_9 = 198f;
	Local_57[46 /*11*/].f_9 = 198f;
	Local_57[47 /*11*/].f_9 = 198f;
	Local_57[48 /*11*/].f_9 = 198f;
	Local_57[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_64(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

void func_65(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = get_game_timer() + iParam1;
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_68();
	}
}

void func_68()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_45(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_69() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_41();
				}
			}
		}
	}
}

auto func_69()
{
	return Global_25120;
}

bool func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		clear_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

int func_71(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

bool func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return false;
	}
	set_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

void func_73()
{
	int iVar0;
	
	_0xC6372ECD45D73BCD(0);
	set_scaleform_movie_as_no_longer_needed(&iLocal_612);
	set_game_paused(false);
	Global_101154.f_8739.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_57)
	{
		func_52(&(Local_57[iVar0 /*11*/].f_2));
		func_39(&(Local_57[iVar0 /*11*/].f_1));
		Local_57[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1)
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&(Local_44.f_1)))
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else
	{
		func_72(12);
	}
	if (iLocal_621)
	{
		set_model_as_no_longer_needed(Local_44.f_7);
	}
	terminate_this_thread();
}

int func_74(auto uParam0)
{
	if (*uParam0.f_3 <= 0)
	{
	}
	return *uParam0.f_4 >= *uParam0.f_3;
}

void func_75()
{
	auto uVar0;
	
	uVar0 = func_76(64);
	Global_2411218[uVar0 /*83*/] = 64;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

