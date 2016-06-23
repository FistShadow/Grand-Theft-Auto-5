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
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 8;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 2;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 8;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 8;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	float fLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	auto uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<4> Local_99 = 0;
	struct<16> Local_103 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
#endregion

void main()
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
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) > 1)
	{
		terminate_this_thread();
	}
	network_set_script_is_safe_for_network_game();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_36605 = 0;
	func_32();
	StringCopy(&Global_36606, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = false;
	iVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_69489;
	while (true)
	{
		if (Global_69489)
		{
			func_29();
		}
		else
		{
			func_27();
		}
		func_21();
		if (Global_69489 != iVar8)
		{
			func_20();
			func_32();
			iVar2 = -1;
			iVar8 = Global_69489;
			while (is_player_switch_in_progress())
			{
				wait(2000);
			}
		}
		if (Global_36611)
		{
			if (Global_36613 > -1)
			{
				if (!Global_36411[Global_36613 /*32*/].f_6)
				{
					if (!func_18(Global_36613, 1))
					{
						Global_36613 = -1;
					}
				}
			}
		}
		if (func_14())
		{
			iVar2 = -1;
			func_20();
		}
		if (iVar2 > -1)
		{
			if (!Global_36611)
			{
				if (Global_36613 != iVar2)
				{
					if (func_13(Global_36613))
					{
						func_20();
						if (!Global_36411[iVar2 /*32*/].f_5 && Global_36411[iVar2 /*32*/])
						{
							if (!func_14())
							{
								if (!Global_36411[iVar2 /*32*/].f_7)
								{
									if (!Global_36411[iVar2 /*32*/].f_6)
									{
										if (!Global_36411[iVar2 /*32*/].f_12)
										{
											func_12(Global_36411[iVar2 /*32*/].f_8, Global_36411[iVar2 /*32*/].f_3);
										}
										else
										{
											func_11(Global_36411[iVar2 /*32*/].f_8, Global_36411[iVar2 /*32*/].f_13, Global_36411[iVar2 /*32*/].f_3, Global_36411[iVar2 /*32*/].f_30);
										}
										Global_36613 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_20();
			}
		}
		else
		{
			func_20();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_10();
				if (is_control_released(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_14())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (is_control_just_pressed(2, 51))
						{
							Global_36411[iVar2 /*32*/].f_4 = 1;
							Global_36411[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36411[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_36604 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!is_ped_dead_or_dying(get_player_ped(get_player_index()), 1))
						{
							if (is_ped_in_any_vehicle(get_player_ped(get_player_index()), 0))
							{
								if (is_control_enabled(0, 101))
								{
									iVar5 = true;
									CONTROLS::DISABLE_CONTROL_ACTION(0, 101, 1);
								}
								if (is_control_enabled(0, 74))
								{
									iVar4 = true;
									CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (iVar5)
						{
							enable_control_action(0, 101, 1);
							iVar5 = false;
						}
						if (iVar4)
						{
							enable_control_action(0, 74, 1);
							iVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_9() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_36411[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_8(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36411[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36411[iVar2 /*32*/].f_7 || Global_36411[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_36604)
				{
					func_20();
				}
				if (is_control_just_pressed(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36411[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_36605)
				{
					Global_36605 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36411[iVar2 /*32*/].f_4 || Global_36411[iVar2 /*32*/].f_7))
					{
						Global_36605 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36411[iVar2 /*32*/].f_7 || Global_36411[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 46, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_7();
		func_5(&iVar2);
		Global_36610 = 0;
		Global_36611 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!iLocal_96)
	{
		return;
	}
	iVar0 = true;
	if (iLocal_119 == 1)
	{
		iVar0 = false;
	}
	if (iLocal_97)
	{
		if (iLocal_98)
		{
			add_next_message_to_previous_briefs(0);
		}
		_set_text_component_format(&Local_99);
		if (iLocal_98)
		{
			add_text_component_substring_player_name(&Local_103);
		}
		else
		{
			_add_text_component_item_string(&Global_36606);
			_add_text_component_item_string(&Local_103);
		}
		_display_help_text_from_string_label(0, 0, iVar0, 50);
	}
	else
	{
		_set_text_component_format(&Local_99);
		_add_text_component_item_string(&Global_36606);
		_display_help_text_from_string_label(0, 0, iVar0, 50);
	}
	switch (iLocal_119)
	{
		case 0:
			break;
		
		case 1:
			func_4(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	if (iParam0 && !func_3())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

int func_3()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_4(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_5(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] && Global_36411[iVar0 /*32*/].f_4)
		{
			if (Global_36411[iVar0 /*32*/].f_31 != 0)
			{
				if (!is_thread_active(Global_36411[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_6();
					}
					Global_36411[iVar0 /*32*/] = 0;
					Global_36411[iVar0 /*32*/].f_31 = 0;
					Global_36411[iVar0 /*32*/] = 0;
					Global_36411[iVar0 /*32*/].f_4 = 0;
					Global_36411[iVar0 /*32*/].f_5 = 0;
					Global_36411[iVar0 /*32*/].f_2 = 0;
					Global_36411[iVar0 /*32*/].f_7 = 0;
					Global_36411[iVar0 /*32*/].f_6 = 0;
					Global_36411[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_6()
{
	if (Global_36613 != -1 || iLocal_96)
	{
		iLocal_96 = false;
		Global_36613 = -1;
	}
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_36613)
			{
				func_20();
			}
			Global_36411[iVar0 /*32*/].f_31 = 0;
			Global_36411[iVar0 /*32*/] = 0;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = 0;
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_6 = 0;
			Global_36411[iVar0 /*32*/].f_1 = -1;
			Global_36411[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

bool func_8(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (Global_36411[iParam0 /*32*/].f_5)
	{
		return true;
	}
	return false;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1)
		{
			if (Global_36411[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_20();
	}
	return iVar1;
}

int func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			if (Global_36411[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36411[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_11(struct<4> Param0, struct<16> Param1, auto uParam2, auto uParam3)
{
	Local_99 = {Param0};
	Local_103 = {Param4};
	iLocal_96 = true;
	iLocal_97 = true;
	iLocal_119 = uParam20;
	iLocal_98 = uParam21;
}

void func_12(struct<4> Param0, auto uParam1)
{
	Local_99 = {Param0};
	iLocal_96 = true;
	iLocal_97 = false;
	iLocal_119 = uParam4;
}

bool func_13(int iParam0)
{
	int iVar0;
	
	if (Global_88540 && Global_88539)
	{
		return false;
	}
	if (iParam0 > 0)
	{
		if (func_18(iParam0, 1) || iLocal_96)
		{
			return true;
		}
	}
	if (is_help_message_being_displayed() && !_0x214CD562A939246A())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_18(iVar0, 1))
			{
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return true;
}

bool func_14()
{
	if (Global_68058)
	{
		return true;
	}
	if (!is_player_playing(get_player_index()))
	{
		return true;
	}
	if (func_17(0))
	{
		return true;
	}
	if (is_cutscene_playing())
	{
		return true;
	}
	if (Global_36610)
	{
		return true;
	}
	if (is_hud_component_active(19))
	{
		return true;
	}
	if (func_16(1))
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return true;
	}
	if (func_15(8, -1))
	{
		return true;
	}
	return false;
}

int func_15(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

int func_16(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_19(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36411[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36411[iVar0 /*32*/].f_12)
	{
		_0x0A24DA3A41B718F5(&(Global_36411[iVar0 /*32*/].f_8));
		_add_text_component_item_string(&Global_36606);
		iVar1 = _0x10BDDBFC529428DD(0);
	}
	else
	{
		_0x0A24DA3A41B718F5(&(Global_36411[iVar0 /*32*/].f_8));
		_add_text_component_item_string(&Global_36606);
		if (Global_36411[iVar0 /*32*/].f_30)
		{
			add_text_component_substring_player_name(&(Global_36411[iVar0 /*32*/].f_13));
		}
		else
		{
			_add_text_component_item_string(&(Global_36411[iVar0 /*32*/].f_13));
		}
		iVar1 = _0x10BDDBFC529428DD(0);
	}
	return iVar1;
}

int func_19(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_20()
{
	func_6();
	Global_36613 = -1;
}

void func_21()
{
	if (!is_player_switch_in_progress() && !Global_68058)
	{
		if (func_26(0))
		{
			if (!is_string_null_or_empty(&(Global_2434762.f_658.f_12)))
			{
				func_25();
				func_22(6, 0);
			}
		}
	}
}

void func_22(int iParam0, int iParam1)
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
	if (Global_69489 && func_24())
	{
		return;
	}
	if (!Global_69489 && func_23())
	{
		return;
	}
	if (!iParam1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			SCRIPT::REQUEST_SCRIPT("appInternet");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			wait(0);
		}
		SYSTEM::START_NEW_SCRIPT("appInternet", 4092);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			wait(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4092);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
}

auto func_23()
{
	return Global_68059;
}

auto func_24()
{
	return Global_1715861;
}

void func_25()
{
	Global_2434762.f_658.f_28 = 0;
}

int func_26(int iParam0)
{
	if (iParam0)
	{
		return (Global_2434762.f_658.f_28 && get_hash_key(get_this_script_name()) == Global_2434762.f_658.f_31);
	}
	return Global_2434762.f_658.f_28;
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_52923[iVar1] < 0)
		{
			Global_52923[iVar1] = 0;
			iVar0 = true;
		}
		iVar1++;
	}
	if (iVar0)
	{
		func_28(0);
		func_28(1);
		func_28(2);
	}
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_29()
{
	struct<13> Var0;
	
	if (Global_1572890 != -1)
	{
		Var0 = Global_1572891[0];
		Var0.f_1 = Global_1572891[1];
		Var0.f_2 = Global_1572891[2];
		Var0.f_3 = Global_1572891[3];
		Var0.f_4 = Global_1572891[4];
		Var0.f_5 = Global_1572891[5];
		Var0.f_6 = Global_1572891[6];
		Var0.f_7 = Global_1572891[7];
		Var0.f_8 = Global_1572891[8];
		Var0.f_9 = Global_1572891[9];
		Var0.f_10 = Global_1572891[10];
		Var0.f_11 = Global_1572891[11];
		Var0.f_12 = Global_1572891[12];
		if (is_xbox360_version() || is_durango_version())
		{
			if (!iLocal_120)
			{
				if (network_gamertag_from_handle_start(&Var0))
				{
					iLocal_120 = 1;
				}
			}
			if (iLocal_120)
			{
				if (network_gamertag_from_handle_pending())
				{
				}
				else
				{
					if (network_gamertag_from_handle_succeeded())
					{
						StringCopy(&(Global_2097152[func_31() /*10375*/].f_10198.f_18[Global_1572890 /*6*/]), network_get_gamertag_from_handle(&Var0), 24);
					}
					Global_1572890 = -1;
					iLocal_120 = 0;
				}
			}
		}
		else if (is_ps3_version() || is_orbis_version())
		{
			if (func_30(Var0))
			{
				StringCopy(&(Global_2097152[func_31() /*10375*/].f_10198.f_18[Global_1572890 /*6*/]), network_get_gamertag_from_handle(&Var0), 24);
			}
			Global_1572890 = -1;
			iLocal_120 = 0;
		}
		else
		{
			if (func_30(Var0))
			{
				StringCopy(&(Global_2097152[func_31() /*10375*/].f_10198.f_18[Global_1572890 /*6*/]), network_member_id_from_gamer_handle(&Var0), 24);
			}
			Global_1572890 = -1;
			iLocal_120 = 0;
		}
	}
}

int func_30(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_32()
{
	int iVar0;
	
	Global_36604 = 0;
	Global_36610 = 0;
	Global_36611 = 0;
	Global_36612 = 1;
	Global_36613 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36411[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

