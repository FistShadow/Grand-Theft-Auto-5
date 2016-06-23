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
	char* sLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	int iLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
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
	Vector3 vLocal_47 = 0;
	Vector3 vLocal_50 = 0;
	auto uLocal_53 = 0;
	int iLocal_54 = 0;
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
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	char* sLocal_69 = 0;
	Vector3 fLocal_70 = 0;
	int iLocal_71 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = -1;
	iLocal_61 = -1;
	fLocal_70 = 0f;
	iLocal_71 = 1;
	if (Global_69489)
	{
		terminate_this_thread();
	}
	network_set_script_is_safe_for_network_game();
	iLocal_55 = func_73();
	request_additional_text("email", true);
	while (!has_additional_text_loaded(true))
	{
		wait(0);
	}
	Global_16745 = 0;
	Global_16746 = 0;
	Global_14413.f_1 = 8;
	Global_16746 = 1;
	Global_36842 = 1;
	if (Global_14395)
	{
		func_72(0);
		func_71(1);
		func_70(0);
	}
	settimerb(0);
	vLocal_47 = {Global_14366[Global_14358 /*3*/]};
	vLocal_50 = {vLocal_47};
	vLocal_50.x -= 10f;
	vLocal_50.y += 20f;
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 != 9)
		{
			if (Global_16746 && !Global_16745)
			{
				func_68();
			}
			else if (Global_16745)
			{
				func_63();
			}
			if (!iLocal_56)
			{
				iLocal_56 = 1;
			}
			else if (Global_14395)
			{
				if (!iLocal_57)
				{
					iLocal_57 = 1;
					func_61(Global_14394, iLocal_55);
					func_60(Global_14394, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_59(Global_14394, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_36843)
					{
						Global_36843 = 0;
						iLocal_58 = 1;
					}
					if (iLocal_58)
					{
						settimera(0);
						settimerb(0);
						if (iLocal_60 == -1)
						{
							if (iLocal_71)
							{
								iLocal_71 = 0;
								fLocal_70 = 0f;
							}
							func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_61(Global_14394, iLocal_55);
							func_60(Global_14394, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_59 = 0;
							if (iVar0 > 0)
							{
								func_72(1);
							}
							else
							{
								func_72(0);
							}
							func_71(1);
							func_70(0);
							func_59(Global_14394, "DISPLAY_VIEW", 8f, fLocal_70, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_59(Global_14394, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_71(1);
							func_58();
							if (iLocal_61 == -1)
							{
								func_56(iLocal_55, iLocal_60);
								func_51(Global_14394, iLocal_55, iLocal_60);
								Global_16772 = 0;
								iLocal_68 = func_49(iLocal_55, iLocal_60);
								if (iLocal_68)
								{
									sLocal_69 = func_46(iLocal_55, iLocal_60);
									if (!func_45(37))
									{
										switch (func_43("AM_H_FLINK"))
										{
											case 2:
												func_40("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_39(37);
												break;
										}
									}
									else if (is_pc_version())
									{
										if (!is_bit_set(Global_2563397, 17))
										{
											set_bit(&Global_2563397, 17);
											func_38("AM_H_FLINK", -1);
										}
									}
									func_70(1);
								}
								else
								{
									if (!func_45(38))
									{
										switch (func_43("AM_H_SCROLL"))
										{
											case 2:
												func_40("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_39(38);
												break;
											}
									}
									func_70(0);
								}
								func_59(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_59(Global_14394, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_35(Global_14394, iLocal_55, iLocal_60);
								func_59(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_58 = 0;
					}
					else
					{
						func_13();
					}
				}
			}
			if (!iLocal_55 == func_73())
			{
				Global_36842 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_16745 = 0;
			Global_16746 = 0;
			Global_36842 = 0;
			func_1(0);
			terminate_this_thread();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			_set_phone_lean(1);
		}
		else if (Global_14413.f_1 > 3)
		{
			_set_phone_lean(0);
		}
	}
}

bool func_2()
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

bool func_3()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	if (Global_46151 != -1)
	{
		set_streamed_texture_dict_as_no_longer_needed(func_12(Global_46151));
		Global_46151 = -1;
	}
	Global_36842 = 0;
	if (Global_14413.f_1 > 4)
	{
		Global_14413.f_1 = 6;
		func_5();
	}
	terminate_this_thread();
}

void func_5()
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
			func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_10(Global_2888);
			if (Global_2888 == 1)
			{
				func_59(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_59(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_9(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_9(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_9(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_9(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_59(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_9(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_8();
				func_59(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_7("CELL_300");
					func_7("CELL_217");
					func_7("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_9(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_9(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_59(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_59(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_8();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_7("CELL_300");
					func_7("CELL_219");
					func_7("CELL_219");
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
						func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_59(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_59(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (is_bit_set(Global_2283, 20))
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_9(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
		}
		else
		{
			func_9(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_8()
{
	if (!is_entity_dead(player_ped_id(), 0))
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

void func_9(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_7(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_7(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_7(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_7(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_7(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_10(int iParam0)
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
		if (func_11(14))
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
								if (is_bit_set(Global_2284, 3))
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
								func_7(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_7(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
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
								func_7(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
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
								func_7(&(Global_2290[iVar1 /*15*/]));
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
								func_7(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_7(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_9(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

int func_11(int iParam0)
{
	return Global_35711 == iParam0;
}

char* func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_13()
{
	int iVar0;
	
	if (Global_16772)
	{
		iLocal_60 = 0;
		fLocal_70 = to_float(iLocal_60);
		if (func_34(iLocal_55) == 0)
		{
			iLocal_60 = -1;
		}
		if (!iLocal_60 == -1)
		{
			Global_14413.f_1 = 8;
			iLocal_58 = 1;
			settimerb(0);
			func_32();
		}
		return;
	}
	if (Global_68058)
	{
		return;
	}
	if (Global_16745)
	{
		return;
	}
	if (!iLocal_64)
	{
		if (is_control_just_pressed(2, 172) || is_control_just_pressed(2, 181))
		{
			iLocal_64 = 1;
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(true);
			_pop_scaleform_movie_function_void();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			settimera(0);
			iLocal_71 = 1;
		}
	}
	else if (is_control_pressed(2, 172) || is_control_pressed(2, 181))
	{
		if (timera() > 100 && iLocal_60 != -1)
		{
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(true);
			_pop_scaleform_movie_function_void();
			settimera(0);
			iLocal_71 = 1;
		}
	}
	else
	{
		iLocal_64 = 0;
	}
	if (!iLocal_65)
	{
		if (is_control_just_pressed(2, 173) || is_control_just_pressed(2, 180))
		{
			iLocal_65 = 1;
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(3);
			_pop_scaleform_movie_function_void();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			settimerb(0);
			iLocal_71 = 1;
		}
	}
	else if (is_control_pressed(2, 173) || is_control_pressed(2, 180))
	{
		if (timerb() > 100 && iLocal_60 != -1)
		{
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(3);
			_pop_scaleform_movie_function_void();
			settimerb(0);
			iLocal_71 = 1;
		}
	}
	else
	{
		iLocal_65 = 0;
	}
	if (!iLocal_66)
	{
		if (is_control_pressed(2, 174))
		{
			iLocal_66 = 1;
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(4);
			_pop_scaleform_movie_function_void();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
		}
	}
	else if (!is_control_pressed(2, 174))
	{
		iLocal_66 = 0;
	}
	if (!iLocal_67)
	{
		if (is_control_pressed(2, 175))
		{
			iLocal_67 = 1;
			_push_scaleform_movie_function(Global_14394, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(2);
			_pop_scaleform_movie_function_void();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
		}
	}
	else if (!is_control_pressed(2, 175))
	{
		iLocal_67 = 0;
	}
	if (!iLocal_63)
	{
		if (is_control_pressed(2, 176) && timerb() > 100)
		{
			if (iLocal_60 == -1)
			{
				_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
				uLocal_53 = _pop_scaleform_movie_function();
				while (!_0x768FF8961BA904D6(uLocal_53))
				{
					wait(0);
				}
				iLocal_54 = _0x2DE7EFA66B906036(uLocal_53);
				iLocal_60 = iLocal_54;
				if (func_34(iLocal_55) == 0)
				{
					iLocal_60 = -1;
				}
				if (!iLocal_60 == -1)
				{
					if (iLocal_71 == 1)
					{
						fLocal_70 = to_float(iLocal_60);
						iLocal_71 = 0;
					}
					Global_14413.f_1 = 8;
					iLocal_58 = 1;
					settimerb(0);
					func_32();
				}
			}
			else if (iLocal_61 == -1)
			{
				if (func_30(iLocal_55, iLocal_60) && !iLocal_59)
				{
					iLocal_61 = 0;
					iLocal_58 = 1;
					settimerb(0);
					func_32();
				}
			}
			else
			{
				iLocal_61 = 0;
				func_18(iLocal_55, iLocal_60, iLocal_61);
				iLocal_59 = 1;
				iLocal_61 = -1;
				iLocal_58 = 1;
				func_32();
				settimerb(0);
			}
			iLocal_63 = 1;
		}
	}
	else
	{
		iLocal_63 = 0;
	}
	if (timerb() > 100)
	{
		if (is_control_pressed(2, 177))
		{
			iVar0 = false;
			if (iLocal_62 == 0)
			{
				if (!iLocal_60 == -1)
				{
					if (iLocal_61 == -1)
					{
						iLocal_60 = round(fLocal_70);
						iLocal_68 = 0;
						settimerb(0);
						iVar0 = true;
						func_17();
					}
					else
					{
						settimerb(0);
						iLocal_61 = -1;
						func_17();
					}
					iLocal_58 = 1;
				}
				else
				{
					if (func_43("AM_H_FLINK") == 0)
					{
						func_39(37);
					}
					if (func_43("AM_H_SCROLL") == 0)
					{
						func_39(38);
					}
					if (Global_16746 == 0 && !Global_16745)
					{
						func_17();
						Global_16745 = 1;
						Global_36842 = 0;
					}
				}
				iLocal_62 = 1;
			}
			if (iVar0)
			{
				iLocal_60 = -1;
			}
		}
		else
		{
			iLocal_62 = 0;
		}
	}
	if (is_control_pressed(2, 179))
	{
		if (iLocal_68)
		{
			if (func_43("AM_H_FLINK") == 0)
			{
				func_39(37);
			}
			if (func_43("AM_H_SCROLL") == 0)
			{
				func_39(38);
			}
			StringCopy(&Global_68042, sLocal_69, 64);
			func_14(7, 0);
			iLocal_68 = 0;
			func_32();
		}
	}
}

void func_14(int iParam0, int iParam1)
{
	Global_68069 = iParam0;
	switch (Global_68069)
	{
		case 3:
			Global_68067 = 0;
			break;
		
		case 4:
			Global_68067 = 3;
			break;
	}
	if (!iParam1)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
		{
			return;
		}
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("appsecuroserv")) > 0)
	{
		return;
	}
	if (Global_69489 && func_16())
	{
		return;
	}
	if (!Global_69489 && func_15())
	{
		return;
	}
	if (!iParam1)
	{
		if (!has_script_loaded("appInternet"))
		{
			request_script("appInternet");
		}
		while (!has_script_loaded("appInternet"))
		{
			wait(0);
		}
		start_new_script("appInternet", 4092);
		set_script_as_no_longer_needed("appInternet");
	}
	else
	{
		if (!has_script_loaded("appSecuroServ"))
		{
			request_script("appSecuroServ");
		}
		while (!has_script_loaded("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4092);
		set_script_as_no_longer_needed("appSecuroServ");
	}
}

auto func_15()
{
	return Global_68059;
}

auto func_16()
{
	return Global_1715861;
}

void func_17()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	iVar3 = Global_45790[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_45790[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	uVar5 = Global_40177[iVar3 /*46*/].f_32[iVar4];
	if (Global_36852[uVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_45790[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_45790[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_19(iVar3, iParam2);
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_40177[iParam0 /*46*/] && !Global_40177[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = Global_40177[iParam0 /*46*/].f_42 - 1;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_40177[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_36852[uVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_36852[uVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	iVar3 = false;
	if (Global_40177[iParam0 /*46*/].f_31 < Global_40177[iParam0 /*46*/].f_30 - 1)
	{
		iVar4 = Global_40177[iParam0 /*46*/].f_8[Global_40177[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			iVar3 = true;
		}
	}
	if (!iVar3)
	{
		if (iVar2 > -1)
		{
			func_29(iParam0, iVar2);
			iVar5 = Global_40177[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_36852[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_23(Global_40177[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_36852[uVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_20(Global_36852[uVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_36852[uVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_40177[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_40177[iParam0 /*46*/].f_45 = Global_36852[iVar2 /*12*/].f_10;
		Global_40177[iParam0 /*46*/].f_43 = Global_36852[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_40177[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_40177[iParam0 /*46*/].f_43 < 30000)
	{
		Global_40177[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_20(int iParam0, int iParam1)
{
	Global_36843 = 1;
	if (!Global_40177[iParam0 /*46*/] && !Global_40177[iParam0 /*46*/].f_1)
	{
		Global_40177[iParam0 /*46*/] = 1;
		func_22(iParam0, iParam1);
	}
	else
	{
		func_21(iParam0);
		func_20(iParam0, iParam1);
	}
}

void func_21(int iParam0)
{
	Global_40177[iParam0 /*46*/] = 0;
	Global_40177[iParam0 /*46*/].f_31 = 0;
	Global_40177[iParam0 /*46*/].f_42 = 0;
	Global_40177[iParam0 /*46*/].f_45 = 0;
	Global_40177[iParam0 /*46*/].f_43 = 0;
	Global_40177[iParam0 /*46*/].f_1 = 0;
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40177[iParam0 /*46*/] && !Global_40177[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_40177[iParam0 /*46*/].f_31 == Global_40177[iParam0 /*46*/].f_30)
	{
		iVar0 = Global_40177[iParam0 /*46*/].f_42 - 1;
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_36852[Global_40177[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_40177[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40177[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_40177[iParam0 /*46*/].f_8[Global_40177[iParam0 /*46*/].f_31];
	Global_40177[iParam0 /*46*/].f_31++;
	func_29(iParam0, iVar1);
	Global_40177[iParam0 /*46*/].f_45 = Global_36852[iVar1 /*12*/].f_10;
	Global_40177[iParam0 /*46*/].f_43 = Global_36852[iVar1 /*12*/].f_11;
	iVar2 = Global_40177[iParam0 /*46*/].f_2;
	func_23(Global_36852[iVar1 /*12*/].f_3, iParam0, 0, 0, iParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_40177[iParam0 /*46*/].f_3[iVar3] != Global_36852[iVar1 /*12*/].f_2 && Global_40177[iParam0 /*46*/].f_3[iVar3] != Global_36852[iVar1 /*12*/].f_3)
		{
			func_23(Global_40177[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, iParam1);
		}
		iVar3++;
	}
	if (Global_40177[iParam0 /*46*/].f_31 == Global_40177[iParam0 /*46*/].f_30)
	{
		if (Global_36852[Global_40177[iParam0 /*46*/].f_32[Global_40177[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_40177[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	auto uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	auto uVar25;
	auto uVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2)
	{
		iVar19 = Global_40177[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0)
		{
			return;
		}
		uVar20 = Global_40177[iParam1 /*46*/].f_32[iVar19];
		iVar2 = uVar20;
		Var3 = {func_28(Global_36852[uVar20 /*12*/].f_1)};
		if (Global_36852[uVar20 /*12*/].f_2 == iParam0 && !Global_36852[uVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36852[uVar20 /*12*/].f_2;
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar21 = true;
		}
		if (iVar21)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar22 = true;
		}
		if (iVar22)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46152[iVar24 /*203*/].f_1 == iParam1 && Global_46152[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = Global_46152[iVar23 /*203*/].f_1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = Global_46152[iVar23 /*203*/].f_9 - 1;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
		uVar25 = Global_45790[iParam0 /*120*/].f_1[iVar0];
		uVar26 = Global_46152[iVar23 /*203*/].f_10[uVar25 /*48*/];
		iVar2 = uVar26;
		iVar1 = Global_36852[uVar26 /*12*/].f_2;
		if (Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = {func_28(Global_36852[uVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !iParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_24(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_24(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_24(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_24(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_24(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	if (is_cutscene_playing())
	{
		return;
	}
	iVar0 = func_73();
	iVar1 = false;
	StringCopy(&cVar2, func_27(iParam1, &iVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				_set_notification_text_entry("PROPR_INCEMAIL1");
				break;
			
			case 73:
				_set_notification_text_entry("PROPR_INCEMAIL3");
				break;
			
			case 74:
				_set_notification_text_entry("PROPR_INCEMAIL2");
				break;
			
			default:
				_set_notification_text_entry(sParam3);
				if (!is_string_null_or_empty(sParam4))
				{
					_add_text_component_item_string(sParam4);
				}
				if (!is_string_null_or_empty(sParam5))
				{
					_add_text_component_item_string(sParam5);
				}
				if (!is_string_null_or_empty(sParam6))
				{
					_add_text_component_item_string(sParam6);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					_add_text_component_item_string(sParam7);
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_add_text_component_item_string(sParam8);
				}
				if (!is_string_null_or_empty(sParam9))
				{
					_add_text_component_item_string(sParam9);
				}
				if (!is_string_null_or_empty(sParam10))
				{
					_add_text_component_item_string(sParam10);
				}
				if (!is_string_null_or_empty(sParam11))
				{
					_add_text_component_item_string(sParam11);
				}
				if (!is_string_null_or_empty(sParam12))
				{
					_add_text_component_item_string(sParam12);
				}
				if (!is_string_null_or_empty(sParam13))
				{
					_add_text_component_item_string(sParam13);
				}
				break;
		}
		if (iVar1)
		{
			func_25(_set_notification_message(&cVar2, &cVar2, 0, 2, _get_label_text(func_26(iParam1)), 0));
		}
		else
		{
			func_25(_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, _get_label_text(func_26(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36844++;
				if (Global_36844 > 16)
				{
					Global_36844 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36846++;
				if (Global_36846 > 16)
				{
					Global_36846 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36845++;
				if (Global_36845 > 16)
				{
					Global_36845 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		play_sound_frontend(-1, "Notification", &Global_14402, 1);
	}
}

void func_25(auto uParam0)
{
	Global_36847[Global_36851] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_27(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return _get_label_text(&(Global_101154.f_32575[0 /*29*/].f_7));
		
		case 1:
			return _get_label_text(&(Global_101154.f_32575[1 /*29*/].f_7));
		
		case 2:
			return _get_label_text(&(Global_101154.f_32575[2 /*29*/].f_7));
		
		case 7:
			return _get_label_text(&(Global_101154.f_32575[12 /*29*/].f_7));
		
		case 4:
			return _get_label_text(&(Global_101154.f_32575[60 /*29*/].f_7));
		
		case 6:
			return _get_label_text(&(Global_101154.f_32575[62 /*29*/].f_7));
		
		case 3:
			return _get_label_text(&(Global_101154.f_32575[14 /*29*/].f_7));
		
		case 16:
			return _get_label_text(&(Global_101154.f_32575[97 /*29*/].f_7));
		
		case 19:
			return _get_label_text(&(Global_101154.f_32575[99 /*29*/].f_7));
		
		case 15:
			return _get_label_text(&(Global_101154.f_32575[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return _get_label_text(&(Global_101154.f_32575[15 /*29*/].f_7));
		
		case 26:
			return _get_label_text(&(Global_101154.f_32575[30 /*29*/].f_7));
		
		case 27:
			return _get_label_text(&(Global_101154.f_32575[17 /*29*/].f_7));
		
		case 29:
			return _get_label_text(&(Global_101154.f_32575[20 /*29*/].f_7));
		
		case 30:
			return _get_label_text(&(Global_101154.f_32575[43 /*29*/].f_7));
		
		case 31:
			return _get_label_text(&(Global_101154.f_32575[44 /*29*/].f_7));
		
		case 32:
			return _get_label_text(&(Global_101154.f_32575[19 /*29*/].f_7));
		
		case 34:
			return _get_label_text(&(Global_101154.f_32575[40 /*29*/].f_7));
		
		case 36:
			return _get_label_text(&(Global_101154.f_32575[22 /*29*/].f_7));
		
		case 38:
			return _get_label_text(&(Global_101154.f_32575[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return _get_label_text(&(Global_101154.f_32575[122 /*29*/].f_7));
		
		case 40:
			return _get_label_text(&(Global_101154.f_32575[125 /*29*/].f_7));
		
		case 41:
			return _get_label_text(&(Global_101154.f_32575[113 /*29*/].f_7));
		
		case 42:
			return _get_label_text(&(Global_101154.f_32575[126 /*29*/].f_7));
		
		case 43:
			return _get_label_text(&(Global_101154.f_32575[127 /*29*/].f_7));
		
		case 44:
			return _get_label_text(&(Global_101154.f_32575[124 /*29*/].f_7));
		
		case 45:
			return _get_label_text(&(Global_101154.f_32575[114 /*29*/].f_7));
		
		case 46:
			return _get_label_text(&(Global_101154.f_32575[115 /*29*/].f_7));
		
		case 47:
			return _get_label_text(&(Global_101154.f_32575[116 /*29*/].f_7));
		
		case 48:
			return _get_label_text(&(Global_101154.f_32575[123 /*29*/].f_7));
		
		case 49:
			return _get_label_text(&(Global_101154.f_32575[117 /*29*/].f_7));
		
		case 50:
			return _get_label_text(&(Global_101154.f_32575[118 /*29*/].f_7));
		
		case 51:
			return _get_label_text(&(Global_101154.f_32575[119 /*29*/].f_7));
		
		case 52:
			return _get_label_text(&(Global_101154.f_32575[120 /*29*/].f_7));
		
		case 53:
			return _get_label_text(&(Global_101154.f_32575[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_28(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (iParam0 > -1)
	{
		StringCopy(&cVar0, "EMSTR_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		return cVar0;
	}
	StringCopy(&cVar16, "FAIL", 64);
	return cVar16;
}

bool func_29(auto uParam0, int iParam1)
{
	if (Global_40177[uParam0 /*46*/].f_42 >= 9)
	{
		return false;
	}
	Global_40177[uParam0 /*46*/].f_32[Global_40177[uParam0 /*46*/].f_42] = iParam1;
	Global_40177[uParam0 /*46*/].f_42++;
	return true;
}

bool func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	auto uVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	if (!Global_45790[iVar0 /*120*/].f_86[iVar2])
	{
		uVar3 = Global_45790[iVar0 /*120*/].f_18[iVar2];
		uVar4 = Global_45790[iVar0 /*120*/].f_1[iVar2];
		uVar5 = Global_40177[uVar3 /*46*/].f_32[uVar4];
		if (Global_36852[uVar5 /*12*/].f_4 == 0)
		{
			return false;
		}
		if (Global_45790[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return false;
		}
		if (!func_31(iVar0, iVar2))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_31(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	
	if (!iParam0 < 3)
	{
		return false;
	}
	iVar0 = Global_45790[iParam0 /*120*/].f_1[iParam1];
	uVar1 = Global_45790[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_40177[uVar1 /*46*/] && !Global_40177[uVar1 /*46*/].f_1))
	{
		return false;
	}
	if (!iVar0 == Global_40177[uVar1 /*46*/].f_42 - 1)
	{
		return false;
	}
	uVar2 = Global_40177[uVar1 /*46*/].f_32[Global_40177[uVar1 /*46*/].f_42 - 1];
	if (Global_36852[uVar2 /*12*/].f_4 > 0)
	{
		return true;
	}
	return false;
}

void func_32()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_33();
	}
}

void func_33()
{
	if (func_2())
	{
		_move_finger(5);
	}
}

auto func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_45790[iVar0 /*120*/];
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	auto uVar8;
	struct<16> Var9;
	struct<16> Var25;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1 - iParam2;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	if (!Global_45790[iVar0 /*120*/].f_86[iVar2])
	{
		uVar3 = Global_45790[iVar0 /*120*/].f_18[iVar2];
		uVar4 = Global_45790[iVar0 /*120*/].f_1[iVar2];
		uVar5 = Global_40177[uVar3 /*46*/].f_32[uVar4];
		if (Global_36852[uVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_36852[uVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			uVar8 = Global_36852[uVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = {func_28(Global_36852[uVar8 /*12*/].f_1)};
			Var25 = {func_28(Global_36852[uVar8 /*12*/].f_1)};
			_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(9);
			_push_scaleform_movie_function_parameter_int(false);
			func_7("");
			func_7("");
			func_7("EM_RESPONSE_NEW");
			func_7(&Var25);
			func_7(func_37(Global_36852[uVar8 /*12*/].f_2));
			func_36(uVar8, Global_36852[uVar8 /*12*/].f_2);
			_pop_scaleform_movie_function_void();
			iVar6++;
		}
	}
}

void func_36(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			_push_scaleform_movie_function_parameter_string("EmailAds_Elitas_Travel");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			_push_scaleform_movie_function_parameter_string("EmailAds_Dock_Tease");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		case 34:
		case 35:
		case 36:
			_push_scaleform_movie_function_parameter_string("EmailAds_Warstock");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		case 31:
		case 32:
		case 33:
			_push_scaleform_movie_function_parameter_string("EmailAds_Legendary_Motorsport");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			_push_scaleform_movie_function_parameter_string("EmailAds_Warstock");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		case 15:
			_push_scaleform_movie_function_parameter_string("EmailAds_LS_Customs");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		case 19:
			_push_scaleform_movie_function_parameter_string("EmailAds_LS_Tourist_Info");
			_push_scaleform_movie_function_parameter_bool(true);
			return;
		
		default:
	}
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_38(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_39(int iParam0)
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

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_42();
	}
}

void func_42()
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

int func_43(char* sParam0)
{
	if (are_strings_equal(sParam0, &Global_99799))
	{
		return 1;
	}
	if (func_44(sParam0))
	{
		return 0;
	}
	return 2;
}

bool func_44(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_45(int iParam0)
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

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	uVar4 = func_48(iVar0, iParam1, &iVar2, &uVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	iVar6 = Global_45790[iVar0 /*120*/].f_86[uVar4];
	if (!iVar6)
	{
		iVar5 = Global_40177[iVar2 /*46*/].f_32[uVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46152[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46152[iVar7 /*203*/].f_10[uVar3 /*48*/];
	}
	return func_47(iVar5);
}

char* func_47(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_48(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_45790[iParam0 /*120*/] - 1 - iParam1;
	while (iVar0 >= 16)
	{
		iVar0 -= 16;
	}
	iVar1 = iVar0;
	*uParam2 = Global_45790[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_45790[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_45790[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	auto uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	uVar4 = func_48(iVar0, iParam1, &iVar1, &uVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	iVar6 = Global_45790[iVar0 /*120*/].f_86[uVar4];
	if (!iVar6)
	{
		iVar5 = Global_40177[iVar1 /*46*/].f_32[uVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46152[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46152[iVar7 /*203*/].f_10[uVar2 /*48*/];
	}
	return func_50(iVar5);
}

bool func_50(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return true;
		
		default:
	}
	return false;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	auto uVar6;
	struct<16> Var7;
	struct<16> Var23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	auto uVar45;
	int iVar46;
	struct<16> Var47;
	struct<16> Var63;
	int iVar79;
	int iVar80;
	
	_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	_push_scaleform_movie_function_parameter_int(9);
	_pop_scaleform_movie_function_void();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	uVar4 = func_48(iVar0, iParam2, &iVar2, &iVar3, &iVar1);
	iVar5 = Global_45790[iVar0 /*120*/].f_86[uVar4];
	if (!Global_45790[iVar0 /*120*/].f_69[uVar4])
	{
		func_55(-1);
	}
	Global_45790[iVar0 /*120*/].f_69[uVar4] = 1;
	if (!iVar5)
	{
		uVar6 = Global_40177[iVar2 /*46*/].f_32[iVar3];
		Var7 = {func_28(Global_36852[uVar6 /*12*/])};
		Var23 = {func_28(Global_36852[uVar6 /*12*/].f_1)};
		_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
		_push_scaleform_movie_function_parameter_int(9);
		_push_scaleform_movie_function_parameter_int(false);
		func_7(func_54(Global_36852[uVar6 /*12*/].f_3));
		func_7(func_54(Global_36852[uVar6 /*12*/].f_2));
		func_7(&Var7);
		func_7(&Var23);
		func_7(func_37(Global_36852[uVar6 /*12*/].f_2));
		func_36(uVar6, Global_36852[uVar6 /*12*/].f_2);
		_pop_scaleform_movie_function_void();
		if (Global_36852[uVar6 /*12*/].f_4 == 0)
		{
			func_72(0);
		}
		else if (iVar1 || !func_31(iVar0, uVar4))
		{
			func_72(0);
		}
		else
		{
			func_72(1);
		}
		if (Global_40177[iVar2 /*46*/].f_42 > 1)
		{
			iVar39 = iVar3;
			iVar40 = iVar3 - 1;
			iVar41 = 0;
			iVar41 = 0;
			while (iVar41 < iVar39)
			{
				uVar6 = Global_40177[iVar2 /*46*/].f_32[iVar40];
				Var7 = {func_28(Global_36852[uVar6 /*12*/])};
				Var23 = {func_28(Global_36852[uVar6 /*12*/].f_1)};
				iVar42 = func_53(iParam1, Global_36852[uVar6 /*12*/].f_3);
				_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(9);
				_push_scaleform_movie_function_parameter_int(iVar41 + 1);
				func_7(func_54(iVar42));
				func_7(func_54(Global_36852[uVar6 /*12*/].f_2));
				func_7(&Var7);
				func_7(&Var23);
				func_7(func_37(Global_36852[uVar6 /*12*/].f_2));
				func_36(uVar6, Global_36852[uVar6 /*12*/].f_2);
				_pop_scaleform_movie_function_void();
				iVar40--;
				iVar41++;
			}
		}
	}
	else
	{
		iVar43 = -1;
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 < 7)
		{
			if (Global_46152[iVar44 /*203*/].f_1 == iVar2)
			{
				iVar43 = iVar44;
			}
			iVar44++;
		}
		if (iVar43 == -1)
		{
			return;
		}
		else
		{
			uVar45 = Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/];
			Var47 = {func_28(Global_36852[uVar45 /*12*/])};
			Var63 = {func_28(Global_36852[uVar45 /*12*/].f_1)};
			if (Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var63, {Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_36852[uVar45 /*12*/].f_4 == 0)
			{
				func_72(0);
			}
			else if (iVar1)
			{
				func_72(0);
			}
			else
			{
				func_72(1);
			}
			iVar79 = false;
			iVar79 = func_52(iParam0, Global_46152[iVar43 /*203*/].f_1, iVar3, iVar46);
			if (!iVar79)
			{
				_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(9);
				_push_scaleform_movie_function_parameter_int(false);
				func_7(func_54(Global_36852[uVar45 /*12*/].f_3));
				func_7(func_54(Global_36852[uVar45 /*12*/].f_2));
				func_7(&Var47);
				if (Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					_begin_text_component(&Var63);
					iVar80 = 0;
					iVar80 = 0;
					while (iVar80 < Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						_add_text_component_item_string(&(Global_46152[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]));
						iVar80++;
					}
					_end_text_component();
				}
				else
				{
					func_7(&Var63);
				}
				func_7(func_37(Global_36852[uVar45 /*12*/].f_2));
				func_36(uVar45, Global_36852[uVar45 /*12*/].f_2);
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

int func_52(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	struct<16> Var3;
	struct<16> Var19;
	int iVar35;
	int iVar36;
	int iVar37;
	char* sVar38;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = false;
	_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	_pop_scaleform_movie_function_void();
	Var3 = {func_28(Global_36852[iParam3 /*12*/])};
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var19, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var19, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var19, "PROPR_INCEMAIL2", 64);
			break;
	}
	_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(9);
	_push_scaleform_movie_function_parameter_int(iVar2);
	func_7(func_54(Global_36852[iParam3 /*12*/].f_3));
	func_7(func_54(Global_36852[iParam3 /*12*/].f_2));
	func_7(&Var3);
	func_7(&Var19);
	func_7(func_37(Global_36852[iParam3 /*12*/].f_2));
	func_7("");
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	iVar2++;
	iVar35 = 0;
	while (iVar35 < 16)
	{
		iVar36 = iVar35;
		iVar37 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_101154.f_29429[iVar36 /*4*/] == 0)
				{
					iVar37 = true;
				}
				break;
			
			case 73:
				if (Global_101154.f_29429[iVar36 /*4*/] == 1)
				{
					iVar37 = true;
				}
				break;
			
			case 74:
				if (Global_101154.f_29429[iVar36 /*4*/] == 2)
				{
					iVar37 = true;
				}
				break;
		}
		if (iVar37)
		{
			switch (iVar36)
			{
				case 0:
					sVar38 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar38 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar38 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar38 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar38 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar38 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar38 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar38 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar38 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar38 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar38 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar38 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar38 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar38 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar38 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar38 = "ACCNA_STRP";
					break;
			}
			_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(9);
			_push_scaleform_movie_function_parameter_int(iVar2);
			_begin_text_component("PROPR_INCEMAIL4");
			_add_text_component_item_string(sVar38);
			add_text_component_integer(Global_101154.f_29429[iVar36 /*4*/].f_3);
			_end_text_component();
			_pop_scaleform_movie_function_void();
			iVar2++;
			iVar0 = 1;
		}
		iVar35++;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_55(int iParam0)
{
	switch (func_73())
	{
		case 0:
			Global_36844 += iParam0;
			if (Global_36844 < 0)
			{
				Global_36844 = 0;
			}
			break;
		
		case 2:
			Global_36846 += iParam0;
			if (Global_36846 < 0)
			{
				Global_36846 = 0;
			}
			break;
		
		case 1:
			Global_36845 += iParam0;
			if (Global_36845 < 0)
			{
				Global_36845 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	iVar3 = Global_45790[iVar0 /*120*/].f_18[iVar2];
	uVar4 = Global_45790[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	iVar6 = Global_45790[iVar0 /*120*/].f_86[iVar2];
	if (!iVar6)
	{
		iVar5 = Global_40177[iVar3 /*46*/].f_32[uVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_46152[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_46152[iVar7 /*203*/].f_10[uVar4 /*48*/];
	}
	if (!func_57(iVar5))
	{
		return;
	}
	if (Global_46151 != -1)
	{
		set_streamed_texture_dict_as_no_longer_needed(func_12(Global_46151));
	}
	Global_46151 = iVar5;
	request_streamed_texture_dict(func_12(iVar5), false);
	while (!has_streamed_texture_dict_loaded(func_12(iVar5)))
	{
		wait(100);
	}
}

bool func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
		
		default:
	}
	return false;
}

void func_58()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_36847[iVar0] != -1)
		{
			_remove_notification(Global_36847[iVar0]);
			Global_36847[iVar0] = -1;
		}
		iVar0++;
	}
	Global_36851 = 0;
}

void func_59(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_60(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_7(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_7(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_7(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_7(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_7(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	auto uVar5;
	auto uVar6;
	int iVar7;
	char* sVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	auto uVar15;
	int iVar16;
	auto uVar17;
	struct<16> Var18;
	
	func_62(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	_push_scaleform_movie_function_parameter_int(8);
	_pop_scaleform_movie_function_void();
	if (Global_45790[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = Global_45790[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = false;
	iVar3 = false;
	while (iVar3 < iVar2)
	{
		if (!Global_45790[iVar0 /*120*/].f_86[iVar1])
		{
			uVar4 = Global_45790[iVar0 /*120*/].f_18[iVar1];
			uVar5 = Global_45790[iVar0 /*120*/].f_1[iVar1];
			uVar6 = Global_40177[uVar4 /*46*/].f_32[uVar5];
			iVar7 = false;
			if (Global_45790[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = true;
			}
			if (iVar7 == 1)
			{
				if (Global_36852[uVar6 /*12*/].f_4 > 0)
				{
					if (Global_45790[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_28(Global_36852[uVar6 /*12*/])}, 4);
			_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(8);
			_push_scaleform_movie_function_parameter_int(iVar3);
			_push_scaleform_movie_function_parameter_int(iVar7);
			_push_scaleform_movie_function_parameter_int(false);
			func_7(func_54(Global_36852[uVar6 /*12*/].f_2));
			func_7(&sVar8);
			_pop_scaleform_movie_function_void();
		}
		else
		{
			iVar12 = Global_45790[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
			iVar14 = 0;
			while (iVar14 < 7)
			{
				if (Global_46152[iVar14 /*203*/].f_1 == iVar12)
				{
					iVar13 = iVar14;
				}
				iVar14++;
			}
			if (iVar13 == -1)
			{
				return 1;
			}
			else
			{
				uVar15 = Global_45790[iVar0 /*120*/].f_1[iVar1];
				iVar16 = false;
				if (Global_45790[iVar0 /*120*/].f_69[iVar1])
				{
					iVar16 = true;
				}
				uVar17 = Global_46152[iVar13 /*203*/].f_10[uVar15 /*48*/];
				if (iVar16 == 1)
				{
					if (Global_36852[uVar17 /*12*/].f_4 > 0)
					{
						if (Global_45790[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar16 = 2;
						}
					}
				}
				Var18 = {func_28(Global_36852[uVar17 /*12*/])};
				_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(8);
				_push_scaleform_movie_function_parameter_int(iVar3);
				_push_scaleform_movie_function_parameter_int(iVar16);
				_push_scaleform_movie_function_parameter_int(false);
				func_7(func_54(Global_36852[uVar17 /*12*/].f_2));
				func_7(&Var18);
				_pop_scaleform_movie_function_void();
			}
		}
		iVar1--;
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	auto uVar129;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45790[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = Global_45790[iVar0 /*120*/] - 1;
	while (iVar1 >= 16)
	{
		iVar1 -= 16;
	}
	iVar2 = Global_45790[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = iVar1 - iVar2 - 1;
	if (iVar3 < 0)
	{
		iVar3 = 16 + iVar3;
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar124 = 0;
	while (iVar124 < iVar2)
	{
		iVar125 = true;
		if (Global_45790[iVar0 /*120*/].f_103[iVar3])
		{
			iVar125 = false;
		}
		if (Global_45790[iVar0 /*120*/].f_86[iVar3])
		{
			iVar126 = Global_45790[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
			iVar128 = 0;
			while (iVar128 < 7)
			{
				if (Global_46152[iVar128 /*203*/].f_1 == iVar126)
				{
					iVar127 = iVar128;
				}
				iVar128++;
			}
			if (iVar127 == -1)
			{
				iVar125 = false;
			}
		}
		if (iVar125)
		{
			uVar129 = Var4;
			Var4.f_1[uVar129] = Global_45790[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[uVar129] = Global_45790[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[uVar129] = Global_45790[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[uVar129] = Global_45790[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[uVar129] = Global_45790[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[uVar129] = Global_45790[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar124++;
	}
	Global_45790[iVar0 /*120*/] = Var4;
	iVar124 = 0;
	while (iVar124 < 16)
	{
		Global_45790[iVar0 /*120*/].f_103[iVar124] = 0;
		Global_45790[iVar0 /*120*/].f_1[iVar124] = Var4.f_1[iVar124];
		Global_45790[iVar0 /*120*/].f_18[iVar124] = Var4.f_18[iVar124];
		Global_45790[iVar0 /*120*/].f_35[iVar124] = Var4.f_35[iVar124];
		Global_45790[iVar0 /*120*/].f_52[iVar124] = Var4.f_52[iVar124];
		Global_45790[iVar0 /*120*/].f_69[iVar124] = Var4.f_69[iVar124];
		Global_45790[iVar0 /*120*/].f_86[iVar124] = Var4.f_86[iVar124];
		iVar124++;
	}
}

void func_63()
{
	float fVar0;
	
	fVar0 = func_64(vLocal_50, vLocal_47, -90f, 0f, 90f, Global_14373, 350f, 0);
	if (Global_3087 == 0)
	{
		set_mobile_phone_scale(500f + 75f * 1f - fVar0);
	}
	if (fVar0 >= 1f)
	{
		Global_16745 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_64(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, float fParam4, int iParam5)
{
	struct<2> Var0;
	float fVar3;
	Vector3 fVar4;
	float fVar5;
	
	if (Global_2563612 == 0)
	{
		if (is_bit_set(Global_2283, 14) && Global_14413.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
			{
				Global_2563612 = 1;
			}
		}
	}
	if (func_67() && Global_2563612 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = get_game_timer();
	}
	fVar3 = func_66(to_float(get_game_timer() - iLocal_18) / fParam12, 0f, 1f);
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
		Global_14341 = {func_65(vParam0, vParam3, fVar4)};
		Global_14344 = {func_65(vParam6, vParam9, fVar4)};
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

Vector3 func_65(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_66(float fParam0, float fParam1, float fParam2)
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

bool func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_11(14))
		{
			return false;
		}
		if (is_ped_in_cover(player_ped_id(), 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (!_0x4F32C0D5A90A9B40())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), 0)))
				{
					return false;
				}
			}
		}
		if (((is_ped_swimming(player_ped_id()) || is_ped_swimming_under_water(player_ped_id())) || is_player_climbing(player_id())) || is_ped_hanging_on_to_vehicle(player_ped_id()))
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
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
				if ((((((((is_this_model_a_bike(get_entity_model(iVar3)) || is_this_model_a_bicycle(get_entity_model(iVar3))) || is_this_model_a_quadbike(get_entity_model(iVar3))) || get_entity_model(iVar3) == joaat("seashark")) || get_entity_model(iVar3) == joaat("seashark2")) || get_entity_model(iVar3) == joaat("rhino")) || get_entity_model(iVar3) == joaat("submersible")) || get_entity_model(iVar3) == joaat("submersible2")) || get_entity_model(iVar3) == joaat("toro"))
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

void func_68()
{
	float fVar0;
	
	fVar0 = func_64(vLocal_47, vLocal_50, Global_14373, -90f, 0f, 90f, 350f, 0);
	if (Global_3087 == 0)
	{
		if (is_pc_version())
		{
			if (!func_69())
			{
				set_mobile_phone_scale(500f + 75f * fVar0);
			}
		}
		else
		{
			set_mobile_phone_scale(500f + 75f * fVar0);
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_16746 = 0;
		iLocal_18 = 0;
	}
}

bool func_69()
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

void func_70(int iParam0)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	if (is_xbox360_version() || is_durango_version())
	{
		get_hud_colour(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		get_hud_colour(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0)
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(true);
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_int(16);
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(true);
		_push_scaleform_movie_function_parameter_bool(false);
		_push_scaleform_movie_function_parameter_int(16);
		_pop_scaleform_movie_function_void();
	}
}

void func_71(int iParam0)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	if (is_xbox360_version() || is_durango_version())
	{
		get_hud_colour(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		get_hud_colour(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0)
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(3);
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_int(4);
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(3);
		_push_scaleform_movie_function_parameter_bool(false);
		_push_scaleform_movie_function_parameter_int(4);
		_pop_scaleform_movie_function_void();
	}
}

void func_72(int iParam0)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	if (is_xbox360_version() || is_durango_version())
	{
		get_hud_colour(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		get_hud_colour(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0)
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(2);
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_int(2);
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(Global_14394, "SET_SOFT_KEYS");
		_push_scaleform_movie_function_parameter_int(2);
		_push_scaleform_movie_function_parameter_bool(false);
		_push_scaleform_movie_function_parameter_int(2);
		_pop_scaleform_movie_function_void();
	}
}

auto func_73()
{
	func_74();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_74()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_77(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_76(player_ped_id());
			if (func_75(iVar0) && (!func_11(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_75(Global_101154.f_1826.f_539.f_3549))
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

int func_75(int iParam0)
{
	return iParam0 < 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

