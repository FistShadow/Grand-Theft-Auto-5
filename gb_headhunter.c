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
	struct<872> Local_96 = 0;
	struct<14>[] Local_968 = new struct<14>[32];
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	auto uLocal_1425 = 0;
	auto uLocal_1426 = 0;
	auto uLocal_1427 = 0;
	auto uLocal_1428 = 0;
	auto uLocal_1429 = 0;
	auto uLocal_1430 = 0;
	auto uLocal_1431 = 0;
	int[] iLocal_1432 = new int[4];
	struct<8>[] Local_1437 = new struct<8>[30];
	var[] uLocal_1678 = new var[30];
	int iLocal_1709 = 0;
	auto uLocal_1710 = 0;
	int iLocal_1711 = 0;
	auto uLocal_1712 = 0;
	auto uLocal_1713 = 0;
	auto uLocal_1714 = 0;
	auto uLocal_1715 = 0;
	struct<20> Local_1716 = 0;
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
	iLocal_1424 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_617(player_id(), 0, 1))
	{
		func_604(Local_1716);
	}
	else
	{
		func_586();
	}
	while (true)
	{
		func_585();
		if (func_577())
		{
			func_586();
		}
		Global_1727400.f_2 = Local_96.f_863;
		Global_1727400.f_3 = Local_96.f_864;
		switch (func_576(participant_id_to_int()))
		{
			case 0:
				if (func_575() == 1)
				{
					if (func_574())
					{
						func_573();
						if (func_572())
						{
							func_559(166, 1, -1);
							set_max_wanted_level(3);
							func_558(0f);
							iLocal_1423 = get_ped_relationship_group_hash(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1422);
						}
						else
						{
							func_559(166, 0, -1);
						}
						func_557();
						func_556();
						func_555();
						Local_968[participant_id_to_int() /*14*/] = 1;
					}
				}
				else if (func_575() == 4)
				{
					Local_968[participant_id_to_int() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_552())
				{
					Local_968[participant_id_to_int() /*14*/] = 2;
				}
				if (func_575() == 1)
				{
					func_551();
					func_532();
					func_509();
					func_260();
					func_251();
					if (func_572() || func_249())
					{
						func_127(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
					}
					func_73();
				}
				else if (func_575() == 4)
				{
					Local_968[participant_id_to_int() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_96.f_845));
				if (func_67(&(Local_96.f_845)))
				{
					Local_968[participant_id_to_int() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_968[participant_id_to_int() /*14*/] = 4;
			
			case 4:
				func_586();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_575())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						_0x6DEE77AFF8C21BD1(&(Local_96.f_863), &(Local_96.f_864));
						Local_96 = 1;
						Local_96.f_118 = participant_id_to_int();
						Local_96.f_119 = player_id();
						func_559(166, 1, -1);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_96 = 4;
					}
					else if (func_1())
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
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return true;
	}
	return false;
}

bool func_2()
{
	if (func_3())
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 2))
	{
		return true;
	}
	return false;
}

bool func_3()
{
	return false;
}

void func_4()
{
	switch (Local_96.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, true))
			{
				Local_96.f_117 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 3))
			{
				Local_96.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 6))
	{
		if (!func_8(&(Local_96.f_849)))
		{
			func_7(&(Local_96.f_849), 0, 0);
		}
		else if (func_6(&(Local_96.f_849), 500, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_96.f_1), 6);
		}
	}
}

bool func_6(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_7(uParam0, iParam2, 0);
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

void func_7(auto uParam0, int iParam1, int iParam2)
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

auto func_8(auto uParam0)
{
	return *uParam0.f_1;
}

void func_9()
{
	if (!func_8(&(Local_96.f_847)))
	{
		func_7(&(Local_96.f_847), 0, 0);
	}
	else if (func_6(&(Local_96.f_847), func_10(), 0))
	{
		GAMEPLAY::SET_BIT(&(Local_96.f_1), 3);
	}
}

auto func_10()
{
	return Global_262145.f_12394;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (network_is_host_of_this_script())
	{
		iVar0 = false;
		while (iVar0 < 4)
		{
			switch (Local_96.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/] == 0)
						{
							if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_96.f_2[iVar0 /*26*/] == 1)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
								{
									if (is_ped_sitting_in_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2)))
									{
										if (GAMEPLAY::IS_BIT_SET(Local_96.f_109, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_96.f_110, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_96.f_111, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_96.f_112, iVar0))
										{
											Local_96.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_96.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (!is_ped_sitting_in_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1)))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_96.f_2[iVar0 /*26*/].f_2))
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (GAMEPLAY::IS_BIT_SET(Local_96.f_112, iVar0))
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (!is_ped_in_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_96.f_110, iVar0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_96.f_111, iVar0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/].f_24)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/].f_25)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_96.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/] == 0)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_96.f_2[iVar0 /*26*/] == 2)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_96.f_2[iVar0 /*26*/].f_17 == 3 || Local_96.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_24)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_17 == 3 || Local_96.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!is_ped_in_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_13(net_to_veh(iParam0));
	}
	return false;
}

bool func_13(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
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

int func_14(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return PED::IS_PED_INJURED(net_to_ped(iParam0));
	}
	return true;
}

void func_15()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						GAMEPLAY::SET_BIT(&(Local_96.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (!func_17(iVar1, 0))
			{
				set_vehicle_doors_locked_for_player(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

auto func_19()
{
	return Global_1312747;
}

bool func_20(int iParam0)
{
	int iVar0;
	
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return false;
	}
	if (!func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = false;
	iVar2 = false;
	if (Local_96 != 4)
	{
		iLocal_1419 = false;
		while (iLocal_1419 < _network_get_num_participants_host())
		{
			if (network_is_participant_active(int_to_participantindex(iLocal_1419)))
			{
				iVar3 = network_get_player_index(int_to_participantindex(iLocal_1419));
				if (!func_17(iVar3, 0))
				{
					if (func_617(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1419);
					func_23(iLocal_1419);
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 2))
					{
						if (!iVar2)
						{
							if ((GAMEPLAY::IS_BIT_SET(Local_96.f_1, true) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 5))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_968[iLocal_1419 /*14*/].f_1, 4))
								{
									iVar2 = true;
								}
							}
							else
							{
								iVar2 = true;
							}
						}
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 5))
			{
				if (Local_96.f_118 > -1)
				{
					if (iLocal_1419 == Local_96.f_118)
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_1), 5);
					}
				}
			}
			iLocal_1419++;
		}
		func_22();
		iVar1 = false;
		while (iVar1 < 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_96.f_115 != iVar0)
		{
			Local_96.f_115 = iVar0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, true))
		{
			if (iVar0 >= 4)
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_1), true);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 2))
		{
			if (!iVar2)
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_113, iVar0))
			{
				if (!func_8(&(Local_96.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_96.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_96.f_853[iVar0 /*2*/]), 10000, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_96.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_109, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_5, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_109), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_110, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_2, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_110), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_112, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_3, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_112), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_111, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_4, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_111), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_113, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_6, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_113), iVar0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_7, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_113), iVar0);
			}
		}
		if (Local_96.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_96.f_2[iVar0 /*26*/].f_24)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_12, iVar0))
				{
					Local_96.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_96.f_2[iVar0 /*26*/].f_25)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_968[iParam0 /*14*/].f_13, iVar0))
				{
					Local_96.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
						{
							set_vehicle_doors_locked_for_player(net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2), network_get_player_index(int_to_participantindex(iParam0)), 1);
							GAMEPLAY::SET_BIT(&(Local_96.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Local_96.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_25()
{
	if (!func_44())
	{
		return false;
	}
	if (!func_33())
	{
		return false;
	}
	if (!func_26())
	{
		return false;
	}
	return true;
}

bool func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_27(int iParam0)
{
	auto uVar0;
	int iVar1;
	Vector3 vVar2;
	
	uVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = {Local_96.f_123[uVar0 /*36*/].f_18[iVar1 /*3*/]};
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

int func_28(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_29(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 fVar6;
	
	uVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar1 = false;
	while (iVar1 < 3)
	{
		if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = {Local_96.f_123[uVar0 /*36*/].f_18[iVar1 /*3*/]};
			fVar6 = Local_96.f_123[uVar0 /*36*/].f_28[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_96.f_123[uVar0 /*36*/].f_32[iVar1];
				if (can_register_mission_vehicles(1))
				{
					if (func_31(iVar2))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							clear_area(vVar3, 10f, 1, 0, 0, true);
							GAMEPLAY::SET_BIT(&(Local_96.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar6, 1, 1, 1, 0, 1, 1))
						{
							_0x9737A37136F07E75(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							_0xDBC631F109350B8C(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1422);
							set_vehicle_automatically_attaches(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return false;
}

bool func_30(auto uParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_32(int iParam0)
{
	auto uVar0;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return false;
	}
	uVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_96.f_123[uVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

bool func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	Vector3 vVar3;
	
	iVar1 = Local_96.f_2[iParam0 /*26*/];
	uVar2 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return false;
			}
			else if (iVar1 == 2)
			{
				vVar3 = {Local_96.f_123[uVar2 /*36*/].f_4[iVar0 /*3*/]};
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 fVar8;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_96.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_96.f_2[iParam0 /*26*/].f_2))
				{
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = false;
						while (iVar1 < 3)
						{
							if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (can_register_mission_peds(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Local_96.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											set_entity_only_damaged_by_player(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											set_entity_is_target_priority(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0f);
											set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574239);
											set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1422);
											set_ped_dies_when_injured(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											give_weapon_to_ped(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = false;
				while (iVar1 < 3)
				{
					if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (can_register_mission_peds(1))
						{
							if (func_31(iVar0))
							{
								uVar2 = Local_96.f_2[iParam0 /*26*/].f_22;
								vVar5 = {Local_96.f_123[uVar2 /*36*/].f_4[iVar1 /*3*/]};
								fVar8 = Local_96.f_123[uVar2 /*36*/].f_14[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar8, 1, 1, 1))
									{
										set_entity_only_damaged_by_player(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										set_entity_is_target_priority(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0f);
										set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574239);
										set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1422);
										give_weapon_to_ped(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										set_ped_combat_movement(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										_0x52D59AB61DDC05DD(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										set_ped_target_loss_response(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										set_ped_sphere_defensive_area(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_38();
										set_entity_max_health(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										iVar4 = func_37();
										set_ped_armour(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										set_ped_accuracy(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										set_ped_suffers_critical_hits(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return false;
}

int func_36()
{
	return round(Global_262145.f_12402);
}

int func_37()
{
	return 200;
}

auto func_38()
{
	return Global_262145.f_12401;
}

bool func_39(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7)
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

bool func_40(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_41()
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

int func_43(int iParam0)
{
	return (Local_96.f_2[iParam0 /*26*/] == 0 || Local_96.f_2[iParam0 /*26*/] == 2);
}

bool func_44()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_45(int iParam0)
{
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 0:
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_2))
				{
					return true;
				}
			}
			break;
		
		case 1:
		case 2:
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	auto uVar5;
	auto uVar6;
	int iVar7;
	int iVar8;
	Vector3 fVar9;
	
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_96.f_2[iParam0 /*26*/].f_11;
				if (can_register_mission_vehicles(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = {vVar2};
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_96.f_2[iParam0 /*26*/].f_2), iVar0, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1))
							{
								_0xDBC631F109350B8C(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								_0x9737A37136F07E75(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								set_vehicle_engine_on(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), true, 1, 0);
								set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_2), 1, iLocal_1422);
								set_vehicle_tyres_can_burst(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), false);
								set_vehicle_automatically_attaches(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), false, 0);
								set_entity_load_collision_flag(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), true);
								set_vehicle_strong(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), true);
								set_disable_vehicle_petrol_tank_damage(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								set_vehicle_explodes_on_high_explosion_damage(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_2))
			{
				if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
				{
					if (can_register_mission_peds(1))
					{
						iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_96.f_2[iParam0 /*26*/].f_1), Local_96.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								set_entity_only_damaged_by_player(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								set_entity_is_target_priority(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0f);
								set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574239);
								set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								set_ped_dies_when_injured(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								GAMEPLAY::SET_BIT(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (can_register_mission_peds(1))
				{
					iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = {vVar2};
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								set_entity_only_damaged_by_player(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								set_entity_is_target_priority(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0f);
								set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574239);
								set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								set_ped_dies_when_injured(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								GAMEPLAY::SET_BIT(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (can_register_mission_peds(1))
				{
					iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = {vVar2};
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_96.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(vVar2);
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								set_entity_only_damaged_by_player(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								set_entity_is_target_priority(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0f);
								set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574239);
								set_entity_only_damaged_by_relationship_group(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								set_ped_dies_when_injured(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								set_ped_combat_movement(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 42, true);
								_0x52D59AB61DDC05DD(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 44, true);
								set_ped_target_loss_response(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								give_weapon_to_ped(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar9 = func_50(iParam0);
								set_ped_sphere_defensive_area(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), Local_96.f_2[iParam0 /*26*/].f_13, fVar9, 0, 0);
								PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar7 = func_49();
								set_entity_max_health(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), iVar7);
								ENTITY::SET_ENTITY_HEALTH(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), iVar7);
								iVar8 = func_48();
								set_ped_armour(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), iVar8);
								set_ped_accuracy(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), func_47());
								set_entity_load_collision_flag(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), true);
								GAMEPLAY::SET_BIT(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return false;
}

int func_47()
{
	return round(Global_262145.f_12400);
}

int func_48()
{
	return 100;
}

auto func_49()
{
	return Global_262145.f_12399;
}

float func_50(int iParam0)
{
	if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(Vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_96.f_865[iVar0] = add_scenario_blocking_area(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_96.f_871), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_96.f_865[iVar0] = add_scenario_blocking_area(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_96.f_871), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_96.f_865[iVar0] = add_scenario_blocking_area(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_96.f_871), iVar0);
	}
}

bool func_52(int iParam0, auto uParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, Local_96.f_122);
			if (!func_28(Local_96.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = {Local_96.f_123[iVar0 /*36*/]};
					*uParam2 = Local_96.f_123[iVar0 /*36*/].f_3;
					Local_96.f_123[iVar0 /*36*/] = {0f, 0f, 0f};
					return true;
				}
			}
			break;
		
		case 2:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, Local_96.f_122);
			if (!func_28(Local_96.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = {Local_96.f_123[iVar0 /*36*/]};
					*uParam2 = Local_96.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_96.f_123[iVar0 /*36*/] = {0f, 0f, 0f};
					return true;
				}
			}
			break;
		
		case 0:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 10);
			if (!func_28(Local_96.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = {Local_96.f_484[iVar0 /*36*/]};
					*uParam2 = Local_96.f_484[iVar0 /*36*/].f_3;
					Local_96.f_484[iVar0 /*36*/] = {0f, 0f, 0f};
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_53(Vector3 vParam0, float fParam1, float fParam2, float fParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_57(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_54(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_617(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_56(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
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
		if (func_617(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_55(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_56(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_56(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
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

bool func_55(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

Vector3 func_56(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

bool func_57(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_617(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_55(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_58(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_56(iVar1), vParam0, 1) < fParam3)
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

bool func_58(int iParam0)
{
	if (func_63(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_62(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_59(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_60())
	{
		if (iVar0 == func_61(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_60()
{
	return -1;
}

int func_61(int iParam0)
{
	if (iParam0 != func_60())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_63(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_62(iParam0)};
		Global_2459453 = {func_62(iParam1)};
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

void func_64()
{
	Local_96.f_2[0 /*26*/] = 2;
	Local_96.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_96.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[1 /*26*/] = 2;
	Local_96.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_96.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[2 /*26*/] = 0;
	Local_96.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_96.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[3 /*26*/] = 0;
	Local_96.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_96.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_96.f_122 == 0)
	{
		if (Local_96.f_121 == 0)
		{
			Local_96.f_122 = 10;
		}
		else
		{
			Local_96.f_122 = 9;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 4))
	{
		return;
	}
	switch (Local_96.f_121)
	{
		case 0:
			Local_96.f_123[0 /*36*/] = {-106.8009f, 331.5984f, 111.7262f};
			Local_96.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_96.f_123[0 /*36*/].f_4[0 /*3*/] = {-106.2522f, 353.0331f, 111.8849f};
			Local_96.f_123[0 /*36*/].f_4[1 /*3*/] = {-104.2692f, 356.5287f, 111.8858f};
			Local_96.f_123[0 /*36*/].f_4[2 /*3*/] = {-108.1528f, 347.4515f, 111.8858f};
			Local_96.f_123[1 /*36*/] = {-1193.408f, -218.8712f, 36.9448f};
			Local_96.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_96.f_123[1 /*36*/].f_4[0 /*3*/] = {-1174.724f, -238.3963f, 36.9385f};
			Local_96.f_123[1 /*36*/].f_4[1 /*3*/] = {-1201.011f, -231.2006f, 36.948f};
			Local_96.f_123[1 /*36*/].f_4[2 /*3*/] = {-1162.52f, -229.3399f, 36.9564f};
			Local_96.f_123[2 /*36*/] = {-1646.583f, -1102.801f, 12.0181f};
			Local_96.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_96.f_123[2 /*36*/].f_4[0 /*3*/] = {-1643.292f, -1098.154f, 12.0207f};
			Local_96.f_123[2 /*36*/].f_4[1 /*3*/] = {-1638.825f, -1093.105f, 12.0269f};
			Local_96.f_123[3 /*36*/] = {1171.307f, -398.4046f, 70.5896f};
			Local_96.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_96.f_123[3 /*36*/].f_4[0 /*3*/] = {1180.066f, -405.9521f, 66.7792f};
			Local_96.f_123[3 /*36*/].f_4[1 /*3*/] = {1176.999f, -397.1275f, 66.928f};
			Local_96.f_123[4 /*36*/] = {929.1267f, -1255.108f, 24.4835f};
			Local_96.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_96.f_123[4 /*36*/].f_4[0 /*3*/] = {943.2654f, -1244.3f, 24.6881f};
			Local_96.f_123[4 /*36*/].f_4[1 /*3*/] = {939.8859f, -1229.958f, 24.652f};
			Local_96.f_123[4 /*36*/].f_4[2 /*3*/] = {920.2808f, -1259.097f, 24.5269f};
			Local_96.f_123[5 /*36*/] = {883.0366f, -2166.188f, 31.2735f};
			Local_96.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_96.f_123[5 /*36*/].f_4[0 /*3*/] = {871.2222f, -2167.22f, 31.2735f};
			Local_96.f_123[5 /*36*/].f_4[1 /*3*/] = {872.3619f, -2199.464f, 29.5194f};
			Local_96.f_123[5 /*36*/].f_4[2 /*3*/] = {888.3759f, -2169.164f, 35.2714f};
			Local_96.f_123[6 /*36*/] = {-110.3279f, -2705.599f, 5.0099f};
			Local_96.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_96.f_123[6 /*36*/].f_4[0 /*3*/] = {-133.4379f, -2700.109f, 5.0103f};
			Local_96.f_123[6 /*36*/].f_4[1 /*3*/] = {-127.772f, -2681.304f, 5.0274f};
			Local_96.f_123[6 /*36*/].f_4[2 /*3*/] = {-112.7492f, -2673.062f, 5.006f};
			Local_96.f_123[6 /*36*/].f_14[2] = 180f;
			Local_96.f_123[7 /*36*/] = {-520.2162f, 163.9754f, 70.0812f};
			Local_96.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_96.f_123[7 /*36*/].f_4[0 /*3*/] = {-508.6846f, 166.9421f, 69.9316f};
			Local_96.f_123[7 /*36*/].f_4[1 /*3*/] = {-495.0937f, 169.297f, 69.9316f};
			Local_96.f_123[7 /*36*/].f_18[0 /*3*/] = {-505.5487f, 166.7718f, 69.9316f};
			Local_96.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_96.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[7 /*36*/].f_18[1 /*3*/] = {-498.6042f, 169.8883f, 69.9316f};
			Local_96.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_96.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_123[8 /*36*/] = {-591.7915f, -1765.793f, 22.1854f};
			Local_96.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_96.f_123[8 /*36*/].f_4[0 /*3*/] = {-593.1422f, -1779.995f, 21.8499f};
			Local_96.f_123[8 /*36*/].f_4[1 /*3*/] = {-584.6111f, -1774.981f, 21.62f};
			Local_96.f_123[8 /*36*/].f_4[2 /*3*/] = {-580.9441f, -1769.818f, 22.1854f};
			Local_96.f_123[8 /*36*/].f_18[0 /*3*/] = {-582.6792f, -1777.695f, 21.6132f};
			Local_96.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_96.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[9 /*36*/] = {306.2488f, -1000.808f, 28.3108f};
			Local_96.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_96.f_123[9 /*36*/].f_4[0 /*3*/] = {314.583f, -998.1405f, 28.1613f};
			Local_96.f_123[9 /*36*/].f_4[1 /*3*/] = {300.5795f, -997.6307f, 28.1986f};
			Local_96.f_123[9 /*36*/].f_18[0 /*3*/] = {312.527f, -1000.571f, 28.2617f};
			Local_96.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_96.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[9 /*36*/].f_18[1 /*3*/] = {303.729f, -1000.568f, 28.3096f};
			Local_96.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_96.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_484[0 /*36*/] = {533.1884f, -136.2944f, 58.6519f};
			Local_96.f_484[0 /*36*/].f_3 = 179.583f;
			Local_96.f_484[1 /*36*/] = {774.9319f, -1329.652f, 25.243f};
			Local_96.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_96.f_484[2 /*36*/] = {999.0349f, -3054.079f, 4.9011f};
			Local_96.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_96.f_484[3 /*36*/] = {329.7707f, -1750.917f, 28.2917f};
			Local_96.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_96.f_484[4 /*36*/] = {-1000.175f, -2098.133f, 11.3367f};
			Local_96.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_96.f_484[5 /*36*/] = {-712.6369f, -880.1467f, 22.5928f};
			Local_96.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_96.f_484[6 /*36*/] = {-1482.46f, -498.4642f, 31.8069f};
			Local_96.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_96.f_484[7 /*36*/] = {-1357.325f, 579.7441f, 130.483f};
			Local_96.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_96.f_484[8 /*36*/] = {-555.6091f, 55.0564f, 48.3253f};
			Local_96.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_96.f_484[9 /*36*/] = {-84.1599f, -1024.114f, 27.2205f};
			Local_96.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_96.f_123[0 /*36*/] = {1447.271f, 3750.165f, 30.9342f};
			Local_96.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_96.f_123[0 /*36*/].f_4[0 /*3*/] = {1440.142f, 3753.75f, 30.9407f};
			Local_96.f_123[0 /*36*/].f_4[1 /*3*/] = {1455.688f, 3760.388f, 31.0543f};
			Local_96.f_123[1 /*36*/] = {-46.8187f, 1946.659f, 189.5608f};
			Local_96.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_96.f_123[1 /*36*/].f_4[0 /*3*/] = {-52.1263f, 1953.13f, 189.1861f};
			Local_96.f_123[1 /*36*/].f_4[1 /*3*/] = {-63.1502f, 1951.946f, 189.1861f};
			Local_96.f_123[1 /*36*/].f_4[2 /*3*/] = {-59.1516f, 1964.074f, 189.1861f};
			Local_96.f_123[2 /*36*/] = {2002.527f, 4978.516f, 40.5969f};
			Local_96.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_96.f_123[2 /*36*/].f_4[0 /*3*/] = {2013.281f, 4976.885f, 40.4305f};
			Local_96.f_123[2 /*36*/].f_4[1 /*3*/] = {2025.947f, 4978.383f, 40.1376f};
			Local_96.f_123[2 /*36*/].f_4[2 /*3*/] = {2000.83f, 4990.36f, 40.4477f};
			Local_96.f_123[3 /*36*/] = {2939.418f, 4623.833f, 47.7256f};
			Local_96.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_96.f_123[3 /*36*/].f_4[0 /*3*/] = {2930.615f, 4620.496f, 47.7246f};
			Local_96.f_123[3 /*36*/].f_4[1 /*3*/] = {2946.911f, 4629.479f, 47.7251f};
			Local_96.f_123[3 /*36*/].f_4[2 /*3*/] = {2936.956f, 4609.8f, 47.7277f};
			Local_96.f_123[4 /*36*/] = {519.5331f, 3105.464f, 39.5241f};
			Local_96.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_96.f_123[4 /*36*/].f_4[0 /*3*/] = {518.6117f, 3090.195f, 39.4652f};
			Local_96.f_123[4 /*36*/].f_4[1 /*3*/] = {532.1984f, 3083.56f, 39.4652f};
			Local_96.f_123[5 /*36*/] = {-1597.604f, 3083.673f, 31.5661f};
			Local_96.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_96.f_123[5 /*36*/].f_4[0 /*3*/] = {-1601.259f, 3078.785f, 31.5661f};
			Local_96.f_123[5 /*36*/].f_4[1 /*3*/] = {-1609.109f, 3080.765f, 31.5661f};
			Local_96.f_123[5 /*36*/].f_4[2 /*3*/] = {-1598.4f, 3070.091f, 32.6629f};
			Local_96.f_123[6 /*36*/] = {1470.055f, 6550.666f, 13.9091f};
			Local_96.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_96.f_123[6 /*36*/].f_4[0 /*3*/] = {1459.452f, 6546.819f, 13.6304f};
			Local_96.f_123[6 /*36*/].f_4[1 /*3*/] = {1460.641f, 6562.202f, 12.7644f};
			Local_96.f_123[6 /*36*/].f_18[0 /*3*/] = {1459.178f, 6544.879f, 13.713f};
			Local_96.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_96.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[6 /*36*/].f_18[1 /*3*/] = {1460.212f, 6560.179f, 12.9444f};
			Local_96.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_96.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_123[7 /*36*/] = {2328.066f, 2576.558f, 45.6677f};
			Local_96.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_96.f_123[7 /*36*/].f_4[0 /*3*/] = {2339.745f, 2569.616f, 46.7255f};
			Local_96.f_123[7 /*36*/].f_4[1 /*3*/] = {2356.385f, 2593.859f, 46.1125f};
			Local_96.f_123[7 /*36*/].f_4[2 /*3*/] = {2338.935f, 2549.453f, 45.6677f};
			Local_96.f_123[8 /*36*/] = {-1600.295f, 5204.928f, 3.3151f};
			Local_96.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_96.f_123[8 /*36*/].f_4[0 /*3*/] = {-1587.408f, 5193.21f, 3.3151f};
			Local_96.f_123[8 /*36*/].f_4[1 /*3*/] = {-1576.558f, 5176.321f, 18.7159f};
			Local_96.f_123[8 /*36*/].f_4[2 /*3*/] = {-1595.553f, 5206.593f, 3.3151f};
			Local_96.f_123[8 /*36*/].f_18[0 /*3*/] = {-1575.924f, 5170.995f, 18.5541f};
			Local_96.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_96.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_484[0 /*36*/] = {1514.526f, 1730.14f, 108.9447f};
			Local_96.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_96.f_484[1 /*36*/] = {2028.331f, 3444.544f, 42.9909f};
			Local_96.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_96.f_484[2 /*36*/] = {392.7668f, 3588.585f, 32.2922f};
			Local_96.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_96.f_484[3 /*36*/] = {200.9893f, 2351.4f, 72.5299f};
			Local_96.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_96.f_484[4 /*36*/] = {-2337.792f, 4041.646f, 29.414f};
			Local_96.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_96.f_484[5 /*36*/] = {-742.3113f, 5537.667f, 32.4857f};
			Local_96.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_96.f_484[6 /*36*/] = {1586.277f, 6445.438f, 24.1337f};
			Local_96.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_96.f_484[7 /*36*/] = {2574.845f, 5086.147f, 43.6593f};
			Local_96.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_96.f_484[8 /*36*/] = {362.3407f, 4431.755f, 61.9071f};
			Local_96.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_96.f_484[9 /*36*/] = {-1906.661f, 1773.933f, 170.3475f};
			Local_96.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	GAMEPLAY::SET_BIT(&(Local_96.f_1), 4);
}

auto func_66()
{
	if (Local_96.f_121 != -1)
	{
		return Local_96.f_121;
	}
	if (Local_96.f_121 == -1)
	{
		if (get_hash_of_map_area_at_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) == -289320599)
		{
			Local_96.f_121 = 0;
		}
		else
		{
			Local_96.f_121 = 1;
		}
	}
	return Local_96.f_121;
}

bool func_67(auto uParam0)
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

void func_68(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_69()
{
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_96.f_119 != -1)
	{
		iVar0 = int_to_playerindex(Local_96.f_119);
	}
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574198[iVar1], Global_1574239);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574239, Global_1574198[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_60())
	{
		if (!iParam2)
		{
			if (func_72(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_60())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 != func_60())
	{
		if (iParam0 != func_60())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_60())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

void func_73()
{
	Vector3 vVar0;
	int iVar3;
	float fVar4;
	
	if (func_572())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_126(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_125(player_id()))
		{
			func_115(0);
			network_set_friendly_fire_option(0);
			GAMEPLAY::SET_BIT(&iLocal_1417, 18);
		}
	}
	if (Local_96.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			vVar0 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iVar3 /*26*/].f_1), 0)};
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_74(166, vVar0, &uLocal_1710, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, Vector3 vParam1, auto uParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 fVar0;
	float fVar1;
	
	if (((func_114(player_id()) && !func_113(player_id())) && !GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 8)) && (func_112(player_id()) || func_111(player_id())))
	{
		return;
	}
	Global_1727391 = {vParam1};
	fVar0 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_107(iParam0, fVar0);
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_106(player_id()) || func_104(player_id()))
		{
			if (!_0x84698AB38D0C6636(1344549371))
			{
				_0xDD564BDD0472C936(1344549371);
			}
		}
		else if (_0x84698AB38D0C6636(1344549371))
		{
			object_decal_toggle(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_103(player_id(), 21))
		{
			func_102(vParam1, 1, 0);
		}
		if (!*uParam4 && func_617(player_id(), 1, 1))
		{
			*uParam4 = 1;
			if (func_101(iParam0))
			{
				set_wanted_level_multiplier(func_100(iParam0));
				if (func_99(iParam0, -1))
				{
					set_max_wanted_level(false);
					if (get_player_wanted_level(player_id()) > 0)
					{
						set_player_wanted_level(player_id(), false, 1);
						set_player_wanted_level_now(player_id(), 1);
					}
					GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
				}
			}
			if (func_98(iParam0))
			{
				fVar1 = func_97(iParam0);
				if (fVar1 != 1f)
				{
					func_558(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
				}
			}
			if (!Global_2391042)
			{
				if (func_96(iParam0) && func_106(player_id()))
				{
					func_95(1);
					func_94(2);
				}
			}
			func_93(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_92(player_id(), 19))
			{
				func_91(19);
			}
		}
		if (*uParam4 && func_617(player_id(), 1, 1))
		{
			*uParam4 = 0;
			if (func_101(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), false);
				}
			}
			if (func_98(iParam0))
			{
				func_90();
				GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), true);
			}
			if (iParam7 && !func_114(player_id()))
			{
				if (func_88(player_id()) != 152)
				{
					func_77();
				}
			}
			if (func_76(2))
			{
				func_95(0);
				func_75(2);
			}
		}
	}
}

void func_75(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4660.f_18), iParam0);
}

int func_76(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_18, iParam0);
}

void func_77()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_86();
	func_78(1, 1);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1)
	{
		Global_2404956.f_39 = {Global_2406784};
	}
	else
	{
		Global_2404956.f_39 = {Global_2406784};
		Global_2404956.f_39.f_49 = {Global_2406784.f_49};
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (iParam0)
	{
		func_85();
	}
	func_81(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_80(0);
	func_79();
}

void func_79()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_80(int iParam0)
{
	if (iParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_83();
		func_82(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_83();
		func_82(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = get_id_of_this_thread();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_83()
{
	func_84();
	Global_2404956.f_635 = 0;
}

void func_84()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = {Var1};
		iVar0++;
	}
}

void func_85()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_86()
{
	func_87();
	Global_2404956.f_1280 = 0;
}

void func_87()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = {Var1};
		iVar0++;
	}
}

int func_88(int iParam0)
{
	if (func_89(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_89(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

void func_90()
{
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

void func_91(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_92(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_93(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

void func_94(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_95(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

bool func_96(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return true;
		
		default:
	}
	return false;
}

float func_97(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_98(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return true;
		
		default:
	}
	return false;
}

bool func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return true;
	}
	return false;
}

float func_100(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_101(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return true;
		
		default:
	}
	return false;
}

void func_102(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

int func_103(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_104(int iParam0)
{
	if (func_105(iParam0))
	{
		if (func_106(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_105(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_60())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_92(iParam0, 9);
	}
	return false;
}

void func_107(int iParam0, Vector3 fParam1)
{
	int iVar0;
	
	iVar0 = func_110(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_108();
	}
}

void func_108()
{
	if (!func_109(player_id()))
	{
		func_93(25);
	}
}

int func_109(int iParam0)
{
	return func_92(iParam0, 25);
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10461;
		
		case 142:
			return Global_262145.f_10449;
		
		case 157:
			return Global_262145.f_10416;
		
		case 159:
			return Global_262145.f_10399;
		
		case 162:
			return Global_262145.f_10510;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

int func_113(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 2);
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

void func_115(int iParam0)
{
	if (!func_125(player_id()))
	{
		if (iParam0 || func_116(player_id()) != 0)
		{
			func_93(20);
			if (func_114(player_id()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 8))
				{
					GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
				}
			}
		}
	}
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_114(iParam0) && !func_113(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_125(iParam0);
	uVar3 = func_124();
	uVar4 = func_118();
	if ((iVar1 && (func_112(iParam0) || func_111(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_106(iParam0)) && !func_117(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

int func_117(int iParam0)
{
	return func_92(iParam0, 19);
}

bool func_118()
{
	if ((func_92(player_id(), 21) || func_92(player_id(), 22)) || func_121())
	{
		return true;
	}
	if (func_119())
	{
		func_93(22);
		return true;
	}
	return false;
}

bool func_119()
{
	if (func_89(player_id(), 0))
	{
		if ((func_124() && !func_120()) || func_103(player_id(), 21))
		{
			if (!func_92(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_91(27);
		}
	}
	return false;
}

auto func_120()
{
	return Global_1312416.f_1;
}

int func_121()
{
	return func_122(283, -1);
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_123(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

auto func_124()
{
	return Global_1312416;
}

int func_125(int iParam0)
{
	return func_92(iParam0, 20);
}

float func_126(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_96.f_2[iVar2 /*26*/] == 2 || !iParam1)
			{
				if (!func_14(Local_96.f_2[iVar2 /*26*/].f_1))
				{
					vVar6 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iVar2 /*26*/].f_1), 1)};
					fVar1 = vdist2(vVar3, vVar6);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_127(auto uParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int[] iVar1 = new int[32];
	int iVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	Vector3 fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_248(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_246() || iParam2 == 24)
	{
		if (func_197(iParam1, iParam2, uParam3, Global_1573685, 0, func_244()))
		{
			func_196(1);
			if ((!func_194() && !func_192()) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
			{
				if (func_191())
				{
					func_188();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_187(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_186(iParam1);
							if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(uParam3.f_33, 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = false;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = false;
							while (iVar52 < 32)
							{
								if (func_617(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_185(iVar35))
										{
											iVar44 = iVar35;
											if (func_105(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_184(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_182(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_180())
							{
								if (func_617(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_60();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_179(iVar35) && func_174(iVar35, iParam2)) && func_617(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_169(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_62(iVar35)};
								iVar37 = func_163(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = get_pedheadshot_txd_string(iVar37);
								}
								Global_1573685++;
								if (*(uParam0[iVar52 /*47*/]).f_22 != -1f)
								{
									fVar45 = *(uParam0[iVar52 /*47*/]).f_22;
								}
								if (*(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									iVar46 = *(uParam0[iVar52 /*47*/]).f_30;
								}
								if (*(uParam0[iVar52 /*47*/]).f_46 != -1)
								{
									iVar47 = *(uParam0[iVar52 /*47*/]).f_46;
								}
								iVar43 = *(uParam0[iVar52 /*47*/]).f_9;
								if ((*(uParam0[iVar52 /*47*/]).f_9 != -1 || *(uParam0[iVar52 /*47*/]).f_22 != -1f) || *(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									if (!func_180())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_158(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_157(iParam5, 1, 0, 0), 16);
								}
								if (iParam6)
								{
									iVar48 = *(uParam0[iVar52 /*47*/]).f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_152(iVar35, 0);
								if (iVar34)
								{
									if (func_151(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = iVar0 + iVar56;
										iVar56++;
									}
								}
								*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
								if (func_150(iParam5))
								{
									func_149(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_149(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_617(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_179(iVar35))
							{
								if (func_617(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_169(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_62(iVar35)};
									iVar37 = func_163(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_152(iVar35, 1);
									if (iVar34)
									{
										if (func_151(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = iVar0 + iVar56;
											iVar56++;
										}
									}
									*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
									func_141(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							func_138(uParam3, iParam1);
						}
						func_137(uParam3.f_21);
						func_136();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
						{
							func_135(uParam3, iParam1);
							func_134(iParam1, 0, 1);
							GAMEPLAY::SET_BIT(uParam3.f_33, 7);
						}
						func_135(uParam3, iParam1);
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							GAMEPLAY::SET_BIT(uParam3.f_33, 11);
						}
						if (func_130(uParam3))
						{
							Global_1573833 = 1;
						}
						func_128(uParam3);
						if (Global_1573833 == 1)
						{
							*uParam3.f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							*uParam3.f_27 = 0;
						}
					}
					if (has_scaleform_movie_loaded(*iParam1))
					{
						_set_2d_layer(7);
						draw_scaleform_movie(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_set_2d_layer(4);
					}
				}
			}
		}
		else
		{
			*uParam3.f_27 = 0;
			func_136();
			func_187(0);
			if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(uParam3.f_33, 7);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(uParam3.f_33, 10);
			}
		}
	}
	_0xE3A3DB414A373DAB();
}

void func_128(auto uParam0)
{
	if (!func_8(uParam0.f_21))
	{
		func_7(uParam0.f_21, 0, 0);
	}
	else if (func_6(uParam0.f_21, 250, 0))
	{
		func_137(uParam0.f_21);
		func_129(0);
	}
}

void func_129(int iParam0)
{
	if (iParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_130(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_60() && func_617(iVar15, 0, 1))
	{
		Var2 = {func_62(iVar15)};
		iVar1 = func_133(uParam0, *uParam0.f_37);
		if (func_132(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_131(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_131(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_131(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_131(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_131(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_131(uParam0, uVar0, 0);
					}
					break;
				}
			}
	}
	*uParam0.f_37++;
	if (*uParam0.f_37 >= 32)
	{
		*uParam0.f_37 = 0;
	}
	return iVar16;
}

void func_131(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_132(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_133(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_134(int iParam0, int iParam1, int iParam2)
{
	if (_push_scaleform_movie_function(*iParam0, "COLLAPSE"))
	{
		_push_scaleform_movie_function_parameter_bool(iParam1);
		_pop_scaleform_movie_function_void();
	}
	if (iParam2 == 1)
	{
		if (_push_scaleform_movie_function(*iParam0, "DISPLAY_VIEW"))
		{
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_135(auto uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		GAMEPLAY::SET_BIT(uParam0.f_33, 10);
	}
}

void func_136()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_137(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_138(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_60())
		{
			if (func_617(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_140(*uParam0.f_38[iVar0 /*2*/], 0);
					func_139(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_139(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (_push_scaleform_movie_function(*uParam0, "SET_ICON"))
		{
			_push_scaleform_movie_function_parameter_int(iParam1);
			_push_scaleform_movie_function_parameter_int(iParam2);
			if (iParam2 == 65)
			{
				_push_scaleform_movie_function_parameter_int(iParam3);
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (iParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_141(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_148() && iParam3 < func_147())
	{
		iParam3 %= 16;
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (_push_scaleform_movie_function(*iParam1, sVar1))
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
			if (GAMEPLAY::IS_BIT_SET(*uParam2.f_33, 8) || *uParam2.f_108 == 6)
			{
				func_146("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_146(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_146("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_146("");
			if (*uParam2.f_108 == 6)
			{
				func_146("");
			}
			else
			{
				func_146(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_145(uParam2))
			{
				func_144("DPAD_FRIEND");
			}
			else if (func_143(uParam2))
			{
				func_144("DPAD_FRIEND");
			}
			else if (func_142(uParam2))
			{
				func_144("DPAD_CREW");
			}
			else
			{
				func_144("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_142(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 6);
}

int func_143(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 5);
}

void func_144(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_145(auto uParam0)
{
	if (func_143(uParam0) && func_142(uParam0))
	{
		return true;
	}
	return false;
}

void func_146(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_147()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_149(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, Vector3 fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_148() && iParam2 < func_147())
	{
		iParam2 %= 16;
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (iParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (has_scaleform_movie_loaded(*iParam0))
		{
			if (_push_scaleform_movie_function(*iParam0, sVar1))
			{
				_push_scaleform_movie_function_parameter_int(iParam2);
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_33, 8) || *uParam1.f_108 == 6)
				{
					func_146("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_144(sParam15);
				}
				else
				{
					func_146(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_146("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(65);
				}
				if (iParam11 == 1)
				{
					_push_scaleform_movie_function_parameter_int(iVar0);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(-1);
				}
				if (func_180())
				{
					func_146("");
				}
				else if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 5 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if ((*uParam1.f_108 == 7 && !is_string_null_or_empty(sParam15)) && !is_string_null_or_empty(sParam16))
				{
					_begin_text_component("FM_AE_TWO_INT");
					_add_text_component_item_string(sParam15);
					_add_text_component_item_string(sParam16);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 8 && !is_string_null_or_empty(uParam1.f_104))
				{
					_begin_text_component("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						add_text_component_float(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						add_text_component_integer(iParam9);
					}
					_add_text_component_item_string(uParam1.f_104);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 9)
				{
					_begin_text_component("FM_AE_CASH");
					_add_text_component_substring_cash(iParam9, 1);
					_end_text_component();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !is_string_null_or_empty(uParam1.f_104))
					{
						func_144(uParam1.f_104);
					}
					else
					{
						func_146("");
					}
				}
				else if (iParam13 != -1)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam13, 6);
					_end_text_component();
				}
				else if (fParam12 != -1f)
				{
					_begin_text_component("NUMBER");
					add_text_component_float(fParam12, 1);
					_end_text_component();
				}
				else if (iParam9 != -1)
				{
					_push_scaleform_movie_function_parameter_int(iParam9);
				}
				else
				{
					func_146("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_146("");
				}
				else
				{
					func_146(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_146("");
					func_146("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_145(uParam1))
				{
					func_144("DPAD_FRIEND");
				}
				else if (func_143(uParam1))
				{
					func_144("DPAD_FRIEND");
				}
				else if (func_142(uParam1))
				{
					func_144("DPAD_CREW");
				}
				else
				{
					func_144("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_150(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_151(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_105(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_60();
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_114(iParam0)) && !func_125(iParam0))
	{
		iVar0 = func_156();
	}
	iVar1 = func_155(iParam0);
	if (!iVar1 == -1)
	{
		return func_153(iVar1);
	}
	return iVar0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = func_154(iParam0);
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

auto func_154(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_155(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_151(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_156()
{
	return 21;
}

char* func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_M_LB";
				}
				else if (iParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (iParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (iParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (iParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (iParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (iParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (iParam1 || iParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

bool func_158(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_162(iParam3))
	{
		*fParam1 = func_159(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_150(iParam3))
	{
		*fParam1 = func_159(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_161(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_160(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_160(Vector3 fParam0)
{
	return fParam0 / 1.609344f;
}

float func_161(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = func_166(iParam0);
	if (iVar0 == -1)
	{
		func_164(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_164(int iParam0, int iParam1)
{
	if (!func_617(iParam0, 0, 1))
	{
		return;
	}
	if (func_166(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_165(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (!func_617(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_167(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_167(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_168(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_168(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_60();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_169(int iParam0)
{
	struct<4> Var0;
	
	if (func_617(iParam0, 0, 1))
	{
		Global_2459440 = {func_62(iParam0)};
		if (is_durango_version())
		{
			if (func_132(Global_2459440))
			{
				if (!_0xB57A49545BA53CE7(&Global_2459440))
				{
					return Var0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_173(&Global_2459440))
		{
			Global_2459370 = {func_171(iParam0)};
			func_170(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_170(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_171(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_172(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_62(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_172(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_173(auto uParam0)
{
	if (is_player_online())
	{
		if (_network_player_is_in_clan() && network_clan_player_is_active(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_174(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_113(iParam0) || func_178(iParam0)) || func_177(iParam0))
		{
			return false;
		}
	}
	if (!func_176(iParam0))
	{
		return false;
	}
	if ((!func_175(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_185(iParam0))
	{
		return false;
	}
	return true;
}

bool func_175(int iParam0)
{
	if (func_617(iParam0, 0, 1))
	{
		if (func_617(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_176(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_177(int iParam0)
{
	if (func_113(iParam0))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_178(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_179(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return false;
	}
	if (func_17(iParam0, 0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_180()
{
	switch (func_181(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_125(player_id()))
	{
		switch (func_88(player_id()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
				break;
			}
	}
	return false;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_182(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_183(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_183(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

bool func_183(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_617(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_185(iVar1))
				{
					if (func_71(iVar1, iParam1, 0))
					{
						*iParam0[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_185(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

void func_186(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_187(int iParam0)
{
	if (iParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_188()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
	{
		if (func_190())
		{
			func_189();
		}
	}
}

void func_189()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

int func_190()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

bool func_191()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false) && func_190())
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true) && func_190())
	{
		return true;
	}
	return false;
}

bool func_192()
{
	if (func_190())
	{
		if (func_193(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_193(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return true;
		
		default:
	}
	return false;
}

bool func_194()
{
	if (func_190())
	{
		if (func_195(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_195(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return true;
		
		default:
	}
	return false;
}

void func_196(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_197(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_243(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_242();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_241())
		{
			if (func_240() > 0 && Global_1573687)
			{
				_0x25F87B30C382FCA7();
				_0x55598D21339CB998(fVar7);
				hide_hud_component_this_frame(18);
				if (is_help_message_being_displayed())
				{
					hide_help_text_this_frame();
				}
				hide_hud_component_this_frame(10);
			}
		}
	}
	if (!iParam5)
	{
		if (!func_223())
		{
			func_222(iParam0, uParam2, 1);
			return false;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
	{
		func_222(iParam0, uParam2, 1);
		return false;
	}
	if (!func_8(uParam2.f_19))
	{
		if (func_240() == 1)
		{
			func_221(iVar6, iParam0, 0);
			func_7(uParam2.f_19, 0, 0);
			func_222(iParam0, uParam2, 0);
		}
	}
	if (func_8(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_6(uParam2.f_19, 10000, 0) || (func_240() == 0 && !iParam5))
		{
			func_222(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_220();
				if (iParam1 == 23 || iParam1 == 24)
				{
					_0x25F87B30C382FCA7();
				}
				hide_hud_component_this_frame(18);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam2.f_33, false))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				_0x55598D21339CB998(fVar7);
				if (iVar5)
				{
					if (*uParam2.f_34 != Global_1573686)
					{
						GAMEPLAY::CLEAR_BIT(uParam2.f_33, false);
					}
				}
				return true;
			}
			else
			{
				if (iVar5 == 0)
				{
					func_220();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_221(iVar6, iParam0, 0))
				{
					func_186(iParam0);
					sVar4 = func_218(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_215(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_208(iParam0, func_212(uParam2), func_209(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_205(iParam0, func_207(), func_206(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_215(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_203(iParam1)};
						iVar8 = func_198(iParam1);
						func_215(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_202())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_201(player_id()))
			{
				iVar0 = 20;
			}
			if (func_200(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_199(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_199(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_200(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_201(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_202()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_203(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_204(player_id()) || func_199(player_id()))
	{
		return cVar0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&cVar0, "LBD_DIF_", 16);
			StringIntConCat(&cVar0, Global_1617379.f_23, 16);
			break;
	}
	return cVar0;
}

int func_204(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_205(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_144(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_144("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_206()
{
	switch (func_88(player_id()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_207()
{
	switch (func_88(player_id()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_208(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_144(sParam1);
		}
		else if (func_181(player_id()) == 133)
		{
			_begin_text_component("FM_AE_BRACKT_C");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_144("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_209(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_181(player_id());
	if (func_211())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_210())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_210()
{
	if (func_181(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

auto func_211()
{
	return Global_1587522;
}

char* func_212(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_181(player_id());
	if (func_211())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_214() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_214() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_210())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_213() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

auto func_213()
{
	return Global_2460486.f_4650;
}

int func_214()
{
	if (func_181(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_215(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_146(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_144(sParam1);
		}
		if (func_241() && iParam6)
		{
			if (func_217())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = true;
				iVar1 = 2;
			}
			_begin_text_component("LBD_DPD_CNT");
			add_text_component_integer(iVar0);
			add_text_component_integer(iVar1);
			_end_text_component();
		}
		else
		{
			func_144(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_216(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_216(int iParam0)
{
	if (func_201(iParam0) || func_200(iParam0))
	{
		return true;
	}
	return false;
}

auto func_217()
{
	return Global_1573687;
}

char* func_218(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_219();
		return uVar0;
	}
	else if (iParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!is_string_null_or_empty(sParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_219()
{
	if (_0xFBCFA2EA2E206890())
	{
		return "HUD_LBD_FMF";
	}
	if (_0x74732C6CA90DA2B4())
	{
		return "HUD_LBD_FMC";
	}
	if (_0xF3929C2379B60CCE())
	{
		return "HUD_LBD_FMS";
	}
	if (_0xCEF70AA5B3F89BA1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_220()
{
	Global_36611 = 1;
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (iParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return has_scaleform_movie_loaded(*iParam1);
}

void func_222(int iParam0, auto uParam1, int iParam2)
{
	GAMEPLAY::CLEAR_BIT(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_136();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_8(uParam1.f_19))
		{
			func_137(uParam1.f_19);
		}
	}
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam1.f_33, false))
	{
		GAMEPLAY::CLEAR_BIT(uParam1.f_33, false);
	}
	_0x55598D21339CB998(0f);
}

bool func_223()
{
	if (func_239())
	{
		return false;
	}
	if (func_238())
	{
		return false;
	}
	if (!func_236())
	{
		return false;
	}
	if (!func_234())
	{
		return false;
	}
	if (func_233(8, -1))
	{
		return false;
	}
	if (func_240() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_232())
	{
		return false;
	}
	else if (!func_229(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_228(1) || func_226(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_224(player_id()))
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (Global_1715402)
	{
		return false;
	}
	if (func_76(0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

bool func_224(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return true;
	}
	if (func_225())
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

int func_225()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

bool func_226(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_227(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return false;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!iParam0 && is_disabled_control_pressed(0, 19)))
	{
		return true;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return true;
		}
		if (!iParam0)
		{
			if (((is_disabled_control_pressed(0, 166) || is_disabled_control_pressed(0, 167)) || is_disabled_control_pressed(0, 168)) || is_disabled_control_pressed(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_227(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_228(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_229(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_230(iParam0))
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

int func_230(int iParam0)
{
	return func_231(iParam0);
}

int func_231(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_232()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_233(int iParam0, int iParam1)
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

bool func_234()
{
	if (func_235() == 0)
	{
		return true;
	}
	return false;
}

auto func_235()
{
	return Global_1312466.f_18;
}

bool func_236()
{
	if (func_237())
	{
		return true;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (is_screen_fading_out() || is_screen_fading_in())
	{
		return false;
	}
	if (is_frontend_fading())
	{
		return false;
	}
	return true;
}

auto func_237()
{
	return Global_1312438;
}

int func_238()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_239()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

auto func_240()
{
	return Global_1338622.f_68;
}

bool func_241()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_242()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_243(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return true;
			break;
	}
	return false;
}

int func_244()
{
	if (func_245(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_245(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

bool func_246()
{
	if (func_244())
	{
		return true;
	}
	if (func_177(player_id()))
	{
		return false;
	}
	if (func_211())
	{
		return true;
	}
	if (func_114(player_id()))
	{
		switch (func_181(player_id()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
				break;
			
			case 140:
				if (!func_247(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_247(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_247(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_248(int iParam0)
{
	if ((iParam0 == 24 && func_114(player_id())) && !func_125(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_89(player_id(), 0) && func_125(player_id()))
		{
			return true;
		}
		if (func_116(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_249()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(player_id(), 0))
	{
		iVar0 = participant_id_to_int();
	}
	else
	{
		iVar0 = func_250();
	}
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Local_968[iVar0 /*14*/].f_1, true);
	}
	return false;
}

int func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1587523[player_id() /*444*/].f_355;
	if (network_is_player_active(iVar1))
	{
		if (network_is_player_a_participant(iVar1))
		{
			iVar2 = network_get_participant_index(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_251()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_252(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_252(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<14> Var15;
	int iVar29;
	
	if (get_event_data(1, iParam0, &Var0, 10))
	{
		iVar29 = false;
		while (iVar29 < 4)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_113, iVar29))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_6, iVar29))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (is_entity_a_vehicle(Var0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_96.f_109, iVar29))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_5, iVar29))
								{
									if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar29 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(net_to_veh(Local_96.f_2[iVar29 /*26*/].f_2)))
										{
											if (get_vehicle_index_from_entity_index(Var0) == net_to_veh(Local_96.f_2[iVar29 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (is_entity_a_ped(Var0.f_1))
													{
														if (get_ped_index_from_entity_index(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_573() == Local_96.f_118)
															{
																GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_5), iVar29);
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
						else if (is_entity_a_ped(Var0))
						{
							iVar11 = get_ped_index_from_entity_index(Var0);
							if (iVar11 == net_to_ped(Local_96.f_2[iVar29 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (is_entity_a_ped(Var0.f_1))
									{
										iVar10 = get_ped_index_from_entity_index(Var0.f_1);
										if (is_ped_a_player(iVar10))
										{
											iVar13 = _network_get_ped_player(iVar10);
											if (network_is_player_a_participant(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == player_id())
													{
														Local_968[participant_id_to_int() /*14*/].f_11++;
														GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_6), iVar29);
														Var15.f_2 = 144;
														Var15.f_10 = player_id();
														func_258(Var15, func_259(0));
														func_253("HUNT_TCKP", 1);
													}
												}
											}
											else if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = _network_get_ped_player(iVar10);
													GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_7), iVar29);
									}
								}
							}
						}
					}
				}
			}
			iVar29++;
		}
	}
	if (func_249())
	{
		if (!func_92(player_id(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (is_entity_a_ped(Var0))
				{
					iVar11 = get_ped_index_from_entity_index(Var0);
					if (is_ped_a_player(iVar11))
					{
						iVar12 = _network_get_ped_player(iVar11);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (is_entity_a_ped(Var0.f_1))
							{
								iVar10 = get_ped_index_from_entity_index(Var0.f_1);
								if (is_ped_a_player(iVar10))
								{
									iVar13 = _network_get_ped_player(iVar10);
									if (iVar13 == player_id())
									{
										if (network_is_player_a_participant(iVar12))
										{
											if (func_151(iVar12, 1))
											{
												if (Local_96.f_118 > -1)
												{
													iVar14 = network_get_player_index(int_to_participantindex(Local_96.f_118));
													if (func_71(iVar12, iVar14, 1))
													{
														func_115(0);
														func_108();
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
		}
	}
}

int func_253(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_254(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_254(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_257() || !network_is_activity_session()) || !func_17(player_id(), 0))
	{
		return;
	}
	iVar0 = func_255(iParam2);
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

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_256(iVar0);
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

void func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_257()
{
	return is_dlc_present(-1762644250);
}

void func_258(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_259(int iParam0)
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
			if (func_617(iVar2, 0, 0))
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

void func_260()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(player_id(), 0))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 14))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1417, 14);
		}
		return;
	}
	iVar0 = Global_1587523[player_id() /*444*/].f_355;
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 14))
	{
		if (Local_968[participant_id_to_int() /*14*/].f_1 != 0)
		{
			Local_968[participant_id_to_int() /*14*/].f_1 = 0;
		}
		GAMEPLAY::SET_BIT(&iLocal_1417, 14);
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 15))
	{
		GAMEPLAY::SET_BIT(&iLocal_1417, 15);
		func_508();
	}
	if (network_is_player_active(iVar0))
	{
		if (network_is_player_a_participant(iVar0))
		{
			iVar1 = network_get_participant_index(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_968[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_485();
					func_467();
					func_452();
					break;
				
				case 2:
					func_261();
					break;
				
				case 3:
					func_586();
					break;
				}
			}
	}
}

void func_261()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	char* sVar12;
	auto uVar13;
	int iVar14;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar10 = participant_id_to_int();
	iVar11 = player_id();
	if (func_17(player_id(), 0))
	{
		iVar10 = func_250();
		iVar11 = Global_1587523[player_id() /*444*/].f_355;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_968[iVar10 /*14*/].f_1, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 9))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, true))
			{
				if (iVar10 == Local_96.f_118 || func_573() == Local_96.f_118)
				{
					if (func_116(iVar11) >= 2)
					{
						sVar12 = func_451(iVar11);
						uVar13 = func_450(iVar11);
						func_448(85, "GB_WINNER", "BIGM_HUNTD", sVar12, uVar13, 0, -1, -1, -1, 2, -1);
					}
					if (iVar11 == player_id())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
						{
							func_447(1, 1);
							GAMEPLAY::SET_BIT(&iLocal_1417, 6);
						}
						Var0 = func_446();
						Var0.f_1 = func_445();
						func_328(166, 1, &Var0);
						clear_player_wanted_level(iVar11);
						iLocal_1711 = get_max_wanted_level();
						set_max_wanted_level(false);
						GAMEPLAY::SET_BIT(&iLocal_1417, 17);
						func_7(&uLocal_1712, 0, 0);
					}
				}
				else if (func_249())
				{
					if (func_151(iVar11, 1))
					{
						if (func_116(iVar11) >= 2)
						{
							sVar12 = func_451(int_to_playerindex(Local_96.f_119));
							uVar13 = func_450(int_to_playerindex(Local_96.f_119));
							func_448(86, "GB_WORK_OVER", "BIGM_HUNTD", sVar12, uVar13, 0, -1, -1, -1, 2, -1);
						}
						if (iVar11 == player_id())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
							{
								func_447(0, 2);
								GAMEPLAY::SET_BIT(&iLocal_1417, 6);
							}
							if (func_109(iVar11))
							{
								Var0 = func_327();
								Var0.f_1 = func_326();
							}
							func_328(166, 0, &Var0);
						}
					}
					else
					{
						if (func_116(iVar11) >= 2)
						{
							sVar12 = func_451(int_to_playerindex(Local_96.f_119));
							uVar13 = func_450(int_to_playerindex(Local_96.f_119));
							func_448(86, "GB_WORK_OVER", "BIGM_HUNTD", sVar12, uVar13, 0, -1, -1, -1, 2, -1);
						}
						if (iVar11 == player_id())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
							{
								func_447(0, 2);
								GAMEPLAY::SET_BIT(&iLocal_1417, 6);
							}
							if (func_109(iVar11))
							{
								Var0 = func_327();
								Var0.f_1 = func_326();
							}
							func_328(166, 0, &Var0);
						}
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_1417, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 3))
			{
				iVar14 = 4 - Local_96.f_115;
				if (iVar10 == Local_96.f_118 || func_573() == Local_96.f_118)
				{
					if (func_116(iVar11) >= 2)
					{
						sVar12 = func_322();
						uVar13 = func_450(iVar11);
						func_448(86, "GB_WORK_OVER", "BIGM_HUNFD", sVar12, uVar13, 0, -1, -1, -1, 2, -1);
					}
					if (iVar11 == player_id())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
						{
							func_447(0, 2);
							GAMEPLAY::SET_BIT(&iLocal_1417, 6);
						}
						Var0 = func_446();
						Var0.f_1 = func_445();
						func_328(166, 0, &Var0);
					}
				}
				else
				{
					if (func_116(iVar11) >= 2)
					{
						sVar12 = func_451(int_to_playerindex(Local_96.f_119));
						uVar13 = func_450(int_to_playerindex(Local_96.f_119));
						if (iVar14 == 1)
						{
							func_448(85, "GB_WINNER", "BIGM_HUN1S", sVar12, uVar13, 0, iVar14, -1, -1, 2, -1);
						}
						else if (iVar14 > 1)
						{
							func_448(85, "GB_WINNER", "BIGM_HUNRS", sVar12, uVar13, 0, iVar14, -1, -1, 2, -1);
						}
					}
					if (iVar11 == player_id())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
						{
							func_447(1, 1);
							GAMEPLAY::SET_BIT(&iLocal_1417, 6);
						}
						if (func_109(iVar11))
						{
							Var0 = func_327();
							Var0.f_1 = func_326();
						}
						func_328(166, 1, &Var0);
						clear_player_wanted_level(player_id());
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_1417, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 5))
			{
				if (func_308())
				{
					if (func_572())
					{
						if (func_116(iVar11) >= 2)
						{
						}
					}
					else if (func_116(iVar11) >= 2)
					{
						func_287(86, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar11 == player_id())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
					{
						func_447(0, 8);
						GAMEPLAY::SET_BIT(&iLocal_1417, 6);
					}
					func_328(166, 0, &Var0);
				}
				GAMEPLAY::SET_BIT(&iLocal_1417, 9);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 9))
		{
			func_508();
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 8))
			{
				func_274();
				func_70();
				GAMEPLAY::SET_BIT(&iLocal_1418, 8);
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 10))
			{
			}
			if (func_262(&uLocal_1425, 0))
			{
				if (iVar10 == participant_id_to_int())
				{
					GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_1), 4);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 17))
			{
				if (func_6(&uLocal_1712, 10000, 0))
				{
					set_max_wanted_level(iLocal_1711);
					GAMEPLAY::CLEAR_BIT(&iLocal_1417, 17);
				}
			}
		}
	}
}

bool func_262(auto uParam0, int iParam1)
{
	int iVar0;
	
	func_93(29);
	if ((*uParam0 > 0 && !func_190()) && func_116(player_id()) != 0)
	{
		if (!func_273())
		{
			func_272();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(uParam0.f_3))
			{
				func_7(uParam0.f_3, 0, 0);
			}
			else if (func_6(uParam0.f_3, 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1727391.f_3), 2);
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), false);
					func_7(uParam0.f_5, 0, 0);
				}
				func_7(uParam0.f_1, 0, 0);
				func_271(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(uParam0.f_5))
			{
				if (func_6(uParam0.f_5, 3000, 0))
				{
					iVar0 = true;
				}
			}
			else
			{
				iVar0 = true;
			}
			if (iVar0)
			{
				func_266();
				func_271(uParam0, 2);
			}
			break;
		
		case 2:
			func_266();
			if (func_6(uParam0.f_1, 15000, 0))
			{
				if (func_263(func_264()))
				{
					clear_help(1);
				}
				func_271(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(uParam0.f_1, 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
				GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), 2);
				func_271(uParam0, 4);
				return true;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
			GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), 2);
			return true;
	}
	return false;
}

int func_263(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

char* func_264()
{
	if (func_183(func_265()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

auto func_265()
{
	return Global_1615885;
}

void func_266()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false))
	{
		if ((((((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_617(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out()) && !func_92(player_id(), 22)) && func_116(player_id()) != 0) && !func_269(func_270()))
		{
			GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), true);
			func_268(func_264(), -1);
			func_267(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), false);
		}
	}
}

void func_267(int iParam0)
{
	if (iParam0 && !func_190())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_268(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

bool func_269(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		
		default:
	}
	return false;
}

int func_270()
{
	char* sVar0;
	
	sVar0 = get_this_script_name();
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_271(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_272()
{
	Global_2444574 = 1;
}

bool func_273()
{
	if (func_88(player_id()) == 170)
	{
		return true;
	}
	return false;
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_blip_exist(iLocal_1432[iVar0]))
		{
			remove_blip(&(iLocal_1432[iVar0]));
		}
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 18))
	{
		func_286();
		GAMEPLAY::CLEAR_BIT(&iLocal_1417, 18);
	}
	func_283();
	func_275();
}

void func_275()
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 7))
	{
		GAMEPLAY::SET_BIT(&iLocal_1417, 7);
		iVar0 = false;
		while (iVar0 < 32)
		{
			iVar1 = int_to_playerindex(iVar0);
			if (network_is_player_active(iVar1))
			{
				if (iVar1 != player_id())
				{
					if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_8, iVar0))
					{
						func_281(iVar1, 432, 0);
						func_276(iVar1, func_280(iLocal_1709), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_276(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == func_278())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_277(iParam0))
	{
		if (iParam2)
		{
			GAMEPLAY::SET_BIT(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = get_id_of_this_thread();
			Global_2412879.f_427[iVar0] = uParam1;
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

bool func_277(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

int func_278()
{
	switch (func_279())
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

auto func_279()
{
	return Global_25120;
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return iVar0 * 16777216 + iVar1 * 65536 + iVar2 * 256 + iVar3;
	return 0;
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == func_278())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!is_thread_active(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2412879.f_385, iVar0))
			{
				func_282();
			}
			GAMEPLAY::SET_BIT(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = get_id_of_this_thread();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2412879.f_385, iVar0))
			{
				func_282();
			}
			GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_282()
{
	Global_2412879.f_880 = 1;
}

void func_283()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 16))
	{
		func_79();
		func_284();
		GAMEPLAY::CLEAR_BIT(&iLocal_1417, 16);
	}
}

void func_284()
{
	if (Global_2410702.f_6 == get_id_of_this_thread())
	{
		func_285();
	}
}

void func_285()
{
	struct<25> Var0;
	
	if (is_thread_active(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == get_id_of_this_thread())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2410702 = {Var0};
	Global_2410702.f_6 = -1;
}

void func_286()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_124())
		{
			if (func_617(player_id(), 1, 0))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			set_player_vehicle_defense_modifier(player_id(), 1f);
			_0x1B857666604B1A74(0);
			network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				use_player_colour_instead_of_team_colour(0);
			}
		}
		else
		{
			if (func_617(player_id(), 1, 1))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				set_player_vehicle_defense_modifier(player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					use_player_colour_instead_of_team_colour(1);
				}
			}
			_0x1B857666604B1A74(1);
			network_set_friendly_fire_option(0);
		}
	}
}

int func_287(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_307(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_288(&Var0);
}

bool func_288(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_291(uParam0, *uParam0.f_16);
	func_290(uParam0);
	if (func_289(*uParam0.f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = {*uParam0};
			return true;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = {Global_2428492.f_2171[iVar0 /*72*/]};
			iVar0 += -1;
		}
		Global_2428492.f_2171[1 /*72*/] = {*uParam0};
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = {*uParam0};
			return true;
		}
		else
		{
			if (*uParam0.f_1 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_193(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_289(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_290(auto uParam0)
{
	if (func_195(*uParam0.f_1))
	{
		*uParam0.f_66 = func_156();
	}
}

void func_291(auto uParam0, int iParam1)
{
	if (func_195(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_60())
	{
		return;
	}
	if (func_193(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_292(iParam1, -2, 0, 0);
		}
	}
}

int func_292(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_224(iParam0))
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
	if (func_224(player_id()) || (func_306() && func_305()))
	{
		iVar0 = func_304();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_617(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_303(iParam1, iParam0, 0);
							}
							else
							{
								return func_300(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_300(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_303(iParam1, iParam0, 0);
				}
				else
				{
					return func_293(0, -1, 0);
				}
			}
			else
			{
				return func_293(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_303(iParam1, iParam0, 0);
		}
		else
		{
			return func_300(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_300(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_293(int iParam0, int iParam1, int iParam2)
{
	return func_294(player_id(), iParam0, iParam1, iParam2);
}

int func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_299(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_298(1);
				}
				else
				{
					return func_298(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_295(iVar0, iParam2, 1);
			}
			else
			{
				return func_295(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_298(1);
	}
	return func_298(0);
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_297(iParam0, iParam1);
	if (func_296(Global_1617379.f_70365))
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

bool func_296(int iParam0)
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

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_299(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_298(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_299(int iParam0, int iParam1, int iParam2)
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

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_302(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_299(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_298(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_301(1);
			}
			else
			{
				return func_294(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_298(1);
			}
			else
			{
				return func_294(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_155(iParam0);
	if (!iVar3 == -1)
	{
		return func_153(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_301(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_302(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_303(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_294(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_304()
{
	return Global_2359301.f_2;
}

int func_305()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_306()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

void func_307(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_60();
	*uParam1.f_17 = func_60();
	*uParam1.f_18 = func_60();
	*uParam1.f_1 = uParam0;
	*uParam1.f_2 = 1;
	StringCopy(uParam1.f_19, sParam4, 16);
	StringCopy(uParam1.f_8, sParam3, 32);
	*uParam1.f_3 = iParam2;
	*uParam1.f_65 = 1;
	*uParam1.f_68 = 1;
	*uParam1.f_69 = 1;
	*uParam1.f_67 = 0;
	StringCopy(uParam1.f_23, "", 64);
	StringCopy(uParam1.f_39, "", 64);
}

bool func_308()
{
	int iVar0;
	
	if (!func_17(player_id(), 0))
	{
		if (!func_309(1))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_1, 6))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_968[participant_id_to_int() /*14*/].f_1), 6);
			}
			return false;
		}
		if (func_118())
		{
			if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_1, 6))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_968[participant_id_to_int() /*14*/].f_1), 6);
			}
			return false;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_1, 6))
		{
			GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_250();
		if (iVar0 == -1)
		{
			return false;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_968[iVar0 /*14*/].f_1, 6))
		{
			return false;
		}
	}
	return true;
}

bool func_309(int iParam0)
{
	if (func_103(player_id(), 21))
	{
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		return false;
	}
	if (iParam0)
	{
		if (network_is_in_mp_cutscene())
		{
			return false;
		}
	}
	if (func_321(player_id()))
	{
		return false;
	}
	if (func_320())
	{
		return false;
	}
	if (func_238())
	{
		return false;
	}
	if (func_319())
	{
		return false;
	}
	if (func_232())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_230(player_id()))
	{
		return false;
	}
	if (!func_234())
	{
		return false;
	}
	if (func_103(player_id(), 0) || func_103(player_id(), 3))
	{
		return false;
	}
	if ((func_103(player_id(), 12) || func_103(player_id(), 14)) || func_103(player_id(), 13))
	{
		return false;
	}
	if (func_318(player_id(), 0, 0))
	{
		if ((!func_317(Global_1587523[player_id() /*444*/].f_250.f_9) && !func_315(player_id())) || (func_88(player_id()) != 167 && func_88(player_id()) != 168))
		{
			return false;
		}
	}
	if (func_314())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_313(player_id()))
	{
		return false;
	}
	if (func_312())
	{
		return false;
	}
	if (func_311(player_id()))
	{
		return false;
	}
	if (func_310(player_id()))
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_312()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_313(int iParam0)
{
	if (!func_617(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_314()
{
	return Global_91330.f_297 > 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_617(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_316(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

bool func_317(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

bool func_318(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!iParam2)
	{
		if (func_315(iParam0))
		{
			return true;
		}
	}
	return false;
}

auto func_319()
{
	return Global_1315913;
}

int func_320()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_321(int iParam0)
{
	if (func_229(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

char* func_322()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_61(player_id());
	if (iVar0 != func_60())
	{
		if (iVar0 != player_id())
		{
			if (((func_92(iVar0, 28) || func_92(player_id(), 28)) || func_325(iVar0)) && !func_324(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_323(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar1))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

auto func_323(auto uParam0)
{
	return uParam0;
}

bool func_324(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_62(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_325(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_62(iParam0)};
	if (is_orbis_version() || GAMEPLAY::IS_PC_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			return false;
		}
	}
	else if (is_durango_version())
	{
		if (_0xB57A49545BA53CE7(&Var0))
		{
			return false;
		}
	}
	return true;
}

int func_326()
{
	return 4 - Local_96.f_115 * Global_262145.f_12898;
}

int func_327()
{
	return 4 - Local_96.f_115 * Global_262145.f_12897;
}

void func_328(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
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
	auto uVar18;
	auto uVar19;
	int iVar20;
	int iVar21;
	auto uVar22;
	
	func_443(iParam0, &fVar2, &fVar3);
	if (*uParam2.f_6 == 0)
	{
		iVar1 += *uParam2.f_1;
		iVar0 += *uParam2;
	}
	if (iParam1)
	{
		iVar1 += func_442(iParam0);
		iVar1 = round(to_float(iVar1) / to_float(*uParam2.f_4));
		iVar1 = round(IntToFloat(iVar1) * fVar3);
		iVar1 = round(IntToFloat(iVar1) * *uParam2.f_3);
		iVar0 += func_441(iParam0);
		iVar0 = round(to_float(iVar0) / to_float(*uParam2.f_4));
		iVar0 = round(IntToFloat(iVar0) * fVar2);
		iVar0 = round(IntToFloat(iVar0) * *uParam2.f_2);
	}
	if (iParam1)
	{
		if (func_440(player_id()) > 0)
		{
			func_439();
		}
		else
		{
			func_438();
		}
	}
	else
	{
		func_437();
	}
	if (iParam0 == 168)
	{
		if (iParam1)
		{
			if (func_105(player_id()))
			{
				if (*uParam2.f_5)
				{
					iVar0 += func_429(Global_1610316[player_id() /*174*/].f_10.f_119);
				}
				else
				{
					iVar4 = *uParam2.f_7;
					if (*uParam2.f_8 > 0)
					{
						iVar4 += *uParam2.f_8;
					}
					iVar5 = func_428(iVar4);
					iVar6 = iVar5 * iVar4;
					iVar0 += iVar6;
					iVar8 = func_427(&uVar7);
					iVar9 = Global_262145.f_13508;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = ceil(IntToFloat(iVar8) * Global_262145.f_12730);
					iVar11 = iVar0 / 100 * iVar10;
					iVar0 += iVar11;
					if (*uParam2.f_6)
					{
						iVar0 += *uParam2;
					}
					if (iVar8 > 0 && *uParam2.f_9 != 4)
					{
						func_426(44);
					}
				}
				func_420(iVar0);
				func_419();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < _network_get_num_participants_host())
				{
					iVar13 = iVar12;
					if (network_is_participant_active(iVar13))
					{
						iVar14 = network_get_player_index(iVar13);
						if (func_418(iVar14))
						{
							func_410(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_105(player_id()))
		{
			func_409();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_105(player_id()))
		{
			if (iParam1)
			{
				func_408();
			}
			func_407();
		}
	}
	iVar15 = func_406();
	if (iVar15 != func_60() && iParam0 != 148)
	{
		if (func_151(player_id(), 0))
		{
			if (!func_71(player_id(), iVar15, 1))
			{
				func_396(&iVar0, 1);
			}
		}
	}
	func_393(iParam0, &iVar16, &iVar17);
	iVar1 += iVar16;
	iVar0 += iVar17;
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_392();
		func_346(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_345();
		if (iVar20 != func_60())
		{
			func_344(iVar20, &uVar18, &uVar19);
		}
		iVar21 = !func_343(1);
		if (iParam0 == 168)
		{
			if (!func_342())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_342())
		{
			func_333(-856006867, iVar0, &uVar22, 0, 1, 0);
			Global_2558146[uVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[uVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[uVar22 /*73*/].f_8.f_56 = iVar21;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar18, uVar19, iVar0, iVar21);
		}
		if (func_332(iParam0))
		{
			if (func_331(iParam0) > -1)
			{
				func_330(func_331(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_329(&Global_2443512, 0, 0);
	}
}

void func_329(auto uParam0, int iParam1, int iParam2)
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

void func_330(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = uParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		default:
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_333(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_342())
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
				func_334(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_334(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_334(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_342())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_19()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_341(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_340(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_335(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_336(iParam0);
	}
}

void func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_342())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_339(iParam0))
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
		func_337(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_337(auto uParam0)
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
	func_338(uParam0.f_8.f_3);
	func_338(uParam0.f_8.f_16);
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

void func_338(auto uParam0)
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

int func_339(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_340(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_341(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_342())
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

bool func_342()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

int func_343(int iParam0)
{
	return func_151(player_id(), iParam0);
}

void func_344(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

auto func_345()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_346(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_347(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_347(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_357(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_353(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_348(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_348(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_351(iParam0, 1)};
	if (iParam0 == func_350(PLAYER::PLAYER_PED_ID()))
	{
		func_349(1);
	}
	func_353(vVar0, iParam1, 0, sParam2);
}

void func_349(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_350(int iParam0)
{
	return iParam0;
}

Vector3 func_351(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_352(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
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

int func_352(int iParam0)
{
	return iParam0;
}

void func_353(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_356(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_355();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_354();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_354()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_355()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_356(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(get_gameplay_cam_coord(), vParam0, 1);
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

auto func_357(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_358(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_358(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_391(player_id()) || func_390(player_id()))
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
	if (func_389(sParam2))
	{
	}
	if (func_388())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_386(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_385(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_383(0, &iVar1);
					break;
				
				case 3:
					func_383(1, &iVar1);
					break;
				
				case 1:
					func_381(&iVar1);
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
			func_378(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_368(func_377(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_378(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_363(iVar1);
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
				func_359(func_361(player_id()) + iVar1);
			}
			else
			{
				func_359(func_361(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_359(int iParam0)
{
	if (func_388())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_360(joaat("mpply_globalxp"), iParam0);
	}
}

void func_360(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_361(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_617(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_362(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_362(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_362(int iParam0)
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

void func_363(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_62(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_366(func_367(&Var0));
			if (iVar13 == 0)
			{
				func_365(&Global_1347641, iParam0);
				func_364(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_365(&Global_1347642, iParam0);
				func_364(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_365(&Global_1347643, iParam0);
				func_364(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_365(&Global_1347644, iParam0);
				func_364(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_365(&Global_1347645, iParam0);
				func_364(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_364(int iParam0, int iParam1)
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

void func_365(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_366(int iParam0)
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

auto func_367(auto uParam0)
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

void func_368(int iParam0, int iParam1, int iParam2)
{
	if (func_388())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_123(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_123(-1)])
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
		if (func_376(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_374(iParam0, 1);
		}
		func_373(632, iParam0, -1, 1);
		func_372(633, func_374(iParam0, 1), -1, 1);
		Global_1347756[func_123(-1)] = iParam0;
		func_369(7, 0);
	}
}

void func_369(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_371(iParam0, iParam1))
	{
		uVar0 = func_370();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_370()
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

bool func_371(int iParam0, auto uParam1)
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

void func_372(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_123(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_373(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_123(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_123(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_123(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_123(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_123(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_123(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_123(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_123(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_123(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_123(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_123(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_123(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_123(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_123(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_123(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_123(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_123(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_123(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_123(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_123(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_123(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_123(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_123(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_123(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_123(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_123(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_123(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_123(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_123(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_123(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_123(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_123(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_123(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_123(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_123(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_374(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_375(iParam0, 0);
}

int func_375(int iParam0, int iParam1)
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
				iVar3 = true;
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

int func_376(int iParam0)
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

int func_377(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_123(-1)];
			}
			else if (func_376(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_123(-1)];
	}
	return 0;
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_380(iParam0, func_123(iParam2), 0);
	iVar0 += iParam1;
	if (!func_379(iParam0))
	{
		func_372(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_373(iParam0, iVar0, iParam2, 1);
	}
}

bool func_379(int iParam0)
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

int func_380(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_123(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_381(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_299(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_63(player_id(), iVar5))
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
		iVar6 = round(func_382(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_382(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_382(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

void func_383(int iParam0, int iParam1)
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
				if (func_617(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_63(player_id(), iVar4))
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
			if (func_617(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_384(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(player_id(), iVar4))
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
		iVar5 = round(func_382(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_382(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_384(int iParam0, int iParam1)
{
	return vdist(func_56(iParam0), func_56(iParam1));
	return 0f;
}

auto func_385(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_382(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_386(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_377(player_id()))
		{
			iParam0 = -func_377(player_id());
		}
	}
	if (func_387(8000, 0, 0) > 0)
	{
		if (func_387(8000, 0, 0) < iParam0 + func_377(player_id()))
		{
			iParam0 = func_387(8000, 0, 0) - func_377(player_id());
		}
	}
	return iParam0;
}

auto func_387(int iParam0, int iParam1, int iParam2)
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

bool func_388()
{
	return true;
}

bool func_389(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_390(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_391(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_392()
{
	Global_2444573 = 1;
}

void func_393(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_76(7))
	{
		return;
	}
	iVar0 = func_395(iParam0);
	iVar1 = func_394(iParam0);
	iVar2 = absi(get_time_difference(Global_2460486.f_4660.f_67, NETWORK::GET_NETWORK_TIME()));
	if (iVar2 > Global_262145.f_10334)
	{
		iVar2 = Global_262145.f_10334;
	}
	iVar3 = floor(to_float(iVar2) / 1000f * 60f);
	if (iVar3 < 1)
	{
		iVar3 = true;
	}
	*uParam1 = iVar3 * iVar1;
	*uParam2 = iVar3 * iVar0;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10425;
		
		case 152:
			return Global_262145.f_10460;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10448;
		
		case 157:
			return Global_262145.f_10415;
		
		case 159:
			return Global_262145.f_10398;
		
		case 164:
			return Global_262145.f_10438;
		
		case 160:
			return Global_262145.f_10488;
		
		case 162:
			return Global_262145.f_10508;
		
		case 163:
			return Global_262145.f_10473;
		
		case 154:
			return Global_262145.f_10543;
		
		case 155:
			return Global_262145.f_10533;
		
		case 153:
			return Global_262145.f_10497;
		
		case 170:
			return Global_262145.f_12375;
		
		case 171:
			return Global_262145.f_12434;
		
		case 172:
			return Global_262145.f_12452;
		
		case 173:
			return Global_262145.f_12393;
		
		case 166:
			return Global_262145.f_12408;
		
		case 167:
			return Global_262145.f_12499;
		
		case 169:
			return Global_262145.f_12471;
		
		case 168:
			return Global_262145.f_12464;
		
		default:
	}
	return 0;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10424;
		
		case 152:
			return Global_262145.f_10459;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10447;
		
		case 157:
			return Global_262145.f_10414;
		
		case 159:
			return Global_262145.f_10397;
		
		case 164:
			return Global_262145.f_10437;
		
		case 160:
			return Global_262145.f_10487;
		
		case 162:
			return Global_262145.f_10507;
		
		case 163:
			return Global_262145.f_10472;
		
		case 154:
			return Global_262145.f_10542;
		
		case 155:
			return Global_262145.f_10532;
		
		case 153:
			return Global_262145.f_10496;
		
		case 170:
			return Global_262145.f_12374;
		
		case 171:
			return Global_262145.f_12433;
		
		case 172:
			return Global_262145.f_12451;
		
		case 173:
			return Global_262145.f_12392;
		
		case 166:
			return Global_262145.f_12407;
		
		default:
	}
	return 0;
}

void func_396(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_405())
		{
			if (func_343(0))
			{
				if (network_is_player_active(func_345()))
				{
					if (func_404() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_404();
						*iParam0 -= iVar0;
					}
					func_402(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_399("GB_BCUT_TICK1", func_345(), iVar0, 0, 0, 1, 1);
					}
					func_426(20);
					func_397(func_345(), iVar0, 1);
				}
			}
		}
	}
}

void func_397(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_617(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_398(iParam0));
	}
}

auto func_398(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_399(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_292(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_400(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_254(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

auto func_400(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_401(&cVar0);
}

auto func_401(char[4] cParam0)
{
	return cParam0;
}

void func_402(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_403(1);
	}
	else
	{
		iVar1 = func_403(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_403(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_404()
{
	return Global_262145.f_10328;
}

int func_405()
{
	return func_105(player_id());
}

auto func_406()
{
	return Global_1610316[player_id() /*174*/].f_10.f_30;
}

void func_407()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_19()];
	iVar0++;
	Global_2493048[func_19()] = iVar0;
	func_373(3245, iVar0, -1, 1);
}

void func_408()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_19()];
	iVar1 = Global_2493058[func_19()];
	iVar0++;
	iVar1++;
	Global_2493043[func_19()] = iVar0;
	Global_2493058[func_19()] = iVar1;
	Global_1587523[player_id() /*444*/].f_250.f_85 = iVar1;
	func_373(3243, iVar0, -1, 1);
	func_373(3244, iVar1, -1, 1);
}

void func_409()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_19()];
	iVar0++;
	func_373(3247, iVar0, -1, 1);
}

void func_410(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_412(iParam0);
	func_411(iParam0, uVar0, iParam1);
}

void func_411(int iParam0, auto uParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 444;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_60())
	{
		if (network_is_player_active(iParam0))
		{
			trigger_script_event(1, &Var0, 4, func_398(iParam0));
		}
	}
}

int func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_417();
	iVar0 = func_415(iParam0, iVar0);
	iVar1 = Global_1610316[func_345() /*174*/].f_10.f_152;
	iVar0 += iVar1 * Global_262145.f_12335;
	if (iVar0 < func_414())
	{
		iVar0 = func_414();
	}
	if (iVar0 > func_413())
	{
		iVar0 = func_413();
	}
	return iVar0;
}

auto func_413()
{
	return Global_262145.f_12336;
}

auto func_414()
{
	return Global_262145.f_13498;
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_440(iParam0) * func_416();
	iParam1 -= iVar0;
	return iParam1;
}

auto func_416()
{
	return Global_262145.f_13497;
}

auto func_417()
{
	return Global_262145.f_10320;
}

bool func_418(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		if (iParam0 != player_id())
		{
			if (func_71(iParam0, player_id(), 0))
			{
				if (!func_92(iParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_419()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_19()];
	iVar0++;
	func_373(3246, iVar0, -1, 1);
}

void func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_19()];
	iVar0 += iParam0;
	func_373(3248, iVar0, -1, 1);
	if (func_423(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_422(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_421(7666, iVar2, -1, 1);
	}
}

auto func_421(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = false;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13641;
			break;
		
		case 2:
			return Global_262145.f_13642;
			break;
		
		case 3:
			return Global_262145.f_13643;
			break;
		
		case 4:
			return Global_262145.f_13644;
			break;
		
		case 5:
			return Global_262145.f_13645;
			break;
		
		case 6:
			return Global_262145.f_13646;
			break;
		
		case 7:
			return Global_262145.f_13647;
			break;
		
		case 8:
			return Global_262145.f_13648;
			break;
		
		case 9:
			return Global_262145.f_13649;
			break;
		
		case 10:
			return Global_262145.f_13650;
			break;
		
		case 11:
			return Global_262145.f_13651;
			break;
		
		case 12:
			return Global_262145.f_13652;
			break;
		
		case 13:
			return Global_262145.f_13653;
			break;
		
		case 14:
			return Global_262145.f_13654;
			break;
		
		case 15:
			return Global_262145.f_13655;
			break;
		
		case 16:
			return Global_262145.f_13656;
			break;
		
		case 17:
			return Global_262145.f_13657;
			break;
		
		case 18:
			return Global_262145.f_13658;
			break;
		
		case 19:
			return Global_262145.f_13659;
			break;
		
		case 20:
			return Global_262145.f_13660;
			break;
		
		case 21:
			return Global_262145.f_13661;
			break;
		
		case 22:
			return Global_262145.f_13662;
			break;
		
		case 23:
			return Global_262145.f_13663;
			break;
		
		case 24:
			return Global_262145.f_13664;
			break;
	}
	return 0;
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_425(iParam0, iParam1);
	iVar2 = func_424(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_425(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_427(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)))
		{
			iVar2 = int_to_playerindex(iVar0);
			if (!func_17(iVar2, 0) && !func_71(iVar2, player_id(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

auto func_428(int iParam0)
{
	if (iParam0 >= Global_262145.f_12708)
	{
		return Global_262145.f_12729;
	}
	else if (iParam0 >= Global_262145.f_12707)
	{
		return Global_262145.f_12728;
	}
	else if (iParam0 >= Global_262145.f_12706)
	{
		return Global_262145.f_12727;
	}
	else if (iParam0 >= Global_262145.f_12705)
	{
		return Global_262145.f_12726;
	}
	else if (iParam0 >= Global_262145.f_12704)
	{
		return Global_262145.f_12725;
	}
	else if (iParam0 >= Global_262145.f_12703)
	{
		return Global_262145.f_12724;
	}
	else if (iParam0 >= Global_262145.f_12702)
	{
		return Global_262145.f_12723;
	}
	else if (iParam0 >= Global_262145.f_12701)
	{
		return Global_262145.f_12722;
	}
	else if (iParam0 >= Global_262145.f_12700)
	{
		return Global_262145.f_12721;
	}
	else if (iParam0 >= Global_262145.f_12699)
	{
		return Global_262145.f_12720;
	}
	else if (iParam0 >= Global_262145.f_12698)
	{
		return Global_262145.f_12719;
	}
	else if (iParam0 >= Global_262145.f_12697)
	{
		return Global_262145.f_12718;
	}
	else if (iParam0 >= Global_262145.f_12696)
	{
		return Global_262145.f_12717;
	}
	else if (iParam0 >= Global_262145.f_12695)
	{
		return Global_262145.f_12716;
	}
	else if (iParam0 >= Global_262145.f_12694)
	{
		return Global_262145.f_12715;
	}
	else if (iParam0 >= Global_262145.f_12693)
	{
		return Global_262145.f_12714;
	}
	else if (iParam0 >= Global_262145.f_12692)
	{
		return Global_262145.f_12713;
	}
	else if (iParam0 >= Global_262145.f_12691)
	{
		return Global_262145.f_12712;
	}
	else if (iParam0 >= Global_262145.f_12690)
	{
		return Global_262145.f_12711;
	}
	else if (iParam0 >= Global_262145.f_12689)
	{
		return Global_262145.f_12710;
	}
	return Global_262145.f_12709;
}

int func_429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_436(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_435(iParam0, iVar3))
			{
				iVar0 += func_434(iVar3);
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_430(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= func_430(iParam0) - iVar1)
			{
				iVar0 += func_434(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(true, 6));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	if (func_433(iParam0))
	{
		iVar0 = func_431(func_432(iParam0));
		return func_380(iVar0, -1, 0);
	}
	return 0;
}

int func_431(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (func_433(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_433(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_434(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_12908;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_12906;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_12910;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_12904;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_12902;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_12912;
	}
	return 0;
}

bool func_435(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_433(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1728679[iVar0] == iParam1 && Global_1728686[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_436(int iParam0)
{
	int iVar0;
	
	if (func_433(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_437()
{
	if (func_405())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_438()
{
	if (func_405())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_439()
{
	if (func_405())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70--;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

auto func_440(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10445) * Global_262145.f_10450);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10395) * Global_262145.f_10400);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10422) * Global_262145.f_10426);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10435) * Global_262145.f_10439);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10457) * Global_262145.f_10462);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10619) * Global_262145.f_10620);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10625) * Global_262145.f_10626);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10623) * Global_262145.f_10624);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10617) * Global_262145.f_10618);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10621) * Global_262145.f_10622);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10615) * Global_262145.f_10616);
		
		case 170:
			return false;
		
		case 171:
			return Global_262145.f_12431;
		
		case 172:
			return Global_262145.f_12447;
		
		case 173:
			return Global_262145.f_12390;
		
		case 166:
			return false;
		
		default:
	}
	return false;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10446) * Global_262145.f_10451);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10396) * Global_262145.f_10401);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10423) * Global_262145.f_10427);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10436) * Global_262145.f_10440);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10458) * Global_262145.f_10463);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10495) * Global_262145.f_10498);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10541) * Global_262145.f_10544);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10531) * Global_262145.f_10534);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10486) * Global_262145.f_10489);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10506) * Global_262145.f_10511);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10471) * Global_262145.f_10474);
		
		case 170:
			return Global_262145.f_12373;
		
		case 171:
			return Global_262145.f_12432;
		
		case 172:
			return Global_262145.f_12448;
		
		case 173:
			return Global_262145.f_12391;
		
		case 166:
			return false;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return false;
}

void func_443(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_444(iParam0))
	{
		if (!func_405())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10339;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10338;
	*uParam2 = Global_262145.f_10337;
	if (func_151(player_id(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_406();
	if (iVar0 != func_60())
	{
		if (func_71(player_id(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_444(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

int func_445()
{
	return Local_96.f_115 * Global_262145.f_12406;
}

int func_446()
{
	return Local_96.f_115 * Global_262145.f_12405;
}

void func_447(int iParam0, int iParam1)
{
	Global_1727400.f_6 = _get_posix_time();
	if (iParam0)
	{
		Global_1727400.f_7 = 1;
	}
	else
	{
		Global_1727400.f_7 = 0;
	}
	Global_1727400.f_8 = iParam1;
	if (Global_1727400.f_4 == 0)
	{
		if ((func_106(player_id()) || func_117(player_id())) || func_125(player_id()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

int func_448(int iParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	uVar0 = func_60();
	uVar1 = func_60();
	uVar2 = func_60();
	return func_449(iParam0, sParam1, sParam2, sParam3, uParam4, uVar0, uVar1, uVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_449(auto uParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_307(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = uParam5;
	Var0.f_17 = uParam6;
	Var0.f_18 = uParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	GAMEPLAY::SET_BIT(&(Var0.f_63), 2);
	return func_288(&Var0);
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = func_155(iParam0);
	if (iVar0 != -1)
	{
		return func_153(iVar0);
	}
	return 1;
}

char* func_451(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_323(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_92(iParam0, 28) || func_92(player_id(), 28)) || func_325(iParam0)) && !func_324(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		sVar0 = func_323(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar0))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_452()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_572() && !func_249())
	{
		return;
	}
	if (!func_308())
	{
		return;
	}
	iVar0 = player_id();
	if (func_17(player_id(), 0))
	{
		iVar0 = Global_1587523[player_id() /*444*/].f_355;
	}
	iVar1 = func_116(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_96.f_847)))
	{
		iVar2 = func_10() - func_466(&(Local_96.f_847), 0, 0);
		iVar3 = func_465() - Local_96.f_115;
		func_463(iVar2);
		if (iVar2 > 30000)
		{
			func_453(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_453(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_453(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_453(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_461(0) == 0)
	{
		return;
	}
	func_460();
	func_457(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_389(sParam4))
	{
		sVar0 = sParam4;
	}
	func_454(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0);
}

void func_454(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8, int iParam9, int iParam10, int iParam11, auto uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_456(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_455(7, iVar0);
		Global_1339940.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = uParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = uParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_455(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_456(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

void func_457(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_456(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_455(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = iParam3;
		Global_1339940.f_3557.f_172[iVar0] = iParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = iParam8;
		Global_1339940.f_3557.f_497[iVar0] = iParam9;
		Global_1339940.f_3557.f_508[iVar0] = iParam10;
		Global_1339940.f_3557.f_205[iVar0] = iParam11;
		Global_1339940.f_3557.f_216[iVar0] = iParam12;
		Global_1339940.f_3557.f_227[iVar0] = iParam13;
		Global_1339940.f_3557.f_238[iVar0] = iParam14;
		Global_1339940.f_3557.f_249[iVar0] = iParam15;
		Global_1339940.f_3557.f_519[iVar0] = iParam16;
		Global_1339940.f_3557.f_530[iVar0] = iParam17;
		Global_1339940.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_459())
		{
			Global_1339940.f_941 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			_get_screen_active_resolution(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339940.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339940.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339940.f_941 = 1;
			}
			if (func_458())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_458()
{
	int iVar0;
	auto uVar1;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_get_screen_active_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_459()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

void func_460()
{
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	Global_2444577 = 1;
}

bool func_461(int iParam0)
{
	if (func_462())
	{
		return false;
	}
	if (func_232())
	{
		return false;
	}
	if (!iParam0)
	{
		if (func_617(player_id(), 1, 1) == 0)
		{
			return false;
		}
	}
	return true;
}

int func_462()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 12);
}

void func_463(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 8))
	{
		func_464();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 15))
	{
		if (iParam0 <= 35000)
		{
			if (trigger_music_event("APT_PRE_COUNTDOWN_STOP"))
			{
				GAMEPLAY::SET_BIT(&iLocal_1418, 15);
				GAMEPLAY::SET_BIT(&iLocal_1418, 9);
				set_audio_flag("AllowScoreAndRadio", 1);
				set_user_radio_control_enabled(0);
				set_audio_flag("WantedMusicDisabled", 1);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 11))
			{
				if (prepare_music_event("APT_COUNTDOWN_30S_KILL"))
				{
					GAMEPLAY::SET_BIT(&iLocal_1418, 11);
				}
			}
			else
			{
				GAMEPLAY::IS_BIT_SET(iLocal_1418, 11);
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 14))
				{
					if (trigger_music_event("APT_COUNTDOWN_30S"))
					{
						GAMEPLAY::SET_BIT(&iLocal_1418, 14);
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 12))
					{
						set_user_radio_control_enabled(1);
						set_audio_flag("AllowScoreAndRadio", 0);
						GAMEPLAY::SET_BIT(&iLocal_1418, 12);
					}
					if (iParam0 <= 500)
					{
						if (trigger_music_event("APT_FADE_IN_RADIO"))
						{
							cancel_music_event("APT_COUNTDOWN_30S_KILL");
							GAMEPLAY::CLEAR_BIT(&iLocal_1418, 9);
						}
					}
				}
			}
		}
	}
}

void func_464()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 8))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 9))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 11))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 12))
					{
						set_user_radio_control_enabled(1);
						set_audio_flag("AllowScoreAndRadio", 0);
						set_audio_flag("WantedMusicDisabled", 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 16))
				{
					if (trigger_music_event("APT_COUNTDOWN_30S_KILL"))
					{
						GAMEPLAY::SET_BIT(&iLocal_1418, 16);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 16))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1418, 13))
					{
						if (trigger_music_event("APT_FADE_IN_RADIO"))
						{
							GAMEPLAY::SET_BIT(&iLocal_1418, 13);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_1418, 13))
					{
						GAMEPLAY::SET_BIT(&iLocal_1418, 10);
					}
				}
			}
		}
	}
}

int func_465()
{
	return 4;
}

int func_466(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return get_time_difference(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_467()
{
	auto uVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar17 = player_id();
	iVar18 = participant_id_to_int();
	if (func_17(player_id(), 0))
	{
		iVar18 = func_250();
		iVar17 = Global_1587523[player_id() /*444*/].f_355;
	}
	iVar19 = func_116(iVar17);
	if (!func_17(player_id(), 0))
	{
		if (!func_308())
		{
			if (func_484("HUNT_OBJ"))
			{
				func_508();
			}
			if (func_484("HUNT_OBJ1L"))
			{
				func_508();
			}
			if (func_484("HUNT_TOBJ"))
			{
				func_508();
			}
			if (func_484("HUNT_DOBJ"))
			{
				func_508();
			}
			if (func_484("HUNT_DOBJ1L"))
			{
				func_508();
			}
			return;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_968[iVar18 /*14*/].f_1, 6))
	{
		func_508();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_484("HUNT_OBJ"))
		{
			func_508();
		}
		if (func_484("HUNT_OBJ1L"))
		{
			func_508();
		}
		if (func_484("HUNT_TOBJ"))
		{
			func_508();
		}
		if (func_484("HUNT_DOBJ"))
		{
			func_508();
		}
		if (func_484("HUNT_DOBJ1L"))
		{
			func_508();
		}
		return;
	}
	iVar20 = func_483() == true;
	if (iVar18 == Local_96.f_118)
	{
		if (!iVar20)
		{
			if (!func_484("HUNT_OBJ"))
			{
				func_480("HUNT_OBJ", 0);
			}
		}
		else if (!func_484("HUNT_OBJ1L"))
		{
			func_480("HUNT_OBJ1L", 0);
		}
	}
	else if (func_573() == Local_96.f_118)
	{
		if (!iVar20)
		{
			if (!func_484("HUNT_OBJ"))
			{
				func_480("HUNT_OBJ", 0);
			}
		}
		else if (!func_484("HUNT_OBJ1L"))
		{
			func_480("HUNT_OBJ1L", 0);
		}
	}
	else if (func_249())
	{
		if (Local_96.f_119 > -1)
		{
			if (!iVar20)
			{
				if (!func_484("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_451(int_to_playerindex(Local_96.f_119)), 64);
					uVar0 = func_450(int_to_playerindex(Local_96.f_119));
					func_468("HUNT_DOBJ", &Var1, uVar0, 0);
				}
			}
			else if (!func_484("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_451(int_to_playerindex(Local_96.f_119)), 64);
				uVar0 = func_450(int_to_playerindex(Local_96.f_119));
				func_468("HUNT_DOBJ1L", &Var1, uVar0, 0);
			}
		}
	}
}

void func_468(char* sParam0, char* sParam1, auto uParam2, int iParam3)
{
	if (func_469(sParam0, sParam1, iParam3, uParam2))
	{
		Global_1312577 = 15;
		Global_1312577.f_54 = uParam2;
	}
}

bool func_469(char* sParam0, char* sParam1, int iParam2, auto uParam3)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 23)
	{
		return false;
	}
	if (func_479(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_473();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = uParam3;
	func_472();
	func_471(iParam2);
	func_470();
	return true;
}

void func_470()
{
	GAMEPLAY::SET_BIT(&(Global_1312577.f_57), true);
}

void func_471(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312577.f_57), false);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312577.f_57), false);
}

void func_472()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

void func_473()
{
	func_475();
	func_474(0);
}

void func_474(int iParam0)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (iVar0)
	{
		Global_1312577.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (iParam0)
	{
		return;
	}
}

void func_475()
{
	if (!func_478())
	{
	}
	if (func_477())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_476();
		_0xFCC75460ABA29378();
	}
}

void func_476()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			add_text_component_integer(Global_1312577.f_50);
			return;
		
		case 2:
			add_text_component_integer(Global_1312577.f_50);
			add_text_component_integer(Global_1312577.f_51);
			return;
		
		case 3:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 4:
			_add_text_component_item_string(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 5:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 6:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 7:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 8:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 9:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 10:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		case 12:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 11:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 13:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 14:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_55);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 16:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			return;
		
		case 15:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 18:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 17:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

bool func_477()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_478()
{
	if (!func_477())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_476();
	return _0x8A9BA1AB3E237613();
}

int func_479(char* sParam0, char* sParam1)
{
	if (!func_477())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_10)))
	{
		return false;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_14));
}

void func_480(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_481(sParam0))
	{
		return;
	}
	func_473();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_472();
	func_471(iParam1);
	func_470();
}

int func_481(char* sParam0)
{
	if (!func_477())
	{
		return false;
	}
	if (Global_1312577 == 11)
	{
		return func_482(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_10));
}

int func_482(char* sParam0)
{
	if (!func_477())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_14));
}

int func_483()
{
	return 4 - Local_96.f_115;
}

int func_484(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!func_477())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (_0x43E4111189E54F0E(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	return func_481(sParam0);
}

void func_485()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_572() && !func_249())
	{
		return;
	}
	if (!func_308())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(player_id(), 0))
	{
		iVar1 = player_id();
		iVar2 = participant_id_to_int();
	}
	else
	{
		iVar2 = func_250();
		iVar1 = Global_1587523[player_id() /*444*/].f_355;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, true))
	{
		iVar0 = func_116(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_96.f_118 || func_573() == Local_96.f_118)
			{
				if (func_491(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_287(84, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == participant_id_to_int())
					{
						func_490(1);
						func_486();
					}
				}
			}
			else
			{
				if (iVar2 == participant_id_to_int())
				{
					func_486();
				}
				func_287(84, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		GAMEPLAY::SET_BIT(&iLocal_1417, true);
	}
}

void func_486()
{
	if (func_345() != func_60())
	{
		Global_1727400 = func_489(func_345());
		Global_1727400.f_1 = func_488(func_345());
	}
	Global_1727400.f_5 = _get_posix_time();
	Global_1727400.f_13 = func_487();
	Global_1727400.f_15 = 0;
	if (func_343(1))
	{
		if (func_406() == func_345())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_487()
{
	int iVar0;
	
	iVar0 = func_345();
	if (iVar0 != func_60())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

auto func_488(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[1];
}

auto func_489(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[0];
}

void func_490(int iParam0)
{
	if (iParam0)
	{
		if (!func_92(player_id(), 9))
		{
			if (func_116(player_id()) != 0)
			{
				func_93(9);
			}
		}
	}
	else if (func_92(player_id(), 9))
	{
		func_91(9);
	}
}

bool func_491(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_492(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_492(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_502();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_501() == 0)
	{
		func_499();
		return false;
	}
	func_498(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_497(0);
		func_497(2);
		func_497(1);
	}
	else
	{
		func_502();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_497(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_497(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_497(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_497(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_502();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_319())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_496(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_493(1);
			func_496(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_493(int iParam0)
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
		if (func_495(14))
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
								func_144(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_144(&(Global_2290[iVar1 /*15*/]));
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
								func_144(&(Global_2290[iVar1 /*15*/]));
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
								func_144(&(Global_2290[iVar1 /*15*/]));
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
								func_144(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_144(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_494(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_494(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_144(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_144(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_144(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_144(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_144(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

int func_495(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_496(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_497(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_498(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = TIME::GET_CLOCK_HOURS();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_500(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_500(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_500(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

void func_502()
{
	if (func_495(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_503();
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

auto func_503()
{
	func_504();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_504()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_507(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_506(PLAYER::PLAYER_PED_ID());
			if (func_505(iVar0) && (!func_495(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_505(Global_101154.f_1826.f_539.f_3549))
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

int func_505(int iParam0)
{
	return iParam0 < 3;
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_507(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_507(int iParam0)
{
	if (func_505(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_508()
{
	if (!func_477())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_473();
}

void func_509()
{
	if (func_17(player_id(), 0))
	{
		return;
	}
	switch (Local_968[participant_id_to_int() /*14*/].f_9)
	{
		case 0:
			func_511();
			func_261();
			if (Local_96.f_117 == 2)
			{
				Local_968[participant_id_to_int() /*14*/].f_9 = 2;
			}
			else if (Local_96.f_117 == 3)
			{
				Local_968[participant_id_to_int() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_261();
			if (func_510())
			{
				func_464();
			}
			if (Local_96.f_117 == 3)
			{
				Local_968[participant_id_to_int() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_586();
			break;
	}
}

int func_510()
{
	return ((GAMEPLAY::IS_BIT_SET(Local_96.f_1, true) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 5));
}

void func_511()
{
	func_531();
	func_530();
	func_485();
	func_467();
	func_520();
	func_519();
	func_514();
	func_513();
	func_452();
	func_512();
}

void func_512()
{
}

void func_513()
{
	if (func_510())
	{
		return;
	}
	if (!func_572())
	{
		return;
	}
	if (!Global_262145.f_12398)
	{
		return;
	}
	if (Local_96.f_115 == 0)
	{
		return;
	}
}

void func_514()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	
	if (func_572())
	{
		return;
	}
	if (func_510())
	{
		return;
	}
	fVar4 = func_126(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1424 != iVar0)
			{
				vVar1 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 0)};
				func_82(10, 0, 0);
				func_515(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1424 = iVar0;
				GAMEPLAY::SET_BIT(&iLocal_1417, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_283();
	}
}

void func_515(Vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (is_thread_active(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == get_id_of_this_thread())
		{
			return;
		}
	}
	else
	{
		Global_2410702.f_6 = get_id_of_this_thread();
	}
	Var0.f_6 = Global_2410702.f_6;
	Var0 = {vParam0};
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = {0f, 0f, 0f};
	Var0.f_14 = {0f, 0f, 0f};
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_516(player_id()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2410702 = {Var0};
}

bool func_516(int iParam0)
{
	if ((func_517(iParam0, 1) || func_114(iParam0)) || func_89(iParam0, 0))
	{
		return true;
	}
	return false;
}

int func_517(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_518(iParam0) != 0;
	}
	return func_229(iParam0, iParam1);
}

int func_518(int iParam0)
{
	if (func_617(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

void func_519()
{
	int iVar0;
	
	if (iLocal_1421 != Local_96.f_115)
	{
		if (func_572())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_player_control_on(player_id()))
				{
					if (!network_is_in_mp_cutscene())
					{
						iVar0 = get_player_wanted_level(player_id());
						switch (Local_96.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_12395)
								{
									set_player_wanted_level(player_id(), Global_262145.f_12395, 0);
									set_player_wanted_level_now(player_id(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_12396)
								{
									set_player_wanted_level(player_id(), Global_262145.f_12396, 0);
									set_player_wanted_level_now(player_id(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_12397)
								{
									set_max_wanted_level(Global_262145.f_12397);
									set_player_wanted_level(player_id(), Global_262145.f_12397, 0);
									set_player_wanted_level_now(player_id(), 0);
								}
								break;
						}
						iLocal_1421 = Local_96.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1421 = Local_96.f_115;
		}
	}
}

void func_520()
{
	int iVar0;
	
	if (!func_308())
	{
		if (func_529("HUNT_HELPA", "HUNT_TARBLP"))
		{
			clear_help(1);
		}
		return;
	}
	iVar0 = func_116(player_id());
	if (iVar0 < 2)
	{
		if (func_529("HUNT_HELPA", "HUNT_TARBLP"))
		{
			clear_help(1);
		}
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 2))
	{
		if (!func_528(84))
		{
			if (func_522(0, 1, 1, 1))
			{
				if (participant_id_to_int() == Local_96.f_118)
				{
					func_521("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_267(1);
					GAMEPLAY::SET_BIT(&iLocal_1417, 2);
				}
				else if (func_573() == Local_96.f_118)
				{
					func_521("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_267(1);
					GAMEPLAY::SET_BIT(&iLocal_1417, 2);
				}
				else if (func_249())
				{
					func_521("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_267(1);
					GAMEPLAY::SET_BIT(&iLocal_1417, 2);
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 2))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 3))
		{
			if (func_522(0, 1, 1, 1))
			{
				if (!func_529("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (participant_id_to_int() == Local_96.f_118 || func_573() == Local_96.f_118)
					{
						func_268("HUNT_HELPB", -1);
						func_267(1);
						GAMEPLAY::SET_BIT(&iLocal_1417, 3);
					}
				}
			}
		}
	}
}

void func_521(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam3);
}

bool func_522(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 && is_help_message_being_displayed())
	{
		return false;
	}
	if (func_527())
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_239())
	{
		return false;
	}
	if (func_320())
	{
		return false;
	}
	if (iParam1)
	{
		if (func_229(player_id(), 1))
		{
			return false;
		}
	}
	if (iParam0)
	{
		if (func_526(player_id()))
		{
			return false;
		}
	}
	if (func_525())
	{
		return false;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (iParam3)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (Global_1573684)
	{
		return false;
	}
	if (func_524())
	{
		return false;
	}
	if (func_523())
	{
		return false;
	}
	if (func_232())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (Global_2467968)
	{
		return false;
	}
	return true;
}

auto func_523()
{
	return Global_2434762.f_567;
}

auto func_524()
{
	return Global_2434762.f_717;
}

auto func_525()
{
	return Global_2428492.f_2462.f_585;
}

bool func_526(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_206 == 0)
	{
		return false;
	}
	return true;
}

bool func_527()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_528(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

int func_529(char* sParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	_add_text_component_item_string(sParam1);
	return _0x10BDDBFC529428DD(0);
}

void func_530()
{
	auto uVar0;
	float fVar1;
	
	fVar1 = func_126(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_109(player_id()))
		{
			func_108();
		}
	}
}

void func_531()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_1, true))
	{
		if (!func_572())
		{
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 6))
			{
				func_95(1);
				GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_1), true);
			}
		}
	}
}

void func_532()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	
	iVar4 = func_60();
	iVar0 = false;
	while (iVar0 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_2, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_110, iVar0))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_573() == Local_96.f_118)
							{
								if (func_549(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1)))
								{
									GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_3, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_112, iVar0))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
				{
					if (func_548(iVar0))
					{
						GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_4, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_111, iVar0))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		if (func_308())
		{
			if (!does_blip_exist(iLocal_1432[iVar0]))
			{
				if (!func_510())
				{
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_1432[iVar0] = add_blip_for_entity(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1));
							if (func_573() == Local_96.f_118)
							{
								set_blip_priority(iLocal_1432[iVar0], 12);
								set_blip_sprite(iLocal_1432[iVar0], 432);
								func_547(&(iLocal_1432[iVar0]), 6);
							}
							else
							{
								set_blip_sprite(iLocal_1432[iVar0], 480);
								func_547(&(iLocal_1432[iVar0]), 9);
							}
							set_blip_flashes(iLocal_1432[iVar0], 1);
							set_blip_flash_timer(iLocal_1432[iVar0], 7000);
							set_blip_scale(iLocal_1432[iVar0], 1.1f);
							set_blip_name_from_text_file(iLocal_1432[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					remove_blip(&(iLocal_1432[iVar0]));
				}
				else if (func_510())
				{
					remove_blip(&(iLocal_1432[iVar0]));
				}
			}
		}
		else if (does_blip_exist(iLocal_1432[iVar0]))
		{
			remove_blip(&(iLocal_1432[iVar0]));
		}
		func_546(iVar0);
		func_545(iVar0);
		func_543(iVar0);
		switch (Local_96.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (network_is_host_of_this_script())
				{
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (is_ped_sitting_in_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2)))
								{
									if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										task_vehicle_drive_wander(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (network_is_host_of_this_script())
				{
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (is_ped_sitting_in_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2)))
									{
										if ((AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || GAMEPLAY::IS_BIT_SET(Local_96.f_108, iVar0))
										{
											task_vehicle_drive_wander(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), net_to_veh(Local_96.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (GAMEPLAY::IS_BIT_SET(Local_96.f_108, iVar0))
											{
												GAMEPLAY::CLEAR_BIT(&(Local_96.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									task_leave_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
									{
										task_wander_standard(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_539(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											AI::TASK_SMART_FLEE_PED(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							set_ped_reset_flag(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), false);
									task_combat_hated_targets_around_ped(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							set_ped_reset_flag(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									set_ped_to_load_cover(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_538(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										task_seek_cover_from_ped(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), get_player_ped(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_541(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									task_start_scenario_in_place(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_96.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_541(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										task_start_scenario_in_place(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_541(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										task_combat_hated_targets_around_ped(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_541(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										task_combat_hated_targets_around_ped(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (is_ped_sitting_in_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_541(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (network_has_control_of_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											set_blocking_of_non_temporary_events(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											task_leave_any_vehicle(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_572())
	{
		func_533();
	}
}

void func_533()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_534(uLocal_1678[iVar0], &(Local_1437[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
		iVar0++;
	}
}

void func_534(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (func_537())
		{
			Global_2428492 = player_id();
		}
		if (iParam3)
		{
			func_536(net_to_ped(iParam0), iParam1, 1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
		else
		{
			func_536(net_to_ped(iParam0), iParam1, -1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
	}
	else if (does_blip_exist(*iParam1))
	{
		func_535(iParam1);
	}
}

void func_535(int iParam0)
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
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_7))
	{
		if (!PED::IS_PED_INJURED(*iParam0.f_7))
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

bool func_536(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
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
		if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				GAMEPLAY::SET_BIT(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					GAMEPLAY::SET_BIT(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			GAMEPLAY::CLEAR_BIT(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

auto func_537()
{
	return Global_1315888;
}

int func_538(int iParam0, auto uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+08f;
	vVar3 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1)};
	iVar6 = false;
	while (iVar6 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar6)))
		{
			iVar7 = network_get_player_index(int_to_participantindex(iVar6));
			if (!func_17(iVar7, 0))
			{
				iVar8 = get_player_ped(iVar7);
				if (iVar6 == Local_96.f_118 || Local_968[iVar6 /*14*/].f_10 == Local_96.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar8))
					{
						fVar2 = vdist2(ENTITY::GET_ENTITY_COORDS(iVar8, 1), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar7;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != func_60())
	{
		*uParam1 = fVar1;
	}
	return iVar0;
}

int func_539(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_540(iParam0);
	if (iVar1 != func_60())
	{
		iVar0 = get_player_ped(iVar1);
	}
	return iVar0;
}

int func_540(auto uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[uParam0 /*26*/].f_1), 0)};
	iVar3 = false;
	while (iVar3 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar3)))
		{
			iVar7 = network_get_player_index(int_to_participantindex(iVar3));
			iVar8 = get_player_ped(iVar7);
			if (func_151(iVar7, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_968[iVar3 /*14*/].f_1, true))
				{
					if (func_61(iVar7) == network_get_player_index(int_to_participantindex(Local_96.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar8))
						{
							fVar2 = vdist2(ENTITY::GET_ENTITY_COORDS(iVar8, 1), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar7;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_541(int iParam0)
{
	if (_0xA1607996431332DF(iParam0))
	{
		return true;
	}
	if (func_542(iParam0))
	{
		return true;
	}
	return false;
}

bool func_542(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return false;
	}
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(iParam0))
	{
		return false;
	}
	if (func_42(iParam0))
	{
		return true;
	}
	return false;
}

void func_543(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	Vector3 vVar4;
	int iVar7;
	
	if (!func_308())
	{
		return;
	}
	if (func_116(player_id()) < 1)
	{
		return;
	}
	if (!func_572() && !func_249())
	{
		return;
	}
	if (func_510())
	{
		return;
	}
	if (func_572())
	{
		get_hud_colour(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		get_hud_colour(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_96.f_2[iParam0 /*26*/].f_1))
		{
			if (!is_ped_sitting_in_any_vehicle(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 1)};
				draw_marker(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar7 = get_vehicle_ped_is_in(net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1), 0);
				func_544(iVar7, iVar0, iVar1, iVar2);
			}
		}
	}
}

void func_544(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar3);
	fVar7 = vVar3.z - vVar0.z / 2f;
	fVar8 = vVar3.z - fVar7;
	if (fVar6 <= fVar8 + 0.1f)
	{
		fVar6 = fVar8 + 0.4f;
	}
	draw_marker(2, ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Vector(vVar3.z - vVar0.z / 2f + fVar6, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_545(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_96.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_573() != Local_96.f_118)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1);
	vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	vVar4 = {ENTITY::GET_ENTITY_COORDS(iVar0, 0)};
	if (vdist2(vVar1, vVar4) < 5625f)
	{
		GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				iVar8 = true;
			}
		}
		iVar7++;
	}
	if (!iVar8)
	{
		GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_13), iParam0);
	}
}

void func_546(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_96.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_573() != Local_96.f_118)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = net_to_ped(Local_96.f_2[iParam0 /*26*/].f_1);
	vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	vVar4 = {ENTITY::GET_ENTITY_COORDS(iVar0, 0)};
	if (vdist2(vVar1, vVar4) < 62500f)
	{
		GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar7 = net_to_ped(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_573() == Local_96.f_118)
				{
					if (vdist2(vVar1, vVar4) < 40000f)
					{
						GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
						return;
					}
					if (func_549(iVar7))
					{
						GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_547(auto uParam0, int iParam1)
{
	if (does_blip_exist(*uParam0))
	{
		set_blip_colour(*uParam0, func_280(iParam1));
	}
}

bool func_548(int iParam0)
{
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_96.f_2[iParam0 /*26*/].f_2))
		{
			if (is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 0, 7000) || is_vehicle_stuck_timer_up(net_to_veh(Local_96.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_549(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_targetting_entity(player_id(), iParam0))
	{
		return true;
	}
	if (is_player_free_aiming_at_entity(player_id(), iParam0))
	{
		return true;
	}
	if (func_550())
	{
		if (get_entity_player_is_free_aiming_at(player_id(), &iVar0))
		{
			if (is_entity_a_ped(iVar0))
			{
				iVar1 = get_ped_index_from_entity_index(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (is_ped_in_any_vehicle(iVar1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

auto func_550()
{
	return Global_1573831;
}

void func_551()
{
	int iVar0;
	int iVar1;
	
	if (Local_96 != 4)
	{
		iVar1 = int_to_playerindex(iLocal_1420);
		if (network_is_player_active(iVar1))
		{
			if (network_is_player_a_participant(iVar1))
			{
				if (!func_510())
				{
					if (!func_572())
					{
						if (func_151(iVar1, 1))
						{
							iVar0 = network_get_player_index(int_to_participantindex(Local_96.f_118));
							if (func_71(iVar1, iVar0, 1))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_8, iLocal_1420))
								{
									func_281(iVar1, 432, 1);
									func_276(iVar1, func_280(iLocal_1709), 1);
									GAMEPLAY::SET_BIT(&(Local_968[participant_id_to_int() /*14*/].f_8), iLocal_1420);
								}
							}
						}
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_968[participant_id_to_int() /*14*/].f_8, iLocal_1420))
			{
				func_281(iVar1, 432, 0);
				func_276(iVar1, func_280(iLocal_1709), 0);
				GAMEPLAY::CLEAR_BIT(&(Local_968[participant_id_to_int() /*14*/].f_8), iLocal_1420);
			}
		}
	}
	iLocal_1420++;
	if (iLocal_1420 >= 32)
	{
		iLocal_1420 = false;
	}
}

bool func_552()
{
	if (func_553(1))
	{
		return true;
	}
	if (Global_2460486.f_4660.f_14)
	{
		Global_2460486.f_4660.f_14 = 0;
		return true;
	}
	return false;
}

bool func_553(int iParam0)
{
	int iVar0;
	
	if (!func_343(1))
	{
		iVar0 = false;
		if (Global_1610316[player_id() /*174*/].f_10.f_51 != func_60())
		{
			if (func_617(Global_1610316[player_id() /*174*/].f_10.f_51, 0, 1) && Global_1610316[player_id() /*174*/].f_10.f_19 == 4)
			{
				iVar0 = true;
			}
		}
		else if (func_554(func_88(player_id())) == 0)
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (iParam0)
			{
				func_426(31);
				if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_292(Global_1610316[player_id() /*174*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609014 = 1;
				}
				Global_1608998 = {Global_1610316[player_id() /*174*/].f_10.f_74};
			}
			return true;
		}
	}
	return false;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

void func_555()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_96.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1678[iVar0] = Local_96.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_556()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = (participant_id_to_int() == Local_96.f_118 || func_573() == Local_96.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iVar2)
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
			{
				set_ped_can_be_targetted_by_player(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_1), player_id(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					set_ped_can_be_targetted_by_player(net_to_ped(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), player_id(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_557()
{
	if (Local_96.f_118 > -1)
	{
		iLocal_1709 = func_450(network_get_player_index(int_to_participantindex(Local_96.f_118)));
	}
}

void func_558(float fParam0)
{
	Vector3 fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == func_278())
	{
		return;
	}
	fVar0 = Global_2460486.f_4655 - fParam0;
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && absf(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = get_id_of_this_thread();
}

void func_559(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != iParam0)
	{
		func_571(-1);
		Global_1610316[player_id() /*174*/].f_10.f_28 = iParam0;
		if (func_570() != -1)
		{
			func_569(-1);
		}
		if (func_568() != -1)
		{
			func_567(-1);
		}
		func_565(iParam2);
		func_563(iParam0);
		if (!func_98(iParam0))
		{
			fVar0 = func_97(iParam0);
			if (fVar0 != 1f)
			{
				func_558(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
			}
		}
		if (!func_101(iParam0))
		{
			if (func_99(iParam0, iParam2))
			{
				set_max_wanted_level(false);
				set_player_wanted_level(player_id(), false, 0);
				set_player_wanted_level_now(player_id(), 0);
				GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
			}
			else if (get_max_wanted_level() < 5)
			{
				set_wanted_level_multiplier(1f);
				set_max_wanted_level(5);
			}
		}
		if (func_124())
		{
			func_93(27);
		}
		if (iParam1)
		{
			if (!func_118())
			{
				func_95(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, true) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, 4)) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, false))
			{
				func_426(6);
			}
			func_562();
		}
		if (iParam0 == 164)
		{
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
		}
		if (func_114(player_id()) && func_106(player_id()))
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
		}
		func_560();
	}
}

void func_560()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_561();
	iVar2 = func_61(player_id());
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			if (func_71(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(player_id(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, player_id(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_561()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_345();
	if (iVar0 != func_60())
	{
		if (func_617(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_562()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, true))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4414), true);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4414), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4414), 6);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4414), false);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4414), 2);
	Global_1587523[player_id() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		set_max_wanted_level(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_563(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_380(3351, -1, 0);
	iVar1 = func_564(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_372(3351, iVar0, -1, 1);
	}
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_565(int iParam0)
{
	func_566(player_id(), iParam0);
}

void func_566(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_567(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

auto func_568()
{
	return Global_2460486.f_4660.f_138;
}

void func_569(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

auto func_570()
{
	return Global_2460486.f_4660.f_137;
}

void func_571(int iParam0)
{
	Global_1610316[player_id() /*174*/].f_10.f_27 = iParam0;
}

bool func_572()
{
	int iVar0;
	
	iVar0 = func_573();
	if (iVar0 > -1)
	{
		if (Local_96.f_118 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_573()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(player_id(), 0))
	{
		iVar0 = participant_id_to_int();
		iVar1 = player_id();
	}
	else
	{
		iVar0 = func_250();
		iVar1 = Global_1587523[player_id() /*444*/].f_355;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_968[iVar0 /*14*/].f_10 != -1)
	{
		return Local_968[iVar0 /*14*/].f_10;
	}
	if (func_105(iVar1))
	{
		Local_968[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_96.f_118)
		{
			func_490(1);
		}
	}
	else if (func_151(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (network_is_player_a_participant(iVar2))
			{
				Local_968[iVar0 /*14*/].f_10 = network_get_participant_index(iVar2);
			}
		}
	}
	return Local_968[iVar0 /*14*/].f_10;
}

bool func_574()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_2[iVar0 /*26*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_575()
{
	return Local_96;
}

auto func_576(int iParam0)
{
	return Local_968[iParam0 /*14*/];
}

bool func_577()
{
	int iVar0;
	
	func_582(&iVar0);
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
	if (func_581())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_580())
	{
		return true;
	}
	if (func_579(157))
	{
		if (!func_578())
		{
			return true;
		}
	}
	if (func_579(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_278() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_278()) == 0)
		{
			return true;
		}
	}
	return false;
}

auto func_578()
{
	return Global_2434762.f_574;
}

bool func_579(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_580()
{
	return Global_2443085;
}

auto func_581()
{
	return Global_2434762.f_569;
}

void func_582(auto uParam0)
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
					func_583(iVar0);
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

void func_583(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_617(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_584(iVar4, &iVar5))
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

bool func_584(int iParam0, auto uParam1)
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

void func_585()
{
	wait(0);
}

void func_586()
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(player_id(), 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1417, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_572() || func_249())
				{
					func_447(0, 4);
					GAMEPLAY::SET_BIT(&iLocal_1417, 6);
				}
			}
		}
		uVar0 = Local_96.f_115;
		uVar1 = Local_96.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_968[participant_id_to_int() /*14*/].f_11;
		}
		func_602(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (get_ped_relationship_group_hash(PLAYER::PLAYER_PED_ID()) == iLocal_1422)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1423);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 18))
	{
		func_286();
		GAMEPLAY::CLEAR_BIT(&iLocal_1417, 18);
	}
	func_601();
	if (Local_96.f_119 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 5))
		{
			if (network_is_player_active(int_to_playerindex(Local_96.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (network_is_host_of_this_script())
		{
			iVar3 = false;
			while (iVar3 < 5)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_96.f_871, iVar3))
				{
					remove_scenario_blocking_area(Local_96.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1417, 17))
	{
		set_max_wanted_level(iLocal_1711);
		GAMEPLAY::CLEAR_BIT(&iLocal_1417, 17);
	}
	func_283();
	GAMEPLAY::SET_BIT(&iLocal_1418, 8);
	func_464();
	_0x78857FC65CADB909(1);
	func_490(0);
	func_588(1);
	set_max_wanted_level(5);
	func_275();
	func_587();
}

void func_587()
{
	terminate_this_thread();
}

void func_588(int iParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 167 || Global_1610316[player_id() /*174*/].f_10.f_28 == 168)
	{
		func_599();
		GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 164)
	{
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[player_id() /*174*/].f_10.f_28 = -1;
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 14) && !func_114(player_id()))
		{
			func_95(0);
		}
	}
	else if (func_597(player_id()) != -1)
	{
		func_571(-1);
	}
	func_565(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_595(iVar0);
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false))
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), false);
	}
	if (func_183(func_270()))
	{
		func_594(-1);
	}
	else if (func_269(func_270()))
	{
	}
	else
	{
		func_590(-1, 1);
	}
	func_91(19);
	func_91(20);
	func_91(21);
	func_91(22);
	func_91(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_589();
	if (func_106(player_id()))
	{
		func_490(0);
	}
	func_91(29);
	Global_1610316[player_id() /*174*/].f_10.f_51 = func_60();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (iParam0)
	{
		func_77();
	}
	if (!func_114(player_id()))
	{
		func_90();
		GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), true);
	}
}

void func_589()
{
	if (func_109(player_id()))
	{
		func_91(25);
	}
}

void func_590(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_270();
	}
	if (iParam0 > 0)
	{
		if (func_345() != func_60())
		{
			if (func_593(player_id()) == player_id())
			{
				Global_2459488.f_35[func_592(iParam0)] = 1;
			}
		}
		uVar0 = func_592(159);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(157);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(148);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(164);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(142);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(152);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(166);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(170);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(173);
		if (func_591(uVar0, Global_262145.f_10545, iParam1))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_591(auto uParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if ((!func_92(player_id(), 19) && !func_92(player_id(), 20)) && !func_92(player_id(), 9))
		{
			return false;
		}
	}
	if (Global_2459488.f_35[uParam0] == 1 && func_8(&(Global_2459488[uParam0 /*2*/])))
	{
		if (func_466(&(Global_2459488[uParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[uParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

auto func_593(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_594(int iParam0)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_270();
	}
	if (iParam0 > 0)
	{
		if (func_345() != func_60())
		{
			Global_2459488.f_35[func_592(iParam0)] = 1;
		}
		uVar0 = func_592(155);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(163);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(160);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(153);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(162);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(154);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(171);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_592(172);
		if (func_591(uVar0, Global_262145.f_10546, 0))
		{
			func_137(&(Global_2459488[uVar0 /*2*/]));
			func_7(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

void func_595(int iParam0)
{
	if (!func_28(Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/], func_596(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/] = {func_596()};
	}
	if (!func_28(Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/], func_596(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/] = {func_596()};
	}
}

Vector3 func_596()
{
	Vector3 vVar0;
	
	return vVar0;
}

int func_597(int iParam0)
{
	if (func_598(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

bool func_598(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_28 != -1))
	{
		return true;
	}
	return false;
}

void func_599()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1643), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1643), 29);
	func_600(24);
}

void func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_601()
{
	remove_relationship_group(iLocal_1422);
}

void func_602(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	sVar0 = get_this_script_name();
	Var1 = Global_1727400;
	Var1.f_1 = Global_1727400.f_1;
	Var1.f_2 = Global_1727400.f_2;
	Var1.f_3 = Global_1727400.f_3;
	Var1.f_4 = Global_1727400.f_4;
	Var1.f_5 = Global_1727400.f_5;
	Var1.f_6 = Global_1727400.f_6;
	Var1.f_7 = Global_1727400.f_7;
	Var1.f_8 = Global_1727400.f_8;
	Var1.f_9 = Global_1727400.f_9;
	Var1.f_10 = Global_1727400.f_10;
	Var1.f_11 = Global_1727400.f_11;
	Var1.f_12 = Global_1727400.f_12;
	Var1.f_13 = Global_1727400.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = {Var1};
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = {Var1};
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = {Var1};
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = uParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = {Var1};
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var82 = {Var1};
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = uParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = {Var1};
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = {Var1};
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = {Var1};
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = {Var1};
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_603();
}

void func_603()
{
	struct<18> Var0;
	
	Global_1727400 = {Var0};
}

void func_604(struct<20> Param0)
{
	func_615(func_616(Param0), Param0);
	reserve_network_mission_peds(16);
	reserve_network_mission_vehicles(8);
	func_614(0, -1, 0);
	network_register_host_broadcast_variables(&Local_96, 872);
	network_register_player_broadcast_variables(&Local_968, 449);
	if (!func_613())
	{
		func_586();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
		}
		func_610();
		func_605(0, 0);
		Local_968[participant_id_to_int() /*14*/] = 0;
	}
	else
	{
		func_586();
	}
}

void func_605(int iParam0, int iParam1)
{
	func_609();
	func_608();
	if ((iParam0 != 0 && network_is_player_active(iParam1)) && func_607(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1727386, false);
				break;
			}
	}
	if (!func_405() && !func_151(player_id(), 1))
	{
		if (func_121())
		{
			func_94(3);
		}
		func_94(4);
	}
	if (func_343(0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_51 = func_345();
	}
	func_606();
}

void func_606()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_60();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_607(int iParam0, int iParam1)
{
	return func_71(player_id(), iParam0, iParam1);
}

void func_608()
{
	func_600(33);
	func_600(34);
	func_600(35);
	func_600(36);
	func_600(37);
	func_600(38);
	func_600(39);
	func_600(40);
	func_600(43);
	func_600(41);
	func_600(54);
	func_600(42);
	func_600(47);
}

void func_609()
{
	struct<14> Var0;
	
	Global_1727400 = {Var0};
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

void func_610()
{
	int iVar0;
	int iVar1;
	
	add_relationship_group("relHeadHunterPlayer", &iLocal_1422);
	iVar0 = get_relationship_between_groups(get_ped_relationship_group_hash(PLAYER::PLAYER_PED_ID()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574198[iVar1], iLocal_1422);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1422, Global_1574198[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574198[iVar1], Global_1574239);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574239, Global_1574198[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_1422, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, -1533126372, iLocal_1422);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1422, Global_1574240[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574240[5], iLocal_1422);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1422, Global_1574231);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574231, iLocal_1422);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1422, Global_1574239);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574239, iLocal_1422);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1574239);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1422);
	func_612(1, &Global_1574239);
	func_611(&Global_1574239);
	func_611(&iLocal_1422);
}

void func_611(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_612(int iParam0, auto uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

bool func_613()
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
		if (func_581())
		{
			return false;
		}
		if (func_579(155))
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

bool func_614(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_587();
			}
			else
			{
				return false;
			}
		}
		if (!func_537())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_587();
					}
					else
					{
						return false;
					}
				}
				if (func_581())
				{
					if (!iParam2)
					{
						func_587();
					}
					else
					{
						return false;
					}
				}
				if (func_579(155))
				{
					if (!iParam2)
					{
						func_587();
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
					func_587();
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
				func_587();
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
			func_587();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_615(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_587();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_616(int iParam0)
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

bool func_617(int iParam0, int iParam1, int iParam2)
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

