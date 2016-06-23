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
	int iLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
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
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
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
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_50 = 3;
	network_set_script_is_safe_for_network_game();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		terminate_this_thread();
	}
	while (true)
	{
		func_100();
		switch (iLocal_51)
		{
			case 0:
				func_95();
				break;
			
			case 1:
				func_86();
				func_2();
				Global_88895 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		wait(false);
	}
}

void func_1()
{
	iLocal_51 = 0;
}

void func_2()
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iLocal_57)
	{
		iLocal_57 = 0;
	}
	else
	{
		iLocal_52++;
	}
	iLocal_56 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_82();
	}
	if (iVar0 != iLocal_55)
	{
		iLocal_55 = iVar0;
		iLocal_56 = true;
		iLocal_63 = 0;
		iLocal_64 = 0;
		iLocal_71 = 0;
		iLocal_77 = 0;
	}
	if (iLocal_55 == 145)
	{
		return;
	}
	iVar1 = false;
	if ((iLocal_52 == 6 && func_81(64)) || (iLocal_52 == 5 && _get_number_of_instances_of_streamed_script(joaat("pilot_school")) > 0))
	{
		iVar1 = true;
		iLocal_57 = 1;
	}
	func_75();
	if (Global_88893 || (Global_88894 && !func_72(0)))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_71(iLocal_55, iVar2);
				iVar2++;
			}
			Global_88893 = 0;
		}
	}
	if (!iVar1)
	{
		if (((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_70(iLocal_55))) || is_player_switch_in_progress()) || func_69()) || is_cutscene_playing()) || is_screen_faded_out()) || !is_player_control_on(player_id())) || Global_69487) || Global_88895) || iLocal_58)
		{
			iLocal_79 = 1;
			iLocal_80 = GAMEPLAY::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_81 = NETWORK::GET_NETWORK_TIME();
			}
			return;
		}
		if (iLocal_79)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_80 > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_81, 3000))))
			{
				iLocal_79 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_53 > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_54, 2000)))) || iLocal_56)
	{
		if (iLocal_52 >= 8)
		{
			iLocal_52 = 0;
			iLocal_53 = GAMEPLAY::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_54 = NETWORK::GET_NETWORK_TIME();
			}
		}
		iVar11 = 1;
		if (iLocal_56)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = true;
			if (iLocal_56)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_52;
			}
			func_68(iLocal_55, iVar8, &iVar6, &iVar7);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_101154.f_1826.f_539.f_1615[iLocal_55];
			}
			else
			{
				STATS::STAT_GET_INT(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_55, iVar8, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_52(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_101154.f_1826.f_539.f_1615[iLocal_55] == 0)
					{
						iVar13 = false;
					}
					Global_101154.f_1826.f_539.f_1615[iLocal_55] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_55, iVar8, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					else if ((!Global_101154.f_7775 && !func_49(0)) || !GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_2[27 /*3*/], 2))
					{
						iVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = iVar14 - iVar14 % func_48(iLocal_55, iVar8);
					if (iVar14 % func_48(iLocal_55, iVar8) >= 0)
					{
						iVar15 += func_48(iLocal_55, iVar8);
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = iVar15 - func_48(iLocal_55, iVar8);
					}
					if (iVar4 > iVar14)
					{
						iVar13 = false;
					}
					if (func_42())
					{
						iVar13 = false;
					}
					if (iVar13)
					{
						if (!iLocal_56)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_41(117, -1) == 0)
								{
									if (!is_help_message_being_displayed() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_58 = 1;
							iLocal_61 = iVar4 - iVar3;
							iLocal_61 += iVar3 % func_48(iLocal_55, iVar8);
							iLocal_62 = iVar4;
							iLocal_59 = iLocal_55;
							iLocal_60 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_55, iVar8, &iVar9))
						{
							if (iLocal_55 == 0)
							{
								STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 1)
							{
								STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 2)
							{
								STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 3)
							{
							}
						}
					}
				}
				func_71(iLocal_55, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				iVar16 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_52(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_101154.f_1826.f_539.f_1615[iLocal_55] = iVar4;
					iVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, 1);
				}
				if (iVar16)
				{
					func_71(iLocal_55, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_57 = 1;
	}
}

int func_3(int iParam0, int iParam1, auto uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

int func_5(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

auto func_6()
{
	return Global_1312747;
}

bool func_7()
{
	return true;
	return false;
}

void func_8(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_9()
{
	if (is_hud_hidden() && is_radar_hidden())
	{
		return false;
	}
	if (Global_1715540 == 1)
	{
		return false;
	}
	if (Global_1715399 == 1)
	{
		return false;
	}
	if (_0x2272B0A1343129F4())
	{
		return false;
	}
	if (Global_1573824 == 1)
	{
		return false;
	}
	if (is_stunt_jump_in_progress())
	{
		return false;
	}
	if (Global_978144)
	{
		return false;
	}
	if (Global_1587523[player_id() /*444*/].f_364 == 1)
	{
		return false;
	}
	if (func_40())
	{
		return false;
	}
	if (func_39())
	{
		return false;
	}
	if (func_38())
	{
		if (!func_39())
		{
			if (!func_37(3, -1))
			{
				if (func_35(&Global_2445516, 300000, 0) == 1)
				{
					func_34(&Global_2445514);
					func_32(3, -1);
				}
				else if (func_35(&Global_2445514, 7000, 0) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (func_31())
	{
		return false;
	}
	if (func_30())
	{
		return false;
	}
	if (func_28())
	{
		return false;
	}
	if (func_27())
	{
		return false;
	}
	if (func_26())
	{
		return false;
	}
	if (func_25())
	{
		return false;
	}
	if (network_is_in_mp_cutscene())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_first_person_aim_cam_active())
	{
		if (func_24(PLAYER::PLAYER_PED_ID()) == joaat("weapon_sniperrifle") || func_24(PLAYER::PLAYER_PED_ID()) == joaat("weapon_heavysniper"))
		{
			return false;
		}
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (func_23(8, -1))
	{
		return false;
	}
	if (func_22(12, -1))
	{
		return false;
	}
	if (is_hud_component_active(19))
	{
		return false;
	}
	if (func_21())
	{
		return false;
	}
	if (func_20())
	{
		return false;
	}
	if (Global_1587523[player_id() /*444*/].f_35)
	{
		return false;
	}
	if (Global_1573691)
	{
		return false;
	}
	if (Global_1573695)
	{
		return false;
	}
	if (Global_1573697)
	{
		return false;
	}
	if (Global_2428492.f_3321.f_39)
	{
		return false;
	}
	if (func_19(0))
	{
		return false;
	}
	if (func_18())
	{
		return false;
	}
	if (Global_2460486.f_3826)
	{
		return false;
	}
	if (Global_2428492.f_3187)
	{
		return false;
	}
	if (!func_17(player_id(), 1, 0))
	{
		return false;
	}
	if (func_16(player_id()))
	{
		return false;
	}
	if (Global_2428492.f_3321.f_39 == 1)
	{
		return false;
	}
	if (Global_2435528.f_2842.f_25 == 1)
	{
		return false;
	}
	if (func_15(1))
	{
		return false;
	}
	if (func_13())
	{
		return false;
	}
	if (is_hud_component_active(16))
	{
		return false;
	}
	if (func_12())
	{
		return false;
	}
	if (func_11())
	{
		return false;
	}
	if (is_help_message_on_screen())
	{
		if (func_10("FHU_HELP3"))
		{
			return false;
		}
	}
	if (Global_1587523[player_id() /*444*/].f_347)
	{
		return false;
	}
	return true;
}

int func_10(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

int func_11()
{
	return Global_2428492.f_1358.f_688 != 0;
}

auto func_12()
{
	return Global_2428492.f_2462.f_585;
}

int func_13()
{
	return func_14();
}

int func_14()
{
	return Global_1332285.f_40 == 3;
}

int func_15(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_16(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1609227[iParam0 /*34*/].f_12, false);
}

bool func_17(int iParam0, int iParam1, int iParam2)
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

bool func_18()
{
	if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) > 0)
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
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

auto func_20()
{
	return Global_1338622.f_112;
}

int func_21()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

bool func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1338622.f_137[iParam1])
				{
					return true;
				}
				if (Global_1338622.f_170[iParam1])
				{
					return true;
				}
			}
			break;
		
		default:
			if (GAMEPLAY::IS_BIT_SET(Global_1338622.f_947, iParam0))
			{
				return true;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1338622.f_948, iParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_23(int iParam0, int iParam1)
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

auto func_24(int iParam0)
{
	auto uVar0;
	
	get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

auto func_25()
{
	return Global_2434762.f_568;
}

int func_26()
{
	return GAMEPLAY::IS_BIT_SET(Global_969327.f_8, 13);
}

auto func_27()
{
	return Global_2434762.f_567;
}

bool func_28()
{
	if (func_29() == 1 || func_29() == 4)
	{
		return true;
	}
	return false;
}

auto func_29()
{
	return Global_1312466.f_18;
}

bool func_30()
{
	if (func_29() == 3 || func_29() == 2)
	{
		return true;
	}
	return false;
}

bool func_31()
{
	if (_get_number_of_instances_of_streamed_script(joaat("maintransition")) > 0)
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1347635 = 0;
	if (_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			_0x0D01D20616FC73FB(false, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = get_profile_setting(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = get_profile_setting(iVar1);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iParam0);
				_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_52(1296, 0, iParam1, 1);
			break;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_34(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_35(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_36(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_34(uParam0);
		return true;
	}
	return false;
}

void func_36(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	iVar1 = get_profile_setting(iVar0);
	return GAMEPLAY::IS_BIT_SET(iVar1, iParam0);
}

bool func_38()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

auto func_39()
{
	return Global_1315913;
}

int func_40()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_5(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_42()
{
	if (!func_46(1))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	return Global_1727387;
}

int func_43()
{
	return func_44(player_id());
}

int func_44(int iParam0)
{
	if (iParam0 != func_45())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_45())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_45()
{
	return -1;
}

int func_46(int iParam0)
{
	return func_47(player_id(), iParam0);
}

int func_47(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_44(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_45();
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_49(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_51(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_67(1217, iParam2, 0);
					break;
				
				case 3:
					return func_67(1223, iParam2, 0);
					break;
				
				case 2:
					return func_67(1219, iParam2, 0);
					break;
				
				case 4:
					return func_67(1222, iParam2, 0);
					break;
				
				case 5:
					return func_67(1221, iParam2, 0);
					break;
				
				case 6:
					return func_67(1218, iParam2, 0);
					break;
				
				case 7:
					return func_67(1220, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

bool func_53(int iParam0, int iParam1, int iParam2, auto uParam3)
{
	*uParam3 = func_54(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return true;
	}
	return false;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 fVar0;
	float fVar1;
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
	float fVar12;
	
	iVar2 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_67(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				stat_get_float(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1583[iParam0] / 175f;
			}
			else if (iParam0 == 1)
			{
				stat_get_float(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1583[iParam0] / 175f;
			}
			else if (iParam0 == 2)
			{
				stat_get_float(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1583[iParam0] / 175f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = func_65(20, iParam3) / 175f;
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 += to_float(func_61(joaat("sp0_time_swimming")));
			}
			else if (iParam0 == 1)
			{
				fVar0 += to_float(func_61(joaat("sp1_time_swimming")));
			}
			else if (iParam0 == 2)
			{
				fVar0 += to_float(func_61(joaat("sp2_time_swimming")));
			}
			else if (iParam0 == 3)
			{
				fVar0 += to_float(func_61(func_60(50, iParam3)));
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 += to_float(func_61(joaat("sp0_time_driving_bicycle")));
			}
			else if (iParam0 == 1)
			{
				fVar0 += to_float(func_61(joaat("sp1_time_driving_bicycle")));
			}
			else if (iParam0 == 2)
			{
				fVar0 += to_float(func_61(joaat("sp2_time_driving_bicycle")));
			}
			else if (iParam0 == 3)
			{
				fVar0 += to_float(func_61(func_60(47, iParam3)));
				func_62(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 *= 0.25f;
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = to_float(func_59(joaat("sp0_time_underwater"))) / 30f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = to_float(func_59(joaat("sp1_time_underwater"))) / 30f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = to_float(func_59(joaat("sp2_time_underwater"))) / 30f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_59(func_60(52, iParam3))) / 30f;
				func_62(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = to_float(iVar3 - Global_101154.f_1826.f_539.f_1587[iParam0]) / 20f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = to_float(iVar3 - Global_101154.f_1826.f_539.f_1587[iParam0]) / 20f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = to_float(iVar3 - Global_101154.f_1826.f_539.f_1587[iParam0]) / 20f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_67(1492, iParam3, 0)) / 20f;
				func_62(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1591[iParam0]) / 50f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1591[iParam0]) / 50f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1591[iParam0]) / 50f;
			}
			else if (iParam0 == 3)
			{
				fVar0 += IntToFloat(func_67(105, iParam3, 0) / 50);
				func_62(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = to_float(func_61(joaat("sp0_time_driving_plane"))) / 10f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = to_float(func_61(joaat("sp1_time_driving_plane"))) / 10f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = to_float(func_61(joaat("sp2_time_driving_plane"))) / 10f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_61(func_60(43, iParam3))) / 10f;
			}
			if (iParam0 == 0)
			{
				fVar0 += to_float(func_61(joaat("sp0_time_driving_heli"))) / 10f;
			}
			else if (iParam0 == 1)
			{
				fVar0 += to_float(func_61(joaat("sp1_time_driving_heli"))) / 10f;
			}
			else if (iParam0 == 2)
			{
				fVar0 += to_float(func_61(joaat("sp2_time_driving_heli"))) / 10f;
			}
			else if (iParam0 == 3)
			{
				fVar0 += to_float(func_61(func_60(45, iParam3))) / 10f;
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 += to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 += to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 += to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 += IntToFloat(func_67(61, iParam3, 0));
				func_62(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_58(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 += 10f;
					}
					else if (iVar4 == 2)
					{
						fVar0 += 7f;
					}
					else if (iVar4 == 1)
					{
						fVar0 += 5f;
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 += 10f;
					}
					else if (iVar4 == 2)
					{
						fVar0 += 7f;
					}
					else if (iVar4 == 1)
					{
						fVar0 += 5f;
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 += 5f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 3f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 2f;
				}
				iVar4 = func_58(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
				iVar4 = func_58(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 += 12f;
				}
				else if (iVar4 == 2)
				{
					fVar0 += 9f;
				}
				else if (iVar4 == 1)
				{
					fVar0 += 7f;
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				stat_get_float(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1595[iParam0] / 45f;
			}
			else if (iParam0 == 1)
			{
				stat_get_float(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1595[iParam0] / 45f;
			}
			else if (iParam0 == 2)
			{
				stat_get_float(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = fVar1 - Global_101154.f_1826.f_539.f_1595[iParam0] / 45f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = func_65(19, iParam3) / 45f;
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1599[iParam0]) / 2f * 1.5f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1599[iParam0]) / 2f * 1.5f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 += to_float(iVar3 - Global_101154.f_1826.f_539.f_1599[iParam0]) / 2f * 1.5f;
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_67(34, iParam3, 0);
				fVar0 += to_float(iVar3) / 2f * 1.5f;
				func_62(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 -= iVar5;
				fVar0 = to_float(iVar5 - Global_101154.f_1826.f_539.f_1603[iParam0]) / 40f;
				fVar0 += to_float(iVar6 - Global_101154.f_1826.f_539.f_1607[iParam0]) / 80f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 -= iVar5;
				fVar0 = to_float(iVar5 - Global_101154.f_1826.f_539.f_1603[iParam0]) / 40f;
				fVar0 += to_float(iVar6 - Global_101154.f_1826.f_539.f_1607[iParam0]) / 80f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 -= iVar5;
				fVar0 = to_float(iVar5 - Global_101154.f_1826.f_539.f_1603[iParam0]) / 40f;
				fVar0 += to_float(iVar6 - Global_101154.f_1826.f_539.f_1607[iParam0]) / 80f;
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_67(164, iParam3, 0);
				fVar0 += to_float(iVar6) / 80f;
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_57(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 += IntToFloat(iVar8 * 3);
				fVar0 += IntToFloat(iVar9 * 2);
				fVar0 += IntToFloat(iVar10 * 1);
			}
			else if (iParam0 == 3)
			{
				fVar0 += IntToFloat(func_56(joaat("mpply_shootingrange_wins")) * 1);
				func_62(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_50(iParam0, iParam1, iParam3);
		fVar0 += IntToFloat(iVar11);
		fVar0 += IntToFloat(func_55(iParam0, iParam1, iParam3));
	}
	if (iParam2)
	{
		fVar12 = fVar0 - fVar0 % IntToFloat(func_48(iParam0, iParam1));
		if (fVar0 % IntToFloat(func_48(iParam0, iParam1)) >= 0f)
		{
			fVar12 += IntToFloat(func_48(iParam0, iParam1));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = fVar12 - IntToFloat(func_48(iParam0, iParam1));
		}
	}
	iVar2 = floor(fVar0);
	iVar2 = func_66(iVar2, 0, 100);
	return iVar2;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_101154.f_1826.f_539.f_1475[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_67(72, iParam2, 0);
					break;
				
				case 3:
					return func_67(74, iParam2, 0);
					break;
				
				case 2:
					return func_67(73, iParam2, 0);
					break;
				
				case 4:
					return func_67(75, iParam2, 0);
					break;
				
				case 5:
					return func_67(76, iParam2, 0);
					break;
				
				case 6:
					return func_67(77, iParam2, 0);
					break;
				
				case 7:
					return func_67(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_57(int iParam0, int iParam1)
{
	return Global_101154.f_17837[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_101154.f_1451[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 += _0xE0E854F5280FB769(iParam0) * 86400;
	iVar0 += _0xF2D4B2FE415AAFC3(iParam0) * 3600;
	iVar0 += _0x7583B4BE4C5A41B5(iParam0) * 60;
	iVar0 += _0x2CE056FF3723F00B(iParam0);
	return iVar0;
}

auto func_60(int iParam0, int iParam1)
{
	return Global_2469339[iParam0 /*5*/][func_5(iParam1)];
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 += _0xE0E854F5280FB769(iParam0) * 1440;
	iVar0 += _0xF2D4B2FE415AAFC3(iParam0) * 60;
	iVar0 += _0x7583B4BE4C5A41B5(iParam0);
	return iVar0;
}

auto func_62(Vector3 fParam0)
{
	if (func_42())
	{
		if (func_63() < Global_262145.f_10634)
		{
			if (*fParam0 + IntToFloat(func_63()) * Global_262145.f_10633 <= IntToFloat(Global_262145.f_10643))
			{
				*fParam0 += IntToFloat(func_63()) * Global_262145.f_10633;
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_63()
{
	if (func_46(1))
	{
		return Global_1587523[func_64() /*444*/].f_195.f_6;
	}
	return 0;
}

auto func_64()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

float func_65(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2489085[iParam0 /*5*/][func_5(iParam1)];
	if (stat_get_float(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, auto uParam2, auto uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_69()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

int func_70(int iParam0)
{
	return iParam0 < 3;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_68(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_67(iVar3, -1, 0);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = 0.8f + 0.4f * to_float(iVar0) / 100f;
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(player_id(), fVar1);
			break;
		
		case 7:
			if (_get_number_of_instances_of_streamed_script(joaat("armenian3")) != 0 || _get_number_of_instances_of_streamed_script(joaat("trevor3")) != 0)
			{
				Global_88894 = 1;
			}
			else
			{
				fVar1 = 1f - to_float(iVar0) / 100f;
				set_player_noise_multiplier(player_id(), fVar1);
				set_player_sneaking_noise_multiplier(player_id(), fVar1);
				set_player_stealth_perception_modifier(player_id(), fVar1);
			}
			break;
	}
}

bool func_72(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_73(iParam0))
	{
		return false;
	}
	return true;
}

int func_73(int iParam0)
{
	return func_74(iParam0, Global_35711);
}

bool func_74(int iParam0, int iParam1)
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

void func_75()
{
	func_80();
	func_79();
	func_76();
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_77)
	{
		if (iLocal_55 == 3)
		{
			if (Global_2097152[func_78() /*10375*/].f_7704.f_7)
			{
				iLocal_74 = func_59(func_60(140, -1));
				Global_2097152[func_78() /*10375*/].f_7704.f_7 = 0;
			}
			else
			{
				iLocal_74 = Global_2097152[func_78() /*10375*/].f_7704.f_6;
			}
			if (Global_2097152[func_78() /*10375*/].f_7704.f_4 == 0)
			{
				Global_2097152[func_78() /*10375*/].f_7704.f_4 = _get_posix_time();
			}
			iLocal_76 = Global_2097152[func_78() /*10375*/].f_7704.f_4;
			iLocal_75 = Global_2097152[func_78() /*10375*/].f_7704.f_5;
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_1520[iLocal_55])
			{
				switch (iLocal_55)
				{
					case 0:
						iLocal_74 = func_59(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_74 = func_59(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_74 = func_59(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_101154.f_1826.f_539.f_1520[iLocal_55] = 0;
			}
			else
			{
				iLocal_74 = Global_101154.f_1826.f_539.f_1516[iLocal_55];
			}
			if (Global_101154.f_1826.f_539.f_1508[iLocal_55] == 0)
			{
				Global_101154.f_1826.f_539.f_1508[iLocal_55] = _get_posix_time();
			}
			iLocal_76 = Global_101154.f_1826.f_539.f_1508[iLocal_55];
			iLocal_75 = Global_101154.f_1826.f_539.f_1512[iLocal_55];
		}
		iLocal_77 = 1;
		iLocal_78 = 1;
	}
	else if (_get_posix_time() - iLocal_76 > 86400)
	{
		iLocal_77 = 0;
		iLocal_78 = 0;
		iLocal_76 = _get_posix_time();
		iLocal_75 = 0;
		if (iLocal_55 == 3)
		{
			Global_2097152[func_78() /*10375*/].f_7704.f_7 = 1;
		}
		else
		{
			Global_101154.f_1826.f_539.f_1520[iLocal_55] = 1;
		}
	}
	if (iLocal_78)
	{
		switch (iLocal_55)
		{
			case 0:
				iVar0 = func_59(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_59(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_59(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_59(func_60(140, -1));
				break;
		}
		iVar1 = iVar0 - iLocal_74;
		iVar2 = floor(to_float(iVar1) / 15f) - iLocal_75;
		if (iVar2 > 0)
		{
			func_77(iLocal_55, 4, iVar2);
			iLocal_75 += iVar2;
		}
		if (iVar0 > iLocal_74 + get_milliseconds_per_game_minute() / 1000 * 60)
		{
			iLocal_78 = 0;
		}
	}
	if (iLocal_55 == 3)
	{
		Global_2097152[func_78() /*10375*/].f_7704.f_4 = iLocal_76;
		Global_2097152[func_78() /*10375*/].f_7704.f_5 = iLocal_75;
	}
	else
	{
		Global_101154.f_1826.f_539.f_1508[iLocal_55] = iLocal_76;
		Global_101154.f_1826.f_539.f_1512[iLocal_55] = iLocal_75;
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_101154.f_1826.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2;
			break;
		
		case 3:
			iVar1 = 3949;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3949)
			{
				iVar0 = func_67(iVar1, -1, 0);
				iVar0 += iParam2;
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_52(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_71)
	{
		iVar0 = true;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
			if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && is_vehicle_driveable(iVar1, 0)) && !is_entity_in_air(iVar1)) && get_ped_in_vehicle_seat(iVar1, -1) == PLAYER::PLAYER_PED_ID()) && (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar1)) || is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iVar1))))
			{
				iVar0 = false;
				if (get_entity_speed(iVar1) >= 53f)
				{
					func_77(iLocal_55, 4, 2);
					iVar0 = true;
				}
			}
		}
		if (iVar0)
		{
			iLocal_71 = 0;
			iLocal_72 = GAMEPLAY::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_73 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
		if (((ENTITY::DOES_ENTITY_EXIST(iVar2) && is_vehicle_driveable(iVar2, 0)) && get_entity_speed(iVar2) < 20f) && !is_entity_in_air(iVar2))
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_72 > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_73, 10000))))
			{
				iLocal_71 = 1;
			}
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && is_vehicle_driveable(iVar1, 0)) && get_ped_in_vehicle_seat(iVar1, -1) == PLAYER::PLAYER_PED_ID()) && (((is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iVar1)) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar1))) || is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iVar1))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iVar1))))
		{
			if (iLocal_63)
			{
				if (!is_entity_in_air(iVar1))
				{
					if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_65 > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_66, 1500))))
					{
						iLocal_67 = GAMEPLAY::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_68 = NETWORK::GET_NETWORK_TIME();
						}
						iLocal_64 = 1;
					}
					iLocal_63 = 0;
				}
			}
			if (iLocal_64)
			{
				if (!is_entity_in_air(iVar1))
				{
					if (is_vehicle_on_all_wheels(iVar1))
					{
						if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_67 > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_67 == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_68, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_equal_to(NETWORK::GET_NETWORK_TIME(), iLocal_68)))
						{
						}
						else
						{
							func_77(iLocal_55, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, GAMEPLAY::GET_GAME_TIMER() - iLocal_67, 64);
						StringConCat(&cVar2, "ms", 64);
						iVar0 = true;
					}
				}
				else
				{
					iVar0 = true;
				}
			}
			if (!iLocal_63 && !iLocal_64)
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GAMEPLAY::GET_GAME_TIMER() - iLocal_69 > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_time_more_than(NETWORK::GET_NETWORK_TIME(), get_time_offset(iLocal_70, 1000))))
				{
					if (is_entity_in_air(iVar1))
					{
						if (!iLocal_63)
						{
							iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iLocal_66 = NETWORK::GET_NETWORK_TIME();
							}
							iLocal_63 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_63 || iLocal_64)
		{
			iVar0 = true;
		}
	}
	else if (iLocal_63 || iLocal_64)
	{
		iVar0 = true;
	}
	if (iVar0)
	{
		iLocal_69 = GAMEPLAY::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_70 = NETWORK::GET_NETWORK_TIME();
		}
		iLocal_63 = 0;
		iLocal_64 = 0;
	}
}

int func_81(int iParam0)
{
	return (Global_100239 && iParam0) != 0;
}

auto func_82()
{
	func_83();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_83()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_85(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_84(PLAYER::PLAYER_PED_ID());
			if (func_70(iVar0) && (!func_51(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_70(Global_101154.f_1826.f_539.f_3549))
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

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_85(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_85(int iParam0)
{
	if (func_70(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_58)
	{
		if (iLocal_59 != iLocal_55)
		{
			iLocal_58 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_59)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_89(player_id());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = get_pedheadshot_txd_string(iVar1);
				}
				break;
		}
		_set_notification_text_entry("PS_UPDATE");
		add_text_component_integer(iLocal_62);
		_0x2B7E9A4EAAA93C89(func_88(iLocal_60), func_87(iLocal_60), iLocal_61, iLocal_62 - iLocal_61, 0, sVar0, sVar0);
		iLocal_79 = 1;
		iLocal_80 = GAMEPLAY::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_81 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 5000);
		}
		iLocal_58 = 0;
	}
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iVar0 == -1)
	{
		func_90(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_90(int iParam0, int iParam1)
{
	if (!func_17(iParam0, 0, 1))
	{
		return;
	}
	if (func_92(iParam0) != -1)
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
	if (func_91(iParam0))
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

bool func_91(int iParam0)
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

int func_92(int iParam0)
{
	int iVar0;
	
	if (!func_17(iParam0, 0, 1))
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
			func_93(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_93(int iParam0)
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
	func_94(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_94(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_45();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_95()
{
	Vector3 fVar0;
	int iVar1;
	
	if (get_index_of_current_level() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_99(player_id()))
		{
			return;
		}
		if (func_98() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_98() == 0)
		{
			iLocal_50 = 2;
		}
	}
	else
	{
		iLocal_50 = 0;
	}
	if (!func_97())
	{
		func_96();
	}
	iLocal_52 = 0;
	iLocal_53 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_54 = NETWORK::GET_NETWORK_TIME();
	}
	iLocal_69 = GAMEPLAY::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_70 = NETWORK::GET_NETWORK_TIME();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2097152[func_78() /*10375*/].f_7704.f_748, 2))
		{
			fVar0 = to_float(func_67(185, -1, 0)) / 20f;
			iVar1 = floor(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2097152[func_78() /*10375*/].f_7704.f_748), 2);
		}
	}
	iLocal_56 = true;
	iLocal_51 = 1;
}

void func_96()
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_68(3, iVar0, &uVar1, &uVar2);
				func_52(uVar2, func_50(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_88893 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_68(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_101154.f_1826.f_539.f_1615[0] = func_50(0, 0, -1);
		Global_101154.f_1826.f_539.f_1615[1] = func_50(1, 0, -1);
		Global_101154.f_1826.f_539.f_1615[2] = func_50(2, 0, -1);
		Global_101154.f_1826.f_539.f_1582 = 1;
		Global_88893 = 1;
	}
}

int func_97()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_101154.f_1826.f_539.f_1582;
}

auto func_98()
{
	return Global_25120;
}

int func_99(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2428492.f_1, iParam0);
	}
	return true;
}

void func_100()
{
	if (iLocal_51 != 0 && iLocal_50 != 3)
	{
		if (iLocal_50 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_50 = 3;
			}
			if (!func_97())
			{
				iLocal_50 = 3;
			}
		}
		else if (iLocal_50 == 2)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_99(player_id())) || func_98() != 0)
			{
				iLocal_50 = 3;
			}
		}
		if (iLocal_50 == 3)
		{
			iLocal_51 = 2;
		}
	}
}

