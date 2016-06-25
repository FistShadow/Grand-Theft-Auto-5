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
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	Vector3 vLocal_59 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<205> Local_65 = 0;
	auto uLocal_270 = 0;
	auto uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	Vector3 vLocal_285 = 0;
	float fLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	struct<2>[] Local_298 = new struct<2>[2];
	int iLocal_303 = 0;
	struct<20> Local_304 = 0;
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
	sLocal_20 = "NULL";
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
	iLocal_284 = 1;
	vLocal_285 = {0.1f, 0.1f, 0.1f};
	fLocal_288 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_113(Local_304);
	}
	while (true)
	{
		func_112();
		if (func_102())
		{
			func_101(3);
		}
		if (func_93(0))
		{
			func_101(3);
		}
		if (Global_1715381)
		{
			func_101(3);
		}
		if (Global_1315839)
		{
			func_101(3);
		}
		if (Global_1318856)
		{
			func_101(3);
		}
		if (Global_1573691)
		{
			func_101(3);
		}
		if (Global_1573824)
		{
			func_101(3);
		}
		if (Global_1715399)
		{
			func_101(3);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_89();
		}
		if (func_88())
		{
			func_101(3);
		}
		if (network_is_player_in_mp_cutscene(player_id()))
		{
			func_101(3);
		}
		if (func_87())
		{
			func_101(3);
		}
		if (is_vehicle_driveable(iLocal_291, 0))
		{
			if (_0x21D04D7BC538C146(iLocal_291) && !func_86(player_id()) == 129)
			{
				func_101(3);
			}
		}
		func_85(&uLocal_270, 0, 0);
		func_82();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && participant_id_to_int() != -1)
		{
			switch (Local_298[participant_id_to_int() /*2*/])
			{
				case 0:
					func_101(1);
					break;
				
				case 1:
					func_1();
					Global_2444579 = 0;
					if (iLocal_297 >= 3)
					{
						func_101(3);
					}
					break;
				
				case 2:
					break;
				
				case 3:
					func_89();
					break;
				
				default:
					break;
				}
		}
		if (network_is_host_of_this_script())
		{
			switch (iLocal_297)
			{
				case 0:
					iLocal_297 = 1;
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					func_89();
					break;
				
				default:
					break;
				}
		}
	}
}

void func_1()
{
	if (func_81(&Local_65))
	{
		if (!iLocal_283)
		{
			set_audio_flag("ForceSniperAudio", 1);
			iLocal_283 = 1;
		}
	}
	else if (iLocal_283)
	{
		set_audio_flag("ForceSniperAudio", 0);
		iLocal_283 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_83830, true))
	{
		if (iLocal_294 == player_id())
		{
			if (!iLocal_281)
			{
				disable_vehicle_weapon(1, joaat("vehicle_weapon_space_rocket"), iLocal_291, PLAYER::PLAYER_PED_ID());
				iLocal_281 = 1;
			}
		}
	}
	else if (func_80())
	{
		if (iLocal_294 == player_id())
		{
			if (!iLocal_281)
			{
				disable_vehicle_weapon(1, joaat("vehicle_weapon_space_rocket"), iLocal_291, PLAYER::PLAYER_PED_ID());
				iLocal_281 = 1;
			}
		}
	}
	else if (iLocal_294 == player_id())
	{
		if (iLocal_281)
		{
			disable_vehicle_weapon(0, joaat("vehicle_weapon_space_rocket"), iLocal_291, PLAYER::PLAYER_PED_ID());
			iLocal_281 = 0;
		}
	}
	func_79();
	func_78();
	switch (Local_298[participant_id_to_int() /*2*/].f_1)
	{
		case 0:
			func_72();
			Global_1587523[player_id() /*444*/].f_347 = 0;
			if (func_70())
			{
				func_69(1);
			}
			else if (iLocal_276)
			{
				if (iLocal_272 == joaat("valkyrie"))
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 66, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 67, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
				}
			}
			break;
		
		case 1:
			iLocal_64 = unk_0x67D02A194A2FC2BD("heli_cam");
			request_streamed_texture_dict("helicopterhud", false);
			func_68();
			if ((func_67(&Local_65, 0) && has_scaleform_movie_loaded(iLocal_64)) && has_streamed_texture_dict_loaded("helicopterhud"))
			{
				Local_65.f_9 = func_66(iLocal_291);
				Local_65.f_4 = 1;
				Global_1587523[player_id() /*444*/].f_347 = 1;
				func_64(&Local_65, iLocal_291, 1, 1);
				Global_2467969 = 1;
				func_62();
				set_entity_always_prerender(iLocal_291, 1);
				func_69(2);
				if (!iLocal_276)
				{
					Local_65.f_7 = 1;
					func_59();
				}
				func_58();
			}
			break;
		
		case 2:
			Global_1318857 = 0;
			func_68();
			func_54();
			func_53(&Local_65, 1);
			Local_65.f_4 = 1;
			if (func_52())
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 65, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(1, 1, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(1, 2, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
			if (iLocal_276)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(1, 85, 1);
			}
			func_51();
			func_47();
			func_46();
			func_58();
			func_29(&Local_65, 0);
			Local_65.f_87 = 1;
			if (Local_65.f_34)
			{
				func_89();
			}
			func_24(&Local_65);
			Local_65.f_25 = 90f;
			if (!iLocal_276)
			{
				Local_65.f_7 = 1;
				func_59();
			}
			if (iLocal_276)
			{
				func_17();
				func_6();
			}
			if (Global_2428492.f_3422.f_1)
			{
				if (iLocal_284)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Prison_Finale_Buzzard_Rocket", func_4(), "DLC_HEISTS_GENERIC_SOUNDS", 1, 50, 0);
					iLocal_284 = 0;
				}
			}
			else
			{
				iLocal_284 = 1;
			}
			if ((!is_pause_menu_active() && !func_3()) && !func_2(0))
			{
				if (is_control_just_pressed(0, 51) || (is_vehicle_driveable(iLocal_291, 0) && is_entity_in_water(iLocal_291)))
				{
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(-7f, 1f);
					func_101(3);
				}
			}
			break;
	}
}

bool func_2(int iParam0)
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

int func_3()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

Vector3 func_4()
{
	int iVar0;
	Vector3 vVar1;
	
	switch (iLocal_272)
	{
		case joaat("buzzard"):
		case joaat("savage"):
			switch (func_5())
			{
				case 0:
					vVar1 = {1.59f, 0.415f, -0.43f};
					break;
				
				case 1:
					vVar1 = {-1.59f, 0.415f, -0.43f};
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (func_5())
			{
				case 0:
					vVar1 = {2.89f, 1.215f, -0.43f};
					break;
				
				case 1:
					vVar1 = {-2.89f, 1.215f, -0.43f};
					break;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
				return get_offset_from_entity_in_world_coords(iVar0, vVar1);
			}
		}
	}
	return 0f, 0f, 0f;
}

bool func_5()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	vVar6 = {get_cam_rot(Local_65.f_32, 2)};
	vVar3 = {-sin(vVar6.z) * cos(vVar6.x), cos(vVar6.z) * cos(vVar6.x), sin(vVar6.x)};
	vVar0 = {get_entity_forward_vector(Local_65.f_8)};
	fVar10 = atan2(vVar3.y, vVar3.x);
	fVar9 = atan2(vVar0.y, vVar0.x);
	if (fVar10 < -3.14f)
	{
		fVar10 = -3.14f;
	}
	if (fVar10 > 3.14f)
	{
		fVar10 = 3.14f;
	}
	if (fVar9 < -3.14f)
	{
		fVar9 = -3.14f;
	}
	if (fVar9 > 3.14f)
	{
		fVar9 = 3.14f;
	}
	fVar11 = fVar10 - fVar9;
	if (fVar11 <= 0f)
	{
		return false;
	}
	return true;
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	auto uVar14;
	auto uVar15;
	int iVar16;
	int iVar17;
	
	fVar10 = 99999f;
	iVar11 = -1;
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar16 = GAMEPLAY::IS_BIT_SET(Global_1573747, iVar0);
		iVar2 = iVar0;
		if (iVar2 != player_id())
		{
			if (func_16(iVar2, 1, 1))
			{
				iVar1 = get_player_ped(iVar2);
				vVar3 = {ENTITY::GET_ENTITY_COORDS(iVar1, 1)};
				if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar3, 1) <= 150f)
				{
					if (func_15(iVar2, -1))
					{
						if (_world3d_to_screen2d(vVar3, &fVar12, &fVar13))
						{
							if (!iVar16)
							{
								if (func_14(fVar12, fVar13, 0.4f, 0.4f, 0.6f, 0.6f))
								{
									fVar9 = func_13(fVar12, fVar13, &uVar14, &uVar15);
									if (fVar9 < fVar10)
									{
										fVar10 = fVar9;
										iVar11 = iVar0;
										vVar6 = {vVar3};
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar11 != -1)
	{
		if (_world3d_to_screen2d(vVar6 + Vector(-1f, 0f, 0f), &fVar12, &fVar13))
		{
			func_7(fVar12, fVar13);
			if (!is_pause_menu_active())
			{
				iVar17 = false;
				if (_is_input_disabled(0))
				{
					iVar17 = is_control_just_pressed(0, 25);
				}
				else
				{
					iVar17 = is_control_just_pressed(2, 201);
				}
				if (iVar17)
				{
					GAMEPLAY::SET_BIT(&Global_1573747, iVar11);
				}
			}
		}
	}
}

void func_7(float fParam0, float fParam1)
{
	auto uVar0;
	auto uVar2;
	
	func_9(&uVar0, &uVar2, fParam0, fParam1);
	if (_is_input_disabled(0))
	{
		func_8("HUNTGUN_5_KM", -1);
	}
	else
	{
		func_8("HUNTGUN_5", -1);
	}
}

void func_8(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_9(auto uParam0, auto uParam1, auto uParam2, auto uParam3)
{
	*uParam0 = uParam2;
	*uParam0.f_1 = uParam3;
	*uParam1 = 0;
	*uParam1.f_1 = 0.25f;
	*uParam1.f_2 = 0.25f;
	*uParam1.f_7 = 2;
	func_10(func_11(1), uParam1.f_3, uParam1.f_4, uParam1.f_5, uParam1.f_6);
}

void func_10(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4)
{
	*uParam1 = get_bits_in_range(iParam0, 24, 31);
	*uParam2 = get_bits_in_range(iParam0, 16, 23);
	*uParam3 = get_bits_in_range(iParam0, 8, 15);
	*uParam4 = get_bits_in_range(iParam0, 0, 7);
}

auto func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_12(iVar0, iVar1, iVar2, iVar3);
}

auto func_12(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	
	GAMEPLAY::SET_BITs_in_range(&uVar0, 24, 31, iParam0);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 16, 23, iParam1);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 8, 15, iParam2);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 0, 7, iParam3);
	return uVar0;
}

float func_13(float fParam0, float fParam1, auto uParam2, auto uParam3)
{
	float fVar0;
	float fVar1;
	
	if (fParam0 <= 0.5f)
	{
		fVar0 = 0.5f - fParam0;
	}
	else
	{
		fVar0 = fParam0 - 0.5f;
	}
	if (fParam1 <= 0.5f)
	{
		fVar1 = 0.5f - fParam1;
	}
	else
	{
		fVar1 = fParam1 - 0.5f;
	}
	*uParam2 = fVar0;
	*uParam3 = fVar1;
	return fVar0 + fVar1;
}

bool func_14(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (fParam0 >= fParam2 && fParam0 <= fParam4)
	{
		if (fParam1 >= fParam3 && fParam1 <= fParam5)
		{
			return true;
		}
	}
	return false;
}

int func_15(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_32, iParam0);
	}
	else if (Global_2428492.f_3203[iParam0] >= iParam1)
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0, int iParam1, int iParam2)
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

void func_17()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (func_52())
	{
		if (!func_87())
		{
			if (!func_23(&(Global_2428492.f_3422)))
			{
				if (is_control_pressed(2, 24))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (does_cam_exist(Local_65.f_32))
							{
								if (is_cam_active(Local_65.f_32))
								{
									iVar0 = 250;
									if (func_21(player_id(), 0))
									{
										iVar1 = -1;
										if (decor_is_registered_as_type("MC_EntityID", 3))
										{
											if (decor_exist_on(iLocal_291, "MC_EntityID"))
											{
												iVar1 = decor_get_int(iLocal_291, "MC_EntityID");
											}
										}
										if (iVar1 != -1 && Global_1617379.f_43065[iVar1 /*127*/].f_122 != -1)
										{
											iVar0 = Global_1617379.f_43065[iVar1 /*127*/].f_122;
										}
									}
									shoot_single_bullet_between_coords(func_4(), Local_65.f_45, iVar0, 1, joaat("weapon_passenger_rocket"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Prison_Finale_Buzzard_Rocket_Player", func_4(), "DLC_HEISTS_GENERIC_SOUNDS", 0, 0, 0);
									func_20(&(Global_2428492.f_3422), 0, 0);
								}
							}
						}
					}
				}
			}
			else if (func_19(&(Global_2428492.f_3422), 2000, 0))
			{
				func_18(&(Global_2428492.f_3422));
				Global_2428492.f_3422 = {Var2};
			}
		}
	}
}

void func_18(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_19(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_20(uParam0, iParam2, 0);
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

void func_20(auto uParam0, int iParam1, int iParam2)
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

bool func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return false;
	}
	if (!func_22(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (Global_1587523[iVar0 /*444*/] == iParam1)
	{
		return true;
	}
	return false;
}

int func_22(int iParam0)
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

auto func_23(auto uParam0)
{
	return *uParam0.f_1;
}

void func_24(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	int iVar15;
	Vector3 fVar16;
	Vector3 fVar17;
	int iVar18;
	Vector3 fVar19;
	Vector3 vVar20;
	Vector3 fVar23;
	float fVar24;
	Vector3 vVar25;
	Vector3 fVar28;
	
	fVar5 = -75f;
	if (*uParam0.f_204)
	{
		fVar5 = -25f;
	}
	if (*uParam0.f_33 == 1)
	{
		if (does_cam_exist(*uParam0.f_32))
		{
			if (!is_cam_active(*uParam0.f_32))
			{
				set_cam_active(*uParam0.f_32, true);
				render_script_cams(true, false, 3000, 1, 0, 0);
			}
		}
		if (*uParam0.f_35)
		{
			if (does_cam_exist(*uParam0.f_32))
			{
				vVar6 = {get_cam_coord(*uParam0.f_32)};
				if (get_ground_z_for_3d_coord(vVar6.x, vVar6.y, vVar6.z + 1f, &fVar9, 0))
				{
					if (fVar9 > vVar6.z)
					{
						*uParam0.f_34 = 1;
					}
				}
			}
		}
		if (*uParam0.f_35 == 0)
		{
			if (does_cam_exist(*uParam0.f_32))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_9, 0))
					{
						if (*uParam0.f_4)
						{
							switch (ENTITY::GET_ENTITY_MODEL(*uParam0.f_9))
							{
								case joaat("valkyrie"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 5.32f, -0.3f, 1);
									break;
								
								case joaat("polmav"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								case joaat("maverick"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								case joaat("savage"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 5.75f, -0.75f, 1);
									break;
								
								default:
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 1.958f, -0.618f, 1);
									break;
							}
						}
						else
						{
							switch (ENTITY::GET_ENTITY_MODEL(*uParam0.f_9))
							{
								case joaat("buzzard"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 1.958f, -0.468f, 1);
									break;
								
								case joaat("polmav"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								case joaat("buzzard2"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 1.958f, -0.618f, 1);
									break;
								
								case joaat("valkyrie"):
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 5.32f, -0.3f, 1);
									break;
								
								default:
									attach_cam_to_entity(*uParam0.f_32, *uParam0.f_9, 0f, 1.958f, -0.618f, 1);
									break;
								}
						}
						*uParam0.f_35 = 1;
					}
				}
			}
		}
		if (*uParam0.f_35 == 1 && *uParam0.f_7 == 0)
		{
			if (does_cam_exist(*uParam0.f_32))
			{
				if (is_cam_active(*uParam0.f_32))
				{
					if (!func_28(1))
					{
						if (!is_control_pressed(2, 19) && !is_pause_menu_active())
						{
							set_input_exclusive(0, 39);
							fVar10 = 128f;
							if (_is_input_disabled(0))
							{
								fVar10 = 15f;
								fVar3 = _0x4F8A26A890FD62FB(0, 291) * -fVar10;
								fVar4 = _0x4F8A26A890FD62FB(0, 290) * fVar10;
							}
							else
							{
								iVar2 = floor(_0x4F8A26A890FD62FB(0, 291) * -fVar10);
								iVar1 = floor(_0x4F8A26A890FD62FB(0, 290) * fVar10);
							}
							iVar0 = floor(get_disabled_control_normal(0, 39) * 128f);
						}
						if (!_is_input_disabled(0))
						{
							if (iVar0 > 0)
							{
								iVar0 -= 22;
								if (iVar0 < 0)
								{
									iVar0 = false;
								}
							}
							if (iVar0 < 0)
							{
								iVar0 += 22;
								if (iVar0 > 0)
								{
									iVar0 = false;
								}
							}
							if (iVar2 > 0)
							{
								iVar2 -= 22;
								if (iVar2 < 0)
								{
									iVar2 = false;
								}
							}
							if (iVar2 < 0)
							{
								iVar2 += 22;
								if (iVar2 > 0)
								{
									iVar2 = false;
								}
							}
							if (iVar1 > 0)
							{
								iVar1 -= 22;
								if (iVar1 < 0)
								{
									iVar1 = false;
								}
							}
							if (iVar1 < 0)
							{
								iVar1 += 22;
								if (iVar1 > 0)
								{
									iVar1 = false;
								}
							}
						}
						fVar11 = *uParam0.f_42 / -75f * 0.5f;
						if (fVar11 > 0f)
						{
							fVar11++;
						}
						else
						{
							fVar11 = 1f;
						}
						if (_is_input_disabled(0))
						{
							*uParam0.f_56 = fVar3 * *uParam0.f_40 * *uParam0.f_36;
							*uParam0.f_57 = fVar4 * *uParam0.f_40 * *uParam0.f_36 * fVar11;
						}
						else
						{
							*uParam0.f_56 = to_float(iVar2) * *uParam0.f_40 * *uParam0.f_36 * timestep();
							*uParam0.f_57 = to_float(iVar1) * *uParam0.f_40 * *uParam0.f_36 * fVar11 * timestep();
						}
						*uParam0.f_57 = func_27(*uParam0.f_57, -1020002304, 1127481344);
						if (func_26(*uParam0.f_45, 0f, 0f, 0f, 0))
						{
							vVar12 = {get_cam_coord(*uParam0.f_32)};
							*uParam0.f_45 = sin(*uParam0.f_42.f_2) * 150f;
							*uParam0.f_45.f_1 = cos(*uParam0.f_42.f_2) * 150f;
							*uParam0.f_45.f_2 = vVar12.z;
						}
						if (*uParam0.f_4)
						{
							if (iVar2 != 0 && iVar1 != 0)
							{
								*uParam0.f_42 = {get_cam_rot(*uParam0.f_32, 2)};
							}
						}
						else
						{
							*uParam0.f_42 = {get_cam_rot(*uParam0.f_32, 2)};
						}
						if (!func_26(get_cam_coord(*uParam0.f_32), 0f, 0f, 0f, 0))
						{
							if (*uParam0.f_25 != 0f)
							{
								if (is_vehicle_driveable(*uParam0.f_8, 0))
								{
									fVar16 = get_entity_heading(*uParam0.f_8);
									fVar17 = fVar16 - *uParam0.f_42.f_2;
									while (absf(fVar17) >= 180f && iVar18 < 30)
									{
										if (fVar17 < 0f)
										{
											fVar17 += 360f;
										}
										else
										{
											fVar17 -= 360f;
										}
										iVar18++;
										if (iVar18 == 30)
										{
										}
									}
									if (absf(fVar17) > *uParam0.f_25)
									{
										iVar15 = true;
										if (fVar17 > 0f)
										{
											*uParam0.f_42.f_2 = fVar16 - *uParam0.f_25;
										}
										else
										{
											*uParam0.f_42.f_2 = fVar16 + *uParam0.f_25;
										}
									}
								}
							}
							if (*uParam0.f_56 != 0f || *uParam0.f_57 != 0f)
							{
								iLocal_62++;
								*uParam0.f_42 = {*uParam0.f_42 + Vector(-*uParam0.f_57, 0f, *uParam0.f_56)};
								if (*uParam0.f_42 < fVar5)
								{
									*uParam0.f_42 = fVar5;
								}
								if (*uParam0.f_42 > 6f)
								{
									*uParam0.f_42 = 6f;
								}
								if (iLocal_62 > 5)
								{
									if (!func_25(vLocal_59, *uParam0.f_42, 0.05f, 0))
									{
										vLocal_59 = {*uParam0.f_42};
										iLocal_63 = 0;
									}
									else
									{
										iLocal_63 = 1;
									}
									iLocal_62 = 0;
								}
								if (*uParam0.f_197 != -1)
								{
									if (iVar15)
									{
										fVar19 = 0f;
									}
									else
									{
										fVar19 += absf(*uParam0.f_57);
									}
									if (*uParam0.f_42 < 6f && *uParam0.f_42 > -75f)
									{
										fVar19 += absf(*uParam0.f_56);
									}
									if (fVar19 != 0f)
									{
										if (has_sound_finished(*uParam0.f_197) && !iLocal_63)
										{
											play_sound_frontend(*uParam0.f_197, "COP_HELI_CAM_TURN", 0, 1);
										}
										if (!has_sound_finished(*uParam0.f_197))
										{
											if (!iLocal_63)
											{
												set_variable_on_sound(*uParam0.f_197, "Ctrl", fVar19);
											}
											else
											{
												stop_sound(*uParam0.f_197);
												iLocal_62 = 6;
											}
										}
									}
								}
							}
							else if (*uParam0.f_197 != -1)
							{
								if (!has_sound_finished(*uParam0.f_197))
								{
									stop_sound(*uParam0.f_197);
									iLocal_63 = 1;
									iLocal_62 = 6;
								}
							}
							vVar20 = {*uParam0.f_159};
							if (*uParam0.f_4)
							{
								fVar23 = 150f;
							}
							else
							{
								fVar23 = get_distance_between_coords(vVar20, get_cam_coord(*uParam0.f_32), 1);
							}
							*uParam0.f_45 = cos(*uParam0.f_42) * fVar23 * sin(-*uParam0.f_42.f_2);
							*uParam0.f_45.f_1 = cos(*uParam0.f_42) * fVar23 * cos(-*uParam0.f_42.f_2);
							*uParam0.f_45.f_2 = sin(*uParam0.f_42) * fVar23;
							*uParam0.f_45 = {*uParam0.f_45 + get_cam_coord(*uParam0.f_32)};
							point_cam_at_coord(*uParam0.f_32, *uParam0.f_45);
						}
						if (!((iVar0 == 0 || *uParam0.f_40 == *uParam0.f_38) || *uParam0.f_40 == *uParam0.f_39))
						{
							if (*uParam0.f_196 != -1)
							{
								if (has_sound_finished(*uParam0.f_196))
								{
									play_sound_frontend(*uParam0.f_196, "COP_HELI_CAM_ZOOM", 0, 1);
								}
							}
							if (*uParam0.f_196 != -1)
							{
								if (!has_sound_finished(*uParam0.f_196))
								{
									set_variable_on_sound(*uParam0.f_196, "Ctrl", absf(to_float(iVar0) / 128f));
									if (iVar0 < 0)
									{
										set_variable_on_sound(*uParam0.f_196, "Dir", -1f);
									}
								}
							}
						}
						else if (*uParam0.f_196 != -1)
						{
							if (!has_sound_finished(*uParam0.f_196))
							{
								stop_sound(*uParam0.f_196);
							}
						}
						*uParam0.f_40 += to_float(iVar0) / *uParam0.f_37 * timestep();
						if (*uParam0.f_40 > *uParam0.f_38)
						{
							*uParam0.f_40 = *uParam0.f_38;
						}
						if (*uParam0.f_40 < *uParam0.f_39)
						{
							*uParam0.f_40 = *uParam0.f_39;
						}
						_0x487A82C650EB7799(1f);
						set_cam_fov(*uParam0.f_32, *uParam0.f_40);
						fVar24 = *uParam0.f_40 - 5f / 42f;
						_0xE2892E7E55D7073A(fVar24);
					}
				}
			}
		}
		else if (*uParam0.f_35 == 1 && *uParam0.f_7 == 1)
		{
			vVar25 = {*uParam0.f_159};
			fVar28 = get_distance_between_coords(vVar25, get_cam_coord(*uParam0.f_32), 1);
			*uParam0.f_45 = cos(*uParam0.f_42) * fVar28 * sin(-*uParam0.f_42.f_2);
			*uParam0.f_45.f_1 = cos(*uParam0.f_42) * fVar28 * cos(-*uParam0.f_42.f_2);
			*uParam0.f_45.f_2 = sin(*uParam0.f_42) * fVar28;
			*uParam0.f_45 = {*uParam0.f_45 + get_cam_coord(*uParam0.f_32)};
			point_cam_at_coord(*uParam0.f_32, *uParam0.f_45);
			set_cam_fov(*uParam0.f_32, *uParam0.f_40);
		}
	}
	else if (does_cam_exist(*uParam0.f_32))
	{
		if (is_cam_active(*uParam0.f_32))
		{
			set_cam_active(*uParam0.f_32, false);
			render_script_cams(false, false, 3000, 1, 0, 0);
		}
	}
}

bool func_25(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

int func_26(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_27(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 += 360f;
	}
	while (fParam0 > fParam2)
	{
		fParam0 -= 360f;
	}
	return fParam0;
}

int func_28(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_29(auto uParam0, int iParam1)
{
	if (does_cam_exist(*uParam0.f_32))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_8))
	{
		*uParam0.f_9 = func_66(*uParam0.f_8);
	}
	if (*uParam0 == 0)
	{
		if (func_67(uParam0, iParam1))
		{
			*uParam0 = 1;
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			func_44(uParam0);
			func_24(uParam0);
			func_43(uParam0);
		}
		func_42(uParam0);
		func_31(uParam0, iParam1);
		func_30();
	}
}

void func_30()
{
	Global_88895 = 1;
}

void func_31(auto uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	float fVar15;
	Vector3 fVar16;
	float fVar17;
	float fVar18;
	auto uVar19;
	int iVar20;
	float fVar21;
	Vector3 vVar22;
	int iVar25;
	Vector3 vVar26;
	int iVar29;
	Vector3 vVar30;
	Vector3 vVar33;
	Vector3 vVar36;
	Vector3 fVar39;
	Vector3 vVar40;
	Vector3 fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	Vector3 fVar47;
	
	if (*uParam0.f_50 == 1)
	{
		fVar0 = *uParam0.f_42 - *uParam0.f_31 / *uParam0.f_30 - *uParam0.f_31;
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		fVar1 = *uParam0.f_26 + *uParam0.f_28 - *uParam0.f_26 * fVar0;
		fVar2 = *uParam0.f_27 + *uParam0.f_29 - *uParam0.f_27 * fVar0;
		_0xBED8CA5FF5E04113(1.7f, 4.7f, fVar1, fVar2);
		fVar3 = get_entity_speed(*uParam0.f_8);
		if (fVar3 > 30f)
		{
			_0x472397322E92A856();
		}
		_0x03F1A106BDA7DD3E();
		if (!has_streamed_texture_dict_loaded("helicopterhud") || (iParam1 == 0 && !has_scaleform_movie_loaded(iLocal_64)))
		{
			*uParam0.f_86 = 0;
		}
		else
		{
			*uParam0.f_80 = 1f - 2f * *uParam0.f_54;
			_set_2d_layer(1);
			if (iParam1 == 0)
			{
				_set_2d_layer(0);
				draw_scaleform_movie_fullscreen(iLocal_64, 255, 255, 255, false, 1);
				hide_hud_component_this_frame(14);
				if (!*uParam0.f_86)
				{
					if (is_vehicle_driveable(*uParam0.f_8, 0))
					{
						if (ENTITY::GET_ENTITY_MODEL(*uParam0.f_8) == joaat("polmav") && get_vehicle_livery(*uParam0.f_8) == 0)
						{
							_push_scaleform_movie_function(iLocal_64, "SET_CAM_LOGO");
							_push_scaleform_movie_function_parameter_int(true);
							_pop_scaleform_movie_function_void();
						}
						else
						{
							_push_scaleform_movie_function(iLocal_64, "SET_CAM_LOGO");
							_push_scaleform_movie_function_parameter_int(false);
							_pop_scaleform_movie_function_void();
						}
					}
					else
					{
						_push_scaleform_movie_function(iLocal_64, "SET_CAM_LOGO");
						_push_scaleform_movie_function_parameter_int(false);
						_pop_scaleform_movie_function_void();
					}
				}
			}
			*uParam0.f_86 = 1;
		}
		if (*uParam0.f_86 == 1)
		{
			if (iParam1 == 0)
			{
			}
			fVar18 = *uParam0.f_157;
			iVar20 = -1;
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_9, 0))
			{
				vVar22 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_9, 1)};
			}
			if (*uParam0.f_87 == 0)
			{
				iVar4 = 0;
				*uParam0.f_53 = 0;
				iVar4 = 0;
				while (iVar4 < *uParam0.f_175)
				{
					if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, 9))
					{
						if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_175[iVar4 /*10*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_175[iVar4 /*10*/], 0))
							{
								if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, false))
								{
									switch (*(uParam0.f_175[iVar4 /*10*/]).f_4)
									{
										case 2:
											func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_65, *uParam0.f_65.f_1, *uParam0.f_65.f_2);
											break;
										
										case 3:
											func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_68, *uParam0.f_68.f_1, *uParam0.f_68.f_2);
											break;
										
										case 0:
											func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_62, *uParam0.f_62.f_1, *uParam0.f_62.f_2);
											break;
										
										case 1:
											func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_68, *uParam0.f_68.f_1, *uParam0.f_68.f_2);
											break;
									}
								}
								else if (get_clock_hours() < 19 && get_clock_hours() > 7)
								{
									func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_62, *uParam0.f_62.f_1, *uParam0.f_62.f_2);
								}
								else
								{
									func_40(uParam0, get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0), *uParam0.f_62, *uParam0.f_62.f_1, *uParam0.f_62.f_2);
								}
							}
						}
					}
					iVar4++;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_9, 0))
				{
					get_ground_z_for_3d_coord(vVar22, &uVar19, 0);
					if (*uParam0.f_52 == 0 && *uParam0.f_48 > 0)
					{
						iVar4 = 0;
						while (iVar4 <= *uParam0.f_48 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_175[iVar4 /*10*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_175[iVar4 /*10*/], 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								{
									vVar12 = {get_world_position_of_entity_bone(*uParam0.f_175[iVar4 /*10*/], 0)};
									if (is_entity_on_screen(*uParam0.f_175[iVar4 /*10*/]))
									{
										fVar8 = 0f;
										fVar9 = 0f;
										fVar16 = get_distance_between_coords(vVar12, ENTITY::GET_ENTITY_COORDS(*uParam0.f_9, 1), 1);
										fVar21 = func_39(uParam0, *uParam0.f_175[iVar4 /*10*/], *uParam0.f_9);
										fVar17 = *uParam0.f_74 * fVar21;
										if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, 2) || iVar4 == *uParam0.f_92)
										{
											if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, false))
											{
												if (timera() - *(uParam0.f_175[iVar4 /*10*/]).f_1 < 500)
												{
													func_38(uParam0, vVar12, fVar21, *(uParam0.f_175[iVar4 /*10*/]).f_4, -1, -1, -1);
													*(uParam0.f_175[iVar4 /*10*/].f_6) = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_175[iVar4 /*10*/], 1)};
												}
												else
												{
													func_37(uParam0, *(uParam0.f_175[iVar4 /*10*/]).f_4, &iVar5, &iVar6, &iVar7);
													set_draw_origin(*(uParam0.f_175[iVar4 /*10*/].f_6), 0);
													draw_sprite("helicopterhud", "TargetLost", fVar8, fVar9, fVar17, fVar17 * 2f, 0f, iVar5, iVar6, iVar7, 200, 1);
													clear_draw_origin();
													func_36(iVar5, iVar6, iVar7, 0.5f, 1);
													*uParam0.f_53 = 1;
												}
											}
											else
											{
												func_37(uParam0, 3, &iVar5, &iVar6, &iVar7);
												if (iVar4 == *uParam0.f_92)
												{
													func_38(uParam0, vVar12, fVar21, *(uParam0.f_175[iVar4 /*10*/]).f_4, *uParam0.f_62, *uParam0.f_62.f_1, *uParam0.f_62.f_2);
												}
												else
												{
													func_38(uParam0, vVar12, fVar21, *(uParam0.f_175[iVar4 /*10*/]).f_4, *uParam0.f_62, *uParam0.f_62.f_1, *uParam0.f_62.f_2);
												}
											}
											if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, 7))
											{
												func_38(uParam0, vVar12, fVar21, *(uParam0.f_175[iVar4 /*10*/]).f_4, 227, 24, 234);
											}
										}
										iVar25 = 0;
										vVar26 = {0f, 0f, 0f};
										iVar29 = 0;
										switch (_get_raycast_result(*(uParam0.f_175[iVar4 /*10*/]).f_9, &iVar25, &vVar26, &vVar26, &iVar29))
										{
											case 0:
												vVar30 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_8, 1)};
												vVar33 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_175[iVar4 /*10*/], 1) + Vector(0.5f, 0f, 0f)};
												*(uParam0.f_175[iVar4 /*10*/]).f_9 = _0x7EE9F5D83DD4F90E(vVar30, vVar33, 1, false, 7);
												break;
											
											case 2:
												if (iVar25 == 0)
												{
													*(uParam0.f_175[iVar4 /*10*/]).f_1 = timera();
												}
												break;
										}
										if (timera() - *(uParam0.f_175[iVar4 /*10*/]).f_1 < 1500 || GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[iVar4 /*10*/]).f_2, false))
										{
											if (*uParam0.f_78 / *uParam0.f_40 * fVar16 > 1f)
											{
												_world3d_to_screen2d(vVar12, &fVar8, &fVar9);
												fVar15 = sqrt(fVar8 - 0.5f * fVar8 - 0.5f + fVar9 - 0.5f * fVar9 - 0.5f);
												if (fVar15 < fVar18)
												{
													fVar10 = fVar8;
													fVar11 = fVar9;
													fVar10 = fVar10;
													fVar11 = fVar11;
													fVar18 = fVar15;
													iVar20 = iVar4;
												}
											}
										}
										clear_draw_origin();
									}
								}
							}
							iVar4++;
						}
					}
					*uParam0.f_76++;
					if (*uParam0.f_76 > *uParam0.f_48 - 1)
					{
						*uParam0.f_76 = 0;
					}
				}
				if (*uParam0.f_92 != iVar20)
				{
					if (*uParam0.f_198 != -1)
					{
						if (has_sound_finished(*uParam0.f_198))
						{
							play_sound_frontend(*uParam0.f_198, "COP_HELI_CAM_BLEEP", 0, 1);
						}
					}
				}
				*uParam0.f_92 = iVar20;
				*uParam0.f_49 = 0;
				if (*uParam0.f_92 != -1 && *uParam0.f_2 == 1)
				{
					if (!GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_2, false))
					{
						if (is_control_pressed(2, 229))
						{
							if (*uParam0.f_77 / *uParam0.f_40 * fVar16 > 0.5f)
							{
								if (*uParam0.f_195 == 1)
								{
									if (*uParam0.f_203 != -1)
									{
										if (!has_sound_finished(*uParam0.f_203))
										{
											stop_sound(*uParam0.f_203);
										}
									}
									*uParam0.f_195 = 0;
								}
								*uParam0.f_49 = 1;
								if (*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_3 < 1f)
								{
									if (*uParam0.f_200 != -1)
									{
										if (has_sound_finished(*uParam0.f_200))
										{
											play_sound_frontend(*uParam0.f_200, "COP_HELI_CAM_SCAN_PED_LOOP", 0, 1);
										}
									}
									fVar18 = absf(1f - fVar18);
									*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_3 += fVar18 * timestep() / 3.5f;
									fVar21 = func_39(uParam0, *uParam0.f_175[*uParam0.f_92 /*10*/], *uParam0.f_9);
									fVar17 = *uParam0.f_74 * fVar21;
									func_36(255, 0, 0, 0.5f, 1);
									if (timera() % 600 < 300)
									{
										func_35(0.5f, 0.68f, "scan", 1);
									}
									fVar21 = func_39(uParam0, *uParam0.f_175[*uParam0.f_92 /*10*/], *uParam0.f_9);
									fVar17 = 0.03f;
									set_draw_origin(get_world_position_of_entity_bone(*uParam0.f_175[*uParam0.f_92 /*10*/], 0), 0);
									func_33(uParam0, *uParam0.f_175[*uParam0.f_92 /*10*/], *(uParam0.f_175[*uParam0.f_92 /*10*/]).f_3, fVar21);
									clear_draw_origin();
								}
								else
								{
									if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_2, 3))
									{
										GAMEPLAY::SET_BIT(uParam0.f_175[*uParam0.f_92 /*10*/].f_2, 2);
									}
									GAMEPLAY::SET_BIT(uParam0.f_175[*uParam0.f_92 /*10*/].f_2, false);
									*uParam0.f_55 = *uParam0.f_175[*uParam0.f_92 /*10*/];
									if (*uParam0.f_200 != -1)
									{
										if (!has_sound_finished(*uParam0.f_200))
										{
											stop_sound(*uParam0.f_200);
										}
									}
									if (*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_4 == 2)
									{
										if (*uParam0.f_201 != -1)
										{
											if (has_sound_finished(*uParam0.f_201))
											{
												play_sound_frontend(*uParam0.f_201, "COP_HELI_CAM_SCAN_PED_SUCCESS", 0, 1);
											}
										}
									}
									else if (*uParam0.f_202 != -1)
									{
										if (has_sound_finished(*uParam0.f_202))
										{
											play_sound_frontend(*uParam0.f_202, "COP_HELI_CAM_SCAN_PED_FAILURE", 0, 1);
										}
									}
								}
							}
							else
							{
								fVar21 = func_39(uParam0, *uParam0.f_175[*uParam0.f_92 /*10*/], *uParam0.f_9);
								fVar17 = *uParam0.f_74 * fVar21;
								func_36(255, 0, 0, 0.5f, 1);
								func_35(0.5f, 0.68f, "HUD_RNG", 0);
								if (!*uParam0.f_195)
								{
									if (*uParam0.f_203 != -1)
									{
										if (has_sound_finished(*uParam0.f_203))
										{
											play_sound_frontend(*uParam0.f_203, "COP_HELI_CAM_BLEEP_TOO_FAR", 0, 1);
											*uParam0.f_195 = 1;
										}
									}
								}
							}
						}
						else if (*uParam0.f_195 == 1)
						{
							if (*uParam0.f_203 != -1)
							{
								if (!has_sound_finished(*uParam0.f_203))
								{
									stop_sound(*uParam0.f_203);
								}
							}
							*uParam0.f_195 = 0;
						}
					}
					else if (is_control_pressed(2, 229) || (GAMEPLAY::GET_GAME_TIMER() < *uParam0.f_94 && *uParam0.f_93 == *uParam0.f_92))
					{
						if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_175[*uParam0.f_92 /*10*/], 0))
						{
							if (timera() - *(uParam0.f_175[*uParam0.f_92 /*10*/]).f_1 < 500)
							{
								if (!*uParam0.f_53)
								{
									*uParam0.f_93 = *uParam0.f_92;
									*uParam0.f_94 = GAMEPLAY::GET_GAME_TIMER() + 3000;
									set_draw_origin(get_world_position_of_entity_bone(*uParam0.f_175[*uParam0.f_92 /*10*/], 0), 0);
									fVar21 = func_39(uParam0, *uParam0.f_175[*uParam0.f_92 /*10*/], *uParam0.f_9);
									fVar8 = 0f;
									fVar9 = 0f;
									func_37(uParam0, *(uParam0.f_175[*uParam0.f_92 /*10*/]).f_4, &iVar5, &iVar6, &iVar7);
									clear_draw_origin();
									if (*(uParam0.f_175[*uParam0.f_92 /*10*/]).f_4 == 2)
									{
										func_32(uParam0, *uParam0.f_92, fVar8 - fVar17 / 2f + fVar17 * 0.04f, fVar9 + fVar17 + 0.005f, iVar5, iVar6, iVar7, fVar21, 1);
									}
									else
									{
										func_32(uParam0, *uParam0.f_92, fVar8 - fVar17 / 2f + fVar17 * 0.04f, fVar9 + fVar17 + 0.005f, iVar5, iVar6, iVar7, fVar21, 0);
									}
								}
							}
						}
					}
				}
				if (*uParam0.f_49 == 0)
				{
					if (*uParam0.f_200 != -1)
					{
						if (!has_sound_finished(*uParam0.f_200))
						{
							stop_sound(*uParam0.f_200);
						}
					}
				}
			}
			if (*uParam0.f_162 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= 0)
				{
					if (*(uParam0.f_163[iVar4 /*11*/]).f_5 != -1)
					{
						if (_world3d_to_screen2d(*(uParam0.f_163[iVar4 /*11*/]), &fVar8, &fVar9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_8) && is_vehicle_driveable(*uParam0.f_8, 0))
							{
								vVar36 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_8, 1)};
							}
							else if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_9) && !ENTITY::IS_ENTITY_DEAD(*uParam0.f_9, 0))
							{
								vVar36 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_9, 1)};
							}
							set_draw_origin(*(uParam0.f_163[iVar4 /*11*/]), 0);
							fVar8 = 0f;
							fVar9 = 0f;
							if (*(uParam0.f_163[iVar4 /*11*/]).f_6 == 1)
							{
								fVar16 = get_distance_between_coords(*(uParam0.f_163[iVar4 /*11*/]), vVar36, 1);
								fVar21 = *uParam0.f_79 / *uParam0.f_40 * fVar16;
								if (fVar21 < 0.4f)
								{
									fVar21 = 0.4f;
								}
								if (fVar21 > 2f)
								{
									fVar21 = 2f;
								}
								func_38(uParam0, *(uParam0.f_163[iVar4 /*11*/]), fVar21, 0, -1, -1, -1);
								set_draw_origin(*(uParam0.f_163[iVar4 /*11*/]), 0);
							}
							else
							{
								draw_sprite("helicopterhud", "hud_dest", fVar8, fVar9, 0.042f, 0.042f, 0f, *(uParam0.f_163[iVar4 /*11*/]).f_8, *(uParam0.f_163[iVar4 /*11*/]).f_9, *(uParam0.f_163[iVar4 /*11*/]).f_10, 255, 1);
							}
							clear_draw_origin();
						}
						else if (*(uParam0.f_163[iVar4 /*11*/]).f_6 == 1)
						{
							func_40(uParam0, *(uParam0.f_163[iVar4 /*11*/]), *(uParam0.f_163[iVar4 /*11*/]).f_8, *(uParam0.f_163[iVar4 /*11*/]).f_9, *(uParam0.f_163[iVar4 /*11*/]).f_10);
						}
						else
						{
							func_40(uParam0, *(uParam0.f_163[iVar4 /*11*/]), *(uParam0.f_163[iVar4 /*11*/]).f_8, *(uParam0.f_163[iVar4 /*11*/]).f_9, *(uParam0.f_163[iVar4 /*11*/]).f_10);
						}
					}
					iVar4++;
				}
			}
			if (iParam1 == 0)
			{
				fVar39 = *uParam0.f_42.f_2;
				vVar40 = {0f, 0f, 0f};
				if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*uParam0.f_9, 0))
					{
						vVar40 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_9, 1)};
						fVar47 = get_entity_heading(*uParam0.f_9);
					}
				}
				while (fVar39 < 0f)
				{
					fVar39 += 360f;
				}
				while (fVar39 > 360f)
				{
					fVar39 -= 360f;
				}
				while (fVar47 < 0f)
				{
					fVar47 += 360f;
				}
				while (fVar47 > 360f)
				{
					fVar47 -= 360f;
				}
				fVar46 = fVar39;
				fVar44 = fVar47 - *uParam0.f_25;
				fVar45 = fVar47 + *uParam0.f_25;
				if (fVar46 < fVar44 && fVar46 + 360f <= fVar45)
				{
					fVar46 += 360f;
				}
				if (fVar46 > fVar45 && fVar46 - 360f >= fVar44)
				{
					fVar46 -= 360f;
				}
				fVar43 = fVar46 - fVar44 / fVar45 - fVar44;
				if (fVar43 == 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 == -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 < 0f && fVar43 >= -0.5f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 < 0f && fVar43 > -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 > 1.5f && fVar43 < 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 > 2f || fVar43 < -1f)
				{
					fVar43 = 0.5f;
				}
				_push_scaleform_movie_function(iLocal_64, "SET_ALT_FOV_HEADING");
				_push_scaleform_movie_function_parameter_float(vVar40.z);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					_push_scaleform_movie_function_parameter_float(fVar43);
				}
				else
				{
					_push_scaleform_movie_function_parameter_float(*uParam0.f_40 - *uParam0.f_39 / *uParam0.f_38 - *uParam0.f_39);
				}
				_push_scaleform_movie_function_parameter_float(fVar39);
				_pop_scaleform_movie_function_void();
				hide_hud_component_this_frame(3);
				if (!*uParam0.f_51)
				{
					hide_hud_and_radar_this_frame();
				}
			}
		}
	}
}

bool func_32(auto uParam0, auto uParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	func_36(iParam4, iParam5, iParam6, 0.43f, iParam8);
	if (fParam7 < 0.7f)
	{
		fParam7 = 0.7f;
	}
	if (fParam7 > 1.5f)
	{
		fParam7 = 1.5f;
	}
	if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[uParam1 /*10*/]).f_2, 8))
	{
	}
	iVar4 = 24;
	while (iVar4 <= 31)
	{
		if (GAMEPLAY::IS_BIT_SET(*(uParam0.f_175[uParam1 /*10*/]).f_5, iVar4))
		{
			StringCopy(&Var0, "crimes_", 16);
			StringIntConCat(&Var0, iVar4 - 23, 16);
			func_36(iParam4, iParam5, iParam6, 0.43f, iParam8);
			func_35(0.5f, 0.68f + 0.037f * IntToFloat(iVar5 + 1), &Var0, 1);
			iVar5++;
		}
		iVar4++;
	}
	if (iVar5 == 0)
	{
		func_36(iParam4, iParam5, iParam6, 0.43f, iParam8);
		func_35(fParam2, fParam3 + *uParam0.f_190 * fParam7, "unknown", 1);
	}
	if (*(uParam0.f_175[uParam1 /*10*/]).f_4 == 0)
	{
		func_36(iParam4, iParam5, iParam6, 0.43f, iParam8);
		func_35(fParam2, fParam3 + *uParam0.f_190 * fParam7, "HUD_ID2", 1);
	}
	return true;
}

void func_33(auto uParam0, int iParam1, float fParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	float fVar15;
	float fVar16;
	
	vVar12 = {0f, 0f, 0f};
	if (fParam2 < 0.5f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 14201, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 63931, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 52301, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 36864, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.15f && fParam2 < 0.7f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 36864, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 51826, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 63931, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 58271, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.3f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 11816, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 39317, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.3f;
		fVar16 = 0.5f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 2f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 31086, vVar12)};
			vVar3 = {vVar0 + vVar0 - get_ped_bone_coords(iParam1, 39317, vVar12) * Vector(3f, 3f, 3f)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1.3f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 40269, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 28252, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 45509, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 61163, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.75f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 28252, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 57005, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.75f;
		fVar16 = 0.25f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 61163, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 18905, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.75f;
		fVar16 = 0.3f;
		func_34(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	clear_draw_origin();
}

void func_34(auto uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar2 = fParam3 / 10f;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		fVar1 = fParam1 - fParam2 + IntToFloat(iVar0) * fVar2;
		if (fVar1 > 0f && fVar1 < 0.3f)
		{
			fVar1 = sin(fVar1 * 600f);
			draw_sprite("helicopterhud", "hud_line", fParam4 * IntToFloat(iVar0), fParam5 * IntToFloat(iVar0), fParam6 * fParam11 * 0.01f, fParam6 * fParam11 * 0.01f, get_angle_between_2d_vectors(0f, 1f, fParam7 - fParam8, fParam9 - fParam10), *uParam0.f_71, *uParam0.f_71.f_1, *uParam0.f_71.f_2, floor(fVar1 * 32f), 1);
		}
		iVar0++;
	}
}

void func_35(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_36(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	set_text_scale(fParam3, fParam3);
	set_text_colour(iParam0, iParam1, iParam2, 150);
	if (iParam4)
	{
		set_text_dropshadow(5, 0, 0, 0, 255);
	}
	set_text_centre(1);
	set_text_font(0);
}

bool func_37(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			*iParam2 = *uParam0.f_62;
			*iParam3 = *uParam0.f_62.f_1;
			*iParam4 = *uParam0.f_62.f_2;
			return true;
			break;
		
		case 1:
			*iParam2 = 255;
			*iParam3 = 255;
			*iParam4 = 0;
			return true;
			break;
		
		case 2:
			*iParam2 = *uParam0.f_65;
			*iParam3 = *uParam0.f_65.f_1;
			*iParam4 = *uParam0.f_65.f_2;
			return true;
			break;
		
		case 3:
			*iParam2 = *uParam0.f_68;
			*iParam3 = *uParam0.f_68.f_1;
			*iParam4 = *uParam0.f_68.f_2;
			return true;
			break;
	}
	return false;
}

void func_38(auto uParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_37(uParam0, iParam5, &iVar0, &iVar1, &iVar2);
	set_draw_origin(vParam1, 0);
	if (iParam6 != -1)
	{
		iVar0 = iParam6;
		iVar1 = iParam7;
		iVar2 = iParam8;
	}
	fParam4 *= 0.03f;
	draw_sprite("helicopterhud", "hud_corner", -fParam4 * 0.5f, -fParam4, 0.013f, 0.013f, 0f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", fParam4 * 0.5f, -fParam4, 0.013f, 0.013f, 90f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", -fParam4 * 0.5f, fParam4, 0.013f, 0.013f, 270f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", fParam4 * 0.5f, fParam4, 0.013f, 0.013f, 180f, iVar0, iVar1, iVar2, 200, 1);
	clear_draw_origin();
}

float func_39(auto uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 fVar3;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = {get_world_position_of_entity_bone(iParam1, 0)};
		if (!ENTITY::IS_ENTITY_DEAD(iParam2, 0))
		{
			fVar3 = get_distance_between_coords(vVar0, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1);
			fVar4 = *uParam0.f_79 / *uParam0.f_40 * fVar3;
			if (fVar4 < 0.4f)
			{
				fVar4 = 0.4f;
			}
			if (fVar4 > 2f)
			{
				fVar4 = 2f;
			}
			return fVar4;
		}
	}
	return 0f;
}

void func_40(auto uParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4)
{
	auto uVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 fVar7;
	float fVar8;
	Vector3 fVar9;
	float fVar10;
	Vector3 fVar11;
	float fVar12;
	float fVar13;
	
	if (does_cam_exist(get_rendering_cam()))
	{
		if (!_world3d_to_screen2d(vParam1, &uVar0, &uVar0))
		{
			vVar1 = {get_cam_coord(get_rendering_cam())};
			vVar4 = {get_cam_rot(get_rendering_cam(), 2)};
			fVar7 = get_distance_between_coords(vVar1.x, vVar1.y, 0f, vParam1.x, vParam1.y, 0f, 1);
			fVar8 = vParam1.z - vVar1.z;
			if (fVar7 > 0f)
			{
				fVar9 = atan(fVar8 / fVar7);
			}
			else
			{
				fVar9 = 0f;
			}
			fVar10 = func_41(vVar1, vParam1, 0);
			fVar11 = atan2(cos(vVar4.x) * sin(fVar9) - sin(vVar4.x) * cos(fVar9) * cos(fVar10 * -1f - vVar4.z), sin(fVar10 * -1f - vVar4.z) * cos(fVar9));
			if (*uParam0.f_10 > 0f)
			{
			}
			fVar12 = 0.5f - cos(fVar11) * 0.29f;
			fVar13 = 0.5f - sin(fVar11) * 0.29f;
			draw_sprite("helicopterhud", "hudArrow", fVar12, fVar13, 0.02f, 0.04f, fVar11 - 90f, iParam4, iParam5, iParam6, 255, 1);
			set_text_centre(1);
		}
	}
}

float func_41(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3, int iParam4)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	
	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1f;
		if (fVar0 < 0f)
		{
			fVar0 += 360f;
		}
	}
	return fVar0;
}

void func_42(auto uParam0)
{
	if (*uParam0.f_194 == 0)
	{
		if (request_ambient_audio_bank("SCRIPT\POLICE_CHOPPER_CAM", 0))
		{
			*uParam0.f_194 = 1;
			*uParam0.f_196 = AUDIO::GET_SOUND_ID();
			*uParam0.f_197 = AUDIO::GET_SOUND_ID();
			*uParam0.f_199 = AUDIO::GET_SOUND_ID();
			*uParam0.f_198 = AUDIO::GET_SOUND_ID();
			*uParam0.f_200 = AUDIO::GET_SOUND_ID();
			*uParam0.f_201 = AUDIO::GET_SOUND_ID();
			*uParam0.f_202 = AUDIO::GET_SOUND_ID();
			*uParam0.f_203 = AUDIO::GET_SOUND_ID();
		}
	}
}

void func_43(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_163)
	{
		if (*(uParam0.f_163[iVar0 /*11*/]).f_5 != -1)
		{
			if (*(uParam0.f_163[iVar0 /*11*/]).f_3 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*(uParam0.f_163[iVar0 /*11*/]).f_3, 0))
				{
					*(uParam0.f_163[iVar0 /*11*/]) = {ENTITY::GET_ENTITY_COORDS(*(uParam0.f_163[iVar0 /*11*/]).f_3, 1)};
				}
			}
			if (*(uParam0.f_163[iVar0 /*11*/]).f_4 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*(uParam0.f_163[iVar0 /*11*/]).f_4, 0))
				{
					*(uParam0.f_163[iVar0 /*11*/]) = {get_world_position_of_entity_bone(*(uParam0.f_163[iVar0 /*11*/]).f_4, 0)};
				}
			}
		}
		iVar0++;
	}
}

void func_44(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	Vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	
	if (((does_cam_exist(*uParam0.f_32) && *uParam0.f_7 == 0) && *uParam0.f_35) && !*uParam0.f_4)
	{
		iVar12 = 2;
		iVar12 = iVar12;
		vVar0 = {get_cam_coord(*uParam0.f_32)};
		vVar3 = {get_cam_rot(*uParam0.f_32, 2)};
		fVar17 = 0f;
		iVar18 = 0;
		iVar19 = 0;
		iVar19 = iVar19;
		fVar20 = vVar0.z;
		fVar20 = fVar20;
		if (iVar18 == 0)
		{
			fVar21 = 0f;
			fVar22 = cos(vVar3.x) * 50f;
			while (iVar12 < 21)
			{
				iVar12++;
				fVar11 = fVar22 * IntToFloat(iVar12);
				fVar9 = sin(vVar3.z) * fVar11 * -1f;
				fVar10 = cos(vVar3.z) * fVar11;
				fVar21 = _0x8ABE8608576D9CE3(vVar0.x + fVar9 - 3f, vVar0.y + fVar10 - 3f, vVar0.x + fVar9 + 3f, vVar0.y + fVar10 + 3f);
				fVar21 -= 20f;
				fVar20 = vVar0.z + sin(vVar3.x) * 50f * IntToFloat(iVar12);
				if (fVar21 > fVar20)
				{
					if (iVar18 == 0)
					{
						iVar18 = 1;
						fVar17 = fVar21;
						iVar12 = 21;
					}
				}
			}
		}
		if (iVar18 == 0)
		{
			if (get_ground_z_for_3d_coord(vVar0, &fVar24, 0))
			{
				fVar23 = vVar0.z - fVar24;
				if (fVar23 < 150f)
				{
					fVar23 = 150f;
				}
			}
			else
			{
				fVar23 = 150f;
			}
			if (vVar3.x < 0f)
			{
				fVar11 = absf(fVar23 / tan(vVar3.x));
				fVar17 = vVar0.z - fVar23;
			}
			else
			{
				fVar11 = 1000f;
				fVar17 = vVar0.z + fVar11 * tan(vVar3.x);
			}
		}
		fVar9 = sin(vVar3.z) * fVar11 * -1f;
		fVar10 = cos(vVar3.z) * fVar11;
		vVar6 = {fVar9 + vVar0.x, fVar10 + vVar0.y, fVar17};
		iVar13 = 0;
		while (iVar13 < *uParam0.f_175)
		{
			if (!PED::IS_PED_INJURED(*uParam0.f_175[iVar13 /*10*/]))
			{
				if (func_45(ENTITY::GET_ENTITY_COORDS(*uParam0.f_175[iVar13 /*10*/], 1), 0.4f, 0.4f, 0.6f, 0.6f))
				{
					iVar18 = 1;
					iVar19 = 1;
					vVar6 = {ENTITY::GET_ENTITY_COORDS(*uParam0.f_175[iVar13 /*10*/], 1)};
					fVar17 = vVar14.z;
				}
			}
			iVar13++;
		}
		*uParam0.f_159 = {vVar6};
	}
}

bool func_45(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	float fVar1;
	
	_world3d_to_screen2d(vParam0, &fVar0, &fVar1);
	if (fVar0 >= fParam3 && fVar0 <= fParam5)
	{
		if (fVar1 >= fParam4 && fVar1 <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_46()
{
	if (iLocal_282)
	{
		if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_291, 0))
		{
			switch (iLocal_290)
			{
				case 0:
					if (func_81(&Local_65))
					{
						if (start_audio_scene("MP_HELI_CAM_FILTERING"))
						{
							iLocal_290++;
						}
					}
					break;
				
				case 1:
					set_audio_scene_variable("MP_HELI_CAM_FILTERING", "HeliFiltering", get_entity_speed(iLocal_291));
					break;
			}
		}
		else if (iLocal_290 != 99 && iLocal_290 > 0)
		{
			stop_audio_scene("MP_HELI_CAM_FILTERING");
			iLocal_290 = 99;
		}
	}
}

void func_47()
{
	switch (iLocal_289)
	{
		case 0:
			if (!is_help_message_being_displayed())
			{
				if (iLocal_276)
				{
					if (iLocal_272 == joaat("buzzard") || iLocal_272 == joaat("savage"))
					{
						func_8("HUNTGUN_2", -1);
					}
					else if (iLocal_272 == joaat("valkyrie"))
					{
						func_8("HUNTGUN_2c", -1);
					}
					else
					{
						func_8("HUNTGUN_2b", -1);
					}
				}
				else if (iLocal_272 == joaat("buzzard") || iLocal_272 == joaat("savage"))
				{
					func_8("HUNTGUN_4", -1);
				}
				else if (iLocal_272 == joaat("valkyrie"))
				{
					func_8("HUNTGUN_4c", -1);
				}
				else
				{
					func_8("HUNTGUN_4b", -1);
				}
				iLocal_289++;
			}
			break;
		
		case 1:
			if (((func_50("HUNTGUN_2") || func_50("HUNTGUN_4")) || func_50("HUNTGUN_2b")) || func_50("HUNTGUN_4b"))
			{
				iLocal_289++;
			}
			break;
		
		case 2:
			if (!is_help_message_being_displayed())
			{
				if (iLocal_276)
				{
					if (func_49(player_id(), 19))
					{
						if (!func_48())
						{
							if (_is_input_disabled(0))
							{
								func_8("HUNTGUN_6_KM", -1);
							}
							else
							{
								func_8("HUNTGUN_6", -1);
							}
						}
					}
				}
				iLocal_289++;
			}
			break;
	}
}

int func_48()
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_1641, 11);
}

int func_49(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_50(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_51()
{
	if (func_50("HUNTGUN_1"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_1b"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_1c"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_3"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_3b"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_3c"))
	{
		clear_help(1);
	}
}

bool func_52()
{
	if (Global_2444579)
	{
		return false;
	}
	if (iLocal_272 == joaat("buzzard"))
	{
		return true;
	}
	if (iLocal_272 == joaat("savage"))
	{
		return true;
	}
	return false;
}

void func_53(auto uParam0, int iParam1)
{
	*uParam0.f_51 = iParam1;
}

void func_54()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_2(0))
		{
			func_55(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
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
		if (func_2(0))
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
	if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_9, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_65.f_9) != joaat("valkyrie") && ENTITY::GET_ENTITY_MODEL(Local_65.f_9) != joaat("savage"))
			{
				set_entity_locally_invisible(Local_65.f_9);
				if (!iLocal_278)
				{
					set_player_invisible_locally(iLocal_294, 0);
				}
				if (!iLocal_280)
				{
					set_player_invisible_locally(iLocal_295, 0);
				}
			}
		}
	}
}

void func_59()
{
	Vector3 vVar0;
	float fVar3;
	
	if (iLocal_279)
	{
		if (!iLocal_280)
		{
			vVar0 = {_0x26903D9CD1175F2C(iLocal_295, 2)};
			fVar3 = _0x5F35F6732C3FBBA0(iLocal_295);
			switch (iLocal_303)
			{
				case 0:
					if (does_cam_exist(Local_65.f_32))
					{
						Local_65.f_42 = {vVar0};
						Local_65.f_40 = fVar3;
						set_cam_rot(Local_65.f_32, Local_65.f_42, 2);
						set_cam_fov(Local_65.f_32, Local_65.f_40);
						iLocal_303++;
					}
					break;
				
				case 1:
					vVar0 = {func_61(vVar0, Local_65.f_42)};
					fVar3 = func_60(fVar3, Local_65.f_40);
					if (does_cam_exist(Local_65.f_32))
					{
						Local_65.f_42 = {vVar0};
						Local_65.f_40 = fVar3;
						set_cam_rot(Local_65.f_32, Local_65.f_42, 2);
						set_cam_fov(Local_65.f_32, Local_65.f_40);
					}
					break;
				}
			}
	}
}

float func_60(float fParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = fParam1 + fParam0 - fParam1 * vLocal_285.x;
	if (absf(fVar0 - fParam0) < fLocal_288)
	{
		fVar0 = fParam0;
	}
	return fVar0;
}

Vector3 func_61(Vector3 vParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	fVar3 = vParam0.z - vParam3.z;
	if (absf(fVar3) > 180f)
	{
		if (fVar3 > 0f)
		{
			fVar3 -= 360f;
		}
		else
		{
			fVar3 += 360f;
		}
		vParam3.z = vParam0.z - fVar3;
	}
	vVar0 = {vParam3 + vParam0 - vParam3 * vLocal_285};
	if (absf(vVar0.x - vParam0.x) < fLocal_288)
	{
		vVar0 = {vParam0};
	}
	if (absf(vVar0.y - vParam0.y) < fLocal_288)
	{
		vVar0 = {vParam0};
	}
	if (absf(vVar0.z - vParam0.z) < fLocal_288)
	{
		vVar0 = {vParam0};
	}
	return vVar0;
}

void func_62()
{
	Vector3 vVar0;
	
	if (iLocal_282)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iLocal_291, 0f, 20f, -1f)};
		func_29(&Local_65, 0);
		func_24(&Local_65);
		func_63(&Local_65, vVar0);
		_0x661B5C8654ADD825(Local_65.f_32, 1);
		Local_65.f_42 = {get_entity_rotation(iLocal_291, 2) - Vector(0f, 0f, 3f)};
	}
}

void func_63(auto uParam0, Vector3 vParam1)
{
	*uParam0.f_45 = {vParam1};
	point_cam_at_coord(*uParam0.f_32, *uParam0.f_45);
	*uParam0.f_159 = {vParam1};
}

bool func_64(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	float fVar7;
	
	if (iParam2 == 1 && *uParam0.f_1 == 0)
	{
		if (*uParam0.f_5 == 0)
		{
			iLocal_64 = unk_0x67D02A194A2FC2BD("heli_cam");
		}
		request_streamed_texture_dict("helicopterhud", false);
		if (!does_cam_exist(*uParam0.f_32))
		{
			*uParam0.f_35 = 0;
			*uParam0.f_32 = create_cam("default_scripted_camera", false);
			set_cam_near_clip(*uParam0.f_32, *uParam0.f_12);
		}
		_set_unk_map_flag(4);
		func_65(1, 1, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_entity_a_vehicle(iParam1))
				{
					*uParam0.f_8 = get_vehicle_index_from_entity_index(iParam1);
					_0xBC3CCA5844452B06(300f);
				}
				_0xBC3CCA5844452B06(300f);
				*uParam0.f_6 = 1;
				*uParam0.f_33 = 1;
				*uParam0.f_50 = 1;
				*uParam0.f_2 = 1;
				*uParam0.f_9 = iParam1;
				vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
				*uParam0.f_22 = vVar0.z;
				vVar3 = {get_entity_rotation(iParam1, 2)};
				*uParam0.f_41 = vVar3.z;
				if (*uParam0.f_4)
				{
					disable_all_control_actions(0);
				}
				else
				{
					disable_all_control_actions(0);
					set_everyone_ignore_player(player_id(), 1);
				}
				push_timecycle_modifier();
				if (is_vehicle_driveable(*uParam0.f_8, 0))
				{
					iVar6 = ENTITY::GET_ENTITY_MODEL(*uParam0.f_8);
				}
				if (iVar6 == joaat("buzzard") || iVar6 == joaat("savage"))
				{
					set_timecycle_modifier("heliGunCam");
				}
				else if (iVar6 == joaat("valkyrie"))
				{
					set_timecycle_modifier("heliGunCam");
				}
				else
				{
					set_timecycle_modifier("eyeinthesky");
				}
				_0x6DDBF9DFFC4AC080(1);
				get_ground_z_for_3d_coord(vVar0, &fVar7, 0);
				*uParam0.f_193 = fVar7 * 10f;
				if (*uParam0.f_194 == 1)
				{
					if (*uParam0.f_199 != -1)
					{
						if (has_sound_finished(*uParam0.f_199))
						{
							play_sound_frontend(*uParam0.f_199, "COP_HELI_CAM_BACKGROUND", 0, 1);
						}
					}
				}
				func_42(uParam0);
				*uParam0.f_1 = 1;
			}
		}
		return false;
	}
	else
	{
		if (*uParam0.f_1 == 1 && iParam2 == 1)
		{
			if (*uParam0.f_86 == 0)
			{
				func_31(uParam0, 0);
				func_30();
			}
			else
			{
				return true;
			}
		}
		if (*uParam0.f_1 == 1 && iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				*uParam0.f_48 = 0;
			}
			*uParam0.f_6 = 0;
			*uParam0.f_33 = 0;
			*uParam0.f_50 = 0;
			*uParam0.f_9 = 0;
			*uParam0.f_2 = 0;
			*uParam0.f_55 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				enable_all_control_actions(0);
				set_everyone_ignore_player(player_id(), 0);
			}
			if (is_vehicle_driveable(*uParam0.f_8, 0))
			{
				if (is_entity_attached_to_any_object(*uParam0.f_8))
				{
					detach_entity(*uParam0.f_8, 1, true);
				}
				if (!*uParam0.f_4)
				{
					freeze_entity_position(*uParam0.f_8, false);
					set_entity_invincible(*uParam0.f_8, false);
					set_entity_has_gravity(*uParam0.f_8, 1);
					set_vehicle_gravity(*uParam0.f_8, 1);
				}
			}
			_set_unk_map_flag(0);
			if (does_cam_exist(*uParam0.f_32))
			{
				if (is_cam_active(*uParam0.f_32))
				{
					set_cam_active(*uParam0.f_32, false);
				}
				if (is_cam_rendering(*uParam0.f_32))
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				destroy_cam(*uParam0.f_32, 0);
			}
			if (*uParam0.f_196 != -1)
			{
				if (!has_sound_finished(*uParam0.f_196))
				{
					stop_sound(*uParam0.f_196);
				}
			}
			if (*uParam0.f_197 != -1)
			{
				if (!has_sound_finished(*uParam0.f_197))
				{
					stop_sound(*uParam0.f_197);
				}
			}
			if (*uParam0.f_198 != -1)
			{
				if (!has_sound_finished(*uParam0.f_198))
				{
					stop_sound(*uParam0.f_198);
				}
			}
			if (*uParam0.f_200 != -1)
			{
				if (!has_sound_finished(*uParam0.f_200))
				{
					stop_sound(*uParam0.f_200);
				}
			}
			if (*uParam0.f_201 != -1)
			{
				if (!has_sound_finished(*uParam0.f_201))
				{
					stop_sound(*uParam0.f_201);
				}
			}
			if (*uParam0.f_202 != -1)
			{
				if (!has_sound_finished(*uParam0.f_202))
				{
					stop_sound(*uParam0.f_202);
				}
			}
			if (*uParam0.f_199 != -1)
			{
				if (!has_sound_finished(*uParam0.f_199))
				{
					stop_sound(*uParam0.f_199);
				}
			}
			if (*uParam0.f_203 != -1)
			{
				if (!has_sound_finished(*uParam0.f_203))
				{
					stop_sound(*uParam0.f_203);
				}
			}
			if (*uParam0.f_194 == 1)
			{
				release_ambient_audio_bank();
				release_sound_id(*uParam0.f_199);
				release_sound_id(*uParam0.f_196);
				release_sound_id(*uParam0.f_197);
				release_sound_id(*uParam0.f_198);
				release_sound_id(*uParam0.f_200);
				release_sound_id(*uParam0.f_201);
				release_sound_id(*uParam0.f_202);
				release_sound_id(*uParam0.f_203);
				*uParam0.f_199 = -1;
				*uParam0.f_196 = -1;
				*uParam0.f_197 = -1;
				*uParam0.f_198 = -1;
				*uParam0.f_200 = -1;
				*uParam0.f_201 = -1;
				*uParam0.f_202 = -1;
				*uParam0.f_203 = -1;
				*uParam0.f_194 = 0;
			}
			clear_timecycle_modifier();
			_0x6DDBF9DFFC4AC080(0);
			set_streamed_texture_dict_as_no_longer_needed("helicopterHUD");
			set_scaleform_movie_as_no_longer_needed(&iLocal_64);
			pop_timecycle_modifier();
			func_65(0, 0, 1, 0);
			*uParam0.f_8 = 0;
			*uParam0.f_1 = 0;
			func_42(uParam0);
			return true;
		}
	}
	return false;
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_66(int iParam0)
{
	return iParam0;
}

bool func_67(auto uParam0, int iParam1)
{
	*uParam0.f_5 = iParam1;
	*uParam0.f_62 = 93;
	*uParam0.f_62.f_1 = 182;
	*uParam0.f_62.f_2 = 229;
	*uParam0.f_65 = 255;
	*uParam0.f_65.f_1 = 0;
	*uParam0.f_65.f_2 = 0;
	*uParam0.f_68 = 255;
	*uParam0.f_68.f_1 = 255;
	*uParam0.f_68.f_2 = 255;
	*uParam0.f_71 = 255;
	*uParam0.f_71.f_1 = 40;
	*uParam0.f_71.f_2 = 0;
	*uParam0.f_15 = 40f;
	*uParam0.f_36 = 0.0075f;
	*uParam0.f_37 = 20f;
	*uParam0.f_40 = 28f;
	*uParam0.f_54 = 0.234f;
	*uParam0.f_58 = 22;
	*uParam0.f_59 = 201;
	*uParam0.f_60 = 39;
	*uParam0.f_61 = 181;
	*uParam0.f_74 = 0.044f;
	*uParam0.f_75 = 0.02f;
	*uParam0.f_77 = 1240f;
	*uParam0.f_78 = 5000f;
	*uParam0.f_79 = 1000f;
	*uParam0.f_81 = 0.829f;
	*uParam0.f_82 = 0.096f;
	*uParam0.f_83 = 0.865f;
	*uParam0.f_84 = 0.567f;
	*uParam0.f_85 = 0.087f;
	*uParam0.f_18 = 140f;
	*uParam0.f_19 = 1f;
	*uParam0.f_20 = 3f;
	*uParam0.f_21 = 1f;
	*uParam0.f_88 = 0.052f;
	*uParam0.f_89 = 0.75f;
	*uParam0.f_90 = 0.86f;
	*uParam0.f_91 = 0.02f;
	*uParam0.f_189 = 0.65f;
	*uParam0.f_190 = 0.024f;
	*uParam0.f_157 = 0.12f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		request_additional_text("CHOPPER", 5);
		if (has_this_additional_text_loaded("CHOPPER", 5))
		{
			return true;
		}
	}
	else
	{
		request_additional_text("CHOPPER", 3);
		if (has_this_additional_text_loaded("CHOPPER", 3))
		{
			return true;
		}
	}
	return false;
}

void func_68()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

void func_69(int iParam0)
{
	if (participant_id_to_int() != -1)
	{
		Local_298[participant_id_to_int() /*2*/].f_1 = iParam0;
	}
}

int func_70()
{
	int iVar0;
	
	if (((!is_pause_menu_active() && !func_3()) && !func_2(0)) && !Global_1315839)
	{
		if (is_control_just_pressed(0, 51))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 12) && !Global_2443115)
			{
				if (is_vehicle_driveable(iLocal_291, 0) && !is_entity_in_water(iLocal_291))
				{
					iVar0 = 1;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (func_71())
		{
		}
	}
	if (iLocal_276)
	{
		return iVar0;
	}
	else if (func_80())
	{
		return iVar0;
	}
	return 0;
}

bool func_71()
{
	if (!Global_2460486.f_4250)
	{
		if (Global_2460486.f_4251 == iLocal_291)
		{
			Global_2460486.f_4250 = 1;
			return true;
		}
	}
	return false;
}

void func_72()
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 12) || Global_2443115)
	{
		return;
	}
	if (iLocal_291 != Global_2460486.f_4394)
	{
		if (!iLocal_273)
		{
			if (!is_help_message_being_displayed())
			{
				if (iLocal_276)
				{
					if (iLocal_272 == joaat("buzzard") || iLocal_272 == joaat("savage"))
					{
						if (func_49(player_id(), 19))
						{
							if (!func_48())
							{
								iVar0 = true;
							}
						}
						if (!iVar0)
						{
							func_8("HUNTGUN_1", -1);
						}
					}
					else if (iLocal_272 == joaat("valkyrie"))
					{
						if (func_49(player_id(), 19))
						{
							if (!func_48())
							{
								iVar0 = true;
							}
						}
						if (!iVar0)
						{
							func_8("HUNTGUN_1c", -1);
						}
					}
					else
					{
						func_8("HUNTGUN_1b", -1);
					}
					iLocal_273 = 1;
				}
				else if (func_80() && !Global_2443115.f_129)
				{
					if (iLocal_272 == joaat("buzzard") || iLocal_272 == joaat("savage"))
					{
						func_8("HUNTGUN_3", -1);
					}
					else if (iLocal_272 == joaat("valkyrie"))
					{
						func_8("HUNTGUN_3c", -1);
					}
					else
					{
						func_8("HUNTGUN_3b", -1);
					}
					iLocal_273 = 1;
				}
			}
		}
		else if (func_77(player_id(), 1) || func_74(player_id(), 1))
		{
			if (!is_help_message_being_displayed())
			{
				if (!iLocal_275)
				{
					if (!iLocal_276)
					{
						if (func_73())
						{
							iLocal_275 = 1;
							Global_2460486.f_4394 = iLocal_291;
						}
					}
					else
					{
						iLocal_275 = 1;
						Global_2460486.f_4394 = iLocal_291;
					}
				}
			}
		}
		else
		{
			iLocal_275 = 1;
			Global_2460486.f_4394 = iLocal_291;
		}
	}
	else
	{
		iLocal_273 = 1;
		iLocal_275 = 1;
	}
}

bool func_73()
{
	return false;
}

bool func_74(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_75(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_75(auto uParam0)
{
	return func_76(uParam0);
}

int func_76(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_75(iParam0))
		{
			return true;
		}
	}
	if ((((Global_1587523[iParam0 /*444*/] == 2 || Global_1587523[iParam0 /*444*/] == 1) || Global_1587523[iParam0 /*444*/] == 0) || Global_1587523[iParam0 /*444*/] == 3) || Global_1587523[iParam0 /*444*/] == 8)
	{
		return true;
	}
	return false;
}

void func_78()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 12) || Global_2443115)
	{
		return;
	}
	if (iLocal_294 == player_id())
	{
		if (func_52())
		{
			if ((iLocal_281 && !iLocal_274) && (is_control_just_pressed(0, 99) || is_control_just_pressed(0, 100)))
			{
				if (!is_help_message_being_displayed())
				{
					func_8("HUNTGUN_8", -1);
					iLocal_274 = 1;
				}
			}
		}
	}
}

void func_79()
{
	if (is_vehicle_driveable(iLocal_291, 0))
	{
		if (!is_entity_in_air(iLocal_291))
		{
			if (func_80())
			{
				Local_65.f_204 = 1;
			}
			else
			{
				_clamp_gameplay_cam_pitch(-25f, 6f);
				Local_65.f_204 = 0;
			}
		}
		else
		{
			Local_65.f_204 = 0;
		}
	}
}

bool func_80()
{
	if (iLocal_279)
	{
		if (!iLocal_280)
		{
			if (Local_298[iLocal_296 /*2*/].f_1 == 2)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_81(auto uParam0)
{
	if (*uParam0.f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_82()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	iLocal_277 = false;
	iLocal_278 = true;
	iLocal_279 = false;
	iLocal_280 = true;
	iLocal_292 = -1;
	iLocal_293 = -1;
	iLocal_294 = func_84();
	iLocal_295 = func_84();
	iLocal_276 = false;
	Global_1573746 = func_84();
	iLocal_282 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (is_ped_sitting_in_any_vehicle(iVar0))
			{
				if (is_vehicle_driveable(iLocal_291, 0))
				{
					iLocal_282 = true;
					if (!is_vehicle_seat_free(iLocal_291, -1))
					{
						iLocal_292 = get_ped_in_vehicle_seat(iLocal_291, -1);
						iLocal_277 = ENTITY::DOES_ENTITY_EXIST(iLocal_292);
						if (iLocal_277)
						{
							iLocal_278 = ENTITY::IS_ENTITY_DEAD(iLocal_292, 0);
							if (is_ped_a_player(iLocal_292))
							{
								iLocal_294 = _network_get_ped_player(iLocal_292);
							}
						}
					}
					if (!is_vehicle_seat_free(iLocal_291, false))
					{
						iLocal_293 = get_ped_in_vehicle_seat(iLocal_291, false);
						iLocal_279 = ENTITY::DOES_ENTITY_EXIST(iLocal_293);
						if (iLocal_279)
						{
							iLocal_280 = ENTITY::IS_ENTITY_DEAD(iLocal_293, 0);
							if (func_83(iLocal_293, iLocal_291, 0) && is_ped_in_vehicle(iLocal_293, iLocal_291, 0))
							{
								if (is_ped_a_player(iLocal_293))
								{
									iLocal_295 = _network_get_ped_player(iLocal_293);
									if (network_is_player_a_participant(iLocal_295))
									{
										iLocal_296 = network_get_participant_index(iLocal_295);
									}
									if (iLocal_295 == player_id())
									{
										iLocal_276 = true;
									}
								}
							}
						}
					}
					if (iLocal_295 == player_id())
					{
						if (!iLocal_278)
						{
							Global_1573746 = iLocal_294;
						}
					}
					else if (!iLocal_280)
					{
						Global_1573746 = iLocal_295;
					}
				}
			}
		}
	}
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_84()
{
	return -1;
}

void func_85(auto uParam0, int iParam1, int iParam2)
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

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

auto func_87()
{
	return Global_1312416;
}

auto func_88()
{
	return Global_1315913;
}

void func_89()
{
	int iVar0;
	
	func_92();
	func_51();
	Global_1318856 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (iLocal_292 == PLAYER::PLAYER_PED_ID() && network_has_control_of_entity(iLocal_291))
		{
			disable_vehicle_weapon(0, joaat("vehicle_weapon_space_rocket"), iLocal_291, PLAYER::PLAYER_PED_ID());
		}
	}
	func_92();
	func_91();
	func_64(&Local_65, iVar0, 0, 1);
	Global_2467969 = 0;
	if (!func_52())
	{
		Global_1318857 = 1;
	}
	Global_1587523[player_id() /*444*/].f_347 = 0;
	stop_audio_scene("CAR_2_HELI_FILTERING");
	func_90();
}

void func_90()
{
	terminate_this_thread();
}

void func_91()
{
	if (iLocal_276)
	{
		remove_ped_helmet(PLAYER::PLAYER_PED_ID(), 0);
	}
}

void func_92()
{
	if (func_50("HUNTGUN_2"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_2b"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_2c"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_4"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_4b"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_4c"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_5"))
	{
		clear_help(1);
	}
	if (func_50("HUNTGUN_6"))
	{
		clear_help(1);
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (func_50("HUNTGUN_5_KM"))
		{
			clear_help(1);
		}
		if (func_50("HUNTGUN_6_KM"))
		{
			clear_help(1);
		}
	}
}

bool func_93(int iParam0)
{
	if (func_100())
	{
		if (iParam0)
		{
			if (!Global_1573832 && !func_49(player_id(), 2))
			{
				_start_screen_effect("MinigameTransitionIn", false, 1);
				func_94(0, 0);
			}
		}
		return true;
	}
	return false;
}

void func_94(int iParam0, int iParam1)
{
	if (iParam0)
	{
		func_99(1);
	}
	else
	{
		func_95(iParam1);
	}
}

void func_95(int iParam0)
{
	func_98();
	if (iParam0 == 0)
	{
		if (_0xEF7D17BC6C85264C())
		{
			return;
		}
	}
	if (func_97() == 0 || is_pause_menu_active())
	{
		func_96(1);
		_set_frozen_rendering_disabled(0);
		_set_frozen_rendering_disabled(0);
	}
}

void func_96(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

auto func_97()
{
	return Global_1312466.f_20;
}

void func_98()
{
	Global_2444578 = 1;
}

void func_99(int iParam0)
{
	if ((func_97() == 1 || is_pause_menu_active()) || iParam0)
	{
		func_96(0);
		_set_frozen_rendering_disabled(1);
		_set_frozen_rendering_disabled(1);
		_0xE1C8709406F2C41C();
	}
}

auto func_100()
{
	return Global_2428492.f_2;
}

void func_101(int iParam0)
{
	if (participant_id_to_int() != -1)
	{
		Local_298[participant_id_to_int() /*2*/] = iParam0;
	}
}

bool func_102()
{
	int iVar0;
	
	func_109(&iVar0);
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
	if (func_108())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_107())
	{
		return true;
	}
	if (func_106(157))
	{
		if (!func_105())
		{
			return true;
		}
	}
	if (func_106(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_103() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_103()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_103()
{
	switch (func_104())
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

auto func_104()
{
	return Global_25120;
}

auto func_105()
{
	return Global_2434762.f_574;
}

bool func_106(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_107()
{
	return Global_2443085;
}

auto func_108()
{
	return Global_2434762.f_569;
}

void func_109(auto uParam0)
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
					func_110(iVar0);
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

void func_110(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_16(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_111(iVar4, &iVar5))
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

bool func_111(int iParam0, auto uParam1)
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

void func_112()
{
	wait(0);
}

void func_113(struct<20> Param0)
{
	func_117(func_118(Param0), Param0);
	func_115(0, -1, 0);
	network_register_host_broadcast_variables(&iLocal_297, 1);
	network_register_player_broadcast_variables(&Local_298, 5);
	set_this_script_can_be_paused(0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), 0))
				{
					iLocal_272 = ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()));
					iLocal_291 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	if (!func_114())
	{
		func_89();
	}
	func_101(0);
}

bool func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_108())
		{
			return false;
		}
		if (func_106(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_90();
			}
			else
			{
				return false;
			}
		}
		if (!func_116())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_90();
					}
					else
					{
						return false;
					}
				}
				if (func_108())
				{
					if (!iParam2)
					{
						func_90();
					}
					else
					{
						return false;
					}
				}
				if (func_106(155))
				{
					if (!iParam2)
					{
						func_90();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_90();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!iParam2)
			{
				func_90();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_90();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_116()
{
	return Global_1315888;
}

void func_117(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_90();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

