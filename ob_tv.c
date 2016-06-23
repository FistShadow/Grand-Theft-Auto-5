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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0;
	Vector3 vLocal_31 = 0;
	Vector3 fLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	auto uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char[64] cLocal_46 = 0;
	char[64] cLocal_62 = 0;
	int iLocal_78 = 0;
	Vector3 vLocal_79 = 0;
	Vector3 vLocal_82 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	Vector3 vLocal_88 = 0;
	int iLocal_91 = 0;
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
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (has_force_cleanup_occurred(2))
	{
		func_66();
	}
	if (does_entity_exist(iLocal_91))
	{
		iLocal_37 = iLocal_91;
		iLocal_40 = iLocal_91;
	}
	while (true)
	{
		wait(0);
		func_65();
		if (does_entity_exist(iLocal_91))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (has_object_been_broken(iLocal_91))
			{
				func_66();
			}
			if (is_object_within_brain_activation_range(iLocal_91))
			{
				if (is_player_playing(player_id()))
				{
					func_60();
					if (get_entity_health(iLocal_91) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = _0xB48FCED898292E52(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (_0x52AF537A0C5B8AAD(uLocal_41))
									{
										_0x5C29F698D404C5E1(uLocal_41, 9);
									}
									terminate_this_thread();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								hint_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								register_script_with_audio(0);
								Global_25180[iLocal_43 /*11*/].f_2 = 0;
								Global_25180[iLocal_43 /*11*/].f_6 = 1;
								Global_25180[iLocal_43 /*11*/] = get_random_int_in_range(false, 2);
								Global_25180[iLocal_43 /*11*/].f_1 = 0;
								Global_25180[iLocal_43 /*11*/].f_4 = 0;
								Global_25180[iLocal_43 /*11*/].f_7 = 0;
								Global_25180[iLocal_43 /*11*/].f_8 = 0;
								Global_25180[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&iLocal_26);
								func_51();
								func_50();
								wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (is_player_wanted_level_greater(player_id(), 0))
							{
								wait(0);
							}
							else if (is_entity_static(iLocal_37) && is_entity_upright(iLocal_37, 90f))
							{
								if (func_42() || Global_25180[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									clear_help(1);
								}
							}
							if (does_entity_exist(iLocal_37))
							{
								if (!is_entity_visible(iLocal_37))
								{
									set_entity_visible(iLocal_37, true, 0);
								}
							}
							if (does_entity_exist(iLocal_39))
							{
								if (!is_entity_visible(iLocal_39))
								{
									set_entity_visible(iLocal_39, true, 0);
								}
							}
							if (does_entity_exist(iLocal_38))
							{
								if (is_entity_visible(iLocal_38))
								{
									set_entity_visible(iLocal_38, false, 0);
								}
							}
							if (!are_strings_equal(&cLocal_46, "NULL"))
							{
								set_static_emitter_enabled(&cLocal_46, 0);
							}
							set_tv_audio_frontend(0);
							wait(0);
							if (does_entity_exist(iLocal_40))
							{
								attach_tv_audio_to_entity(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25180[iLocal_43 /*11*/] == 3 || Global_25180[iLocal_43 /*11*/] == 2) || Global_25180[iLocal_43 /*11*/] == -1)
								{
									Global_25180[iLocal_43 /*11*/] = get_random_int_in_range(false, 2);
								}
								set_tv_channel(Global_25180[iLocal_43 /*11*/]);
								set_tv_volume(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25180[iLocal_43 /*11*/];
								iLocal_45 = Global_25180[iLocal_43 /*11*/].f_1;
								_0xF7B38B8305F1FE8B(iLocal_44, func_39(iLocal_45), Global_25180[iLocal_43 /*11*/].f_9);
								set_tv_channel(iLocal_44);
								if (Global_25180[iLocal_43 /*11*/].f_7)
								{
									Global_25180[iLocal_43 /*11*/].f_5 = 0;
									Global_25180[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25180[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25180[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25180[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25180[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (get_tv_channel() == -1)
								{
									set_tv_channel(Global_25180[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25180[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25180[iLocal_43 /*11*/].f_5 = 0;
							Global_25180[iLocal_43 /*11*/].f_4 = 0;
							Global_25180[iLocal_43 /*11*/].f_1 = 0;
							Global_25180[iLocal_43 /*11*/].f_2 = 0;
							Global_25180[iLocal_43 /*11*/].f_7 = 0;
							Global_25180[iLocal_43 /*11*/].f_8 = 0;
							Global_25180[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			terminate_this_thread();
		}
	}
	func_66();
	terminate_this_thread();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25180[iLocal_43 /*11*/] = get_tv_channel();
	}
	fLocal_30 = get_tv_volume();
	set_tv_channel(-1);
	func_4();
	if (_get_number_of_instances_of_streamed_script(joaat("family5")) == 0)
	{
		if (!are_strings_equal(&cLocal_46, "NULL"))
		{
			set_static_emitter_enabled(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		clear_help(1);
	}
	func_3();
	func_50();
	if (does_entity_exist(iLocal_38))
	{
		if (!is_entity_visible(iLocal_38))
		{
			set_entity_visible(iLocal_38, true, 0);
		}
	}
	enable_movie_subtitles(0);
	func_2();
}

void func_2()
{
	if (is_pc_version())
	{
		if (iLocal_87 == 1)
		{
			_0x643ED62D5EA3BEBD();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		set_text_render_id(iLocal_35);
		if (does_entity_exist(iLocal_37))
		{
			if (get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2") || get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				set_entity_visible(iLocal_37, false, 0);
				if (get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					draw_rect(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (does_entity_exist(iLocal_39))
	{
		set_entity_visible(iLocal_39, false, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		render_script_cams(false, false, 3000, 1, 0, 0);
		if (is_cam_active(iLocal_78))
		{
			set_cam_active(iLocal_78, false);
		}
		destroy_cam(iLocal_78, 0);
		set_gameplay_cam_relative_heading(0);
		if (!is_ped_injured(player_ped_id()))
		{
			freeze_entity_position(player_ped_id(), false);
			clear_ped_tasks(player_ped_id());
			task_look_at_coord(player_ped_id(), vLocal_31, true, 0, 2);
			if (!is_player_control_on(player_id()))
			{
				if (iLocal_36 == 1)
				{
					iLocal_36 = false;
					set_player_control(player_id(), true, 0);
				}
			}
			set_entity_visible(player_ped_id(), true, 0);
		}
		if (!are_strings_equal(&cLocal_62, "NULL"))
		{
			if (is_audio_scene_active(&cLocal_62))
			{
				stop_audio_scene(&cLocal_62);
			}
		}
		if (does_entity_exist(iLocal_39))
		{
			set_entity_visible(iLocal_39, true, 0);
		}
		func_5(0, 1, 0, 0);
		enable_movie_subtitles(0);
		iLocal_85 = 0;
	}
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_14(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_13())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_14(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_10(player_id())) && !func_7(player_id(), 0)) && !func_6())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_10(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_6()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

auto func_9()
{
	return Global_1312747;
}

bool func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return true;
	}
	if (func_11())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_11()
{
	return is_bit_set(Global_2359301, 3);
}

int func_12(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

bool func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&iLocal_26) >= 1f && is_entity_at_coord(player_ped_id(), vLocal_88, 1f, 1f, 1.5f, false, true, 0)) && get_interior_from_entity(iLocal_37) == get_interior_from_entity(player_ped_id())) && !func_28(8, -1)) && !is_ped_in_any_vehicle(player_ped_id(), 0)) && _0xFCF37A457CB96DC0(player_ped_id(), vLocal_31, 90f)) && !is_ped_ragdoll(player_ped_id())) && !is_player_switch_in_progress())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&iLocal_26);
				Global_25180[iLocal_43 /*11*/].f_7 = 0;
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return true;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				clear_help(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return false;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		set_input_exclusive(2, 222);
		if (is_control_just_pressed(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		disable_control_action(2, 200, 1);
		if (is_entity_visible(player_ped_id()))
		{
			set_entity_visible(player_ped_id(), false, 0);
		}
		if (iLocal_36)
		{
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0);
			}
		}
		hide_hud_and_radar_this_frame();
		_0xD1C55B110E4DF534(player_ped_id());
		func_21(1, 1);
		set_input_exclusive(2, 222);
		func_17();
		if (is_control_just_pressed(2, 222) || (_is_input_disabled(2) && is_disabled_control_just_released(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14571)
	{
		func_19(0, 0);
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
	if (!func_13())
	{
		Global_14413.f_1 = 3;
	}
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_20(0))
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

bool func_20(int iParam0)
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

void func_21(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (iParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					play_sound_frontend(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (get_tv_channel() == 0)
				{
					set_tv_channel(1);
				}
				else
				{
					set_tv_channel(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (iParam1)
	{
		iVar1 = get_control_value(2, 219) - 127;
		if (!iLocal_23)
		{
			if (iVar1 > 0 + iVar0)
			{
				fVar2 = get_tv_volume();
				fVar2 -= 0.5f;
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				set_tv_volume(fVar2);
				iLocal_24 = get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < 0 - iVar0)
			{
				fVar2 = get_tv_volume();
				fVar2 += 0.5f;
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				set_tv_volume(fVar2);
				iLocal_24 = get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < 0 + iVar0 && iVar1 > 0 - iVar0)
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						play_sound_frontend(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || get_game_timer() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

bool func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = get_control_value(2, 218) - 127;
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > 0 + iVar0 || iVar1 < 0 - iVar0)
		{
			settimera(0);
			return true;
		}
	}
	return false;
}

void func_23()
{
	Vector3 fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		iLocal_78 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", vLocal_79, vLocal_82, fVar0, 0, 2);
		set_cam_far_clip(iLocal_78, 100f);
		set_cam_active(iLocal_78, true);
		render_script_cams(true, false, 3000, 1, 0, 0);
		if (does_entity_exist(iLocal_39))
		{
			set_entity_visible(iLocal_39, false, 0);
		}
		if (!is_ped_injured(player_ped_id()))
		{
			freeze_entity_position(player_ped_id(), true);
			clear_ped_tasks(player_ped_id());
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0);
				iLocal_36 = true;
			}
			task_look_at_coord(player_ped_id(), vLocal_31, -1, 0, 2);
			set_entity_visible(player_ped_id(), false, 0);
		}
		if (!are_strings_equal(&cLocal_62, "NULL"))
		{
			if (!is_audio_scene_active(&cLocal_62))
			{
				start_audio_scene(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		enable_movie_subtitles(1);
		iLocal_85 = 1;
	}
}

bool func_24(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_20(0))
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

int func_25(int iParam0)
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

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
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

void func_27()
{
	if (is_pc_version())
	{
		if (iLocal_87 == 0)
		{
			_0x3D42B92563939375("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

int func_28(int iParam0, int iParam1)
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

float func_29(int iParam0)
{
	if (func_32(iParam0))
	{
		if (func_31(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_30(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_30(int iParam0)
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

int func_31(auto uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_32(auto uParam0)
{
	return is_bit_set(*uParam0, true);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	set_text_render_id(iLocal_35);
	_set_2d_layer(4);
	_0xC6372ECD45D73BCD(1);
	draw_tv_channel(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	set_text_render_id(get_default_script_rendertarget_render_id());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = _get_screen_aspect_ratio(0);
	if (fVar0 <= 16f / 9f)
	{
		fVar1 = fVar0 / 16f / 9f;
		fVar2 = *fParam0;
		*fParam0 = fVar2 * fVar1;
	}
}

void func_35()
{
	Global_25180[iLocal_43 /*11*/].f_7 = 0;
	Global_25180[iLocal_43 /*11*/] = get_tv_channel();
	fLocal_30 = get_tv_volume();
	if (is_audio_scene_active(&cLocal_62))
	{
		stop_audio_scene(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		clear_help(1);
	}
	func_41(&iLocal_42);
	set_tv_channel(-1);
	wait(0);
	func_3();
	func_50();
}

bool func_36(int iParam0)
{
	Vector3 vVar0;
	
	vVar0 = {func_37(player_id())};
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return true;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_37(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		stat_get_int(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stat_set_int(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_40(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
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

bool func_42()
{
	if (func_29(&iLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return false;
	}
	if ((!is_entity_at_coord(player_ped_id(), vLocal_88, 1f, 1f, 1.5f, false, true, 0) || !_0xFCF37A457CB96DC0(player_ped_id(), vLocal_31, 90f)) || is_ped_ragdoll(player_ped_id()))
	{
		func_41(&iLocal_42);
		return false;
	}
	if (get_interior_from_entity(iLocal_37) != get_interior_from_entity(player_ped_id()))
	{
		func_41(&iLocal_42);
		return false;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		func_41(&iLocal_42);
		return false;
	}
	if (Global_88539)
	{
		func_41(&iLocal_42);
		return false;
	}
	if (Global_25180[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return false;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return false;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&iLocal_26);
		Global_25180[iLocal_43 /*11*/].f_7 = 1;
		if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return true;
	}
	return false;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_49(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_44();
	}
}

void func_44()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_48(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_47() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_45();
				}
			}
		}
	}
}

bool func_45()
{
	if (func_46(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

int func_46(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

auto func_47()
{
	return Global_25120;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	wait(0);
	if (is_named_rendertarget_registered("tvscreen"))
	{
		release_named_rendertarget("tvscreen");
		iLocal_35 = -1;
		set_text_render_id(get_default_script_rendertarget_render_id());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (is_named_rendertarget_registered("tvscreen"))
	{
		release_named_rendertarget("tvscreen");
	}
	wait(0);
	if (!does_entity_exist(iLocal_37))
	{
		func_66();
	}
	iVar0 = get_entity_model(iLocal_37);
	register_named_rendertarget("tvscreen", 0);
	link_named_rendertarget(iVar0);
	wait(0);
	if (iLocal_43 != 4)
	{
		while (!is_named_rendertarget_linked(iVar0))
		{
			if (!does_entity_exist(iLocal_37))
			{
				func_66();
			}
			if (!is_object_within_brain_activation_range(iLocal_37))
			{
				func_66();
			}
			if (!is_named_rendertarget_registered("tvscreen"))
			{
				register_named_rendertarget("tvscreen", 0);
			}
			if (!is_named_rendertarget_linked(iVar0))
			{
				link_named_rendertarget(iVar0);
			}
			wait(0);
		}
	}
	iLocal_35 = get_named_rendertarget_render_id("tvscreen");
	func_3();
}

void func_52()
{
	if (does_entity_exist(iLocal_37))
	{
		if (get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = false;
	iLocal_37 = create_object_no_offset(joaat("v_ilev_mm_screen2"), vLocal_31, 1, 1, 0);
	set_entity_heading(iLocal_37, fLocal_34);
	freeze_entity_position(iLocal_37, true);
	set_entity_visible(iLocal_37, false, 0);
	iLocal_39 = false;
	iLocal_39 = create_object_no_offset(joaat("v_ilev_mm_screen2_vl"), vLocal_31, 1, 1, 0);
	set_entity_heading(iLocal_39, fLocal_34);
	freeze_entity_position(iLocal_39, true);
	set_entity_visible(iLocal_39, false, 0);
}

void func_53(int iParam0)
{
	func_54(iParam0, 0f);
}

void func_54(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_30(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_57()
{
	vLocal_31 = {get_entity_coords(iLocal_37, 1)};
	fLocal_34 = get_entity_heading(iLocal_37);
	func_59();
	if (get_entity_model(iLocal_37) == -897601557)
	{
		if (vdist(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			vLocal_79 = {-9.8135f, -1440.913f, 31.3654f};
			vLocal_82 = {0f, 0f, -134.3211f};
			vLocal_88 = {-9.3078f, -1440.931f, 30.1015f};
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (get_entity_model(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (vdist(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			vLocal_79 = {1978.23f, 3819.65f, 34.2724f};
			vLocal_82 = {0f, 0f, -105.15f};
			vLocal_88 = {1978.33f, 3819.717f, 32.4501f};
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (get_entity_model(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (vdist(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			vLocal_79 = {2.5724f, 527.9989f, 176.1619f};
			vLocal_82 = {0f, 0f, -29.9488f};
			vLocal_88 = {3.6654f, 529.8486f, 173.6281f};
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (get_entity_model(iLocal_37) == 1340914825)
	{
		if (vdist(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			vLocal_79 = {-1160.502f, -1520.76f, 10.7393f};
			vLocal_82 = {0f, 0f, 60.061f};
			vLocal_88 = {-1160.143f, -1520.495f, 9.6555f};
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2") || get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (vdist(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			vLocal_79 = {-802.8972f, 172.537f, 74.5801f};
			vLocal_82 = {0f, 0f, -69.0273f};
			vLocal_88 = {-800.7292f, 173.2194f, 71.8348f};
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (get_entity_model(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (vdist(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			vLocal_79 = {-808.3051f, 171.2623f, 77.2822f};
			vLocal_82 = {1.8886f, 0f, 110.9232f};
			vLocal_88 = {-809.962f, 170.919f, 75.7407f};
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()
{
	iLocal_38 = create_object_no_offset(joaat("prop_tt_screenstatic"), vLocal_31, 1, 1, 0);
	set_entity_heading(iLocal_38, fLocal_34);
	set_entity_visible(iLocal_38, true, 0);
	freeze_entity_position(iLocal_38, true);
}

void func_59()
{
	_0xF7B38B8305F1FE8B(0, func_39(1), 0);
	if (func_56(22))
	{
		_0xF7B38B8305F1FE8B(1, func_39(12), 0);
	}
	else
	{
		_0xF7B38B8305F1FE8B(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25180[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (does_entity_exist(iLocal_40))
			{
				set_entity_invincible(iLocal_40, false);
			}
			if (does_entity_exist(iLocal_37))
			{
				set_entity_invincible(iLocal_37, false);
			}
			if (does_entity_exist(iLocal_39))
			{
				set_entity_invincible(iLocal_39, false);
			}
			if (does_entity_exist(iLocal_38))
			{
				set_entity_invincible(iLocal_38, false);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (does_entity_exist(iLocal_40))
		{
			set_entity_invincible(iLocal_40, true);
		}
		if (does_entity_exist(iLocal_37))
		{
			set_entity_invincible(iLocal_37, true);
		}
		if (does_entity_exist(iLocal_39))
		{
			set_entity_invincible(iLocal_39, true);
		}
		if (does_entity_exist(iLocal_38))
		{
			set_entity_invincible(iLocal_38, true);
		}
		iLocal_86 = 1;
	}
}

int func_61(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25180[iParam0 /*11*/].f_5)
		{
			return true;
		}
	}
	return false;
}

bool func_63()
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

int func_64()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		terminate_this_thread();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25180[iLocal_43 /*11*/].f_6 = 0;
		Global_25180[iLocal_43 /*11*/].f_7 = 0;
		Global_25180[iLocal_43 /*11*/].f_8 = 0;
		Global_25180[iLocal_43 /*11*/].f_4 = 0;
		Global_25180[iLocal_43 /*11*/].f_5 = 0;
		Global_25180[iLocal_43 /*11*/].f_2 = 0;
		Global_25180[iLocal_43 /*11*/] = -1;
		Global_25180[iLocal_43 /*11*/].f_1 = 0;
		Global_25180[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		clear_help(1);
	}
	wait(0);
	func_67();
	if (is_audio_scene_active(&cLocal_62))
	{
		stop_audio_scene(&cLocal_62);
	}
	_0x19AF7ED9B9D23058();
	func_2();
	terminate_this_thread();
}

void func_67()
{
	func_50();
	if (does_entity_exist(iLocal_37))
	{
		if (get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			delete_object(&iLocal_37);
			set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2"));
		}
	}
	if (does_entity_exist(iLocal_39))
	{
		delete_object(&iLocal_39);
		set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2_vl"));
	}
	if (does_entity_exist(iLocal_38))
	{
		delete_object(&iLocal_38);
		set_model_as_no_longer_needed(joaat("prop_tt_screenstatic"));
	}
}

