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
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char[24] cLocal_38 = 0;
	char[24] cLocal_44 = 0;
	char[64] cLocal_50 = 0;
	char[24] cLocal_66 = 0;
	char* sLocal_72 = 0;
	char[24] cLocal_73 = 0;
	char* sLocal_79 = 0;
	char* sLocal_80 = 0;
	char* sLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	char[24] cLocal_85 = 0;
	char* sLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var[] uLocal_111 = new var[30];
	var[] uLocal_142 = new var[30];
	var[] uLocal_173 = new var[30];
	var[] uLocal_204 = new var[30];
	int iLocal_235 = 0;
	auto uLocal_236 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	network_set_script_is_safe_for_network_game();
	while (true)
	{
		wait(0);
		if (is_bit_set(Global_2284, true))
		{
			if (!is_bit_set(Global_2283, 20))
			{
				if (is_mobile_phone_call_ongoing())
				{
					if (Global_14401)
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14356)
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					clear_bit(&Global_2284, true);
				}
			}
		}
		if (is_bit_set(Global_14578, false))
		{
			if (!func_104())
			{
				if (!is_bit_set(Global_14578, true))
				{
					set_bit(&Global_14578, true);
					if (network_is_game_in_progress())
					{
						iLocal_106 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_102 = get_game_timer();
					}
				}
				if (network_is_game_in_progress())
				{
					iLocal_108 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_106);
				}
				else
				{
					iLocal_103 = get_game_timer();
					iLocal_108 = iLocal_103 - iLocal_102;
				}
				if (iLocal_108 < 3000)
				{
					if (func_102(&Global_15166, &Global_15782, &Global_15702, Global_15715, Global_16697, Global_16698, 0))
					{
						Global_14578 = 0;
					}
				}
				else
				{
					Global_14578 = 0;
				}
			}
		}
		if (!is_player_playing(player_id()) && !is_bit_set(Global_1617379.f_17, 4))
		{
			if (Global_15712 != 0)
			{
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					func_101();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_97();
		}
		switch (Global_15712)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15718)
				{
					if (Global_15708 == 0)
					{
						func_95();
					}
					else
					{
						func_94();
						func_95();
					}
				}
				else if (Global_15708 == 0)
				{
					func_85();
				}
				else
				{
					func_94();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15718)
				{
					if (Global_15720)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_15722 = 0;
	Global_14412 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15723 = 0;
	Global_15724 = 0;
	Global_15725 = 0;
	Global_15726 = 0;
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
	Global_15716 = 0;
	Global_15717 = 0;
	Global_15759 = 0;
	Global_15760 = 0;
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15764 = 0;
	Global_15767 = 0;
	Global_15766 = 0;
	Global_16729 = 0;
	Global_15769 = 0;
	if (Global_14413.f_1 == 10)
	{
	}
	else if (is_bit_set(Global_2283, 11))
	{
		func_3();
	}
	Global_15718 = 0;
	Global_15719 = 0;
	Global_15720 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16702 = 0;
	Global_16709 = 0;
	Global_16708 = 0;
	Global_16705 = 0;
	Global_16704 = 0;
	Global_16706 = 0;
	Global_16707 = 0;
	Global_15708 = 0;
	Global_15709 = 0;
	Global_15710 = 0;
	Global_15711 = 0;
	Global_15970 = 0;
	Global_16733 = 5000;
	Global_14396 = 0;
	clear_bit(&Global_2283, 20);
	clear_bit(&Global_2283, 24);
	clear_bit(&Global_2284, 23);
	clear_bit(&Global_2285, false);
	clear_bit(&Global_2284, 9);
	clear_bit(&Global_2284, 31);
	clear_bit(&Global_2284, 17);
	clear_bit(&Global_2285, 5);
	Global_16696 = 0;
	Global_16695 = 0;
	if (is_scripted_conversation_ongoing())
	{
		Global_15712 = 4;
	}
	else
	{
		Global_15712 = 0;
		Global_16723 = 0;
		Global_16734 = get_game_timer();
	}
}

void func_3()
{
	if (!Global_69489)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_bit_set(Global_2283, 11))
			{
				if (!Global_14356)
				{
					task_use_mobile_phone(player_ped_id(), 0, 1);
				}
				if (Global_69489)
				{
					PED::SET_PED_CONFIG_FLAG(player_ped_id(), 244, true);
					PED::SET_PED_CONFIG_FLAG(player_ped_id(), 243, true);
					PED::SET_PED_CONFIG_FLAG(player_ped_id(), 242, true);
				}
				clear_bit(&Global_2283, 11);
			}
		}
	}
}

void func_4()
{
	Global_15722 = 0;
	Global_14412 = 0;
	func_2();
}

void func_5()
{
	if (is_player_playing(player_id()))
	{
		if (is_ped_swimming_under_water(player_ped_id()))
		{
			if (Global_15768 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16704 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16723 == 1)
			{
				pause_scripted_conversation(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16723 == 0)
		{
			restart_scripted_conversation();
			iLocal_31 = 0;
		}
	}
	else if (Global_16706 > 0)
	{
		iLocal_37 = get_game_timer();
		if (iLocal_37 - iLocal_36 > Global_16706)
		{
			start_preloaded_conversation();
			Global_16704 = 0;
		}
	}
	if (Global_16723 == 0)
	{
		if (!is_scripted_conversation_ongoing())
		{
			Global_15712 = 6;
		}
	}
}

void func_6()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_mobile_phone_call_ongoing())
	{
		if (!is_bit_set(Global_2283, 11))
		{
			if (!is_entity_dead(player_ped_id(), 0))
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (Global_69489 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!is_entity_dead(player_ped_id(), 0))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				if (Global_69489 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_69489 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16723 == 1)
		{
			if (Global_16724 == 1)
			{
				pause_scripted_conversation(1);
				iLocal_31 = 1;
				Global_16724 = 0;
			}
		}
	}
	else if (Global_16723 == 0)
	{
		if (Global_16724 == 1)
		{
			restart_scripted_conversation();
			iLocal_31 = 0;
			Global_16724 = 0;
		}
	}
	if (Global_15765 == 0)
	{
		if (!Global_15725)
		{
			if (!is_bit_set(Global_2284, 31))
			{
				if (!is_bit_set(Global_2284, 27))
				{
					if (func_49())
					{
						if (Global_14413.f_1 > 6)
						{
							set_bit(&Global_2284, 24);
							set_bit(&Global_2284, 27);
							clear_bit(&Global_2284, 26);
							clear_bit(&Global_2284, 25);
						}
					}
				}
			}
		}
	}
	if (is_mobile_phone_call_ongoing() == 0 && Global_15725 == 0)
	{
		if (Global_15765 == 1)
		{
			set_bit(&Global_2284, 23);
		}
		else
		{
			clear_bit(&Global_2284, 23);
		}
		if (Global_15769)
		{
			if (Global_15765 == 0)
			{
				Global_15331 = {Global_15770};
				Global_15788 = {Global_15776};
				Global_15722 = 0;
				Global_16729 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15767)
		{
			while (Global_15765 == 1)
			{
				wait(0);
				if (Global_14413.f_1 < 6)
				{
					Global_15765 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15767)
						{
							iLocal_30 = 1;
							Global_16727 = 1;
							func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(4), -1f, -1f, &Global_15854, &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
							func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14401)
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								set_bit(&Global_2283, 17);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								set_bit(&Global_2283, 17);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16725 = 1;
							if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
							{
								func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(4), -1f, -1f, &Global_15854, "CELL_300", &(Global_117[Global_1598 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(4), -1f, -1f, &Global_15854, &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
								func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14401)
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							clear_bit(&Global_2283, 17);
						}
					}
					if (func_45(2, Global_14382, 0))
					{
						func_43();
						Global_14339 = 0.19f;
						Global_15765 = 0;
						func_41();
						if (Global_15767)
						{
							Global_15331 = {Global_15848};
							Global_16729 = 5;
						}
						else if (Global_15710 > 0)
						{
							Global_15970 = 1;
							Global_15712 = 0;
							Global_16733 = 0;
							if (is_bit_set(Global_2284, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16696 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_15971[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16333[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16696, &Global_15001, Global_1598, &Global_15788, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15710 == 2)
							{
								func_22(&Global_15001, Global_1598, &Global_15788, &(Global_15866[0 /*6*/]), &(Global_15918[0 /*6*/]), &(Global_15866[1 /*6*/]), &(Global_15918[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16729 = 1;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15331 = {Global_15806};
							Global_16729 = 1;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14383, 0) || is_bit_set(Global_2283, 24))
					{
						func_43();
						Global_14339 = 0.19f;
						Global_15765 = 0;
						func_41();
						if (Global_15767)
						{
							Global_15331 = {Global_15842};
							Global_16729 = 4;
						}
						else if (Global_15710 > 0)
						{
							Global_15970 = 1;
							Global_15712 = 0;
							Global_16733 = 0;
							if (is_bit_set(Global_2284, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16695 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16152[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16514[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16695, &Global_15001, Global_1598, &Global_15788, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15710 == 2)
							{
								func_22(&Global_15001, Global_1598, &Global_15788, &(Global_15879[0 /*6*/]), &(Global_15931[0 /*6*/]), &(Global_15879[1 /*6*/]), &(Global_15931[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16729 = 2;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15331 = {Global_15812};
							Global_16729 = 2;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14385, 0))
					{
						if (Global_15767)
						{
							Global_14339 = 0.19f;
							Global_15765 = 0;
							func_41();
							func_43();
							Global_15331 = {Global_15836};
							Global_16729 = 3;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15765)
			{
				wait(0);
				if (Global_14413.f_1 < 6)
				{
					Global_15765 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_105(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_105(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(false), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14394, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14401)
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						clear_bit(&Global_2283, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14382, 0))
					{
						func_43();
						Global_15765 = 0;
						func_41();
						_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
						uLocal_236 = _pop_scaleform_movie_function();
						while (!_0x768FF8961BA904D6(uLocal_236))
						{
							wait(0);
						}
						iVar2 = _0x2DE7EFA66B906036(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15331 = {Global_15842};
								Global_16729 = 4;
								break;
							
							case 1:
								Global_15331 = {Global_15836};
								Global_16729 = 3;
								break;
							
							case 2:
								Global_15331 = {Global_15848};
								Global_16729 = 5;
								break;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14383, 0))
					{
						Global_15765 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15713 == 0)
		{
			stop_scripted_conversation(false);
			settimera(0);
			while (timera() < 900 && Global_14413.f_1 == 9)
			{
				wait(0);
			}
			Global_15712 = 6;
		}
		play_sound_frontend(-1, "Hang_Up", &Global_14402, 1);
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
	else if (Global_14571 == 0)
	{
		if (func_45(2, Global_14381, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (is_player_control_on(player_id()))
				{
					if (is_bit_set(Global_2283, 20))
					{
					}
					else
					{
						Global_14391 = 1;
						func_41();
						stop_scripted_conversation(false);
						Global_15761 = 1;
						Global_15762 = 1;
						Global_15712 = 6;
						func_13();
						Global_14413.f_1 = Global_14415;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2888);
			if (Global_2888 == 1)
			{
				func_46(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_46(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_10();
				func_46(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
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
					func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_46(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
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
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_10()
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
								func_9(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_9(&(Global_2290[iVar1 /*15*/]));
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
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
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
								func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return;
	}
	switch (Global_14415)
	{
		case 5:
			Global_14415 = 6;
			break;
		
		case 6:
			if (is_bit_set(Global_2284, 5))
			{
				Global_14415 = 6;
				clear_bit(&Global_2284, 5);
			}
			else
			{
				Global_14415 = 3;
			}
			break;
		
		case 7:
			Global_14415 = 3;
			break;
		
		case 3:
			if (is_bit_set(Global_2284, 5))
			{
				Global_14415 = 6;
				clear_bit(&Global_2284, 5);
			}
			else
			{
				Global_14415 = 3;
			}
			break;
		
		default:
			Global_14415 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_235)
	{
		if (timera() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_45(2, Global_14389, 0) || is_control_just_pressed(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			settimera(0);
		}
		if (func_45(2, Global_14390, 0) || is_control_just_pressed(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	func_46(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_16();
}

void func_16()
{
	if (func_17())
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

bool func_17()
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

void func_18()
{
	func_46(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_19();
}

void func_19()
{
	if (func_17())
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

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
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

void func_21()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (is_bit_set(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
		}
		else
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(auto uParam0, int iParam1, char* sParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	auto uVar0;
	auto uVar11;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, iParam11);
}

bool func_23(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (iParam3 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
				}
				else
				{
					func_101();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_34(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_33();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = {Global_15892[0 /*6*/]};
			Global_15866[1 /*6*/] = {Global_15892[1 /*6*/]};
			Global_15918[0 /*6*/] = {Global_15944[0 /*6*/]};
			Global_15918[1 /*6*/] = {Global_15944[1 /*6*/]};
			Global_15879[0 /*6*/] = {Global_15905[0 /*6*/]};
			Global_15879[1 /*6*/] = {Global_15905[1 /*6*/]};
			Global_15931[0 /*6*/] = {Global_15957[0 /*6*/]};
			Global_15931[1 /*6*/] = {Global_15957[1 /*6*/]};
		}
		if (Global_15718)
		{
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam3)
			{
				func_27();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_26())
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (Global_15970 == 0)
					{
						if (is_entity_in_water(player_ped_id()))
						{
							return false;
						}
						if (is_player_climbing(player_id()))
						{
							return false;
						}
						if (is_ped_planting_bomb(player_ped_id()))
						{
							return false;
						}
						if (is_special_ability_active(player_id()))
						{
							return false;
						}
					}
				}
			}
			if (func_25())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_24();
			Global_15722 = iParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), *uParam0[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), *uParam1[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_48();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
	{
		return false;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_101();
	}
	return false;
}

void func_24()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	clear_bit(&Global_2284, 16);
}

bool func_25()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_27()
{
	if (func_12(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_28();
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

auto func_28()
{
	func_29();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_29()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_32(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_31(player_ped_id());
			if (func_30(iVar0) && (!func_12(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_30(Global_101154.f_1826.f_539.f_3549))
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

int func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return is_bit_set(Global_1338622.f_949, iParam0);
}

void func_35(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_36(iParam0);
	*uParam1[0] = uParam3;
	*uParam2[0] = uParam4;
	*uParam1[1] = uParam5;
	*uParam2[1] = uParam6;
	*uParam1[2] = iParam7;
	*uParam2[2] = iParam8;
	*uParam1[3] = iParam9;
	*uParam2[3] = iParam10;
	*uParam1[4] = iParam11;
	*uParam2[4] = iParam12;
	*uParam1[5] = iParam13;
	*uParam2[5] = iParam14;
	*uParam1[6] = iParam15;
	*uParam2[6] = iParam16;
}

void func_36(auto uParam0)
{
	Global_15709 = uParam0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_15726 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
}

void func_38(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_39(auto uParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, iParam10);
}

auto func_40(auto uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		_move_finger(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (!Global_14356)
				{
					if (!is_bit_set(Global_2283, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

bool func_44()
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
		if (func_12(14))
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

bool func_45(int iParam0, int iParam1, int iParam2)
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

void func_46(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_47()
{
	if (func_44())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (!Global_14356)
				{
					if (is_bit_set(Global_2283, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

bool func_49()
{
	if (network_is_game_in_progress())
	{
		iLocal_108 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_107);
	}
	else
	{
		iLocal_105 = get_game_timer();
		iLocal_108 = iLocal_105 - iLocal_104;
	}
	return false;
}

void func_50(int iParam0)
{
	if (Global_14571)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_14413.f_1 = 3;
	}
}

void func_51(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_52(0))
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

bool func_52(int iParam0)
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

void func_53()
{
	if (func_45(2, Global_14390, 0))
	{
		if (Global_16723 == 0)
		{
			if (Global_15718)
			{
				if (is_bit_set(Global_2284, 17))
				{
				}
				else
				{
					skip_to_next_scripted_conversation_line();
				}
			}
		}
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_55() && is_ped_in_cover(player_ped_id(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69489)
	{
		if (!is_ped_injured(player_ped_id()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(player_ped_id(), false);
			if (Global_69489)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(player_ped_id()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(player_ped_id()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(player_ped_id(), 0))
						{
							if (is_ped_in_any_vehicle(player_ped_id(), 0))
							{
							}
							else
							{
								if (Global_69489)
								{
									PED::SET_PED_CONFIG_FLAG(player_ped_id(), 244, false);
									PED::SET_PED_CONFIG_FLAG(player_ped_id(), 243, false);
									PED::SET_PED_CONFIG_FLAG(player_ped_id(), 242, false);
								}
								set_bit(&Global_2283, 11);
								task_use_mobile_phone(player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

bool func_55()
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

void func_56()
{
	if (Global_69489 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16725 = 1;
		if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
		{
			func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(4), -1f, -1f, &Global_15854, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(4), -1f, -1f, &Global_15854, &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14339 = 0.2f;
		if (Global_14401)
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_2283, 17);
	}
	if (Global_15765 == 1)
	{
		if (Global_14413.f_1 < 6)
		{
			Global_15765 = 0;
		}
		else
		{
			if (Global_14353 == 0)
			{
				if (func_45(2, Global_14382, 0))
				{
					Global_14339 = 0.19f;
					Global_15765 = 0;
					func_41();
					Global_16730 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14383, 0))
			{
				Global_14339 = 0.19f;
				Global_15765 = 0;
				func_41();
				Global_16730 = 2;
			}
		}
	}
	else if (Global_16730 == 2)
	{
		if (Global_15713 == 0)
		{
			stop_scripted_conversation(false);
			Global_15712 = 6;
		}
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
	else if (!is_mobile_phone_call_ongoing())
	{
		iLocal_32 = 0;
		stop_scripted_conversation(false);
		Global_15712 = 6;
		play_sound_frontend(-1, "Hang_Up", &Global_14402, 1);
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
}

void func_57()
{
	if (Global_14579 == 1)
	{
		if (is_mobile_phone_call_ongoing())
		{
			if (_0xE73364DB90778FFA())
			{
				Global_14579 = 0;
			}
		}
		if (!is_player_playing(player_id()))
		{
			Global_14579 = 0;
			stop_scripted_conversation(false);
			Global_15712 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_14579 == 1)
		{
			Global_14579 = 0;
		}
	}
	if (timera() < Global_16733 || Global_14579 == 1)
	{
		if (func_45(2, Global_14381, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (is_player_control_on(player_id()))
				{
					if (is_bit_set(Global_2283, 20))
					{
					}
					else
					{
						Global_14391 = 1;
						func_41();
						stop_scripted_conversation(false);
						Global_15761 = 1;
						Global_15712 = 6;
						clear_bit(&Global_2283, 27);
						if (!Global_15723)
						{
							set_bit(&Global_2284, 5);
						}
						func_13();
						Global_14413.f_1 = Global_14415;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		clear_bit(&Global_2283, 27);
		Global_15712 = 4;
		Global_15769 = 0;
		func_60();
		func_59();
		if (!Global_15725)
		{
			if (Global_16729 == 0)
			{
				if (!is_bit_set(Global_2285, 5))
				{
					start_preloaded_conversation();
				}
				clear_bit(&Global_2285, 5);
			}
			else
			{
				start_script_phone_conversation(Global_15331.f_368, Global_15331.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (network_is_game_in_progress())
	{
		iLocal_107 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_104 = get_game_timer();
	}
}

void func_59()
{
	if (Global_15725)
	{
		if (Global_69489)
		{
			if (has_scaleform_movie_loaded(Global_14394))
			{
				if (!is_pc_version())
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					set_bit(&(Global_2460486.f_1639), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (!Global_15720)
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
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
			else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
			{
				func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_105(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_219", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (network_is_game_in_progress())
	{
		iLocal_109 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_95);
		iLocal_110 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_98);
	}
	else
	{
		iLocal_94 = get_game_timer();
		iLocal_109 = iLocal_94 - iLocal_93;
		iLocal_97 = get_game_timer();
		iLocal_110 = iLocal_97 - iLocal_96;
	}
	if (Global_15759 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (is_bit_set(Global_2283, 14))
				{
					if (has_scaleform_movie_loaded(Global_14394))
					{
						func_41();
						Global_14412 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (is_bit_set(Global_2283, 14))
			{
				if (has_scaleform_movie_loaded(Global_14394))
				{
					func_41();
					Global_14412 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14412 = 3;
	}
	if (Global_14412 == 2)
	{
		iLocal_30 = 0;
		Global_15712 = 4;
		func_54();
		Global_15769 = 0;
		func_60();
		func_59();
		if (!Global_15725)
		{
			if (Global_16729 == 0)
			{
				start_preloaded_conversation();
			}
			else
			{
				start_script_phone_conversation(Global_15331.f_368, Global_15331.f_369);
			}
		}
		func_58();
		Global_16728 = 0;
	}
	if (Global_15759 == 0)
	{
		if (Global_14412 == 3)
		{
			if (Global_15725)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16728 = 1;
				stop_scripted_conversation(false);
				Global_15712 = 6;
				func_13();
				Global_14413.f_1 = Global_14415;
				func_8();
			}
		}
	}
	else if (Global_14412 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2465472.f_2 = 1;
	Global_2465472.f_38 = 1;
	if (network_is_signed_online())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				wait(0);
			}
			network_session_voice_leave();
			Global_2465472 = 0;
			Global_2465472.f_2 = 0;
		}
		else if (func_66(Global_2465472.f_20))
		{
			if (network_is_friend(&(Global_2465472.f_20)))
			{
				if (!_0x87EB7A3FFCB314DB(&(Global_2465472.f_20)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_2465472.f_37)
	{
		func_50(0);
	}
	Global_2465472.f_37 = 0;
	Global_2465472.f_3 = 0;
}

void func_64()
{
	Global_2465472.f_1 = 0;
	Global_2465472 = 0;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	StringCopy(&(Global_2465472.f_4), "", 64);
	StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
	Global_2465472.f_38 = 0;
	Global_2465472.f_56 = 0;
	Global_2465472.f_57 = 0;
	Global_2465472.f_58 = -2;
	Global_2465472.f_3 = 0;
	func_65(&(Global_2465472.f_20));
}

void func_65(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_66(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar6;
	auto uVar7;
	auto uVar8;
	auto uVar9;
	auto uVar10;
	auto uVar11;
	auto uVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_15708)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = {Global_15331.f_6[iLocal_92 /*6*/]};
			StringConCat(&cLocal_44, "A", 24);
			Global_14580[iVar2 /*6*/] = {Global_15331.f_6[iLocal_92 /*6*/]};
			StringConCat(&(Global_14580[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14580[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = {Global_14580[iVar2 /*6*/]};
			StringConCat(&cLocal_38, "A", 24);
			if (does_text_label_exist(&cLocal_38))
			{
				StringCopy(&cLocal_50, _get_label_text(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (does_text_label_exist(&(Global_14580[iVar2 /*6*/])))
				{
					if (are_strings_equal(&(Global_14580[iVar2 /*6*/]), &(Global_15331.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						add_line_to_conversation(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 += iVar0;
			}
			else if (does_text_label_exist(&cLocal_44))
			{
				StringCopy(&cLocal_50, _get_label_text(&cLocal_44), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				add_line_to_conversation(iVar3, &cLocal_50, &(Global_15331.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14580[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14580[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15718 == 0)
	{
		_0x0B568201DD99F0EB(uLocal_83);
		_0x61631F5DF50D1C34(uLocal_84);
		start_script_conversation(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
		Global_15712 = 4;
	}
}

bool func_68(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_69(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_70(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

int func_71(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (are_strings_equal(sVar0, "0"))
	{
		return 1;
	}
	if (are_strings_equal(sVar0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sVar0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sVar0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

bool func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_74(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_75()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_73), 2, 3);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_76()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_73), 1, 2);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

bool func_77()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_73), 0, 1);
	if (are_strings_equal(sVar0, "0"))
	{
		return false;
	}
	return true;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(sVar0);
}

int func_79(char* sParam0)
{
	if (are_strings_equal(sParam0, "0"))
	{
		return 0;
	}
	if (are_strings_equal(sParam0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sParam0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sParam0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sParam0, "4"))
	{
		return 4;
	}
	if (are_strings_equal(sParam0, "5"))
	{
		return 5;
	}
	if (are_strings_equal(sParam0, "6"))
	{
		return 6;
	}
	if (are_strings_equal(sParam0, "7"))
	{
		return 7;
	}
	if (are_strings_equal(sParam0, "8"))
	{
		return 8;
	}
	if (are_strings_equal(sParam0, "9"))
	{
		return 9;
	}
	if (are_strings_equal(sParam0, "A"))
	{
		return 10;
	}
	if (are_strings_equal(sParam0, "B"))
	{
		return 11;
	}
	if (are_strings_equal(sParam0, "C"))
	{
		return 12;
	}
	if (are_strings_equal(sParam0, "D"))
	{
		return 13;
	}
	if (are_strings_equal(sParam0, "E"))
	{
		return 14;
	}
	if (are_strings_equal(sParam0, "F"))
	{
		return 15;
	}
	if (are_strings_equal(sParam0, "G"))
	{
		return 16;
	}
	if (are_strings_equal(sParam0, "H"))
	{
		return 17;
	}
	if (are_strings_equal(sParam0, "I"))
	{
		return 18;
	}
	if (are_strings_equal(sParam0, "J"))
	{
		return 19;
	}
	if (are_strings_equal(sParam0, "K"))
	{
		return 20;
	}
	if (are_strings_equal(sParam0, "L"))
	{
		return 21;
	}
	if (are_strings_equal(sParam0, "M"))
	{
		return 22;
	}
	if (are_strings_equal(sParam0, "N"))
	{
		return 23;
	}
	if (are_strings_equal(sParam0, "O"))
	{
		return 24;
	}
	if (are_strings_equal(sParam0, "P"))
	{
		return 25;
	}
	if (are_strings_equal(sParam0, "Q"))
	{
		return 26;
	}
	if (are_strings_equal(sParam0, "R"))
	{
		return 27;
	}
	if (are_strings_equal(sParam0, "S"))
	{
		return 28;
	}
	if (are_strings_equal(sParam0, "T"))
	{
		return 29;
	}
	if (are_strings_equal(sParam0, "U"))
	{
		return 30;
	}
	if (are_strings_equal(sParam0, "V"))
	{
		return 31;
	}
	if (are_strings_equal(sParam0, "W"))
	{
		return 32;
	}
	if (are_strings_equal(sParam0, "X"))
	{
		return 33;
	}
	if (are_strings_equal(sParam0, "Y"))
	{
		return 34;
	}
	if (are_strings_equal(sParam0, "Z"))
	{
		return 35;
	}
	if (are_strings_equal(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(sVar0);
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(sVar0);
}

void func_82()
{
	cLocal_85 = {Global_15331.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_85, "LF", 24);
	if (does_text_label_exist(&cLocal_85))
	{
		sLocal_91 = _get_label_text(&cLocal_85);
		if (is_string_null(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = {Global_15331.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_73, "IF", 24);
	if (does_text_label_exist(&cLocal_73))
	{
		sLocal_79 = _get_text_substring(_get_label_text(&cLocal_73), 0, 1);
		if (is_string_null(sLocal_79))
		{
		}
		sLocal_80 = _get_text_substring(_get_label_text(&cLocal_73), 1, 2);
		if (is_string_null(sLocal_80))
		{
		}
		sLocal_81 = _get_text_substring(_get_label_text(&cLocal_73), 2, 3);
		if (is_string_null(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = {Global_15331.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_66, "SL", 24);
	if (does_text_label_exist(&cLocal_66))
	{
		sLocal_72 = _get_label_text(&cLocal_66);
		if (is_string_null(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	_0x0B568201DD99F0EB(uLocal_83);
	_0x61631F5DF50D1C34(uLocal_84);
	if (Global_16704)
	{
		preload_script_conversation(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
		iLocal_36 = get_game_timer();
	}
	else
	{
		start_script_conversation(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
	}
	Global_15712 = 4;
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar6;
	auto uVar7;
	auto uVar8;
	auto uVar9;
	auto uVar10;
	auto uVar11;
	auto uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (does_text_block_exist(&Global_15788))
	{
		if (are_strings_equal(&Global_15788, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (is_orbis_version() || is_durango_version())
		{
			if (Global_1572930 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_69489 || func_93())
		{
			if (Global_1572930 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_91())
		{
			iVar14 = 1;
		}
		if (((((((are_strings_equal(&Global_15788, "APCUTAU") || are_strings_equal(&Global_15788, "APAIR")) || are_strings_equal(&Global_15788, "APCALAU")) || are_strings_equal(&Global_15788, "PBPAU")) || are_strings_equal(&Global_15788, "EXPOWAU")) || are_strings_equal(&Global_15788, "EXCALAU")) || are_strings_equal(&Global_15788, "EXCPAAU")) || are_strings_equal(&Global_15788, "EXHELAU"))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15714 < 5 || Global_15714 == 10) || Global_15714 == 12) || Global_15714 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				request_additional_text(&Global_15788, 7);
				while (!has_additional_text_loaded(7))
				{
					wait(0);
				}
			}
			else
			{
				_request_additional_text_2(&Global_15788, 14);
				while (!has_additional_text_loaded(14))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			request_additional_text(&Global_15788, 6);
			while (!has_additional_text_loaded(6))
			{
				wait(0);
			}
		}
		else
		{
			_request_additional_text_2(&Global_15788, 13);
			while (!has_additional_text_loaded(13))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	create_new_scripted_conversation();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16722 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = {Global_15331};
		StringConCat(&cLocal_44, "A", 24);
		Global_14580[iVar2 /*6*/] = {Global_15331};
		StringConCat(&(Global_14580[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14580[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = {Global_14580[iVar2 /*6*/]};
		StringConCat(&cLocal_38, "A", 24);
		if (does_text_label_exist(&cLocal_38))
		{
			StringCopy(&cLocal_50, _get_label_text(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_2563585 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_82 = func_77();
			uLocal_83 = func_76();
			uLocal_84 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (does_text_label_exist(&(Global_14580[iVar2 /*6*/])))
			{
				if (Global_16702 == 0 && Global_16708 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					add_line_to_conversation(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (are_strings_equal(&(Global_14580[iVar2 /*6*/]), &Global_16710))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					add_line_to_conversation(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16722 = iVar2;
					if (Global_16708 == 1)
					{
						Global_16708 = 0;
					}
				}
			}
			else if (Global_16708 == 0 && Global_16702 == 0)
			{
				add_line_to_conversation(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 += iVar0;
		}
		else
		{
			if (does_text_label_exist(&cLocal_44))
			{
				StringCopy(&cLocal_50, _get_label_text(&cLocal_44), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				add_line_to_conversation(iVar3, &cLocal_50, &Global_15331, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15001[iVar0 /*10*/].f_7 == 1)
		{
			if (does_entity_exist(Global_15001[iVar0 /*10*/]) || Global_15001[iVar0 /*10*/] == 0)
			{
				add_ped_to_conversation(iVar0, Global_15001[iVar0 /*10*/], &(Global_15001[iVar0 /*10*/].f_1));
			}
			if (Global_15001.f_161 == iVar0)
			{
				if ((Global_15001.f_162 != 0f && Global_15001.f_162.f_1 != 0f) && Global_15001.f_162.f_2 != 0f)
				{
					wait(0);
					_0x33E3C6C6F2F0B506(Global_15001.f_161, Global_15001.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2563585 == 1)
	{
		Global_2563585 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_2563404[iVar0 /*9*/].f_7 == 1)
			{
				if (does_entity_exist(Global_2563404[iVar0 /*9*/]) || Global_2563404[iVar0 /*9*/] == 0)
				{
					add_ped_to_conversation(Global_2563404[iVar0 /*9*/].f_8, Global_2563404[iVar0 /*9*/], &(Global_2563404[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_85 = {Global_15331};
	StringConCat(&cLocal_85, "LF", 24);
	if (does_text_label_exist(&cLocal_85))
	{
		sLocal_91 = _get_label_text(&cLocal_85);
		if (is_string_null(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = {Global_15331};
	StringConCat(&cLocal_73, "IF", 24);
	if (does_text_label_exist(&cLocal_73))
	{
		sLocal_79 = _get_text_substring(_get_label_text(&cLocal_73), 0, 1);
		if (is_string_null(sLocal_79))
		{
		}
		sLocal_80 = _get_text_substring(_get_label_text(&cLocal_73), 1, 2);
		if (is_string_null(sLocal_80))
		{
		}
		sLocal_81 = _get_text_substring(_get_label_text(&cLocal_73), 2, 3);
		if (is_string_null(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = {Global_15331};
	StringConCat(&cLocal_66, "SL", 24);
	if (does_text_label_exist(&cLocal_66))
	{
		sLocal_72 = _get_label_text(&cLocal_66);
		if (is_string_null(sLocal_72))
		{
		}
	}
}

bool func_91()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_92(0))
			{
				return true;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_92(0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_92(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

auto func_93()
{
	return Global_1315888;
}

void func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (is_orbis_version() || is_durango_version())
	{
		if (Global_1572930 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_69489)
	{
		if (Global_1572930 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_91())
	{
		iVar1 = 1;
	}
	if (does_text_block_exist(&Global_15788))
	{
		if (are_strings_equal(&Global_15788, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if ((((((are_strings_equal(&Global_15788, "APCUTAU") || are_strings_equal(&Global_15788, "APAIR")) || are_strings_equal(&Global_15788, "APCALAU")) || are_strings_equal(&Global_15788, "PBPAU")) || are_strings_equal(&Global_15788, "EXPOWAU")) || are_strings_equal(&Global_15788, "EXPOWAU")) || are_strings_equal(&Global_15788, "EXHELAU"))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15714 < 5 || Global_15714 == 10) || Global_15714 == 12) || Global_15714 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			request_additional_text(&Global_15788, 7);
			while (!has_additional_text_loaded(7))
			{
				wait(0);
			}
		}
		else
		{
			_request_additional_text_2(&Global_15788, 14);
			while (!has_additional_text_loaded(14))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		request_additional_text(&Global_15788, 6);
		while (!has_additional_text_loaded(6))
		{
			wait(0);
		}
	}
	else
	{
		_request_additional_text_2(&Global_15788, 13);
		while (!has_additional_text_loaded(13))
		{
			wait(0);
		}
	}
	create_new_scripted_conversation();
	func_87();
}

void func_95()
{
	while (Global_14396 == 1 && _get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_14396 = 0;
	if (is_bit_set(Global_2283, 20))
	{
		set_bit(&Global_2284, true);
	}
	else
	{
		clear_bit(&Global_2284, true);
	}
	Global_14397 = 0;
	if (Global_15708 == 0)
	{
		if (!Global_15725)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14579 = 0;
	if (Global_15722)
	{
		if (Global_16729 == 0)
		{
			if (Global_15725 == 0)
			{
				iLocal_34 = 5000;
				preload_script_phone_conversation(Global_15331.f_368, Global_15331.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14579 = 1;
		settimerb(0);
		while ((Global_14579 == 1 && Global_15712 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!is_player_playing(player_id()))
			{
				Global_14579 = 0;
				stop_scripted_conversation(false);
				Global_15712 = 6;
			}
			if (is_mobile_phone_call_ongoing())
			{
				if (_0xE73364DB90778FFA())
				{
					Global_14579 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_15712 != 1)
		{
		}
		if (Global_14579 == 0)
		{
		}
	}
	Global_14579 = 0;
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 0) || Global_15712 != 1) || Global_14379 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
	else
	{
		if (Global_15720)
		{
			Global_16730 = 0;
			iLocal_32 = 0;
		}
		if (Global_15722 == 0)
		{
			if (Global_15763 == 0)
			{
				Global_14415 = Global_14413.f_1;
				Global_15763 = 1;
			}
			iLocal_30 = 0;
			if (Global_16729 == 0)
			{
				preload_script_phone_conversation(Global_15331.f_368, Global_15331.f_369);
				wait(0);
				Global_15712 = 3;
				Global_14579 = 1;
				settimerb(0);
				set_bit(&Global_2283, 27);
				settimera(0);
			}
			else
			{
				Global_14579 = 0;
				Global_15712 = 4;
			}
			Global_14412 = 0;
			if (Global_15723 == 1)
			{
				if (Global_14413.f_1 == 10)
				{
				}
				if (!Global_14413.f_1 == 9)
				{
					if (Global_14413.f_1 > 4)
					{
						if (Global_14396 == 0)
						{
							Global_14413.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14413.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14413.f_1 == 4)
				{
					wait(0);
					if (Global_14579 == 1)
					{
						if (is_mobile_phone_call_ongoing())
						{
							if (_0xE73364DB90778FFA())
							{
								Global_14579 = 0;
							}
						}
					}
				}
				if (Global_14413.f_1 == 6)
				{
				}
				if (Global_14413.f_1 == 10)
				{
				}
				if (Global_14413.f_1 == 3)
				{
					stop_scripted_conversation(false);
					Global_15712 = 6;
					Global_14397 = 1;
					return;
				}
				Global_14413.f_1 = 9;
				func_8();
			}
			if (network_is_game_in_progress())
			{
				iLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = get_game_timer();
			}
			while (Global_14413.f_1 != 9 && Global_14396 == 0)
			{
				wait(0);
				if (Global_14579 == 1)
				{
					if (is_mobile_phone_call_ongoing())
					{
						if (_0xE73364DB90778FFA())
						{
							Global_14579 = 0;
						}
					}
				}
				if (network_is_game_in_progress())
				{
					iLocal_108 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_101);
				}
				else
				{
					iLocal_100 = get_game_timer();
					iLocal_108 = iLocal_100 - iLocal_99;
				}
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16728 = 1;
						Global_14396 = 1;
					}
				}
			}
			if (!is_bit_set(Global_2283, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14396 == 0)
			{
				if (!Global_16729 == 0)
				{
					Global_15769 = 0;
					func_60();
					func_59();
					if (!Global_15725)
					{
						if (Global_16729 == 0)
						{
							start_preloaded_conversation();
						}
						else
						{
							start_script_phone_conversation(Global_15331.f_368, Global_15331.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_96();
				Global_14397 = 1;
			}
		}
		else
		{
			Global_14412 = 1;
			if (!is_entity_dead(player_ped_id(), 0))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (Global_14413.f_1 == 3)
					{
					}
				}
				else
				{
					clear_bit(&Global_2284, 21);
				}
			}
			if (Global_15763 == 0)
			{
				Global_14415 = Global_14413.f_1;
				Global_15763 = 1;
			}
			if (Global_14413.f_1 == 3)
			{
				Global_14413.f_1 = 4;
			}
			else
			{
				while (Global_14413.f_1 == 4)
				{
					wait(0);
				}
				if (Global_14413.f_1 == 6)
				{
				}
				Global_14413.f_1 = 9;
				func_8();
			}
			if (network_is_game_in_progress())
			{
				iLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = get_game_timer();
			}
			while (Global_14413.f_1 != 9 && Global_14396 == 0)
			{
				wait(0);
				if (network_is_game_in_progress())
				{
					iLocal_108 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_101);
				}
				else
				{
					iLocal_100 = get_game_timer();
					iLocal_108 = iLocal_100 - iLocal_99;
				}
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16728 = 1;
						Global_14396 = 1;
						clear_bit(&Global_2284, 21);
					}
				}
			}
			if (Global_14396 == 0)
			{
				Global_15712 = 2;
			}
			else
			{
				func_96();
				Global_14397 = 1;
			}
			if (network_is_game_in_progress())
			{
				iLocal_95 = NETWORK::GET_NETWORK_TIME();
				iLocal_98 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_93 = get_game_timer();
				iLocal_96 = get_game_timer();
			}
		}
	}
}

void func_96()
{
	Global_14578 = 0;
	func_101();
}

void func_97()
{
	float fVar0;
	
	fVar0 = func_98(Global_14366[Global_14358 /*3*/], Global_14359[Global_14358 /*3*/], Global_14373, Global_14344, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16726 == 0)
		{
			display_radar(true);
		}
		iLocal_32 = 0;
	}
}

float func_98(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, float fParam4, int iParam5)
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
	if (func_44() && Global_2563612 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = get_game_timer();
	}
	fVar3 = func_100(to_float(get_game_timer() - iLocal_18) / fParam12, 0f, 1f);
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
		Global_14341 = {func_99(vParam0, vParam3, fVar4)};
		Global_14344 = {func_99(vParam6, vParam9, fVar4)};
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

Vector3 func_99(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_100(float fParam0, float fParam1, float fParam2)
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

void func_101()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

int func_102(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_103(sParam2, iParam3, 0);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_101();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_34(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_33();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_27();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_26())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_25())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_24();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_48();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_101();
	}
	return false;
}

bool func_104()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_105(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

