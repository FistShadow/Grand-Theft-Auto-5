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
	struct<27> Local_96 = 0;
	auto uLocal_123 = 0;
	Vector3[] vLocal_124 = new Vector3[32];
	auto uLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	struct<20> Local_224 = 0;
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
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_192(player_id(), 0, 1))
	{
		func_179(Local_224);
	}
	else
	{
		func_175();
	}
	while (true)
	{
		func_174();
		if (func_164() || func_160(15))
		{
			func_175();
		}
		if (network_is_in_tutorial_session())
		{
			func_175();
		}
		switch (func_159(participant_id_to_int()))
		{
			case 0:
				if (func_158() == 1)
				{
					if (func_157(60000))
					{
						if (network_does_network_id_exist(Local_96.f_2))
						{
							if (is_vehicle_driveable(net_to_veh(Local_96.f_2), 0))
							{
								if (!func_155())
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
									{
										func_154("PTD_HELP1", -1);
									}
									else
									{
										func_154("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					vLocal_124[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_158() == 4)
				{
					vLocal_124[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_158() == 1)
				{
					func_20();
				}
				else if (func_158() == 4)
				{
					vLocal_124[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_96.f_24));
				if (func_18(&(Local_96.f_24)))
				{
					vLocal_124[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_124[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_175();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_158())
			{
				case 0:
					if (func_11())
					{
						Local_96 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_96 = 4;
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
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_96.f_2))
	{
		if (Local_96.f_22 > 0)
		{
			if (network_does_network_id_exist(Local_96.f_2))
			{
				if (!is_entity_in_angled_area(net_to_veh(Local_96.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, true, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
					{
						Var0.f_2 = 111;
					}
					else
					{
						Var0.f_2 = 114;
					}
					func_5(Var0, func_6(1));
					GAMEPLAY::SET_BIT(&(Local_96.f_1), true);
					return true;
				}
			}
		}
	}
	if (Local_96.f_23 == 0)
	{
		if (Local_96 != 4)
		{
			if (network_does_network_id_exist(Local_96.f_2))
			{
				if (is_entity_dead(net_to_veh(Local_96.f_2), 0))
				{
					if (func_3(&(Local_96.f_26), 3000, 0))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
						{
							Var14.f_2 = 110;
						}
						else
						{
							Var14.f_2 = 113;
						}
						func_5(Var14, func_6(1));
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_3(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_4(uParam0, iParam2, 0);
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

void func_4(auto uParam0, int iParam1, int iParam2)
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

void func_5(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_6(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_192(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_8(net_to_veh(iParam0));
	}
	return false;
}

bool func_8(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

void func_9()
{
	switch (Local_96.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	int iVar14;
	
	if (is_entity_dead(net_to_veh(Local_96.f_2), 0))
	{
		if (Local_96 != 4)
		{
			iLocal_222 = false;
			while (iLocal_222 < _network_get_num_participants_host())
			{
				if (network_is_participant_active(int_to_participantindex(iLocal_222)))
				{
					iVar14 = network_get_player_index(int_to_participantindex(iLocal_222));
					if (GAMEPLAY::IS_BIT_SET(vLocal_124[iLocal_222 /*3*/].f_1, false))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
						{
							Var0.f_2 = 109;
						}
						else
						{
							Var0.f_2 = 112;
						}
						Var0.f_10 = iVar14;
						func_5(Var0, func_6(1));
						Local_96 = 4;
						return;
					}
					if (GAMEPLAY::IS_BIT_SET(vLocal_124[iLocal_222 /*3*/].f_1, true))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 2))
						{
							GAMEPLAY::SET_BIT(&(Local_96.f_1), 2);
						}
					}
				}
				iLocal_222++;
			}
		}
	}
}

bool func_11()
{
	if (func_17(Local_96.f_4) && func_17(Local_96.f_5))
	{
		if (func_14() && func_12())
		{
			set_model_as_no_longer_needed(Local_96.f_4);
			set_model_as_no_longer_needed(Local_96.f_5);
			return true;
		}
	}
	return false;
}

bool func_12()
{
	if ((!network_does_network_id_exist(Local_96.f_3) && func_17(Local_96.f_5)) && network_does_network_id_exist(Local_96.f_2))
	{
		if (func_7(Local_96.f_2))
		{
			if (func_13(&(Local_96.f_3), Local_96.f_2, 22, Local_96.f_5, -1, 1, 1, 1))
			{
				set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_3), true);
				PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_3), Global_1574232);
				set_ped_random_component_variation(net_to_ped(Local_96.f_3), 0);
				set_ped_keep_task(net_to_ped(Local_96.f_3), true);
			}
		}
	}
	if (!network_does_network_id_exist(Local_96.f_3))
	{
		return false;
	}
	return true;
}

bool func_13(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	*uParam0 = ped_to_net(PED::CREATE_PED_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
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

bool func_14()
{
	int iVar0;
	
	if (!network_does_network_id_exist(Local_96.f_2))
	{
		if (func_17(Local_96.f_4))
		{
			if (func_15(&(Local_96.f_2), Local_96.f_4, Local_96.f_6, func_16(Local_96.f_6, Local_96.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				set_vehicle_doors_locked(net_to_veh(Local_96.f_2), 2);
				freeze_entity_position(net_to_veh(Local_96.f_2), false);
				set_entity_dynamic(net_to_veh(Local_96.f_2), 1);
				activate_physics(net_to_veh(Local_96.f_2));
				set_vehicle_forward_speed(net_to_veh(Local_96.f_2), 30f);
				set_heli_blades_full_speed(net_to_veh(Local_96.f_2));
				set_vehicle_engine_on(net_to_veh(Local_96.f_2), true, 1, 0);
				set_vehicle_engine_can_degrade(net_to_veh(Local_96.f_2), false);
				_0x3910051CCECDB00C(net_to_veh(Local_96.f_2), false);
				if (Local_96.f_4 == joaat("cuban800"))
				{
					_set_vehicle_landing_gear(net_to_veh(Local_96.f_2), 3);
				}
				if (decor_is_registered_as_type("MPBitset", 3))
				{
					if (decor_exist_on(net_to_veh(Local_96.f_2), "MPBitset"))
					{
						iVar0 = decor_get_int(net_to_veh(Local_96.f_2), "MPBitset");
					}
					GAMEPLAY::SET_BIT(&iVar0, 10);
					decor_set_int(net_to_veh(Local_96.f_2), "MPBitset", iVar0);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_96.f_2))
	{
		return false;
	}
	return true;
}

bool func_15(auto uParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

float func_16(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_18(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_19(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (vLocal_124[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_153();
			func_21();
			if (Local_96.f_23 > 0)
			{
				vLocal_124[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_175();
			break;
	}
}

void func_21()
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar9;
	
	if (network_does_network_id_exist(Local_96.f_2))
	{
		if (!GAMEPLAY::IS_BIT_SET(vLocal_124[participant_id_to_int() /*3*/].f_1, false))
		{
			if (!is_vehicle_driveable(net_to_veh(Local_96.f_2), 0))
			{
			}
			if (is_entity_dead(net_to_veh(Local_96.f_2), 0))
			{
			}
			if (is_entity_dead(net_to_veh(Local_96.f_2), 0))
			{
				if (player_id() == network_get_destroyer_of_network_id(Local_96.f_2, &uVar0))
				{
					func_152(2053, -1);
					iVar1 = func_151(2053, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6470)
					{
						iVar2 = Global_262145.f_6470;
					}
					iVar3 = Global_262145.f_6468 * iVar2;
					func_103(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6469)
					{
						iVar1 = Global_262145.f_6469;
					}
					iVar4 = Global_262145.f_6467 * iVar1;
					func_99(iVar4, 1, 1, 1092616192);
					Global_2445403 = iVar4;
					func_56(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_55())
						{
							func_46(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							_0xFB6DB092FBAE29E6(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					GAMEPLAY::SET_BIT(&(vLocal_124[participant_id_to_int() /*3*/].f_1), false);
				}
			}
			else
			{
				if (network_is_host_of_this_script())
				{
					if (Local_96.f_22 < 4)
					{
						if (is_entity_at_coord(net_to_veh(Local_96.f_2), Local_96.f_9[Local_96.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_96.f_22++;
						}
					}
				}
				if (network_has_control_of_network_id(Local_96.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_96.f_2) && func_23(Local_96.f_3))
						{
							network_explode_vehicle(net_to_veh(Local_96.f_2), 1, 1, -1);
							if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2))
							{
								func_22(&(Local_96.f_2));
							}
							if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_3))
							{
								set_ped_keep_task(net_to_ped(Local_96.f_3), true);
								func_22(&(Local_96.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(auto uParam0)
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

int func_23(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

bool func_24()
{
	if (network_does_network_id_exist(Local_96.f_2))
	{
		if (is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2), 0, 7000))
		{
			return true;
		}
		if (is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2), 1, 40000))
		{
			return true;
		}
		if (is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2), 3, 30000))
		{
			return true;
		}
		if (is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2), 2, 30000))
		{
			return true;
		}
	}
	return false;
}

void func_25()
{
	Vector3 vVar0;
	
	if (func_7(Local_96.f_2) && !func_26(Local_96.f_3))
	{
		if (is_ped_in_vehicle(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), 0))
		{
			if (Local_96.f_22 < 4)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
				{
					task_plane_mission(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), false, false, Local_96.f_9[Local_96.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					task_heli_mission(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), false, false, Local_96.f_9[Local_96.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 2) && !GAMEPLAY::IS_BIT_SET(vLocal_124[participant_id_to_int() /*3*/].f_1, true))
			{
				vVar0 = {get_offset_from_entity_in_world_coords(net_to_veh(Local_96.f_2), 0f, 12000f, 0f)};
				if (vVar0.x < -3700f)
				{
					vVar0.x = -3700f;
				}
				else if (vVar0.x > 4500f)
				{
					vVar0.x = 4500f;
				}
				if (vVar0.y < -3900f)
				{
					vVar0.y = -3900f;
				}
				else if (vVar0.y > 8000f)
				{
					vVar0.y = 8000f;
				}
				vVar0.z = 100f;
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
				{
					task_plane_mission(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), false, false, vVar0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					task_heli_mission(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), false, false, vVar0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
				}
				GAMEPLAY::SET_BIT(&(vLocal_124[participant_id_to_int() /*3*/].f_1), true);
			}
		}
	}
}

int func_26(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return PED::IS_PED_INJURED(net_to_ped(iParam0));
	}
	return true;
}

void func_27(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	func_28(1, iParam0, sParam1, sParam2, iParam3, iParam4);
}

void func_28(int iParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	auto uVar0;
	int iVar1;
	
	uVar0 = uParam1;
	iVar1 = false;
	func_29(iParam0, sParam2, uVar0, iVar1, sParam3, iParam4, iParam5);
}

void func_29(auto uParam0, char* sParam1, auto uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam1) > 15)
	{
		return;
	}
	if (!is_string_null_or_empty(sParam4))
	{
		if (_0x43E4111189E54F0E(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, iParam3);
	func_34(iVar0, sParam1);
	if (is_string_null_or_empty(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!is_string_null_or_empty(sParam4))
	{
		func_31(iVar0, sParam4, iParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, int iParam2)
{
	StringCopy(&(Global_1332285.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!iParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(auto uParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[uParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, sParam1, 16);
	Global_1332285.f_59[iParam0 /*16*/].f_3 = {cVar0};
}

void func_35(int iParam0, auto uParam1, int iParam2)
{
	Global_1332285.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
		GAMEPLAY::CLEAR_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
		GAMEPLAY::CLEAR_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, auto uParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1332285.f_59[iParam0 /*16*/]), false);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1332285.f_59[iParam0 /*16*/], false);
}

bool func_40()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(0, 65535), false))
	{
		return true;
	}
	return false;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 += iParam1;
	func_42(iParam0, iVar0, iParam2);
}

void func_42(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_44(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_43(auto uParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_44(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
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

auto func_45()
{
	return Global_1312747;
}

void func_46(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_55())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_47(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_55())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_45()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_54(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_53(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_55())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_50(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_50(auto uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_51(uParam0.f_8.f_3);
	func_51(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_51(auto uParam0)
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

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_53(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_54(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_55())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_55()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_98())
		{
			if (func_97(0))
			{
				if (network_is_player_active(func_96()))
				{
					if (func_95() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_95();
						*iParam0 -= iVar0;
					}
					func_93(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_60("GB_BCUT_TICK1", func_96(), iVar0, 0, 0, 1, 1);
					}
					func_59(20);
					func_57(func_96(), iVar0, 1);
				}
			}
		}
	}
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_192(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_58(iParam0));
	}
}

auto func_58(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam5)
	{
		if (!iParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(func_69(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_67(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_61(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_61(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_66() || !network_is_activity_session()) || !func_64(player_id(), 0))
	{
		return;
	}
	iVar0 = func_62(iParam2);
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

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_63(iVar0);
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

void func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_65(-1, 0) == 8;
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

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_45();
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

int func_66()
{
	return is_dlc_present(-1762644250);
}

auto func_67(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_68(&cVar0);
}

auto func_68(char[4] cParam0)
{
	return cParam0;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_91(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_91(player_id()) || (func_90() && func_89()))
	{
		iVar0 = func_88();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_192(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_87(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_77(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_87(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_87(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_77(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	return func_71(player_id(), iParam0, iParam1, iParam2);
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1);
			}
			else
			{
				return func_72(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1);
	if (func_73(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, false);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, true);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_86(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_76(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_75(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_85(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_80(iParam0);
	if (!iVar3 == -1)
	{
		return func_78(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_79(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_84())
	{
		if (func_82(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_81(int iParam0)
{
	if (iParam0 != func_84())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_84();
}

int func_82(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_83(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_84();
}

int func_83(int iParam0)
{
	if (iParam0 != func_84())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_84())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_84()
{
	return -1;
}

int func_85(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_71(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_88()
{
	return Global_2359301.f_2;
}

int func_89()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_90()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_91(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return true;
	}
	if (func_92())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_92()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_94(1);
	}
	else
	{
		iVar1 = func_94(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_94(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_95()
{
	return Global_262145.f_10328;
}

auto func_96()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_97(int iParam0)
{
	return func_82(player_id(), iParam0);
}

int func_98()
{
	return func_83(player_id());
}

void func_99(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_100(iParam0, iParam1, iParam2, fParam3);
}

void func_100(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_101(iParam0, iParam1, iParam2, fParam3);
}

void func_101(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = iParam0 * iParam1;
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = 100f - fParam3;
		iVar1 = floor(IntToFloat(iVar0) * fVar2 / 100f);
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1587523[player_id() /*444*/].f_195.f_4 = iVar1;
	Global_1587523[player_id() /*444*/].f_195.f_3 += iVar1;
	if (iParam2 == 1)
	{
		func_102(iVar1, 0);
	}
}

void func_102(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	iParam0 = iParam0;
}

int func_103(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_104(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_104(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_114(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_110(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_105(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_105(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_108(iParam0, 1)};
	if (iParam0 == func_107(PLAYER::PLAYER_PED_ID()))
	{
		func_106(1);
	}
	func_110(vVar0, iParam1, 0, sParam2);
}

void func_106(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_107(int iParam0)
{
	return iParam0;
}

Vector3 func_108(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_109(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!is_entity_dead(iParam0, 0))
	{
		fVar3 = get_entity_heading(iParam0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar4, &vVar7);
	if (iParam1)
	{
		fVar10 = vVar7.z + 0.18f;
	}
	else
	{
		fVar10 = vVar4.z + 0.18f;
	}
	vVar0 = {_get_object_offset_from_coords(vVar0, fVar3, 0f, 0f, fVar10)};
	return vVar0;
}

int func_109(int iParam0)
{
	return iParam0;
}

void func_110(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = {vParam0};
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_113(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_112();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_111();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_111()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_112()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_113(Vector3 vParam0, auto uParam1, auto uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = 1f - fVar0 - 5f / 20f - 5f;
	fVar2 = fVar1 * 0.402f - 0.212f;
	fVar3 = fVar1 * 0.476f - 0.286f;
	*uParam3 = fVar2 + 0.212f;
	*uParam4 = fVar3 + 0.286f;
	return fVar1;
}

auto func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_115(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_115(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_150(player_id()) || func_149(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_148(sParam2))
	{
	}
	if (func_147())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_145(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_144(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_141(0, &iVar1);
					break;
				
				case 3:
					func_141(1, &iVar1);
					break;
				
				case 1:
					func_138(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_136(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_126(func_135(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_136(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_120(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_116(func_118(player_id()) + iVar1);
			}
			else
			{
				func_116(func_118(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_116(int iParam0)
{
	if (func_147())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_117(joaat("mpply_globalxp"), iParam0);
	}
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_118(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_192(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_119(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_119(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_119(int iParam0)
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

void func_120(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_125(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_123(func_124(&Var0));
			if (iVar13 == 0)
			{
				func_122(&Global_1347641, iParam0);
				func_121(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_122(&Global_1347642, iParam0);
				func_121(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_122(&Global_1347643, iParam0);
				func_121(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_122(&Global_1347644, iParam0);
				func_121(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_122(&Global_1347645, iParam0);
				func_121(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_122(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_123(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_124(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

struct<13> func_125(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_147())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_44(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_134(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_132(iParam0, 1);
		}
		func_131(632, iParam0, -1, 1);
		func_130(633, func_132(iParam0, 1), -1, 1);
		Global_1347756[func_44(-1)] = iParam0;
		func_127(7, 0);
	}
}

void func_127(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_129(iParam0, iParam1))
	{
		uVar0 = func_128();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_128()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_129(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_44(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_44(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_44(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_44(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_44(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_44(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_44(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_44(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_44(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_44(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_44(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_44(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_44(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_44(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_44(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_44(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_44(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_44(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_44(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_44(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_44(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_44(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_44(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_44(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_133(iParam0, 0);
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_134(int iParam0)
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

int func_135(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_44(-1)];
			}
			else if (func_134(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_44(-1)];
	}
	return 0;
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_151(iParam0, func_44(iParam2), 0);
	iVar0 += iParam1;
	if (!func_137(iParam0))
	{
		func_130(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_131(iParam0, iVar0, iParam2, 1);
	}
}

bool func_137(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_76(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_140(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_139(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_139(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_139(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_140(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_125(iParam0)};
		Global_2459453 = {func_125(iParam1)};
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

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_192(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_140(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_192(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_142(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_140(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_139(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_139(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_142(int iParam0, int iParam1)
{
	return vdist(func_143(iParam0), func_143(iParam1));
	return 0f;
}

Vector3 func_143(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

auto func_144(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_139(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_145(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_135(player_id()))
		{
			iParam0 = -func_135(player_id());
		}
	}
	if (func_146(8000, 0, 0) > 0)
	{
		if (func_146(8000, 0, 0) < iParam0 + func_135(player_id()))
		{
			iParam0 = func_146(8000, 0, 0) - func_135(player_id());
		}
	}
	return iParam0;
}

auto func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_147()
{
	return true;
}

bool func_148(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_149(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_150(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_44(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_151(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_137(iParam0))
	{
		func_130(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
}

void func_153()
{
	if (network_does_network_id_exist(Local_96.f_2) && !is_entity_dead(net_to_veh(Local_96.f_2), 0))
	{
		if (!does_blip_exist(iLocal_223))
		{
			iLocal_223 = add_blip_for_entity(net_to_veh(Local_96.f_2));
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
			{
				set_blip_sprite(iLocal_223, 307);
				set_blip_name_from_text_file(iLocal_223, "PTD_BLIPN");
			}
			else
			{
				set_blip_sprite(iLocal_223, 64);
				set_blip_name_from_text_file(iLocal_223, "PTD_BLIPH");
			}
			set_blip_colour(iLocal_223, 1);
			set_blip_flash_timer(iLocal_223, 7000);
			set_blip_priority(iLocal_223, 6);
			if (func_155())
			{
				set_blip_display(iLocal_223, 0);
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, false))
			{
				set_blip_rotation(iLocal_223, round(get_entity_heading(net_to_veh(Local_96.f_2))));
			}
			if (func_155())
			{
				set_blip_display(iLocal_223, 0);
			}
			else
			{
				set_blip_display(iLocal_223, 4);
			}
		}
	}
}

void func_154(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_155()
{
	if (func_156(17))
	{
		return true;
	}
	if (func_156(0))
	{
		return true;
	}
	return false;
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = func_151(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

int func_157(int iParam0)
{
	return absi(get_time_difference(Global_2410698, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_158()
{
	return Local_96;
}

auto func_159(int iParam0)
{
	return vLocal_124[iParam0 /*3*/];
}

int func_160(int iParam0)
{
	return !func_161(iParam0);
}

bool func_161(int iParam0)
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
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
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
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_162(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
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

bool func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_192(int_to_playerindex(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_163(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_164()
{
	int iVar0;
	
	func_171(&iVar0);
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
	if (func_170())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_169())
	{
		return true;
	}
	if (func_168(157))
	{
		if (!func_167())
		{
			return true;
		}
	}
	if (func_168(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_165() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_165()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_165()
{
	switch (func_166())
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

auto func_166()
{
	return Global_25120;
}

auto func_167()
{
	return Global_2434762.f_574;
}

bool func_168(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_169()
{
	return Global_2443085;
}

auto func_170()
{
	return Global_2434762.f_569;
}

void func_171(auto uParam0)
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
					func_172(iVar0);
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

void func_172(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_192(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_173(iVar4, &iVar5))
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

bool func_173(int iParam0, auto uParam1)
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

void func_174()
{
	wait(0);
}

void func_175()
{
	if (does_blip_exist(iLocal_223))
	{
		remove_blip(&iLocal_223);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, true))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_178();
	if (func_158() == 4 && Local_96.f_4 != 0)
	{
		set_vehicle_model_is_suppressed(Local_96.f_4, false);
	}
	func_177(15, 0);
	func_176();
}

void func_176()
{
	terminate_this_thread();
}

void func_177(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
	}
}

void func_178()
{
	clear_sequence_task(&uLocal_221);
}

void func_179(struct<20> Param0)
{
	int iVar0;
	
	func_190(func_191(Param0), Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	func_188(0, -1, 0);
	network_register_host_broadcast_variables(&Local_96, 28);
	network_register_player_broadcast_variables(&vLocal_124, 97);
	if (!func_187())
	{
		func_175();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
			iVar0 = get_random_int_in_range(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_96.f_4 = joaat("cuban800");
					Local_96.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_96.f_4 = joaat("stunt");
					Local_96.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_96.f_4 = joaat("duster");
					Local_96.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_96.f_4 = joaat("mammatus");
					Local_96.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_96.f_4 = joaat("maverick");
					Local_96.f_5 = joaat("a_m_m_eastsa_02");
					GAMEPLAY::SET_BIT(&(Local_96.f_1), false);
					break;
				
				case 5:
					Local_96.f_4 = joaat("swift");
					Local_96.f_5 = joaat("a_m_y_busicas_01");
					GAMEPLAY::SET_BIT(&(Local_96.f_1), false);
					break;
			}
			if (Local_96.f_4 != 0)
			{
				set_vehicle_model_is_suppressed(Local_96.f_4, true);
			}
			func_186();
			func_180();
		}
		func_177(15, 1);
		vLocal_124[participant_id_to_int() /*3*/] = 0;
	}
	else
	{
		func_175();
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = get_random_int_in_range(0, 3);
		Local_96.f_9[iVar0 /*3*/] = {func_182(iVar1)};
		if (iVar0 > 0)
		{
			if (func_181(Local_96.f_9[iVar0 /*3*/], Local_96.f_9[iVar0 - 1 /*3*/], 250f, 0))
			{
				Local_96.f_9[iVar0 /*3*/] = {func_182(iVar1 + 1)};
			}
		}
		iVar0++;
	}
}

bool func_181(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

Vector3 func_182(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_185();
		
		case 1:
			return func_184();
		
		case 2:
			return func_183();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_183()
{
	switch (get_random_int_in_range(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_184()
{
	switch (get_random_int_in_range(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_185()
{
	switch (get_random_int_in_range(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_186()
{
	Local_96.f_6 = {func_182(get_random_int_in_range(0, 3))};
	Local_96.f_6 = {Local_96.f_6 + Vector(120f, 0f, 0f)};
}

bool func_187()
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
		if (func_170())
		{
			return false;
		}
		if (func_168(155))
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

bool func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_176();
			}
			else
			{
				return false;
			}
		}
		if (!func_189())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_176();
					}
					else
					{
						return false;
					}
				}
				if (func_170())
				{
					if (!iParam2)
					{
						func_176();
					}
					else
					{
						return false;
					}
				}
				if (func_168(155))
				{
					if (!iParam2)
					{
						func_176();
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
					func_176();
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
				func_176();
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
			func_176();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_189()
{
	return Global_1315888;
}

void func_190(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_176();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_191(int iParam0)
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

bool func_192(int iParam0, int iParam1, int iParam2)
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

