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
	struct<16> Local_69 = 0;
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
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	auto uLocal_132 = 0;
	struct<2> Local_133 = 0;
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
	auto uLocal_149 = 0;
	auto uLocal_150 = 5;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
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
	iLocal_118 = true;
	iLocal_119 = -1;
	iLocal_120 = 6;
	iLocal_121 = 18;
	iLocal_125 = true;
	vLocal_90 = {Local_133.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	Local_69 = {Local_69};
	iVar0 = false;
	if (has_force_cleanup_occurred(82))
	{
		func_92(1);
	}
	iLocal_85 = get_player_ped(player_id());
	iLocal_95 = 0;
	func_90(&Global_99807, 0);
	func_87();
	if (func_86(uLocal_94, 1))
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
	if (!func_86(uLocal_94, 8))
	{
		if (!func_84(iLocal_100))
		{
			if (func_83(0, iLocal_99))
			{
				func_92(0);
			}
			else
			{
				func_92(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_83(0, iLocal_99))
		{
			iLocal_118 = false;
		}
	}
	if (func_86(uLocal_94, 8388608))
	{
		func_92(1);
	}
	if (func_86(uLocal_94, 524288) && (func_82() && !func_81()))
	{
		func_92(1);
	}
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1 && !func_86(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_80(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_79(10);
	}
	while (true)
	{
		iLocal_85 = get_player_ped(player_id());
		if (func_86(uLocal_94, 1048576))
		{
			if (is_entity_dead(iLocal_85, 0))
			{
				func_92(1);
			}
		}
		if (does_entity_exist(iLocal_85) && !is_entity_dead(iLocal_85, 0))
		{
			vLocal_87 = {get_entity_coords(iLocal_85, 1)};
			fLocal_93 = vdist2(vLocal_87, Local_133.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Local_133.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_84(iLocal_100) || (func_86(uLocal_94, 16) && !func_86(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_78();
						func_79(1);
					}
					else
					{
						if (fLocal_110 > fLocal_102 * fLocal_102)
						{
							if (iLocal_105 != 263)
							{
								func_80(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_79(10);
						}
						if (vLocal_87.z - Local_133.f_1[0 /*3*/].f_2 > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_77())
					{
						iLocal_103 = iLocal_103;
						func_79(3);
					}
					else
					{
						func_78();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_92(1);
						return;
					}
					if (!func_84(iLocal_100))
					{
						if (!func_86(uLocal_94, 8))
						{
							iVar1 = true;
							if (are_strings_equal(&(Global_91278.f_3), &Local_69))
							{
								Local_69 = {cLocal_53};
								iVar1 = false;
							}
							if (iVar1)
							{
								func_92(0);
								break;
							}
						}
					}
					if (!func_86(uLocal_94, 4))
					{
						func_76();
						func_75(&uLocal_94, 4);
					}
					if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_74(6) && !func_73(iLocal_105))
							{
							}
							else
							{
								func_80(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_79(10);
					}
					else
					{
						Local_69 = {cLocal_53};
						iVar2 = !func_86(uLocal_94, 64);
						func_90(&uLocal_94, 128);
						if (!func_72(3) && !Global_91312)
						{
							if (func_86(uLocal_94, 2097152))
							{
								if ((!func_86(uLocal_94, 1) || !does_entity_exist(func_71())) && !Global_91312)
								{
									func_79(10);
									break;
								}
							}
						}
						if (func_86(uLocal_94, 524288) && (func_82() && !func_81()))
						{
							func_92(1);
						}
						if (func_70())
						{
							func_92(1);
						}
						if ((!func_61(6) || Global_100201) || func_60())
						{
							iVar2 = false;
						}
						if (!iLocal_118)
						{
							func_58(&uLocal_94, 128);
							iVar2 = false;
						}
						if (func_86(uLocal_94, 1))
						{
							if (!func_57())
							{
								func_58(&uLocal_94, 128);
								iVar2 = false;
							}
						}
						if (func_56(1))
						{
							iVar2 = false;
						}
						if (Global_69489)
						{
							iVar2 = false;
						}
						if (func_55())
						{
							iVar2 = false;
						}
						if (is_player_switch_in_progress())
						{
							iVar2 = false;
						}
						if (func_54() || func_53(8, -1))
						{
							iVar2 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							iVar2 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							iVar2 = false;
						}
						if (func_52(0) || func_51())
						{
							iVar2 = false;
						}
						if (iVar2)
						{
							if (!func_46(iLocal_119))
							{
								func_58(&uLocal_94, 128);
								iVar2 = false;
							}
							if (!is_entity_at_coord(iLocal_85, Local_133.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
							{
								iVar2 = false;
							}
							iVar3 = get_clock_hours();
							if (iLocal_120 > iLocal_121)
							{
								if (iVar3 < iLocal_120 && iVar3 >= iLocal_121)
								{
									func_58(&uLocal_94, 128);
									iVar2 = false;
									if (fLocal_93 < fLocal_117 * fLocal_117 + 4f)
									{
										if (!func_86(uLocal_94, 134217728))
										{
											func_45("MG_NA_TIME", iLocal_120, iLocal_121);
											func_58(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_90(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_120 || iVar3 >= iLocal_121)
							{
								func_58(&uLocal_94, 128);
								iVar2 = false;
								if (fLocal_93 < fLocal_117 * fLocal_117 + 4f)
								{
									if (!func_86(uLocal_94, 134217728))
									{
										func_45("MG_NA_TIME", iLocal_120, iLocal_121);
										func_58(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_90(&uLocal_94, 134217728);
								}
							}
							if (!is_player_control_on(player_id()))
							{
								iVar2 = false;
							}
							if (iVar2)
							{
								set_input_exclusive(0, 51);
								if (func_44(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_58(&uLocal_94, 2048);
									}
									else if (!func_86(uLocal_94, 2048) || !is_help_message_being_displayed())
									{
										func_42(&iLocal_96);
										func_90(&uLocal_94, 2048);
									}
									if (func_40(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_42(&iLocal_96);
										func_90(&uLocal_94, 2048);
										request_script(&Local_69);
										set_player_control(player_id(), false, 56);
										func_79(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_42(&iLocal_96);
									func_90(&uLocal_94, 2048);
									request_script(&Local_69);
									set_player_control(player_id(), false, 56);
									func_79(5);
								}
							}
						}
						if (!iVar2)
						{
							if (iLocal_96 != -1)
							{
								func_42(&iLocal_96);
								func_90(&uLocal_94, 2048);
								clear_help(0);
							}
						}
					}
					func_38();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (has_script_loaded(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_42(&iLocal_96);
						}
						iVar4 = 2;
						iVar0 = false;
						if (func_86(uLocal_94, 1))
						{
							if (func_74(6) || func_74(7))
							{
								iVar4 = 1;
								iVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_35(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_34();
							if (Global_36839)
							{
								func_25(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_52 = func_24();
							func_90(&uLocal_94, 4);
							func_23();
							func_58(&uLocal_94, 2);
							func_79(6);
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
							func_79(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_86(uLocal_94, 256))
					{
						if (is_screen_fading_out() || is_screen_faded_in())
						{
							set_input_exclusive(0, 51);
						}
						else if (is_screen_faded_out())
						{
							func_58(&uLocal_94, 256);
						}
					}
					if (func_86(Global_99807, 262144))
					{
						func_90(&Global_99807, 262144);
						func_13();
					}
					if (func_86(uLocal_94, 2097152))
					{
						if (!func_72(3) && !is_thread_active(iLocal_52))
						{
							func_79(10);
						}
					}
					if (!is_thread_active(iLocal_52))
					{
						playstats_oddjob_done(round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
						func_8(&iLocal_107);
						func_90(&uLocal_94, 256);
						func_7();
						if (iVar0)
						{
							func_90(&uLocal_94, 2);
						}
						else if (func_86(uLocal_94, 2))
						{
							if (func_86(Global_99807, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_90(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_90(&uLocal_94, 2);
							}
						}
						func_79(0);
						if (iLocal_99 != -1)
						{
							if (func_86(Global_99807, 0))
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
						func_90(&Global_99807, 0);
						if (func_86(uLocal_94, 16777216))
						{
							func_92(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_83(0, iLocal_99))
								{
									func_92(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_79(0);
					break;
				
				case 10:
					func_92(1);
					break;
				
				case 9:
					if (fLocal_110 > fLocal_102 * fLocal_102)
					{
						if (iLocal_105 != 263)
						{
							func_80(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_79(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_80(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_42(&iLocal_96);
					}
					if (!is_string_null_or_empty(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							clear_help(1);
						}
					}
					func_79(4);
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
									if (func_84(iLocal_100) && func_83(0, iLocal_99))
									{
										func_87();
										if (iLocal_105 != 263)
										{
											func_80(iLocal_105, 1, 0);
										}
										func_79(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > fLocal_102 * fLocal_102)
								{
									if (iLocal_105 != 263)
									{
										func_80(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_79(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > 80f + 5f * 80f + 5f)
								{
									func_87();
									if (iLocal_105 != 263)
									{
										func_80(iLocal_105, 1, 0);
									}
									func_79(0);
								}
							}
						}
						else
						{
							func_80(iLocal_105, 1, 0);
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
	if (iLocal_125)
	{
		set_model_as_no_longer_needed(joaat("blazer"));
		set_model_as_no_longer_needed(joaat("journey"));
	}
}

void func_3()
{
}

void func_4()
{
	if (iLocal_125)
	{
		iLocal_124 = iLocal_122;
	}
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
		iVar0 = get_network_time();
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
	if (iLocal_125)
	{
		if (iLocal_126)
		{
			if (does_entity_exist(iLocal_123))
			{
				set_vehicle_as_no_longer_needed(&iLocal_123);
			}
			if (does_entity_exist(iLocal_124))
			{
				set_vehicle_as_no_longer_needed(&iLocal_124);
			}
		}
	}
}

int func_24()
{
	Vector3 vVar0;
	int iVar3;
	
	vVar0 = -1;
	vVar0.y = iLocal_124;
	vVar0.z = iLocal_123;
	iVar3 = start_new_script_with_args(&cLocal_53, &vVar0, 3, iLocal_97);
	set_script_as_no_longer_needed(&cLocal_53);
	return iVar3;
}

void func_25(int iParam0)
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
	iVar0 = func_33(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_28(1, iVar1, 1);
		return;
	}
	iVar2 = func_27(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_26(iVar2);
}

void func_26(int iParam0)
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, int iParam2)
{
	func_29(iParam0, iParam1, iParam2, 0, 0);
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_31(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_30();
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

int func_30()
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

bool func_31(int iParam0, int iParam1, int iParam2)
{
	if (func_32(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_32(int iParam0, int iParam1, int iParam2)
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

int func_33(int iParam0)
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

void func_34()
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_37(0))
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
		if (!func_84(iParam2))
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
			func_36(iParam0, iParam4);
		}
	}
	return 2;
}

void func_36(auto uParam0, int iParam1)
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

bool func_37(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_84(iParam0))
	{
		return false;
	}
	return true;
}

void func_38()
{
	int iVar0;
	Vector3 vVar1;
	
	if ((does_entity_exist(iLocal_124) && !is_entity_dead(iLocal_124, 0)) && !is_entity_on_fire(iLocal_124))
	{
		set_vehicle_doors_locked(iLocal_124, 2);
		set_vehicle_undriveable(iLocal_124, true);
		set_vehicle_automatically_attaches(iLocal_124, false, 0);
		_0x2B6747FAA9DB9D6B(iLocal_124, 1);
		iLocal_122 = iLocal_124;
		if (does_entity_exist(iLocal_123) && !is_entity_dead(iLocal_123, 0))
		{
			set_vehicle_undriveable(iLocal_123, true);
			_0x2B6747FAA9DB9D6B(iLocal_123, 1);
			set_vehicle_automatically_attaches(iLocal_123, false, 0);
			set_vehicle_lights(iLocal_123, 1);
		}
	}
	else
	{
		if ((does_entity_exist(iLocal_124) && is_entity_dead(iLocal_124, 0)) || !does_entity_exist(iLocal_124))
		{
			func_39(0);
		}
		if ((does_entity_exist(iLocal_123) && is_entity_dead(iLocal_123, 0)) || !does_entity_exist(iLocal_123))
		{
			func_39(0);
		}
		if ((iLocal_128 && has_anim_dict_loaded("oddjobs@hunterIntro")) && has_anim_dict_loaded("oddjobs@hunterOutro"))
		{
			remove_anim_dict("oddjobs@hunterIntro");
			remove_anim_dict("oddjobs@hunterOutro");
			iLocal_128 = 0;
		}
		return;
	}
	if (is_entity_dead(player_ped_id(), 0))
	{
		return;
	}
	if (is_entity_on_fire(player_ped_id()))
	{
		return;
	}
	iVar0 = false;
	if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), 0))
	{
		vVar1 = {get_entity_coords(player_ped_id(), 1)};
		if (vdist(-1702.695f, 4666.941f, 22.7091f, vVar1) < 8f)
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		request_anim_dict("oddjobs@hunterIntro");
		request_anim_dict("oddjobs@hunterOutro");
		iLocal_128 = 1;
	}
	else if ((iLocal_128 && has_anim_dict_loaded("oddjobs@hunterIntro")) && has_anim_dict_loaded("oddjobs@hunterOutro"))
	{
		remove_anim_dict("oddjobs@hunterIntro");
		remove_anim_dict("oddjobs@hunterOutro");
		iLocal_128 = 0;
	}
}

void func_39(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

bool func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_41(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_52(0))
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

int func_41(int iParam0)
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

void func_42(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_41(*iParam0);
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

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_42(iParam0);
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

bool func_44(auto uParam0)
{
	return true;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	_display_help_text_from_string_label(0, 0, true, -1);
}

int func_46(int iParam0)
{
	func_47();
	return iParam0 == Global_101154.f_1826.f_539.f_3549;
}

void func_47()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_50(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_49(player_ped_id());
			if (func_48(iVar0) && (!func_74(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_48(Global_101154.f_1826.f_539.f_3549))
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

int func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

auto func_51()
{
	return Global_68058;
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

int func_53(int iParam0, int iParam1)
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

int func_54()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_55()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_56(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_57()
{
	return true;
}

void func_58(auto uParam0, int iParam1)
{
	func_59(uParam0, iParam1);
}

void func_59(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_60()
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

bool func_61(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_69();
				if (!func_48(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_68()) || Global_100201) || Global_25122) || func_67()) || func_53(8, -1)) || func_66()) || func_65()) || func_64()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_68()) || Global_25122) || func_67()) || func_53(8, -1)) || func_64()) || func_66()) || func_65()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_68()) || Global_100201) || Global_25122) || func_67()) || func_53(8, -1)) || func_64()) || func_66()) || func_65()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_68()) || Global_100201) || Global_25122) || func_67()) || func_53(8, -1)) || func_66()) || func_65()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_68() || get_player_wanted_level(player_id()) > 0) || func_53(8, -1)) || func_55()) || func_63()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_66()) || func_65()) || func_63()) || func_62())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_68()) || Global_25122) || func_67()) || func_53(8, -1)) || func_65()) || func_64()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_68()) || func_65()) || Global_100201) || Global_25122) || func_67()) || Global_36839) || func_53(8, -1)) || func_64()) || func_63()) || func_55()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_68()) || Global_100201) || Global_25122) || func_67()) || func_53(8, -1)) || func_64()) || func_63()) || func_66()) || func_65()) || func_55())
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

auto func_62()
{
	return Global_91317.f_1;
}

int func_63()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_64()
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

int func_65()
{
	return Global_91330.f_297 > 0;
}

int func_66()
{
	return Global_91330.f_296 > 0;
}

auto func_67()
{
	return Global_1315913;
}

int func_68()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

auto func_69()
{
	func_47();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_70()
{
	if (_get_number_of_instances_of_streamed_script(joaat("stripperhome")) > 0)
	{
		return true;
	}
	return false;
}

auto func_71()
{
	return Global_87443;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_74(6) || func_74(7))
			{
				return 1;
			}
			else
			{
				return func_72(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_84(5))
			{
				if (func_61(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_74(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_75(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76()
{
	if (iLocal_125)
	{
		iLocal_126 = true;
		if (!iLocal_127)
		{
			clear_area_of_vehicles(-1702.46f, 4666.36f, 22.1255f, 10f, 0, 0, 0, 0, false);
			if (!does_entity_exist(iLocal_123))
			{
				iLocal_123 = create_vehicle(joaat("blazer"), -1707.434f, 4666.563f, 22.1095f, 323.2491f, 1, true);
			}
			if (!does_entity_exist(iLocal_124))
			{
				iLocal_124 = create_vehicle(joaat("journey"), -1702.695f, 4666.941f, 22.7091f, 80.03f, 1, true);
				set_vehicle_has_strong_axles(iLocal_124, true);
			}
			iLocal_127 = 1;
		}
	}
}

int func_77()
{
	if (iLocal_125)
	{
		return (has_model_loaded(joaat("blazer")) && has_model_loaded(joaat("journey")));
	}
	return true;
}

void func_78()
{
	if (iLocal_125)
	{
		request_model(joaat("blazer"));
		request_model(joaat("journey"));
	}
}

void func_79(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_80(int iParam0, int iParam1, int iParam2)
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

bool func_81()
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

int func_82()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0)
{
	return func_85(iParam0, Global_35711);
}

bool func_85(int iParam0, int iParam1)
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

int func_86(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_87()
{
	StringCopy(&cLocal_53, "hunting_ambient", 64);
	iLocal_99 = 3;
	iLocal_119 = 2;
	sLocal_101 = "PLAY_HUNT";
	iLocal_120 = 5;
	iLocal_121 = 19;
	fLocal_117 = 2f;
	iLocal_105 = 69;
	fLocal_102 = to_float(func_89(iLocal_105)) + 5f;
	if (!func_83(0, 3))
	{
		func_88(iLocal_105);
		iLocal_125 = false;
	}
	iLocal_97 = 18000;
}

void func_88(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_80(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_42(&iLocal_96);
		iLocal_95 = 9;
	}
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_90(auto uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_92(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_105 != 263)
		{
			func_80(iLocal_105, 0, 0);
		}
	}
	func_42(&iLocal_96);
	if (func_86(uLocal_94, 2))
	{
		func_4();
		func_90(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_93();
	terminate_this_thread();
}

void func_93()
{
	func_90(&uLocal_94, 4);
	func_94();
	if (is_thread_active(iLocal_52))
	{
		force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!is_string_null(&Local_69))
	{
		if (get_length_of_literal_string(&Local_69) != 0)
		{
			set_script_as_no_longer_needed(&Local_69);
		}
	}
}

void func_94()
{
}

