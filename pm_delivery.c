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
	int iLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	auto uLocal_40 = 3;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 1092616192;
	auto uLocal_47 = 1101004800;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 3;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	Vector3 vLocal_64 = 0;
	Vector3 vLocal_67 = 0;
	Vector3 vLocal_70 = 0;
	Vector3 fLocal_73 = 0;
	Vector3 fLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int[] iLocal_90 = new int[2];
	int[] iLocal_93 = new int[2];
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var[] uLocal_99 = new var[2];
	int iLocal_102 = 0;
	char* sLocal_103 = 0;
	char* sLocal_104 = 0;
	char* sLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = -1;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 1000;
	auto uLocal_116 = 1000;
	auto uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_85 = -1;
	sLocal_103 = "PMDL_OBJ";
	sLocal_104 = "PMDL_LOC";
	sLocal_105 = "PMDL_BCK";
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_128(2);
		func_105();
	}
	iLocal_36 = func_103();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_98();
				}
				else
				{
					func_97();
				}
				if (iLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_96())
				{
					switch (iLocal_38)
					{
						case 0:
							func_93();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_65();
							}
							else
							{
								func_64();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_128(2);
	func_105();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_96))
	{
		if (is_vehicle_driveable(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = get_entity_health(iLocal_96) - 800;
			if (is_entity_upsidedown(iLocal_96))
			{
				set_entity_health(iLocal_96, get_entity_health(iLocal_96) - 5);
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
}

void func_4(auto uParam0, auto uParam1, char* sParam2, auto uParam3, auto uParam4, auto uParam5, float fParam6, float fParam7, int iParam8, auto uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_5(0, iVar0);
		Global_1339940.f_946[iVar0] = uParam0;
		Global_1339940.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1339940.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_946.f_194[iVar0] = uParam3;
		Global_1339940.f_946.f_183[iVar0] = uParam4;
		Global_1339940.f_946.f_216[iVar0] = uParam5;
		Global_1339940.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1339940.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1339940.f_946.f_258[iVar0] = iParam8;
		Global_1339940.f_946.f_269[iVar0] = uParam9;
		Global_1339940.f_946.f_312[iVar0] = iParam10;
		Global_1339940.f_946.f_323[iVar0] = iParam11;
		Global_1339940.f_946.f_334[iVar0] = iParam12;
		Global_1339940.f_946.f_345[iVar0] = iParam13;
		Global_1339940.f_941 = 1;
		Global_1339940.f_946.f_356[iVar0] = iParam14;
		Global_1339940.f_946.f_367[iVar0] = iParam15;
		Global_1339940.f_946.f_378[iVar0] = iParam16;
		Global_1339940.f_946.f_389[iVar0] = iParam17;
		Global_1339940.f_946.f_400[iVar0] = iParam18;
		Global_1339940.f_946.f_411[iVar0] = iParam19;
	}
}

void func_5(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_6(int iParam0, int iParam1)
{
	return is_bit_set(Global_1339940.f_4726[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = iLocal_80 - GAMEPLAY::GET_GAME_TIMER();
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_84)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_81)
	{
		case 0:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 10000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 9000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 8000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 7000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 6000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 5000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 4500)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 4000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 3500)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 3000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 2500)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 2000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 1500)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 1000)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80 - 500)
			{
				play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80)
			{
				play_sound_frontend(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (GAMEPLAY::GET_GAME_TIMER() >= iLocal_80)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_5(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_93)
		{
			if (!iLocal_78)
			{
				if (!PED::IS_PED_INJURED(iLocal_93[iVar0]))
				{
					if (!is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_64, 50f, 50f, 50f, false, true, 0))
					{
						set_player_wanted_level_no_drop(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
						set_wanted_level_difficulty(player_id(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_93[iVar0]))
				{
					task_smart_flee_ped(iLocal_93[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					set_ped_keep_task(iLocal_93[iVar0], true);
					set_ped_as_no_longer_needed(&(iLocal_93[iVar0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97))
				{
					set_vehicle_as_no_longer_needed(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&iLocal_39, vLocal_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), 2000, 0);
		set_vehicle_is_considered_by_player(iLocal_96, 0);
		func_14(&iLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!PED::IS_PED_INJURED(iLocal_90[iVar1]))
		{
			if (!does_blip_exist(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				open_sequence_task(&iLocal_120);
				task_leave_any_vehicle(false, false, 0);
				task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
				close_sequence_task(iLocal_120);
				task_perform_sequence(iLocal_90[iVar1], iLocal_120);
				clear_sequence_task(&iLocal_120);
				set_ped_keep_task(iLocal_90[iVar1], true);
			}
			if (!is_entity_at_entity(iLocal_90[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (does_blip_exist(uLocal_99[iVar1]))
				{
					remove_blip(&(uLocal_99[iVar1]));
				}
				task_smart_flee_ped(iLocal_90[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				set_ped_keep_task(iLocal_90[iVar1], true);
				set_ped_as_no_longer_needed(&(iLocal_90[iVar1]));
			}
		}
		else if (does_blip_exist(uLocal_99[iVar1]))
		{
			remove_blip(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_12(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()
{
	func_128(1);
	func_105();
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_18(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			clear_bit(iParam0.f_13, iVar0);
			clear_bit(iParam0.f_14, iVar0);
		}
		iVar0++;
	}
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0.f_6 = 0;
	*iParam0.f_12 = 0;
	*iParam0.f_15 = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(*iParam0.f_17[iVar0]))
		{
			set_ped_can_play_ambient_anims(*iParam0.f_17[iVar0], 1);
			set_ped_can_play_ambient_base_anims(*iParam0.f_17[iVar0], 1);
			if (iParam2)
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 268, false);
			if (iParam1)
			{
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_15()) && *iParam0.f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					remove_ped_from_group(*iParam0.f_17[iVar0]);
				}
			}
			if (!is_bit_set(*iParam0.f_13, 29))
			{
				set_ped_using_action_mode(*iParam0.f_17[iVar0], false, -1, 0);
			}
			*iParam0.f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		set_ped_can_play_ambient_anims(PLAYER::PLAYER_PED_ID(), 1);
		set_ped_can_play_ambient_base_anims(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (is_player_playing(player_id()))
	{
		if (iParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	*iParam0.f_21 = 0;
}

int func_15()
{
	return get_player_group(get_player_index());
}

void func_16(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 19);
			break;
	}
}

void func_17(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 16);
			break;
	}
}

void func_18(auto uParam0)
{
	if (does_blip_exist(*uParam0.f_5))
	{
		remove_blip(uParam0.f_5);
	}
}

bool func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_20(int iParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	return func_21(iParam0, vParam1, vParam4, func_63(), func_63(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_62(), func_62(), func_62(), func_62(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

bool func_21(int iParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, Vector3 fParam28)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	*iParam0.f_17[0] = iParam15;
	*iParam0.f_17[1] = iParam16;
	*iParam0.f_17[2] = iParam17;
	*iParam0.f_16 = iParam15;
	func_61(iParam0);
	func_60(iParam0);
	func_59();
	if (func_43(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_42(sParam20);
		func_42(sParam21);
		func_42(sParam22);
		func_42(sParam23);
		if (is_screen_faded_in())
		{
			iVar1 = false;
			if (is_vehicle_driveable(iParam18, 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					if (is_bit_set(*iParam0.f_13, 23))
					{
						clear_bit(iParam0.f_13, 23);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_40(iParam0, iParam29))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else
			{
				iVar1 = true;
			}
			if (iVar1)
			{
				func_42(sParam24);
				func_42(sParam27);
				func_42("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_42(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_36(iParam0, 1) && !func_35(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_33(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(*iParam0.f_17[0]))
							{
								func_31(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_42("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_36(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(*iParam0.f_17[0]))
							{
								func_31(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (!does_blip_exist(*iParam0.f_5))
					{
						if (does_blip_exist(*iParam0))
						{
							remove_blip(iParam0);
						}
						*iParam0.f_5 = func_30(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_29(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_28(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_29(*iParam0.f_5, iParam0);
						}
					}
					if (!func_36(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_33(iParam0, sParam19, 0);
							GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (is_bit_set(*iParam0.f_13, 13))
						{
							iParam13 = false;
						}
					}
					iVar1 = false;
					iVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (iParam28)
					{
						is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vParam7, vParam10, fParam36, 0, iVar6, iVar7))
						{
							iVar1 = true;
						}
					}
					else if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, iParam13, iVar6, iVar7))
					{
						iVar1 = true;
					}
					if (iVar1)
					{
						iVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(*iParam0.f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iVar0, 0))
									{
										iVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iParam18, 0))
									{
										iVar1 = false;
									}
								}
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_15()) || !func_26(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_23(iParam0))
							{
								func_42(sParam19);
								func_42(sParam24);
								func_42(sParam20);
								func_42(sParam21);
								func_42(sParam22);
								func_42(sParam23);
								func_42("LOSE_WANTED");
								func_42("MORE_SEATS");
								func_42(sParam27);
								func_14(iParam0, 1, 0);
								return true;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((iParam26 && is_player_wanted_level_greater(player_id(), 0)) && (!is_bit_set(*iParam0.f_13, 9) && !is_bit_set(*iParam0.f_13, 22)))
				{
					func_42(sParam24);
					func_42(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_42(sParam19);
					}
					if ((!func_36(iParam0, 1) && !func_35(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_33(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(*iParam0.f_17[0]))
							{
								func_31(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_42("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_36(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(*iParam0.f_17[0]))
							{
								func_31(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (is_vehicle_driveable(iParam18, 0))
					{
						if (!does_blip_exist(*iParam0))
						{
							if (does_blip_exist(*iParam0.f_5))
							{
								remove_blip(iParam0.f_5);
								func_42(sParam19);
							}
							*iParam0 = func_22(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_29(*iParam0, iParam0);
							}
						}
						if (!func_36(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_33(iParam0, sParam24, 0);
								GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_33(iParam0, sParam27, 0);
										GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_33(iParam0, sParam24, 0);
									GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!PED::IS_PED_INJURED(*iParam0.f_17[0]))
									{
										func_31(*iParam0.f_17[0], "GET_IN_CAR", 3);
									}
									GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(*iParam0.f_5))
				{
					remove_blip(iParam0.f_5);
					func_42(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_36(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
							{
								if (!is_bit_set(*iParam0.f_13, 13))
								{
									iVar8 = false;
									iVar9 = false;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(*iParam0.f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = get_random_int_in_range(false, iVar8);
									if (!PED::IS_PED_INJURED(*iParam0.f_17[iVar9]))
									{
										func_31(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_33(iParam0, "MORE_SEATS", 0);
									GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_33(iParam0, sParam24, 0);
								GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_33(iParam0, sParam27, 0);
									GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_36(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_33(iParam0, sParam24, 0);
							GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_33(iParam0, sParam27, 0);
									GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_33(iParam0, sParam24, 0);
								GAMEPLAY::GAMEPLAY::SET_BIT(iParam0.f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (is_bit_set(*iParam0.f_13, false))
		{
			clear_bit(iParam0.f_13, false);
		}
		func_42(sParam19);
		func_42(sParam24);
		func_42(sParam27);
		func_42(sParam24);
		func_42("LOSE_WANTED");
		if (does_blip_exist(*iParam0.f_5))
		{
			remove_blip(iParam0.f_5);
		}
		if (does_blip_exist(*iParam0))
		{
			remove_blip(iParam0);
		}
	}
	clear_bit(iParam0.f_13, 11);
	clear_bit(iParam0.f_13, 12);
	return false;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	return func_11(iParam0, !iParam1, iParam2);
}

bool func_23(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_25(PLAYER::PLAYER_PED_ID()))
		{
			if (func_24(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_24(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

bool func_25(int iParam0)
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_26(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_27(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				set_group_separation_range(func_15(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_15()))
		{
			set_group_separation_range(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(iParam0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (is_ped_sitting_in_vehicle(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_28(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

void func_29(int iParam0, int iParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (does_blip_exist(*iParam1.f_6))
		{
			set_blip_route(*iParam1.f_6, false);
		}
		_0x3DDA37128DD1ACA8(0);
		_0x67EEDEA1B9BAFD94();
		*iParam1.f_6 = iParam0;
		set_blip_route(iParam0, true);
	}
}

int func_30(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_31(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_32(iParam2), 1);
}

int func_32(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_34(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = GAMEPLAY::GET_GAME_TIMER();
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_35(int iParam0)
{
	if (!PED::IS_PED_INJURED(*iParam0.f_16))
	{
		if (is_ambient_speech_playing(*iParam0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_36(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_39(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_38() && !func_37())
		{
			return true;
		}
	}
	return false;
}

bool func_37()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

bool func_38()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_39(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GAMEPLAY::GET_GAME_TIMER();
	iVar0 = iVar1 - *uParam0.f_10;
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_40(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (func_41(iVar0, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_41(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1.f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_42(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_43(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, auto uParam13, auto uParam14, auto uParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int[] iVar7 = new int[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var[] uVar15 = new var[3];
	var[] uVar19 = new var[3];
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	Vector3 vVar28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	*uParam0.f_17[0] = uParam1;
	*uParam0.f_17[1] = uParam2;
	*uParam0.f_17[2] = uParam3;
	*uParam0.f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!is_bit_set(*uParam0.f_13, 29) && !is_bit_set(*uParam0.f_13, 28))
			{
				if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
				{
					set_ped_using_action_mode(*uParam0.f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 28);
				}
			}
		}
		else if (!is_bit_set(*uParam0.f_13, 29) && is_bit_set(*uParam0.f_13, 28))
		{
			if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
			{
				set_ped_using_action_mode(*uParam0.f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(uParam0.f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return true;
	}
	if (is_bit_set(*uParam0.f_13, 26))
	{
		iVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0.f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = get_closest_vehicle(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 50f, false, iVar25);
			if (is_vehicle_driveable(iVar24, 0))
			{
				*uParam0.f_21 = iVar24;
			}
		}
		if (is_vehicle_driveable(*uParam0.f_21, 0))
		{
			if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*uParam0.f_21, 1)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !iParam17)
					{
						if (func_41(*uParam0.f_21, uParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*uParam0.f_17[iVar0], -1794415470) == 7 && !func_58(*uParam0.f_17[iVar0], *uParam0.f_21))
									{
										if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											task_enter_vehicle(*uParam0.f_17[iVar0], *uParam0.f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else
						{
							iVar23 = true;
						}
					}
					else
					{
						iVar23 = true;
					}
				}
				else
				{
					iVar23 = true;
				}
			}
			else
			{
				iVar23 = true;
			}
		}
		else
		{
			iVar23 = true;
		}
		if (iVar23)
		{
			clear_bit(uParam0.f_13, 26);
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]) && !*uParam0.f_15)
					{
						clear_ped_tasks(*uParam0.f_17[iVar0]);
					}
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
					{
						if (func_56(uParam0, *uParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*uParam0.f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*uParam0.f_13, 26))
	{
		if ((!func_55(uParam0) && is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*uParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_36(uParam0, 2))
					{
						iVar26 = false;
						iVar27 = false;
						iVar0 = false;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = get_random_int_in_range(false, iVar26);
						if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar27]))
						{
							func_31(*uParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_33(uParam0, "MORE_SEATS", 0);
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 13);
					}
				}
				iVar12 = true;
			}
		}
		else
		{
			iVar12 = false;
			clear_bit(uParam0.f_13, 13);
			func_42("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(*uParam0.f_17[0]) || !PED::IS_PED_INJURED(*uParam0.f_17[1])) || !PED::IS_PED_INJURED(*uParam0.f_17[2]))
			{
				if (!is_bit_set(*uParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()) && !func_36(uParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						if (func_54(iVar13, uParam0))
						{
							func_33(uParam0, "CMN_VEHSUIT", 0);
							GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					clear_bit(uParam0.f_13, 31);
					func_42("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, 0))
		{
			if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 21);
				}
			}
			else if (is_bit_set(*uParam0.f_13, 21))
			{
				clear_bit(uParam0.f_13, 21);
			}
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 1);
					}
					else
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 0);
					}
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						if (is_vehicle_driveable(iVar13, 0))
						{
							if (is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
							{
								if (!func_55(uParam0) && is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_53(*uParam0.f_17[iVar0]))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !is_entity_dead(iVar13, 0))
						{
							if (is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iVar13))
							{
								if (is_entity_in_water(iVar13) && !is_vehicle_on_all_wheels(iVar13))
								{
									vVar28 = {get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f)
									{
										task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					iVar11 = true;
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
					{
						if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
						{
							iVar13 = get_vehicle_ped_is_in(*uParam0.f_17[iVar0], 0);
							if (!is_entity_dead(iVar13, 0))
							{
								if (is_vehicle_driveable(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
								else
								{
									if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (is_vehicle_driveable(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
					{
						iVar32 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (func_41(iVar32, uParam0, 0))
							{
								if (func_52(iVar0, uParam0) || !is_bit_set(*uParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 27);
									}
								}
							}
							else if (!func_52(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 2);
								}
								func_51(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(*uParam0.f_17[iVar0], func_15()) && !func_50(*uParam0.f_17[iVar0], iParam10)) && !func_49(*uParam0.f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
							{
								if (((!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*uParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_15());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*uParam0.f_1[iVar0]))
							{
								*uParam0.f_11 = GAMEPLAY::GET_GAME_TIMER();
								*uParam0.f_1[iVar0] = func_22(*uParam0.f_17[iVar0], 0, 0);
								set_blip_display(*uParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_29(*uParam0.f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*uParam0.f_1[iVar0]))
					{
						if (((func_26(*uParam0.f_17[iVar0], 1) || func_50(*uParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (does_blip_exist(*uParam0.f_1[iVar0]))
							{
								remove_blip(uParam0.f_1[iVar0]);
								func_42(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_29(*uParam0.f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, 0))
					{
						if (!is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(*uParam0.f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !is_bit_set(*uParam0.f_13, 11)) && !((iParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(*uParam0.f_17[iVar0], iParam10, 0))
									{
										if (!func_26(*uParam0.f_17[iVar0], 1))
										{
											if (func_25(*uParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*uParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*uParam0.f_17[iVar0], false, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*uParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(*uParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(PLAYER::PLAYER_PED_ID())) && !func_48(*uParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											if (is_bit_set(*uParam0.f_13, 10))
											{
												set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
											}
											task_enter_vehicle(*uParam0.f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
										}
									}
									else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										*uParam0.f_1[iVar0] = func_22(*uParam0.f_17[iVar0], 0, 0);
										set_blip_display(*uParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
							{
								if (func_56(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*uParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], false);
										set_ped_as_group_member(*uParam0.f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_15()))
							{
								if (!is_bit_set(*uParam0.f_13, 21))
								{
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_15());
								}
							}
							else if (is_bit_set(*uParam0.f_13, 21))
							{
								remove_ped_from_group(*uParam0.f_17[iVar0]);
								GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*uParam0.f_17[iVar0], func_15()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*uParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_42(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_blip_exist(*uParam0.f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_36(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = false;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
						{
							if (func_53(*uParam0.f_17[iVar0]) || is_entity_at_entity(*uParam0.f_17[iVar0], PLAYER::PLAYER_PED_ID(), *uParam0.f_8, *uParam0.f_8, *uParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*uParam0.f_17[iVar0], PLAYER::PLAYER_PED_ID(), *uParam0.f_8 * 0.85f, *uParam0.f_8 * 0.85f, *uParam0.f_8, 0, 1, 0) && !func_53(*uParam0.f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = GAMEPLAY::GET_GAME_TIMER();
			if (iVar5 - *uParam0.f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (*uParam0.f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1)
						{
							if (!is_bit_set(*uParam0.f_13, 5))
							{
								func_33(uParam0, sParam7, 0);
								GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 5);
								*uParam0.f_12 = iVar1;
							}
							else
							{
								*uParam0.f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_47(iVar0, uParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_45(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_44(iVar0, uParam0);
												*uParam0.f_12 = iVar1;
											}
										}
										if (!func_47(iVar0, uParam0))
										{
											func_33(uParam0, uVar15[iVar0], 0);
											func_44(iVar0, uParam0);
											*uParam0.f_12 = iVar1;
										}
									}
									else
									{
										*uParam0.f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					*uParam0.f_12 = 0;
				}
			}
		}
		clear_bit(uParam0.f_13, 10);
		if (iVar6 && !iVar12)
		{
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_42(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_42("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_44(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 14);
			break;
		
		case 1:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 15);
			break;
		
		case 2:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 16);
			break;
	}
}

void func_45(auto uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_46(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*uParam0.f_10 = GAMEPLAY::GET_GAME_TIMER();
}

void func_46(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_47(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 14);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 15);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 16);
		
		default:
	}
	return false;
}

bool func_48(int iParam0, float fParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 0);
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_speed(iVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_15()))
		{
			iVar0 = set_exclusive_phone_relationships(iParam0);
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_50(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_ped_sitting_in_vehicle(iParam0, iParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_51(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 17);
			break;
		
		case 1:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 18);
			break;
		
		case 2:
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_13, 19);
			break;
	}
}

int func_52(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 17);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 18);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 19);
		
		default:
	}
	return false;
}

bool func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = get_vehicle_ped_is_using(iParam0);
				if (is_vehicle_driveable(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_54(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(*uParam1.f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == *uParam1.f_17[0] || iVar3 == *uParam1.f_17[1]) || iVar3 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = get_ped_in_vehicle_seat(iParam0, true);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == *uParam1.f_17[0] || iVar4 == *uParam1.f_17[1]) || iVar4 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = get_ped_in_vehicle_seat(iParam0, 2);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == *uParam1.f_17[0] || iVar5 == *uParam1.f_17[1]) || iVar5 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_55(auto uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (func_41(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_56(auto uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, 0);
			if (!is_entity_dead(iVar0, 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_55(uParam0))
						{
							return true;
						}
					}
					else if (iParam3)
					{
						return true;
					}
				}
				else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!iParam3)
			{
				iVar0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_41(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_57(iVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_57(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							task_look_at_entity(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_60(auto uParam0)
{
	int iVar0;
	
	if (!is_bit_set(*uParam0.f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_13, 25);
	}
}

void func_61(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(*uParam0.f_17[iVar0]))
			{
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
				{
					set_ped_can_play_ambient_anims(*uParam0.f_17[iVar0], 0);
					set_ped_can_play_ambient_base_anims(*uParam0.f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				set_ped_can_play_ambient_anims(PLAYER::PLAYER_PED_ID(), 0);
				set_ped_can_play_ambient_base_anims(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

auto func_62()
{
	auto uVar0;
	
	return uVar0;
}

Vector3 func_63()
{
	Vector3 vVar0;
	
	return vVar0;
}

void func_64()
{
	int iVar0;
	
	if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_96, 0))
	{
		if (does_blip_exist(iLocal_102))
		{
			remove_blip(&iLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = get_milliseconds_per_game_minute() * 60 * iLocal_82 + iLocal_83;
			iLocal_80 += GAMEPLAY::GET_GAME_TIMER();
			iLocal_84 = iLocal_80 - get_milliseconds_per_game_minute() * 30;
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = get_milliseconds_per_game_minute() * 60 * iLocal_82 + iLocal_83;
			iLocal_80 += GAMEPLAY::GET_GAME_TIMER();
			iLocal_84 = iLocal_80 - get_milliseconds_per_game_minute() * 30;
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = create_vehicle(iLocal_89, vLocal_70, fLocal_74, 1, true);
			iLocal_93[0] = PED::CREATE_PED_inside_vehicle(iLocal_97, 6, iLocal_87, -1, 1, true);
			iLocal_93[1] = PED::CREATE_PED_inside_vehicle(iLocal_97, 6, iLocal_87, false, 1, true);
			add_relationship_group("rghCop", &iLocal_118);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_118, 1862763509);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[0], 39, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				give_weapon_to_ped(iLocal_93[iVar0], joaat("weapon_pistol"), -1, false, true);
				set_ped_seeing_range(iLocal_93[iVar0], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_93[iVar0], iLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_65()
{
	int iVar0;
	
	if (!is_entity_dead(iLocal_96, 0))
	{
		if (func_92() || PED::IS_PED_INJURED(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!PED::IS_PED_INJURED(iLocal_90[iVar0]))
				{
					if (!does_blip_exist(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90[iVar0], 1, false);
						open_sequence_task(&iLocal_120);
						task_leave_any_vehicle(false, false, 0);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						close_sequence_task(iLocal_120);
						task_perform_sequence(iLocal_90[iVar0], iLocal_120);
						clear_sequence_task(&iLocal_120);
					}
				}
				else if (does_blip_exist(uLocal_99[iVar0]))
				{
					remove_blip(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!PED::IS_PED_INJURED(iLocal_90[0]))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					task_vehicle_mission_ped_target(iLocal_90[0], iLocal_96, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_96, 0))
		{
			if (does_blip_exist(iLocal_102))
			{
				remove_blip(&iLocal_102);
			}
			func_91(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (is_vehicle_seat_free(iLocal_96, -1) || PED::IS_PED_INJURED(iLocal_90[0]))
		{
			func_91(&uLocal_106, 0, 0);
		}
		else
		{
			func_66();
		}
	}
}

void func_66()
{
	if (!PED::IS_PED_INJURED(iLocal_90[0]) && !is_entity_dead(iLocal_96, 0))
	{
		if (is_ped_in_vehicle(iLocal_90[0], iLocal_96, 0))
		{
			func_67(&uLocal_106, iLocal_96, 0, 0, 1, 1, 1);
		}
	}
}

void func_67(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_68(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	func_69(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_69(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_91(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_70(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_70(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (is_string_null(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_90(iVar0))
	{
		func_89();
	}
	if (func_88(iParam1) && is_entity_visible(iParam1))
	{
		iVar1 = 0;
		if (is_entity_a_ped(iParam1))
		{
			_0x7D7A2E43E74E2EB8(get_ped_index_from_entity_index(iParam1));
			get_ped_flood_invincibility(get_ped_index_from_entity_index(iParam1), 1);
			if (is_tracked_ped_visible(get_ped_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_a_vehicle(iParam1))
		{
			track_vehicle_visibility(get_vehicle_index_from_entity_index(iParam1));
			if (is_vehicle_visible(get_vehicle_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_an_object(iParam1))
		{
			track_object_visibility(get_object_index_from_entity_index(iParam1));
			if (is_object_visible(get_object_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!is_gameplay_hint_active())
		{
			if (func_83(uParam0, iParam7, iParam9, 0))
			{
				func_79(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_75(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_90(iVar0))
							{
								func_74(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_73(1);
								}
							}
						}
					}
				}
			}
			else if (func_75(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_90(iVar0))
						{
							func_74(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_73(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!is_string_null(sParam5))
			{
				if (func_90(sParam5))
				{
					clear_help(1);
				}
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_91(uParam0, iVar0, 1);
				}
			}
			if (!func_83(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_72(uParam0))
				{
					func_71(uParam0);
				}
			}
		}
	}
	else
	{
		func_91(uParam0, iVar0, 0);
	}
}

void func_71(auto uParam0)
{
	if (func_88(PLAYER::PLAYER_PED_ID()))
	{
		task_clear_look_at(PLAYER::PLAYER_PED_ID());
	}
	if (is_gameplay_hint_active())
	{
		set_cinematic_button_active(true);
		stop_gameplay_hint(0);
		stop_audio_scene("HINT_CAM_SCENE");
		_stop_screen_effect("FocusIn");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	*uParam0.f_2 = -1;
	*uParam0 = 1;
}

bool func_72(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > GAMEPLAY::GET_GAME_TIMER())
		{
			return true;
		}
	}
	return false;
}

int func_73(int iParam0)
{
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (iParam0)
			{
				Global_101154.f_8739.f_100++;
			}
			return Global_101154.f_8739.f_100;
			break;
		
		case 4:
			if (iParam0)
			{
				Global_101154.f_8739.f_101++;
			}
			return Global_101154.f_8739.f_101;
			break;
		
		case 5:
		case 15:
			if (iParam0)
			{
				Global_101154.f_8739.f_102++;
			}
			return Global_101154.f_8739.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_90(sParam0)) || func_90("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_73(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_73(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_73(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (iParam2)
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (func_78(0))
	{
		return false;
	}
	if (func_77())
	{
		return false;
	}
	if (_network_is_text_chat_active())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (iParam1)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				return false;
			}
			if (is_gameplay_cam_looking_behind())
			{
				return false;
			}
		}
	}
	return true;
}

int func_77()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_78(int iParam0)
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

void func_79(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_91(uParam0, 0, 0);
	}
	if (func_82(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_80())
					{
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (is_ped_male(iVar0))
				{
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	set_cinematic_button_active(false);
	iVar1 = *uParam0.f_9;
	iVar2 = *uParam0.f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	task_look_at_entity(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

int func_80()
{
	return func_81(player_id());
}

bool func_81(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_82(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_83(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	switch (*uParam0.f_5)
	{
		case 0:
			*uParam0.f_7 = 0;
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_87(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_86(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_86(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_87(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_72(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_87(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_86(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_86(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_87(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*uParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_87(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_86(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_86(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_87(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_85(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_84(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_84(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_85(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_72(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_76(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_89();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	if (!func_76(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_85(int iParam0, int iParam1, int iParam2)
{
	if (!func_76(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		disable_control_action(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_just_released(0, 80))
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_86(int iParam0, int iParam1, int iParam2)
{
	if (!func_76(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	if (!func_76(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		disable_control_action(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_88(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), 0))
			{
				return true;
			}
		}
		else if (is_entity_a_ped(iParam0))
		{
			if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam0)))
			{
				return true;
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_89()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 4);
}

int func_90(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_91(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (is_bit_set(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(iParam2);
		_stop_screen_effect("FocusIn");
		stop_audio_scene("HINT_CAM_SCENE");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	set_cinematic_button_active(true);
	*uParam0.f_1 = 0;
	*uParam0 = 0;
	*uParam0.f_2 = -1;
	*uParam0.f_8 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	sVar0 = iParam1;
	if (is_string_null(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!is_string_null(*uParam0.f_3))
	{
		if (func_90(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_90(sVar0))
		{
			clear_help(1);
		}
	}
}

bool func_92()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_96))
	{
		if (!is_entity_dead(iLocal_96, 0))
		{
			if ((((((get_entity_health(iLocal_96) < 300 || get_vehicle_engine_health(iLocal_96) < 200f) || is_entity_on_fire(iLocal_96)) || (is_vehicle_tyre_burst(iLocal_96, false, 0) && is_vehicle_tyre_burst(iLocal_96, true, 0))) || (is_vehicle_tyre_burst(iLocal_96, 4, 0) && is_vehicle_tyre_burst(iLocal_96, 5, 0))) || (is_vehicle_tyre_burst(iLocal_96, false, 0) && is_vehicle_tyre_burst(iLocal_96, 4, 0))) || (is_vehicle_tyre_burst(iLocal_96, true, 0) && is_vehicle_tyre_burst(iLocal_96, 5, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_93()
{
	int iVar0;
	int iVar1;
	
	iLocal_96 = func_95(0);
	if (!is_vehicle_driveable(iLocal_96, 0))
	{
		iLocal_96 = create_vehicle(iLocal_88, vLocal_64, fLocal_73, 1, true);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			set_vehicle_extra(iLocal_96, iVar0, true);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			set_vehicle_extra(iLocal_96, iLocal_85, false);
		}
	}
	set_vehicle_is_wanted(iLocal_96, 1);
	iLocal_102 = func_94(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			set_entity_proofs(iLocal_96, false, false, false, false, true, false, 0, false);
			play_sound_from_entity(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_34(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = PED::CREATE_PED_inside_vehicle(iLocal_96, 26, iLocal_86, -1, 1, true);
		iLocal_90[1] = PED::CREATE_PED_inside_vehicle(iLocal_96, 26, iLocal_86, false, 1, true);
		add_relationship_group("rghCriminal", &iLocal_119);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_119, 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			set_blocking_of_non_temporary_events(iLocal_90[iVar1], true);
			give_weapon_to_ped(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90[iVar1], iLocal_119);
			iVar1++;
		}
		task_vehicle_drive_wander(iLocal_90[0], iLocal_96, 25f, 786599);
		func_34("PMDL_REC", 7500, 1);
	}
	if (!is_entity_dead(get_players_last_vehicle(), 0))
	{
		iLocal_98 = get_players_last_vehicle();
	}
	iLocal_38 = 1;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	return func_11(iParam0, !iParam1, iParam2);
}

int func_95(int iParam0)
{
	if (is_vehicle_driveable(Global_99866.f_222[iParam0], 0))
	{
		set_entity_as_mission_entity(Global_99866.f_222[iParam0], true, 1);
		return Global_99866.f_222[iParam0];
	}
	return 0;
}

bool func_96()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_96))
	{
		if (is_vehicle_driveable(iLocal_96, 0))
		{
			if (!is_entity_at_entity(iLocal_96, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, 0, 1, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (PED::IS_PED_INJURED(iLocal_90[0]))
	{
		if (does_blip_exist(uLocal_99[0]))
		{
			remove_blip(&(uLocal_99[0]));
		}
	}
	return false;
}

void func_97()
{
	request_model(iLocal_88);
	request_additional_text("PMDL", false);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		request_model(iLocal_87);
		request_model(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		request_model(iLocal_86);
	}
	set_vehicle_model_is_suppressed(joaat("benson"), true);
	set_vehicle_model_is_suppressed(joaat("pony2"), true);
	if (has_model_loaded(iLocal_88) && has_additional_text_loaded(false))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (has_model_loaded(iLocal_87) && has_model_loaded(iLocal_89))
			{
				iLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (has_model_loaded(iLocal_86))
			{
				iLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (SCRIPT::REQUEST_SCRIPT_audio_bank("Deliveries", false))
			{
				iLocal_75 = true;
			}
		}
		else
		{
			iLocal_75 = true;
		}
	}
}

void func_98()
{
	Vector3 fVar0;
	
	vLocal_64 = {func_100(func_102(), iLocal_36)};
	fLocal_73 = func_99(func_102(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_102() == 10)
	{
		vLocal_67 = {-1161.213f, -1567.068f, 3.4234f};
		iLocal_88 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_82 = 2;
			iLocal_83 = 15;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			vLocal_70 = {-3121.261f, 1152.92f, 19.4047f};
			fLocal_74 = 176.4887f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4)
		{
			vLocal_70 = {1543.145f, 2184.371f, 77.8114f};
			fLocal_74 = 45.3499f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			iLocal_86 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_102() == 14)
	{
		vLocal_67 = {-2169.828f, 4277.365f, 47.9568f};
		fVar0 = get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = round(fVar0 / 16.5f + 40f / 2f);
	}
	else if (func_102() == 13)
	{
		vLocal_67 = {-323.356f, 6264.431f, 30.4463f};
		fVar0 = get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = round(fVar0 / 16.5f + 40f / 2f);
	}
	else if (func_102() == 12)
	{
		vLocal_67 = {198.5282f, 342.2399f, 104.9566f};
		fVar0 = get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = round(fVar0 / 16.5f + 15f / 2f);
	}
	else if (func_102() == 11)
	{
		vLocal_67 = {-560.0195f, 301.1481f, 82.1436f};
		fVar0 = get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = round(fVar0 / 16.5f + 15f / 2f);
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 11:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return func_101(iParam0);
}

Vector3 func_101(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

auto func_102()
{
	return Global_99866.f_20;
}

int func_103()
{
	return func_104(Global_99866.f_20, Global_99866.f_29);
}

int func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_105()
{
	set_vehicle_model_is_suppressed(joaat("benson"), false);
	set_vehicle_model_is_suppressed(joaat("pony2"), false);
	release_script_audio_bank();
	if (iLocal_77)
	{
		if (!is_entity_dead(iLocal_98, 0))
		{
			func_106(iLocal_98, 0, 145);
		}
		reset_wanted_level_difficulty(player_id());
		func_91(&uLocal_106, 0, 0);
	}
	terminate_this_thread();
}

bool func_106(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = get_entity_script(iParam0, &uVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (get_hash_key(sVar1) == get_hash_key("vehicle_gen_controller"))
			{
				return false;
			}
		}
	}
	func_107(iParam0, iParam2);
	return true;
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_112(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_108(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_108(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_111(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						clear_bit(uParam1.f_77, 23);
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_110(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_110(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_111(auto uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

bool func_112(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_126(iParam0, 0, 0)) || func_126(iParam0, 1, 0)) || func_126(iParam0, 2, 0)) || func_125(iParam0) != 145) || func_124(iParam0)) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || !func_113(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_123(iParam0))
		{
		}
		if (func_123(iParam0))
		{
		}
		if (func_126(iParam0, 0, 0))
		{
		}
		if (func_126(iParam0, 1, 0))
		{
		}
		if (func_126(iParam0, 2, 0))
		{
		}
		if (func_125(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_113(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_114(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_114(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_120())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_117())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_115(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_116()
{
	return false;
}

bool func_117()
{
	return true;
}

bool func_118()
{
	return true;
}

bool func_119()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_120()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
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
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_121(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_114(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_124(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_127(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_127(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_128(int iParam0)
{
	Global_99866.f_22 = iParam0;
}

