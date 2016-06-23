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
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	Vector3 vLocal_45 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	int iLocal_52 = 0;
	char[64] cLocal_53 = 0;
	char[64] cLocal_69 = 0;
	int iLocal_85 = 0;
	auto uLocal_86 = 0;
	Vector3 vLocal_87 = 0;
	Vector3 vLocal_90 = 0;
	float fLocal_93 = 0;
	auto uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = 0;
	float fLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	float fLocal_110 = 0;
	Vector3 vLocal_111 = 0;
	Vector3 vLocal_114 = 0;
	Vector3 fLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	struct<2> Local_132 = 0;
	auto uLocal_134 = 0;
	auto uLocal_135 = 0;
	auto uLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 0;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	auto uLocal_149 = 5;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
#endregion

void main()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = {500f, 500f, 500f};
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = -1;
	vLocal_90 = {Local_132.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	cLocal_69 = {cLocal_69};
	iVar0 = false;
	if (has_force_cleanup_occurred(82))
	{
		func_88(1);
	}
	iLocal_85 = get_player_ped(player_id());
	iLocal_95 = 0;
	func_86(&Global_99807, 0);
	func_84();
	if (func_83(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31486)
	{
		wait(0);
	}
	if (!func_83(uLocal_94, 8))
	{
		if (!func_81(iLocal_100))
		{
			if (func_80(0, iLocal_99))
			{
				func_88(0);
			}
			else
			{
				func_88(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_80(0, iLocal_99))
		{
			func_88(1);
		}
	}
	if (func_83(uLocal_94, 8388608))
	{
		func_88(1);
	}
	if (func_83(uLocal_94, 524288) && (func_79() && !func_78()))
	{
		func_88(1);
	}
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1 && !func_83(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_77(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_76(10);
	}
	while (true)
	{
		if (!func_83(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (get_ground_z_for_3d_coord(Local_132.f_1[0 /*3*/], &fVar1, 0))
			{
				if (fVar1 != 0f)
				{
					Local_132.f_1[0 /*3*/].f_2 = fVar1;
					func_75(&uLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = get_player_ped(player_id());
		if (func_83(uLocal_94, 1048576))
		{
			if (is_entity_dead(iLocal_85, 0))
			{
				func_88(1);
			}
		}
		if (does_entity_exist(iLocal_85) && !is_entity_dead(iLocal_85, 0))
		{
			vLocal_87 = {get_entity_coords(iLocal_85, 1)};
			fLocal_93 = vdist2(vLocal_87, Local_132.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Local_132.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_81(iLocal_100) || (func_83(uLocal_94, 16) && !func_83(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_74();
						func_76(1);
					}
					else
					{
						if (fLocal_110 > fLocal_102 * fLocal_102)
						{
							if (iLocal_105 != 263)
							{
								func_77(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_76(10);
						}
						if (vLocal_87.z - Local_132.f_1[0 /*3*/].f_2 > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_73())
					{
						iLocal_103 = iLocal_103;
						func_76(3);
					}
					else
					{
						func_74();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_88(1);
						return;
					}
					if (!func_81(iLocal_100))
					{
						if (!func_83(uLocal_94, 8))
						{
							iVar2 = true;
							if (are_strings_equal(&(Global_91278.f_3), &cLocal_69))
							{
								cLocal_69 = {cLocal_53};
								iVar2 = false;
							}
							if (iVar2)
							{
								func_88(0);
								break;
							}
						}
					}
					if (!func_83(uLocal_94, 4))
					{
						func_72();
						func_75(&uLocal_94, 4);
					}
					if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_71(6) && !func_70(iLocal_105))
							{
							}
							else
							{
								func_77(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_76(10);
					}
					else
					{
						cLocal_69 = {cLocal_53};
						iVar3 = !func_83(uLocal_94, 64);
						func_86(&uLocal_94, 128);
						if (!func_69(3) && !Global_91312)
						{
							if (func_83(uLocal_94, 2097152))
							{
								if ((!func_83(uLocal_94, 1) || !does_entity_exist(func_68())) && !Global_91312)
								{
									func_76(10);
									break;
								}
							}
						}
						if (func_83(uLocal_94, 524288) && (func_79() && !func_78()))
						{
							func_88(1);
						}
						if (func_67())
						{
							func_88(1);
						}
						if ((!func_58(6) || Global_100201) || func_57())
						{
							iVar3 = false;
						}
						if (func_83(uLocal_94, 1))
						{
							if (!func_56())
							{
								func_54(&uLocal_94, 128);
								iVar3 = false;
							}
						}
						if (func_53(1))
						{
							iVar3 = false;
						}
						if (Global_69489)
						{
							iVar3 = false;
						}
						if (func_52())
						{
							iVar3 = false;
						}
						if (is_player_switch_in_progress())
						{
							iVar3 = false;
						}
						if (func_51() || func_50(8, -1))
						{
							iVar3 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							iVar3 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							iVar3 = false;
						}
						if (func_49(0) || func_48())
						{
							iVar3 = false;
						}
						if (iVar3)
						{
							if (!func_43(iLocal_118))
							{
								func_54(&uLocal_94, 128);
								iVar3 = false;
							}
							if (!is_entity_at_coord(iLocal_85, Local_132.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
							{
								iVar3 = false;
							}
							if (!is_player_control_on(player_id()))
							{
								iVar3 = false;
							}
							if (iVar3)
							{
								set_input_exclusive(0, 51);
								if (func_42(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_41(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_54(&uLocal_94, 2048);
									}
									else if (!func_83(uLocal_94, 2048) || !is_help_message_being_displayed())
									{
										func_40(&iLocal_96);
										func_86(&uLocal_94, 2048);
									}
									if (func_38(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_40(&iLocal_96);
										func_86(&uLocal_94, 2048);
										SCRIPT::REQUEST_SCRIPT(&cLocal_69);
										set_player_control(player_id(), false, 56);
										func_76(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_40(&iLocal_96);
									func_86(&uLocal_94, 2048);
									SCRIPT::REQUEST_SCRIPT(&cLocal_69);
									set_player_control(player_id(), false, 56);
									func_76(5);
								}
							}
						}
						if (!iVar3)
						{
							if (iLocal_96 != -1)
							{
								func_40(&iLocal_96);
								func_86(&uLocal_94, 2048);
								clear_help(0);
							}
						}
					}
					func_37();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_40(&iLocal_96);
						}
						iVar4 = 2;
						iVar0 = false;
						if (func_83(uLocal_94, 1))
						{
							if (func_71(6) || func_71(7))
							{
								iVar4 = 1;
								iVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_33();
							if (Global_36839)
							{
								func_24(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_52 = SYSTEM::START_NEW_SCRIPT(&cLocal_69, iLocal_97);
							set_script_as_no_longer_needed(&cLocal_69);
							cLocal_53 = {cLocal_69};
							StringCopy(&cLocal_69, "", 64);
							func_86(&uLocal_94, 4);
							func_23();
							func_54(&uLocal_94, 2);
							func_76(6);
							func_19(&iLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_76(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_83(uLocal_94, 256))
					{
						if (is_screen_fading_out() || is_screen_faded_in())
						{
							set_input_exclusive(0, 51);
						}
						else if (is_screen_faded_out())
						{
							func_54(&uLocal_94, 256);
						}
					}
					if (func_83(Global_99807, 262144))
					{
						func_86(&Global_99807, 262144);
						func_13();
					}
					if (func_83(uLocal_94, 2097152))
					{
						if (!func_69(3) && !is_thread_active(iLocal_52))
						{
							func_76(10);
						}
					}
					if (!is_thread_active(iLocal_52))
					{
						playstats_oddjob_done(round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
						func_8(&iLocal_107);
						func_86(&uLocal_94, 256);
						func_7();
						if (iVar0)
						{
							func_86(&uLocal_94, 2);
						}
						else if (func_83(uLocal_94, 2))
						{
							if (func_83(Global_99807, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_86(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_86(&uLocal_94, 2);
							}
						}
						func_76(0);
						if (iLocal_99 != -1)
						{
							if (func_83(Global_99807, 0))
							{
								playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91315, 0);
								func_5(func_17(iLocal_99), 0, Global_91315, 1, 0);
							}
							else
							{
								playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91315, 0);
								func_5(func_17(iLocal_99), 0, Global_91315, 0, 0);
							}
						}
						func_4();
						func_86(&Global_99807, 0);
						if (func_83(uLocal_94, 16777216))
						{
							func_88(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_80(0, iLocal_99))
								{
									func_88(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_76(0);
					break;
				
				case 10:
					func_88(1);
					break;
				
				case 9:
					if (fLocal_110 > fLocal_102 * fLocal_102)
					{
						if (iLocal_105 != 263)
						{
							func_77(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_76(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_77(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_40(&iLocal_96);
					}
					if (!is_string_null_or_empty(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							clear_help(1);
						}
					}
					func_76(4);
					break;
				
				case 4:
					if (iLocal_104 % 150 == 0)
					{
						if (!is_ped_injured(player_ped_id()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_81(iLocal_100) && func_80(0, iLocal_99))
									{
										func_84();
										if (iLocal_105 != 263)
										{
											func_77(iLocal_105, 1, 0);
										}
										func_76(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > fLocal_102 * fLocal_102)
								{
									if (iLocal_105 != 263)
									{
										func_77(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_76(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > 80f + 5f * 80f + 5f)
								{
									func_84();
									if (iLocal_105 != 263)
									{
										func_77(iLocal_105, 1, 0);
									}
									func_76(0);
								}
							}
						}
						else
						{
							func_77(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (is_string_null_or_empty(&Global_88681))
	{
		return;
	}
	if (compare_strings(sParam0, &Global_88681, 0, -1) != 0)
	{
		return;
	}
	playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85788);
	StringCopy(&Global_88681, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35673)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_7()
{
	char[24] cVar0;
	
	if (is_xbox360_version() || is_durango_version())
	{
		network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_10(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

int func_11(auto uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_12(auto uParam0)
{
	return is_bit_set(*uParam0, true);
}

bool func_13()
{
	return true;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_88681))
	{
		playstats_mission_over(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_16(0));
}

int func_16(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	auto uVar0;
	char[24] cVar1;
	
	if (is_xbox360_version() || is_durango_version())
	{
		uVar0 = iParam0;
		network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_19(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_10(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_22(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()
{
	set_model_as_no_longer_needed(Local_120.f_1);
	if (does_entity_exist(Local_120))
	{
		set_object_as_no_longer_needed(&Local_120);
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == player_ped_id())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615--;
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	clear_bit(&Global_2283, 25);
	set_bit(&Global_2284, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *iParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_81(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_36(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_81(iParam0))
	{
		return false;
	}
	return true;
}

void func_37()
{
	if (iLocal_119 == 1)
	{
		if (is_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER"))
		{
			set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", false);
			set_ped_model_is_suppressed(joaat("a_c_mtlion"), true);
		}
	}
}

bool func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_49(0))
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (iParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_39(int iParam0)
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

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_39(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_42(auto uParam0)
{
	return true;
}

int func_43(int iParam0)
{
	func_44();
	return iParam0 == Global_101154.f_1826.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_46(player_ped_id());
			if (func_45(iVar0) && (!func_71(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_45(Global_101154.f_1826.f_539.f_3549))
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

int func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

auto func_48()
{
	return Global_68058;
}

bool func_49(int iParam0)
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

int func_50(int iParam0, int iParam1)
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

int func_51()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_52()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_53(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_54(auto uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56()
{
	return true;
}

int func_57()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	get_current_ped_weapon(player_ped_id(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		iVar1 = false;
	}
	else
	{
		iVar1 = true;
	}
	if (iVar1)
	{
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		return ((((iVar1 && is_control_pressed(0, 69)) || (iVar1 && is_control_pressed(0, 70))) || (iVar1 && is_control_pressed(0, 68))) || is_player_targetting_anything(player_id()));
	}
	return (((((iVar1 && is_control_pressed(0, 24)) || (iVar1 && is_control_pressed(0, 25))) || (iVar1 && is_control_pressed(0, 47))) || _0xDCCA191DF9980FD7(player_ped_id())) || is_player_targetting_anything(player_id()));
}

bool func_58(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_66();
				if (!func_45(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_65()) || Global_100201) || Global_25122) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_61()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_65()) || Global_25122) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_65()) || Global_100201) || Global_25122) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_65()) || Global_100201) || Global_25122) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_65() || get_player_wanted_level(player_id()) > 0) || func_50(8, -1)) || func_52()) || func_60()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_63()) || func_62()) || func_60()) || func_59())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (does_entity_exist(player_ped_id()))
						{
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_65()) || Global_25122) || func_64()) || func_50(8, -1)) || func_62()) || func_61()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_65()) || func_62()) || Global_100201) || Global_25122) || func_64()) || Global_36839) || func_50(8, -1)) || func_61()) || func_60()) || func_52()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_65()) || Global_100201) || Global_25122) || func_64()) || func_50(8, -1)) || func_61()) || func_60()) || func_63()) || func_62()) || func_52())
						{
							return false;
						}
						break;
				}
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
	else
	{
		return false;
	}
	return true;
}

auto func_59()
{
	return Global_91317.f_1;
}

int func_60()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_61()
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

int func_62()
{
	return Global_91330.f_297 > 0;
}

int func_63()
{
	return Global_91330.f_296 > 0;
}

auto func_64()
{
	return Global_1315913;
}

int func_65()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

auto func_66()
{
	func_44();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_67()
{
	if (_get_number_of_instances_of_streamed_script(joaat("stripperhome")) > 0)
	{
		return true;
	}
	return false;
}

auto func_68()
{
	return Global_87443;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_71(6) || func_71(7))
			{
				return 1;
			}
			else
			{
				return func_69(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_81(5))
			{
				if (func_58(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_71(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_72()
{
	if (!does_entity_exist(Local_120))
	{
		Local_120 = create_object(Local_120.f_1, Local_120.f_2, 1, true, false);
		set_entity_coords_no_offset(Local_120, Local_120.f_2, 0, 0, 1);
		set_entity_rotation(Local_120, Local_120.f_5, 2, 1);
		freeze_entity_position(Local_120, true);
	}
}

int func_73()
{
	if (!is_model_valid(Local_120.f_1))
	{
		return false;
	}
	return has_model_loaded(Local_120.f_1);
}

void func_74()
{
	if (!is_model_valid(Local_120.f_1))
	{
		return;
	}
	request_model(Local_120.f_1);
}

void func_75(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = is_bit_set(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

bool func_78()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

int func_79()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	iVar0 = is_bit_set(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_81(int iParam0)
{
	return func_82(iParam0, Global_35711);
}

bool func_82(int iParam0, int iParam1)
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

int func_83(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	StringCopy(&cLocal_53, "Yoga", 64);
	sLocal_101 = "PLAY_YOGA";
	iLocal_99 = 18;
	fLocal_117 = 2.5f;
	fLocal_102 = 20f;
	iLocal_97 = 18000;
	iLocal_119 = func_85();
	if (iLocal_119 == 0)
	{
		iLocal_105 = 110;
		Local_120.f_2 = {-791.0036f, 186.3552f, 71.8295f};
		Local_120.f_5 = {0f, 0f, -87.1403f};
		Local_120.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_119 == 1)
	{
		iLocal_105 = 111;
		Local_120.f_2 = {2861.47f, 5945.9f, 357.06f};
		Local_120.f_5 = {0f, -0.5f, 70f};
		Local_120.f_1 = joaat("prop_yoga_mat_03");
	}
	iLocal_118 = 0;
}

int func_85()
{
	Vector3 vVar0;
	Vector3[] vVar3 = new Vector3[2];
	float[] fVar10 = new float[2];
	
	if (is_player_playing(player_id()))
	{
		vVar0 = {get_entity_coords(get_player_ped(player_id()), 1)};
		vVar3[0 /*3*/] = {-790.906f, 186.293f, 71.835f};
		vVar3[1 /*3*/] = {2862.15f, 5945.49f, 357.11f};
		fVar10[0] = vdist2(vVar0, vVar3[0 /*3*/]);
		fVar10[1] = vdist2(vVar0, vVar3[1 /*3*/]);
		if (fVar10[0] < fVar10[1])
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

void func_86(auto uParam0, int iParam1)
{
	func_87(uParam0, iParam1);
}

void func_87(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_88(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_105 != 263)
		{
			func_77(iLocal_105, 0, 0);
		}
	}
	func_40(&iLocal_96);
	if (func_83(uLocal_94, 2))
	{
		func_4();
		func_86(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_89();
	terminate_this_thread();
}

void func_89()
{
	func_86(&uLocal_94, 4);
	func_90();
	if (is_thread_active(iLocal_52))
	{
		force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!is_string_null(&cLocal_69))
	{
		if (get_length_of_literal_string(&cLocal_69) != 0)
		{
			set_script_as_no_longer_needed(&cLocal_69);
		}
	}
}

void func_90()
{
	if (!is_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER"))
	{
		set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", true);
		set_ped_model_is_suppressed(joaat("a_c_mtlion"), false);
	}
}

