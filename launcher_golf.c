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
	int iLocal_86 = 0;
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
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	struct<2> Local_125 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	auto uLocal_132 = 0;
	auto uLocal_133 = 0;
	auto uLocal_134 = 0;
	auto uLocal_135 = 0;
	auto uLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 5;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
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
	iLocal_118 = 6;
	iLocal_119 = 18;
	vLocal_90 = {Local_125.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	iLocal_86 = iLocal_86;
	cLocal_69 = {cLocal_69};
	iVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_93(1);
	}
	iLocal_85 = get_player_ped(player_id());
	iLocal_95 = 0;
	func_91(&Global_99807, 0);
	func_88();
	if (func_87(uLocal_94, 1))
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
	if (!func_87(uLocal_94, 8))
	{
		if (!func_85(iLocal_100))
		{
			if (func_84(0, iLocal_99))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_84(0, iLocal_99))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_94, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1 && !func_87(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		iLocal_85 = get_player_ped(player_id());
		if (func_87(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_85, 0))
			{
				func_93(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, 0))
		{
			vLocal_87 = {ENTITY::GET_ENTITY_COORDS(iLocal_85, 1)};
			fLocal_93 = vdist2(vLocal_87, Local_125.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Local_125.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_85(iLocal_100) || (func_87(uLocal_94, 16) && !func_87(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_110 > fLocal_102 * fLocal_102)
						{
							if (iLocal_105 != 263)
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_80(10);
						}
						if (vLocal_87.z - Local_125.f_1[0 /*3*/].f_2 > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_103 = iLocal_103;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_100))
					{
						if (!func_87(uLocal_94, 8))
						{
							iVar1 = true;
							if (are_strings_equal(&(Global_91278.f_3), &cLocal_69))
							{
								cLocal_69 = {cLocal_53};
								iVar1 = false;
							}
							if (iVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_94, 4))
					{
						func_77();
						func_76(&uLocal_94, 4);
					}
					if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_75(6) && !func_74(iLocal_105))
							{
							}
							else
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_69 = {cLocal_53};
						iVar2 = !func_87(uLocal_94, 64);
						func_91(&uLocal_94, 128);
						if (!func_73(3) && !Global_91312)
						{
							if (func_87(uLocal_94, 2097152))
							{
								if ((!func_87(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_72())) && !Global_91312)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_100201) || func_62())
						{
							iVar2 = false;
						}
						if (func_87(uLocal_94, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_94, 128);
								iVar2 = false;
							}
						}
						if (func_58(1))
						{
							iVar2 = false;
						}
						if (Global_69489)
						{
							iVar2 = false;
						}
						if (func_57())
						{
							iVar2 = false;
						}
						if (is_player_switch_in_progress())
						{
							iVar2 = false;
						}
						if (func_56() || func_55(8, -1))
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
						if (func_54(0) || func_53())
						{
							iVar2 = false;
						}
						if (iVar2)
						{
							if (is_ped_in_any_vehicle(iLocal_85, 0))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(get_vehicle_ped_is_in(iLocal_85, 0), Local_125.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, false, false, iLocal_103))
								{
									iVar2 = false;
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_125.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
							{
								iVar2 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_125.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, 0))
							{
								func_59(&uLocal_94, 128);
								iVar2 = false;
							}
							iVar3 = get_clock_hours();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_59(&uLocal_94, 128);
									iVar2 = false;
									if (fLocal_93 < fLocal_117 * fLocal_117 + 4f)
									{
										if (!func_87(uLocal_94, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_118, iLocal_119);
											func_59(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_59(&uLocal_94, 128);
								iVar2 = false;
								if (fLocal_93 < fLocal_117 * fLocal_117 + 4f)
								{
									if (!func_87(uLocal_94, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_118, iLocal_119);
										func_59(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_94, 134217728);
								}
							}
							if (iVar2 && func_46(func_47()) < iLocal_120)
							{
								func_59(&uLocal_94, 128);
								iVar2 = false;
								if (!func_87(uLocal_94, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_59(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_94, 33554432);
							}
							if (!is_player_control_on(player_id()))
							{
								iVar2 = false;
							}
							if (iVar2)
							{
								set_input_exclusive(0, 51);
								if (func_44(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_43(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_42(sLocal_101, iLocal_120);
											func_59(&uLocal_94, 2048);
										}
										else
										{
											func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_59(&uLocal_94, 2048);
										}
									}
									else if (!func_87(uLocal_94, 2048) || !is_help_message_being_displayed())
									{
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
									}
									if (func_39(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
										if (func_87(uLocal_94, 2048))
										{
											if (is_help_message_being_displayed())
											{
												func_91(&uLocal_94, 2048);
												clear_help(0);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&cLocal_69);
										set_player_control(player_id(), false, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									if (func_87(uLocal_94, 2048))
									{
										if (is_help_message_being_displayed())
										{
											func_91(&uLocal_94, 2048);
											clear_help(0);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&cLocal_69);
									set_player_control(player_id(), false, 56);
									func_80(5);
								}
							}
						}
						if (!iVar2)
						{
							if (iLocal_96 != -1)
							{
								if (is_help_message_being_displayed())
								{
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									clear_help(0);
								}
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
							func_41(&iLocal_96);
						}
						iVar4 = 2;
						iVar0 = false;
						if (func_87(uLocal_94, 1))
						{
							if (func_75(6) || func_75(7))
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
								func_24(PLAYER::PLAYER_PED_ID());
							}
							set_player_control(player_id(), true, 56);
							iLocal_52 = SYSTEM::START_NEW_SCRIPT(&cLocal_69, iLocal_97);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
							cLocal_53 = {cLocal_69};
							StringCopy(&cLocal_69, "", 64);
							func_91(&uLocal_94, 4);
							func_23();
							func_59(&uLocal_94, 2);
							func_80(6);
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
							func_80(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_87(Global_99807, 262144))
					{
						func_91(&Global_99807, 262144);
						func_13();
					}
					if (func_87(uLocal_94, 2097152))
					{
						if (!func_73(3) && !is_thread_active(iLocal_52))
						{
							func_80(10);
						}
					}
					if (!is_thread_active(iLocal_52))
					{
						playstats_oddjob_done(round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
						func_8(&iLocal_107);
						func_91(&uLocal_94, 256);
						func_7();
						if (iVar0)
						{
							func_91(&uLocal_94, 2);
						}
						else if (func_87(uLocal_94, 2))
						{
							if (func_87(Global_99807, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
						}
						func_80(0);
						if (iLocal_99 != -1)
						{
							if (func_87(Global_99807, 0))
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
						func_91(&Global_99807, 0);
						if (func_87(uLocal_94, 16777216))
						{
							func_93(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_84(0, iLocal_99))
								{
									func_93(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_110 > fLocal_102 * fLocal_102)
					{
						if (iLocal_105 != 263)
						{
							func_81(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_81(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_41(&iLocal_96);
					}
					if (!is_string_null_or_empty(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							clear_help(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if (iLocal_104 % 150 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_85(iLocal_100) && func_84(0, iLocal_99))
									{
										func_88();
										if (iLocal_105 != 263)
										{
											func_81(iLocal_105, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > fLocal_102 * fLocal_102)
								{
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > 80f + 5f * 80f + 5f)
								{
									func_88();
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_105, 1, 0);
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
			return func_10(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_11(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_12(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
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
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
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
	*iParam0.f_1 = func_10(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
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
	int iVar0;
	var[] uVar1 = new var[100];
	int iVar102;
	int iVar103;
	
	if (get_closest_ped(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &iVar0, 0, 0, -1))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar102 = get_ped_nearby_peds(iVar0, &uVar1, -1);
			AI::CLEAR_PED_TASKS(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar103]))
			{
				AI::CLEAR_PED_TASKS(uVar1[iVar103]);
			}
			iVar103++;
		}
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
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
		if (Global_36616[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
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
	GAMEPLAY::CLEAR_BIT(&Global_2283, 25);
	GAMEPLAY::SET_BIT(&Global_2284, 11);
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
		if (!func_85(iParam2))
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
	if (func_85(iParam0))
	{
		return false;
	}
	return true;
}

void func_37()
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, vLocal_90, fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

auto func_38(int iParam0)
{
	return Global_101154.f_29429[iParam0 /*4*/];
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_54(0))
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

int func_40(int iParam0)
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

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
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

void func_42(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	_display_help_text_from_string_label(0, 1, true, -1);
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
			func_41(iParam0);
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

bool func_44(int iParam0)
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iParam0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (!is_entity_in_air(iParam0) && is_vehicle_on_all_wheels(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	_display_help_text_from_string_label(0, 0, true, iParam2);
}

int func_46(int iParam0)
{
	auto uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

auto func_47()
{
	func_48();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_48()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_51(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_50(PLAYER::PLAYER_PED_ID());
			if (func_49(iVar0) && (!func_75(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_49(Global_101154.f_1826.f_539.f_3549))
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

int func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	_display_help_text_from_string_label(0, 0, true, -1);
}

auto func_53()
{
	return Global_68058;
}

bool func_54(int iParam0)
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

int func_55(int iParam0, int iParam1)
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

int func_56()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_57()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_58(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_59(auto uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()
{
	if (func_75(6) || func_75(7))
	{
		return func_74(68);
	}
	return true;
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
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
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((iVar1 && is_control_pressed(0, 69)) || (iVar1 && is_control_pressed(0, 70))) || (iVar1 && is_control_pressed(0, 68))) || is_player_targetting_anything(player_id()));
	}
	return (((((iVar1 && is_control_pressed(0, 24)) || (iVar1 && is_control_pressed(0, 25))) || (iVar1 && is_control_pressed(0, 47))) || _0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID())) || is_player_targetting_anything(player_id()));
}

bool func_63(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_70()) || Global_100201) || Global_25122) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_70()) || Global_25122) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_70()) || Global_100201) || Global_25122) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_70()) || Global_100201) || Global_25122) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_70() || get_player_wanted_level(player_id()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_70()) || Global_25122) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_70()) || func_67()) || Global_100201) || Global_25122) || func_69()) || Global_36839) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_70()) || Global_100201) || Global_25122) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
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

auto func_64()
{
	return Global_91317.f_1;
}

int func_65()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_66()
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

int func_67()
{
	return Global_91330.f_297 > 0;
}

int func_68()
{
	return Global_91330.f_296 > 0;
}

auto func_69()
{
	return Global_1315913;
}

int func_70()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_71()
{
	if (_get_number_of_instances_of_streamed_script(joaat("stripperhome")) > 0)
	{
		return true;
	}
	return false;
}

auto func_72()
{
	return Global_87443;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_75(6) || func_75(7))
			{
				return 1;
			}
			else
			{
				return func_73(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_85(5))
			{
				if (func_63(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_75(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_76(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77()
{
}

bool func_78()
{
	return true;
}

void func_79()
{
}

void func_80(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_81(int iParam0, int iParam1, int iParam2)
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
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

bool func_82()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

int func_83()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_84(int iParam0, int iParam1)
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
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_85(int iParam0)
{
	return func_86(iParam0, Global_35711);
}

bool func_86(int iParam0, int iParam1)
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

int func_87(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_88()
{
	StringCopy(&cLocal_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_76(&uLocal_94, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_103 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_90(ENTITY::DOES_ENTITY_EXIST(func_72()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = to_float(func_89(iLocal_105)) + 5f;
	iLocal_97 = 18000;
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

int func_90(int iParam0)
{
	if (iParam0)
	{
		return 200;
	}
	return 100;
}

void func_91(auto uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_93(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 0, 0);
		}
	}
	func_41(&iLocal_96);
	if (func_87(uLocal_94, 2048))
	{
		if (func_96(sLocal_101, iLocal_120))
		{
			func_91(&uLocal_94, 2048);
			clear_help(0);
		}
	}
	if (func_87(uLocal_94, 2))
	{
		func_4();
		func_91(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_94();
	terminate_this_thread();
}

void func_94()
{
	func_91(&uLocal_94, 4);
	func_95();
	if (is_thread_active(iLocal_52))
	{
		force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!is_string_null(&cLocal_69))
	{
		if (get_length_of_literal_string(&cLocal_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
		}
	}
}

void func_95()
{
}

int func_96(char* sParam0, int iParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	add_text_component_integer(iParam1);
	return _0x10BDDBFC529428DD(0);
}

