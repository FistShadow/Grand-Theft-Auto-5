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
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<2> Local_33 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	Vector3 vLocal_39 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<4> Local_50 = 0;
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
	auto uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	Vector3 vLocal_75 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
#endregion

void main()
{
	auto uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
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
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	network_set_script_is_safe_for_network_game();
	Global_14568 = 145;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 8);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 14);
	GAMEPLAY::CLEAR_BIT(&Global_2563397, 3);
	GAMEPLAY::CLEAR_BIT(&Global_2284, 10);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 9);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 26);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 23);
	GAMEPLAY::CLEAR_BIT(&Global_2284, 24);
	GAMEPLAY::CLEAR_BIT(&Global_2284, 25);
	GAMEPLAY::CLEAR_BIT(&Global_2284, 27);
	GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	Global_2467970 = 0;
	iLocal_78 = 0;
	_0x1072F115DAB0717E(0, 0);
	script_is_moving_mobile_phone_offscreen(0);
	Global_14379 = 0;
	iLocal_30 = 0;
	Global_14357 = 0;
	Global_14397 = 0;
	Global_14398 = 0;
	func_105();
	Global_14344 = {Global_14376};
	Global_14417 = 4;
	Global_14418 = 0;
	Global_2888 = 1;
	Global_14393 = Global_14417;
	if (Global_14395 == 0)
	{
		Global_14396 = 0;
		if (Global_69489)
		{
			Global_14394 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_44 = 1;
			if (iLocal_44 == 1)
			{
			}
		}
		else if (Global_14356)
		{
			Global_14401 = 1;
			Global_14394 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_14394 = unk_0x67D02A194A2FC2BD(&(Global_101154.f_12741[Global_14413 /*20*/]));
		}
		settimera(0);
		while (!has_scaleform_movie_loaded(Global_14394) && Global_14396 == 0)
		{
			wait(0);
			if (timera() > 20000)
			{
				Global_14396 = 1;
			}
			if (GAMEPLAY::IS_PC_VERSION())
			{
				if (decor_exist_on(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (timera() > 2000)
					{
						Global_14396 = 1;
					}
				}
			}
			if (Global_14412 == 1)
			{
				func_104();
			}
		}
		if (Global_14396 == 1)
		{
			if (has_scaleform_movie_loaded(Global_14394))
			{
				func_103(Global_14394, "SHUTDOWN_MOVIE");
			}
			wait(0);
			set_scaleform_movie_as_no_longer_needed(&Global_14394);
			Global_14354 = 0;
			Global_14395 = 0;
			Global_14569 = 0;
			if (Global_101154.f_12741.f_84 == 1)
			{
				Global_101154.f_12741.f_84 = 0;
				clear_floating_help(0, 1);
			}
			Global_14357 = 1;
			Global_14413.f_1 = 3;
			func_102();
			Global_14401 = 0;
			destroy_mobile_phone();
			GAMEPLAY::CLEAR_BIT(&Global_2283, 9);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 27);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 5);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 21);
			GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
			}
			if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
			}
			Global_14571 = 0;
			Global_16772 = 0;
			Global_16771 = 0;
			Global_15725 = 0;
			func_100();
			func_98();
			Global_2563612 = 0;
			terminate_this_thread();
		}
		Global_14337 = 0.1f;
		Global_14338 = 0.38f;
		Global_14339 = 0.195f;
		Global_14340 = 0.05f;
		if ((is_xbox360_version() || is_durango_version()) || GAMEPLAY::IS_PC_VERSION())
		{
			get_hud_colour(18, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
			get_hud_colour(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
			get_hud_colour(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
		}
		else
		{
			get_hud_colour(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
			get_hud_colour(126, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
			get_hud_colour(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14394, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_64), to_float(iLocal_65), to_float(iLocal_66), -1082130432);
		}
		if (Global_14396 == 0)
		{
		}
		func_96();
		if (Global_69489)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
		}
		Global_14395 = 1;
	}
	Global_2286 = 99;
	func_95();
	if (is_player_playing(player_id()))
	{
		iLocal_56 = get_entity_health(PLAYER::PLAYER_PED_ID());
	}
	if (is_radar_hidden())
	{
		Global_16726 = 1;
	}
	else
	{
		Global_16726 = 0;
	}
	func_97(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14355 = 1;
	if (Global_69489)
	{
		Global_14573 = 0;
		Global_2563609 = func_92(2020, -1, 0);
		if (Global_2563609 < 1 || Global_2563609 > 7)
		{
			Global_2563609 = 1;
		}
		func_97(Global_14394, "SET_THEME", to_float(Global_2563609), -1082130432, -1082130432, -1082130432, -1082130432);
		func_91();
		Global_2563610 = func_92(2019, -1, 0);
		if (Global_2563610 == 0)
		{
			Var16 = {func_90(player_id())};
			iVar29 = 0;
			if (_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_2563613 == 1)
			{
			}
			if ((network_clan_player_is_active(&Var16) && _0x72D918C99BCACC54(0)) && Global_2563613 == 0)
			{
				if (_0x5835D9CD92E83184(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					_push_scaleform_movie_function(Global_14394, "SET_BACKGROUND_CREW_IMAGE");
					_begin_text_component("CELL_2000");
					add_text_component_substring_player_name(&uVar0);
					_end_text_component();
					_pop_scaleform_movie_function_void();
				}
				else
				{
					func_97(Global_14394, "SET_BACKGROUND_IMAGE", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_97(Global_14394, "SET_BACKGROUND_IMAGE", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_97(Global_14394, "SET_BACKGROUND_IMAGE", to_float(Global_2563610), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_14356)
		{
			Global_14573 = 0;
		}
		else if (Global_101154.f_12741.f_88 == 1 || Global_101154.f_12741.f_89 == 1)
		{
			Global_14573 = 0;
		}
		else
		{
			Global_14573 = 0;
		}
		func_97(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3087 == 0)
		{
			func_97(Global_14394, "SET_BACKGROUND_IMAGE", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			set_mobile_phone_scale(575f);
		}
		func_91();
	}
	iLocal_45 = func_89();
	if (Global_14356 == 0)
	{
		func_78();
	}
	Global_14391 = 0;
	Global_14572 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2283, 9);
	Global_2443081 = 0;
	if (func_76(0) && network_is_signed_online())
	{
		Global_2443081 = 1;
	}
	func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_75();
	func_73();
	func_72(1);
	play_sound_frontend(-1, "Pull_Out", &Global_14402, 1);
	settimerb(0);
	while (Global_14413.f_1 < 6 && Global_14396 == 0)
	{
		wait(0);
		if (timerb() > 10000)
		{
			Global_14396 = 1;
		}
		if (Global_14413.f_1 < 4)
		{
			Global_14396 = 1;
		}
	}
	if (Global_14413.f_1 == 5 || Global_14413.f_1 == 6)
	{
		if (func_71(14))
		{
			func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
		}
		if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_97(Global_14394, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_97(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14401)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14401)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14573 == 0)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else if (Global_69489)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			if (Global_14572 == 1)
			{
				if (Global_14401)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			GAMEPLAY::SET_BIT(&Global_2283, 17);
		}
	}
	Global_14399 = 1;
	func_69();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_62 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (Global_14569 == 1)
	{
		if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_101154.f_12741.f_84 == 0)
			{
				Global_101154.f_12741.f_84 = 1;
				if (Global_14358 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_68("CELL_7052", 10000);
			}
		}
	}
	if (Global_69489 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER() + 375;
	}
	if (func_67())
	{
		iLocal_36 = 1;
	}
	else
	{
		iLocal_36 = 0;
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_37 = 1;
			if (func_67())
			{
				func_66();
			}
		}
		else
		{
			iLocal_37 = 0;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (Global_69489 == 0)
		{
			iLocal_59 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_61 = 0;
		}
	}
	while (true)
	{
		wait(0);
		if (GAMEPLAY::IS_BIT_SET(Global_2563397, 24))
		{
			if (!Global_14572)
			{
				if (Global_14413.f_1 == 6 || Global_14413.f_1 > 6)
				{
					GAMEPLAY::CLEAR_BIT(&Global_2563397, 24);
					func_75();
					func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_72(1);
					if (Global_14413.f_1 == 6)
					{
						func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_65())
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_69489 == 0)
		{
			if (iLocal_32)
			{
				if (Global_14413.f_1 == 6 || Global_14413.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_14413.f_1 > 4)
			{
				if ((GAMEPLAY::IS_BIT_SET(Global_2283, 14) && Global_2563612 == 0) && Global_14353 == 0)
				{
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_64())
						{
							get_mobile_phone_position(&Local_33);
							if (Global_14359[Global_14358 /*3*/].f_1 != Local_33.f_1)
							{
								func_62();
							}
						}
						else
						{
							get_mobile_phone_position(&Local_33);
							if (Global_14366[Global_14358 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_65())
								{
								}
								if (_get_number_of_instances_of_streamed_script(joaat("appemail")) < 1)
								{
									func_60();
								}
							}
						}
						if (iLocal_37 == 0)
						{
							if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_37 = 1;
								func_60();
								func_66();
							}
						}
						else if (!is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_37 = 0;
							func_62();
							if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
							{
								if (Global_15712 != 2)
								{
									func_59();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (func_67())
							{
								iLocal_36 = 1;
								if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_66();
								}
								func_62();
							}
						}
						else
						{
							if (get_ped_stealth_movement(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
								{
									CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_67() == 0)
							{
								iLocal_36 = 0;
								func_60();
							}
						}
					}
				}
			}
		}
		if (Global_2443081 == 1)
		{
			if (!func_76(0) || !network_is_signed_online())
			{
				if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) == 0)
				{
					if (Global_14413.f_1 > 3)
					{
						Global_14398 = 1;
						func_58();
						func_55(0);
						Global_2443081 = 0;
					}
				}
			}
		}
		if (Global_14574 == 0)
		{
			if ((Global_35711 != 15 || Global_2288 == 1) || func_54(0))
			{
				if (!Global_14572)
				{
					if (Global_14413.f_1 == 6)
					{
						Global_2289 = 42;
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14574 = 1;
			}
		}
		else if ((Global_35711 == 15 && func_54(0) == 0) && Global_2288 == 0)
		{
			if (!Global_14572)
			{
				if (Global_14413.f_1 == 6)
				{
					Global_2289 = 255;
					func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14574 = 0;
		}
		if (Global_14575 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
			{
				if (!Global_14572)
				{
					if (Global_14413.f_1 == 6)
					{
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14575 = 1;
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_2284, 3))
		{
			if (!Global_14572)
			{
				if (Global_14413.f_1 == 6)
				{
					func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14575 = 0;
		}
		if (!is_pause_menu_active())
		{
			if (Global_14341.f_1 != Global_14359[Global_14358 /*3*/].f_1 || func_67())
			{
				if (Global_14413.f_1 > 3)
				{
					if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) == 0)
					{
						if (Global_69489)
						{
							if (Global_14413.f_1 == 9)
							{
								if (Global_15765 == 1 || GAMEPLAY::IS_BIT_SET(Global_2284, 23))
								{
									set_input_exclusive(0, Global_14382);
								}
							}
							else
							{
								set_input_exclusive(0, Global_14382);
							}
						}
						else
						{
							set_input_exclusive(0, Global_14382);
						}
					}
					set_input_exclusive(0, Global_14383);
					if (GAMEPLAY::IS_BIT_SET(Global_2283, 17))
					{
						set_input_exclusive(0, Global_14384);
					}
					if (!func_53())
					{
						set_input_exclusive(0, Global_14385);
					}
				}
			}
			if (Global_14341.f_1 == Global_14359[Global_14358 /*3*/].f_1)
			{
			}
		}
		if (!_is_input_disabled(2))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!is_pause_menu_active())
		{
			if (!Global_68058)
			{
				if (!func_65())
				{
					set_input_exclusive(0, 180);
					set_input_exclusive(0, 181);
					enable_control_action(0, 180, 1);
					enable_control_action(0, 181, 1);
				}
				set_input_exclusive(0, Global_14387);
				if (!func_53())
				{
					set_input_exclusive(0, Global_14388);
				}
				if (Global_14413.f_1 > 4)
				{
					set_input_exclusive(0, Global_14390);
				}
			}
		}
		if (func_52(2, Global_14381, 0))
		{
			iLocal_54 = 1;
			settimera(0);
		}
		if (iLocal_31 == 1)
		{
			if (!is_control_pressed(2, Global_14382))
			{
				Global_2287 = 1;
				iLocal_31 = 0;
			}
			if (!Global_14413.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_54)
		{
			if (is_control_pressed(2, Global_14381))
			{
				if (timera() > 5000)
				{
					Global_14413.f_1 = 3;
					func_50();
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		Global_2891 = GAMEPLAY::GET_GAME_TIMER();
		if (Global_14400)
		{
			func_69();
			Global_14399 = 1;
			Global_14400 = 0;
		}
		if (Global_14571 == 0)
		{
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(8);
			hide_hud_component_this_frame(9);
			func_44();
			func_43();
			set_text_render_id(iLocal_42);
			if (Global_14399 == 1)
			{
				_set_2d_layer(4);
				if (Global_14356)
				{
					draw_scaleform_movie(Global_14394, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_scaleform_movie(Global_14394, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
				}
				func_95();
			}
			if (Global_14353 == 1)
			{
				if (Global_14413.f_1 > 3)
				{
					func_42();
				}
			}
			else if (Global_14413.f_1 > 3)
			{
				if (Global_2563612 == 1)
				{
					func_41();
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2284, 25))
				{
					if (Global_69489 == 1)
					{
						func_40();
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_2284, 24))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2284, 26))
					{
						if (func_52(2, Global_14380, 0))
						{
							GAMEPLAY::SET_BIT(&Global_2284, 25);
							GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
							GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
						}
					}
				}
				else if (Global_69489 == 1)
				{
					func_39();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_14413.f_1 == 6)
			{
				func_35();
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_2283, 23))
		{
			if (Global_14413.f_1 == 5 || Global_14413.f_1 == 6)
			{
				if (Global_14571 == 0)
				{
					if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) < 1 && _get_number_of_instances_of_streamed_script(joaat("appemail")) < 1)
					{
						if (Global_14356 == 0)
						{
							if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
							{
								if (!Global_69489)
								{
									if (iLocal_31 == 0)
									{
										if (!func_71(14))
										{
											func_34();
										}
										else if (Global_2443081)
										{
											func_33();
										}
									}
								}
								else
								{
									func_22();
								}
							}
						}
						if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
						{
							func_19(0, 0, 1, 1);
						}
						else if (Global_16771 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 3))
							{
								if (Global_69489)
								{
									func_18();
								}
								func_17();
								func_15();
							}
						}
						else
						{
							if (Global_69489)
							{
								func_18();
							}
							if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 3))
							{
								if (Global_16771 == 1)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_2563397, true))
									{
										if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
										{
											if (Global_69489)
											{
												func_19(7, 0, 1, 0);
											}
											else
											{
												Global_16772 = 0;
											}
											Global_16771 = 0;
											GAMEPLAY::CLEAR_BIT(&Global_2563397, true);
										}
									}
									else if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
									{
										func_19(7, 0, 1, 0);
										Global_16771 = 0;
									}
								}
								else
								{
									if (Global_16771 == 3)
									{
										func_19(1, 0, 1, 0);
										Global_16771 = 0;
									}
									if (Global_16771 == 2)
									{
										func_19(14, 0, 1, 0);
										Global_16771 = 0;
									}
									if (Global_16771 == 4)
									{
										func_19(23, 0, 1, 0);
										Global_16771 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_2290[Global_14416 /*15*/].f_5)))
		{
			if (Global_14416 == 0)
			{
				if (_get_number_of_instances_of_streamed_script(Global_2290[Global_14416 /*15*/].f_9) == 0)
				{
					Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[Global_14416 /*15*/].f_5), 3800);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_14416 == 23)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 0 && Global_1573431 == 0)
					{
					}
				}
				if (Global_14416 == 2 || iVar32 == 1)
				{
					if (_get_number_of_instances_of_streamed_script(Global_2290[Global_14416 /*15*/].f_9) == 0)
					{
						Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[Global_14416 /*15*/].f_5), 4092);
					}
				}
				else if (_get_number_of_instances_of_streamed_script(Global_2290[Global_14416 /*15*/].f_9) == 0)
				{
					Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[Global_14416 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2290[Global_14416 /*15*/].f_5));
			Global_2286 = 99;
			GAMEPLAY::CLEAR_BIT(&Global_2283, 23);
		}
		if (_is_input_disabled(2))
		{
			if (is_pause_menu_active())
			{
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_14413.f_1 == 1)
		{
			func_6();
		}
		if (Global_14413.f_1 == 0)
		{
			func_6();
		}
		if (Global_14413.f_1 == 3)
		{
			func_6();
		}
		else
		{
			if (Global_15725)
			{
				if (Global_14413.f_1 == 9)
				{
					if (Global_69489)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2284, 31))
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2284, 27))
							{
								if (func_5())
								{
									if (!GAMEPLAY::IS_BIT_SET(Global_2283, 9))
									{
										if (func_52(2, Global_14385, 0))
										{
											if (!GAMEPLAY::IS_PC_VERSION())
											{
												if (!Global_14412 == 1)
												{
													if (Global_14413.f_1 > 6)
													{
														GAMEPLAY::SET_BIT(&Global_2284, 24);
														GAMEPLAY::SET_BIT(&Global_2284, 27);
														GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
														GAMEPLAY::CLEAR_BIT(&Global_2284, 25);
														GAMEPLAY::SET_BIT(&(Global_2460486.f_1639), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_14396 == 1)
			{
				Global_14398 = 1;
				func_55(0);
			}
			if (Global_14397 == 1)
			{
				Global_14398 = 1;
				func_55(0);
			}
			if (Global_69489)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2285, false))
				{
					if (is_pause_menu_active())
					{
						if (Global_2465472.f_1 == 1)
						{
						}
						else
						{
							func_58();
							func_55(0);
						}
					}
				}
			}
			if (is_player_playing(player_id()))
			{
				if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
				{
					if (get_entity_submerged_level(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						GAMEPLAY::SET_BIT(&Global_2284, 4);
					}
					if (get_entity_submerged_level(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						Global_14398 = 1;
						func_58();
						func_55(0);
					}
				}
				if (func_71(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
					{
						iLocal_79 = 0;
					}
					else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_79 = 1;
					}
				}
				if ((((((((((((((is_ped_in_any_train(PLAYER::PLAYER_PED_ID()) || is_player_riding_train(player_id())) || is_ped_on_mount(PLAYER::PLAYER_PED_ID())) || is_stunt_jump_in_progress()) || is_player_climbing(player_id())) || is_ped_jacking(PLAYER::PLAYER_PED_ID())) || is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0)) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID())) || _get_number_of_instances_of_streamed_script(joaat("michael1")) > 0) || Global_69750 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || is_vehicle_driveable(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), 0)) || is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID())) || _is_nightvision_inactive()) || iLocal_79)
				{
					if (!Global_14356)
					{
						GAMEPLAY::SET_BIT(&Global_2284, 4);
					}
				}
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (Global_69489 == 0)
					{
						if (iLocal_61 == 0)
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
								{
									iLocal_59 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_61 = 1;
								}
							}
						}
						else
						{
							iLocal_60 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_63 = iLocal_60 - iLocal_59;
							if (iLocal_63 < 4000)
							{
								GAMEPLAY::SET_BIT(&Global_2284, 4);
							}
							else
							{
								iLocal_61 = 0;
							}
						}
					}
				}
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					if (Global_69489)
					{
						get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed") && Global_14413.f_1 < 7)
						{
							GAMEPLAY::SET_BIT(&Global_2284, 4);
						}
					}
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_70 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible2"))
					{
						iLocal_73 = 1;
					}
					else
					{
						iLocal_73 = 0;
					}
					if (((ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("cutter")) || iLocal_73) || is_vehicle_driveable(iLocal_70, 0) == 0)
					{
						GAMEPLAY::SET_BIT(&Global_2284, 4);
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("limo2"))
					{
						if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_70))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_70);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										GAMEPLAY::SET_BIT(&Global_2284, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										GAMEPLAY::SET_BIT(&Global_2284, 4);
									}
								}
								if (_0xE33FFA906CE74880(iLocal_70, iVar33))
								{
									GAMEPLAY::SET_BIT(&Global_2284, 4);
								}
							}
						}
					}
					if (is_control_just_pressed(0, 69))
					{
						if (Global_69489 == 0)
						{
							if (Global_14413.f_1 == 6 || Global_14413.f_1 == 7)
							{
								iVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == 886810209 && is_entity_in_water(iLocal_70))
								{
									iVar34 = false;
								}
								if (((is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iLocal_70)) || is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iLocal_70))) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible2"))
								{
									iVar34 = false;
								}
								if (iVar34)
								{
									func_55(0);
								}
							}
						}
					}
				}
				else
				{
					if (is_control_just_pressed(0, 24))
					{
						if (Global_69489 == 0)
						{
							if (Global_14413.f_1 == 6 || Global_14413.f_1 == 7)
							{
								func_55(0);
							}
						}
					}
					iLocal_73 = 0;
				}
				if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
				{
					Global_14398 = 1;
					func_58();
					func_55(0);
				}
				if (Global_69489 == 0)
				{
					if (get_entity_health(PLAYER::PLAYER_PED_ID()) < iLocal_56)
					{
						if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14398 = 1;
							func_58();
							func_55(0);
						}
					}
					if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
					{
						if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
						{
							Global_14398 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				else if (func_65())
				{
					if (get_entity_health(PLAYER::PLAYER_PED_ID()) < iLocal_56)
					{
						if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14398 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				if (is_aim_cam_active())
				{
					if (!is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_65())
						{
							get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
							if ((iLocal_69 == joaat("weapon_sniperrifle") || iLocal_69 == joaat("weapon_heavysniper")) || iLocal_69 == joaat("weapon_remotesniper"))
							{
								iLocal_68 = true;
							}
							else
							{
								iLocal_68 = false;
							}
							if (is_first_person_aim_cam_active())
							{
								if (iLocal_68)
								{
									Global_14398 = 1;
									func_58();
									func_55(0);
								}
							}
						}
					}
				}
				if (is_ped_being_jacked(PLAYER::PLAYER_PED_ID()))
				{
					Global_14398 = 1;
					func_58();
					func_55(0);
				}
				if (is_ped_being_stunned(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14398 = 1;
					func_58();
					func_55(0);
				}
				if (is_player_being_arrested(player_id(), 1))
				{
					Global_14398 = 1;
					func_58();
					func_55(0);
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_69489 == 0)
					{
						Global_14398 = 1;
						func_58();
						func_55(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_69489 && Global_2465472.f_1) && Global_2465472.f_37) && Global_14413.f_1 == 9)
				{
					iVar35 = 1;
					if (!GAMEPLAY::IS_BIT_SET(Global_2284, 24))
					{
						if (GAMEPLAY::IS_BIT_SET(Global_2284, 26))
						{
							GAMEPLAY::SET_BIT(&Global_2284, 25);
							GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
							GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_14398 = 1;
					func_58();
					func_55(0);
				}
			}
		}
		if (Global_14391 == 1)
		{
			func_1();
		}
		if (Global_14412 == 2)
		{
			if (_is_input_disabled(2))
			{
				set_input_exclusive(0, Global_14382);
				set_input_exclusive(0, Global_14383);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!is_control_pressed(2, Global_14382) && !is_control_pressed(2, Global_14381))
	{
		Global_14391 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, false) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, true) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
			if (get_ped_in_vehicle_seat(iParam1, 3) == iParam0)
			{
				return 3;
			}
			if (get_ped_in_vehicle_seat(iParam1, 4) == iParam0)
			{
				return 4;
			}
			if (get_ped_in_vehicle_seat(iParam1, 5) == iParam0)
			{
				return 5;
			}
			if (get_ped_in_vehicle_seat(iParam1, 6) == iParam0)
			{
				return 6;
			}
			if (get_ped_in_vehicle_seat(iParam1, 7) == iParam0)
			{
				return 3;
			}
			if (get_ped_in_vehicle_seat(iParam1, 8) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

bool func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_4(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_4(int iParam0)
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

auto func_5()
{
	return Global_2465472.f_1;
}

void func_6()
{
	float fVar0;
	Vector3 vVar1;
	float fVar4;
	
	Global_16771 = 0;
	Global_16772 = 0;
	set_input_exclusive(0, Global_14383);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	if (Global_14379 == 0)
	{
		set_mobile_phone_scale(500f);
		if (func_64())
		{
			iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		script_is_moving_mobile_phone_offscreen(1);
		Global_14379 = 1;
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_ringtone_playing(PLAYER::PLAYER_PED_ID()))
		{
			stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
		}
	}
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_ringtone_playing(PLAYER::PLAYER_PED_ID()))
		{
			stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_101154.f_12741.f_84 == 1)
	{
		Global_101154.f_12741.f_84 = 0;
		clear_floating_help(0, 1);
	}
	fVar0 = 350f;
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 30) || GAMEPLAY::IS_BIT_SET(Global_2285, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = {Global_14373};
	if (Global_14398 == 1)
	{
		vVar1 = {-45f, 45f, 25f};
	}
	if ((GAMEPLAY::IS_BIT_SET(Global_2284, 26) || GAMEPLAY::IS_BIT_SET(Global_2283, 30)) || GAMEPLAY::IS_BIT_SET(Global_2285, 2))
	{
		vLocal_75 = {Global_14359[Global_14358 /*3*/]};
	}
	else
	{
		vLocal_75 = {Global_14366[Global_14358 /*3*/]};
	}
	fVar4 = func_12(vLocal_75, Global_14359[Global_14358 /*3*/], Global_14373, vVar1, fVar0, 0);
	if (!iLocal_43 && fVar4 >= 1f)
	{
		destroy_mobile_phone();
		iLocal_43 = 1;
	}
	if (iLocal_43 && GAMEPLAY::GET_GAME_TIMER() - iLocal_18 > 500)
	{
		set_input_exclusive(0, Global_14383);
		if (Global_14413.f_1 == 3)
		{
		}
		if (Global_14413.f_1 == 1)
		{
		}
		if (Global_14413.f_1 == 0)
		{
		}
		script_is_moving_mobile_phone_offscreen(0);
		Global_14354 = 0;
		Global_14395 = 0;
		Global_14569 = 0;
		if (Global_101154.f_12741.f_84 == 1)
		{
			Global_101154.f_12741.f_84 = 0;
			clear_floating_help(0, 1);
		}
		Global_14357 = 1;
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
		}
		if (Global_16726 == 0)
		{
		}
		Global_14571 = 0;
		if (func_9(0))
		{
			func_8();
		}
		GAMEPLAY::CLEAR_BIT(&Global_2284, 8);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 14);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 9);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 27);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 5);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 19);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 21);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 24);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 25);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 27);
		GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
		GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
		Global_2467970 = 0;
		iLocal_78 = 0;
		if (!is_player_playing(player_id()))
		{
			func_7();
		}
		settimera(0);
		if (_get_number_of_instances_of_streamed_script(Global_2290[2 /*15*/].f_9) == 0)
		{
			while (is_thread_active(Global_14411))
			{
				wait(0);
				set_input_exclusive(0, Global_14383);
				if (has_scaleform_movie_loaded(Global_14394))
				{
					set_text_render_id(iLocal_42);
					draw_scaleform_movie(Global_14394, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
				}
				if (timera() > 5000)
				{
					terminate_thread(Global_14411);
				}
			}
		}
		Global_14401 = 0;
		if (has_scaleform_movie_loaded(Global_14394))
		{
			func_103(Global_14394, "SHUTDOWN_MOVIE");
		}
		wait(0);
		set_scaleform_movie_as_no_longer_needed(&Global_14394);
		Global_14379 = 0;
		set_input_exclusive(0, Global_14383);
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Global_2465472.f_1)
			{
				if (Global_69489)
				{
					play_sound_frontend(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					play_sound_frontend(-1, "Hang_Up", &Global_14402, 1);
				}
			}
		}
		func_100();
		func_98();
		Global_15725 = 0;
		Global_2563612 = 0;
		terminate_this_thread();
	}
}

void func_7()
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

void func_8()
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

bool func_9(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_10(iParam0))
	{
		return false;
	}
	return true;
}

int func_10(int iParam0)
{
	return func_11(iParam0, Global_35711);
}

bool func_11(int iParam0, int iParam1)
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

float func_12(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, float fParam4, int iParam5)
{
	struct<2> Var0;
	float fVar3;
	Vector3 fVar4;
	float fVar5;
	
	if (Global_2563612 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 14) && Global_14413.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
			{
				Global_2563612 = 1;
			}
		}
	}
	if (func_64() && Global_2563612 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
	}
	fVar3 = func_14(to_float(GAMEPLAY::GET_GAME_TIMER() - iLocal_18) / fParam12, 0f, 1f);
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
		Global_14341 = {func_13(vParam0, vParam3, fVar4)};
		Global_14344 = {func_13(vParam6, vParam9, fVar4)};
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

Vector3 func_13(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15()
{
	if (Global_14391 == 0)
	{
		if (func_52(2, Global_14385, 0))
		{
			if (Global_69489 == 0)
			{
				if (Global_14573)
				{
					if (Global_14572 == 0)
					{
						Global_14572 = 1;
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(2);
						func_16();
						func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
						Global_14393 = Global_14418;
					}
					else
					{
						Global_14572 = 0;
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(1);
						func_16();
						func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
						Global_14393 = Global_14417;
					}
				}
			}
		}
	}
}

void func_16()
{
	if (Global_14573 == 0)
	{
		func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
	}
	else if (Global_69489)
	{
		func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
	}
	else
	{
		if (Global_14572 == 1)
		{
			if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14401)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		GAMEPLAY::SET_BIT(&Global_2283, 17);
	}
}

void func_17()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2284, 10) || iLocal_78 == 1)
	{
		Global_2890 = GAMEPLAY::GET_GAME_TIMER();
		Global_2889 = 0;
		Global_14391 = 1;
		_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
		uLocal_29 = _pop_scaleform_movie_function();
		iLocal_30 = 1;
	}
	else if (Global_14391 == 0)
	{
		if (func_52(2, Global_14382, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_2890 = GAMEPLAY::GET_GAME_TIMER();
				Global_2889 = 0;
				Global_14391 = 1;
				_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
				uLocal_29 = _pop_scaleform_movie_function();
				iLocal_30 = 1;
			}
		}
	}
}

void func_18()
{
	if (Global_14391 == 0)
	{
		if (func_52(2, Global_14380, 1))
		{
			if (func_92(2082, -1, 0) == 1)
			{
				if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2284, 3))
					{
						if (!Global_14356)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 3))
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2283, 14))
								{
									Global_14391 = 1;
									GAMEPLAY::SET_BIT(&Global_2563397, 3);
									func_19(3, 0, 1, 0);
									Global_16771 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_19(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_105();
	if (Global_69489 == 0)
	{
		if (func_71(14))
		{
			if (Global_16771 == 2 || Global_16771 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (Global_14413.f_1 == 9)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		if (func_21(0) == 1)
		{
			return false;
		}
	}
	if (Global_14379 == 1)
	{
		return false;
	}
	if (Global_14413.f_1 == 7)
	{
		return false;
	}
	if (iParam1 == 1)
	{
	}
	if (!is_thread_active(Global_14410))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14413.f_1 < 4)
			{
				func_20("cellphone_flashhand");
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					Global_14410 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14395)
	{
		wait(0);
	}
	func_75();
	func_73();
	if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
	{
		Global_2889 = 0;
		Global_14413.f_1 = 7;
		func_20(&(Global_2290[iParam0 /*15*/].f_5));
		if (iParam3)
		{
			if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
			{
				Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
		{
			Global_14411 = SYSTEM::START_NEW_SCRIPT(&(Global_2290[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2290[iParam0 /*15*/].f_5));
		return true;
	}
	return true;
}

void func_20(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

bool func_21(int iParam0)
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

void func_22()
{
	if (Global_14392)
	{
		if (timera() > 50)
		{
			Global_14392 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[1])
					{
						func_31();
						Global_14393 = 1;
					}
					break;
				
				case 1:
					if (Global_2852[2])
					{
						func_31();
						Global_14393 = 2;
					}
					break;
				
				case 2:
					if (Global_2852[3])
					{
						func_31();
						func_29();
						Global_14393 = 3;
					}
					else
					{
						func_27();
						func_29();
						Global_14393 = 4;
					}
					break;
				
				case 3:
					if (Global_2852[4])
					{
						func_31();
						Global_14393 = 4;
					}
					break;
				
				case 4:
					if (Global_2852[5])
					{
						func_31();
						Global_14393 = 5;
					}
					break;
				
				case 5:
					if (Global_2852[6])
					{
						func_31();
						func_29();
						Global_14393 = 6;
					}
					break;
				
				case 6:
					if (Global_2852[7])
					{
						func_31();
						Global_14393 = 7;
					}
					break;
				
				case 7:
					if (Global_2852[8])
					{
						func_31();
						Global_14393 = 8;
					}
					else
					{
						func_27();
						func_29();
						Global_14393 = 0;
					}
					break;
				
				case 8:
					if (Global_2852[0])
					{
						func_31();
						func_29();
						Global_14393 = 0;
					}
					else
					{
						func_27();
						func_29();
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[8])
					{
						func_27();
						func_24();
						Global_14393 = 8;
					}
					else
					{
						func_31();
						func_24();
						Global_14393 = 7;
					}
					break;
				
				case 1:
					if (Global_2852[0])
					{
						func_27();
						Global_14393 = 0;
					}
					else if (Global_2852[8])
					{
						func_24();
						func_31();
					}
					else
					{
						func_24();
					}
					break;
				
				case 2:
					if (Global_2852[1])
					{
						func_27();
						Global_14393 = 1;
					}
					break;
				
				case 3:
					if (Global_2852[2])
					{
						func_27();
						func_24();
						Global_14393 = 2;
					}
					break;
				
				case 4:
					if (Global_2852[3])
					{
						func_27();
						Global_14393 = 3;
					}
					else
					{
						func_24();
						func_31();
						Global_14576 = 1;
						Global_14393 = 2;
					}
					break;
				
				case 5:
					if (Global_2852[4])
					{
						func_27();
						Global_14393 = 4;
					}
					break;
				
				case 6:
					if (Global_2852[5])
					{
						func_24();
						func_27();
						Global_14393 = 5;
					}
					break;
				
				case 7:
					if (Global_2852[6])
					{
						func_27();
						Global_14393 = 6;
					}
					break;
				
				case 8:
					if (Global_2852[7])
					{
						func_27();
						Global_14393 = 7;
					}
					break;
				}
			}
	}
	if (Global_14392 == 0)
	{
		if (func_52(2, Global_14388, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 2:
					if (Global_2852[0] == 1)
					{
						Global_14393 = 0;
					}
					else
					{
						Global_14393 = 1;
						Global_14576 = 1;
					}
					break;
				
				case 5:
					Global_14393 = 3;
					break;
				
				case 6:
					Global_14393 = 7;
					break;
				
				case 7:
					if (Global_2852[Global_14393 + 1] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 6;
						Global_14576 = 1;
					}
					break;
				
				case 8:
					Global_14393 = 6;
					break;
				
				default:
					Global_14393++;
					break;
			}
			if (Global_14576 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14387, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					Global_14393 = 2;
					break;
				
				case 1:
					if (Global_2852[0] == 1)
					{
						Global_14393 = 0;
					}
					else
					{
						Global_14393 = 2;
						Global_14576 = 1;
					}
					break;
				
				case 3:
					Global_14393 = 5;
					break;
				
				case 6:
					if (Global_2852[8] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 7;
						Global_14576 = 1;
					}
					break;
				
				default:
					Global_14393--;
					break;
			}
			if (Global_14576 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14389, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[6])
					{
						Global_14393 = 6;
					}
					break;
				
				case 1:
					if (Global_2852[7])
					{
						Global_14393 = 7;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 4;
					}
					break;
				
				case 2:
					if (Global_2852[8])
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 5;
					}
					break;
				
				case 3:
					if (Global_2852[0])
					{
						Global_14393 = 0;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 6;
					}
					break;
				
				case 4:
					if (Global_2852[1])
					{
						Global_14393 = 1;
					}
					break;
				
				case 5:
					if (Global_2852[2])
					{
						Global_14393 = 2;
					}
					break;
				
				case 6:
					if (Global_2852[3])
					{
						Global_14393 = 3;
					}
					break;
				
				case 7:
					if (Global_2852[4])
					{
						Global_14393 = 4;
					}
					break;
				
				case 8:
					if (Global_2852[5])
					{
						Global_14393 = 5;
					}
					break;
			}
			if (Global_14576 == 1)
			{
				func_29();
			}
			else
			{
				func_24();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14390, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[3])
					{
						Global_14393 = 3;
					}
					break;
				
				case 1:
					if (Global_2852[4])
					{
						Global_14393 = 4;
					}
					break;
				
				case 2:
					if (Global_2852[5])
					{
						Global_14393 = 5;
					}
					break;
				
				case 3:
					if (Global_2852[6])
					{
						Global_14393 = 6;
					}
					break;
				
				case 4:
					if (Global_2852[7])
					{
						Global_14393 = 7;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 1;
					}
					break;
				
				case 5:
					if (Global_2852[8])
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 2;
					}
					break;
				
				case 6:
					if (Global_2852[0])
					{
						Global_14393 = 0;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 3;
					}
					break;
				
				case 7:
					if (Global_2852[1])
					{
						Global_14393 = 1;
					}
					break;
				
				case 8:
					if (Global_2852[2])
					{
						Global_14393 = 2;
					}
					break;
			}
			if (Global_14576 == 1)
			{
				func_24();
			}
			else
			{
				func_29();
			}
			Global_14392 = 1;
			settimera(0);
		}
	}
	if (Global_2290[23 /*15*/].f_10 == 57)
	{
		if (Global_14392 == 1 && Global_14393 == 8)
		{
			if (iLocal_80 == 0)
			{
				iLocal_80 = 1;
				func_23(12);
			}
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_24()
{
	func_97(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_25();
}

void func_25()
{
	if (func_26())
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

bool func_26()
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

void func_27()
{
	func_97(Global_14394, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_28();
}

void func_28()
{
	if (func_26())
	{
		if (Global_14576 == 0)
		{
			_move_finger(3);
		}
		else
		{
			_move_finger(4);
		}
	}
}

void func_29()
{
	func_97(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_30();
}

void func_30()
{
	if (func_26())
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

void func_31()
{
	func_97(Global_14394, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_32();
}

void func_32()
{
	if (func_26())
	{
		if (Global_14576 == 0)
		{
			_move_finger(4);
		}
		else
		{
			_move_finger(3);
		}
	}
}

void func_33()
{
	if (Global_14392)
	{
		if (timera() > 50)
		{
			Global_14392 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_14393)
			{
				case 6:
					if (Global_2852[7])
					{
						func_31();
						Global_14393 = 7;
					}
					break;
				
				case 7:
					if (Global_2852[6])
					{
						func_27();
						Global_14393 = 6;
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_14393)
			{
				case 6:
					if (Global_2852[7])
					{
						func_31();
						Global_14393 = 7;
					}
					break;
				
				case 7:
					if (Global_2852[6])
					{
						func_27();
						Global_14393 = 6;
					}
					break;
				}
			}
	}
	if (Global_14392 == 0)
	{
		if (func_52(2, Global_14388, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 2:
					Global_14393 = 0;
					break;
				
				case 5:
					Global_14393 = 3;
					break;
				
				case 7:
					if (Global_2852[Global_14393 + 1] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 6;
						Global_14576 = 1;
					}
					break;
				
				case 8:
					Global_14393 = 6;
					break;
				
				default:
					Global_14393++;
					break;
			}
			if (Global_14576 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14387, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					Global_14393 = 2;
					break;
				
				case 3:
					Global_14393 = 5;
					break;
				
				case 6:
					if (Global_2852[8] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 7;
						Global_14576 = 1;
					}
					break;
				
				default:
					Global_14393--;
					break;
			}
			if (Global_14576 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14392 = 1;
			settimera(0);
		}
	}
}

void func_34()
{
	if (Global_14392)
	{
		if (timera() > 50)
		{
			Global_14392 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[1])
					{
						func_31();
						Global_14393 = 1;
					}
					break;
				
				case 1:
					if (Global_2852[2])
					{
						func_31();
						Global_14393 = 2;
					}
					break;
				
				case 2:
					if (Global_2852[3])
					{
						func_31();
						func_29();
						Global_14393 = 3;
					}
					else
					{
						func_27();
						func_29();
						Global_14393 = 4;
					}
					break;
				
				case 3:
					if (Global_2852[4])
					{
						func_31();
						Global_14393 = 4;
					}
					break;
				
				case 4:
					if (Global_2852[5])
					{
						func_31();
						Global_14393 = 5;
					}
					break;
				
				case 5:
					if (Global_2852[6])
					{
						func_31();
						func_29();
						Global_14393 = 6;
					}
					break;
				
				case 6:
					if (Global_2852[7])
					{
						func_31();
						Global_14393 = 7;
					}
					break;
				
				case 7:
					if (Global_2852[8])
					{
						func_31();
						Global_14393 = 8;
					}
					else
					{
						func_27();
						func_29();
						Global_14393 = 0;
					}
					break;
				
				case 8:
					if (Global_2852[0])
					{
						func_31();
						func_29();
						Global_14393 = 0;
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[8])
					{
						func_27();
						func_24();
						Global_14393 = 8;
					}
					else
					{
						func_31();
						func_24();
						Global_14393 = 7;
					}
					break;
				
				case 1:
					if (Global_2852[0])
					{
						func_27();
						Global_14393 = 0;
					}
					break;
				
				case 2:
					if (Global_2852[1])
					{
						func_27();
						Global_14393 = 1;
					}
					break;
				
				case 3:
					if (Global_2852[2])
					{
						func_27();
						func_24();
						Global_14393 = 2;
					}
					break;
				
				case 4:
					if (Global_2852[3])
					{
						func_27();
						Global_14393 = 3;
					}
					else
					{
						func_24();
						func_31();
						Global_14576 = 1;
						Global_14393 = 2;
					}
					break;
				
				case 5:
					if (Global_2852[4])
					{
						func_27();
						Global_14393 = 4;
					}
					break;
				
				case 6:
					if (Global_2852[5])
					{
						func_24();
						func_27();
						Global_14393 = 5;
					}
					break;
				
				case 7:
					if (Global_2852[6])
					{
						func_27();
						Global_14393 = 6;
					}
					break;
				
				case 8:
					if (Global_2852[7])
					{
						func_27();
						Global_14393 = 7;
					}
					break;
				}
			}
	}
	if (Global_14392 == 0)
	{
		if (func_52(2, Global_14388, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 2:
					Global_14393 = 0;
					break;
				
				case 5:
					Global_14393 = 3;
					break;
				
				case 7:
					if (Global_2852[Global_14393 + 1] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 6;
						Global_14576 = 1;
					}
					break;
				
				case 8:
					Global_14393 = 6;
					break;
				
				default:
					Global_14393++;
					break;
			}
			if (Global_14576 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14387, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					Global_14393 = 2;
					break;
				
				case 3:
					Global_14393 = 5;
					break;
				
				case 6:
					if (Global_2852[8] == 1)
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14393 = 7;
						Global_14576 = 1;
					}
					break;
				
				default:
					Global_14393--;
					break;
			}
			if (Global_14576 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14389, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[6])
					{
						Global_14393 = 6;
					}
					break;
				
				case 1:
					if (Global_2852[7])
					{
						Global_14393 = 7;
					}
					break;
				
				case 2:
					if (Global_2852[8])
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 5;
					}
					break;
				
				case 3:
					if (Global_2852[0])
					{
						Global_14393 = 0;
					}
					break;
				
				case 4:
					if (Global_2852[1])
					{
						Global_14393 = 1;
					}
					break;
				
				case 5:
					if (Global_2852[2])
					{
						Global_14393 = 2;
					}
					break;
				
				case 6:
					if (Global_2852[3])
					{
						Global_14393 = 3;
					}
					break;
				
				case 7:
					if (Global_2852[4])
					{
						Global_14393 = 4;
					}
					break;
				
				case 8:
					if (Global_2852[5])
					{
						Global_14393 = 5;
					}
					break;
			}
			if (Global_14576 == 1)
			{
				func_29();
			}
			else
			{
				func_24();
			}
			Global_14392 = 1;
			settimera(0);
		}
		if (func_52(2, Global_14390, 0))
		{
			Global_14576 = 0;
			switch (Global_14393)
			{
				case 0:
					if (Global_2852[3])
					{
						Global_14393 = 3;
					}
					break;
				
				case 1:
					if (Global_2852[4])
					{
						Global_14393 = 4;
					}
					break;
				
				case 2:
					if (Global_2852[5])
					{
						Global_14393 = 5;
					}
					break;
				
				case 3:
					if (Global_2852[6])
					{
						Global_14393 = 6;
					}
					break;
				
				case 4:
					if (Global_2852[7])
					{
						Global_14393 = 7;
					}
					break;
				
				case 5:
					if (Global_2852[8])
					{
						Global_14393 = 8;
					}
					else
					{
						Global_14576 = 1;
						Global_14393 = 2;
					}
					break;
				
				case 6:
					if (Global_2852[0])
					{
						Global_14393 = 0;
					}
					break;
				
				case 7:
					if (Global_2852[1])
					{
						Global_14393 = 1;
					}
					break;
				
				case 8:
					if (Global_2852[2])
					{
						Global_14393 = 2;
					}
					break;
			}
			if (Global_14576 == 1)
			{
				func_24();
			}
			else
			{
				func_29();
			}
			Global_14392 = 1;
			settimera(0);
		}
	}
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	if (_0x768FF8961BA904D6(uLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = _0x2DE7EFA66B906036(uLocal_29);
		if (Global_14572 == 0)
		{
			Global_14417 = iLocal_28;
		}
		else
		{
			Global_14418 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_14416 = Global_2816[iLocal_28];
		if (GAMEPLAY::IS_BIT_SET(Global_2284, 10))
		{
			Global_14416 = 2;
			GAMEPLAY::CLEAR_BIT(&Global_2284, 10);
		}
		if (iLocal_78 == 1)
		{
			Global_14417 = 1;
			Global_14416 = 0;
			Global_2467970 = 0;
			iLocal_78 = 0;
		}
		iVar0 = 0;
		if (is_thread_active(Global_14411))
		{
			iVar0 = 1;
		}
		if (Global_14416 == 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
			{
				iVar0 = 1;
			}
			else if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (((((((is_ped_on_mount(PLAYER::PLAYER_PED_ID()) || is_stunt_jump_in_progress()) || is_player_climbing(player_id())) || is_ped_jacking(PLAYER::PLAYER_PED_ID())) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID())) || is_vehicle_driveable(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), 0)) || _is_nightvision_inactive())
				{
					iVar0 = 1;
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (get_entity_upright_value(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (is_player_targetting_anything(player_id()))
				{
					iVar0 = 1;
				}
				if (Global_69489)
				{
					if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
					{
						get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14416 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_14416 == 23 && are_strings_equal(&(Global_2290[Global_14416 /*15*/]), "CELL_BENWEB"))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_69489)
		{
			if (Global_14416 == 15 || Global_14416 == 5)
			{
			}
			else
			{
				if (Global_14416 == 23)
				{
					if (((GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 0 && Global_1573431 == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 0)
					{
					}
					if (((GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 1 && GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 0) && Global_1573431 == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 0)
					{
						iVar0 = 1;
						GAMEPLAY::SET_BIT(&Global_2563397, 21);
					}
				}
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1) || is_player_free_aiming(player_id()))
					{
						if (Global_14416 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
					Global_14413.f_1 = 7;
					if (GAMEPLAY::IS_BIT_SET(Global_2283, 23))
					{
					}
					else
					{
						func_37();
						SCRIPT::REQUEST_SCRIPT(&(Global_2290[Global_14416 /*15*/].f_5));
						GAMEPLAY::SET_BIT(&Global_2283, 23);
					}
				}
				else
				{
					if (Global_14416 == 2 || Global_14416 == 3)
					{
					}
					func_36();
				}
			}
		}
		else
		{
			switch (Global_14416)
			{
				case 3:
					if (Global_100207 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					GAMEPLAY::SET_BIT(&Global_2283, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_14574 == 0)
					{
						if ((Global_2287 == 0 && iLocal_31 == 0) && Global_35711 == 15)
						{
							iLocal_31 = 1;
							func_37();
							if (!Global_101154.f_12741.f_85)
							{
							}
						}
					}
					else
					{
						func_36();
					}
					break;
				
				default:
					break;
			}
			if (_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_14416 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_71(14))
			{
				if (Global_14416 != 3 && Global_14416 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_37();
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
				Global_14413.f_1 = 7;
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_2290[Global_14416 /*15*/].f_5));
					GAMEPLAY::SET_BIT(&Global_2283, 23);
				}
			}
			else if (Global_14416 != 20)
			{
				if (Global_101154.f_12741.f_86 == 0)
				{
					if (_get_number_of_instances_of_streamed_script(joaat("paparazzo3b")) > 0)
					{
						if (Global_14416 == 3)
						{
							if (is_player_playing(player_id()))
							{
								if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_68("CELL_38", -1);
									Global_101154.f_12741.f_86 = 1;
								}
							}
						}
					}
				}
				func_36();
			}
		}
	}
}

void func_36()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_37()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_38();
	}
}

void func_38()
{
	if (func_26())
	{
		_move_finger(5);
	}
}

void func_39()
{
	if (Global_14379 == 0)
	{
		if (func_12(Global_14366[Global_14358 /*3*/], Global_14359[Global_14358 /*3*/], Global_14373, Global_14373, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_2284, 24);
			GAMEPLAY::SET_BIT(&Global_2284, 26);
		}
	}
}

void func_40()
{
	if (Global_14379 == 0)
	{
		if (func_12(Global_14359[Global_14358 /*3*/], Global_14366[Global_14358 /*3*/], Global_14373, Global_14373, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_2284, 25);
			if (Global_15725)
			{
				GAMEPLAY::CLEAR_BIT(&Global_2284, 27);
			}
		}
	}
}

void func_41()
{
	if (Global_14379 == 0 && Global_14353 == 0)
	{
		if (func_12(Global_14366[Global_14358 /*3*/], Global_14359[Global_14358 /*3*/], Global_14373, Global_14373, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_2563612 = 0;
		}
	}
}

void func_42()
{
	float fVar0;
	float fVar1;
	
	if (GAMEPLAY::IS_BIT_SET(Global_2285, 2))
	{
		GAMEPLAY::SET_BIT(&Global_2284, 8);
		GAMEPLAY::SET_BIT(&Global_2283, 14);
		Global_14353 = 0;
		iLocal_18 = 0;
		set_mobile_phone_rotation(Global_14373, 0);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("appemail")) < 1)
	{
		fVar0 = func_12(Global_14359[Global_14358 /*3*/], Global_14366[Global_14358 /*3*/], Global_14376, Global_14373, 450f, 1);
		if (fVar0 >= 1f)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 8);
			GAMEPLAY::SET_BIT(&Global_2283, 14);
			Global_14353 = 0;
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
			iLocal_38 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 8);
		}
	}
	else
	{
		if (iLocal_38 == 0)
		{
			vLocal_39 = {Global_14366[Global_14358 /*3*/]};
			vLocal_39.x -= 10f;
			vLocal_39.y += 20f;
			iLocal_38 = 1;
		}
		fVar1 = func_12(Global_14359[Global_14358 /*3*/], vLocal_39, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 8);
			GAMEPLAY::SET_BIT(&Global_2283, 14);
			Global_14353 = 0;
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_2285, 2);
			iLocal_38 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 8);
		}
	}
}

void func_43()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_63 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_62);
	}
	else
	{
		iLocal_58 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_63 = iLocal_58 - iLocal_57;
	}
	if (iLocal_63 > 4000)
	{
		iLocal_45 = func_89();
		if (is_mobile_phone_call_ongoing())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_62 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_44()
{
	if (Global_14412 == 1)
	{
		func_104();
		if (Global_14391 == 0)
		{
			if (func_52(2, Global_14383, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2284, 8))
				{
					if (Global_15759 == 0)
					{
						func_36();
						Global_14391 = 1;
						Global_14412 = 3;
						Global_15761 = 1;
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_14391 == 0)
		{
			if (func_52(2, Global_14382, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2284, 8))
				{
					func_37();
					Global_14391 = 1;
					Global_14412 = 2;
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
					}
					func_49();
					func_48();
				}
			}
		}
	}
	else
	{
		if (iLocal_55 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 27))
			{
				iLocal_55 = 1;
				settimerb(0);
			}
		}
		else
		{
			if (Global_14413.f_1 > 3)
			{
				if (timerb() > 1500)
				{
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!is_ped_ringtone_playing(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_14356)
							{
								play_ped_ringtone("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
							else if (!GAMEPLAY::IS_BIT_SET(Global_2285, 5))
							{
								play_ped_ringtone("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_2283, 27))
			{
				iLocal_55 = 0;
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					stop_ped_ringtone(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_14412 == 0)
		{
			if (Global_14391 == 0)
			{
				if (func_52(2, Global_14381, 0) || Global_2467970 == 1)
				{
					if (is_player_playing(player_id()))
					{
						if (is_player_control_on(player_id()))
						{
							if (GAMEPLAY::IS_BIT_SET(Global_2284, 8))
							{
								switch (Global_14413.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_14571 == 0)
										{
											if (Global_14572 == 1)
											{
												func_36();
												Global_14572 = 0;
												func_97(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_75();
												func_73();
												func_72(1);
												func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
												{
													play_sound_frontend(-1, "Put_Away", &Global_14402, 1);
												}
												iLocal_18 = 0;
												Global_14413.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_14413.f_1 = 3;
										break;
									
									case 7:
										if (GAMEPLAY::IS_BIT_SET(Global_2283, 23) == 1)
										{
										}
										if (Global_2891 - Global_2890 > Global_2892 && GAMEPLAY::IS_BIT_SET(Global_2283, 23) == 0)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_2284, false))
											{
											}
											else
											{
												func_36();
												Global_2889 = 1;
												Global_14413.f_1 = 6;
												if (Global_69489)
												{
													func_97(Global_14394, "SET_THEME", to_float(Global_2563609), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_2286 = 99;
												if (Global_2467970 == 0)
												{
													func_45();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_1598 == 132)
										{
											if (Global_2465472.f_1 || GAMEPLAY::IS_BIT_SET(Global_2284, 20))
											{
												func_36();
												func_66();
											}
										}
										else
										{
											func_36();
											func_66();
											Global_15761 = 1;
										}
										break;
									
									case 9:
										if (Global_15712 == 0)
										{
											Global_14413.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2467970 == 1)
								{
									iLocal_78 = 1;
									Global_2467970 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_45()
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
			func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_72(Global_2888);
			if (Global_2888 == 1)
			{
				func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_97(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_70(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_91();
				func_97(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_47("CELL_300");
					func_47("CELL_217");
					func_47("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_97(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_97(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_91();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_47("CELL_300");
					func_47("CELL_219");
					func_47("CELL_219");
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
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_97(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_97(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_46();
			break;
		
		default:
			break;
	}
}

void func_46()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_47(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_48()
{
	if (Global_15725)
	{
		if (Global_69489)
		{
			if (has_scaleform_movie_loaded(Global_14394))
			{
				if (!GAMEPLAY::IS_PC_VERSION())
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Global_2460486.f_1639), 15);
				}
			}
		}
	}
}

void func_49()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (!Global_15720)
		{
			func_70(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
				func_47("CELL_300");
				func_47("CELL_219");
				func_47("CELL_219");
				_pop_scaleform_movie_function_void();
			}
			else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
			{
				func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_70(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_219", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
			}
		}
		func_97(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	Global_14578 = 0;
	func_51();
}

void func_51()
{
	if (is_mobile_phone_call_ongoing() || Global_14412 == 1)
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = Global_14415;
		return;
	}
}

bool func_52(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
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

bool func_53()
{
	if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) > 0)
	{
		return true;
	}
	return false;
}

int func_54(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_55(int iParam0)
{
	if (Global_14571)
	{
		func_57(0, 0);
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
	if (!func_56())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_56()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_57(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_21(0))
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

void func_58()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_67() && is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(PLAYER::PLAYER_PED_ID(), false);
			if (Global_69489)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_69489)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								GAMEPLAY::SET_BIT(&Global_2283, 11);
								task_use_mobile_phone(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_60()
{
	if ((GAMEPLAY::IS_BIT_SET(Global_2283, 14) && Global_2563612 == 0) && Global_14353 == 0)
	{
		if (func_65())
		{
		}
		else
		{
			func_61();
		}
		if (Global_14413.f_1 == 9)
		{
			if (Global_15725 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_61()
{
	struct<2> Var0;
	
	get_mobile_phone_position(&Var0);
	if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14353 = 1;
	}
}

void func_62()
{
	if ((GAMEPLAY::IS_BIT_SET(Global_2283, 14) && Global_2563612 == 0) && Global_14353 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 26))
			{
				GAMEPLAY::CLEAR_BIT(&Global_2284, 24);
				GAMEPLAY::CLEAR_BIT(&Global_2284, 25);
				GAMEPLAY::CLEAR_BIT(&Global_2284, 27);
				GAMEPLAY::CLEAR_BIT(&Global_2284, 26);
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_61();
					}
					else if (func_64() == 0)
					{
						func_61();
					}
				}
			}
		}
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (func_64())
			{
				func_63();
			}
		}
		else if (func_65())
		{
		}
		else if (func_64())
		{
			func_63();
		}
		if (Global_14413.f_1 == 9)
		{
			if (Global_15725 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_63()
{
	struct<2> Var0;
	
	get_mobile_phone_position(&Var0);
	if (Global_14359[Global_14358 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_2563612 = 1;
	}
}

bool func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_71(14))
		{
			return false;
		}
		if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!_0x4F32C0D5A90A9B40())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return false;
				}
			}
		}
		if (((is_ped_swimming(PLAYER::PLAYER_PED_ID()) || is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID())) || is_player_climbing(player_id())) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID()))
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
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar3)) || is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iVar3))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
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

bool func_65()
{
	if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) > 0)
	{
		return true;
	}
	return false;
}

void func_66()
{
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 11))
			{
				if (!Global_14356)
				{
					task_use_mobile_phone(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_69489)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				GAMEPLAY::CLEAR_BIT(&Global_2283, 11);
			}
		}
	}
}

bool func_67()
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

void func_68(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_69()
{
	get_mobile_phone_render_id(&iLocal_42);
	if (iLocal_42 == -1)
	{
	}
}

void func_70(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_47(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_47(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_47(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_47(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_47(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

int func_71(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_72(int iParam0)
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
		if (func_71(14))
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
								func_47(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_47(&(Global_2290[iVar1 /*15*/]));
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
								func_47(&(Global_2290[iVar1 /*15*/]));
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
								func_47(&(Global_2290[iVar1 /*15*/]));
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
								func_47(&(Global_2290[iVar1 /*15*/]));
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
								func_47(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_70(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_73()
{
	if (Global_69489 == 0)
	{
		Global_2290[14 /*15*/].f_4 = -99;
		Global_2290[4 /*15*/].f_4 = -99;
		if (Global_2443081)
		{
			if (func_71(14))
			{
				func_74(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_74(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_74(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_74(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2290[iParam0 /*15*/]), sParam1, 16);
	Global_2290[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2290[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2290[iParam0 /*15*/].f_9 = get_hash_key(sParam3);
	Global_2290[iParam0 /*15*/].f_10 = iParam4;
	Global_2290[iParam0 /*15*/].f_11 = iParam5;
	Global_2290[iParam0 /*15*/].f_12 = iParam6;
	Global_2290[iParam0 /*15*/].f_13 = iParam7;
	Global_2290[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2290[iParam0 /*15*/].f_12 == 0)
	{
		Global_2290[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_13 == 0)
	{
		Global_2290[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_14 == 0)
	{
		Global_2290[iParam0 /*15*/].f_14 = 0;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2290[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69489 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_101154.f_32575[iVar2 /*29*/].f_19[Global_14413] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_74(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35711 == 15 && func_54(0) == 0) && Global_2288 == 0)
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 0;
			Global_2289 = 255;
		}
		else
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 1;
			Global_2289 = 42;
		}
		if (iVar1 == 1)
		{
			func_74(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_74(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101154.f_12741.f_89 == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101154.f_12741.f_88 == 1)
		{
			func_74(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_74(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_74(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_74(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_74(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_74(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_74(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_74(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_74(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_74(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_74(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_74(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_74(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_74(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_74(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_74(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 1)
		{
			if (Global_1573431)
			{
				func_74(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 1)
			{
				func_74(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 1)
			{
				func_74(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
		}
		if (((GAMEPLAY::IS_BIT_SET(Global_2563397, 4) == 0 && Global_1573431 == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_2563397, 22) == 0)
		{
			func_74(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_77() == 0)
		{
			return false;
		}
	}
	if (_get_mp_loading_state(&iVar0) && get_profile_setting(903) == 1)
	{
		return true;
	}
	if (!_get_mp_loading_state(&iVar0))
	{
		if (iVar0 == 6)
		{
			return true;
		}
		else if (iVar0 == 7)
		{
			return true;
		}
		else if (iVar0 == 8)
		{
			return true;
		}
		else if (iVar0 == 9)
		{
			return true;
		}
		else if (iVar0 == 11)
		{
			return true;
		}
		else if (iVar0 == 12)
		{
			return true;
		}
		else if (iVar0 == 10)
		{
			return true;
		}
	}
	return false;
}

bool func_77()
{
	if (is_orbis_version())
	{
		if (!_0xBD545D44CCE70597())
		{
			if (_0x74FB3E29E6D10FA9() == 4)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 2)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 1)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 5)
			{
				return false;
			}
		}
	}
	return true;
}

void func_78()
{
	if (is_player_playing(player_id()))
	{
		iLocal_71 = get_zone_scumminess(get_zone_at_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)));
	}
	switch (iLocal_71)
	{
		case 0:
			iLocal_46 = 5;
			break;
		
		case 1:
			iLocal_46 = 5;
			break;
		
		case 2:
			iLocal_46 = 4;
			break;
		
		case 3:
			iLocal_46 = 4;
			break;
		
		case 4:
			iLocal_46 = 3;
			break;
		
		case 5:
			iLocal_46 = 2;
			break;
		
		default:
			iLocal_46 = 3;
			break;
	}
	iLocal_72 = get_random_int_in_range(false, 8);
	if (iLocal_72 < 2)
	{
		if (iLocal_46 > 2)
		{
			iLocal_46--;
		}
	}
	if (iLocal_73 == 1 || func_79())
	{
		iLocal_46 = false;
	}
	func_97(Global_14394, "SET_PROVIDER_ICON", to_float(iLocal_45), to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
}

bool func_79()
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = func_85();
		if (func_84(iVar0))
		{
			vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			iVar4 = 0;
			while (iVar4 < Global_101154.f_6378.f_136)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378[iVar4 /*15*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_83(iVar4)))
					{
						return true;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_101154.f_6378.f_764)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378.f_651[iVar4 /*14*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_81(iVar4)))
					{
						return true;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_101154.f_6378.f_866)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378.f_765[iVar4 /*10*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_80(iVar4)))
					{
						return true;
					}
				}
				iVar4++;
			}
		}
	}
	return false;
}

auto func_80(int iParam0)
{
	return Global_101154.f_6378.f_765[iParam0 /*10*/].f_7;
}

auto func_81(int iParam0)
{
	return Global_101154.f_6378.f_651[iParam0 /*14*/].f_7;
}

int func_82(Vector3 vParam0, int iParam1)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_35712)
		{
			return 0;
		}
		if (vdist2(vParam0, Global_35712[iParam3 /*5*/]) <= Global_35712[iParam3 /*5*/].f_3 * Global_35712[iParam3 /*5*/].f_3)
		{
			return 1;
		}
		else if (Global_35712[iParam3 /*5*/].f_4 != -1)
		{
			return func_82(vParam0, Global_35712[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

auto func_83(int iParam0)
{
	return Global_101154.f_6378[iParam0 /*15*/].f_7;
}

int func_84(int iParam0)
{
	return iParam0 < 3;
}

auto func_85()
{
	func_86();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_86()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_84(iVar0) && (!func_71(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_84(Global_101154.f_1826.f_539.f_3549))
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

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_84(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

auto func_89()
{
	func_105();
	return Global_101154.f_12741[Global_14413 /*20*/].f_8;
}

struct<13> func_90(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_91()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_93(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
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

auto func_94()
{
	return Global_1312747;
}

void func_95()
{
	if (func_71(14))
	{
		if (Global_2443081)
		{
			if (Global_14413.f_1 == 6)
			{
				if (Global_14393 == 7)
				{
					func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_14393 = 6;
					func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_14413.f_1 == 6)
		{
			func_97(Global_14394, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_48 = get_clock_minutes();
	if (iLocal_48 != Global_2286)
	{
		Global_2286 = iLocal_48;
		iLocal_47 = get_clock_hours();
		iLocal_49 = get_clock_day_of_week();
		switch (iLocal_49)
		{
			case 0:
				StringCopy(&Local_50, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_50, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_50, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_50, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_50, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_50, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_50, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_50, "CELL_206", 16);
				break;
		}
		func_70(Global_14394, "SET_TITLEBAR_TIME", to_float(iLocal_47), to_float(iLocal_48), -1f, -1f, -1f, &Local_50, 0, 0, 0, 0);
		if (Global_14356 == 0)
		{
			func_78();
		}
		if (is_player_playing(player_id()))
		{
			iLocal_56 = get_entity_health(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_96()
{
	if (Global_69489)
	{
		StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
		create_mobile_phone(0);
	}
	else if (Global_14356)
	{
		create_mobile_phone(4);
		StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				create_mobile_phone(0);
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				create_mobile_phone(1);
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				create_mobile_phone(2);
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				create_mobile_phone(0);
				break;
			}
	}
	Global_14376 = {-90f, -130f, 0f};
	if (get_is_hidef())
	{
		Global_14358 = 0;
		Global_14359[0 /*3*/] = {get_safe_zone_size() * 117.2f, get_safe_zone_size() * -158.8f, -113f};
		Global_14366[0 /*3*/] = {get_safe_zone_size() * 117.2f, get_safe_zone_size() * -53.3f, -113f};
	}
	else
	{
		Global_14358 = 0;
		Global_14359[0 /*3*/] = {get_safe_zone_size() * 85.7f, get_safe_zone_size() * -121.8f, -91.5f};
		Global_14366[0 /*3*/] = {get_safe_zone_size() * 85.7f, get_safe_zone_size() * -35.3f, -91.5f};
	}
	Global_14341 = {Global_14359[Global_14358 /*3*/]};
	set_mobile_phone_position(Global_14359[Global_14358 /*3*/]);
	set_mobile_phone_rotation(Global_14376, 0);
	Global_14353 = 1;
}

void func_97(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_98()
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
	func_99(&(Global_2465472.f_20));
}

void func_99(auto uParam0)
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

void func_100()
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
		else if (func_101(Global_2465472.f_20))
		{
			if (network_is_friend(&(Global_2465472.f_20)))
			{
				if (!_0x87EB7A3FFCB314DB(&(Global_2465472.f_20)))
				{
					func_98();
				}
			}
		}
		else
		{
			func_98();
		}
	}
	else
	{
		func_98();
	}
	if (Global_2465472.f_37)
	{
		func_55(0);
	}
	Global_2465472.f_37 = 0;
	Global_2465472.f_3 = 0;
}

int func_101(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_102()
{
	Global_14578 = 0;
	func_7();
}

void func_103(int iParam0, char* sParam1)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_pop_scaleform_movie_function_void();
}

void func_104()
{
	if (_is_input_disabled(2))
	{
		set_input_exclusive(0, Global_14382);
		set_input_exclusive(0, Global_14383);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_69489)
	{
		Global_101154.f_12741[3 /*20*/].f_10 = func_92(1190, -1, 0);
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (decor_exist_on(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_74 >= 300 || iLocal_74 == 0) || iLocal_74 > GAMEPLAY::GET_GAME_TIMER())
		{
			set_pad_shake(0, 100, 100);
			iLocal_74 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else if (Global_101154.f_12741[Global_14413 /*20*/].f_10 == 1)
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_74 >= 300 || iLocal_74 == 0) || iLocal_74 > GAMEPLAY::GET_GAME_TIMER())
		{
			set_pad_shake(0, 100, 100);
			iLocal_74 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_ped_ringtone_playing(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_69489)
			{
				if (!are_strings_equal(&(Global_3088[3 /*2811*/][1 /*281*/].f_144[func_92(1191, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					play_ped_ringtone(&(Global_3088[3 /*2811*/][1 /*281*/].f_144[func_92(1191, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if (!are_strings_equal(&(Global_101154.f_12741[Global_14413 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (decor_exist_on(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							play_ped_ringtone(&(Global_101154.f_12741[Global_14413 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						play_ped_ringtone(&(Global_101154.f_12741[Global_14413 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
					}
				}
			}
		}
	}
}

void func_105()
{
	if (func_71(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_85();
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

