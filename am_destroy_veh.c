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
	struct<48> Local_96 = 0;
	auto uLocal_144 = 0;
	Vector3[] vLocal_145 = new Vector3[32];
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	auto uLocal_250 = 0;
	auto uLocal_251 = 0;
	auto uLocal_252 = 0;
	auto uLocal_253 = 0;
	auto uLocal_254 = 0;
	auto uLocal_255 = 0;
	auto uLocal_256 = 0;
	struct<8>[] Local_257 = new struct<8>[3];
	auto uLocal_282 = 0;
	auto uLocal_283 = 0;
	struct<20> Local_284 = 0;
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
	iLocal_246 = 1076369579;
	iLocal_247 = 20;
	if (network_is_game_in_progress() && func_205(player_id(), 0, 1))
	{
		func_196(Local_284);
	}
	else
	{
		func_192();
	}
	while (true)
	{
		func_191();
		if (func_181() || func_177(17))
		{
			func_192();
		}
		if (network_is_in_tutorial_session())
		{
			func_192();
		}
		switch (func_176(participant_id_to_int()))
		{
			case 0:
				if (func_175() == 1)
				{
					func_174();
					func_173();
					if (func_172(60000))
					{
						if (!func_170())
						{
							if (!is_this_model_a_bike(Local_96.f_10))
							{
								func_169("DSV_HELP1", -1);
							}
							else
							{
								func_169("DSV_HELP2", -1);
							}
						}
					}
					vLocal_145[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_175() == 4)
				{
					vLocal_145[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_175() == 1)
				{
					func_40();
				}
				else if (func_175() == 4)
				{
					vLocal_145[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_39(&(Local_96.f_45));
				if (func_38(&(Local_96.f_45)))
				{
					vLocal_145[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_145[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_192();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_175())
			{
				case 0:
					if (func_10())
					{
						func_174();
						func_9(&(Local_96.f_43), 0, 0);
						Local_96 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
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
	
	if (Local_96.f_42 == 0)
	{
		if (Local_96 != 4)
		{
			if (is_entity_dead(net_to_veh(Local_96.f_2), 0))
			{
				if (func_6(&(Local_96.f_47), 3000, 0))
				{
					if (Local_96.f_8 == func_5())
					{
						Var0.f_2 = 116;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 117;
						Var0.f_10 = Local_96.f_8;
						func_3(Var0, func_4(1));
					}
					return true;
				}
			}
			if (func_6(&(Local_96.f_43), Global_262145.f_9082, 0))
			{
				Var14.f_2 = 118;
				func_3(Var14, func_4(1));
				return true;
			}
		}
	}
	return false;
}

void func_3(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_4(int iParam0)
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
			if (func_205(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					set_bit(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()
{
	return -1;
}

bool func_6(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_9(uParam0, iParam2, 0);
	if (network_is_game_in_progress() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_7()
{
	switch (Local_96.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	struct<14> Var0;
	int iVar14;
	
	if (Local_96 != 4)
	{
		iLocal_244 = false;
		while (iLocal_244 < _network_get_num_participants_host())
		{
			if (network_is_participant_active(int_to_participantindex(iLocal_244)))
			{
				iVar14 = network_get_player_index(int_to_participantindex(iLocal_244));
				if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, false))
				{
					Var0.f_2 = 117;
					Var0.f_10 = iVar14;
					Local_96.f_8 = iVar14;
					func_3(Var0, func_4(1));
					Local_96 = 4;
					return;
				}
				if (!is_bit_set(Local_96.f_1, false))
				{
					if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, true))
					{
						set_bit(&(Local_96.f_1), false);
					}
					if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, 2))
					{
						set_bit(&(Local_96.f_1), false);
					}
				}
				else
				{
					if (!is_bit_set(Local_96.f_1, true))
					{
						if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, 3))
						{
							set_bit(&(Local_96.f_1), true);
						}
					}
					if (!is_bit_set(Local_96.f_1, 2))
					{
						if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, 4))
						{
							set_bit(&(Local_96.f_1), 2);
						}
					}
					if (!is_bit_set(Local_96.f_1, 3))
					{
						if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, 5))
						{
							set_bit(&(Local_96.f_1), 3);
						}
					}
					if (!is_bit_set(Local_96.f_1, 4))
					{
						if (is_bit_set(vLocal_145[iLocal_244 /*3*/].f_1, 6))
						{
							set_bit(&(Local_96.f_1), 4);
						}
					}
				}
			}
			iLocal_244++;
		}
	}
}

void func_9(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
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
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

bool func_10()
{
	if (func_37(Local_96.f_10) && func_37(Local_96.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			set_model_as_no_longer_needed(Local_96.f_10);
			set_model_as_no_longer_needed(Local_96.f_11);
			return true;
		}
	}
	return false;
}

bool func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_96.f_14)
	{
		if ((!network_does_network_id_exist(Local_96.f_4[iVar0]) && func_37(Local_96.f_11)) && network_does_network_id_exist(Local_96.f_2))
		{
			if (func_17(Local_96.f_2))
			{
				if (Local_96.f_12 == 0)
				{
					if (func_16(&(Local_96.f_4[iVar0]), Local_96.f_2, 22, Local_96.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_96.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_96.f_4[iVar0]), 22, Local_96.f_11, Local_96.f_28[iVar0 /*3*/], Local_96.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_96.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_96.f_14)
	{
		if (!network_does_network_id_exist(Local_96.f_4[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_12(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, iParam7);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam9);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam7)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

void func_13(auto uParam0)
{
	int iVar0;
	
	PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(*uParam0), Global_1574232);
	set_ped_random_component_variation(net_to_ped(*uParam0), 0);
	set_ped_keep_task(net_to_ped(*uParam0), true);
	give_delayed_weapon_to_ped(net_to_ped(*uParam0), func_15(), 25000, 1);
	iVar0 = get_random_int_in_range(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		PED::SET_PED_COMBAT_ABILITY(net_to_ped(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		PED::SET_PED_COMBAT_ABILITY(net_to_ped(*uParam0), 2);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(net_to_ped(*uParam0), 1);
	}
	iVar0 = get_random_int_in_range(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(*uParam0), 5, true);
	}
	else if (iVar0 == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(*uParam0), 17, true);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(*uParam0), 13, true);
	}
	if (func_14())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(*uParam0), 20, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(*uParam0), 2, true);
	iVar0 = get_random_int_in_range(0, 4);
	if (iVar0 == 0)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 3);
	}
	_0x49E50BDB8BA4DAB2(net_to_ped(*uParam0), 1);
	set_ped_get_out_upside_down_vehicle(net_to_ped(*uParam0), 1);
	PED::SET_PED_CONFIG_FLAG(net_to_ped(*uParam0), 29, true);
	set_ped_can_be_knocked_off_vehicle(net_to_ped(*uParam0), 3);
	set_entity_health(net_to_ped(*uParam0), round(200f * Global_262145.f_151));
}

bool func_14()
{
	if (is_bit_set(get_random_int_in_range(0, 65535), false))
	{
		return true;
	}
	return false;
}

int func_15()
{
	switch (Local_96.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

bool func_16(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_17(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_18(net_to_veh(iParam0));
	}
	return false;
}

bool func_18(int iParam0)
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

bool func_19()
{
	if ((!network_does_network_id_exist(Local_96.f_3) && func_37(Local_96.f_11)) && network_does_network_id_exist(Local_96.f_2))
	{
		if (func_17(Local_96.f_2))
		{
			if (Local_96.f_12 == 1)
			{
				if (func_12(&(Local_96.f_3), 22, Local_96.f_11, Local_96.f_24, Local_96.f_27, 1, 1, 1))
				{
					func_13(&(Local_96.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_96.f_3), Local_96.f_2, 22, Local_96.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_96.f_3));
				func_20();
			}
		}
	}
	if (!network_does_network_id_exist(Local_96.f_3))
	{
		return false;
	}
	return true;
}

void func_20()
{
	if (Local_96.f_12 == 0)
	{
		if (func_14())
		{
			task_vehicle_drive_wander(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), get_random_float_in_range(7f, 18f), 786468);
		}
		else
		{
			task_vehicle_drive_wander(net_to_ped(Local_96.f_3), net_to_veh(Local_96.f_2), get_random_float_in_range(7f, 18f), 786599);
		}
	}
	else if (Local_96.f_12 == 2)
	{
		func_174();
		task_perform_sequence(net_to_ped(Local_96.f_3), iLocal_243);
	}
}

bool func_21()
{
	int iVar0;
	
	if (!network_does_network_id_exist(Local_96.f_2))
	{
		if (func_37(Local_96.f_10))
		{
			if (func_23(&(Local_96.f_16), &(Local_96.f_19)))
			{
				if (func_22(&(Local_96.f_2), Local_96.f_10, Local_96.f_16, Local_96.f_19, 1, 1, 1, 1, 0, 1))
				{
					freeze_entity_position(net_to_veh(Local_96.f_2), false);
					set_entity_dynamic(net_to_veh(Local_96.f_2), 1);
					activate_physics(net_to_veh(Local_96.f_2));
					set_vehicle_engine_on(net_to_veh(Local_96.f_2), true, 1, 0);
					_0x3910051CCECDB00C(net_to_veh(Local_96.f_2), false);
					if (decor_is_registered_as_type("Not_Allow_As_Saved_Veh", 3))
					{
						decor_set_int(net_to_veh(Local_96.f_2), "Not_Allow_As_Saved_Veh", true);
					}
					if (decor_is_registered_as_type("MPBitset", 3))
					{
						if (decor_exist_on(net_to_veh(Local_96.f_2), "MPBitset"))
						{
							iVar0 = decor_get_int(net_to_veh(Local_96.f_2), "MPBitset");
						}
						set_bit(&iVar0, 10);
						decor_set_int(net_to_veh(Local_96.f_2), "MPBitset", iVar0);
					}
					if (Local_96.f_12 == 0)
					{
						if (get_vehicle_max_number_of_passengers(net_to_veh(Local_96.f_2)) < Local_96.f_14)
						{
							Local_96.f_14 = get_vehicle_max_number_of_passengers(net_to_veh(Local_96.f_2));
						}
					}
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

bool func_22(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_23(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	Vector3 vVar5;
	
	vVar5 = {func_36(player_id())};
	if (Local_96.f_12 == 1)
	{
		return true;
	}
	if (!iVar0)
	{
		if (_0xA4822F1CF23F4810(&vVar5, uParam0, &uVar2, 0f, 180f, 150f, false, 1, 1))
		{
			get_nth_closest_vehicle_node_with_heading(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (get_distance_between_coords(-1367.557f, -3220.598f, 12.9448f, vVar5, 1) >= 600f && get_distance_between_coords(750f, -3200f, 6f, vVar5, 1) >= 700f)
				{
					if (iLocal_248 <= 5)
					{
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							iVar0 = true;
						}
					}
					else
					{
						Local_96 = 4;
					}
				}
			}
		}
	}
	if (!iVar0)
	{
		iLocal_247 += 4;
		if (iLocal_247 >= 80)
		{
			iLocal_247 = 20;
			iLocal_248++;
		}
	}
	return iVar0;
}

bool func_24(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_30(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_25(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_25(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_205(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_36(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_205(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_26(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_36(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (get_distance_between_coords(func_36(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_26(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

auto func_29()
{
	return Global_1312747;
}

bool func_30(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_205(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_26(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_31(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_36(iVar1), vParam0, 1) < fParam3)
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

bool func_31(int iParam0)
{
	if (func_35(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_34(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_32(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_33(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_33(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_33(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_5();
}

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_35(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_34(iParam0)};
		Global_2459453 = {func_34(iParam1)};
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

Vector3 func_36(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

int func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

bool func_38(auto uParam0)
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

void func_39(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_40()
{
	switch (vLocal_145[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_173();
			func_46();
			func_41();
			if (Local_96.f_42 > 0)
			{
				vLocal_145[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_192();
			break;
	}
}

void func_41()
{
	int iVar0;
	
	func_42(Local_96.f_3, &iLocal_249, -1082130432, 0, 0, 0, 0, -1);
	iVar0 = 0;
	while (iVar0 < Local_96.f_14)
	{
		func_42(Local_96.f_4[iVar0], &(Local_257[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
		iVar0++;
	}
	if (is_bit_set(Local_96.f_1, false))
	{
		if (!is_bit_set(Local_96.f_1, true) && !is_bit_set(vLocal_145[participant_id_to_int() /*3*/].f_1, 3))
		{
			if (network_does_network_id_exist(Local_96.f_3))
			{
				if (network_has_control_of_network_id(Local_96.f_3) || (!_0xA1607996431332DF(Local_96.f_3) && network_is_host_of_this_script()))
				{
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_3), Global_1574233);
					set_bit(&(vLocal_145[participant_id_to_int() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!is_bit_set(Local_96.f_1, 2 + iVar0) && !is_bit_set(vLocal_145[participant_id_to_int() /*3*/].f_1, 4 + iVar0))
			{
				if (network_does_network_id_exist(Local_96.f_4[iVar0]))
				{
					if (network_has_control_of_network_id(Local_96.f_4[iVar0]) || (!_0xA1607996431332DF(Local_96.f_4[iVar0]) && network_is_host_of_this_script()))
					{
						PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_4[iVar0]), Global_1574233);
						if (!is_ped_injured(net_to_ped(Local_96.f_4[iVar0])))
						{
							task_combat_hated_targets_around_ped(net_to_ped(Local_96.f_4[iVar0]), 100f, 0);
						}
						set_bit(&(vLocal_145[participant_id_to_int() /*3*/].f_1), 4 + iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_42(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (func_45())
		{
			Global_2428492 = player_id();
		}
		if (iParam3)
		{
			func_44(net_to_ped(iParam0), iParam1, 1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
		else
		{
			func_44(net_to_ped(iParam0), iParam1, -1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
	}
	else if (does_blip_exist(*iParam1))
	{
		func_43(iParam1);
	}
}

void func_43(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		iVar0 = true;
	}
	if (does_blip_exist(*iParam0.f_1))
	{
		remove_blip(iParam0.f_1);
		iVar0 = true;
	}
	if (does_entity_exist(*iParam0.f_7))
	{
		if (!is_ped_injured(*iParam0.f_7))
		{
			if (does_ped_have_ai_blip(*iParam0.f_7))
			{
				_0xD30C50DF888D58B5(*iParam0.f_7, 0);
			}
		}
		iVar0 = true;
	}
	if (iVar0)
	{
		*iParam0 = {Var1};
	}
}

bool func_44(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			if (iParam8 == -1)
			{
				_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			*uParam1.f_7 = iParam0;
			_0xE52B8E7F85D39A08(iParam0, iParam2);
			_0x97C65887D4B37FA9(iParam0, fParam6);
			if (does_blip_exist(*uParam1))
			{
				set_blip_priority(*uParam1, 7);
			}
		}
		_0x0C4BBF625CA98C4E(iParam0, iParam4);
		hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!is_bit_set(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				set_bit(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!is_bit_set(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					set_bit(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			clear_bit(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

auto func_45()
{
	return Global_1315888;
}

void func_46()
{
	auto uVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	
	if (network_does_network_id_exist(Local_96.f_2))
	{
		if (!is_bit_set(vLocal_145[participant_id_to_int() /*3*/].f_1, false))
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
					func_166(2096, 1, -1);
					func_163(68, 1, -1);
					func_120(0, player_ped_id(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6474, 1, -1, 0, 0);
					if (func_14())
					{
						func_107(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_107(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_6475;
					Global_2445403 = iVar1;
					func_68(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_64(iVar1, 1, 1, 1092616192);
						if (func_63())
						{
							func_54(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							_0xFB6DB092FBAE29E6(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					set_bit(&(vLocal_145[participant_id_to_int() /*3*/].f_1), false);
				}
			}
			else
			{
				if (!is_bit_set(Local_96.f_1, false))
				{
					if (!is_bit_set(vLocal_145[participant_id_to_int() /*3*/].f_1, true))
					{
						if (func_53(player_ped_id(), net_to_veh(Local_96.f_2), 1))
						{
							set_bit(&(vLocal_145[participant_id_to_int() /*3*/].f_1), true);
						}
					}
					if (!is_bit_set(vLocal_145[participant_id_to_int() /*3*/].f_1, 2))
					{
						if (has_entity_been_damaged_by_entity(net_to_veh(Local_96.f_2), player_ped_id(), 1))
						{
							set_bit(&(vLocal_145[participant_id_to_int() /*3*/].f_1), 2);
						}
					}
				}
				if (func_205(player_id(), 1, 1) && func_53(player_ped_id(), net_to_veh(Local_96.f_2), 0))
				{
					if (!is_bit_set(Global_2460486.f_4430, true))
					{
						set_bit(&(Global_2460486.f_4430), true);
					}
				}
				else if (is_bit_set(Global_2460486.f_4430, true))
				{
					clear_bit(&(Global_2460486.f_4430), true);
				}
				func_47();
			}
		}
	}
}

void func_47()
{
	if (!is_bit_set(iLocal_242, false))
	{
		if (func_52(27, -1) == 0)
		{
			if (func_205(player_id(), 1, 1))
			{
				if (func_53(player_ped_id(), net_to_veh(Local_96.f_2), 0))
				{
					if (func_6(&uLocal_282, 300000, 0))
					{
						func_50(27, 1, -1);
						set_bit(&iLocal_242, false);
					}
				}
				else if (func_49(&uLocal_282))
				{
					func_48(&uLocal_282);
				}
			}
			else if (func_49(&uLocal_282))
			{
				func_48(&uLocal_282);
			}
		}
		else
		{
			set_bit(&iLocal_242, false);
		}
	}
}

void func_48(auto uParam0)
{
	*uParam0.f_1 = 0;
}

auto func_49(auto uParam0)
{
	return *uParam0.f_1;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492706[iParam0 /*5*/][func_51(iParam2)];
	stat_set_bool(iVar0, iParam1, 1);
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492706[iParam0 /*5*/][func_51(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0, 0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1, 0))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_54(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_63())
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
				func_55(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_55(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_55(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_63())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_29()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_62(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_61(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_56(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_57(iParam0);
	}
}

void func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_63())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_60(iParam0))
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
		func_58(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_58(auto uParam0)
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
	func_59(uParam0.f_8.f_3);
	func_59(uParam0.f_8.f_16);
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

void func_59(auto uParam0)
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

int func_60(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_61(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_62(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_63())
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

bool func_63()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

void func_64(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_65(iParam0, iParam1, iParam2, fParam3);
}

void func_65(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_66(iParam0, iParam1, iParam2, fParam3);
}

void func_66(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_67(iVar1, 0);
	}
}

void func_67(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	iParam0 = iParam0;
}

void func_68(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_106())
		{
			if (func_105(0))
			{
				if (network_is_player_active(func_104()))
				{
					if (func_103() == 100)
					{
						iVar0 = *uParam0;
						*uParam0 = 0;
					}
					else
					{
						iVar0 = *uParam0 / 100 * func_103();
						*uParam0 -= iVar0;
					}
					func_101(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_72("GB_BCUT_TICK1", func_104(), iVar0, 0, 0, 1, 1);
					}
					func_71(20);
					func_69(func_104(), iVar0, 1);
				}
			}
		}
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_205(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_70(iParam0));
	}
}

auto func_70(int iParam0)
{
	auto uVar0;
	
	set_bit(&uVar0, iParam0);
	return uVar0;
}

void func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	set_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_72(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_79(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_77(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_73(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_73(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_76() || !network_is_activity_session()) || !func_27(player_id(), 0))
	{
		return;
	}
	iVar0 = func_74(iParam2);
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

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_75(iVar0);
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

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_76()
{
	return is_dlc_present(-1762644250);
}

auto func_77(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_78(&cVar0);
}

auto func_78(char[4] cParam0)
{
	return cParam0;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_99(iParam0))
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
	if (func_99(player_id()) || (func_98() && func_97()))
	{
		iVar0 = func_96();
		if (does_entity_exist(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_205(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_95(iParam1, iParam0, 0);
							}
							else
							{
								return func_87(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_87(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_95(iParam1, iParam0, 0);
				}
				else
				{
					return func_80(0, -1, 0);
				}
			}
			else
			{
				return func_80(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_95(iParam1, iParam0, 0);
		}
		else
		{
			return func_87(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_87(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	return func_81(player_id(), iParam0, iParam1, iParam2);
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_86(iVar0, iParam2, 0) && !is_bit_set(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_85(1);
				}
				else
				{
					return func_85(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (is_bit_set(Global_1617379.f_4, 20))
			{
				return func_82(iVar0, iParam2, 1);
			}
			else
			{
				return func_82(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_85(1);
	}
	return func_85(0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_84(iParam0, iParam1);
	if (func_83(Global_1617379.f_70365))
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

bool func_83(int iParam0)
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

int func_84(int iParam0, int iParam1)
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
			if (!func_86(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_85(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_86(int iParam0, int iParam1, int iParam2)
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
					return is_bit_set(Global_1617379.f_39, false);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, true);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 2);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 4);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 5);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 6);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 8);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 9);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 10);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 12);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 13);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 14);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_94(iParam1, iParam0, iVar0, 0) && !is_bit_set(Global_1617379.f_15, 18)) || ((func_86(get_player_team(iParam1), get_player_team(iParam0), 0) && is_bit_set(Global_1617379.f_15, 23)) && !is_bit_set(Global_1617379.f_15, 18)))
			{
				return func_85(1);
			}
			else if (is_bit_set(Global_1617379.f_15, 26))
			{
				return func_93(1);
			}
			else
			{
				return func_81(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_85(1);
			}
			else
			{
				return func_81(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_90(iParam0);
	if (!iVar3 == -1)
	{
		return func_88(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
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

auto func_89(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_90(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_91(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_33(iParam0)];
		}
	}
	return -1;
}

int func_91(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_92(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_5();
}

int func_92(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_5())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_93(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_95(int iParam0, int iParam1, int iParam2)
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
			if (is_bit_set(Global_1617379.f_15, 29))
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
		iVar0 = func_81(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_96()
{
	return Global_2359301.f_2;
}

int func_97()
{
	return is_bit_set(Global_2359301, 4);
}

int func_98()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_99(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return true;
	}
	if (func_100())
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

int func_100()
{
	return is_bit_set(Global_2359301, 3);
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_102(1);
	}
	else
	{
		iVar1 = func_102(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_102(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_103()
{
	return Global_262145.f_10328;
}

auto func_104()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_105(int iParam0)
{
	return func_91(player_id(), iParam0);
}

int func_106()
{
	return func_92(player_id());
}

void func_107(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	func_108(1, iParam0, sParam1, sParam2, iParam3, iParam4);
}

void func_108(int iParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	auto uVar0;
	int iVar1;
	
	uVar0 = uParam1;
	iVar1 = false;
	func_109(iParam0, sParam2, uVar0, iVar1, sParam3, iParam4, iParam5);
}

void func_109(auto uParam0, char* sParam1, auto uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
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
	iVar0 = func_118();
	if (iVar0 == -1)
	{
		return;
	}
	func_117(iVar0);
	func_116(iVar0, uParam0);
	func_115(iVar0, uParam2, iParam3);
	func_114(iVar0, sParam1);
	if (is_string_null_or_empty(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_113(iVar0);
	if (!is_string_null_or_empty(sParam4))
	{
		func_111(iVar0, sParam4, iParam5);
	}
	if (!iParam6 == -99)
	{
		func_110(iVar0, iParam6);
	}
}

void func_110(int iParam0, int iParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	StringCopy(&(Global_1332285.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!iParam2)
	{
		return;
	}
	func_112(iParam0);
}

void func_112(auto uParam0)
{
	set_bit(&(Global_1332285.f_59[uParam0 /*16*/]), 5);
}

void func_113(int iParam0)
{
	set_bit(&(Global_1332285.f_59[iParam0 /*16*/]), 4);
}

void func_114(int iParam0, char* sParam1)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, sParam1, 16);
	Global_1332285.f_59[iParam0 /*16*/].f_3 = {cVar0};
}

void func_115(int iParam0, auto uParam1, int iParam2)
{
	Global_1332285.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (iParam2)
	{
		set_bit(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
		clear_bit(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		set_bit(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
		clear_bit(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
	}
}

void func_116(int iParam0, auto uParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_117(int iParam0)
{
	set_bit(&(Global_1332285.f_59[iParam0 /*16*/]), false);
}

int func_118()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_119(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_119(int iParam0)
{
	return is_bit_set(Global_1332285.f_59[iParam0 /*16*/], false);
}

int func_120(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_121(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_121(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_131(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_127(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_122(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_122(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_125(iParam0, 1)};
	if (iParam0 == func_124(player_ped_id()))
	{
		func_123(1);
	}
	func_127(vVar0, iParam1, 0, sParam2);
}

void func_123(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_124(int iParam0)
{
	return iParam0;
}

Vector3 func_125(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_126(player_ped_id()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
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
	get_model_dimensions(get_entity_model(iParam0), &vVar4, &vVar7);
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

int func_126(int iParam0)
{
	return iParam0;
}

void func_127(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_130(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_129();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_128();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_128()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_129()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_130(Vector3 vParam0, auto uParam1, auto uParam2)
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

auto func_131(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_132(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_132(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_162(player_id()) || func_161(player_id()))
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
	if (func_160(sParam2))
	{
	}
	if (func_159())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_157(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_156(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_154(0, &iVar1);
					break;
				
				case 3:
					func_154(1, &iVar1);
					break;
				
				case 1:
					func_152(&iVar1);
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
			func_166(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_142(func_151(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_166(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_137(iVar1);
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
				func_133(func_135(player_id()) + iVar1);
			}
			else
			{
				func_133(func_135(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_133(int iParam0)
{
	if (func_159())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_134(joaat("mpply_globalxp"), iParam0);
	}
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

int func_135(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_205(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_136(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_136(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_137(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_34(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_140(func_141(&Var0));
			if (iVar13 == 0)
			{
				func_139(&Global_1347641, iParam0);
				func_138(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_139(&Global_1347642, iParam0);
				func_138(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_139(&Global_1347643, iParam0);
				func_138(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_139(&Global_1347644, iParam0);
				func_138(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_139(&Global_1347645, iParam0);
				func_138(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
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

void func_139(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_140(int iParam0)
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

auto func_141(auto uParam0)
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

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (func_159())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_51(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_51(-1)])
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
		if (func_150(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_148(iParam0, 1);
		}
		func_147(632, iParam0, -1, 1);
		func_146(633, func_148(iParam0, 1), -1, 1);
		Global_1347756[func_51(-1)] = iParam0;
		func_143(7, 0);
	}
}

void func_143(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_145(iParam0, iParam1))
	{
		uVar0 = func_144();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_144()
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

bool func_145(int iParam0, auto uParam1)
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

void func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_51(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_51(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_51(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_51(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_51(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_51(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_51(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_51(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_51(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_51(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_51(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_51(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_51(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_51(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_51(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_51(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_51(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_51(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_51(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_51(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_51(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_51(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_51(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_51(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_51(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_51(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_51(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_51(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_51(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_51(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_51(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_148(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_149(iParam0, 0);
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
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

int func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return is_bit_set(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_151(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_51(-1)];
			}
			else if (func_150(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_51(-1)];
	}
	return 0;
}

void func_152(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_86(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_35(player_id(), iVar5))
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
		iVar6 = round(func_153(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_153(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_153(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

void func_154(int iParam0, int iParam1)
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
				if (func_205(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_35(player_id(), iVar4))
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
			if (func_205(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_155(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_35(player_id(), iVar4))
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
		iVar5 = round(func_153(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_153(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_155(int iParam0, int iParam1)
{
	return vdist(func_36(iParam0), func_36(iParam1));
	return 0f;
}

auto func_156(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_153(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_157(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_151(player_id()))
		{
			iParam0 = -func_151(player_id());
		}
	}
	if (func_158(8000, 0, 0) > 0)
	{
		if (func_158(8000, 0, 0) < iParam0 + func_151(player_id()))
		{
			iParam0 = func_158(8000, 0, 0) - func_151(player_id());
		}
	}
	return iParam0;
}

auto func_158(int iParam0, int iParam1, int iParam2)
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

bool func_159()
{
	return true;
}

bool func_160(char* sParam0)
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

int func_161(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_162(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_165(iParam0, func_51(iParam2));
	iVar0 += iParam1;
	func_164(iParam0, iVar0, iParam2);
}

void func_164(auto uParam0, int iParam1, auto uParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_51(uParam2)];
	stat_set_int(iVar0, iParam1, 1);
}

int func_165(auto uParam0, auto uParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_51(uParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_168(iParam0, func_51(iParam2), 0);
	iVar0 += iParam1;
	if (!func_167(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_147(iParam0, iVar0, iParam2, 1);
	}
}

bool func_167(int iParam0)
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

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_51(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_169(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_170()
{
	if (func_171(18))
	{
		return true;
	}
	if (func_171(0))
	{
		return true;
	}
	return false;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(2458, -1, 0);
	return is_bit_set(iVar0, iParam0);
}

int func_172(int iParam0)
{
	return absi(get_time_difference(Global_2410698, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_173()
{
	if (does_blip_exist(iLocal_245))
	{
		if (func_170())
		{
			set_blip_display(iLocal_245, 0);
		}
		else
		{
			set_blip_display(iLocal_245, 4);
		}
	}
	else if (network_does_entity_exist_with_network_id(Local_96.f_2))
	{
		if (!is_entity_dead(net_to_veh(Local_96.f_2), 0))
		{
			iLocal_245 = add_blip_for_entity(net_to_veh(Local_96.f_2));
			if (!is_this_model_a_bike(Local_96.f_10))
			{
				set_blip_sprite(iLocal_245, 225);
			}
			else
			{
				set_blip_sprite(iLocal_245, 348);
			}
			set_blip_colour(iLocal_245, 1);
			set_blip_flash_timer(iLocal_245, 7000);
			set_blip_priority(iLocal_245, 6);
			set_blip_name_from_text_file(iLocal_245, "DSV_BLIP");
			if (func_170())
			{
				set_blip_display(iLocal_245, 0);
			}
		}
	}
}

void func_174()
{
	if (Local_96.f_12 == 2)
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_2))
		{
			if (is_vehicle_driveable(net_to_veh(Local_96.f_2), 0))
			{
				open_sequence_task(&iLocal_243);
				task_vehicle_drive_to_coord_longrange(false, net_to_veh(Local_96.f_2), Local_96.f_20, 7f, iLocal_246, 3f);
				task_leave_any_vehicle(false, 0, 0);
				task_follow_nav_mesh_to_coord(false, Local_96.f_24, 1f, -1, 0.25f, 0, Local_96.f_27);
				close_sequence_task(iLocal_243);
			}
		}
	}
}

int func_175()
{
	return Local_96;
}

auto func_176(int iParam0)
{
	return vLocal_145[iParam0 /*3*/];
}

int func_177(int iParam0)
{
	return !func_178(iParam0);
}

bool func_178(int iParam0)
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
			if (func_180(player_id(), 7))
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
			if (func_180(player_id(), 7))
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
			if (func_180(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
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
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_179(4))
			{
				return false;
			}
			if (func_180(player_id(), 7))
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

bool func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_205(int_to_playerindex(iVar0), 0, 1))
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

int func_180(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_181()
{
	int iVar0;
	
	func_188(&iVar0);
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
	if (func_187())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_186())
	{
		return true;
	}
	if (func_185(157))
	{
		if (!func_184())
		{
			return true;
		}
	}
	if (func_185(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_182() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_182()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_182()
{
	switch (func_183())
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

auto func_183()
{
	return Global_25120;
}

auto func_184()
{
	return Global_2434762.f_574;
}

bool func_185(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_186()
{
	return Global_2443085;
}

auto func_187()
{
	return Global_2434762.f_569;
}

void func_188(auto uParam0)
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
					func_189(iVar0);
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

void func_189(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_205(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_190(iVar4, &iVar5))
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

bool func_190(int iParam0, auto uParam1)
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

void func_191()
{
	wait(0);
}

void func_192()
{
	if (does_blip_exist(iLocal_245))
	{
		remove_blip(&iLocal_245);
	}
	func_195();
	if (func_175() == 4 && Local_96.f_10 != 0)
	{
		set_vehicle_model_is_suppressed(Local_96.f_10, false);
	}
	clear_bit(&(Global_2460486.f_4430), true);
	func_194(17, 0);
	func_193();
}

void func_193()
{
	terminate_this_thread();
}

void func_194(int iParam0, int iParam1)
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

void func_195()
{
	if (Local_96.f_12 == 2)
	{
		clear_sequence_task(&iLocal_243);
	}
}

void func_196(struct<20> Param0)
{
	func_203(func_204(Param0), Param0);
	reserve_network_mission_peds(4);
	reserve_network_mission_vehicles(1);
	func_202(0, -1, 0);
	network_register_host_broadcast_variables(&Local_96, 49);
	network_register_player_broadcast_variables(&vLocal_145, 97);
	if (!func_201())
	{
		func_192();
	}
	if (network_is_game_in_progress())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
			func_197();
			Local_96.f_8 = func_5();
		}
		func_194(17, 1);
		vLocal_145[participant_id_to_int() /*3*/] = 0;
	}
	else
	{
		func_192();
	}
}

void func_197()
{
	func_200();
	Local_96.f_12 = get_random_int_in_range(0, 3);
	if (Local_96.f_12 == 1 || Local_96.f_12 == 2)
	{
		Local_96.f_15 = get_random_int_in_range(0, 5);
		if (Local_96.f_12 == 1)
		{
			func_199(&(Local_96.f_16), &(Local_96.f_19));
		}
		else
		{
			func_199(&(Local_96.f_20), &(Local_96.f_23));
		}
		func_198();
	}
	Local_96.f_14 = get_random_int_in_range(0, 3);
	if (Global_262145.f_6478 >= 0 && Global_262145.f_6478 < 5)
	{
		Local_96.f_13 = Global_262145.f_6478;
	}
	else
	{
		Local_96.f_13 = get_random_int_in_range(0, 5);
	}
}

void func_198()
{
	switch (Local_96.f_15)
	{
		case 0:
			Local_96.f_24 = {-2195.782f, -420.2502f, 12.0819f};
			Local_96.f_27 = 117.3927f;
			Local_96.f_28[0 /*3*/] = {-2189.975f, -422.8502f, 12.0709f};
			Local_96.f_38[0] = 152.6699f;
			Local_96.f_28[1 /*3*/] = {-2184.031f, -400.948f, 12.2027f};
			Local_96.f_38[1] = 337.9892f;
			Local_96.f_28[2 /*3*/] = {-2175.282f, -426.3756f, 12.128f};
			Local_96.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_96.f_24 = {-981.5774f, -1487.319f, 4.5867f};
			Local_96.f_27 = 300.0815f;
			Local_96.f_28[0 /*3*/] = {-977.8269f, -1494.568f, 4.5867f};
			Local_96.f_38[0] = 0.731f;
			Local_96.f_28[1 /*3*/] = {-977.7324f, -1491.717f, 4.5867f};
			Local_96.f_38[1] = 173.7717f;
			Local_96.f_28[2 /*3*/] = {-954.6693f, -1486.713f, 4.16f};
			Local_96.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_96.f_24 = {697.3923f, -1375.27f, 25.196f};
			Local_96.f_27 = 111.1953f;
			Local_96.f_28[0 /*3*/] = {717.8624f, -1360.491f, 25.0461f};
			Local_96.f_38[0] = 55.1674f;
			Local_96.f_28[1 /*3*/] = {703.9843f, -1361.094f, 24.6728f};
			Local_96.f_38[1] = 306.7133f;
			Local_96.f_28[2 /*3*/] = {707.1707f, -1388.706f, 25.2759f};
			Local_96.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_96.f_24 = {-258.5791f, 302.4799f, 91.0086f};
			Local_96.f_27 = 180.4109f;
			Local_96.f_28[0 /*3*/] = {-244.9193f, 299.3712f, 91.0424f};
			Local_96.f_38[0] = 43.0354f;
			Local_96.f_28[1 /*3*/] = {-248.7361f, 305.6155f, 91.1444f};
			Local_96.f_38[1] = 191.8736f;
			Local_96.f_28[2 /*3*/] = {-232.4524f, 299.4706f, 91.2088f};
			Local_96.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_96.f_24 = {862.7026f, 2875.148f, 56.9868f};
			Local_96.f_27 = 206.7217f;
			Local_96.f_28[0 /*3*/] = {880.2893f, 2862.074f, 55.6697f};
			Local_96.f_38[0] = 191.0122f;
			Local_96.f_28[1 /*3*/] = {865.2399f, 2853.536f, 56.2583f};
			Local_96.f_38[1] = 305.8056f;
			Local_96.f_28[2 /*3*/] = {867.6559f, 2841.155f, 56.944f};
			Local_96.f_38[2] = 235.4465f;
			break;
	}
}

void func_199(auto uParam0, auto uParam1)
{
	switch (Local_96.f_15)
	{
		case 0:
			*uParam0 = {-2192.39f, -419.3334f, 12.0959f};
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = {-977.0366f, -1482.866f, 4.0099f};
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = {702.5064f, -1370.477f, 25.0573f};
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = {-253.3582f, 299.4982f, 90.9592f};
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = {868.8133f, 2868.439f, 55.9186f};
			*uParam1 = 200.5778f;
			break;
	}
}

void func_200()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(0, 8);
	if (Global_262145.f_6477 >= 0 && Global_262145.f_6477 < 8)
	{
		iVar0 = Global_262145.f_6477;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_96.f_10 = joaat("baller");
			}
			else
			{
				Local_96.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_96.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_96.f_10 = joaat("emperor");
			}
			else
			{
				Local_96.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_96.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_96.f_10 = joaat("daemon");
			}
			else
			{
				Local_96.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_96.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_96.f_10 = joaat("pcj");
			}
			else
			{
				Local_96.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_96.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_96.f_10 = joaat("rocoto");
			}
			else
			{
				Local_96.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_96.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_96.f_10 = joaat("journey");
			}
			else
			{
				Local_96.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_96.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_96.f_10 = joaat("habanero");
			}
			else
			{
				Local_96.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_96.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_96.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_96.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_96.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_96.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

bool func_201()
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
		if (func_187())
		{
			return false;
		}
		if (func_185(155))
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

bool func_202(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_193();
			}
			else
			{
				return false;
			}
		}
		if (!func_45())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_193();
					}
					else
					{
						return false;
					}
				}
				if (func_187())
				{
					if (!iParam2)
					{
						func_193();
					}
					else
					{
						return false;
					}
				}
				if (func_185(155))
				{
					if (!iParam2)
					{
						func_193();
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
					func_193();
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
				func_193();
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
			func_193();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_203(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_193();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_204(int iParam0)
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

bool func_205(int iParam0, int iParam1, int iParam2)
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

