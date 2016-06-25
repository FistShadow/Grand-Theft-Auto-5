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
	auto uLocal_20 = 5;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 5;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
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
	if (Global_101154.f_8884.f_3854 == 0)
	{
		chiliad_disableUFO);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		chiliad_disableUFO);
	}
	while (true)
	{
		wait(0);
		if (!is_world_point_within_brain_activation_range())
		{
			chiliad_disableUFO);
		}
		switch (iLocal_18)
		{
			case 0:
				if (get_clock_hours() == 3 && chiliad_canSpawnUFO())
				{
					iLocal_18 = 1;
				}
				break;
			
			case 1:
				func_1(152, 1, 0, 1, 0);
				iLocal_18 = 2;
				if (!is_ambient_zone_enabled("AZ_SPECIAL_UFO_03"))
				{
					set_ambient_zone_state("AZ_SPECIAL_UFO_03", 1, 1);
				}
				break;
			
			case 2:
				if (get_clock_hours() != 3 || !chiliad_canSpawnUFO())
				{
					chiliad_disableUFO);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69489)
		{
			Global_2428492.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101154.f_5951.f_227[iParam0] = iParam1;
		}
		Global_32679[iParam0] = iParam2;
		Global_32878[iParam0] = 1;
		func_4(iParam0, iParam3, iParam4, 0);
		func_2(iParam0, iParam1);
	}
}

void func_2(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_3(0, 0);
			}
			else
			{
				func_3(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_3(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&Global_99794, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_99794, iParam0);
	}
	Global_99793 = 1;
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<5> uUfoData;
	auto uVar98;
	int iVar99;
	int iVar100;
	
	iVar0 = false;
	uUfoData.f_4 = 3;
	uUfoData.f_8 = 3;
	uUfoData.f_64 = 3;
	uUfoData.f_75 = 3;
	uUfoData.f_91 = 3;
	func_8(&uUfoData, iParam0);
	if (func_5())
	{
		iVar1 = Global_101154.f_5951.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2428492.f_74.f_227[iParam0];
	}
	uVar2 = Global_33077[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !iParam3)
	{
	}
	else
	{
		iVar99 = true;
		if (get_hash_key(get_this_script_name()) != get_hash_key("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32679[iParam0] && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uUfoData, 1) < 200f)
				{
					iVar99 = false;
				}
				if (!is_player_playing(player_id()) || is_ped_being_arrested(PLAYER::PLAYER_PED_ID()))
				{
					if (!is_screen_faded_out())
					{
						iVar99 = false;
					}
				}
			}
		}
		if (is_new_load_scene_active() && (!is_player_switch_in_progress() || get_player_switch_state() != 5))
		{
			iVar99 = false;
		}
		if (iVar99)
		{
			switch (uUfoData.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (uUfoData.f_4[iVar1] != 0)
						{
							remove_model_hide(uUfoData, 10f, uUfoData.f_4[iVar1], false);
						}
						if (uUfoData.f_4[uVar2] != 0)
						{
							create_model_hide(uUfoData, 10f, uUfoData.f_4[uVar2], 1);
						}
						Global_34273[iParam0] = 1;
					}
					iVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[1 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[1 /*8*/]));
							}
						}
						if ((get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[2 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(uUfoData.f_8[0 /*8*/])))
							{
								request_ipl(&(uUfoData.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(uUfoData.f_34)) != get_hash_key(""))
						{
							if (!is_ipl_active(&(uUfoData.f_34)))
							{
								request_ipl(&(uUfoData.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (get_hash_key(&(uUfoData.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(uUfoData.f_34)))
							{
								remove_ipl(&(uUfoData.f_34));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[0 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[0 /*8*/]));
							}
						}
						if ((get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[2 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(uUfoData.f_8[1 /*8*/])))
							{
								request_ipl(&(uUfoData.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (get_hash_key(&(uUfoData.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(uUfoData.f_34)))
							{
								remove_ipl(&(uUfoData.f_34));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[0 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(uUfoData.f_8[1 /*8*/])))
							{
								remove_ipl(&(uUfoData.f_8[1 /*8*/]));
							}
						}
						if (get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
						{
							if (!is_ipl_active(&(uUfoData.f_8[2 /*8*/])))
							{
								request_ipl(&(uUfoData.f_8[2 /*8*/]));
							}
						}
					}
					Global_34074[iParam0] = 1;
					Global_34273[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 2:
					iVar100 = get_interior_at_coords_with_type(uUfoData, &(uUfoData.f_42));
					if (iVar100 != 0)
					{
						if (get_hash_key(&(uUfoData.f_50)) != get_hash_key(""))
						{
							if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_50)))
							{
								_disable_interior_prop(iVar100, &(uUfoData.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[1 /*8*/]));
								}
							}
							if ((get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[0 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(uUfoData.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[0 /*8*/]));
								}
							}
							if ((get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key(&(uUfoData.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[1 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(uUfoData.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (get_hash_key(&(uUfoData.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[0 /*8*/]));
								}
							}
							if (get_hash_key(&(uUfoData.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(uUfoData.f_8[1 /*8*/]));
								}
							}
							if (get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(uUfoData.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
							{
								if (!_is_interior_prop_enabled(iVar100, &(uUfoData.f_8[2 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(uUfoData.f_8[2 /*8*/]));
								}
							}
						}
						if (iParam1)
						{
							refresh_interior(iVar100);
						}
					}
					Global_34273[iParam0] = 1;
					Global_34074[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 3:
					if (get_distance_between_coords(uUfoData, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar98 = _0xB48FCED898292E52(uUfoData, 25f, &(uUfoData.f_8[0 /*8*/]));
						if (_0x52AF537A0C5B8AAD(uVar98))
						{
							if (iVar1 == 0)
							{
								_0x5C29F698D404C5E1(uVar98, 3);
								Global_34273[iParam0] = 1;
								iVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((_0x899BA936634A322E(uVar98) != 6 && _0x899BA936634A322E(uVar98) != 7) && _0x899BA936634A322E(uVar98) != 8)
								{
									_0x5C29F698D404C5E1(uVar98, 10);
									Global_34273[iParam0] = 1;
									iVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								iVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						remove_model_swap(uUfoData, 50f, uUfoData.f_4[1], uUfoData.f_4[0], 0);
						GAMEPLAY::CLEAR_BIT(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					else if (iVar1 == 1)
					{
						create_model_swap(uUfoData, 50f, uUfoData.f_4[0], uUfoData.f_4[1], 1);
						GAMEPLAY::SET_BIT(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					iVar0 = true;
					break;
			}
			if (iVar0)
			{
				Global_32878[iParam0] = 0;
				Global_33077[iParam0] = iVar1;
				if (!func_5())
				{
					if (!Global_33674[iParam0])
					{
						Global_33674[iParam0] = 1;
						Global_33873++;
					}
				}
			}
		}
	}
	return iVar0;
}

bool func_5()
{
	if ((func_7() == -1 || func_7() == 999) && !func_6() == 0)
	{
		return true;
	}
	return false;
}

auto func_6()
{
	return Global_25121;
}

auto func_7()
{
	return Global_25120;
}

bool func_8(auto ufoData, int iParam1)
{
	int iVar0;
	
	//iVar0 = 0;
	for(iVar0 = 0; iVar0 < 3; iVar0++)//while (iVar0 < 3)
	{
		*ufoData.f_4[iVar0] = 0;
		StringCopy(ufoData.f_8[iVar0 /*8*/], "", 32);
		*ufoData.f_64[iVar0] = 0;
		*ufoData.f_75[iVar0] = 0;
		*ufoData.f_91[iVar0] = 0;
		//iVar0++;
	}
	*ufoData = {0f, 0f, 0f};
	*ufoData.f_3 = 0;
	*ufoData.f_33 = 0;
	StringCopy(ufoData.f_34, "", 32);
	StringCopy(ufoData.f_42, "", 32);
	StringCopy(ufoData.f_50, "", 32);
	*ufoData.f_58 = {0f, 0f, 0f};
	*ufoData.f_61 = {0f, 0f, 0f};
	*ufoData.f_68 = {0f, 0f, 0f};
	*ufoData.f_71 = {0f, 0f, 0f};
	*ufoData.f_74 = 0f;
	*ufoData.f_79 = {0f, 0f, 0f};
	*ufoData.f_82 = {0f, 0f, 0f};
	*ufoData.f_85 = {0f, 0f, 0f};
	*ufoData.f_88 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 3:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "TRV1_Trail_start", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "TRV1_Trail_end", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			*ufoData.f_33 = 1;
			*ufoData = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 4:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*ufoData = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 0:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*ufoData = {-93.4f, 6410.9f, 36.8f};
			break;
		
		case 1:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*ufoData = {890.3647f, -2367.289f, 28.10582f};
			break;
		
		case 2:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-1020.5f, 663.41f, 154.75f};
			*ufoData.f_58 = {-1018.913f, 603.2904f, 105.6611f};
			*ufoData.f_61 = {-1038.913f, 639.2904f, 135.6611f};
			*ufoData.f_64[0] = 1;
			*ufoData.f_64[1] = 0;
			break;
		
		case 5:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*ufoData.f_33 = 1;
			break;
		
		case 6:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
		
		case 7:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "prop_jb700_covered", 32);
			*ufoData = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 8:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*ufoData = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 9:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*ufoData = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 10:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "prop_ztype_covered", 32);
			*ufoData = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 11:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "cargoship", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "sunkcargoship", 32);
			*ufoData.f_68 = {-162.8918f, -2365.769f, 0f};
			*ufoData.f_71 = {190.75f, 31.25f, 21f};
			*ufoData.f_74 = 0f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			break;
		
		case 13:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "ship_occ_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
		
		case 14:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "smboat", 32);
			break;
		
		case 15:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "gasparticle_grp2", 32);
			*ufoData = {-95.2f, 6411.3f, 31.5f};
			break;
		
		case 16:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*ufoData = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 17:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*ufoData = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 18:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*ufoData = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 19:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*ufoData = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 20:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "jetstealtunnel", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {801.7f, -1810.8f, 23.3f};
			break;
		
		case 21:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*ufoData.f_33 = 1;
			*ufoData = {787.3967f, -1808.858f, 29.8532f};
			*ufoData.f_58 = {814f, -1750f, 20f};
			*ufoData.f_61 = {790f, -1899f, 35f};
			*ufoData.f_64[0] = 1;
			*ufoData.f_64[1] = 0;
			*ufoData.f_64[2] = 0;
			break;
		
		case 22:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
		
		case 26:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*ufoData = {163.4f, -745.7f, 251f};
			break;
		
		case 27:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "FBI_colPLUG", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {74.29f, -736.05f, 46.76f};
			break;
		
		case 28:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "FBI_repair", 32);
			*ufoData = {74.29f, -736.05f, 46.76f};
			break;
		
		case 29:
			*ufoData.f_3 = 4;
			*ufoData.f_4[0] = joaat("dt1_05_build1_h");
			*ufoData.f_4[1] = joaat("dt1_05_build1_damage");
			*ufoData = {136.004f, -749.287f, 153.302f};
			break;
		
		case 30:
			*ufoData.f_3 = 4;
			*ufoData.f_4[0] = -112041596;
			*ufoData.f_4[1] = joaat("dt1_05_build1_damage_lod");
			*ufoData = {136.004f, -749.287f, 153.302f};
			break;
		
		case 31:
			*ufoData.f_3 = 4;
			*ufoData.f_4[0] = -186270611;
			*ufoData.f_4[1] = joaat("dt1_05_damage_slod");
			*ufoData = {178.534f, -668.835f, 37.2113f};
			break;
		
		case 32:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "FIB_heist_lights", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {136.004f, -749.287f, 153.302f};
			break;
		
		case 33:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*ufoData = {136.004f, -749.287f, 153.302f};
			break;
		
		case 34:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DT1_05_rubble", 32);
			*ufoData = {74.29f, -736.05f, 46.76f};
			break;
		
		case 35:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "FIBlobbyfake", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "FIBlobby", 32);
			*ufoData = {105.4557f, -745.4835f, 44.7548f};
			break;
		
		case 36:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*ufoData = {169f, -670.3f, 41.9f};
			break;
		
		case 37:
			*ufoData.f_3 = 1;
			*ufoData = {50.2f, 3743.9f, 40.9f};
			*ufoData.f_79 = {16.9757f, 3614.307f, 30.0677f};
			*ufoData.f_82 = {145.2451f, 3748.912f, 49.6958f};
			*ufoData.f_85 = {16.9757f, 3614.307f, 30.0677f};
			*ufoData.f_88 = {145.2451f, 3748.912f, 49.6958f};
			*ufoData.f_91[0] = 0;
			*ufoData.f_91[1] = 1;
			break;
		
		case 38:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "trailerparkA_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*ufoData = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 39:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 40:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "trailerparkB_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*ufoData = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 41:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 42:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "trailerparkC_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*ufoData = {72.7f, 3695.4f, 42f};
			break;
		
		case 43:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {72.7f, 3695.4f, 42f};
			break;
		
		case 44:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "trailerparkD_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*ufoData = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 45:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 46:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "trailerparkE_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*ufoData = {28.5f, 3668f, 40.4f};
			break;
		
		case 47:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {28.5f, 3668f, 40.4f};
			break;
		
		case 48:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_34, "des_methtrailer", 32);
			StringCopy(ufoData.f_8[0 /*8*/], "methtrailer_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "methtrailer_grp2", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "methtrailer_grp3", 32);
			*ufoData.f_33 = 1;
			*ufoData = {29.4838f, 3735.593f, 38.688f};
			*ufoData.f_68 = {31.134f, 3738.783f, 39.062f};
			*ufoData.f_71 = {13.6f, 20f, 8.9f};
			*ufoData.f_74 = 48f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			*ufoData.f_75[2] = 1;
			break;
		
		case 49:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "occl_meth_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {29.4838f, 3735.593f, 38.688f};
			break;
		
		case 50:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "des_farmhs_startimap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "des_farmhs_endimap", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*ufoData.f_33 = 1;
			*ufoData = {2450.595f, 4959.929f, 44.2575f};
			*ufoData.f_79 = {2383.756f, 4929.988f, 39.52461f};
			*ufoData.f_82 = {2505.756f, 5023.988f, 67.52461f};
			break;
		
		case 55:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData = {2450.595f, 4959.929f, 44.2575f};
			break;
		
		case 51:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "farm", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "farm", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "farm_burnt", 32);
			*ufoData.f_33 = 1;
			*ufoData = {2444.8f, 4976.4f, 50.5f};
			break;
		
		case 52:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "farm_props", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "farm_burnt_props", 32);
			*ufoData.f_33 = 1;
			*ufoData = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 53:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "des_farmhouse", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "des_farmhouse", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*ufoData.f_33 = 1;
			*ufoData = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 54:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "farmint_cap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "farmint", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 56:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "tankerexp_grp0", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "tankerexp_grp3", 32);
			*ufoData = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 57:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "tankerexp_grp1", 32);
			*ufoData = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 58:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "tankerexp_grp2", 32);
			*ufoData = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 59:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DES_tankerexp", 32);
			*ufoData = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 60:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "dockcrane1", 32);
			*ufoData = {889.3f, -2910.9f, 40f};
			break;
		
		case 61:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "CanyonRvrShallow", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*ufoData = {-1600.619f, 4443.457f, 0.725f};
			break;
		
		case 62:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Garage_door_locked", 32);
			*ufoData = {966.1f, -114.8f, 75.2f};
			break;
		
		case 63:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "ch1_02_closed", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "ch1_02_open", 32);
			*ufoData = {-3086.428f, 339.2523f, 6.3717f};
			break;
		
		case 64:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "ferris_finale_Anim", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {-1675.178f, -1143.605f, 12.0175f};
			break;
		
		case 65:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "railing_start", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "railing_end", 32);
			*ufoData = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 66:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "canyonriver01", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*ufoData = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 67:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*ufoData = {131.29f, -631.22f, 261.85f};
			break;
		
		case 68:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "coronertrash", 32);
			*ufoData = {233.9f, -1355f, 30.3f};
			break;
		
		case 69:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "Coroner_Int_off", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Coroner_Int_on", 32);
			*ufoData = {234.4f, -1355.6f, 40.5f};
			break;
		
		case 70:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {716.84f, -962.05f, 31.59f};
			break;
		
		case 71:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "id2_14_during1", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "id2_14_during2", 32);
			*ufoData = {716.84f, -962.05f, 31.59f};
			break;
		
		case 72:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "id2_14_on_fire", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*ufoData = {716.84f, -962.05f, 31.59f};
			break;
		
		case 73:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "id2_14_during_door", 32);
			*ufoData = {716.84f, -962.05f, 31.59f};
			break;
		
		case 74:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "burnt_switch_off", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {716.84f, -962.05f, 31.59f};
			break;
		
		case 75:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "RC12B_Default", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "RC12B_Destroyed", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "RC12B_Fixed", 32);
			*ufoData.f_33 = 0;
			*ufoData = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 76:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 105:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*ufoData = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 106:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*ufoData = {1861.28f, 2402.11f, 58.53f};
			break;
		
		case 107:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "FruitBB", 32);
			*ufoData = {-1327.46f, -274.82f, 54.25f};
			break;
		
		case 108:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*ufoData = {2697.32f, 3162.18f, 58.1f};
			break;
		
		case 109:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*ufoData = {2119.12f, 3058.21f, 53.25f};
			break;
		
		case 110:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*ufoData = {-804.25f, -2276.88f, 23.59f};
			break;
		
		case 111:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "HW1_02_OldBill", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*ufoData = {296.5f, 173.3f, 100.4f};
			break;
		
		case 112:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*ufoData = {296.5f, 173.3f, 100.4f};
			break;
		
		case 77:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 1;
			*ufoData = {480.9554f, -1321.21f, 28.2037f};
			*ufoData.f_85 = {508.3f, -1299.3f, 39.4f};
			*ufoData.f_88 = {459.9f, -1363.2f, 21.4f};
			*ufoData.f_91[0] = 0;
			*ufoData.f_91[1] = 1;
			*ufoData.f_91[2] = 0;
			break;
		
		case 78:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "TrevorsTrailer", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*ufoData = {1973f, 3815f, 34f};
			*ufoData.f_33 = 0;
			break;
		
		case 79:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "scafstartimap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "scafendimap", 32);
			*ufoData = {-1088.6f, -1650.6f, 6.4f};
			break;
		
		case 80:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "chop_props", 32);
			*ufoData = {-13.83f, -1455.45f, 31.81f};
			break;
		
		case 113:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*ufoData = {-1277.629f, -2030.913f, 1.2823f};
			break;
		
		case 114:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*ufoData = {2384.969f, 4277.583f, 30.379f};
			break;
		
		case 115:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*ufoData = {1577.881f, 3836.107f, 30.7717f};
			break;
		
		case 87:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {-180.5771f, -1016.928f, 28.2893f};
			break;
		
		case 88:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "jewel2fake", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "post_hiest_unload", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "bh1_16_refurb", 32);
			*ufoData = {-630.4205f, -236.7843f, 37.057f};
			*ufoData.f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
			*ufoData.f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
			break;
		
		case 89:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "refit_unload", 32);
			*ufoData = {-583.1606f, -282.3967f, 35.394f};
			break;
		
		case 90:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "v_tunnel_hole", 32);
			*ufoData = {-14.651f, -604.3639f, 25.1823f};
			break;
		
		case 91:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "cs5_4_trains", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {2773.61f, 2835.327f, 35.1903f};
			break;
		
		case 94:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "airfield", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {1743.682f, 3286.251f, 40.0875f};
			break;
		
		case 95:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*ufoData.f_33 = 1;
			*ufoData = {1222.9f, 1877.9f, 79.9f};
			*ufoData.f_58 = {1206.8f, 1803f, 43.9f};
			*ufoData.f_61 = {1329f, 2060.4f, 143.9f};
			*ufoData.f_64[0] = 0;
			*ufoData.f_64[1] = 1;
			*ufoData.f_64[2] = 0;
			break;
		
		case 104:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "SC1_01_OldBill", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*ufoData = {-351f, -1324f, 44.02f};
			break;
		
		case 103:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_17_OldBill", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*ufoData = {391.81f, -962.71f, 41.97f};
			break;
		
		case 102:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "SC1_14_OldBill", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*ufoData = {424.2f, -1944.31f, 33.09f};
			break;
		
		case 92:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "ld_rail_01_track", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 93:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "ld_rail_02_track", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 118:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_Michael_M_items", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_M_moved", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 116:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_Michael_D_items", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 117:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_Michael_S_items", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 119:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_Michael_L_Items", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 120:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 122:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_FameShame", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 121:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 123:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Michael_premier", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 124:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 170:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "burgershot_yoga", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 171:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_Scuba", 32);
			StringCopy(ufoData.f_42, "V_Michael_Garage", 32);
			*ufoData = {-810.5301f, 187.7868f, 71.4786f};
			break;
		
		case 125:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			StringCopy(ufoData.f_42, "V_Michael", 32);
			*ufoData = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 164:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 165:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 166:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 167:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_35_KitBag", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 168:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_35_Body_Armour", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 169:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_35_Fireman", 32);
			StringCopy(ufoData.f_42, "V_Sweat", 32);
			*ufoData = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 126:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			StringCopy(ufoData.f_42, "V_Trailer", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 127:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			StringCopy(ufoData.f_42, "V_TrailerTRASH", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 128:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			StringCopy(ufoData.f_42, "V_TrailerTidy", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 129:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			StringCopy(ufoData.f_42, "V_Trailer", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 130:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			StringCopy(ufoData.f_42, "V_TrailerTRASH", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 131:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			StringCopy(ufoData.f_42, "V_TrailerTidy", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 132:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			StringCopy(ufoData.f_42, "V_Trailer", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 133:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			StringCopy(ufoData.f_42, "V_TrailerTRASH", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 134:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			StringCopy(ufoData.f_42, "V_TrailerTidy", 32);
			*ufoData = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 179:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "shutter_open", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "shutter_closed", 32);
			StringCopy(ufoData.f_42, "v_carshowroom", 32);
			*ufoData = {-30.8793f, -1088.336f, 25.4221f};
			*ufoData.f_68 = {-29.3f, -1086.35f, 25.57f};
			*ufoData.f_71 = {5.5f, 3f, 2f};
			*ufoData.f_74 = -10f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			break;
		
		case 174:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "csr_beforeMission", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "csr_afterMissionA", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "csr_afterMissionB", 32);
			StringCopy(ufoData.f_50, "csr_inMission", 32);
			*ufoData.f_33 = 0;
			StringCopy(ufoData.f_42, "v_carshowroom", 32);
			*ufoData = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 175:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_carshowroom", 32);
			*ufoData = {-49.21f, -1090.28f, 25.42f};
			*ufoData.f_68 = {-49.21f, -1090.28f, 25.42f};
			*ufoData.f_71 = {2.5f, 3f, 3f};
			*ufoData.f_74 = 0f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			*ufoData.f_75[2] = 0;
			break;
		
		case 176:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_carshowroom", 32);
			*ufoData = {-49.28f, -1092.66f, 25.42f};
			*ufoData.f_68 = {-49.28f, -1092.66f, 25.42f};
			*ufoData.f_71 = {3f, 1f, 3f};
			*ufoData.f_74 = 0f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			*ufoData.f_75[2] = 0;
			break;
		
		case 177:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_carshowroom", 32);
			*ufoData = {-53.07f, -1096.73f, 25.5f};
			*ufoData.f_68 = {-53.07f, -1096.73f, 25.5f};
			*ufoData.f_71 = {1f, 3f, 2f};
			*ufoData.f_74 = -45f;
			*ufoData.f_75[0] = 0;
			*ufoData.f_75[1] = 1;
			*ufoData.f_75[2] = 0;
			break;
		
		case 178:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "carshowroom_broken", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "carshowroom_boarded", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 173:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "shr_int", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "fakeint", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 180:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_03_Shutter", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "", 32);
			*ufoData = {23.9346f, -669.7552f, 30.8853f};
			break;
		
		case 181:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			StringCopy(ufoData.f_42, "v_hospital", 32);
			*ufoData.f_33 = 0;
			*ufoData = {300.9423f, -586.1784f, 42.2919f};
			break;
		
		case 135:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "swap_clean_apt", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_mess_A", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 136:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_mess_B", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 137:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_mess_C", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 138:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_sextoys_a", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 139:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_wade_shit", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 140:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 141:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "layer_debra_pic", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 142:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_torture", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 143:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "swap_sofa_A", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "swap_sofa_B", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 144:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "layer_whiskey", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 145:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "swap_mrJam_A", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "swap_mrJam_B", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 146:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "swap_mrJam_C", 32);
			StringCopy(ufoData.f_42, "v_trevors", 32);
			*ufoData = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 147:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "vb_30_emissive", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "vb_30_murder", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 148:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "vb_30_crimetape", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 149:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "sheriff_cap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {1856.029f, 3682.998f, 33.2675f};
			break;
		
		case 150:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-440.5073f, 6018.766f, 30.49f};
			break;
		
		case 151:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "ufo", 32);
			*ufoData.f_33 = 0;
			*ufoData = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 152:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "ufo_eye", 32);
			*ufoData.f_33 = 0;
			*ufoData = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 153:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			StringCopy(ufoData.f_42, "v_franklins", 32);
			*ufoData = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 154:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_57_GangBandana", 32);
			StringCopy(ufoData.f_42, "v_franklins", 32);
			*ufoData = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 155:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_57_Safari", 32);
			StringCopy(ufoData.f_42, "v_franklins", 32);
			*ufoData = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 172:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			StringCopy(ufoData.f_42, "v_strip3", 32);
			*ufoData = {96.4811f, -1291.294f, 28.2688f};
			break;
		
		case 182:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {139.5795f, -3092.962f, 8.64631f};
			*ufoData.f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*ufoData.f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*ufoData.f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*ufoData.f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*ufoData.f_91[0] = 0;
			*ufoData.f_91[1] = 1;
			*ufoData.f_91[2] = 1;
			break;
		
		case 183:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {203.7784f, -3131.767f, 7.041344f};
			*ufoData.f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
			*ufoData.f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
			break;
		
		case 184:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {144.7706f, -2982.659f, 7.952507f};
			*ufoData.f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
			*ufoData.f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
			break;
		
		case 185:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 1;
			*ufoData = {-1154.965f, -1520.983f, 9.132731f};
			*ufoData.f_79 = {-1154.965f, -1520.983f, 9.132731f};
			*ufoData.f_82 = {-1158.965f, -1524.983f, 11.63273f};
			break;
		
		case 187:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 1;
			*ufoData = {-1052.204f, 371.9537f, 67.914f};
			*ufoData.f_79 = {-1052.204f, 371.9537f, 67.914f};
			*ufoData.f_82 = {-1048.064f, 368.0221f, 70.9128f};
			break;
		
		case 186:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 1;
			*ufoData = {1954.984f, 3792.991f, 30.3086f};
			*ufoData.f_79 = {1954.984f, 3792.991f, 30.3086f};
			*ufoData.f_82 = {1983.45f, 3830.78f, 36.2726f};
			break;
		
		case 188:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 1;
			*ufoData = {-1122.202f, 48.5724f, 51.4652f};
			*ufoData.f_79 = {-1122.202f, 48.5724f, 51.4652f};
			*ufoData.f_82 = {-1076.233f, 92.1041f, 60.0617f};
			break;
		
		case 81:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "KorizTempWalls", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-2199.138f, 223.4648f, 181.1118f};
			break;
		
		case 82:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "mic3_chopper_debris", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {-2242.785f, 263.4779f, 173.6154f};
			break;
		
		case 83:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "chemgrill_grp1", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {3832.9f, 3665.5f, -23.4f};
			break;
		
		case 84:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Plane_crash_trench", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData.f_33 = 0;
			*ufoData = {2814.7f, 4758.5f, 47.9f};
			break;
		
		case 85:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "golfflags", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {-1096.505f, 4.5754f, 49.8103f};
			break;
		
		case 86:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "yogagame", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {-781.6566f, 186.8937f, 71.8352f};
			break;
		
		case 189:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "Carwash_with_spinners", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "Carwash_without_spinners", 32);
			*ufoData.f_33 = 0;
			*ufoData = {55.7f, -1391.3f, 30.5f};
			break;
		
		case 190:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "KT_CarWash", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			*ufoData.f_33 = 0;
			*ufoData = {700.091f, -933.641f, 20.308f};
			break;
		
		case 191:
			*ufoData.f_3 = 1;
			*ufoData = {-1096.381f, -836.17f, 36.6755f};
			*ufoData.f_85 = {*ufoData - Vector(25f, 25f, 15f)};
			*ufoData.f_88 = {*ufoData + Vector(25f, 25f, 15f)};
			*ufoData.f_91[0] = 1;
			*ufoData.f_91[1] = 0;
			break;
		
		case 192:
			*ufoData.f_3 = 1;
			*ufoData = {449.6558f, -980.1375f, 42.6918f};
			*ufoData.f_85 = {*ufoData - Vector(25f, 25f, 15f)};
			*ufoData.f_88 = {*ufoData + Vector(25f, 25f, 15f)};
			*ufoData.f_91[0] = 1;
			*ufoData.f_91[1] = 0;
			break;
		
		case 193:
			*ufoData.f_3 = 1;
			*ufoData = {363.0175f, -1598.079f, 35.9502f};
			*ufoData.f_85 = {*ufoData - Vector(25f, 25f, 15f)};
			*ufoData.f_88 = {*ufoData + Vector(25f, 25f, 15f)};
			*ufoData.f_91[0] = 1;
			*ufoData.f_91[1] = 0;
			break;
		
		case 194:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "CS3_07_MPGates", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "", 32);
			*ufoData = {-1601.424f, 2808.213f, 16.2598f};
			break;
		
		case 97:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "", 32);
			*ufoData = {23.7318f, -647.2123f, 37.9549f};
			break;
		
		case 98:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "FINBANK", 32);
			*ufoData = {12.9689f, -648.4698f, 9.7693f};
			break;
		
		case 99:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "PAPER1_RCM", 32);
			*ufoData = {-1459.127f, 486.1281f, 115.2016f};
			break;
		
		case 100:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*ufoData = {-248.4916f, -2010.509f, 34.5743f};
			break;
		
		case 101:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "facelobbyfake", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "facelobby", 32);
			*ufoData = {-1081.347f, -263.1502f, 38.7152f};
			break;
		
		case 195:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "atriumglstatic", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "atriumglmission", 32);
			StringCopy(ufoData.f_8[2 /*8*/], "atriumglcut", 32);
			*ufoData = {136.1795f, -750.701f, 262.0516f};
			break;
		
		case 197:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "racetrack01", 32);
			*ufoData = {2096f, 3168.7f, 42.9f};
			break;
	}
	switch (iParam1)
	{
		case 156:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "showhome_only", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 157:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "franklin_unpacking", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 158:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "franklin_settled", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 163:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "progress_tshirt", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 159:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "bong_and_wine", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 161:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "progress_flyer", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 162:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "progress_tux", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 160:
			*ufoData.f_3 = 2;
			StringCopy(ufoData.f_8[0 /*8*/], "locked", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "unlocked", 32);
			StringCopy(ufoData.f_42, "v_franklinshouse", 32);
			*ufoData = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 96:
			*ufoData.f_3 = 1;
			StringCopy(ufoData.f_8[0 /*8*/], "", 32);
			StringCopy(ufoData.f_8[1 /*8*/], "chophillskennel", 32);
			*ufoData = {19.0568f, 536.4818f, 169.6277f};
			break;
	}
	return true;
}

bool chiliad_canSpawnUFO()
{
	if (((is_next_weather_type("RAIN") || is_next_weather_type("THUNDER")) || is_prev_weather_type("RAIN")) || is_prev_weather_type("THUNDER"))
	{
		return true;
	}
	return false;
}

void chiliad_disableUFO)
{
	func_1(152, 0, 1, 1, 0);
	if (is_ambient_zone_enabled("AZ_SPECIAL_UFO_03"))
	{
		set_ambient_zone_state("AZ_SPECIAL_UFO_03", 0, 1);
	}
	terminate_this_thread();
}

