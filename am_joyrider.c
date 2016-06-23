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
	auto uLocal_56 = 8;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 2;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 8;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 8;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	struct<11> Local_86 = 0;
	auto uLocal_97 = 0;
	Vector3[] vLocal_98 = new Vector3[32];
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<20> Local_204 = 0;
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
	iLocal_200 = 20;
	if (network_is_game_in_progress() && func_65(player_id(), 0, 1))
	{
		func_58(Local_204);
	}
	else
	{
		func_54();
	}
	while (true)
	{
		func_53();
		if (func_43() || func_39(9))
		{
			func_54();
		}
		if (network_is_in_tutorial_session())
		{
			func_54();
		}
		switch (func_38(participant_id_to_int()))
		{
			case 0:
				if (func_37() == 1)
				{
					func_36();
					vLocal_98[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_37() == 4)
				{
					vLocal_98[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_37() == 1)
				{
					func_34();
				}
				else if (func_37() == 4)
				{
					vLocal_98[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_32(&(Local_86.f_10));
				if (func_31(&(Local_86.f_10)))
				{
					vLocal_98[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_98[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_54();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_37())
			{
				case 0:
					if (func_30())
					{
						if (func_8())
						{
							Local_86 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_86 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (Local_86.f_9 == 0)
	{
		if (!func_4(Local_86.f_2))
		{
			return true;
		}
		else if (func_3(Local_86.f_3))
		{
			return true;
		}
		else
		{
			if (iLocal_203 == 1)
			{
				if (is_bit_set(Local_86.f_1, false))
				{
					return true;
				}
			}
			if (!is_ped_in_vehicle(net_to_ped(Local_86.f_3), net_to_veh(Local_86.f_2), 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_3(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return true;
}

int func_4(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_5(net_to_veh(iParam0));
	}
	return false;
}

bool func_5(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_6()
{
	switch (Local_86.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_202 == 0)
	{
		iLocal_203 = 0;
		set_bit(&(Local_86.f_1), false);
	}
	if (func_4(Local_86.f_2))
	{
		iVar0 = 1;
	}
	if (network_is_participant_active(int_to_participantindex(iLocal_202)))
	{
		iVar1 = network_get_player_index(int_to_participantindex(iLocal_202));
		iVar2 = get_player_ped(iVar1);
		if (func_65(iVar1, 1, 1))
		{
			if (is_bit_set(Local_86.f_1, false))
			{
				if (iVar0 == 1)
				{
					if (is_entity_at_entity(iVar2, net_to_veh(Local_86.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						clear_bit(&(Local_86.f_1), false);
					}
				}
				else
				{
					clear_bit(&(Local_86.f_1), false);
				}
			}
		}
	}
	iLocal_202++;
	if (iLocal_202 == _network_get_num_participants_host())
	{
		iLocal_202 = false;
		iLocal_203 = 1;
	}
}

bool func_8()
{
	if (can_register_mission_entities(1, 1, 0, 0))
	{
		if (func_29(Local_86.f_4) && func_29(Local_86.f_5))
		{
			if (func_12() && func_9())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_9()
{
	int iVar0;
	
	if ((!network_does_network_id_exist(Local_86.f_3) && func_29(Local_86.f_5)) && network_does_network_id_exist(Local_86.f_2))
	{
		if (func_4(Local_86.f_2))
		{
			if (func_11(&(Local_86.f_3), Local_86.f_2, 22, Local_86.f_5, -1, 1, 1, 1))
			{
				set_ped_random_component_variation(net_to_ped(Local_86.f_3), 0);
				if (func_10())
				{
					set_ped_relationship_group_hash(net_to_ped(Local_86.f_3), Global_1574232);
				}
				else
				{
					set_ped_relationship_group_hash(net_to_ped(Local_86.f_3), Global_1574235);
				}
				set_ped_keep_task(net_to_ped(Local_86.f_3), true);
				if (func_10())
				{
					iVar0 = get_random_int_in_range(0, 10);
					if (iVar0 < 5)
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_86.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_86.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_86.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = get_random_int_in_range(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					set_ped_combat_ability(net_to_ped(Local_86.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					set_ped_combat_ability(net_to_ped(Local_86.f_3), 2);
				}
				else
				{
					set_ped_combat_ability(net_to_ped(Local_86.f_3), 1);
				}
				iVar0 = get_random_int_in_range(0, 4);
				if (iVar0 == 0)
				{
					set_ped_combat_attributes(net_to_ped(Local_86.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					set_ped_combat_attributes(net_to_ped(Local_86.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					set_ped_combat_attributes(net_to_ped(Local_86.f_3), 13, true);
				}
				if (func_10())
				{
					set_ped_combat_attributes(net_to_ped(Local_86.f_3), 20, true);
				}
				if (func_10())
				{
					set_ped_combat_attributes(net_to_ped(Local_86.f_3), 2, true);
				}
				iVar0 = get_random_int_in_range(0, 4);
				if (iVar0 == 0)
				{
					set_ped_combat_movement(net_to_ped(Local_86.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					set_ped_combat_movement(net_to_ped(Local_86.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					set_ped_combat_movement(net_to_ped(Local_86.f_3), 3);
				}
				_0x49E50BDB8BA4DAB2(net_to_ped(Local_86.f_3), 1);
				set_ped_get_out_upside_down_vehicle(net_to_ped(Local_86.f_3), 1);
				set_ped_config_flag(net_to_ped(Local_86.f_3), 29, true);
				set_ped_can_be_knocked_off_vehicle(net_to_ped(Local_86.f_3), 3);
				set_entity_health(net_to_ped(Local_86.f_3), round(200f * Global_262145.f_151));
				set_vehicle_radio_loud(net_to_veh(Local_86.f_2), 1);
				_0x25367DE49D64CF16(net_to_veh(Local_86.f_2), 1);
				func_36();
				task_perform_sequence(net_to_ped(Local_86.f_3), iLocal_196);
				set_model_as_no_longer_needed(Local_86.f_5);
			}
		}
	}
	if (!network_does_network_id_exist(Local_86.f_3))
	{
		return false;
	}
	return true;
}

bool func_10()
{
	if (is_bit_set(get_random_int_in_range(0, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_11(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return false;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), 0))
	{
		return false;
	}
	*uParam0 = ped_to_net(create_ped_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_ped(*uParam0), iParam7);
		if (_0xC7827959479DCC78(net_to_ped(*uParam0)))
		{
			if (iParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_12()
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	if (!network_does_network_id_exist(Local_86.f_2))
	{
		if (func_29(Local_86.f_4))
		{
			if (func_14(&vVar0, &fVar3))
			{
				if (func_13(&(Local_86.f_2), Local_86.f_4, vVar0, fVar3, 1, 1, 1, 0, 1, 1))
				{
					set_vehicle_engine_on(net_to_veh(Local_86.f_2), true, 1, 0);
					set_vehicle_is_wanted(net_to_veh(Local_86.f_2), 1);
					set_vehicle_is_stolen(net_to_veh(Local_86.f_2), true);
					_0x153973AB99FE8980(net_to_veh(Local_86.f_2), "JOYRIDER_GROUP", 0f);
					set_model_as_no_longer_needed(Local_86.f_4);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_86.f_2))
	{
		return false;
	}
	return true;
}

bool func_13(auto uParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (iParam11)
	{
		clear_area_of_vehicles(vParam2, 1f, 0, 0, 1, 1, true);
	}
	iVar0 = create_vehicle(iParam1, vParam2, fParam5, iParam7, iParam6);
	*uParam0 = veh_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam10);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam8)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
			else
			{
				set_network_id_exists_on_all_machines(*uParam0, 0);
			}
		}
		set_vehicle_is_stolen(iVar0, iParam9);
		return true;
	}
	return false;
}

int func_14(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (!iVar0)
	{
		if (_0xA4822F1CF23F4810(&(Local_86.f_6), uParam0, &uVar2, 0f, 180f, 40f, false, 1, 1))
		{
			get_nth_closest_vehicle_node_with_heading(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || get_hash_of_map_area_at_coords(*uParam0) == -289320599)
			{
				if (get_distance_between_coords(-1367.557f, -3220.598f, 12.9448f, Local_86.f_6, 1) >= 600f && get_distance_between_coords(750f, -3200f, 6f, Local_86.f_6, 1) >= 700f)
				{
					if (get_distance_between_coords(func_28(player_id()), *uParam0, 1) <= 250f - 50f)
					{
						if (iLocal_201 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								iVar0 = true;
							}
						}
						else
						{
							Local_86 = 4;
						}
					}
				}
			}
		}
	}
	if (!iVar0)
	{
		iLocal_200 += 4;
		if (iLocal_200 >= 80)
		{
			iLocal_200 = 20;
			iLocal_201++;
		}
	}
	return iVar0;
}

bool func_15(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (is_any_vehicle_near_point(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) || is_any_ped_near_point(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (is_any_object_near_point(vParam0, fParam5, iParam18))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam13)
	{
		if (get_number_of_fires_in_range(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_21(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_16(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_16(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_65(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_28(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (is_sphere_visible(vParam0, fParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_65(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_17(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!iParam7)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (get_distance_between_coords(func_28(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_28(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_17(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

auto func_20()
{
	return Global_1312747;
}

bool func_21(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_65(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_17(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_22(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_28(iVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_22(int iParam0)
{
	if (func_27(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_26(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_23(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_25(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_24();
}

struct<13> func_26(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_27(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_26(iParam0)};
		Global_2459453 = {func_26(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_28(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

int func_30()
{
	if (!is_bit_set(iLocal_195, true))
	{
		if (get_nth_closest_vehicle_node(func_28(player_id()), iLocal_199, &(Local_86.f_6), 4, 3f, 0f))
		{
			set_bit(&iLocal_195, true);
		}
		else
		{
			iLocal_199++;
		}
	}
	return is_bit_set(iLocal_195, true);
}

bool func_31(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_32(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_33(uParam0, 0, 0);
		}
	}
}

void func_33(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = _0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

void func_34()
{
	switch (vLocal_98[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_36();
			func_35();
			if (Local_86.f_9 > 0)
			{
				vLocal_98[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_54();
			break;
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	
	if (!is_bit_set(vLocal_98[participant_id_to_int() /*3*/].f_1, false))
	{
		if (func_4(Local_86.f_2) && !func_3(Local_86.f_3))
		{
			iVar0 = get_entity_health(net_to_veh(Local_86.f_2));
			fVar1 = get_entity_speed(net_to_veh(Local_86.f_2));
			if (iVar0 < 200)
			{
				func_36();
				task_perform_sequence(net_to_ped(Local_86.f_3), iLocal_198);
				set_bit(&(vLocal_98[participant_id_to_int() /*3*/].f_1), false);
			}
			else if (fVar1 < 3f)
			{
				if ((((is_entity_upsidedown(net_to_veh(Local_86.f_2)) || is_vehicle_stuck_timer_up(net_to_veh(Local_86.f_2), 3, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_86.f_2), 1, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_86.f_2), 0, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_86.f_2), 2, 10000))
				{
					func_36();
					task_perform_sequence(net_to_ped(Local_86.f_3), iLocal_197);
					set_bit(&(vLocal_98[participant_id_to_int() /*3*/].f_1), false);
				}
			}
		}
	}
}

void func_36()
{
	if (!is_bit_set(iLocal_195, false))
	{
		if (func_4(Local_86.f_2))
		{
			open_sequence_task(&iLocal_196);
			task_vehicle_mission_coors_target(false, net_to_veh(Local_86.f_2), Local_86.f_6, 14, 30f, 786468, 15f, 1f, 0);
			task_vehicle_drive_wander(false, net_to_veh(Local_86.f_2), 30f, 786468);
			close_sequence_task(iLocal_196);
			open_sequence_task(&iLocal_197);
			task_leave_any_vehicle(false, 0, 1);
			close_sequence_task(iLocal_197);
			open_sequence_task(&iLocal_198);
			task_vehicle_mission_coors_target(false, net_to_veh(Local_86.f_2), Local_86.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			task_leave_any_vehicle(false, 0, 1);
			close_sequence_task(iLocal_198);
			set_bit(&iLocal_195, false);
		}
	}
}

int func_37()
{
	return Local_86;
}

auto func_38(int iParam0)
{
	return vLocal_98[iParam0 /*3*/];
}

int func_39(int iParam0)
{
	return !func_40(iParam0);
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5064)
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return false;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_41(4))
			{
				return false;
			}
			if (func_42(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return true;
}

bool func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_65(int_to_playerindex(iVar0), 0, 1))
		{
			if (is_bit_set(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_42(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_43()
{
	int iVar0;
	
	func_50(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return true;
		}
	}
	if (func_49())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_48())
	{
		return true;
	}
	if (func_47(157))
	{
		if (!func_46())
		{
			return true;
		}
	}
	if (func_47(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_44() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_44()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_44()
{
	switch (func_45())
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

auto func_45()
{
	return Global_25120;
}

auto func_46()
{
	return Global_2434762.f_574;
}

bool func_47(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_48()
{
	return Global_2443085;
}

auto func_49()
{
	return Global_2434762.f_569;
}

void func_50(auto uParam0)
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
					func_51(iVar0);
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

void func_51(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_65(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_52(iVar4, &iVar5))
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

bool func_52(int iParam0, auto uParam1)
{
	if (does_entity_exist(iParam0))
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

void func_53()
{
	wait(0);
}

void func_54()
{
	func_57();
	if (func_37() == 4 && Local_86.f_4 != 0)
	{
		set_vehicle_model_is_suppressed(Local_86.f_4, false);
	}
	if (func_4(Local_86.f_2))
	{
		_0x18EB48CFC41F2EA0(net_to_veh(Local_86.f_2), 0f);
	}
	stop_audio_scene("JOYRIDER_RADIO_SCENE");
	func_56(9, 0);
	func_55();
}

void func_55()
{
	terminate_this_thread();
}

void func_56(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!is_bit_set(Global_2418472[player_id() /*313*/].f_206, iParam0))
		{
			set_bit(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
		}
	}
	else if (is_bit_set(Global_2418472[player_id() /*313*/].f_206, iParam0))
	{
		clear_bit(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
	}
}

void func_57()
{
	clear_sequence_task(&iLocal_196);
}

void func_58(struct<20> Param0)
{
	int iVar0;
	
	func_63(func_64(Param0), Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	func_61(0, -1, 0);
	network_register_host_broadcast_variables(&Local_86, 12);
	network_register_player_broadcast_variables(&vLocal_98, 97);
	if (!func_60())
	{
		func_54();
	}
	if (network_is_game_in_progress())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
			if (Global_2460486.f_4245 == 0)
			{
				iVar0 = get_random_int_in_range(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_86.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_86.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_86.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_86.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_86.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_86.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_86.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_86.f_4 = Global_2460486.f_4245;
				Global_2460486.f_4245 = 0;
			}
			set_vehicle_model_is_suppressed(Local_86.f_4, true);
			Local_86.f_5 = func_59(1);
		}
		func_56(9, 1);
		start_audio_scene("JOYRIDER_RADIO_SCENE");
		vLocal_98[participant_id_to_int() /*3*/] = 0;
	}
	else
	{
		func_54();
	}
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(0, 32);
	if (iParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

bool func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_49())
		{
			return false;
		}
		if (func_47(155))
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

bool func_61(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_55();
			}
			else
			{
				return false;
			}
		}
		if (!func_62())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_55();
					}
					else
					{
						return false;
					}
				}
				if (func_49())
				{
					if (!iParam2)
					{
						func_55();
					}
					else
					{
						return false;
					}
				}
				if (func_47(155))
				{
					if (!iParam2)
					{
						func_55();
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
					func_55();
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
		if (!network_is_game_in_progress())
		{
			if (!iParam2)
			{
				func_55();
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
			func_55();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_62()
{
	return Global_1315888;
}

void func_63(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_55();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_64(int iParam0)
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

bool func_65(int iParam0, int iParam1, int iParam2)
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

