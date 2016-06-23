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
	struct<5> Local_43 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	float fLocal_52 = 0;
	float fLocal_53 = 0;
	char* sLocal_54 = 0;
	struct<5> Local_55 = 0;
	Vector3 vLocal_60 = 0;
	int iLocal_63 = 0;
	auto uLocal_64 = 0;
	struct<5> Local_65 = 0;
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_131();
	}
	Local_43 = {Local_65};
	func_130();
	func_129();
	func_124(iLocal_48, 0, 0);
	settimera(0);
	func_123();
	func_115();
	while (true)
	{
		wait(0);
		func_114(iLocal_48);
		func_113();
		func_111();
		func_104();
		func_124(iLocal_48, 0, 0);
		func_130();
		func_6();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !network_is_activity_session()) && !func_5())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()
{
	Global_2434762.f_631 = 1;
}

auto func_3()
{
	return Global_2434762.f_610;
}

int func_4()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 11);
}

int func_5()
{
	return GAMEPLAY::IS_BIT_SET(Global_2435528.f_1.f_2809, 3);
}

void func_6()
{
	int iVar0;
	
	if (is_entity_dead(Local_43.f_1, 0))
	{
		func_131();
	}
	if (iLocal_50)
	{
		if (!is_player_playing(player_id()))
		{
			func_131();
		}
	}
	func_103();
	iVar0 = true;
	switch (vLocal_60.x)
	{
		case 4:
			func_102();
			return;
		
		case 5:
			func_99();
			return;
		
		case 6:
			func_97();
			return;
		
		case 7:
			func_96();
			return;
		
		case 8:
			func_95();
			return;
		
		case 9:
			func_93();
			return;
		
		case 10:
			func_92();
			func_89();
			func_88();
			return;
		
		case 11:
			func_87();
			return;
		
		case 12:
			break;
		
		default:
			iVar0 = false;
			break;
	}
	if (!iVar0)
	{
		return;
	}
	if (!vLocal_60.x == 12)
	{
		return;
	}
	switch (vLocal_60.y)
	{
		case 1:
			if (!func_86())
			{
				func_85();
				func_89();
			}
			break;
		
		case 2:
			func_83();
			break;
		
		case 12:
			func_70();
			break;
		
		case 3:
			func_7();
			break;
		
		default:
			break;
	}
}

void func_7()
{
	char* sVar0;
	struct<53> Var1;
	int iVar59;
	
	set_ped_to_ragdoll(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1724571 = 1;
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(2500);
		while (is_screen_fading_out())
		{
			wait(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_64(player_id(), 0, 57344);
		Global_2404956.f_1669 = 1;
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			Global_2404956.f_1670 = 1;
		}
		else
		{
			Global_2404956.f_1670 = 0;
		}
		if (_0xC912AF078AF19212())
		{
			_0x1C9D7949FA533490(0);
		}
		func_62(1);
		func_131();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (func_57())
	{
		case 0:
			if (func_55() != 2)
			{
				iVar59 = 0;
			}
			else
			{
				iVar59 = 1;
			}
			break;
		
		case 1:
			if (!func_54(126))
			{
				iVar59 = 2;
			}
			else
			{
				iVar59 = 3;
			}
			break;
		
		case 2:
			if (!func_53(4))
			{
				if (func_54(58))
				{
					iVar59 = 4;
				}
				if (func_54(59))
				{
					iVar59 = 5;
				}
				if (iVar59 == 7)
				{
					if (!func_52())
					{
						iVar59 = 4;
					}
					else
					{
						iVar59 = 5;
					}
				}
			}
			else
			{
				iVar59 = 6;
			}
			break;
	}
	switch (iVar59)
	{
		case 0:
			sVar0 = "DWC_MICHAEL_mansion";
			Var1 = "SAVEM_Default@";
			Var1.f_1 = "M_GetOut_R";
			Var1.f_2 = "M_GetOut_R_CAM";
			Var1.f_5 = {-814.181f, 181.1f, 75.74f};
			Var1.f_8 = {0f, 0f, 21.1994f};
			Var1.f_4 = -1871534317;
			break;
		
		case 1:
			sVar0 = "DWC_MICHAEL_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "M_GetOut_countryside";
			Var1.f_2 = "M_GetOut_countryside_CAM";
			Var1.f_5 = {1968.14f, 3816.79f, 32.4287f};
			Var1.f_8 = {0f, 0f, 29.7938f};
			Var1.f_4 = -1871534317;
			break;
		
		case 2:
			sVar0 = "DWC_FRANKLIN_city";
			Var1 = "SWITCH@FRANKLIN@BED";
			Var1.f_1 = "Sleep_GetUp_RubEyes";
			Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var1.f_5 = {-17.2168f, -1441.224f, 30.1015f};
			Var1.f_8 = {0f, 0f, -179.653f};
			Var1.f_4 = -1871534317;
			break;
		
		case 3:
			sVar0 = "DWC_FRANKLIN_hills";
			Var1 = "SAVEBighouse@";
			Var1.f_1 = "F_GetOut_r_bighouse";
			Var1.f_2 = "F_GetOut_r_bighouse_CAM";
			Var1.f_5 = {-1.049f, 524.283f, 170.064f};
			Var1.f_8 = {0f, 0f, 24f};
			Var1.f_4 = -1871534317;
			break;
		
		case 4:
			sVar0 = "DWC_TREVOR_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "T_GetOut_countryside";
			Var1.f_2 = "T_GetOut_countryside_CAM";
			Var1.f_5 = {1968.14f, 3816.79f, 32.4287f};
			Var1.f_8 = {0f, 0f, 29.7938f};
			Var1.f_4 = -1871534317;
			break;
		
		case 5:
			sVar0 = "DWC_TREVOR_beach";
			Var1 = "SAVEVeniceB@";
			Var1.f_1 = "T_GetOut_r_veniceB";
			Var1.f_2 = "T_GetOut_r_veniceB_CAM";
			Var1.f_5 = {-1148.438f, -1512.246f, 9.689f};
			Var1.f_8 = {0f, 0f, 36.25f};
			Var1.f_4 = -1871534317;
			break;
		
		case 6:
			sVar0 = "DWC_TREVOR_stripclub";
			Var1 = "SAVECouch@";
			Var1.f_1 = "T_GetOut_couch";
			Var1.f_2 = "T_GetOut_couch_CAM";
			Var1.f_5 = {94.53f, -1289.86f, 28.27f};
			Var1.f_8 = {0f, 0f, 29.7938f};
			Var1.f_4 = -1871534317;
			break;
	}
	if (!is_entity_dead(Local_43.f_1, 0))
	{
		set_entity_coords(Local_43.f_1, Var1.f_5, 1, false, 0, 1);
	}
	wait(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_131();
}

void func_8(int iParam0, int iParam1)
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_9(char* sParam0, auto uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	auto uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	Vector3 fVar185;
	Vector3 vVar186;
	Vector3 vVar189;
	float fVar192;
	float fVar193;
	float fVar194;
	Vector3 vVar195;
	Vector3 fVar198;
	float fVar199;
	Vector3 fVar200;
	Vector3 vVar201;
	Vector3 vVar204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	Vector3 vVar211;
	Vector3 fVar214;
	float fVar215;
	Vector3 fVar216;
	Vector3 vVar217;
	Vector3 vVar220;
	float fVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	int iVar227;
	
	fVar0 = 0f;
	set_player_control(player_id(), false, 0);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_invincible(PLAYER::PLAYER_PED_ID(), true);
	}
	remove_particle_fx_in_range(*uParam1.f_5, 4500f);
	remove_decals_in_range(*uParam1.f_5, 4500f);
	clear_area(*uParam1.f_5, 5f, 1, 0, 0, false);
	set_entity_coords(PLAYER::PLAYER_PED_ID(), *uParam1.f_5, 1, false, 0, 1);
	freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
	wait(0);
	set_game_paused(true);
	request_anim_dict(*uParam1);
	if (is_string_null_or_empty(*uParam1.f_16))
	{
	}
	else
	{
		request_anim_dict(*uParam1.f_16);
	}
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_47(*uParam1.f_5, *uParam1.f_8.f_2, 0, 1);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	iVar1 = GAMEPLAY::GET_GAME_TIMER() + 20000;
	iVar2 = false;
	*uParam1.f_33 = 0;
	while (!iVar2 && iVar1 > GAMEPLAY::GET_GAME_TIMER())
	{
		iVar2 = true;
		request_anim_dict(*uParam1);
		if (!has_anim_dict_loaded(*uParam1))
		{
			iVar2 = false;
		}
		if (!is_string_null_or_empty(*uParam1.f_16))
		{
			request_anim_dict(*uParam1.f_16);
			if (!has_anim_dict_loaded(*uParam1.f_16))
			{
				iVar2 = false;
			}
		}
		if (!is_screen_faded_out())
		{
			do_screen_fade_out(0);
		}
		wait(0);
	}
	func_44();
	if (!func_43(*uParam1.f_22, 0f, 0f, 0f, 0))
	{
		set_roads_in_area(*uParam1.f_5 + *uParam1.f_19 - *uParam1.f_22, *uParam1.f_5 + *uParam1.f_19 + *uParam1.f_22, false, 1);
		clear_area_of_vehicles(*uParam1.f_5 + *uParam1.f_19, vmag(*uParam1.f_22) + 25f, 0, 0, 0, 0, false);
		clear_area(*uParam1.f_5 + *uParam1.f_19, vmag(*uParam1.f_22) + 25f, 1, 0, 0, false);
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		clear_player_wanted_level(player_id());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
	}
	freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
	set_game_paused(false);
	clear_area(*uParam1.f_5, 15f, 1, 0, 0, false);
	_0x4759CC730F947C81();
	_0x48ADC8A773564670();
	func_41();
	while (func_40())
	{
		wait(0);
	}
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		do_screen_fade_in(250);
	}
	set_fade_in_after_death_arrest(1);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar4 = create_synchronized_scene(*uParam1.f_5, *uParam1.f_8, 2);
		set_synchronized_scene_looped(iVar4, false);
		_0x394B9CD12435C981(iVar4, false);
		iVar5 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (*uParam1.f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_38(PLAYER::PLAYER_PED_ID(), *uParam1.f_18);
		task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, *uParam1.f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		_0x129466ED55140F8D(PLAYER::PLAYER_PED_ID(), 1);
		set_player_cloth_pin_frames(player_id(), 1);
		iVar3 = get_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 77);
		set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 77, true);
		play_synchronized_cam_anim(iVar5, iVar4, *uParam1.f_2, *uParam1);
		render_script_cams(true, false, 3000, 1, 0, 0);
		if (!is_string_null_or_empty(*uParam1.f_16) && !is_string_null_or_empty(*uParam1.f_17))
		{
			task_play_anim(PLAYER::PLAYER_PED_ID(), *uParam1.f_16, *uParam1.f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!*uParam1.f_25)
	{
		if (!is_string_null_or_empty(sParam2))
		{
			func_37(sParam2, -1);
			*uParam1.f_25 = 1;
		}
	}
	iVar7 = false;
	iVar8 = false;
	uVar9 = 16;
	if (!is_string_null_or_empty(uParam1.f_11))
	{
		iVar174 = func_57();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_36(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (is_synchronized_scene_running(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (is_synchronized_scene_running(iVar4) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iVar8)
			{
				if (!is_screen_faded_out())
				{
					if (!is_string_null_or_empty(*uParam1.f_26))
					{
						_start_screen_effect(*uParam1.f_26, false, 0);
						iVar8 = true;
					}
					if (!is_string_null_or_empty(*uParam1.f_27))
					{
						if (!is_string_null_or_empty(*uParam1.f_28))
						{
							play_sound_frontend(-1, *uParam1.f_28, *uParam1.f_27, 0);
							iVar8 = true;
						}
						if (!is_string_null_or_empty(*uParam1.f_29))
						{
							play_sound_frontend(-1, *uParam1.f_29, *uParam1.f_27, 0);
							iVar8 = true;
						}
					}
				}
			}
			hide_hud_and_radar_this_frame();
			hide_hud_component_this_frame(18);
			_0xB57D8DD645CFA2CF();
			func_32();
			iVar179 = GAMEPLAY::GET_GAME_TIMER();
			if (iVar179 >= Global_36262 - 500)
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = get_synchronized_scene_phase(iVar4);
			if (!is_string_null_or_empty(uParam1.f_11))
			{
				if (!iVar7)
				{
					if (fVar0 >= *uParam1.f_15)
					{
						if (func_19(&uVar9, "PRSAUD", uParam1.f_11, 3, 0, 0, 0))
						{
							iVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (has_anim_event_fired(PLAYER::PLAYER_PED_ID(), get_hash_key(sVar177)))
			{
				iVar183 = get_control_value(2, 195) - 128;
				iVar184 = get_control_value(2, 196) - 128;
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				*uParam1.f_3 = *uParam1.f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (get_follow_ped_cam_view_mode() == 4 && *uParam1.f_52 > 0f)
			{
				if (fVar0 >= *uParam1.f_52)
				{
					if (!*uParam1.f_32)
					{
						fVar185 = 1.5f;
						vVar186 = {_get_gameplay_cam_coords()};
						vVar189 = {get_ped_bone_coords(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f)};
						fVar192 = get_distance_between_coords(vVar186, vVar189, 1);
						fVar185 = func_18(fVar185, 0.001f, fVar192 - 0.75f);
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(uParam1.f_34, PLAYER::PLAYER_PED_ID(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(uParam1.f_34, *uParam1.f_53);
						if (!*uParam1.f_33)
						{
							*uParam1.f_34 = 1;
							*uParam1.f_34.f_7 = GAMEPLAY::GET_GAME_TIMER();
							*uParam1.f_34.f_8 = 0;
							*uParam1.f_33 = 1;
						}
						if (*uParam1.f_57 == 999f)
						{
							*uParam1.f_56 = 0f;
						}
						if (*uParam1.f_57 == 999f)
						{
							vVar195 = {_get_gameplay_cam_rot(2)};
							fVar198 = get_entity_heading(PLAYER::PLAYER_PED_ID());
							fVar199 = vVar195.z;
							fVar200 = fVar198;
							*uParam1.f_57 = fVar199 - fVar200;
							if (*uParam1.f_57 < 360f)
							{
								*uParam1.f_57 += 360f;
							}
							if (*uParam1.f_57 > 360f)
							{
								*uParam1.f_57 -= 360f;
							}
						}
						fVar193 = *uParam1.f_56;
						fVar194 = *uParam1.f_57;
						set_gameplay_cam_relative_pitch(fVar193, 1f);
						set_gameplay_cam_relative_heading(fVar194);
						_set_gameplay_cam_raw_pitch(fVar193);
						_set_gameplay_cam_raw_yaw(fVar194);
						vVar201 = {_get_gameplay_cam_coords()};
						vVar204 = {get_gameplay_cam_coord()};
						fVar207 = get_distance_between_coords(vVar201, vVar204, 1);
						iVar208 = round(fVar207 * 1000f);
						*uParam1.f_32 = 1;
					}
					if (*uParam1.f_32)
					{
						_0x59424BD75174C9B1();
						if (func_13(uParam1.f_34, 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (has_anim_event_fired(PLAYER::PLAYER_PED_ID(), get_hash_key(sVar178)) || iVar182)
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					clear_ped_tasks(PLAYER::PLAYER_PED_ID());
					switch (*uParam1.f_4)
					{
						case -1871534317:
							force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -1871534317, true, 0, 0);
							_0xC819F3CBB62BF692(0, 0f, 3, 0);
							break;
						
						case -668482597:
							force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -668482597, true, 0, 0);
							simulate_player_input_gait(player_id(), 1f, 500, 0, 1, 0);
							if (get_follow_ped_cam_view_mode() != 4)
							{
								if (*uParam1.f_31 == 999f)
								{
									*uParam1.f_30 = 0f;
								}
								if (*uParam1.f_31 == 999f)
								{
									vVar211 = {_get_gameplay_cam_rot(2)};
									fVar214 = get_entity_heading(PLAYER::PLAYER_PED_ID());
									fVar215 = vVar211.z;
									fVar216 = fVar214;
									*uParam1.f_31 = fVar215 - fVar216;
									if (*uParam1.f_31 < 360f)
									{
										*uParam1.f_31 += 360f;
									}
									if (*uParam1.f_31 > 360f)
									{
										*uParam1.f_31 -= 360f;
									}
								}
								fVar209 = *uParam1.f_30;
								fVar210 = *uParam1.f_31;
								set_gameplay_cam_relative_pitch(fVar209, 1f);
								set_gameplay_cam_relative_heading(fVar210);
								vVar217 = {_get_gameplay_cam_coords()};
								vVar220 = {get_gameplay_cam_coord()};
								fVar223 = get_distance_between_coords(vVar217, vVar220, 1);
								iVar224 = round(fVar223 * 1000f);
								render_script_cams(false, true, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (is_synchronized_scene_running(iVar4))
					{
						detach_synchronized_scene(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_43(*uParam1.f_22, 0f, 0f, 0f, 0))
	{
		set_roads_back_to_original(*uParam1.f_5 + *uParam1.f_19 - *uParam1.f_22, *uParam1.f_5 + *uParam1.f_19 + *uParam1.f_22, 1);
	}
	set_player_control(player_id(), true, 0);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		clear_ped_tasks(PLAYER::PLAYER_PED_ID());
	}
	iVar225 = _0x3044240D2E0FA842();
	iVar226 = false;
	if (*uParam1.f_32)
	{
		_0x59424BD75174C9B1();
		if (!func_13(uParam1.f_34, 1, 1, 1, 0, 1, 0))
		{
			iVar226 = true;
		}
	}
	if (iVar225 || iVar226)
	{
		while ((iVar225 || iVar226) && !is_player_switch_in_progress())
		{
			if (iVar225)
			{
			}
			if (iVar226)
			{
			}
			iVar227 = 2;
			func_12(1, 26, &iVar227);
			func_12(1, 79, &iVar227);
			func_12(1, 1, &iVar227);
			func_12(1, 2, &iVar227);
			func_12(0, 22, &iVar227);
			func_12(0, 36, &iVar227);
			func_12(0, 142, &iVar227);
			func_12(0, 141, &iVar227);
			func_12(0, 140, &iVar227);
			func_12(0, 263, &iVar227);
			func_12(0, 264, &iVar227);
			wait(0);
			iVar225 = _0x3044240D2E0FA842();
			iVar226 = false;
			if (*uParam1.f_32)
			{
				_0x59424BD75174C9B1();
				if (!func_13(uParam1.f_34, 1, 1, 1, 0, 1, 0))
				{
					iVar226 = true;
				}
			}
		}
	}
	if (!is_string_null_or_empty(*uParam1.f_16))
	{
		remove_anim_dict(*uParam1.f_16);
	}
	remove_anim_dict(*uParam1);
	destroy_cam(iVar5, 0);
	func_10(uParam1.f_34);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 77, iVar3);
		set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_10(auto uParam0)
{
	func_11(uParam0);
	*uParam0 = 0;
	*uParam0.f_9 = {0f, 0f, 0f};
}

void func_11(auto uParam0)
{
	if (does_cam_exist(*uParam0.f_1))
	{
		destroy_cam(*uParam0.f_1, 0);
	}
	if (does_cam_exist(*uParam0.f_2))
	{
		destroy_cam(*uParam0.f_2, 0);
	}
	if (does_cam_exist(*uParam0.f_3))
	{
		destroy_cam(*uParam0.f_3, 0);
	}
	if (does_cam_exist(*uParam0.f_4))
	{
		destroy_cam(*uParam0.f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	CONTROLS::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

bool func_13(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	Vector3 vVar18;
	Vector3 fVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_14();
			if (!is_entity_dead(*uParam0.f_5, 0))
			{
				func_11(uParam0);
				vVar0 = {_get_gameplay_cam_coords()};
				if (iParam1)
				{
					vVar0 = {vVar0 + get_entity_velocity(*uParam0.f_5) * FtoV(get_frame_time())};
				}
				vVar3 = {get_offset_from_entity_given_world_coords(*uParam0.f_5, vVar0)};
				vVar6 = {_get_gameplay_cam_rot(2)};
				vVar9 = {vVar6 + *uParam0.f_9};
				vVar12 = {vVar9 - get_entity_rotation(*uParam0.f_5, 2)};
				vVar15 = {-sin(vVar9.z) * cos(vVar9.x), cos(vVar9.z) * cos(vVar9.x), sin(vVar9.x)};
				vVar18 = {-sin(vVar12.z) * cos(vVar12.x), cos(vVar12.z) * cos(vVar12.x), sin(vVar12.x)};
				fVar21 = _0x80EC114669DAEFF4();
				if (*uParam0.f_17 > 0 || iParam6 != 0)
				{
					*uParam0.f_3 = create_camera(1775630800, 0);
				}
				*uParam0.f_1 = create_camera(26379945, 1);
				if (iParam1)
				{
					attach_cam_to_entity(*uParam0.f_1, *uParam0.f_5, vVar3, 1);
				}
				else
				{
					set_cam_coord(*uParam0.f_1, vVar0);
				}
				set_cam_rot(*uParam0.f_1, vVar6, 2);
				set_cam_fov(*uParam0.f_1, fVar21);
				*uParam0.f_2 = create_camera(26379945, 1);
				if (iParam1 && !iParam4)
				{
					attach_cam_to_entity(*uParam0.f_2, *uParam0.f_5, vVar3 + vVar18 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12), 1);
				}
				else
				{
					set_cam_coord(*uParam0.f_2, vVar0 + vVar15 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12));
				}
				set_cam_rot(*uParam0.f_2, vVar6, 2);
				set_cam_fov(*uParam0.f_2, fVar21);
				if (*uParam0.f_17 > 0 && iParam6 == 0)
				{
					*uParam0.f_4 = create_camera(26379945, 1);
					if (iParam1 && !iParam4)
					{
						attach_cam_to_entity(*uParam0.f_4, *uParam0.f_5, vVar3 + vVar18 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12) * Vector(*uParam0.f_13, *uParam0.f_13, *uParam0.f_13), 1);
					}
					else
					{
						set_cam_coord(*uParam0.f_4, vVar0 + vVar15 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12) * Vector(*uParam0.f_13, *uParam0.f_13, *uParam0.f_13));
					}
					set_cam_rot(*uParam0.f_4, vVar6, 2);
					set_cam_fov(*uParam0.f_4, fVar21);
				}
				if (*uParam0.f_17 > 0 || iParam6 != 0)
				{
					_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_1, false, 2);
					if (iParam6 == 0)
					{
						_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_4, *uParam0.f_17, 2);
					}
					_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_2, *uParam0.f_14 - *uParam0.f_17, 2);
					_0xD1B0F412F109EA5D(*uParam0.f_3, iParam6);
					set_cam_active(*uParam0.f_3, true);
				}
				else
				{
					set_cam_active_with_interp(*uParam0.f_2, *uParam0.f_1, *uParam0.f_14, 2, 2);
				}
				render_script_cams(true, false, 3000, 1, 0, 0);
				*uParam0.f_7 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
		
		case 1:
			func_14();
			if (iParam3)
			{
				if (!*uParam0.f_8)
				{
					if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_7 + *uParam0.f_16)
					{
						if (iParam5)
						{
							switch (*uParam0.f_6)
							{
								case 1:
									_start_screen_effect("CamPushInFranklin", false, 0);
									break;
								
								case 0:
									_start_screen_effect("CamPushInMichael", false, 0);
									break;
								
								case 2:
									_start_screen_effect("CamPushInTrevor", false, 0);
									break;
							}
						}
						else
						{
							_start_screen_effect("CamPushInNeutral", false, 0);
						}
						play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						*uParam0.f_8 = 1;
					}
				}
			}
			if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_7 + *uParam0.f_15)
			{
				if (iParam2)
				{
					func_11(uParam0);
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				return true;
			}
			break;
		
		case 2:
			return true;
			break;
	}
	return false;
}

void func_14()
{
	_0xEB2D525B57F42B40();
	func_15();
}

void func_15()
{
	Global_17118.f_134 = 1;
}

void func_16(auto uParam0, Vector3 vParam1)
{
	*uParam0.f_9 = {vParam1};
}

void func_17(auto uParam0, int iParam1, auto uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0.f_5 = iParam1;
	*uParam0.f_6 = uParam2;
	*uParam0.f_12 = fParam3;
	*uParam0.f_14 = iParam4;
	*uParam0.f_15 = iParam5;
	*uParam0.f_16 = iParam6;
	*uParam0.f_17 = iParam7;
	*uParam0.f_13 = iParam8;
}

float func_18(Vector3 fParam0, float fParam1, float fParam2)
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

int func_19(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_20(sParam2, iParam3, 0);
}

bool func_20(char* sParam0, int iParam1, int iParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_27();
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
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_25();
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
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_24())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_23())
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
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_22();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_21();
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
		func_29();
	}
	return false;
}

void func_21()
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

void func_22()
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
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_23()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_25()
{
	if (func_26(14))
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
		Global_14413 = func_57();
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

int func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_27()
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_29()
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

void func_30(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

void func_31(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_32()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14571)
	{
		func_34(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_23())
	{
		Global_14413.f_1 = 3;
	}
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_35(0))
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

bool func_35(int iParam0)
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

void func_36(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_38(int iParam0, auto uParam1)
{
	if (func_39(uParam1, 1))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_39(uParam1, 0))
	{
	}
}

int func_39(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_40()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88544[iVar0 /*17*/] && !Global_88544[iVar0 /*17*/].f_1)
		{
			if (Global_88544[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88544[iVar0 /*17*/].f_5 != 88 && Global_88544[iVar0 /*17*/].f_5 != 89) && Global_88544[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88544[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

int func_43(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_44()
{
	func_45();
	func_62(1);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_124(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36616[iVar2 /*5*/] == 0)
		{
			func_46(iVar2);
		}
		iVar2++;
	}
}

void func_46(int iParam0)
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

bool func_47(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	if (is_player_playing(player_id()))
	{
		func_51(0);
		clear_area(vParam0, 5f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_entity_coords(PLAYER::PLAYER_PED_ID(), vParam0, 1, false, 0, 1);
				set_entity_heading(PLAYER::PLAYER_PED_ID(), fParam3);
				set_gameplay_cam_relative_pitch(0f, 1f);
				set_gameplay_cam_relative_heading(0f);
			}
		}
		_new_load_scene_start_safe(vParam0, 4500f, 0);
		wait(0);
		clear_area(vParam0, 5000f, 1, 0, 0, false);
		clear_area_of_objects(vParam0, 5000f, 0);
		remove_particle_fx_in_range(vParam0, 5000f);
		remove_decals_in_range(vParam0, 5000f);
		func_50();
		func_49();
		settimera(0);
		func_51(1);
		if (!is_new_load_scene_active())
		{
			while (!_new_load_scene_start_safe(vParam0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					set_game_paused(false);
					return false;
				}
			}
		}
		settimera(0);
		while (!is_new_load_scene_loaded())
		{
			wait(0);
			if (timera() > 20000)
			{
				set_game_paused(false);
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				return false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				set_game_paused(false);
				settimera(0);
				_0x4759CC730F947C81();
				if (iParam5 == 1)
				{
					_0x48ADC8A773564670();
				}
				else
				{
					settimera(5000);
				}
				populate_now();
			}
		}
		while ((!_0x91D6DD290888CBAB() && !func_48()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			get_ground_z_for_3d_coord(vParam0, &(vParam0.f_2), 0);
			clear_area(vParam0, 5f, 1, 0, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					set_entity_coords(PLAYER::PLAYER_PED_ID(), vParam0, 1, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
		func_51(0);
		return true;
	}
	func_51(0);
	return false;
}

int func_48()
{
	return !Global_68319.f_553;
}

void func_49()
{
	Global_68319.f_553 = 1;
	Global_68319.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68319[iVar0] = 0;
		iVar0++;
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 2))
			{
				set_game_paused(true);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 2);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 2))
		{
			set_game_paused(false);
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 2);
		}
	}
}

bool func_52()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

int func_53(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[iParam0], false);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33077[11] == 1)
	{
		return 4;
	}
	if (!func_56(21))
	{
		return 0;
	}
	if (!func_54(130))
	{
		return 1;
	}
	if (!func_54(131))
	{
		return 2;
	}
	if (!func_56(22))
	{
		return 1;
	}
	if (!func_56(49))
	{
		return 3;
	}
	if (!func_56(28))
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

auto func_57()
{
	func_58();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_61(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_60(PLAYER::PLAYER_PED_ID());
			if (func_59(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_59(Global_101154.f_1826.f_539.f_3549))
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

int func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(int iParam0)
{
	_0x487A82C650EB7799(0f);
	_0x0225778816FDC28C(0f);
	set_gameplay_cam_shake_amplitude(0f);
	stop_gameplay_cam_shaking(true);
	set_cinematic_cam_shake_amplitude(0f);
	stop_cinematic_cam_shaking(1);
	_0x12561FCBB62D5B9C(0);
	if (is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL"))
	{
		stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!is_string_null_or_empty(&Global_36817))
	{
		if (is_audio_scene_active(&Global_36817))
		{
			stop_audio_scene(&Global_36817);
		}
	}
	if (does_cam_exist(Global_36806))
	{
		if (is_cam_shaking(Global_36806))
		{
			set_cam_shake_amplitude(Global_36806, 0f);
			stop_cam_shaking(Global_36806, 1);
		}
	}
	if (_0xC912AF078AF19212())
	{
		_0x1C9D7949FA533490(0);
	}
	if (iParam0)
	{
		if (get_timecycle_modifier_index() != -1 || _0x459FD2C8D0AB78BC() != -1)
		{
			clear_timecycle_modifier();
		}
		else if (is_player_switch_in_progress())
		{
			clear_timecycle_modifier();
		}
	}
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
	StringCopy(&Global_36817, "", 64);
	StringCopy(&Global_36833, "", 16);
	func_63();
}

void func_63()
{
	Global_36805 = 0;
	Global_36806 = 0;
	Global_36807 = 0;
	Global_36808 = 30000;
	Global_36809 = 0f;
	Global_36811 = 0f;
	Global_36810 = 0f;
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
}

void func_64(int iParam0, int iParam1, int iParam2)
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
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam1)
	{
		if (_get_no_loading_screen())
		{
			set_no_loading_screen(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, iParam1, iVar0);
	}
	else
	{
		iVar1 = iParam2 & 2 != false;
		iVar2 = iParam2 & 4 != false;
		iVar3 = iParam2 & 8 != false;
		iVar4 = iParam2 & 16 != false;
		iVar5 = iParam2 & 32 != false;
		iVar6 = iParam2 & 64 != false;
		iVar7 = iParam2 & 128 != false;
		iVar8 = iParam2 & 256 != false;
		iVar9 = iParam2 & 512 != false;
		iVar10 = iParam2 & 1024 != false;
		iVar11 = iParam2 & 2048 != false;
		iVar12 = iParam2 & 4096 != false;
		iVar13 = iParam2 & 8192 != false;
		iVar14 = iParam2 & 16384 != false;
		iVar15 = iParam2 & 32768 != false;
		iVar16 = iParam2 & 65536 != false;
		iVar17 = iParam2 & 131072 != false;
		iVar18 = iParam2 & 262144 != false;
		iVar19 = iParam2 & 524288 != false;
		iVar20 = iParam2 & 1048576 != false;
		iVar21 = iParam2 & 2097152 != false;
		iVar22 = iParam2 & 4194304 != false;
		iVar23 = iParam2 & 8388608 != false;
		if (!func_68())
		{
			iVar24 = false;
			if (iParam1 == 1)
			{
				iVar24 = true;
			}
			if (iVar15 == 0 && !iVar20)
			{
				iVar24 = true;
			}
			if (iVar9 == 1)
			{
				iVar24 = true;
			}
			if (iVar24)
			{
				return;
			}
		}
		if (iVar17)
		{
		}
		if (network_is_player_active(iParam0) && is_player_playing(iParam0))
		{
			iVar25 = get_player_ped(iParam0);
			if (!iVar19)
			{
				if ((iVar18 && iParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					fade_out_local_player(1);
				}
				else
				{
					set_entity_visible(iVar25, !iVar13, 0);
				}
				if (!iVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iVar18)
					{
						fade_out_local_player(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (iParam1)
			{
				if (!func_67(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, true, 0);
					}
				}
				if (!is_entity_attached(iVar25))
				{
					if (!iVar20)
					{
						freeze_entity_position(iVar25, false);
					}
					_0x3910051CCECDB00C(iVar25, true);
				}
				else if (!iVar20)
				{
					freeze_entity_position(iVar25, false);
				}
				set_ped_can_be_targetted(iVar25, true);
				set_player_invincible(iParam0, 0);
				_0x4668D80430D6C299(iVar25);
				set_ped_can_ragdoll(iVar25, 1);
				func_66();
				func_65();
				if (is_player_teleport_active())
				{
					if (!iVar22)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!iVar23)
				{
					iVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, !iVar14, 0);
					}
					if (!is_entity_attached(iVar25))
					{
						if (!iVar20)
						{
							freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15)
						{
							_0x3910051CCECDB00C(iVar25, true);
						}
					}
				}
				if (iVar9)
				{
					set_player_invincible(iParam0, 0);
				}
				else
				{
					set_player_invincible(iParam0, 1);
				}
				set_ped_can_be_targetted(iVar25, iVar16);
				if (iVar2)
				{
					if (!is_ped_fatally_injured(iVar25) && !is_ped_in_any_vehicle(iVar25, 0))
					{
						clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (iVar1)
			{
				iVar26 |= 2;
			}
			if (iVar2)
			{
				iVar26 |= 4;
			}
			if (iVar3)
			{
				iVar26 |= 8;
			}
			if (iVar4)
			{
				iVar26 |= 16;
			}
			if (iVar5)
			{
				iVar26 |= 32;
			}
			if (iVar6)
			{
				iVar26 |= 64;
			}
			if (iVar7)
			{
				iVar26 |= 128;
			}
			if (iVar8)
			{
				iVar26 |= 256;
			}
			if (iVar9)
			{
				iVar26 |= 512;
			}
			if (iVar10)
			{
				iVar26 |= 1024;
			}
			if (iVar11)
			{
				iVar26 |= 2048;
			}
			if (iVar12)
			{
				iVar26 |= 4096;
			}
			set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_66()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_67(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_68()
{
	if (func_69() == 0)
	{
		return true;
	}
	return false;
}

auto func_69()
{
	return Global_1312466.f_18;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_71(Global_36642[uLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = get_random_int_in_range(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = timera() + iVar0;
}

bool func_71(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_82();
	if (iVar0 == -2)
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (is_ped_in_any_vehicle(Local_43.f_1, 0) || is_ped_getting_into_a_vehicle(Local_43.f_1))
		{
			return false;
		}
		if (is_entity_waiting_for_world_collision(Local_43.f_1))
		{
			return false;
		}
		if (func_78(Local_43.f_1))
		{
			return false;
		}
	}
	if (Global_36642[uLocal_64 /*5*/].f_3 < 3 && Global_36642[uLocal_64 /*5*/].f_3 != 0)
	{
		return false;
	}
	if (Global_36642[uLocal_64 /*5*/].f_4 < 9 && Global_36642[uLocal_64 /*5*/].f_4 != 0)
	{
		return false;
	}
	sVar1 = func_77(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return false;
	}
	if (func_78(Local_43.f_1))
	{
		return false;
	}
	request_clip_set(sVar1);
	if (func_74(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!is_string_null_or_empty(sVar2) && !is_string_null_or_empty(sVar3))
		{
			request_anim_dict(sVar2);
			while (!has_anim_dict_loaded(sVar2))
			{
				wait(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				task_play_anim(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!has_clip_set_loaded(sVar1))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return false;
	}
	set_ped_movement_clipset(Local_43.f_1, sVar1, 0.75f);
	if (get_follow_ped_cam_view_mode() == 4)
	{
		set_ped_strafe_clipset(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	set_ped_alternate_movement_anim(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_60.z = sVar1;
	iLocal_51 = true;
	iVar4 = 0;
	switch (func_60(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (is_ped_a_player(Local_43.f_1))
			{
				if (!func_72())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (is_ped_male(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	set_facial_idle_anim_override(Local_43.f_1, "mood_drunk_1", iVar4);
	set_ped_reset_flag(Local_43.f_1, 200, true);
	set_ped_reset_flag(Local_43.f_1, 46, true);
	set_ped_can_play_ambient_anims(Local_43.f_1, 0);
	set_ped_flee_attributes(Local_43.f_1, 262144, true);
	set_ped_is_drunk(Local_43.f_1, 1);
	return true;
}

int func_72()
{
	return func_73(player_id());
}

bool func_73(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

bool func_74(int iParam0)
{
	Vector3 vVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1) || is_ped_getting_into_a_vehicle(iParam0))
	{
		return false;
	}
	if (get_script_task_status(iParam0, -2017877118) != 7)
	{
		return false;
	}
	if (get_script_task_status(iParam0, 1785177548) != 7)
	{
		return false;
	}
	if (is_ped_shooting(iParam0))
	{
		return false;
	}
	if (is_entity_in_air(iParam0))
	{
		return false;
	}
	if (is_ped_ragdoll(iParam0))
	{
		return false;
	}
	if (is_ped_climbing(iParam0))
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (func_76())
	{
		return false;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!is_player_free_for_ambient_task(player_id()))
		{
			return false;
		}
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
		if (is_player_free_aiming(player_id()) || is_player_targetting_anything(player_id()))
		{
			return false;
		}
		if (func_75())
		{
			return false;
		}
	}
	vVar0 = {get_entity_velocity(iParam0)};
	if (vmag2(vVar0) >= 1f * 1f)
	{
		return false;
	}
	return true;
}

int func_75()
{
	return Global_91330.f_297 > 0;
}

int func_76()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_78(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_79(iParam0);
	sVar1 = func_77(iVar0);
	if (is_string_null_or_empty(vLocal_60.z))
	{
		if (is_string_null_or_empty(sVar1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return are_strings_equal(vLocal_60.z, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_81(int iParam0)
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
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_82()
{
	int iVar0;
	
	if (Local_55 == -2)
	{
		return -2;
	}
	if (Local_55 == -1)
	{
		return -1;
	}
	iVar0 = Local_55 - timera();
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_83()
{
	if (iLocal_50)
	{
		return;
	}
	if (!func_84())
	{
		vLocal_60.x = 5;
		Local_55.f_2 = timera() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

int func_84()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return false;
	}
	if (is_entity_dead(Local_43.f_4, 0))
	{
		return false;
	}
	vVar0 = {get_entity_coords(Local_43.f_1, 1)};
	vVar3 = {get_entity_coords(Local_43.f_4, 1)};
	fVar6 = get_distance_between_coords(vVar0, vVar3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (get_ped_stealth_movement(Local_43.f_1))
		{
			if (Global_36642[uLocal_64 /*5*/].f_2 == 0 || Global_36642[uLocal_64 /*5*/].f_2 == 2)
			{
				set_ped_stealth_movement(Local_43.f_1, 0, 0);
			}
		}
		if (is_ped_ducking(Local_43.f_1))
		{
			set_ped_ducking(Local_43.f_1, 0);
		}
	}
	if (Local_55 != -2)
	{
		if (Local_55 == -1)
		{
			if (Global_36642[uLocal_64 /*5*/].f_2 != 0)
			{
				Global_36642[uLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = Local_55 - timera();
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 /= 1000 + 1;
			if (Global_36642[uLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36642[uLocal_64 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_36642[uLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36642[uLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36642[uLocal_64 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_36642[uLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36642[uLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!is_string_null_or_empty(sLocal_54))
	{
		if (!func_74(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (is_entity_playing_anim(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				stop_anim_task(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36642[uLocal_64 /*5*/].f_3 >= 10 || Global_36642[uLocal_64 /*5*/].f_4 >= 15)
	{
		if (get_script_task_status(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (is_any_speech_playing(Local_43.f_1))
		{
			return;
		}
		if (is_ped_in_any_vehicle(Local_43.f_1, 1))
		{
			if (Global_36642[uLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36642[uLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36642[uLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36642[uLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.y = 3;
		return;
	}
	if (!iLocal_51)
	{
		return;
	}
	if (!func_78(Local_43.f_1))
	{
		return;
	}
}

bool func_86()
{
	int iVar0;
	
	if (!is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		return false;
	}
	iVar0 = false;
	iVar0 = get_vehicle_ped_is_in(Local_43.f_1, 0);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		return false;
	}
	if (!get_ped_in_vehicle_seat(iVar0, -1) == Local_43.f_1)
	{
		return false;
	}
	Local_43.f_4 = iVar0;
	vLocal_60.x = 7;
	return true;
}

void func_87()
{
	if (!is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
}

void func_88()
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	
	if (!iLocal_50)
	{
		return;
	}
	if (!is_player_playing(player_id()))
	{
		return;
	}
	if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = get_entity_speed(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	vVar5 = {vVar2 - Vector(3f, 30f, 30f)};
	vVar8 = {vVar2 + Vector(3f, 30f, 30f)};
	if (!is_cop_vehicle_in_area_3d(vVar5, vVar8) && !is_cop_ped_in_area_3d(vVar5, vVar8))
	{
		return;
	}
	set_player_wanted_level_no_drop(player_id(), 1, 0);
	set_player_wanted_level_now(player_id(), 0);
	func_8(73, 1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		iVar1 = get_vehicle_ped_is_in(Local_43.f_1, 0);
		iVar2 = get_ped_in_vehicle_seat(iVar1, -1);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !network_has_control_of_entity(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!get_follow_ped_cam_view_mode() == 4)
	{
		fLocal_53 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (timera() < Local_55.f_4)
	{
		func_91(iVar0, fLocal_53);
		return;
	}
	if (is_entity_a_ped(iVar0))
	{
		Local_55.f_4 = timera() + 2000;
	}
	else
	{
		Local_55.f_4 = timera() + 1000;
	}
	fVar3 = get_entity_speed(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_90(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = Local_55.f_1 - timera();
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_53);
}

auto func_90(int iParam0, float fParam1, float fParam2)
{
	Vector3 fVar0;
	Vector3 fVar1;
	int iVar2;
	
	fVar0 = get_random_float_in_range(-fParam1, fParam1);
	fVar1 = get_random_float_in_range(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 -= fVar1;
	}
	else
	{
		fVar0 += fVar1;
	}
	if (is_entity_a_ped(iParam0))
	{
		if (is_ped_sprinting(get_ped_index_from_entity_index(iParam0)))
		{
			fVar0 *= 4.5f;
		}
		else
		{
			fVar0 *= 3f;
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (is_this_model_a_bike(iVar2))
		{
			fVar0 *= 1.5f;
		}
		else
		{
			fVar0 *= 0.5f;
		}
	}
	fVar0 = func_18(fVar0, -1f, 1f);
	return fVar0;
}

void func_91(int iParam0, float fParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !network_has_control_of_entity(iParam0))
	{
		return;
	}
	if (is_entity_a_ped(iParam0))
	{
		_0x288DF530C92DAD6F(get_ped_index_from_entity_index(iParam0), fParam1);
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		set_vehicle_steer_bias(get_vehicle_index_from_entity_index(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_36642[uLocal_64 /*5*/].f_3 >= 10 || Global_36642[uLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36642[uLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36642[uLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36642[uLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36642[uLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (iLocal_50)
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(Local_43.f_1, 0);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		task_leave_any_vehicle(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = get_script_task_status(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = timera() + 1000;
		return;
	}
	if (!is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = get_vehicle_ped_is_in(Local_43.f_1, 0);
	iVar2 = get_ped_in_vehicle_seat(iVar1, -1);
	if (iVar2 == Local_43.f_1)
	{
		func_94();
		Local_55.f_3 = -2;
		return;
	}
	task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar1);
	vLocal_60.x = 9;
	Local_55.f_3 = timera() + 1000;
}

void func_94()
{
	if (vLocal_60.x == 10)
	{
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_124(iLocal_48, 2, 5);
	Local_55.f_4 = timera();
	fLocal_53 = 0f;
}

void func_95()
{
	if (is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		vLocal_60.x = 10;
		return;
	}
	if (timera() < Local_55.f_3)
	{
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!iLocal_50)
	{
	}
	iVar0 = false;
	iVar1 = false;
	if (iVar1 || is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		if (!iLocal_50)
		{
		}
		iVar0 = get_vehicle_ped_is_in(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!iLocal_50)
			{
			}
			if (!iLocal_50)
			{
				if (!iLocal_50)
				{
				}
				task_leave_any_vehicle(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (iVar1)
		{
			if (!iLocal_50)
			{
			}
			func_94();
			return;
		}
		if (!iLocal_50)
		{
			if (!iLocal_50)
			{
			}
			func_94();
			return;
		}
		if (!iLocal_50)
		{
		}
		iVar2 = get_ped_in_vehicle_seat(Local_43.f_4, -1);
		if (iVar2 == Local_43.f_1)
		{
			func_94();
			return;
		}
		task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar0);
		vLocal_60.x = 9;
		Local_55.f_3 = timera() + 1000;
		return;
	}
	if (!func_84())
	{
		clear_ped_tasks(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!iLocal_50)
	{
		iVar3 = get_script_task_status(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!is_ped_in_any_vehicle(Local_43.f_1, 0))
			{
				clear_ped_tasks(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

void func_97()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_60.x = 4;
		return;
	}
	if (!is_vehicle_driveable(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = {get_entity_coords(Local_43.f_1, 1)};
	vVar3 = {get_entity_coords(Local_43.f_4, 1)};
	fVar6 = get_distance_between_coords(vVar0, vVar3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_36642[uLocal_64 /*5*/].f_2))
		{
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = timera() + 2000;
		return;
	}
	iVar7 = get_vehicle_max_number_of_passengers(Local_43.f_4);
	iVar8 = false;
	iVar9 = true;
	iVar8 = true;
	while (iVar9)
	{
		if (iVar8 < iVar7)
		{
			if (is_vehicle_seat_free(Local_43.f_4, iVar8))
			{
				iVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			iVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			vLocal_60.x = 4;
			return;
		}
	}
	func_98();
	task_enter_vehicle(Local_43.f_1, Local_43.f_4, -1, iVar8, 2f, 1, 0);
	vLocal_60.x = 7;
}

void func_98()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		reset_ped_movement_clipset(Local_43.f_1, 0.25f);
		reset_ped_strafe_clipset(Local_43.f_1);
		clear_ped_alternate_movement_anim(Local_43.f_1, 0, -8f);
		vLocal_60.z = "";
		clear_facial_idle_anim_override(Local_43.f_1);
		set_ped_reset_flag(Local_43.f_1, 200, false);
		set_ped_reset_flag(Local_43.f_1, 46, false);
		set_ped_can_play_ambient_anims(Local_43.f_1, 1);
		set_ped_flee_attributes(Local_43.f_1, 262144, false);
		set_ped_is_drunk(Local_43.f_1, 0);
	}
	if (!iLocal_51)
	{
		return;
	}
	iLocal_51 = false;
}

void func_99()
{
	if (timera() < Local_55.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

bool func_100()
{
	if (!func_78(Local_43.f_1))
	{
		return false;
	}
	if (!iLocal_51)
	{
		return false;
	}
	func_101(Local_43.f_1);
	vLocal_60.z = "";
	return true;
}

void func_101(int iParam0)
{
	reset_ped_movement_clipset(iParam0, 0.25f);
	clear_ped_alternate_movement_anim(iParam0, 0, -8f);
	set_ped_reset_flag(iParam0, 200, false);
	set_ped_can_play_ambient_anims(iParam0, 1);
	set_ped_flee_attributes(iParam0, 262144, false);
	set_ped_is_drunk(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_55 == -1)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[uLocal_64 /*5*/].f_3 < 3 && Global_36642[uLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Local_55 - timera();
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		vLocal_60.x = 10;
		return;
	}
	if (func_78(Local_43.f_1))
	{
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2)
	{
		return;
	}
	if (!func_71(Global_36642[uLocal_64 /*5*/].f_2))
	{
		return;
	}
	vLocal_60.x = 12;
}

void func_103()
{
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36723[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36723[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_36723[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36723[iVar1 /*5*/])
					{
						func_106(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36723[iParam0 /*5*/] = -1;
	Global_36723[iParam0 /*5*/].f_1 = -1;
	Global_36723[iParam0 /*5*/].f_2 = 6;
	Global_36723[iParam0 /*5*/].f_3 = 0;
	Global_36723[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36723[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_36723[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_109();
			break;
		
		case 4:
			func_108();
			break;
		
		case 5:
			func_107();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_107()
{
	vLocal_60.y = 2;
}

void func_108()
{
	int iVar0;
	
	Global_36642[uLocal_64 /*5*/].f_4++;
	if (Local_55 == -1)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[uLocal_64 /*5*/].f_4 < 9 && Global_36642[uLocal_64 /*5*/].f_4 != 0)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Local_55 - timera();
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36642[uLocal_64 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_36642[uLocal_64 /*5*/].f_3++;
	if (Local_55 == -1)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[uLocal_64 /*5*/].f_3 < 3 && Global_36642[uLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Local_55 - timera();
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36642[uLocal_64 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)
{
	Local_43.f_3 += iParam0;
	Local_43.f_2 += iParam0;
	Local_55.f_1 += iParam0;
	Local_55 += iParam0;
}

void func_111()
{
	int iVar0;
	
	if (!iLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = get_player_wanted_level(player_id());
		return;
	}
	iVar0 = get_player_wanted_level(player_id());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_112();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_112()
{
}

void func_113()
{
	if (!Local_55 == -1)
	{
		if (!Local_55 == -2)
		{
			if (timera() >= Local_55)
			{
				func_98();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (timera() > Local_55.f_1)
		{
			func_131();
		}
	}
}

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36723[iVar0 /*5*/])
		{
			func_105(iVar0);
		}
		iVar0++;
	}
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_60.x = 4;
	if (!is_entity_dead(Local_43.f_1, 0))
	{
		if (is_ped_sitting_in_any_vehicle(Local_43.f_1))
		{
			vLocal_60.x = 10;
		}
	}
	if (iLocal_50)
	{
		func_122();
		func_8(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_121(2049, -1, 0);
			iVar1 = iVar0 / 10 + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2049, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = iVar2 + iVar3 + iVar4;
			iVar6 = iVar5 / 10 + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_60.y = 1;
		return;
	}
	vLocal_60.y = 12;
	if (Local_55 == -1)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[uLocal_64 /*5*/].f_3 < 3 && Global_36642[uLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[uLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = Local_55 - timera();
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 /= 1000 + 1;
		Global_36642[uLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36642[uLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_117(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
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

auto func_118()
{
	return Global_1312747;
}

void func_119(int iParam0)
{
	auto uVar0;
	
	uVar0 = func_120(81);
	Global_2411218[uVar0 /*83*/] = 81;
	Global_2411218[uVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122()
{
}

void func_123()
{
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	func_125(iParam0, iParam1, iParam2, 0, 0);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
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

int func_126()
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

bool func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_128(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_128(int iParam0, int iParam1, int iParam2)
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

void func_129()
{
	int iVar0;
	
	iLocal_50 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		iLocal_50 = true;
		Global_36838 = 1;
		Global_36840++;
	}
	if (!is_entity_dead(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				set_ambient_voice_name(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				set_ambient_voice_name(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_81(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	uLocal_64 = func_80(iLocal_48);
}

void func_131()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!is_entity_dead(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36642[uLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					set_ambient_voice_name(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					set_ambient_voice_name(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (iLocal_50)
	{
		Global_36838 = 0;
	}
	func_132();
	remove_anim_dict(func_77(0));
	remove_anim_dict(func_77(2));
	remove_anim_dict(func_77(1));
	Global_1724571 = 0;
	if (_get_number_of_instances_of_streamed_script(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	terminate_this_thread();
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_entity_dead(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (is_ped_in_any_vehicle(Local_43.f_1, 0))
	{
		iVar1 = get_vehicle_ped_is_in(Local_43.f_1, 0);
		iVar2 = get_ped_in_vehicle_seat(iVar1, -1);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!get_follow_ped_cam_view_mode() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_91(iVar0, 0f);
}

void func_133(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_134(iParam2), 1);
}

int func_134(int iParam0)
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

