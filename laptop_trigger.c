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
	auto uLocal_56 = 0;
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
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
	auto uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	Vector3 vLocal_111 = 0;
	Vector3 vLocal_114 = 0;
	char[16] cLocal_117 = 0;
	int iLocal_121 = 0;
#endregion

void main()
{
	int iVar0;
	char* sVar1;
	var[] uVar2 = new var[25];
	int iVar28;
	Vector3 vVar29;
	int iVar32;
	Vector3 vVar33;
	int iVar36;
	int iVar37;
	int iVar38;
	Vector3 vVar39;
	int iVar42;
	struct<16> Var43;
	Vector3 vVar59;
	int iVar62;
	int iVar63;
	
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
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_97 = -1;
	vLocal_111 = {0f, 0f, 0f};
	iLocal_108 = iLocal_121;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		terminate_this_thread();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_173();
		terminate_this_thread();
	}
	if (func_172(13) || func_172(14))
	{
		func_173();
		terminate_this_thread();
	}
	if (Global_31484)
	{
		func_173();
		terminate_this_thread();
	}
	if (Global_68066)
	{
		terminate_this_thread();
	}
	iVar0 = false;
	sVar1 = "tvscreen";
	iVar28 = true;
	vVar29 = {ENTITY::GET_ENTITY_COORDS(iLocal_121, 1) - get_entity_forward_vector(iLocal_121) * Vector(0.6f, 0.6f, 0.6f)};
	vVar29.z += 0.5f;
	vLocal_114 = {get_offset_from_entity_in_world_coords(iLocal_121, vLocal_111)};
	Global_1728814 = 0;
	while (iVar28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
		{
			if (iLocal_99)
			{
				if (!func_168(player_id()))
				{
					if (!func_167(&uLocal_102))
					{
						func_166(&uLocal_102, 1, 0);
					}
				}
			}
			if (Global_1728814 && func_164(player_id()))
			{
				if (!func_167(&uLocal_106))
				{
					func_166(&uLocal_106, 0, 0);
				}
				else if (func_163(&uLocal_106, 10000, 0))
				{
					func_162(&uLocal_106);
					Global_1728814 = 0;
				}
				func_161();
			}
			if (Global_1587507)
			{
				if (!iVar0)
				{
					iVar32 = ENTITY::GET_ENTITY_MODEL(iLocal_108);
					if (iVar32 == 1385417869)
					{
						create_model_hide(ENTITY::GET_ENTITY_COORDS(iLocal_121, 1), 1f, 1385417869, 0);
						vVar33 = {get_entity_rotation(iLocal_108, 2)};
						iLocal_108 = create_object(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1), 0, true, false);
						set_entity_rotation(iLocal_108, vVar33, 2, 1);
						iVar0 = true;
					}
				}
			}
			if (has_object_been_broken(iLocal_108))
			{
				func_173();
				terminate_this_thread();
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_108)) && !is_cutscene_playing()) && is_player_playing(get_player_index()))
		{
			if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_from_entity(iLocal_108))
			{
				iVar36 = false;
				iVar37 = get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar38], 0))
					{
						if (is_entity_playing_anim(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							iVar36 = true;
						}
						else if (is_entity_playing_anim(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							iVar36 = true;
						}
					}
					iVar38++;
				}
				if (Global_16)
				{
					iVar36 = true;
				}
				vVar39 = {0.6f, 0.6f, 0.8f};
				if (func_160())
				{
					vVar39 = {1f, 1f, 0.9f};
				}
				iVar42 = func_159(player_id());
				if ((((((((((((!iVar36 && !func_158(0)) && !is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0)) && !func_157()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar29, vVar39, false, true, 1)) && get_room_key_from_entity(PLAYER::PLAYER_PED_ID()) == get_room_key_from_entity(iLocal_108)) && !GAMEPLAY::IS_BIT_SET(Global_2359301, 15)) && !func_156()) && !(Global_69489 && func_155())) && !(!Global_69489 && func_154())) && !((Global_69489 && GAMEPLAY::IS_BIT_SET(Global_1617379.f_14, 24)) && network_is_activity_session())) && !((Global_69489 && func_153()) && func_152())) && !network_is_in_mp_cutscene())
				{
					if (!func_151(Global_1587523[player_id() /*444*/].f_250.f_9))
					{
						if (func_164(player_id()) && iLocal_100 != iVar42)
						{
							if (iLocal_97 != -1)
							{
								func_150(&iLocal_97);
							}
							if (func_148())
							{
								clear_help(1);
							}
						}
						iLocal_100 = iVar42;
						if (iLocal_97 == -1)
						{
							if (iVar0)
							{
								func_147(&iLocal_97, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_160())
							{
								if (((func_146() && !network_is_player_in_mp_cutscene(player_id())) && !func_145()) && !Global_1728814)
								{
									if (func_143())
									{
										func_142("WHPRIVSESLAP");
									}
									else if (!iVar42)
									{
										if (func_141() >= func_140())
										{
											func_147(&iLocal_97, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
										}
										else if (network_is_activity_session())
										{
											func_142("WHSECUROBLCK");
										}
										else
										{
											func_147(&iLocal_97, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
										}
									}
									else if ((func_167(&uLocal_102) && func_163(&uLocal_102, 10000, 1)) || !iLocal_99)
									{
										if (func_168(player_id()) || Global_1728814 == 1)
										{
											iLocal_99 = true;
											if (!Global_1728814)
											{
												func_142("WHSECUROBLCK");
											}
										}
										else
										{
											if (func_148())
											{
												clear_help(1);
											}
											iLocal_99 = false;
											func_162(&uLocal_102);
											func_147(&iLocal_97, 1, "WHSECUROINPUT", 0, 0, 0, 0);
										}
									}
									else if (iLocal_99)
									{
										if (!is_help_message_being_displayed())
										{
											func_142("WHSECUROBLCK");
										}
									}
								}
							}
							else
							{
								func_147(&iLocal_97, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((func_138(iLocal_97, 1) && !is_ped_running(PLAYER::PLAYER_PED_ID())) && func_137()) || Global_25392)
					{
						Global_25387 = 1;
						Global_25392 = 0;
						if (iLocal_97 != -1)
						{
							func_150(&iLocal_97);
						}
						if (!iVar0)
						{
							StringCopy(&Var43, "", 64);
							if (func_146())
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
									vVar59 = {get_offset_from_entity_in_world_coords(iLocal_121, 0.0328f, -0.8f, 0.3f)};
									iVar62 = false;
									func_162(&uLocal_104);
									if (func_126(0, &Var43))
									{
										while (!iVar62)
										{
											func_161();
											if (!func_167(&uLocal_104))
											{
												func_166(&uLocal_104, 0, 0);
											}
											else if (func_163(&uLocal_104, 4000, 0))
											{
												iVar62 = true;
											}
											if (!func_125(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar59, 0.05f, 0) && !func_124(get_entity_heading(PLAYER::PLAYER_PED_ID()), get_entity_heading(iLocal_121), 5f))
											{
												if (!func_121(PLAYER::PLAYER_PED_ID(), 2106541073))
												{
													task_go_straight_to_coord(PLAYER::PLAYER_PED_ID(), vVar59, 1f, 5000, get_entity_heading(iLocal_121), 0.25f);
												}
											}
											else
											{
												iVar62 = true;
											}
											wait(0);
										}
										func_162(&uLocal_104);
										iLocal_109 = 0;
									}
								}
								while (iLocal_109 != 3)
								{
									func_120(iLocal_121);
									func_161();
									wait(0);
								}
							}
							if (func_160())
							{
								func_119(0, 1);
								if (((!iVar42 && !func_118(player_id(), 1)) && func_141() < func_140()) && !network_is_activity_session())
								{
									func_10(1);
								}
							}
							else
							{
								func_119(0, 0);
							}
							if (!iLocal_98)
							{
								func_6();
								iLocal_98 = 1;
							}
							iVar63 = true;
							if (func_146())
							{
								func_1(0);
								wait(500);
								func_1(1);
							}
							while (iVar63)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_108) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1), 1.5f, 1.5f, 4f, false, true, 1))
								{
									Global_68061 = 1;
								}
								if (func_146())
								{
									if (!Global_68058)
									{
										iVar63 = false;
										Global_25387 = 0;
									}
								}
								else if (Global_68058 || Global_68061)
								{
									iVar63 = false;
								}
								if (func_146())
								{
									func_161();
								}
								wait(0);
							}
							if (func_146())
							{
								if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (is_ped_using_any_scenario(PLAYER::PLAYER_PED_ID()))
											{
												_0xF1C03A5352243A30(PLAYER::PLAYER_PED_ID());
												if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
												{
													AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
												}
											}
											if (func_126(1, &Var43))
											{
												remove_anim_dict(&Var43);
											}
											if (func_126(2, &Var43))
											{
												if (iLocal_109 != 0)
												{
													if (is_synchronized_scene_running(iLocal_110))
													{
														detach_synchronized_scene(iLocal_110);
														iLocal_110 = -1;
													}
													iLocal_110 = network_create_synchronised_scene(vLocal_114, get_entity_rotation(iLocal_121, 2), 2, false, false, 1f, 0f, 1f);
													network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &Var43, "exit", 8f, -4f, 5, 0, 1000f, 0);
													network_start_synchronised_scene(iLocal_110);
													remove_anim_dict(&Var43);
												}
											}
										}
									}
								}
							}
							func_161();
							func_162(&uLocal_106);
							iLocal_98 = 0;
						}
					}
				}
				else
				{
					if (iLocal_97 != -1)
					{
						func_150(&iLocal_97);
					}
					if (func_164(player_id()))
					{
						if (func_148())
						{
							clear_help(1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
					{
						if (!is_object_within_brain_activation_range(iLocal_121))
						{
							iVar28 = false;
						}
					}
					Global_25387 = 0;
				}
			}
			else if (iLocal_97 != -1)
			{
				func_150(&iLocal_97);
			}
		}
		else
		{
			if (iLocal_97 != -1)
			{
				func_150(&iLocal_97);
			}
			iVar28 = false;
		}
		wait(0);
	}
	Global_25387 = 0;
	if (iVar0)
	{
		if (is_named_rendertarget_registered(sVar1))
		{
			release_named_rendertarget(sVar1);
		}
	}
}

void func_1(int iParam0)
{
	if (iParam0)
	{
		func_5();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_158(0))
		{
			func_2(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_2(int iParam0)
{
	if (Global_14571)
	{
		func_4(0, 0);
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
	if (!func_3())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_3()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_158(0))
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

void func_5()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_6()
{
	if (func_9() || func_8())
	{
		func_7();
	}
}

void func_7()
{
	Global_2434762.f_631 = 1;
}

auto func_8()
{
	return Global_2434762.f_610;
}

int func_9()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 11);
}

void func_10(int iParam0)
{
	struct<14> Var0;
	
	func_66(1, 1);
	if (iParam0)
	{
		if (func_65(88) || func_65(95))
		{
			func_64();
		}
		func_63(17);
		Var0.f_2 = 183;
		func_61(Var0, func_62(0, 1));
		func_30();
		if (!func_29(player_id()))
		{
			func_11(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

bool func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_12(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_12(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_23();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_22() == 0)
	{
		func_20();
		return false;
	}
	func_19(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_18(0);
		func_18(2);
		func_18(1);
	}
	else
	{
		func_23();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_18(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_18(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_18(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_18(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_23();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_17())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_16(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(1);
			func_16(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_13(int iParam0)
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
		if (func_172(14))
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
									func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_14(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_14(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

void func_15(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_16(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

auto func_17()
{
	return Global_1315913;
}

void func_18(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_19(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_21(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_21(struct<6> Param0, struct<6> Param1)
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

bool func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_21(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

void func_23()
{
	if (func_172(14))
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
		Global_14413 = func_24();
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

auto func_24()
{
	func_25();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_25()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_28(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_27(PLAYER::PLAYER_PED_ID());
			if (func_26(iVar0) && (!func_172(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_26(Global_101154.f_1826.f_539.f_3549))
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

int func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

void func_30()
{
	if ((!func_57() && func_44()) && func_39(player_id()))
	{
		func_31("GB_INFO_LFG", 1);
	}
}

int func_31(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_32(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_32(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_38() || !network_is_activity_session()) || !func_35(player_id(), 0))
	{
		return;
	}
	iVar0 = func_33(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_34(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_36(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

auto func_37()
{
	return Global_1312747;
}

int func_38()
{
	return is_dlc_present(-1762644250);
}

bool func_39(int iParam0)
{
	if (iParam0 == func_43())
	{
		return false;
	}
	if (!func_42(iParam0, 0, 1))
	{
		return false;
	}
	if (func_35(iParam0, 0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 2) || GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return false;
	}
	if (func_40(iParam0))
	{
		return false;
	}
	return true;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return false;
}

int func_41(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

bool func_42(int iParam0, int iParam1, int iParam2)
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

int func_43()
{
	return -1;
}

bool func_44()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (func_42(iVar1, 0, 1))
		{
			if (iVar1 != player_id())
			{
				if (func_41(iVar1, 15) && func_45(iVar1, 0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_45(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_43())
	{
		return false;
	}
	if (!func_42(iParam0, 0, 1))
	{
		return false;
	}
	if (func_35(iParam0, 0))
	{
		return false;
	}
	if (func_55(iParam0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 2) || GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return false;
	}
	if (func_54(iParam0))
	{
		return false;
	}
	if (iParam2)
	{
		if (func_52(iParam0, iParam1, 1))
		{
			return false;
		}
		if (func_51(iParam0))
		{
			return false;
		}
	}
	else if (func_118(iParam0, 1))
	{
		return false;
	}
	if (func_50(iParam0))
	{
		return false;
	}
	if (func_40(iParam0))
	{
		return false;
	}
	if (func_46(iParam0))
	{
		return false;
	}
	return true;
}

int func_46(int iParam0)
{
	return func_47(iParam0) > 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_42(iParam0, 0, 1))
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_117 != -1)
		{
			iVar0 = Global_1610316[iParam0 /*174*/].f_10.f_117;
		}
		else
		{
			iVar0 = func_49(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = iVar0 + func_48() - _get_posix_time();
		return iVar1;
	}
	return -1;
}

auto func_48()
{
	return Global_262145.f_12331;
}

int func_49(int iParam0)
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

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_51(int iParam0)
{
	return func_41(iParam0, 20);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_43())
	{
		if (!iParam2)
		{
			if (func_53(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam1 != func_43())
	{
		if (iParam0 != func_43())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

int func_54(int iParam0)
{
	return func_41(iParam0, 30);
}

bool func_55(int iParam0)
{
	if (!func_41(iParam0, 2))
	{
		return true;
	}
	if (func_41(iParam0, 1))
	{
		return true;
	}
	if (func_56(iParam0) > 0)
	{
		return true;
	}
	return false;
}

auto func_56(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_18;
}

bool func_57()
{
	int iVar0;
	auto uVar1;
	char[64] cVar17;
	
	iVar0 = 0;
	while (iVar0 < func_60())
	{
		if (Global_1610316[player_id() /*174*/].f_10.f_10[iVar0] == func_43())
		{
			StringCopy(&cVar17, "", 64);
			cVar17 = {func_58(func_59(iVar0))};
			if (are_strings_equal(&cVar17, &uVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

struct<16> func_58(auto uParam0)
{
	return Global_2435528.f_3065.f_18[uParam0 /*16*/];
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

auto func_60()
{
	return Global_262145.f_10303;
}

void func_61(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_62(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_42(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_35(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

int func_65(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

void func_66(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar6;
	int iVar7;
	auto uVar8;
	auto uVar9;
	char* sVar10;
	char[64] cVar11;
	int iVar27;
	int iVar28;
	
	if (!func_115())
	{
		return;
	}
	iVar7 = 1;
	if (func_29(player_id()))
	{
		iVar7 = 2;
	}
	if (Global_1610316[player_id() /*174*/].f_10 != player_id())
	{
		if (iParam1)
		{
			unk_0x3EBEAC6C3F81F6BD(iVar7);
			func_112(0);
			func_110(0);
			func_109(21);
			func_109(22);
		}
		Global_1610316[player_id() /*174*/].f_10 = player_id();
		unk_0x6BC0ACD0673ACEBE(func_37(), &uVar8, &uVar9);
		func_108(uVar8, uVar9);
		sVar10 = _network_player_get_user_id(player_id(), &uVar0);
		StringCopy(&cVar11, sVar10, 64);
		func_107(cVar11);
		func_106();
		if (func_105(3892, -1, 0) <= 0)
		{
			iVar6 = _get_posix_time();
		}
		else
		{
			iVar6 = func_105(3892, -1, 0) - 43200;
		}
		func_102(iVar6);
		if (decor_is_registered_as_type("Player_Boss", 3))
		{
			decor_set_int(PLAYER::PLAYER_PED_ID(), "Player_Boss", player_id());
		}
		Global_1610316[player_id() /*174*/].f_10.f_19 = -1;
		Global_1610316[player_id() /*174*/].f_10.f_20 = -1;
		Global_2460486.f_4660.f_25 = -1;
		func_95();
		func_86(0);
		if (iParam0)
		{
			func_63(0);
		}
		if (Global_2460486.f_4660.f_61 != func_43())
		{
			Global_2460486.f_4660.f_61 = func_43();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1643, 15))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1643), 15);
		}
		if (func_85(15))
		{
			func_84(15);
		}
		if (!func_83() && !network_is_activity_session())
		{
			func_82();
			func_81(2);
		}
		func_80(3932, 2, -1, 1);
		func_109(31);
		func_78();
		func_70();
		if (!func_69(82, 3))
		{
			iVar27 = false;
			iVar28 = func_105(3889, -1, 0);
			if (!GAMEPLAY::IS_BIT_SET(iVar28, 11))
			{
				GAMEPLAY::SET_BIT(&iVar28, 11);
				func_80(3889, iVar28, -1, 1);
				iVar27 = true;
			}
			func_67(82, 3, iVar27);
		}
	}
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_23();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				iParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_68();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_68();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_68();
			}
		}
	}
}

void func_68()
{
	char[64] cVar0;
	char[64] cVar16;
	char* sVar32;
	
	StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		_set_notification_text_entry("");
		StringCopy(&cVar16, _get_label_text(&(Global_2893[1 /*6*/])), 64);
		sVar32 = _get_label_text("CELL_253");
		_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		_set_notification_text_entry("CELL_255");
		_add_text_component_item_string(&(Global_2893[1 /*6*/]));
		_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, false);
}

bool func_69(int iParam0, int iParam1)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return true;
	}
	return false;
}

void func_70()
{
	struct<16> Var0;
	
	Var0 = {func_77(45, 46, -1)};
	func_73(&Var0, 0);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_71(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_72()
{
	if (_0x66B59CFFD78467AF() == 0)
	{
		return false;
	}
	if (is_ps3_version())
	{
		if (_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_orbis_version())
	{
		if (_0x72D918C99BCACC54(1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_xbox360_version() || is_durango_version())
	{
		if (_0x595F028698072DD9(0, -3, 1))
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	return false;
}

void func_73(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		if (!is_string_null_or_empty(sParam0))
		{
			func_74(45, 46, sParam0, -1, 1);
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		StringCopy(&(Global_1610316[player_id() /*174*/].f_10.f_132), sParam0, 64);
	}
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_74(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char[32] cVar2;
	char[32] cVar10;
	int iVar18;
	int iVar19;
	
	if (func_76())
	{
		iVar0 = Global_2491657[iParam0 /*5*/][func_75(iParam3)];
		iVar1 = Global_2491657[iParam1 /*5*/][func_75(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = get_length_of_literal_string(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, _get_text_substring_safe(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, _get_text_substring_safe(sParam2, 10, iVar18, 31), 32);
				}
			}
			stat_set_string(iVar0, &cVar2, iParam4);
			stat_set_string(iVar1, &cVar10, iParam4);
		}
	}
}

int func_75(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
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

bool func_76()
{
	return true;
	return false;
}

struct<16> func_77(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	auto uVar1;
	char[64] cVar2;
	struct<8> Var18;
	
	uVar0 = Global_2491657[iParam0 /*5*/][func_75(iParam2)];
	uVar1 = Global_2491657[iParam1 /*5*/][func_75(iParam2)];
	StringCopy(&cVar2, stat_get_string(uVar0, -1), 64);
	StringCopy(&Var18, stat_get_string(uVar1, -1), 32);
	StringConCat(&cVar2, &Var18, 64);
	return cVar2;
}

void func_78()
{
	struct<16> Var0;
	
	Var0 = {func_77(55, 57, -1)};
	func_79(&Var0, 0);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_79(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		func_74(55, 57, sParam0, -1, 1);
	}
	StringCopy(&(Global_1610316[player_id() /*174*/].f_10.f_74), sParam0, 64);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_81(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2391017.f_2), iParam0);
	if (Global_2391017)
	{
		return;
	}
	Global_2391017 = 1;
	Global_2391017.f_1 = 0;
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390943.f_28[iVar0 /*2*/] != -1 && Global_2390943.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (does_blip_exist(Global_2390943.f_28[iVar0 /*2*/].f_1))
			{
				set_blip_as_short_range(Global_2390943.f_28[iVar0 /*2*/].f_1, true);
			}
		}
		iVar0++;
	}
}

auto func_83()
{
	return Global_2434762.f_615;
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_7[iVar0], iVar1);
}

void func_86(int iParam0)
{
	if (func_94())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_93(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_93(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_92();
		}
		if ((!network_is_activity_session() && !func_91()) && !func_87(player_id()))
		{
			Global_978142 = 0;
		}
		Global_1610316[player_id() /*174*/].f_8 = 0;
	}
}

bool func_87(int iParam0)
{
	if (func_88(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_88(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_89(uParam0))
		{
			return true;
		}
	}
	if (Global_1587523[uParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_89(auto uParam0)
{
	return func_90(uParam0);
}

int func_90(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

auto func_91()
{
	return Global_2434762.f_713;
}

void func_92()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_94())
		{
			if (func_42(player_id(), 1, 0))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			set_player_vehicle_defense_modifier(player_id(), 1f);
			_0x1B857666604B1A74(0);
			network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				use_player_colour_instead_of_team_colour(0);
			}
		}
		else
		{
			if (func_42(player_id(), 1, 1))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				set_player_vehicle_defense_modifier(player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					use_player_colour_instead_of_team_colour(1);
				}
			}
			_0x1B857666604B1A74(1);
			network_set_friendly_fire_option(0);
		}
	}
}

void func_93(auto uParam0, int iParam1, int iParam2)
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

auto func_94()
{
	return Global_1312416;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			func_97(1, iVar1);
			if (iVar1 != player_id())
			{
				func_96(iVar1);
			}
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_10.f_70, iParam0))
	{
		iVar0 = get_player_ped(iParam0);
		set_ped_can_be_targetted_by_player(iVar0, player_id(), 1);
		unk_0x55FCC0C390620314(player_id(), iParam0, 1);
		unk_0x55FCC0C390620314(iParam0, player_id(), 1);
		func_97(1, iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_70), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_42(iParam1, 0, 1))
	{
		iVar1 = get_player_ped(iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (is_ped_in_any_vehicle(iVar1, 0))
			{
				iVar0 = get_vehicle_ped_is_in(iVar1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					_0x7D6F9A3EF26136A0(iVar0, iParam0, 1);
					if (func_52(iParam1, func_101(), 1))
					{
						if (func_101() == iParam1)
						{
							if (Global_2460486.f_4660.f_62[3] != iVar0)
							{
								Global_2460486.f_4660.f_62[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_98(func_101(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2460486.f_4660.f_62[iVar2] != iVar0)
								{
									Global_2460486.f_4660.f_62[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!iParam0)
			{
				if (func_52(iParam1, func_101(), 1))
				{
					if (func_101() == iParam1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_2460486.f_4660.f_62[3]) && !ENTITY::IS_ENTITY_DEAD(Global_2460486.f_4660.f_62[3], 0))
						{
							_0x7D6F9A3EF26136A0(Global_2460486.f_4660.f_62[3], true, 1);
							Global_2460486.f_4660.f_62[3] = 0;
						}
					}
					else
					{
						iVar3 = func_98(func_101(), iParam1);
						if (iVar3 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Global_2460486.f_4660.f_62[iVar3]) && !ENTITY::IS_ENTITY_DEAD(Global_2460486.f_4660.f_62[iVar3], 0))
							{
								_0x7D6F9A3EF26136A0(Global_2460486.f_4660.f_62[iVar3], true, 1);
								Global_2460486.f_4660.f_62[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_159(iParam0))
	{
		if (func_52(iParam1, iParam0, 0) || func_100(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < func_60())
			{
				if (func_99(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_99(int iParam0, int iParam1)
{
	if (func_159(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 3)
		{
			return Global_1610316[iParam0 /*174*/].f_10.f_10[iParam1];
		}
	}
	return func_43();
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 != func_43())
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_21 != func_43())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10.f_21;
		}
	}
	return false;
}

auto func_101()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

void func_102(int iParam0)
{
	if (!func_115())
	{
		return;
	}
	Global_1610316[player_id() /*174*/].f_10.f_1 = iParam0;
	if (func_105(3892, -1, 0) != func_103(player_id()))
	{
		func_80(3892, func_103(player_id()), -1, 1);
	}
}

int func_103(int iParam0)
{
	if (func_104(iParam0) == -1)
	{
		return -1;
	}
	return func_104(iParam0) + 43200;
}

auto func_104(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_1;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_75(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		unk_0x265559DA40B3F327(1);
		unk_0x6A1738B4323FE2D9(-1755491431);
	}
}

void func_107(char[64] cParam0)
{
	Global_2435528.f_3065.f_2 = {cParam0};
}

void func_108(auto uParam0, auto uParam1)
{
	Global_1610316[player_id() /*174*/].f_10.f_7[0] = uParam0;
	Global_1610316[player_id() /*174*/].f_10.f_7[1] = uParam1;
}

void func_109(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

void func_110(int iParam0)
{
	func_111(204, iParam0, -1, 1);
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_76())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_75(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

void func_112(int iParam0)
{
	if (iParam0)
	{
		if (func_114(4))
		{
			func_71(21);
			func_71(22);
		}
		func_71(31);
		func_113(iParam0);
	}
	else
	{
		if (func_41(player_id(), 21))
		{
			func_109(21);
			if (!func_114(3) && func_114(4))
			{
				func_71(22);
			}
		}
		func_109(31);
		func_113(iParam0);
	}
}

void func_113(int iParam0)
{
	func_111(283, iParam0, -1, 1);
}

int func_114(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_18, iParam0);
}

bool func_115()
{
	if (func_117() && func_116(0))
	{
		return true;
	}
	return false;
}

auto func_116(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_117()
{
	return func_116(func_37() + 1);
}

int func_118(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_159(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_43();
}

void func_119(int iParam0, int iParam1)
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
	if (Global_69489 && func_155())
	{
		return;
	}
	if (!Global_69489 && func_154())
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

void func_120(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!func_164(player_id()))
	{
		return;
	}
	func_126(0, &sVar0);
	func_126(1, &sVar16);
	func_126(2, &sVar32);
	request_anim_dict(&sVar32);
	request_anim_dict(&sVar0);
	sVar48 = "idle_a";
	iVar49 = true;
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = true;
	}
	switch (iLocal_109)
	{
		case 0:
			iLocal_101 = 0;
			draw_debug_text("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			if (has_anim_dict_loaded(&sVar0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && has_anim_dict_loaded(&sVar0))
				{
					if (is_synchronized_scene_running(iLocal_110))
					{
						detach_synchronized_scene(iLocal_110);
						iLocal_110 = -1;
					}
					iLocal_110 = network_create_synchronised_scene(vLocal_114, get_entity_rotation(iParam0, 2), 2, false, false, 1f, 0f, 1f);
					network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar0, "enter", 4f, -2f, 5, 0, 1000f, 0);
					network_start_synchronised_scene(iLocal_110);
					remove_anim_dict(&sVar0);
					iLocal_109 = 1;
				}
			}
			break;
		
		case 1:
			draw_debug_text("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			request_anim_dict(&sVar16);
			iVar50 = _0x02C40BF885C567B6(iLocal_110);
			if (!iLocal_101)
			{
				if (get_synchronized_scene_phase(iVar50) >= 0.93f)
				{
					play_sound_frontend(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_101 = 1;
				}
			}
			if (has_anim_dict_loaded(&sVar16) && (!is_synchronized_scene_running(iVar50) || get_synchronized_scene_phase(iVar50) >= 0.96f))
			{
				iVar51 = get_random_int_in_range(false, iVar49);
				if ((((are_strings_equal(&cLocal_117, "idle_a") && iVar51 == 0) || (are_strings_equal(&cLocal_117, "idle_b") && iVar51 == 1)) || (are_strings_equal(&cLocal_117, "idle_c") && iVar51 == 2)) || (are_strings_equal(&cLocal_117, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = false;
					}
				}
				if (is_synchronized_scene_running(iLocal_110))
				{
					detach_synchronized_scene(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = network_create_synchronised_scene(vLocal_114, get_entity_rotation(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				switch (iVar51)
				{
					case 0:
						network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, "idle_a", 4f, -2f, 5, 0, 1000f, 0);
						network_start_synchronised_scene(iLocal_110);
						StringCopy(&cLocal_117, "idle_a", 16);
						iLocal_109 = 3;
						break;
					
					case 1:
						network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, "idle_b", 4f, -2f, 5, 0, 1000f, 0);
						network_start_synchronised_scene(iLocal_110);
						StringCopy(&cLocal_117, "idle_b", 16);
						iLocal_109 = 3;
						break;
					
					case 2:
						network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, "idle_c", 4f, -2f, 5, 0, 1000f, 0);
						network_start_synchronised_scene(iLocal_110);
						StringCopy(&cLocal_117, "idle_c", 16);
						iLocal_109 = 3;
						break;
					
					case 3:
						network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, "idle_d", 4f, -2f, 5, 0, 1000f, 0);
						network_start_synchronised_scene(iLocal_110);
						StringCopy(&cLocal_117, "idle_d", 16);
						iLocal_109 = 3;
						break;
					
					default:
						StringCopy(&cLocal_117, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_101 = 0;
			if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_a", 2))
			{
				draw_debug_text("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_b", 2))
			{
				draw_debug_text("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_c", 2))
			{
				draw_debug_text("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_d", 2))
			{
				draw_debug_text("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else
			{
				draw_debug_text("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			iVar50 = _0x02C40BF885C567B6(iLocal_110);
			if (!is_synchronized_scene_running(iLocal_110) && !is_synchronized_scene_running(iVar50))
			{
				if (is_synchronized_scene_running(iLocal_110))
				{
					detach_synchronized_scene(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = network_create_synchronised_scene(vLocal_114, get_entity_rotation(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				iVar50 = _0x02C40BF885C567B6(iLocal_110);
				if (is_synchronized_scene_running(iVar50))
				{
					set_synchronized_scene_phase(iVar50, 0f);
				}
				network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1000f, 0);
				network_start_synchronised_scene(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			if (has_anim_dict_loaded(&sVar16) && (!is_synchronized_scene_running(iVar50) || get_synchronized_scene_phase(iVar50) >= 0.99f))
			{
				if (is_synchronized_scene_running(iLocal_110))
				{
					detach_synchronized_scene(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = network_create_synchronised_scene(vLocal_114, get_entity_rotation(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				network_add_ped_to_synchronised_scene(PLAYER::PLAYER_PED_ID(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1000f, 0);
				network_start_synchronised_scene(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			break;
	}
}

bool func_121(int iParam0, int iParam1)
{
	if (func_122(iParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_122(int iParam0)
{
	if (func_123(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_123(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_124(Vector3 fParam0, Vector3 fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f)
	{
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f)
	{
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

bool func_125(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_126(int iParam0, char* sParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		StringCopy(sParam1, "", 64);
		return false;
	}
	if (func_127())
	{
		StringCopy(sParam1, "", 64);
		return false;
	}
	if (!func_164(player_id()))
	{
		StringCopy(sParam1, "", 64);
		return false;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

bool func_127()
{
	int iVar0;
	
	func_134(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_133())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_132())
	{
		return true;
	}
	if (func_131(157))
	{
		if (!func_130())
		{
			return true;
		}
	}
	if (func_131(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_128() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_128()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_128()
{
	switch (func_129())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_129()
{
	return Global_25120;
}

auto func_130()
{
	return Global_2434762.f_574;
}

bool func_131(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_132()
{
	return Global_2443085;
}

auto func_133()
{
	return Global_2434762.f_569;
}

void func_134(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_135(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_135(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_42(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_136(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_136(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_137()
{
	if (func_159(player_id()))
	{
		return true;
	}
	else if (func_141() < func_140())
	{
		return true;
	}
	return false;
}

bool func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_139(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_158(0))
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

int func_139(int iParam0)
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

auto func_140()
{
	return Global_262145.f_10305;
}

int func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar2))
		{
			if (func_159(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_143()
{
	if (func_144())
	{
		return 1;
	}
	return Global_2434762.f_619;
}

int func_144()
{
	return Global_1315871 == 10;
}

auto func_145()
{
	return Global_1728515.f_7;
}

bool func_146()
{
	if (func_164(player_id()))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1728515.f_2, false) || GAMEPLAY::IS_BIT_SET(Global_1728515.f_2, 2))
		{
			return true;
		}
	}
	return false;
}

void func_147(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_150(iParam0);
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

bool func_148()
{
	if (((func_149("MP_OFF_LAP_1") || func_149("WHPRIVSESLAP")) || func_149("WHSECUROBLCK")) || func_149("SECINPUTTREGLAP"))
	{
		return true;
	}
	return false;
}

int func_149(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_150(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_139(*iParam0);
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

bool func_151(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

int func_152()
{
	return func_159(player_id());
}

int func_153()
{
	return Global_1587523[player_id() /*444*/] == 148;
}

auto func_154()
{
	return Global_68059;
}

auto func_155()
{
	return Global_1715861;
}

bool func_156()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), -1) == PLAYER::PLAYER_PED_ID())
		{
			return true;
		}
	}
	return false;
}

bool func_157()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_158(int iParam0)
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

int func_159(int iParam0)
{
	if (iParam0 != func_43())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

bool func_160()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_108) == 743064848 || func_164(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_161()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_158(0))
		{
			func_2(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_162(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_163(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_166(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_164(int iParam0)
{
	if (iParam0 != func_43())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_165(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_165(int iParam0)
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
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

void func_166(auto uParam0, int iParam1, int iParam2)
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

auto func_167(auto uParam0)
{
	return *uParam0.f_1;
}

int func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

bool func_169(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		
		default:
	}
	return false;
}

int func_170(auto uParam0)
{
	if (func_171(uParam0, 0))
	{
		return Global_1610316[uParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_171(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_172(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_173()
{
	if (iLocal_97 != -1)
	{
		func_150(&iLocal_97);
	}
	if (((func_149("MP_OFF_LAP_1") || func_149("WHPRIVSESLAP")) || func_149("WHSECUROBLCK")) || func_149("SECINPUTTREGLAP"))
	{
		clear_help(1);
	}
	Global_25387 = 0;
	Global_1728814 = 0;
}

