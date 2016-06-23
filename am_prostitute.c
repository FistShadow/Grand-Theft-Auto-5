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
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	Vector3[] vLocal_55 = new Vector3[32];
	struct<20> Local_152 = 0;
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
	if (network_is_game_in_progress())
	{
		func_36(Local_152);
	}
	else
	{
		func_33();
	}
	iLocal_50 = get_game_timer();
	while (true)
	{
		func_32();
		if ((func_22() || network_is_in_tutorial_session()) || (func_21(player_id()) || func_20(player_id())))
		{
			func_33();
		}
		if (network_is_game_in_progress())
		{
			func_2();
			func_1();
			iLocal_51++;
			if (iLocal_51 >= _network_get_num_participants_host())
			{
				iLocal_51 = 0;
			}
		}
		else
		{
			func_33();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = network_player_id_to_int();
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (iLocal_51 % iVar0 == 0)
		{
			if (network_is_participant_active(int_to_participantindex(iVar0)))
			{
				iVar2 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
				if (!is_entity_dead(iVar2, 0))
				{
					if (vLocal_55[iVar0 /*3*/].f_2)
					{
						if (vdist2(get_entity_coords(player_ped_id(), 0), get_entity_coords(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_53)
							{
								request_anim_dict("mini@prostitutes@sexlow_veh");
								request_anim_dict("mini@prostitutes@sexnorm_veh");
								request_anim_dict("mini@prostitutes@sexlow_veh_first_person");
								request_anim_dict("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_53 = 1;
							}
							if (!is_bit_set(iLocal_52, iVar0))
							{
								set_bit(&iLocal_52, iVar0);
							}
						}
						else if (is_bit_set(iLocal_52, iVar0))
						{
							clear_bit(&iLocal_52, iVar0);
						}
					}
					else if (is_bit_set(iLocal_52, iVar0))
					{
						clear_bit(&iLocal_52, iVar0);
					}
				}
				else if (is_bit_set(iLocal_52, iVar0))
				{
					clear_bit(&iLocal_52, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_52 == 0 && iLocal_53) && !vLocal_55[iVar1 /*3*/].f_2)
	{
		remove_anim_dict("mini@prostitutes@sexlow_veh");
		remove_anim_dict("mini@prostitutes@sexnorm_veh");
		remove_anim_dict("mini@prostitutes@sexlow_veh_first_person");
		remove_anim_dict("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_53 = 0;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	
	if (is_entity_dead(player_ped_id(), 0))
	{
		return;
	}
	if (iLocal_50 > get_game_timer())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = network_player_id_to_int();
	iVar3 = false;
	if (does_entity_exist(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar1 = player_ped_id();
			if (func_19(&iVar1))
			{
				iVar3 = true;
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if ((func_16(player_id(), 1) || func_15()) || !iVar3)
			{
				iLocal_49 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_50 = get_game_timer() + 0;
					iLocal_49 = 2;
				}
				else
				{
					iLocal_50 = get_game_timer() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25273 = 0f;
				SCRIPT::REQUEST_SCRIPT("pb_prostitute");
				iLocal_50 = get_game_timer() + 250;
				vLocal_55[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = 3;
			}
			else
			{
				iLocal_50 = get_game_timer() + 250;
			}
			break;
		
		case 3:
			if ((SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && _get_number_of_instances_of_streamed_script(joaat("pb_prostitute")) <= 0) && !network_is_script_active("pb_prostitute", network_player_id_to_int(), 1, 0))
			{
				uVar4 = func_11(iVar2);
				iLocal_54 = SYSTEM::START_NEW_SCRIPT_with_args("pb_prostitute", &uVar4, 1, 2050);
				set_script_as_no_longer_needed("pb_prostitute");
				iLocal_49 = 0;
			}
			iLocal_50 = get_game_timer() + 0;
			break;
		
		case 4:
			if (func_3())
			{
				vLocal_55[iVar2 /*3*/].f_2 = 0;
				iLocal_50 = get_game_timer() + 250;
				iLocal_49 = 5;
			}
			else
			{
				iLocal_50 = get_game_timer() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(player_id(), 1) && !func_15()) && iVar3)
			{
				iLocal_50 = get_game_timer() + 250;
				iLocal_49 = 0;
			}
			else
			{
				iLocal_50 = get_game_timer() + 500;
			}
			break;
	}
}

bool func_3()
{
	if (_get_number_of_instances_of_streamed_script(joaat("pb_prostitute")) <= 0 && !network_is_script_active("pb_prostitute", network_player_id_to_int(), 1, 0))
	{
		return true;
	}
	if (iLocal_54 == 0)
	{
		return true;
	}
	if (network_is_game_in_progress())
	{
		func_4();
	}
	else
	{
		force_cleanup_for_all_threads_with_this_name("pb_prostitute", 1);
	}
	return false;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = 262;
	Var0.f_1 = player_id();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		trigger_script_event(1, &Var0, 2, iVar2);
	}
}

auto func_5(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_7(-1, 0) == 8;
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

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

auto func_8()
{
	return Global_1312747;
}

bool func_9(int iParam0, int iParam1, int iParam2)
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

void func_10(int iParam0)
{
	vLocal_55[network_player_id_to_int() /*3*/] = iParam0;
}

auto func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return vLocal_55[network_player_id_to_int() /*3*/];
	}
	return vLocal_55[iParam0 /*3*/];
}

int func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_13();
	iVar1 = network_player_id_to_int();
	if (!does_entity_exist(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_54 != 0 && is_thread_active(iLocal_54))
	{
		if (vLocal_55[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iVar2 = player_ped_id();
				if (func_19(&iVar2))
				{
					iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
					if (does_entity_exist(iVar3))
					{
						if (func_11(iVar1) == get_ped_in_vehicle_seat(iVar3, false) || is_ped_in_vehicle(func_11(iVar1), iVar3, 1))
						{
							vLocal_55[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					vVar4 = {get_entity_coords(func_11(iVar1), 0)};
					vVar7 = {get_entity_coords(iVar0, 0)};
					vVar10 = {get_entity_coords(player_ped_id(), 0)};
					fVar13 = vdist(vVar4, vVar10);
					fVar14 = vdist(vVar10, vVar7);
					if (fVar13 > fVar14)
					{
						if (fVar13 - fVar14 > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()
{
	int iVar0;
	var[] uVar1 = new var[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = get_ped_nearby_peds(player_ped_id(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!is_ped_injured(uVar1[iVar11]))
			{
				if (is_ped_using_scenario(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || is_ped_using_scenario(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!is_ped_fleeing(uVar1[iVar11]))
						{
							return uVar1[iVar11];
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

bool func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_55[iVar0 /*3*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_15()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_16(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_17(iParam0))
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

int func_17(auto uParam0)
{
	return func_18(uParam0);
}

int func_18(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_19(int iParam0)
{
	if (is_ped_in_any_vehicle(*iParam0, 0))
	{
		if (get_ped_in_vehicle_seat(get_vehicle_ped_is_using(*iParam0), -1) == *iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_20(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_21(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

bool func_22()
{
	int iVar0;
	
	func_29(&iVar0);
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
	if (func_28())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_27())
	{
		return true;
	}
	if (func_26(157))
	{
		if (!func_25())
		{
			return true;
		}
	}
	if (func_26(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_23() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_23()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_23()
{
	switch (func_24())
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

auto func_24()
{
	return Global_25120;
}

auto func_25()
{
	return Global_2434762.f_574;
}

bool func_26(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_27()
{
	return Global_2443085;
}

auto func_28()
{
	return Global_2434762.f_569;
}

void func_29(auto uParam0)
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
					func_30(iVar0);
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

void func_30(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_31(iVar4, &iVar5))
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

bool func_31(int iParam0, auto uParam1)
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

void func_32()
{
	wait(0);
}

void func_33()
{
	if (iLocal_53)
	{
		remove_anim_dict("mini@prostitutes@sexlow_veh");
		remove_anim_dict("mini@prostitutes@sexnorm_veh");
		remove_anim_dict("mini@prostitutes@sexlow_veh_first_person");
		remove_anim_dict("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (network_is_game_in_progress())
	{
		func_4();
	}
	else
	{
		force_cleanup_for_all_threads_with_this_name("pb_prostitute", 1);
	}
	Global_2460486.f_4 = 0;
	func_34();
}

void func_34()
{
	terminate_this_thread();
}

void func_35()
{
	Global_2428492.f_648.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0), Param0);
	func_37(0, -1, 0);
	network_register_player_broadcast_variables(&vLocal_55, 97);
	if (network_is_game_in_progress())
	{
		func_4();
	}
	else
	{
		force_cleanup_for_all_threads_with_this_name("pb_prostitute", 1);
	}
	set_this_script_can_be_paused(0);
}

bool func_37(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_34();
			}
			else
			{
				return false;
			}
		}
		if (!func_38())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_34();
					}
					else
					{
						return false;
					}
				}
				if (func_28())
				{
					if (!iParam2)
					{
						func_34();
					}
					else
					{
						return false;
					}
				}
				if (func_26(155))
				{
					if (!iParam2)
					{
						func_34();
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
					func_34();
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
				func_34();
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
			func_34();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_38()
{
	return Global_1315888;
}

void func_39(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_34();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_40(int iParam0)
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

