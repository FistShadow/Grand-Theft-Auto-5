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
	int iLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
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
	float fLocal_96 = 0;
	float fLocal_97 = 0;
	float fLocal_98 = 0;
	float fLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	struct<83> Local_110 = 0;
	auto uLocal_193 = 0;
	struct<2>[] Local_194 = new struct<2>[32];
	struct<46> Local_259 = 31;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
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
	fLocal_96 = 3f;
	fLocal_97 = 0f;
	fLocal_98 = 2f;
	fLocal_99 = 100f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_28(Local_259))
		{
			func_26();
		}
	}
	while (true)
	{
		func_25();
		if (func_14())
		{
			func_26();
		}
		switch (func_13(participant_id_to_int()))
		{
			case 0:
				if (func_12() == 1)
				{
					Local_194[participant_id_to_int() /*2*/] = 1;
				}
				else if (func_12() == 4)
				{
					Local_194[participant_id_to_int() /*2*/] = 3;
				}
				break;
			
			case 1:
				if (func_12() == 4)
				{
					Local_194[participant_id_to_int() /*2*/] = 3;
				}
				if (!is_entity_at_coord(PLAYER::PLAYER_PED_ID(), Local_110.f_78, 200f, 200f, 200f, false, true, 0))
				{
					Local_194[participant_id_to_int() /*2*/] = 4;
				}
				break;
			
			case 3:
				func_10(&(Local_110.f_82));
				if (func_9(&(Local_110.f_82)))
				{
					Local_194[participant_id_to_int() /*2*/] = 4;
				}
				break;
			
			case 2:
				Local_194[participant_id_to_int() /*2*/] = 4;
			
			case 4:
				func_26();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_12())
			{
				case 0:
					if (func_5())
					{
						Local_110 = 1;
					}
					break;
				
				case 1:
					func_3();
					if (func_1())
					{
						Local_110 = 4;
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
	return false;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_2[iVar0 /*15*/].f_6, true))
		{
			func_4(iVar0);
			if (Local_110.f_2[iVar0 /*15*/].f_14 > 5)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_110.f_2[iVar0 /*15*/].f_6), true);
			}
			Local_110.f_2[iVar0 /*15*/].f_14++;
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_2[iParam0 /*15*/].f_10[iVar0]))
		{
			if (network_has_control_of_entity(Local_110.f_2[iParam0 /*15*/].f_10[iVar0]))
			{
				set_entity_coords(Local_110.f_2[iParam0 /*15*/].f_10[iVar0], get_entity_coords(Local_110.f_2[iParam0 /*15*/].f_10[iVar0], 1) + Vector(0.046f * 1.5f, 0f, 0f), 1, false, 0, 1);
			}
		}
		iVar0++;
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_6(iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_6(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	
	if (func_8(Local_110.f_2[iParam0 /*15*/].f_2) || GAMEPLAY::IS_BIT_SET(Local_110.f_2[iParam0 /*15*/].f_6, false))
	{
		return true;
	}
	iVar4 = 0;
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 3);
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 4);
	switch (Local_110.f_2[iParam0 /*15*/].f_7)
	{
		case 0:
			if (can_register_mission_entities(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						vVar1 = {_get_object_offset_from_coords(Local_110.f_2[iParam0 /*15*/].f_2, Local_110.f_2[iParam0 /*15*/].f_5, 0.6f - IntToFloat(iVar0) * 0.4f, 0f, 0.1f)};
						Local_110.f_2[iParam0 /*15*/].f_10[iVar0] = create_ambient_pickup(-512375144, vVar1, iVar4, Local_110.f_2[iParam0 /*15*/].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				return true;
			}
			break;
		
		case 2:
			if (can_register_mission_entities(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						vVar1 = {_get_object_offset_from_coords(Local_110.f_2[iParam0 /*15*/].f_2, Local_110.f_2[iParam0 /*15*/].f_5, 0f, 0.25f - IntToFloat(iVar0) * 0.25f, 0.1f)};
						Local_110.f_2[iParam0 /*15*/].f_10[iVar0] = create_ambient_pickup(Local_110.f_2[iParam0 /*15*/].f_8, vVar1, iVar4, -1, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return true;
				}
			}
			break;
		
		case 3:
			if (can_register_mission_entities(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						vVar1 = {_get_object_offset_from_coords(Local_110.f_2[iParam0 /*15*/].f_2, Local_110.f_2[iParam0 /*15*/].f_5, 0f, 0.25f - IntToFloat(iVar0) * 0.25f, 0.2f)};
						Local_110.f_2[iParam0 /*15*/].f_10[iVar0] = create_ambient_pickup(joaat("pickup_ammo_bullet_mp"), vVar1, iVar4, Local_110.f_2[iParam0 /*15*/].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_7(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	
	iVar3 = 0;
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar3, 3);
	GAMEPLAY::GAMEPLAY::SET_BIT(&iVar3, 4);
	if (can_register_mission_entities(0, 0, 0, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_2[uParam0 /*15*/].f_10[iParam1]))
		{
			vVar0 = {_get_object_offset_from_coords(Local_110.f_2[uParam0 /*15*/].f_2, Local_110.f_2[uParam0 /*15*/].f_5, 0f, 0.25f - IntToFloat(iParam1) * 0.25f, 0.1f)};
			Local_110.f_2[uParam0 /*15*/].f_10[iParam1] = create_ambient_pickup(-512375144, vVar0, iVar3, Global_262145.f_4439, 0, 1, 1);
		}
		return true;
	}
	return false;
}

bool func_8(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_9(auto uParam0)
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

void func_10(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_11(auto uParam0, int iParam1, int iParam2)
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

int func_12()
{
	return Local_110;
}

auto func_13(int iParam0)
{
	return Local_194[iParam0 /*2*/];
}

bool func_14()
{
	int iVar0;
	
	func_21(&iVar0);
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
	if (func_20())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_19())
	{
		return true;
	}
	if (func_18(157))
	{
		if (!func_17())
		{
			return true;
		}
	}
	if (func_18(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_15() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_15()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_15()
{
	switch (func_16())
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

auto func_16()
{
	return Global_25120;
}

auto func_17()
{
	return Global_2434762.f_574;
}

bool func_18(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_19()
{
	return Global_2443085;
}

auto func_20()
{
	return Global_2434762.f_569;
}

void func_21(auto uParam0)
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
					func_22(iVar0);
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

void func_22(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_24(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_23(iVar4, &iVar5))
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

bool func_23(int iParam0, auto uParam1)
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

bool func_24(int iParam0, int iParam1, int iParam2)
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

void func_25()
{
	wait(0);
}

void func_26()
{
	func_27();
}

void func_27()
{
	terminate_this_thread();
}

bool func_28(struct<41> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5)
{
	struct<20> Var0;
	int iVar20;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0 = Param0;
	Var0.f_16 = Param0.f_1;
	func_32(func_33(Param0), Var0);
	func_30(0, -1, 0);
	network_register_host_broadcast_variables(&Local_110, 84);
	network_register_player_broadcast_variables(&Local_194, 65);
	if (!func_29())
	{
		return false;
	}
	set_this_script_can_be_paused(0);
	if (network_is_host_of_this_script())
	{
		Local_110.f_81 = Param0.f_1;
		Local_110.f_78 = {Param0.f_2};
		iVar20 = 0;
		while (iVar20 < 5)
		{
			if (!GAMEPLAY::IS_BIT_SET(Param0.f_5, false))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_110.f_2[iVar20 /*15*/].f_6), false);
			}
			Local_110.f_2[iVar20 /*15*/].f_2 = {Param0.f_6[iVar20 /*3*/]};
			Local_110.f_2[iVar20 /*15*/].f_5 = Param0.f_22[iVar20];
			Local_110.f_2[iVar20 /*15*/].f_7 = Param0.f_28[iVar20];
			Local_110.f_2[iVar20 /*15*/].f_8 = Param0.f_34[iVar20];
			Local_110.f_2[iVar20 /*15*/].f_9 = Param0.f_40[iVar20];
			iVar20++;
		}
	}
	Local_194[participant_id_to_int() /*2*/] = 0;
	return true;
}

bool func_29()
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
		if (func_20())
		{
			return false;
		}
		if (func_18(155))
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

bool func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_27();
			}
			else
			{
				return false;
			}
		}
		if (!func_31())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_27();
					}
					else
					{
						return false;
					}
				}
				if (func_20())
				{
					if (!iParam2)
					{
						func_27();
					}
					else
					{
						return false;
					}
				}
				if (func_18(155))
				{
					if (!iParam2)
					{
						func_27();
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
					func_27();
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
				func_27();
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
			func_27();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_31()
{
	return Global_1315888;
}

void func_32(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_27();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_33(int iParam0)
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

