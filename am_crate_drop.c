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
	struct<189> Local_96 = 0;
	auto uLocal_285 = 0;
	struct<4>[] Local_286 = new struct<4>[32];
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int[] iLocal_417 = new int[1];
	int[] iLocal_419 = new int[1];
	struct<33>[] Local_421 = new struct<33>[1];
	var[] uLocal_455 = new var[1];
	auto uLocal_457 = 0;
	auto uLocal_458 = 0;
	int[] iLocal_459 = new int[1];
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int[] iLocal_467 = new int[8];
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	struct<20> Local_478 = 0;
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
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_461 = joaat("prop_flare_01");
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_431(player_id(), 0, 1))
	{
		func_425(Local_478);
	}
	else
	{
		func_419();
	}
	while (true)
	{
		func_418();
		if (func_409() || func_406(4))
		{
			func_419();
		}
		if (network_is_in_tutorial_session())
		{
			func_419();
		}
		if (network_is_activity_session())
		{
			func_419();
		}
		if (func_404(player_id()))
		{
			func_419();
		}
		if (func_402(player_id()))
		{
			func_419();
		}
		func_401();
		switch (func_400(participant_id_to_int()))
		{
			case 0:
				Local_286[participant_id_to_int() /*4*/] = 1;
				if (func_399() == 4)
				{
					Local_286[participant_id_to_int() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_399() == 1)
				{
					func_72();
				}
				else if (func_399() == 4)
				{
					Local_286[participant_id_to_int() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_71(&(Local_96.f_184));
				if (func_70(&(Local_96.f_184)))
				{
					Local_286[participant_id_to_int() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_286[participant_id_to_int() /*4*/] = 4;
			
			case 4:
				func_419();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_399())
			{
				case 0:
					if (func_56())
					{
						Local_96 = 1;
					}
					break;
				
				case 1:
					func_7();
					func_3();
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
	return false;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 10);
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			iVar2 = get_player_ped(iVar1);
			iVar3 = false;
			while (iVar3 < 1)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 2))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_286[iVar0 /*4*/].f_1, 0 + iVar3))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 2);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 11))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_286[iVar0 /*4*/].f_1, 3 + iVar3))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 11);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 3))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_286[iVar0 /*4*/].f_1, 6 + iVar3))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 3);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 15))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_286[iVar0 /*4*/].f_1, 15 + iVar3))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 15);
					}
				}
				if (func_431(iVar1, 1, 1))
				{
					if (Local_96.f_2.f_1[iVar3 /*66*/].f_64 == -1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_286[iVar0 /*4*/].f_1, 12 + iVar3))
						{
							Local_96.f_2.f_1[iVar3 /*66*/].f_64 = iVar0;
							func_6(iVar3);
							func_5(iVar3);
							func_4(iVar3);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 14 + iVar3) && GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar3 /*66*/].f_65, 3 + iVar3))
					{
						if (!network_does_network_id_exist(Local_96.f_2.f_1[iVar3 /*66*/].f_1))
						{
							Local_96.f_179--;
							GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 14 + iVar3);
						}
					}
					if (is_entity_at_coord(iVar2, Local_96.f_2.f_68[iVar3 /*104*/].f_1, 100f, 100f, 100f, false, true, 0))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 10);
						GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 13);
					}
					else if (is_entity_at_coord(iVar2, Local_96.f_2.f_68[iVar3 /*104*/].f_1, 180f, 180f, 180f, false, true, 0))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[iVar3 /*66*/].f_65), 13);
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_59 != 0)
	{
		if (does_particle_fx_looped_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_59))
		{
			remove_particle_fx(Local_96.f_2.f_1[iParam0 /*66*/].f_59, 0);
			Local_96.f_2.f_1[iParam0 /*66*/].f_59 = 0;
		}
	}
}

void func_5(int iParam0)
{
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_58 != 0)
	{
		if (does_particle_fx_looped_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_58))
		{
			stop_particle_fx_looped(Local_96.f_2.f_1[iParam0 /*66*/].f_58, 0);
		}
	}
}

void func_6(int iParam0)
{
	if (get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60) != -1)
	{
		if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
		{
			if (!has_sound_finished(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60)))
			{
				stop_sound(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60));
				release_sound_id(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60));
			}
		}
		else if (!has_sound_finished(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60)))
		{
			stop_sound(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60));
			release_sound_id(get_sound_id_from_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_60));
		}
	}
}

void func_7()
{
	int iVar0;
	
	switch (Local_96.f_180)
	{
		case 0:
			if ((func_54() && func_53()) && func_52())
			{
				Local_96.f_180 = 1;
			}
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 6);
			GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 7);
			GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 8);
			GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 9);
			iVar0 = false;
			while (iVar0 < Local_96.f_2)
			{
				func_45(iVar0);
				func_18(iVar0);
				func_11(iVar0);
				iVar0++;
			}
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 6) && GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 9))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 7))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_457, 60000, 0))
					{
						func_8();
						Local_96.f_180 = 2;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 8))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_457, 60000, 0))
					{
						func_8();
						Local_96.f_180 = 2;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_5(iVar0);
		iVar0++;
	}
}

bool func_9(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_10(uParam0, iParam2, 0);
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

void func_10(auto uParam0, int iParam1, int iParam2)
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

void func_11(int iParam0)
{
	struct<14> Var0;
	
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_64 == -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
			{
				if (Local_96.f_2.f_1[iParam0 /*66*/].f_63 != func_17() && Local_96.f_2.f_1[iParam0 /*66*/].f_63 != func_16())
				{
					Local_96.f_2.f_1[iParam0 /*66*/].f_63 = func_17();
				}
			}
			else if (Local_96.f_2.f_1[iParam0 /*66*/].f_63 != func_15())
			{
				Local_96.f_2.f_1[iParam0 /*66*/].f_63 = func_15();
			}
			if (func_9(&(Local_96.f_2.f_1[iParam0 /*66*/].f_61), Local_96.f_2.f_1[iParam0 /*66*/].f_63, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 13) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 14))
				{
					func_4(iParam0);
					Var0.f_2 = 101;
					func_13(Var0, func_14(1));
					Local_96.f_2.f_1[iParam0 /*66*/].f_64 = 9999;
				}
				else
				{
					func_12(&(Local_96.f_2.f_1[iParam0 /*66*/].f_61));
					Local_96.f_2.f_1[iParam0 /*66*/].f_63 = func_16();
					GAMEPLAY::SET_BIT(&(Local_96.f_1), 14);
				}
			}
		}
		GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), 13);
	}
}

void func_12(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_13(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_14(int iParam0)
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
			if (func_431(iVar2, 0, 0))
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

auto func_15()
{
	return Global_262145.f_9424;
}

auto func_16()
{
	return Global_262145.f_9425;
}

auto func_17()
{
	return Global_262145.f_9423;
}

void func_18(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 9);
		if (Local_96.f_2.f_68[iParam0 /*104*/].f_4 == 2)
		{
			if (func_44())
			{
				Local_96.f_2.f_68[iParam0 /*104*/].f_4 = 0;
			}
			else
			{
				Local_96.f_2.f_68[iParam0 /*104*/].f_4 = 1;
				Local_96.f_177++;
			}
		}
		switch (Local_96.f_2.f_68[iParam0 /*104*/].f_4)
		{
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 2))
				{
					if (func_36(iParam0))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), 5);
					}
				}
				break;
			
			case 0:
				if (func_19(iParam0))
				{
					GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), 5);
				}
				break;
			
			default:
				GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), 5);
				break;
			}
	}
}

bool func_19(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_96.f_2.f_68[uParam0 /*104*/].f_96)
	{
		if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			if (func_35(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_1))
			{
				if (func_21(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_20(&(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 22, Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_1, Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_2, Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_5, 1, 1, 1))
					{
						PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), Global_1574233);
						set_entity_is_target_priority(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 1, 0f);
						set_ped_random_component_variation(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 0);
						give_delayed_weapon_to_ped(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), joaat("weapon_pistol"), 25000, 0);
						give_delayed_weapon_to_ped(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_14, 25000, 1);
						set_ped_accuracy(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/].f_15);
						PED::SET_PED_COMBAT_ABILITY(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						set_ped_combat_movement(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 0, true);
						set_ped_target_loss_response(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						_0x52D59AB61DDC05DD(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						set_entity_health(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), round(200f * Global_262145.f_151));
						set_ped_as_enemy(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						set_ped_keep_task(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), true);
						task_combat_hated_targets_in_area(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_1, 150f, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_96.f_2.f_68[uParam0 /*104*/].f_96)
	{
		if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_20(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5, int iParam6, int iParam7)
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

bool func_21(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_28(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_22(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_22(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_431(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_27(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_431(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_23(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_27(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (get_distance_between_coords(func_27(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_23(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

auto func_26()
{
	return Global_1312747;
}

Vector3 func_27(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_28(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_431(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_23(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_29(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_27(iVar1), vParam0, 1) < fParam3)
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

bool func_29(int iParam0)
{
	if (func_34(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_33(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_30(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_32(iParam0);
	if (!iVar0 == func_31())
	{
		if (iVar0 == func_32(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_31()
{
	return -1;
}

int func_32(int iParam0)
{
	if (iParam0 != func_31())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_31();
}

struct<13> func_33(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_34(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_33(iParam0)};
		Global_2459453 = {func_33(iParam1)};
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

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_36(auto uParam0)
{
	if (can_register_mission_entities(4, 1, 0, 0))
	{
		if (func_42(uParam0) && func_37(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_37(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_40(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_39(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]))
		{
			iVar0 = get_vehicle_max_number_of_passengers(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/])) + 1;
			if (iVar0 > Local_96.f_2.f_68[uParam0 /*104*/].f_96)
			{
				iVar0 = Local_96.f_2.f_68[uParam0 /*104*/].f_96;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					if (func_35(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/].f_1))
					{
						if (func_38(&(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/], 22, Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/].f_1, iVar1 - 1, 1, 1, 1))
						{
							PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), Global_1574233);
							set_entity_is_target_priority(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 1, 0f);
							set_ped_random_component_variation(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 0);
							give_delayed_weapon_to_ped(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), joaat("weapon_pistol"), 25000, 0);
							give_delayed_weapon_to_ped(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/].f_14, 25000, 1);
							set_ped_accuracy(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/].f_15);
							PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 2, true);
							PED::SET_PED_COMBAT_ABILITY(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							set_ped_combat_movement(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 0, true);
							set_ped_target_loss_response(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							_0x52D59AB61DDC05DD(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							set_entity_health(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), round(200f * Global_262145.f_151));
							set_ped_as_enemy(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							set_ped_keep_task(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), true);
							task_combat_hated_targets_in_area(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_1, 250f, 0);
						}
					}
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					return false;
				}
				iVar1++;
			}
			return true;
		}
	}
	return false;
}

bool func_38(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_39(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

int func_40(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_41(net_to_veh(iParam0));
	}
	return false;
}

bool func_41(int iParam0)
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

bool func_42(auto uParam0)
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_35(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_1))
		{
			iVar5 = 0;
			while (iVar5 < 3)
			{
				if (func_21(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					vVar0 = {Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/]};
					fVar3 = Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_12[iVar5];
					iVar4 = 1;
					iVar5 = 3;
				}
				iVar5++;
			}
			if (iVar4 == 1)
			{
				if (func_43(&(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_1, vVar0, fVar3, 1, 1, 1, 0, 1, 1))
				{
					set_entity_health(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]), Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_16);
					set_vehicle_engine_health(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]), to_float(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_16));
					set_vehicle_petrol_tank_health(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]), to_float(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_16));
					if (is_this_model_a_heli(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_1))
					{
						set_heli_blades_full_speed(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]));
					}
					set_vehicle_engine_on(net_to_veh(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]), true, 1, 0);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/]))
	{
		return false;
	}
	set_model_as_no_longer_needed(Local_96.f_2.f_68[uParam0 /*104*/].f_78[0 /*17*/].f_1);
	return true;
}

bool func_43(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

bool func_44()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(0, 65535), false))
	{
		return true;
	}
	return false;
}

void func_45(int iParam0)
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, false))
	{
		if (func_9(&(Local_96.f_186), 60000, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), false);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true))
	{
		if (func_50(iParam0))
		{
			if (func_48())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
				{
					Var0.f_2 = 97;
				}
				else
				{
					Var0.f_2 = 98;
				}
				func_13(Var0, func_14(1));
				func_46(iParam0);
				_0xAFC7E5E075A96F46(Local_96.f_2.f_68[iParam0 /*104*/].f_1, Local_96.f_2.f_68[iParam0 /*104*/].f_1.f_1, Local_96.f_2.f_68[iParam0 /*104*/].f_1.f_2);
				GAMEPLAY::SET_BIT(&(Local_96.f_2.f_1[iParam0 /*66*/].f_65), true);
				Local_96.f_176++;
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true))
		{
			if (func_9(&(Local_96.f_188), 60000, 0))
			{
				func_8();
				Local_96.f_180 = 2;
				Var14.f_2 = 103;
				func_13(Var14, func_14(1));
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 6);
	}
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_64 == -1)
	{
		GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 7);
	}
	if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_96.f_2.f_1[0 /*66*/].f_65), 8);
	}
}

bool func_46(int iParam0)
{
	if (func_47())
	{
		if (!does_particle_fx_looped_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_59))
		{
			Local_96.f_2.f_1[iParam0 /*66*/].f_59 = _start_particle_fx_looped_on_entity_2("scr_crate_drop_beacon", net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
			{
				set_particle_fx_looped_colour(Local_96.f_2.f_1[iParam0 /*66*/].f_59, 0.8f, 0.18f, 0.19f, 0);
			}
			else
			{
				set_particle_fx_looped_colour(Local_96.f_2.f_1[iParam0 /*66*/].f_59, 1f, 0.84f, 0f, 0);
			}
		}
	}
	if (!does_particle_fx_looped_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_59))
	{
		return false;
	}
	return true;
}

bool func_47()
{
	request_ptfx_asset();
	if (has_ptfx_asset_loaded())
	{
		return true;
	}
	return false;
}

bool func_48()
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
	{
		GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 9);
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		STREAMING::REQUEST_MODEL(Local_96.f_181[iVar0 /*2*/].f_1);
		if (STREAMING::HAS_MODEL_LOADED(Local_96.f_181[iVar0 /*2*/].f_1))
		{
			GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 10);
			if ((!network_does_network_id_exist(Local_96.f_181[iVar0 /*2*/]) && network_does_network_id_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_1)) && network_does_network_id_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_2))
			{
				if (network_does_network_id_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_1))
				{
					GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 12);
					if (can_register_mission_objects(1))
					{
						GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 13);
						if (func_39(Local_96.f_2.f_1[iVar0 /*66*/].f_1))
						{
							GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 14);
							if (func_49(&(Local_96.f_181[iVar0 /*2*/]), Local_96.f_181[iVar0 /*2*/].f_1, get_entity_coords(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_1), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0))
							{
								GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 15);
								set_network_id_exists_on_all_machines(Local_96.f_181[iVar0 /*2*/], 1);
								set_entity_heading(net_to_obj(Local_96.f_181[iVar0 /*2*/]), get_entity_heading(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_1)));
								attach_entity_to_entity(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_1), net_to_obj(Local_96.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.35f, 0f, 0f, 0f, 1, 0, 1, 0, 2, 1);
								set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_96.f_181[iVar0 /*2*/]), 1);
								_0x3910051CCECDB00C(net_to_obj(Local_96.f_181[iVar0 /*2*/]), false);
								activate_physics(net_to_obj(Local_96.f_181[iVar0 /*2*/]));
								set_entity_velocity(net_to_obj(Local_96.f_181[iVar0 /*2*/]), 0f, 0f, -0.2f);
								attach_entity_to_entity(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2), net_to_obj(Local_96.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2), 1);
								_0x3910051CCECDB00C(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2), false);
								play_entity_anim(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2), &(Local_96.f_2.f_1[iVar0 /*66*/].f_14), &(Local_96.f_2.f_1[iVar0 /*66*/].f_8), 1000f, false, 0, 0, 0f, 0);
								force_entity_ai_and_animation_update(net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2));
								set_entity_no_collision_entity(net_to_obj(Local_96.f_181[iVar0 /*2*/]), net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_1), 0);
								if (network_does_network_id_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_2))
								{
									set_entity_no_collision_entity(net_to_obj(Local_96.f_181[iVar0 /*2*/]), net_to_obj(Local_96.f_2.f_1[iVar0 /*66*/].f_2), 0);
								}
							}
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 17);
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!network_does_network_id_exist(Local_96.f_181[iVar0 /*2*/]))
		{
			return false;
		}
		iVar0++;
	}
	GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 16);
	return true;
}

bool func_49(auto uParam0, int iParam1, Vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!can_register_mission_objects(1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, iParam6, iParam5, iParam7));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_obj(*uParam0), iParam8);
		if (_0xC7827959479DCC78(net_to_obj(*uParam0)))
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

bool func_50(int iParam0)
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(Local_96.f_2.f_1[iParam0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_96.f_2.f_1[iParam0 /*66*/].f_4);
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
	{
		STREAMING::REQUEST_MODEL(Local_96.f_181[iParam0 /*2*/].f_1);
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_96.f_2.f_1[iParam0 /*66*/].f_3))
	{
		GAMEPLAY::SET_BIT(&(Global_2454689.f_10), false);
		if (!network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
		{
			GAMEPLAY::SET_BIT(&(Global_2454689.f_10), true);
			if (can_register_mission_entities(0, 0, 1, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 2);
				Local_96.f_2.f_1[iParam0 /*66*/].f_1 = obj_to_net(create_portable_pickup(joaat("pickup_portable_crate_unfixed"), func_51(iParam0), 0, Local_96.f_2.f_1[iParam0 /*66*/].f_3));
				set_entity_heading(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), get_random_float_in_range(0f, 360f));
				set_network_id_exists_on_all_machines(Local_96.f_2.f_1[iParam0 /*66*/].f_1, 1);
				set_entity_invincible(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), true);
				_0x77F33F2CCF64B3AA(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1);
				set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1);
				_0x3910051CCECDB00C(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), false);
				activate_physics(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1));
				set_entity_velocity(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0f, 0f, -0.2f);
				_0x92AEFB5F6E294023(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1, 0);
				func_6(iParam0);
				iVar0 = get_sound_id();
				play_sound_from_entity(iVar0, "Crate_Beeps", net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", 1, 0);
				Local_96.f_2.f_1[iParam0 /*66*/].f_60 = get_network_id_from_sound_id(iVar0);
			}
		}
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_96.f_2.f_1[iParam0 /*66*/].f_4))
	{
		GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 3);
		if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
		{
			GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 4);
			if (!network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_2))
			{
				GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 5);
				if (can_register_mission_entities(0, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 6);
					if (func_49(&(Local_96.f_2.f_1[iParam0 /*66*/].f_2), Local_96.f_2.f_1[iParam0 /*66*/].f_4, get_entity_coords(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1) + Vector(1f, 0f, 0f), 1, 1, 0, 1))
					{
						GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 7);
						set_network_id_exists_on_all_machines(Local_96.f_2.f_1[iParam0 /*66*/].f_2, 1);
						if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
						{
							attach_entity_to_entity(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), 1);
							_0x3910051CCECDB00C(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), false);
							play_entity_anim(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), &(Local_96.f_2.f_1[iParam0 /*66*/].f_14), &(Local_96.f_2.f_1[iParam0 /*66*/].f_8), 1000f, false, 0, 0, 0f, 0);
							force_entity_ai_and_animation_update(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2));
						}
					}
				}
			}
		}
	}
	if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1) && network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_2))
	{
		GAMEPLAY::SET_BIT(&(Global_2454689.f_10), 8);
		return true;
	}
	return false;
}

Vector3 func_51(auto uParam0)
{
	Vector3 vVar0;
	
	vVar0 = {Local_96.f_2.f_68[uParam0 /*104*/].f_1};
	vVar0.x += get_random_float_in_range(0f, 7.5f);
	vVar0.y += get_random_float_in_range(0f, 7.5f);
	vVar0.z += _0x29C24BFBED8AB8FB(vVar0.x, vVar0.y) + 100f;
	return vVar0;
}

bool func_52()
{
	int iVar0;
	
	if (func_47())
	{
		iVar0 = 0;
		while (iVar0 < Local_96.f_2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_459[iVar0]))
			{
				if (!does_particle_fx_looped_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_58))
				{
					Local_96.f_2.f_1[iVar0 /*66*/].f_58 = _start_particle_fx_looped_on_entity_bone_2("scr_crate_drop_flare", iLocal_459[iVar0], 0f, 0f, -0.2f, 0f, 0f, 0f, -1, 1f, 0, 0, 0);
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
					{
						set_particle_fx_looped_colour(Local_96.f_2.f_1[iVar0 /*66*/].f_58, 0.8f, 0.18f, 0.19f, 0);
					}
					else
					{
						set_particle_fx_looped_colour(Local_96.f_2.f_1[iVar0 /*66*/].f_58, 1f, 0.84f, 0f, 0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_96.f_2)
	{
		if (!does_particle_fx_looped_exist(Local_96.f_2.f_1[iVar0 /*66*/].f_58))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_53()
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_461);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_461))
	{
		iVar0 = 0;
		while (iVar0 < Local_96.f_2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_459[iVar0]))
			{
				clear_area(Local_96.f_2.f_68[iVar0 /*104*/].f_1, 1f, 0, 1, 0, false);
				iLocal_459[iVar0] = create_object(iLocal_461, Local_96.f_2.f_68[iVar0 /*104*/].f_1, 0, false, false);
				set_entity_invincible(iLocal_459[iVar0], true);
				freeze_entity_position(iLocal_459[iVar0], true);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_96.f_2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_459[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_54()
{
	STREAMING::REQUEST_MODEL(Local_96.f_2.f_1[0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_96.f_2.f_1[0 /*66*/].f_4);
	if ((STREAMING::HAS_MODEL_LOADED(Local_96.f_2.f_1[0 /*66*/].f_3) && STREAMING::HAS_MODEL_LOADED(Local_96.f_2.f_1[0 /*66*/].f_4)) && func_55())
	{
		return true;
	}
	return false;
}

bool func_55()
{
	request_anim_dict(&(Local_96.f_2.f_1[0 /*66*/].f_8));
	if (has_anim_dict_loaded(&(Local_96.f_2.f_1[0 /*66*/].f_8)))
	{
		return true;
	}
	return false;
}

bool func_56()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_96.f_2)
	{
		func_68(&(Local_96.f_2.f_68[iVar0 /*104*/]));
		func_67(&(Local_96.f_2.f_68[iVar0 /*104*/]), &(Local_96.f_2.f_173));
		func_57(&(Local_96.f_2.f_1[iVar0 /*66*/]));
		Local_96.f_2.f_1[iVar0 /*66*/].f_60 = -1;
		Local_96.f_2.f_1[iVar0 /*66*/].f_59 = 0;
		iVar0++;
	}
	return true;
}

void func_57(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			*uParam0.f_3 = joaat("prop_drug_package");
			*uParam0.f_4 = joaat("p_cargo_chute_s");
			*uParam0.f_5 = {0f, 0f, 0f};
			StringCopy(uParam0.f_8, "P_cargo_chute_S", 24);
			StringCopy(uParam0.f_14, "P_cargo_chute_S_deploy", 32);
			StringCopy(uParam0.f_22, "P_cargo_chute_S_crumple", 32);
			*uParam0.f_63 = func_17();
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
			{
				if (func_44())
				{
					*uParam0.f_30 = 0;
				}
				else
				{
					*uParam0.f_30 = 1;
				}
			}
			else
			{
				*uParam0.f_30 = 8;
			}
			switch (*uParam0.f_30)
			{
				case 0:
					*uParam0.f_32 = 1000 * get_random_int_in_range(Global_262145.f_40, Global_262145.f_41);
					if (*uParam0.f_32 > Global_262145.f_46)
					{
						*uParam0.f_32 = Global_262145.f_46;
					}
					break;
				
				case 1:
					iVar0 = get_random_int_in_range(0, 10);
					if (Global_262145.f_16[iVar0] != 0 && Global_262145.f_27[iVar0] > 0)
					{
						*uParam0.f_32 = Global_262145.f_27[iVar0];
						*uParam0.f_33 = Global_262145.f_16[iVar0];
						iLocal_464 = Global_262145.f_16[iVar0];
					}
					else if (iVar0 == 1)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_rpg");
					}
					else if (iVar0 == 2)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_heavysniper");
					}
					else if (iVar0 == 3)
					{
						*uParam0.f_32 = 8;
						*uParam0.f_33 = joaat("weapon_assaultshotgun");
					}
					else if (iVar0 == 4)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_stickybomb");
					}
					else if (iVar0 == 5)
					{
						*uParam0.f_32 = 1;
						*uParam0.f_33 = joaat("weapon_grenadelauncher");
					}
					else if (iVar0 == 6)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_advancedrifle");
					}
					else if (iVar0 == 7)
					{
						*uParam0.f_32 = 2;
						*uParam0.f_33 = joaat("weapon_combatmg");
					}
					else if (iVar0 == 8)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_molotov");
					}
					else if (iVar0 == 9)
					{
						*uParam0.f_32 = 4;
						*uParam0.f_33 = joaat("weapon_grenade");
					}
					else
					{
						*uParam0.f_32 = 1;
						*uParam0.f_33 = joaat("weapon_minigun");
					}
					iLocal_464 = *uParam0.f_33;
					break;
				
				case 8:
					if (Global_262145.f_42 > 0)
					{
						*uParam0.f_32 = Global_262145.f_42;
					}
					else
					{
						*uParam0.f_32 = 5000;
					}
					if (Global_262145.f_38 != 0 && Global_262145.f_39 > 0)
					{
						*uParam0.f_33 = Global_262145.f_38;
					}
					else
					{
						*uParam0.f_33 = joaat("weapon_minigun");
					}
					iLocal_464 = *uParam0.f_33;
					iLocal_465 = 0;
					if (func_60(joaat("mp_m_freemode_01"), Global_262145.f_68, uParam0.f_34, uParam0.f_35))
					{
						if (func_59(player_id()))
						{
							iLocal_467[0] = Global_262145.f_68;
						}
					}
					if (func_60(joaat("mp_f_freemode_01"), Global_262145.f_69, uParam0.f_36, uParam0.f_37))
					{
						if (!func_59(player_id()))
						{
							iLocal_467[0] = Global_262145.f_69;
						}
					}
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (func_60(joaat("mp_m_freemode_01"), func_58(iVar1, 1), uParam0.f_38[iVar1], uParam0.f_43[iVar1]))
						{
							if (func_59(player_id()))
							{
								iLocal_467[iVar1 + 1] = func_58(iVar1, 1);
							}
						}
						if (func_60(joaat("mp_f_freemode_01"), func_58(iVar1, 0), uParam0.f_48[iVar1], uParam0.f_53[iVar1]))
						{
							if (!func_59(player_id()))
							{
								iLocal_467[iVar1 + 1] = func_58(iVar1, 0);
							}
						}
						iVar1++;
					}
					break;
			}
			break;
	}
}

auto func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1)
			{
				return Global_262145.f_8194;
			}
			else
			{
				return Global_262145.f_8195;
			}
			break;
		
		case 1:
			if (iParam1)
			{
				return Global_262145.f_8196;
			}
			else
			{
				return Global_262145.f_8197;
			}
			break;
		
		case 2:
			if (iParam1)
			{
				return Global_262145.f_8198;
			}
			else
			{
				return Global_262145.f_8199;
			}
			break;
		
		case 3:
			if (iParam1)
			{
				return Global_262145.f_8200;
			}
			else
			{
				return Global_262145.f_8201;
			}
			break;
	}
	if (iParam1)
	{
		return Global_262145.f_8194;
	}
	return Global_262145.f_8195;
}

int func_59(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2418472[iParam0 /*313*/].f_227;
}

bool func_60(int iParam0, int iParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<8> Var39;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<10> Var57;
	int iVar74;
	int iVar75;
	int iVar76;
	
	if ((iParam1 != -1 && iParam1 != 0) && iParam1 != 1849449579)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
			*uParam2 = func_66(iParam1);
			iVar1 = 3;
		}
		else
		{
			iVar0 = 4;
			*uParam2 = func_65(iParam1);
			iVar1 = 4;
		}
		*uParam3 = -99;
		if (*uParam2 == 10)
		{
			iVar3 = _0x278F76C3B0A8F109(iVar1);
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (_0xFF56381874F82086(iVar1, iVar2, &Var4))
				{
					if (iParam1 == get_hash_key(&(Var4.f_7)))
					{
						*uParam3 = 129 + iVar2;
						return true;
					}
				}
				iVar2++;
			}
		}
		else if (*uParam2 == 14)
		{
			init_shop_ped_prop(&Var19);
			iVar37 = 0;
			iVar38 = _get_num_props_from_outfit(iVar0, 6, -1, 1, -1, -1);
			iVar36 = 0;
			while (iVar36 < iVar38)
			{
				get_shop_ped_query_prop(iVar36, &Var19);
				if (!_is_dlc_data_empty(Var19))
				{
					if (iParam1 == get_hash_key(&(Var19.f_9)))
					{
						*uParam3 = func_64(iParam0) + iVar37;
						if (*uParam3 != -99)
						{
							return true;
						}
					}
					iVar37++;
				}
				iVar36++;
			}
		}
		else if (*uParam2 == 12)
		{
			iVar55 = 0;
			iVar56 = _0xF3FBE2D50A6A8C28(iVar0, 0);
			iVar54 = 0;
			while (iVar54 < iVar56)
			{
				get_shop_ped_query_outfit(iVar54, &Var39);
				if (!_is_dlc_data_empty(Var39))
				{
					if (iParam1 == get_hash_key(&(Var39.f_7)))
					{
						*uParam3 = func_63(iParam0) + iVar55;
						if (*uParam3 != -99)
						{
							return true;
						}
					}
					iVar55++;
				}
				iVar54++;
			}
		}
		else
		{
			init_shop_ped_component(&Var57);
			iVar75 = 0;
			iVar76 = _get_num_props_from_outfit(iVar0, 6, -1, 0, -1, func_62(*uParam2));
			iVar74 = 0;
			while (iVar74 < iVar76)
			{
				get_shop_ped_query_component(iVar74, &Var57);
				if (!_is_dlc_data_empty(Var57))
				{
					if (iParam1 == get_hash_key(&(Var57.f_9)))
					{
						*uParam3 = func_61(iParam0, func_62(*uParam2)) + iVar75;
						if (*uParam3 != -99)
						{
							return true;
						}
					}
					iVar75++;
				}
				iVar74++;
			}
			if (*uParam2 == 11)
			{
				*uParam2 = 8;
				iVar76 = _get_num_props_from_outfit(iVar0, 6, -1, 0, -1, func_62(*uParam2));
				iVar74 = 0;
				while (iVar74 < iVar76)
				{
					get_shop_ped_query_component(iVar74, &Var57);
					if (!_is_dlc_data_empty(Var57))
					{
						if (iParam1 == get_hash_key(&(Var57.f_9)))
						{
							*uParam3 = func_61(iParam0, func_62(*uParam2)) + iVar75;
							if (*uParam3 != -99)
							{
								return true;
							}
						}
						iVar75++;
					}
					iVar74++;
				}
			}
		}
	}
	return false;
}

int func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case -1826642211:
			return 4;
			break;
		
		case -1386489003:
			return 4;
			break;
		
		case -1130006040:
			return 4;
			break;
		
		case -923757954:
			return 4;
			break;
		
		case -670879581:
			return 4;
			break;
		
		case -364784352:
			return 4;
			break;
		
		case 88279842:
			return 4;
			break;
		
		case 394833837:
			return 4;
			break;
		
		case 552518265:
			return 4;
			break;
		
		case 858744570:
			return 4;
			break;
		
		case -268182756:
			return 4;
			break;
		
		case -1573273719:
			return 4;
			break;
		
		case -1507827641:
			return 4;
			break;
		
		case 696641296:
			return 4;
			break;
		
		case -80770460:
			return 4;
			break;
		
		case 236040232:
			return 4;
			break;
		
		case 1614992525:
			return 4;
			break;
		
		case -493954781:
			return 4;
			break;
		
		case -187925090:
			return 4;
			break;
		
		case -953408930:
			return 4;
			break;
		
		case 426460891:
			return 4;
			break;
		
		case -770787277:
			return 4;
			break;
		
		case -395813030:
			return 4;
			break;
		
		case 1685280626:
			return 4;
			break;
		
		case 659790472:
			return 6;
			break;
		
		case 1417016524:
			return 6;
			break;
		
		case 1112100979:
			return 6;
			break;
		
		case -1460265517:
			return 6;
			break;
		
		case -695404288:
			return 6;
			break;
		
		case -999107380:
			return 6;
			break;
		
		case 1914810411:
			return 6;
			break;
		
		case -284972543:
			return 6;
			break;
		
		case -584808893:
			return 6;
			break;
		
		case 172908694:
			return 6;
			break;
		
		case -794760172:
			return 6;
			break;
		
		case -158255116:
			return 6;
			break;
		
		case -1741034697:
			return 14;
			break;
		
		case -2090614389:
			return 14;
			break;
		
		case 871998136:
			return 14;
			break;
		
		case 751899751:
			return 14;
			break;
		
		case 1527640288:
			return 14;
			break;
		
		case -98685182:
			return 14;
			break;
		
		case -397046927:
			return 14;
			break;
		
		case 94771610:
			return 14;
			break;
		
		case -1549150817:
			return 14;
			break;
		
		case -1852886678:
			return 14;
			break;
		
		case -1168768265:
			return 14;
			break;
		
		case -1340871053:
			return 14;
			break;
		
		case 1723915210:
			return 14;
			break;
		
		case 1016563576:
			return 14;
			break;
		
		case 1879932530:
			return 14;
			break;
		
		case 1579408031:
			return 14;
			break;
		
		case -1939785959:
			return 14;
			break;
		
		case 2058261428:
			return 14;
			break;
		
		case -1934477385:
			return 14;
			break;
		
		case 2052821770:
			return 14;
			break;
		
		case -1490162514:
			return 14;
			break;
		
		case 299969868:
			return 14;
			break;
		
		case 470761896:
			return 14;
			break;
		
		case 1953395301:
			return 14;
			break;
		
		case 111351504:
			return 14;
			break;
		
		case 1530445818:
			return 14;
			break;
		
		case 1684722270:
			return 14;
			break;
		
		case -1655323593:
			return 14;
			break;
		
		case -736157234:
			return 14;
			break;
		
		case -836790833:
			return 14;
			break;
		
		case 1003876666:
			return 14;
			break;
		
		case 831184036:
			return 14;
			break;
		
		case 523843585:
			return 14;
			break;
		
		case 286628794:
			return 14;
			break;
		
		case 1724729128:
			return 14;
			break;
		
		case -1211011407:
			return 11;
			break;
		
		case 857040219:
			return 11;
			break;
		
		case 1099366942:
			return 11;
			break;
		
		case 1363583389:
			return 11;
			break;
		
		case 1862655259:
			return 11;
			break;
		
		case -877029719:
			return 11;
			break;
		
		case -638110940:
			return 11;
			break;
		
		case 2041146389:
			return 11;
			break;
		
		case 1605906481:
			return 11;
			break;
		
		case 1398577018:
			return 11;
			break;
		
		case 1158576862:
			return 11;
			break;
		
		case 1252820554:
			return 11;
			break;
		
		case 1030646734:
			return 11;
			break;
		
		case 767937661:
			return 11;
			break;
		
		case 268865791:
			return 11;
			break;
		
		case -1842866876:
			return 11;
			break;
		
		case -2071987728:
			return 11;
			break;
		
		case 1753989640:
			return 11;
			break;
		
		case 1587878268:
			return 11;
			break;
		
		case 1893711345:
			return 11;
			break;
		
		case 1150906042:
			return 7;
			break;
		
		case 844614199:
			return 7;
			break;
		
		case -1304212980:
			return 7;
			break;
		
		case 1746515386:
			return 7;
			break;
		
		case 1192076525:
			return 7;
			break;
		
		case 1527696623:
			return 7;
			break;
		
		case -56946675:
			return 7;
			break;
		
		case 240497538:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case 554409157:
			return 14;
			break;
		
		case -1985352192:
			return 14;
			break;
		
		case 1954530220:
			return 14;
			break;
		
		case 1744349854:
			return 14;
			break;
		
		case 1505955379:
			return 14;
			break;
		
		case -1694789477:
			return 14;
			break;
		
		case -844270082:
			return 14;
			break;
		
		case -201440609:
			return 14;
			break;
		
		case 790947669:
			return 14;
			break;
		
		case 31886561:
			return 14;
			break;
		
		case 623432549:
			return 14;
			break;
		
		case 911373752:
			return 14;
			break;
		
		case -948004850:
			return 14;
			break;
		
		case -621723917:
			return 14;
			break;
		
		case -361505288:
			return 14;
			break;
		
		case -291314090:
			return 14;
			break;
		
		case -458364182:
			return 14;
			break;
		
		case -270204584:
			return 14;
			break;
		
		case -905693801:
			return 14;
			break;
		
		case -750630893:
			return 14;
			break;
		
		case 1302533284:
			return 6;
			break;
		
		case 1547547097:
			return 6;
			break;
		
		case 1731119035:
			return 6;
			break;
		
		case 1952211478:
			return 6;
			break;
		
		case -87527700:
			return 6;
			break;
		
		case -1978790535:
			return 6;
			break;
		
		case -1743607422:
			return 6;
			break;
		
		case -1115556768:
			return 6;
			break;
		
		case 536721746:
			return 6;
			break;
		
		case 634307828:
			return 6;
			break;
		
		case 1425588924:
			return 6;
			break;
		
		case 1916009778:
			return 6;
			break;
		
		case 1933986553:
			return 6;
			break;
		
		case -1929642396:
			return 6;
			break;
		
		case 1514805505:
			return 6;
			break;
		
		case -1343962051:
			return 6;
			break;
		
		case -1104781120:
			return 6;
			break;
		
		case -1806103258:
			return 6;
			break;
		
		case -1566332485:
			return 6;
			break;
		
		case -206910520:
			return 6;
			break;
		
		case 151123574:
			return 6;
			break;
		
		case -1846867902:
			return 6;
			break;
		
		case -940454604:
			return 6;
			break;
		
		case 1010415058:
			return 6;
			break;
		
		case 1158753130:
			return 4;
			break;
		
		case -1912324785:
			return 4;
			break;
		
		case 2026771171:
			return 4;
			break;
		
		case 260620370:
			return 4;
			break;
		
		case 33236279:
			return 4;
			break;
		
		case 922390333:
			return 4;
			break;
		
		case 628354088:
			return 4;
			break;
		
		case -992695573:
			return 4;
			break;
		
		case -1232990650:
			return 4;
			break;
		
		case -114256990:
			return 4;
			break;
		
		case 1329170676:
			return 4;
			break;
		
		case -1811672436:
			return 4;
			break;
		
		case -976554471:
			return 4;
			break;
		
		case 1712657603:
			return 4;
			break;
		
		case -732597946:
			return 4;
			break;
		
		case -791713230:
			return 4;
			break;
		
		case 1669009287:
			return 4;
			break;
		
		case 1835279193:
			return 4;
			break;
		
		case 2082848988:
			return 4;
			break;
		
		case -1742079772:
			return 4;
			break;
		
		case 703569009:
			return 4;
			break;
		
		case 877572399:
			return 4;
			break;
		
		case 1191990954:
			return 4;
			break;
		
		case -477527020:
			return 4;
			break;
		
		case 989049579:
			return 4;
			break;
		
		case 1479667047:
			return 4;
			break;
		
		case -1407536426:
			return 7;
			break;
		
		case 29646384:
			return 7;
			break;
		
		case 277543869:
			return 7;
			break;
		
		case -1872725150:
			return 7;
			break;
		
		case 1428227300:
			return 7;
			break;
		
		case 1659674747:
			return 7;
			break;
		
		case 1951477365:
			return 11;
			break;
		
		case 1720455915:
			return 11;
			break;
		
		case -1781730964:
			return 11;
			break;
		
		case -2015406703:
			return 11;
			break;
		
		case 190274687:
			return 11;
			break;
		
		case -1651146499:
			return 11;
			break;
		
		case -791386246:
			return 11;
			break;
		
		case -1023783994:
			return 11;
			break;
		
		case 1161154635:
			return 11;
			break;
		
		case -147409858:
			return 11;
			break;
		
		case -357960990:
			return 11;
			break;
		
		case -641248995:
			return 11;
			break;
		
		case 1475058043:
			return 11;
			break;
		
		case -1089116195:
			return 11;
			break;
		
		case -1396718798:
			return 11;
			break;
		
		case -1569083738:
			return 11;
			break;
		
		case -1876358651:
			return 11;
			break;
		
		case 332337487:
			return 11;
			break;
		
		case -1987380023:
			return 11;
			break;
		
		case 2000181284:
			return 11;
			break;
		
		case 1325270960:
			return 11;
			break;
		
		case -859602119:
			return 11;
			break;
		
		case 1973739612:
			return 11;
			break;
		
		case -1378552015:
			return 11;
			break;
		
		case 2099058114:
			return 11;
			break;
		
		case -1854718354:
			return 11;
			break;
		
		case 1854175373:
			return 11;
			break;
		
		case 1161111023:
			return 11;
			break;
		
		case -1835777868:
			return 11;
			break;
		
		case -1446088920:
			return 11;
			break;
		
		case 773683136:
			return 11;
			break;
		
		case -67660939:
			return 11;
			break;
		
		case 291290687:
			return 11;
			break;
		
		case -19177840:
			return 11;
			break;
		
		case 215087741:
			return 11;
			break;
		
		case 462493691:
			return 11;
			break;
		
		case 1735726524:
			return 11;
			break;
		
		case -1615722955:
			return 11;
			break;
		
		case -1310446951:
			return 11;
			break;
		
		case 185982219:
			return 11;
			break;
		
		case 214622325:
			return 11;
			break;
		
		case 734862945:
			return 11;
			break;
		
		case -873720684:
			return 11;
			break;
		
		case -583616727:
			return 11;
			break;
		
		case -1215009819:
			return 11;
			break;
		
		case 350430853:
			return 11;
			break;
		
		case -275719199:
			return 11;
			break;
		
		case 7765420:
			return 11;
			break;
		
		case -887155970:
			return 11;
			break;
		
		case 1273795735:
			return 11;
			break;
		
		case 632047639:
			return 11;
			break;
		
		case 932047834:
			return 11;
			break;
		
		case -435467354:
			return 11;
			break;
		
		case -675762431:
			return 11;
			break;
		
		case -1778537592:
			return 11;
			break;
		
		case -2016735453:
			return 11;
			break;
		
		case -1095500556:
			return 11;
			break;
		
		case -1471754214:
			return 11;
			break;
		
		case -1300331964:
			return 12;
			break;
		
		case -499883601:
			return 12;
			break;
		
		case -776617806:
			return 12;
			break;
		
		case 57648165:
			return 12;
			break;
		
		case -11887653:
			return 12;
			break;
		
		case 823754616:
			return 12;
			break;
		
		case 487544676:
			return 12;
			break;
		
		case 912755220:
			return 12;
			break;
		
		case 1714317729:
			return 12;
			break;
		
		case 1480510914:
			return 12;
			break;
		
		case -961171497:
			return 12;
			break;
		
		case -1191275415:
			return 12;
			break;
		
		case -419205006:
			return 12;
			break;
		
		case 1280326322:
			return 12;
			break;
		
		case 1040031245:
			return 12;
			break;
		
		case 1341047279:
			return 12;
			break;
		
		case -2119326356:
			return 12;
			break;
		
		case 57190628:
			return 12;
			break;
		
		case -121465960:
			return 12;
			break;
		
		case 714438461:
			return 12;
			break;
		
		case -2010369687:
			return 12;
			break;
		
		case 1456852673:
			return 12;
			break;
		
		case 2032079699:
			return 12;
			break;
		
		case 845284826:
			return 12;
			break;
		
		case 1151347286:
			return 12;
			break;
		
		case 497048663:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -1666068607:
			return 4;
			break;
		
		case -823905291:
			return 4;
			break;
		
		case -602190237:
			return 4;
			break;
		
		case 826636474:
			return 4;
			break;
		
		case -1064790210:
			return 4;
			break;
		
		case 1107765574:
			return 4;
			break;
		
		case 813762106:
			return 4;
			break;
		
		case -1145037642:
			return 4;
			break;
		
		case -2042376014:
			return 7;
			break;
		
		case 897396518:
			return 7;
			break;
		
		case 1787763017:
			return 7;
			break;
		
		case -1530619186:
			return 11;
			break;
		
		case -1769800117:
			return 11;
			break;
		
		case -2128751743:
			return 11;
			break;
		
		case 1540786419:
			return 11;
			break;
		
		case 1309994372:
			return 11;
			break;
		
		case 928956440:
			return 11;
			break;
		
		case 1584385026:
			return 11;
			break;
		
		case 1827498237:
			return 11;
			break;
		
		case 872544039:
			return 11;
			break;
		
		case 1104450252:
			return 11;
			break;
		
		case -1484562900:
			return 11;
			break;
		
		case -1899431161:
			return 11;
			break;
		
		case 1409123697:
			return 11;
			break;
		
		case 1651384914:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case -1563165287:
			return 6;
			break;
		
		case -1868998364:
			return 6;
			break;
		
		case 1193854544:
			return 6;
			break;
		
		case 896213717:
			return 6;
			break;
		
		case -585502172:
			return 6;
			break;
		
		case -874721366:
			return 6;
			break;
		
		case -2119386293:
			return 6;
			break;
		
		case 1818923207:
			return 6;
			break;
		
		case -1274634230:
			return 6;
			break;
		
		case 576486584:
			return 6;
			break;
		
		case -1216212594:
			return 6;
			break;
		
		case -378407571:
			return 6;
			break;
		
		case 69413583:
			return 6;
			break;
		
		case -169111968:
			return 6;
			break;
		
		case 1950812953:
			return 6;
			break;
		
		case -1508643150:
			return 6;
			break;
		
		case -1872116898:
			return 6;
			break;
		
		case -1031297127:
			return 6;
			break;
		
		case 1289993299:
			return 6;
			break;
		
		case 926847241:
			return 6;
			break;
		
		case -958955979:
			return 6;
			break;
		
		case -49059156:
			return 6;
			break;
		
		case 247598601:
			return 6;
			break;
		
		case -772303755:
			return 6;
			break;
		
		case -323958297:
			return 6;
			break;
		
		case 1196097306:
			return 6;
			break;
	}
	switch (iParam0)
	{
		case 1193378284:
			return 14;
			break;
		
		case 1550036080:
			return 14;
			break;
		
		case -151789162:
			return 14;
			break;
		
		case -868643806:
			return 14;
			break;
		
		case -629200723:
			return 14;
			break;
		
		case -1346514133:
			return 14;
			break;
		
		case 902160189:
			return 14;
			break;
		
		case 1140816816:
			return 14;
			break;
		
		case -1815844140:
			return 14;
			break;
		
		case -1235439612:
			return 14;
			break;
		
		case -1372151880:
			return 14;
			break;
		
		case -619153029:
			return 14;
			break;
		
		case -1060289307:
			return 14;
			break;
		
		case 177852653:
			return 14;
			break;
		
		case 552336785:
			return 14;
			break;
		
		case -287303302:
			return 14;
			break;
		
		case 902382307:
			return 14;
			break;
		
		case 738930535:
			return 14;
			break;
		
		case -518907530:
			return 14;
			break;
		
		case 1188029680:
			return 14;
			break;
		
		case -44183027:
			return 14;
			break;
		
		case -212615687:
			return 14;
			break;
		
		case -1410945244:
			return 14;
			break;
		
		case -1716450631:
			return 14;
			break;
		
		case 330198403:
			return 14;
			break;
		
		case -1497525325:
			return 14;
			break;
		
		case 403699286:
			return 14;
			break;
		
		case 174119672:
			return 14;
			break;
		
		case -577142422:
			return 14;
			break;
		
		case -1212641547:
			return 4;
			break;
		
		case -285246078:
			return 4;
			break;
		
		case -666742776:
			return 4;
			break;
		
		case -1094312680:
			return 4;
			break;
		
		case -1468731282:
			return 4;
			break;
		
		case -498277339:
			return 4;
			break;
		
		case -842089687:
			return 4;
			break;
		
		case 2002292278:
			return 4;
			break;
		
		case 1638228688:
			return 4;
			break;
		
		case -1730850513:
			return 4;
			break;
		
		case -1342653968:
			return 4;
			break;
		
		case -1582293665:
			return 4;
			break;
		
		case -881430293:
			return 4;
			break;
		
		case 1818640969:
			return 4;
			break;
		
		case 920765295:
			return 4;
			break;
		
		case 267646352:
			return 4;
			break;
		
		case -648181660:
			return 4;
			break;
		
		case -1366805830:
			return 4;
			break;
		
		case -35106439:
			return 4;
			break;
		
		case -755106907:
			return 4;
			break;
		
		case -1540088302:
			return 4;
			break;
		
		case 1430028328:
			return 4;
			break;
		
		case 1738417387:
			return 4;
			break;
		
		case 1503889590:
			return 4;
			break;
		
		case -2006138518:
			return 4;
			break;
		
		case -956023140:
			return 4;
			break;
		
		case -1260807609:
			return 4;
			break;
		
		case -478677117:
			return 4;
			break;
		
		case -780905604:
			return 4;
			break;
		
		case 193611687:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case -1050198361:
			return 11;
			break;
		
		case 310370535:
			return 11;
			break;
		
		case 813243601:
			return 11;
			break;
		
		case -2102935251:
			return 11;
			break;
		
		case -1824955824:
			return 11;
			break;
		
		case 1702659799:
			return 11;
			break;
		
		case -406353041:
			return 11;
			break;
		
		case -678972038:
			return 11;
			break;
		
		case -500118836:
			return 11;
			break;
		
		case 1648315111:
			return 11;
			break;
		
		case 302450756:
			return 11;
			break;
		
		case -621012433:
			return 11;
			break;
		
		case 782549375:
			return 11;
			break;
		
		case -614393091:
			return 11;
			break;
		
		case -317866410:
			return 11;
			break;
		
		case -140258430:
			return 11;
			break;
		
		case 158955309:
			return 11;
			break;
		
		case -1842902901:
			return 11;
			break;
		
		case -1537856280:
			return 11;
			break;
		
		case 395263187:
			return 11;
			break;
		
		case 1027463459:
			return 11;
			break;
		
		case 796868006:
			return 11;
			break;
		
		case 1467223439:
			return 11;
			break;
		
		case 1136256539:
			return 11;
			break;
		
		case 1979140757:
			return 11;
			break;
		
		case 1748283152:
			return 11;
			break;
		
		case -1870299219:
			return 11;
			break;
		
		case 2026328113:
			return 11;
			break;
		
		case -1561254780:
			return 11;
			break;
		
		case -1655957190:
			return 11;
			break;
		
		case 1722458367:
			return 11;
			break;
		
		case 1479345156:
			return 11;
			break;
		
		case -923877314:
			return 11;
			break;
		
		case -1063473254:
			return 11;
			break;
		
		case 1131787598:
			return 11;
			break;
		
		case 833098163:
			return 11;
			break;
		
		case 654376037:
			return 11;
			break;
		
		case -729113683:
			return 11;
			break;
		
		case -1100288150:
			return 11;
			break;
		
		case -1474837820:
			return 11;
			break;
		
		case 1910298191:
			return 11;
			break;
		
		case -1584941660:
			return 11;
			break;
		
		case 1391532152:
			return 11;
			break;
		
		case -1213586762:
			return 10;
			break;
		
		case -1375465622:
			return 10;
			break;
		
		case -611849615:
			return 10;
			break;
		
		case 1580494808:
			return 10;
			break;
		
		case 1274792807:
			return 10;
			break;
		
		case 1889735861:
			return 10;
			break;
		
		case -1638141914:
			return 10;
			break;
		
		case 594606670:
			return 10;
			break;
		
		case 316823857:
			return 10;
			break;
		
		case 938189639:
			return 10;
			break;
		
		case 1525574773:
			return 10;
			break;
		
		case -1159943084:
			return 10;
			break;
		
		case -1525055282:
			return 10;
			break;
		
		case 391046459:
			return 10;
			break;
		
		case 299162183:
			return 10;
			break;
		
		case -1849075154:
			return 10;
			break;
		
		case -2075345099:
			return 10;
			break;
		
		case 1853264777:
			return 10;
			break;
		
		case -926988263:
			return 10;
			break;
		
		case 183422195:
			return 10;
			break;
		
		case -1913829286:
			return 10;
			break;
		
		case -1051250899:
			return 10;
			break;
		
		case -1425472879:
			return 10;
			break;
		
		case 2081501044:
			return 7;
			break;
		
		case 1783335913:
			return 7;
			break;
		
		case -657135366:
			return 7;
			break;
		
		case -1074022584:
			return 7;
			break;
		
		case 2078277958:
			return 7;
			break;
		
		case -246682596:
			return 7;
			break;
		
		case 1447278094:
			return 7;
			break;
		
		case 1140658561:
			return 7;
			break;
		
		case -1160904923:
			return 7;
			break;
		
		case -1201085112:
			return 1;
			break;
		
		case 1645754536:
			return 1;
			break;
		
		case 1442375387:
			return 1;
			break;
		
		case 674401103:
			return 1;
			break;
		
		case -692164748:
			return 1;
			break;
		
		case -974010917:
			return 1;
			break;
		
		case 1401833895:
			return 1;
			break;
		
		case -2059653886:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -1132731797:
			return 12;
			break;
		
		case -1363589402:
			return 12;
			break;
		
		case 1629334444:
			return 12;
			break;
		
		case 1382026801:
			return 12;
			break;
		
		case 326865001:
			return 12;
			break;
		
		case -2052197172:
			return 12;
			break;
		
		case 278334108:
			return 12;
			break;
		
		case -2108264935:
			return 12;
			break;
		
		case 1143599553:
			return 12;
			break;
		
		case 904353084:
			return 12;
			break;
		
		case -238027808:
			return 12;
			break;
		
		case 721191542:
			return 10;
			break;
		
		case 1563125459:
			return 10;
			break;
		
		case -2011579213:
			return 10;
			break;
		
		case 1924108767:
			return 10;
			break;
		
		case -278754493:
			return 10;
			break;
		
		case 563376038:
			return 10;
			break;
		
		case 184369784:
			return 10;
			break;
		
		case 841619717:
			return 10;
			break;
		
		case 1164164984:
			return 10;
			break;
		
		case -1911729970:
			return 10;
			break;
		
		case -1599080941:
			return 10;
			break;
		
		case 2067639087:
			return 10;
			break;
		
		case -910964710:
			return 10;
			break;
		
		case -604410715:
			return 10;
			break;
		
		case -254743660:
			return 10;
			break;
		
		case -504148519:
			return 10;
			break;
		
		case -1729856159:
			return 10;
			break;
		
		case 531303152:
			return 10;
			break;
		
		case 1227263313:
			return 10;
			break;
		
		case 2046390006:
			return 10;
			break;
		
		case 465023604:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -940816108:
			return 12;
			break;
		
		case 1169179806:
			return 12;
			break;
		
		case 865509483:
			return 12;
			break;
		
		case 834051243:
			return 12;
			break;
		
		case -1588528162:
			return 12;
			break;
		
		case 886214272:
			return 1;
			break;
		
		case 1117334029:
			return 1;
			break;
		
		case 899033586:
			return 1;
			break;
		
		case -1294850964:
			return 1;
			break;
		
		case 89080485:
			return 1;
			break;
		
		case -257418921:
			return 1;
			break;
		
		case 966770862:
			return 1;
			break;
		
		case 1804706949:
			return 1;
			break;
		
		case 1830532154:
			return 1;
			break;
		
		case -1154756519:
			return 1;
			break;
		
		case 1816778629:
			return 1;
			break;
		
		case -1854365214:
			return 1;
			break;
		
		case 665775322:
			return 2;
			break;
		
		case 618391324:
			return 2;
			break;
		
		case 497473714:
			return 2;
			break;
		
		case 123808807:
			return 2;
			break;
		
		case -231538229:
			return 2;
			break;
		
		case -546263812:
			return 4;
			break;
		
		case -1955795127:
			return 6;
			break;
		
		case -412637383:
			return 6;
			break;
		
		case -173390914:
			return 6;
			break;
		
		case -980362568:
			return 11;
			break;
		
		case 2058630185:
			return 11;
			break;
		
		case 91818404:
			return 14;
			break;
		
		case -2059902376:
			return 14;
			break;
		
		case -47006053:
			return 14;
			break;
		
		case -761658907:
			return 14;
			break;
		
		case -1256469080:
			return 14;
			break;
		
		case -492656451:
			return 14;
			break;
		
		case 304369947:
			return 14;
			break;
		
		case 225804182:
			return 14;
			break;
		
		case 2043767315:
			return 14;
			break;
		
		case 2032023736:
			return 14;
			break;
		
		case 1781897959:
			return 14;
			break;
		
		case -1077066219:
			return 14;
			break;
		
		case -1347050010:
			return 14;
			break;
		
		case -1656225525:
			return 14;
			break;
		
		case 284813421:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -217662594:
			return 10;
			break;
		
		case -448716813:
			return 10;
			break;
		
		case 242905701:
			return 10;
			break;
		
		case 12310248:
			return 10;
			break;
		
		case -214909990:
			return 10;
			break;
		
		case -454090921:
			return 10;
			break;
		
		case 245658305:
			return 10;
			break;
		
		case 6936140:
			return 10;
			break;
		
		case -1672278496:
			return 10;
			break;
		
		case -2124036238:
			return 10;
			break;
		
		case 1983328533:
			return 10;
			break;
		
		case 1809980523:
			return 10;
			break;
		
		case 1215944091:
			return 10;
			break;
		
		case -123488800:
			return 10;
			break;
		
		case 788636331:
			return 10;
			break;
		
		case 624856869:
			return 10;
			break;
		
		case -1610644323:
			return 10;
			break;
		
		case -843030498:
			return 10;
			break;
		
		case 229236720:
			return 10;
			break;
		
		case -1055963128:
			return 10;
			break;
		
		case -1728251932:
			return 10;
			break;
		
		case 1723536225:
			return 10;
			break;
		
		case 998489331:
			return 10;
			break;
		
		case -1966744714:
			return 10;
			break;
		
		case -1546351257:
			return 10;
			break;
		
		case -773166702:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 847696581:
			return 1;
			break;
		
		case -1251988177:
			return 14;
			break;
		
		case 308395095:
			return 12;
			break;
		
		case 1654631855:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1734014907:
			return 1;
			break;
		
		case 113828983:
			return 1;
			break;
		
		case -836701380:
			return 1;
			break;
		
		case -1428116292:
			return 1;
			break;
		
		case 2097107194:
			return 1;
			break;
		
		case 639725155:
			return 1;
			break;
		
		case 386289709:
			return 1;
			break;
		
		case 1249982250:
			return 1;
			break;
		
		case 924815463:
			return 1;
			break;
		
		case 1775924700:
			return 1;
			break;
		
		case 1936268068:
			return 1;
			break;
		
		case -364214045:
			return 14;
			break;
		
		case 26785663:
			return 14;
			break;
		
		case 1338954730:
			return 14;
			break;
		
		case -45601014:
			return 14;
			break;
		
		case 1267944351:
			return 14;
			break;
		
		case 1547778595:
			return 4;
			break;
		
		case 1855119046:
			return 4;
			break;
		
		case 1951099447:
			return 4;
			break;
		
		case -2086074062:
			return 4;
			break;
		
		case -1855052612:
			return 4;
			break;
		
		case 536908682:
			return 11;
			break;
		
		case 878427200:
			return 11;
			break;
		
		case 58579589:
			return 11;
			break;
		
		case -641890555:
			return 11;
			break;
		
		case -384358984:
			return 11;
			break;
		
		case 2014785516:
			return 3;
			break;
		
		case 1634992806:
			return 3;
			break;
		
		case -1508078610:
			return 3;
			break;
		
		case -1755189639:
			return 3;
			break;
		
		case -2107128699:
			return 3;
			break;
		
		case -1287626472:
			return 3;
			break;
		
		case 1380622126:
			return 3;
			break;
		
		case 1612462801:
			return 3;
			break;
		
		case 1790857237:
			return 3;
			break;
		
		case 2090529742:
			return 3;
			break;
		
		case -308456130:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -2133691498:
			return 11;
			break;
		
		case -1904701726:
			return 11;
			break;
		
		case -247049088:
			return 11;
			break;
		
		case -545946476:
			return 11;
			break;
		
		case -1239436823:
			return 11;
			break;
		
		case 124900492:
			return 11;
			break;
		
		case -635799074:
			return 11;
			break;
		
		case -642991077:
			return 7;
			break;
		
		case -350265600:
			return 7;
			break;
		
		case 829385631:
			return 7;
			break;
		
		case -1095006663:
			return 7;
			break;
		
		case 2031481813:
			return 4;
			break;
		
		case 1849876015:
			return 4;
			break;
		
		case 1551907498:
			return 4;
			break;
		
		case -82151464:
			return 4;
			break;
		
		case -437837804:
			return 14;
			break;
		
		case 1766500061:
			return 14;
			break;
		
		case -1827866015:
			return 14;
			break;
		
		case -2100667940:
			return 14;
			break;
		
		case 881016139:
			return 14;
			break;
		
		case -892409352:
			return 14;
			break;
		
		case -1138996077:
			return 14;
			break;
		
		case 1733141239:
			return 14;
			break;
		
		case 1637077634:
			return 14;
			break;
		
		case 1303548099:
			return 14;
			break;
		
		case 1668791373:
			return 14;
			break;
		
		case -364033542:
			return 14;
			break;
		
		case -81171534:
			return 14;
			break;
		
		case -363152649:
			return 14;
			break;
		
		case -65511822:
			return 14;
			break;
		
		case 114652140:
			return 14;
			break;
		
		case -1735714983:
			return 14;
			break;
		
		case -43227451:
			return 14;
			break;
		
		case -328678210:
			return 14;
			break;
		
		case -1709268949:
			return 14;
			break;
		
		case 433299351:
			return 14;
			break;
		
		case 1200716562:
			return 14;
			break;
		
		case 880825584:
			return 14;
			break;
		
		case -473681035:
			return 14;
			break;
		
		case 1586964765:
			return 14;
			break;
		
		case 1295853300:
			return 14;
			break;
		
		case 539872466:
			return 14;
			break;
		
		case 778332479:
			return 14;
			break;
		
		case -1976164127:
			return 14;
			break;
		
		case 1615318277:
			return 14;
			break;
		
		case 1873439690:
			return 14;
			break;
		
		case 1140003932:
			return 14;
			break;
		
		case -981624973:
			return 14;
			break;
		
		case 1510649655:
			return 1;
			break;
		
		case -504783688:
			return 1;
			break;
		
		case -706446153:
			return 1;
			break;
		
		case -823799608:
			return 1;
			break;
		
		case -463668298:
			return 1;
			break;
		
		case -1614908818:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 2134049184:
		case 513852309:
		case 342339363:
		case -655247304:
		case 799565220:
		case -715443961:
		case -905176471:
		case -121210915:
		case -426585226:
		case -1823527696:
		case -1899487013:
		case 613041245:
		case -149165695:
		case -923398858:
		case -1017249282:
		case -726555483:
		case -372257055:
		case -114397794:
		case -1101989916:
		case -1749374280:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -893708693:
		case -660753872:
		case -1412999036:
		case -1121780933:
		case -2121038819:
		case -1880350514:
		case 1724501642:
		case 1953982949:
		case 1100809265:
		case 1341235418:
		case 202917910:
		case 509799595:
		case 797675260:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1485373828:
		case -71251979:
		case 235269247:
		case 517180954:
		case 756099733:
		case -1329647121:
		case -975545307:
		case -721683864:
		case -356899352:
		case -1253393710:
			return 14;
			break;
	}
	return 0;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 486993462:
			return 14;
			break;
		
		case 189352635:
			return 14;
			break;
		
		case -1182161091:
			return 14;
			break;
		
		case -1480391760:
			return 14;
			break;
		
		case -1830200827:
			return 14;
			break;
		
		case -1523384680:
			return 14;
			break;
		
		case 796726062:
			return 14;
			break;
		
		case -1390344430:
			return 14;
			break;
		
		case -1151360113:
			return 14;
			break;
		
		case 999105508:
			return 14;
			break;
		
		case 397007906:
			return 14;
			break;
		
		case 642611561:
			return 14;
			break;
		
		case -191425027:
			return 14;
			break;
		
		case -694980209:
			return 14;
			break;
		
		case -1024767425:
			return 14;
			break;
		
		case 1965043370:
			return 14;
			break;
		
		case 1699057397:
			return 14;
			break;
		
		case -1887181967:
			return 14;
			break;
		
		case 2144355338:
			return 14;
			break;
		
		case 707172536:
			return 14;
			break;
		
		case 1455550958:
			return 14;
			break;
		
		case -977225367:
			return 6;
			break;
		
		case -1805298001:
			return 6;
			break;
		
		case 268389861:
			return 6;
			break;
		
		case 494397654:
			return 6;
			break;
		
		case -343046910:
			return 6;
			break;
		
		case -103603827:
			return 6;
			break;
		
		case 1821607632:
			return 6;
			break;
		
		case -1705680301:
			return 6;
			break;
		
		case -1993162738:
			return 6;
			break;
		
		case -1090114632:
			return 6;
			break;
		
		case -197638367:
			return 6;
			break;
		
		case 124743055:
			return 6;
			break;
		
		case 1896979820:
			return 4;
			break;
		
		case 2060234978:
			return 4;
			break;
		
		case -2086255979:
			return 4;
			break;
		
		case -1788156386:
			return 4;
			break;
		
		case -1235015618:
			return 4;
			break;
		
		case 144264361:
			return 4;
			break;
		
		case -876227837:
			return 4;
			break;
		
		case -570132608:
			return 4;
			break;
		
		case 1602976392:
			return 4;
			break;
		
		case 828808767:
			return 4;
			break;
		
		case -728462463:
			return 4;
			break;
		
		case -430231794:
			return 4;
			break;
		
		case -1226152127:
			return 4;
			break;
		
		case 1152058052:
			return 4;
			break;
		
		case -94540254:
			return 4;
			break;
		
		case -2004940185:
			return 4;
			break;
		
		case -711547755:
			return 4;
			break;
		
		case -455851248:
			return 4;
			break;
		
		case 1111162332:
			return 4;
			break;
		
		case -814704567:
			return 4;
			break;
		
		case 144607908:
			return 4;
			break;
		
		case 736088358:
			return 4;
			break;
		
		case 457119630:
			return 4;
			break;
		
		case 528311952:
			return 4;
			break;
		
		case -1396702953:
			return 4;
			break;
		
		case -129263571:
			return 4;
			break;
		
		case 253609425:
			return 4;
			break;
		
		case 1542676347:
			return 4;
			break;
		
		case 1789918452:
			return 4;
			break;
		
		case 826739235:
			return 4;
			break;
		
		case 1208694699:
			return 4;
			break;
		
		case -1936703316:
			return 4;
			break;
		
		case -1546948830:
			return 4;
			break;
		
		case -252443194:
			return 4;
			break;
		
		case 525329021:
			return 4;
			break;
		
		case -1258006552:
			return 11;
			break;
		
		case -1030491385:
			return 11;
			break;
		
		case -815723359:
			return 11;
			break;
		
		case -299353676:
			return 11;
			break;
		
		case -537748151:
			return 11;
			break;
		
		case -997562751:
			return 11;
			break;
		
		case -1101964785:
			return 11;
			break;
		
		case -1485394854:
			return 11;
			break;
		
		case -1825274922:
			return 11;
			break;
		
		case -34349256:
			return 11;
			break;
		
		case 108720198:
			return 11;
			break;
		
		case -648473085:
			return 11;
			break;
		
		case -1282487697:
			return 11;
			break;
		
		case -976195854:
			return 11;
			break;
		
		case 500984819:
			return 11;
			break;
		
		case 798691188:
			return 11;
			break;
		
		case -1581452414:
			return 11;
			break;
		
		case -1635940622:
			return 11;
			break;
		
		case 1762139144:
			return 11;
			break;
		
		case -1126644824:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 561311877:
			return 14;
			break;
		
		case 308171352:
			return 14;
			break;
		
		case 1176091086:
			return 14;
			break;
		
		case 921443187:
			return 14;
			break;
		
		case 1286489847:
			return 14;
			break;
		
		case 2060854098:
			return 14;
			break;
		
		case 1897598940:
			return 14;
			break;
		
		case -1639847383:
			return 14;
			break;
		
		case -1015537418:
			return 14;
			break;
		
		case -1255439267:
			return 14;
			break;
		
		case 894174372:
			return 14;
			break;
		
		case 1736141058:
			return 14;
			break;
		
		case 1513737855:
			return 14;
			break;
		
		case 208745191:
			return 14;
			break;
		
		case 1555354389:
			return 14;
			break;
		
		case 1364966499:
			return 14;
			break;
		
		case -809940015:
			return 6;
			break;
		
		case -497061603:
			return 6;
			break;
		
		case -1206575991:
			return 6;
			break;
		
		case -923681214:
			return 6;
			break;
		
		case -1771841241:
			return 6;
			break;
		
		case 1837336423:
			return 6;
			break;
		
		case 2068652794:
			return 6;
			break;
		
		case 1874201544:
			return 6;
			break;
		
		case -2114637754:
			return 6;
			break;
		
		case 1482939680:
			return 6;
			break;
		
		case -487010550:
			return 6;
			break;
		
		case -2059463784:
			return 6;
			break;
		
		case -13875918:
			return 6;
			break;
		
		case 227729919:
			return 6;
			break;
		
		case -1625520876:
			return 6;
			break;
		
		case -1326012216:
			return 6;
			break;
		
		case -1026929553:
			return 6;
			break;
		
		case 1752733645:
			return 6;
			break;
		
		case 2051390311:
			return 6;
			break;
		
		case -1960092366:
			return 6;
			break;
		
		case -1916706210:
			return 6;
			break;
		
		case -1430873032:
			return 6;
			break;
		
		case -1901909501:
			return 6;
			break;
		
		case 1635471284:
			return 6;
			break;
		
		case 1791524240:
			return 4;
			break;
		
		case 534833082:
			return 4;
			break;
		
		case 227296017:
			return 4;
			break;
		
		case 860393105:
			return 4;
			break;
		
		case -1590433178:
			return 4;
			break;
		
		case 1456756136:
			return 4;
			break;
		
		case 1163506355:
			return 4;
			break;
		
		case 1861649900:
			return 4;
			break;
		
		case -591994517:
			return 4;
			break;
		
		case -1840493417:
			return 4;
			break;
		
		case -952392951:
			return 4;
			break;
		
		case -1123971435:
			return 4;
			break;
		
		case -354522546:
			return 4;
			break;
		
		case 260830436:
			return 4;
			break;
		
		case 21878888:
			return 4;
			break;
		
		case 1578734070:
			return 4;
			break;
		
		case -1873775005:
			return 4;
			break;
		
		case -1171731937:
			return 4;
			break;
		
		case 1825288026:
			return 4;
			break;
		
		case 685385604:
			return 4;
			break;
		
		case 446958360:
			return 4;
			break;
		
		case 1633228929:
			return 4;
			break;
		
		case -1823277964:
			return 4;
			break;
		
		case 877316879:
			return 4;
			break;
		
		case 1161161957:
			return 4;
			break;
		
		case 259228001:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case 2118720551:
			return 7;
			break;
		
		case -1877819462:
			return 7;
			break;
		
		case -356223708:
			return 7;
			break;
		
		case -116715087:
			return 7;
			break;
		
		case -951013827:
			return 7;
			break;
		
		case -712095048:
			return 7;
			break;
		
		case 805011345:
			return 7;
			break;
		
		case 1027938852:
			return 7;
			break;
		
		case 142061706:
			return 7;
			break;
		
		case 431641359:
			return 7;
			break;
		
		case -291513083:
			return 7;
			break;
		
		case 15729061:
			return 7;
			break;
		
		case 1536898810:
			return 7;
			break;
		
		case -1869739104:
			return 7;
			break;
		
		case -1049498265:
			return 7;
			break;
		
		case -1422147333:
			return 7;
			break;
		
		case 1535091072:
			return 7;
			break;
		
		case 1297483053:
			return 7;
			break;
		
		case -1975746823:
			return 7;
			break;
		
		case 1942639125:
			return 7;
			break;
		
		case 1884703593:
			return 7;
			break;
		
		case 548351004:
			return 7;
			break;
		
		case 197263938:
			return 7;
			break;
		
		case 844756076:
			return 7;
			break;
		
		case 1686264000:
			return 7;
			break;
		
		case 1372926822:
			return 7;
			break;
		
		case -180454858:
			return 7;
			break;
		
		case -409870627:
			return 7;
			break;
		
		case -1502121690:
			return 7;
			break;
		
		case 2022085957:
			return 7;
			break;
		
		case 1168977803:
			return 7;
			break;
		
		case -1760308641:
			return 7;
			break;
		
		case -1000919847:
			return 7;
			break;
		
		case 382456257:
			return 7;
			break;
		
		case -474322017:
			return 7;
			break;
		
		case -1302427416:
			return 7;
			break;
		
		case 218545719:
			return 7;
			break;
		
		case 1608868851:
			return 7;
			break;
		
		case 1906555586:
			return 7;
			break;
		
		case 1475381084:
			return 7;
			break;
		
		case -1927319111:
			return 7;
			break;
		
		case 1325870356:
			return 14;
			break;
		
		case 2035450282:
			return 14;
			break;
		
		case 1793385679:
			return 14;
			break;
		
		case 383794371:
			return 14;
			break;
		
		case 1031326785:
			return 11;
			break;
		
		case -1490739308:
			return 11;
			break;
		
		case -1259881703:
			return 11;
			break;
		
		case -2099751169:
			return 11;
			break;
		
		case 503286566:
			return 11;
			break;
		
		case 716809370:
			return 11;
			break;
		
		case -2125934133:
			return 11;
			break;
		
		case -1635251127:
			return 11;
			break;
		
		case 1692080368:
			return 11;
			break;
		
		case 1915302796:
			return 11;
			break;
		
		case -1085813324:
			return 11;
			break;
		
		case -874912040:
			return 11;
			break;
		
		case -1852444079:
			return 11;
			break;
		
		case -1335939101:
			return 11;
			break;
		
		case 1659434315:
			return 11;
			break;
		
		case 1401902744:
			return 11;
			break;
		
		case 1181826140:
			return 11;
			break;
		
		case -1698687156:
			return 11;
			break;
		
		case -1014077208:
			return 11;
			break;
		
		case -1252733835:
			return 11;
			break;
		
		case -1616535281:
			return 11;
			break;
		
		case -1846606430:
			return 11;
			break;
		
		case -634120661:
			return 11;
			break;
		
		case -863110433:
			return 11;
			break;
		
		case -153497738:
			return 11;
			break;
		
		case -416894960:
			return 11;
			break;
		
		case 293438653:
			return 11;
			break;
		
		case 792147216:
			return 11;
			break;
		
		case -1990858420:
			return 11;
			break;
		
		case -1013457453:
			return 11;
			break;
		
		case -1379880411:
			return 11;
			break;
		
		case 1477215930:
			return 11;
			break;
		
		case -765756582:
			return 11;
			break;
		
		case -326946903:
			return 11;
			break;
		
		case -692452329:
			return 11;
			break;
		
		case 157837683:
			return 11;
			break;
		
		case -76100208:
			return 11;
			break;
		
		case 2120599946:
			return 11;
			break;
		
		case -919019741:
			return 11;
			break;
		
		case -746654801:
			return 11;
			break;
		
		case 1779802346:
			return 11;
			break;
		
		case 1004520575:
			return 11;
			break;
		
		case -1904645711:
			return 11;
			break;
		
		case 1614449972:
			return 11;
			break;
		
		case -638287710:
			return 11;
			break;
		
		case -339532737:
			return 11;
			break;
		
		case -23049735:
			return 11;
			break;
		
		case 706090398:
			return 11;
			break;
		
		case 87870444:
			return 11;
			break;
		
		case -149803113:
			return 11;
			break;
		
		case -1548133220:
			return 11;
			break;
		
		case -125893074:
			return 11;
			break;
		
		case 655287117:
			return 11;
			break;
		
		case 1845227814:
			return 11;
			break;
		
		case 177416790:
			return 11;
			break;
		
		case 1612109136:
			return 11;
			break;
		
		case 241414635:
			return 11;
			break;
		
		case 1134173271:
			return 11;
			break;
		
		case 1910438112:
			return 11;
			break;
		
		case -949967902:
			return 11;
			break;
		
		case -1360546088:
			return 11;
			break;
		
		case 166096092:
			return 11;
			break;
		
		case -140457903:
			return 11;
			break;
		
		case -432298617:
			return 11;
			break;
		
		case -738393846:
			return 11;
			break;
		
		case 1384775202:
			return 11;
			break;
		
		case -77078531:
			return 11;
			break;
		
		case -402835160:
			return 11;
			break;
		
		case -710142842:
			return 11;
			break;
		
		case -1869599805:
			return 11;
			break;
		
		case -1644607851:
			return 11;
			break;
		
		case -1321505511:
			return 11;
			break;
		
		case -386390000:
			return 12;
			break;
		
		case -136165916:
			return 12;
			break;
		
		case 108389131:
			return 12;
			break;
		
		case -1287242583:
			return 12;
			break;
		
		case 839105062:
			return 12;
			break;
		
		case 1085921170:
			return 12;
			break;
		
		case 1267723582:
			return 12;
			break;
		
		case -598896965:
			return 12;
			break;
		
		case 1531514028:
			return 12;
			break;
		
		case 1785965313:
			return 12;
			break;
		
		case 1344121348:
			return 12;
			break;
		
		case 1114574503:
			return 12;
			break;
		
		case -1314689774:
			return 12;
			break;
		
		case -1544466002:
			return 12;
			break;
		
		case 58757327:
			return 12;
			break;
		
		case 1992292172:
			return 12;
			break;
		
		case 1761205184:
			return 12;
			break;
		
		case 1517633207:
			return 12;
			break;
		
		case -1098447143:
			return 12;
			break;
		
		case 776922731:
			return 12;
			break;
		
		case -719832:
			return 12;
			break;
		
		case 797959005:
			return 12;
			break;
		
		case -1399136911:
			return 12;
			break;
		
		case 1512814740:
			return 12;
			break;
		
		case 1257576999:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case 2031552901:
			return 4;
			break;
		
		case -1980519618:
			return 4;
			break;
		
		case -1702736805:
			return 4;
			break;
		
		case -1520999931:
			return 4;
			break;
		
		case 934020784:
			return 4;
			break;
		
		case 1401699952:
			return 4;
			break;
		
		case 1664540101:
			return 4;
			break;
		
		case -1953908887:
			return 4;
			break;
		
		case -1739370244:
			return 4;
			break;
		
		case 600762357:
			return 4;
			break;
		
		case 828146448:
			return 4;
			break;
		
		case 1196666622:
			return 4;
			break;
		
		case 1426737771:
			return 4;
			break;
		
		case -732575492:
			return 4;
			break;
		
		case -243477427:
			return 11;
			break;
		
		case -1466449280:
			return 11;
			break;
		
		case -1091702996:
			return 11;
			break;
		
		case -1806427655:
			return 11;
			break;
		
		case -1734139241:
			return 11;
			break;
		
		case 1878937934:
			return 11;
			break;
		
		case -2042593838:
			return 11;
			break;
		
		case 1597943763:
			return 11;
			break;
		
		case -1407107490:
			return 11;
			break;
		
		case -542857884:
			return 11;
			break;
		
		case -309182145:
			return 11;
			break;
		
		case 1189835760:
			return 11;
			break;
		
		case -788232156:
			return 11;
			break;
		
		case 681064266:
			return 11;
			break;
		
		case 914871081:
			return 11;
			break;
		
		case -1950974587:
			return 11;
			break;
		
		case 1592736846:
			return 11;
			break;
		
		case 1889853369:
			return 11;
			break;
		
		case 2052256533:
			return 11;
			break;
		
		case -1946184082:
			return 11;
			break;
		
		case -1782535696:
			return 11;
			break;
		
		case -1485550249:
			return 11;
			break;
		
		case -1323409237:
			return 11;
			break;
		
		case -1025178568:
			return 11;
			break;
		
		case -630273677:
			return 11;
			break;
		
		case -1543119706:
			return 11;
			break;
		
		case -1354763494:
			return 11;
			break;
		
		case -1726986569:
			return 11;
			break;
		
		case -1295418839:
			return 11;
			break;
		
		case 1021316696:
			return 11;
			break;
		
		case 1212556580:
			return 11;
			break;
		
		case 1509247106:
			return 11;
			break;
		
		case -1657253557:
			return 11;
			break;
		
		case 196750925:
			return 11;
			break;
		
		case -99841294:
			return 11;
			break;
		
		case 1749378918:
			return 11;
			break;
		
		case 1438433877:
			return 11;
			break;
		
		case -1834468333:
			return 11;
			break;
		
		case -2131978084:
			return 11;
			break;
		
		case -1172875993:
			return 12;
			break;
		
		case -933695062:
			return 12;
			break;
		
		case -1650353092:
			return 12;
			break;
		
		case -1411630927:
			return 12;
			break;
		
		case -1445514097:
			return 12;
			break;
		
		case -1214984182:
			return 12;
			break;
		
		case -1907262076:
			return 12;
			break;
		
		case -1462772454:
			return 12;
			break;
		
		case -1676142319:
			return 12;
			break;
		
		case 1613734209:
			return 12;
			break;
		
		case 1896432372:
			return 12;
			break;
		
		case -1785709773:
			return 12;
			break;
		
		case -1478893626:
			return 12;
			break;
		
		case -1234338579:
			return 12;
			break;
		
		case -919559537:
			return 12;
			break;
		
		case -1279986972:
			return 12;
			break;
		
		case -656588312:
			return 12;
			break;
		
		case -359406251:
			return 12;
			break;
		
		case -30339953:
			return 12;
			break;
		
		case 276443425:
			return 12;
			break;
		
		case 598005622:
			return 12;
			break;
		
		case 871823386:
			return 12;
			break;
		
		case 2047673121:
			return 12;
			break;
		
		case -723961716:
			return 12;
			break;
		
		case 1826089143:
			return 12;
			break;
		
		case 1576094442:
			return 12;
			break;
		
		case 1336979049:
			return 12;
			break;
		
		case 859010411:
			return 12;
			break;
		
		case 636508901:
			return 12;
			break;
		
		case 378911792:
			return 12;
			break;
		
		case -116031184:
			return 12;
			break;
		
		case -425731047:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -1774741831:
			return 6;
			break;
		
		case -1753769663:
			return 6;
			break;
		
		case 300340729:
			return 6;
			break;
		
		case -600988309:
			return 4;
			break;
		
		case -473418560:
			return 4;
			break;
		
		case -1240671930:
			return 4;
			break;
		
		case -262746659:
			return 4;
			break;
		
		case 927062347:
			return 4;
			break;
		
		case 552167585:
			return 7;
			break;
		
		case 252069083:
			return 7;
			break;
		
		case -54026146:
			return 7;
			break;
		
		case -573775267:
			return 7;
			break;
		
		case -603463981:
			return 7;
			break;
		
		case -419448319:
			return 11;
			break;
		
		case -1629902406:
			return 11;
			break;
		
		case -1937865468:
			return 11;
			break;
		
		case -2086276269:
			return 11;
			break;
		
		case 37156373:
			return 11;
			break;
		
		case -747792253:
			return 11;
			break;
		
		case -424460530:
			return 11;
			break;
		
		case 671334830:
			return 11;
			break;
		
		case 332564624:
			return 11;
			break;
		
		case 574334306:
			return 11;
			break;
		
		case -353978695:
			return 11;
			break;
		
		case -2030332425:
			return 11;
			break;
		
		case -1756547430:
			return 11;
			break;
		
		case -1927044541:
			return 11;
			break;
		
		case -1619704090:
			return 11;
			break;
		
		case -1309381660:
			return 11;
			break;
		
		case -842955051:
			return 11;
			break;
		
		case 1833387494:
			return 11;
			break;
		
		case 452927827:
			return 11;
			break;
		
		case 279579817:
			return 11;
			break;
		
		case 1047259180:
			return 11;
			break;
		
		case 143053800:
			return 14;
			break;
		
		case 919711869:
			return 14;
			break;
		
		case -317580033:
			return 14;
			break;
		
		case -1492269212:
			return 1;
			break;
		
		case -1588806686:
			return 1;
			break;
		
		case 1133772914:
			return 1;
			break;
		
		case -633960003:
			return 1;
			break;
		
		case 208432680:
			return 1;
			break;
		
		case 1306456332:
			return 1;
			break;
		
		case 574660259:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 787219564:
			return 11;
			break;
		
		case 1446861130:
			return 11;
			break;
		
		case 1677423814:
			return 11;
			break;
		
		case 1629963538:
			return 11;
			break;
		
		case -1002763460:
			return 11;
			break;
		
		case -696930383:
			return 11;
			break;
		
		case -1530409898:
			return 11;
			break;
		
		case -2029612844:
			return 11;
			break;
		
		case 155391307:
			return 11;
			break;
		
		case 461453767:
			return 11;
			break;
		
		case 2144364744:
			return 11;
			break;
		
		case 1849574820:
			return 11;
			break;
		
		case 1543872819:
			return 11;
			break;
		
		case 1522179741:
			return 11;
			break;
		
		case -918553690:
			return 11;
			break;
		
		case -1232480710:
			return 11;
			break;
		
		case 324282147:
			return 11;
			break;
		
		case -324478539:
			return 11;
			break;
		
		case 40305969:
			return 11;
			break;
		
		case -835412575:
			return 11;
			break;
		
		case -562348498:
			return 11;
			break;
		
		case -506444584:
			return 11;
			break;
		
		case -205952854:
			return 11;
			break;
		
		case 63178943:
			return 11;
			break;
		
		case 829580944:
			return 11;
			break;
		
		case -474494180:
			return 11;
			break;
		
		case -388756986:
			return 11;
			break;
		
		case -20040198:
			return 11;
			break;
		
		case 425291872:
			return 11;
			break;
		
		case -344681321:
			return 11;
			break;
		
		case -121262279:
			return 11;
			break;
		
		case -849586073:
			return 11;
			break;
		
		case -1249117468:
			return 11;
			break;
		
		case 1408690849:
			return 4;
			break;
		
		case 1169444380:
			return 4;
			break;
		
		case 1544354513:
			return 4;
			break;
		
		case 1305108044:
			return 4;
			break;
		
		case 2098740455:
			return 4;
			break;
		
		case 1784289131:
			return 4;
			break;
		
		case -1717373444:
			return 4;
			break;
		
		case -1295243186:
			return 4;
			break;
		
		case -1509978443:
			return 4;
			break;
		
		case -818028239:
			return 4;
			break;
		
		case 1579855243:
			return 4;
			break;
		
		case -2096957641:
			return 4;
			break;
		
		case -557477635:
			return 4;
			break;
		
		case 1281387533:
			return 4;
			break;
		
		case 379977881:
			return 4;
			break;
		
		case 1641551616:
			return 4;
			break;
		
		case 1008388994:
			return 4;
			break;
		
		case 365625059:
			return 4;
			break;
		
		case -536046745:
			return 4;
			break;
		
		case 659464682:
			return 4;
			break;
		
		case 60250748:
			return 4;
			break;
		
		case -1757773384:
			return 4;
			break;
		
		case -1284137737:
			return 4;
			break;
		
		case -1767546029:
			return 4;
			break;
		
		case 1792743147:
			return 4;
			break;
		
		case 1486647918:
			return 4;
			break;
		
		case -1916019508:
			return 4;
			break;
		
		case 2097822537:
			return 4;
			break;
		
		case -1573354075:
			return 4;
			break;
		
		case -1886527408:
			return 4;
			break;
		
		case -992785702:
			return 4;
			break;
		
		case -1273648801:
			return 4;
			break;
		
		case -1012381560:
			return 4;
			break;
		
		case -1293277428:
			return 4;
			break;
		
		case -353019771:
			return 4;
			break;
		
		case 484195410:
			return 4;
			break;
		
		case -961474563:
			return 4;
			break;
		
		case -268016985:
			return 4;
			break;
		
		case -1215270468:
			return 4;
			break;
		
		case -1456220925:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case -279906965:
			return 6;
			break;
		
		case -580562540:
			return 6;
			break;
		
		case -1176106346:
			return 6;
			break;
		
		case 679864276:
			return 6;
			break;
		
		case 583588954:
			return 6;
			break;
		
		case 286406893:
			return 6;
			break;
		
		case 17537248:
			return 6;
			break;
		
		case 1824780371:
			return 6;
			break;
		
		case 1585533902:
			return 6;
			break;
		
		case 1010896718:
			return 6;
			break;
		
		case -1768702692:
			return 6;
			break;
		
		case -1468210962:
			return 6;
			break;
		
		case -1673064831:
			return 6;
			break;
		
		case -1439716782:
			return 6;
			break;
		
		case -122402970:
			return 6;
			break;
		
		case 116253657:
			return 6;
			break;
		
		case 1673895295:
			return 6;
			break;
		
		case 1897412644:
			return 6;
			break;
		
		case -1103179152:
			return 6;
			break;
		
		case -846302961:
			return 6;
			break;
		
		case 718810029:
			return 6;
			break;
		
		case 2022950695:
			return 6;
			break;
		
		case -1574629874:
			return 6;
			break;
		
		case -1310151275:
			return 6;
			break;
		
		case -1600648456:
			return 6;
			break;
		
		case -1371593146:
			return 6;
			break;
		
		case -1123171357:
			return 6;
			break;
		
		case 1766661215:
			return 6;
			break;
		
		case 1139336374:
			return 7;
			break;
		
		case 875578693:
			return 7;
			break;
		
		case 1730325313:
			return 7;
			break;
		
		case 1481182606:
			return 7;
			break;
		
		case 2039500828:
			return 7;
			break;
		
		case -1959267497:
			return 7;
			break;
		
		case 1960625225:
			return 14;
			break;
		
		case 811809615:
			return 14;
			break;
		
		case 52093119:
			return 14;
			break;
		
		case -187939806:
			return 14;
			break;
		
		case -20173275:
			return 14;
			break;
		
		case -327317112:
			return 14;
			break;
		
		case -766683864:
			return 14;
			break;
		
		case 1342754977:
			return 14;
			break;
		
		case 1171373107:
			return 14;
			break;
		
		case 732334045:
			return 14;
			break;
		
		case 424076058:
			return 14;
			break;
		
		case -1683855405:
			return 14;
			break;
		
		case 1511098074:
			return 14;
			break;
		
		case -1725856511:
			return 14;
			break;
		
		case -740492681:
			return 14;
			break;
		
		case -995140580:
			return 14;
			break;
		
		case -286412648:
			return 14;
			break;
		
		case 205384504:
			return 14;
			break;
		
		case -26980475:
			return 14;
			break;
		
		case 671064767:
			return 14;
			break;
		
		case -1677060726:
			return 14;
			break;
		
		case -1229305110:
			return 14;
			break;
		
		case 2034552832:
			return 14;
			break;
		
		case -1406224941:
			return 14;
			break;
		
		case 1425180508:
			return 14;
			break;
		
		case -1883177736:
			return 14;
			break;
		
		case -1402597262:
			return 14;
			break;
		
		case 538539991:
			return 14;
			break;
		
		case 165366619:
			return 14;
			break;
		
		case 1757514026:
			return 14;
			break;
		
		case -707828904:
			return 14;
			break;
		
		case -990527067:
			return 14;
			break;
		
		case -1238096862:
			return 14;
			break;
		
		case 838474652:
			return 14;
			break;
		
		case -1190920460:
			return 14;
			break;
		
		case -335321858:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -1157702415:
			return 10;
			break;
		
		case 85815597:
			return 10;
			break;
		
		case -1754589750:
			return 10;
			break;
		
		case 332598944:
			return 10;
			break;
		
		case -2120914397:
			return 10;
			break;
		
		case 1857766511:
			return 10;
			break;
		
		case 1584374744:
			return 10;
			break;
		
		case 1527684374:
			return 10;
			break;
		
		case -915998259:
			return 10;
			break;
		
		case -1229400975:
			return 10;
			break;
		
		case -182260974:
			return 10;
			break;
		
		case 67406037:
			return 10;
			break;
		
		case 1536178155:
			return 10;
			break;
		
		case 1767297912:
			return 10;
			break;
		
		case 1054637700:
			return 10;
			break;
		
		case 1288444515:
			return 10;
			break;
		
		case -1522447504:
			return 10;
			break;
		
		case -1752780805:
			return 10;
			break;
		
		case -1061879209:
			return 10;
			break;
		
		case -1293326656:
			return 10;
			break;
		
		case 2117040061:
			return 10;
			break;
		
		case 1810420528:
			return 10;
			break;
		
		case -1462809348:
			return 10;
			break;
		
		case 573181452:
			return 1;
			break;
		
		case -1871025493:
			return 1;
			break;
		
		case 401083057:
			return 1;
			break;
		
		case -1258011389:
			return 1;
			break;
		
		case -1520420552:
			return 1;
			break;
		
		case 2072700298:
			return 1;
			break;
		
		case 694163672:
			return 1;
			break;
		
		case -1693156289:
			return 1;
			break;
		
		case -2049322280:
			return 12;
			break;
		
		case 127817315:
			return 12;
			break;
		
		case -112182841:
			return 12;
			break;
		
		case -351625924:
			return 12;
			break;
		
		case 1287807146:
			return 12;
			break;
		
		case -95437878:
			return 12;
			break;
		
		case 130143918:
			return 12;
			break;
		
		case 354513261:
			return 12;
			break;
		
		case -1280201073:
			return 12;
			break;
		
		case 814557252:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case 1450518601:
			return 10;
			break;
		
		case 2141256344:
			return 10;
			break;
		
		case 1658831126:
			return 10;
			break;
		
		case 1629732254:
			return 10;
			break;
		
		case 1322653955:
			return 10;
			break;
		
		case 919562486:
			return 10;
			break;
		
		case -586304140:
			return 10;
			break;
		
		case -1923085975:
			return 10;
			break;
		
		case 2139123114:
			return 10;
			break;
		
		case 865261012:
			return 10;
			break;
		
		case 603600547:
			return 10;
			break;
		
		case 1448778591:
			return 10;
			break;
		
		case 1207107220:
			return 10;
			break;
		
		case 1601088919:
			return 10;
			break;
		
		case 1831553296:
			return 10;
			break;
		
		case 977199932:
			return 10;
			break;
		
		case 1225425103:
			return 10;
			break;
		
		case -1494041810:
			return 10;
			break;
		
		case -254743660:
			return 10;
			break;
		
		case -504148519:
			return 10;
			break;
		
		case -1729856159:
			return 10;
			break;
		
		case 531303152:
			return 10;
			break;
		
		case 1227263313:
			return 10;
			break;
		
		case 2046390006:
			return 10;
			break;
		
		case 465023604:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -121376886:
			return 12;
			break;
		
		case -843245187:
			return 12;
			break;
		
		case -612748041:
			return 12;
			break;
		
		case 570901008:
			return 12;
			break;
		
		case 1304402304:
			return 12;
			break;
		
		case 1599918539:
			return 1;
			break;
		
		case -1859144336:
			return 1;
			break;
		
		case -135893623:
			return 1;
			break;
		
		case -1065648464:
			return 1;
			break;
		
		case 2078992037:
			return 1;
			break;
		
		case 2005261787:
			return 1;
			break;
		
		case -1563126486:
			return 1;
			break;
		
		case -726927144:
			return 1;
			break;
		
		case -1435215630:
			return 1;
			break;
		
		case 1537096519:
			return 1;
			break;
		
		case 1350787806:
			return 1;
			break;
		
		case 2077473150:
			return 1;
			break;
		
		case 1577121865:
			return 2;
			break;
		
		case 884057515:
			return 2;
			break;
		
		case 2055188806:
			return 2;
			break;
		
		case 1362452146:
			return 2;
			break;
		
		case -1761842625:
			return 2;
			break;
		
		case 1068701361:
			return 4;
			break;
		
		case -1380486476:
			return 4;
			break;
		
		case -1543872710:
			return 4;
			break;
		
		case -1702878124:
			return 7;
			break;
		
		case -1254139438:
			return 7;
			break;
		
		case 210405475:
			return 7;
			break;
		
		case -1707872538:
			return 11;
			break;
		
		case -2012788083:
			return 11;
			break;
		
		case -463076547:
			return 11;
			break;
		
		case 439709403:
			return 11;
			break;
		
		case 1630043344:
			return 11;
			break;
		
		case 1325521027:
			return 11;
			break;
		
		case -1419210429:
			return 11;
			break;
		
		case -515769099:
			return 11;
			break;
		
		case 132958794:
			return 11;
			break;
		
		case -1114884726:
			return 11;
			break;
		
		case 1757345625:
			return 11;
			break;
		
		case -1610663451:
			return 11;
			break;
		
		case -1494469157:
			return 11;
			break;
		
		case -1096844637:
			return 11;
			break;
		
		case -1376986818:
			return 11;
			break;
		
		case -619564152:
			return 11;
			break;
		
		case -4895131:
			return 11;
			break;
		
		case -303322414:
			return 11;
			break;
		
		case 825569640:
			return 11;
			break;
		
		case 1990051484:
			return 14;
			break;
		
		case -1520061694:
			return 14;
			break;
		
		case -1769535933:
			return 14;
			break;
		
		case -1278290738:
			return 14;
			break;
		
		case -556385537:
			return 14;
			break;
		
		case -795828620:
			return 14;
			break;
		
		case -1848626321:
			return 14;
			break;
		
		case -1947743732:
			return 14;
			break;
		
		case 1454239749:
			return 14;
			break;
		
		case -1560482447:
			return 14;
			break;
		
		case 756154773:
			return 14;
			break;
		
		case 1970016848:
			return 14;
			break;
		
		case -2018330915:
			return 14;
			break;
		
		case 1651272765:
			return 14;
			break;
		
		case 1353042096:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -1610663451:
			return 10;
			break;
		
		case -1342383648:
			return 10;
			break;
		
		case -1120144290:
			return 10;
			break;
		
		case 1265733835:
			return 10;
			break;
		
		case 1492757467:
			return 10;
			break;
		
		case 74154800:
			return 10;
			break;
		
		case 323166431:
			return 10;
			break;
		
		case 1696679066:
			return 10;
			break;
		
		case 1332943166:
			return 10;
			break;
		
		case -1811791700:
			return 10;
			break;
		
		case -1514347487:
			return 10;
			break;
		
		case 1068996624:
			return 10;
			break;
		
		case 1375091853:
			return 10;
			break;
		
		case 1550143851:
			return 10;
			break;
		
		case 1855649238:
			return 10;
			break;
		
		case 1594644157:
			return 10;
			break;
		
		case -112424129:
			return 10;
			break;
		
		case 192229264:
			return 10;
			break;
		
		case 438291685:
			return 10;
			break;
		
		case 734032114:
			return 10;
			break;
		
		case -1046831960:
			return 10;
			break;
		
		case -108491645:
			return 10;
			break;
		
		case 123545644:
			return 10;
			break;
		
		case 1441514824:
			return 10;
			break;
		
		case 1790504674:
			return 10;
			break;
		
		case 1449707070:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1736024889:
			return 1;
			break;
		
		case -1927424120:
			return 14;
			break;
		
		case -714796311:
			return 12;
			break;
		
		case -1516065754:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1017575242:
			return 1;
			break;
		
		case -436450826:
			return 1;
			break;
		
		case 388705363:
			return 1;
			break;
		
		case -1044283007:
			return 1;
			break;
		
		case -208444124:
			return 1;
			break;
		
		case 1207664400:
			return 1;
			break;
		
		case 685326540:
			return 1;
			break;
		
		case 507980712:
			return 1;
			break;
		
		case 224168403:
			return 1;
			break;
		
		case -19665722:
			return 1;
			break;
		
		case -567597622:
			return 1;
			break;
		
		case 983703469:
			return 14;
			break;
		
		case 1751120680:
			return 14;
			break;
		
		case 569765473:
			return 14;
			break;
		
		case 272321260:
			return 14;
			break;
		
		case -28039394:
			return 14;
			break;
		
		case -499985406:
			return 4;
			break;
		
		case -841176234:
			return 4;
			break;
		
		case -1080095013:
			return 4;
			break;
		
		case -849106328:
			return 4;
			break;
		
		case -1188462092:
			return 4;
			break;
		
		case -1234554049:
			return 11;
			break;
		
		case -1400168575:
			return 11;
			break;
		
		case -758256634:
			return 11;
			break;
		
		case -1053210403:
			return 11;
			break;
		
		case 1831772361:
			return 11;
			break;
		
		case -189071324:
			return 3;
			break;
		
		case 1735026049:
			return 3;
			break;
		
		case 475582303:
			return 3;
			break;
		
		case 185478346:
			return 3;
			break;
		
		case 1035112978:
			return 3;
			break;
		
		case 1389202323:
			return 3;
			break;
		
		case 1595647023:
			return 3;
			break;
		
		case -1168483685:
			return 3;
			break;
		
		case -946834169:
			return 3;
			break;
		
		case -1761700892:
			return 3;
			break;
		
		case -1912404917:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 181772562:
			return 11;
			break;
		
		case 1575405367:
			return 11;
			break;
		
		case 2006645407:
			return 11;
			break;
		
		case 1976908542:
			return 11;
			break;
		
		case 1542915906:
			return 11;
			break;
		
		case 1222861079:
			return 11;
			break;
		
		case 1058950541:
			return 11;
			break;
		
		case 800423093:
			return 7;
			break;
		
		case 434065673:
			return 7;
			break;
		
		case 43033196:
			return 7;
			break;
		
		case -187496719:
			return 7;
			break;
		
		case 1475869283:
			return 4;
			break;
		
		case 716775398:
			return 4;
			break;
		
		case 877933340:
			return 4;
			break;
		
		case 2131478666:
			return 4;
			break;
		
		case -2115205532:
			return 14;
			break;
		
		case -1878515045:
			return 14;
			break;
		
		case 373632787:
			return 14;
			break;
		
		case -461157488:
			return 14;
			break;
		
		case -214308611:
			return 14;
			break;
		
		case -647908019:
			return 14;
			break;
		
		case 1465790788:
			return 14;
			break;
		
		case 698865112:
			return 14;
			break;
		
		case -1327490303:
			return 14;
			break;
		
		case 1233573053:
			return 14;
			break;
		
		case 927739976:
			return 14;
			break;
		
		case 772349378:
			return 14;
			break;
		
		case 469989799:
			return 14;
			break;
		
		case 1710557703:
			return 14;
			break;
		
		case 1488613266:
			return 14;
			break;
		
		case 1232621838:
			return 14;
			break;
		
		case 1010218635:
			return 14;
			break;
		
		case -402504268:
			return 14;
			break;
		
		case -2104657208:
			return 14;
			break;
		
		case 1415552621:
			return 14;
			break;
		
		case 1563734039:
			return 14;
			break;
		
		case -1325738078:
			return 14;
			break;
		
		case 269555153:
			return 14;
			break;
		
		case 432548159:
			return 14;
			break;
		
		case 1825656628:
			return 14;
			break;
		
		case -820493119:
			return 14;
			break;
		
		case 1530158331:
			return 14;
			break;
		
		case 1182086013:
			return 14;
			break;
		
		case 949393344:
			return 14;
			break;
		
		case -1848554956:
			return 14;
			break;
		
		case 230441484:
			return 14;
			break;
		
		case -285045:
			return 14;
			break;
		
		case -273611274:
			return 14;
			break;
		
		case -2078570938:
			return 1;
			break;
		
		case -1478350740:
			return 1;
			break;
		
		case 885717964:
			return 1;
			break;
		
		case 826435243:
			return 1;
			break;
		
		case 517784032:
			return 1;
			break;
		
		case 1571831686:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1470149028:
		case -1357324997:
		case -399192206:
		case -890006288:
		case 64652989:
		case -161453111:
		case 795762148:
		case 296559202:
		case 1253971075:
		case 1023408391:
		case 1504591288:
		case 2023063246:
		case 1718016625:
		case 1428731893:
		case 1101074662:
		case -1351684992:
		case -1657386993:
		case -1946409573:
		case 2042003728:
		case -170362538:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -477604174:
		case 364034822:
		case 136191965:
		case 442582143:
		case 84482511:
		case 971670421:
		case 736159614:
		case 1667815057:
		case 1294641685:
		case -2030199366:
		case 601407264:
		case 764138118:
		case 1968955913:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1155192675:
		case -1928704920:
		case -524880960:
		case -1356263259:
		case 68860555:
		case -704258466:
		case -902445334:
		case -133258609:
		case -296251615:
		case 479292308:
			return 14;
			break;
	}
	return 0;
}

void func_67(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == 6)
	{
		*uParam1 = get_random_int_in_range(0, 6);
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("g_m_y_mexgoon_03");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_microsmg");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_assaultrifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("cavalcade");
				iVar0++;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("g_m_y_lost_03");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_sawnoffshotgun");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_assaultrifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("hexer");
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("g_m_y_famca_01");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_microsmg");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_pumpshotgun");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("baller");
				iVar0++;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("mp_g_m_pros_01");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_smg");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_combatmg");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("granger");
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("g_m_m_chigoon_01");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_smg");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_carbinerifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("jackal");
				iVar0++;
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				*(uParam0.f_5[iVar0 /*18*/]).f_1 = joaat("a_m_m_hillbilly_02");
				iVar1 = get_random_int_in_range(0, 100);
				if (iVar1 < 33)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_sawnoffshotgun");
				}
				else if (iVar1 > 66)
				{
					*(uParam0.f_5[iVar0 /*18*/]).f_14 = joaat("weapon_combatmg");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				*(uParam0.f_78[iVar0 /*17*/]).f_1 = joaat("rebel");
				iVar0++;
			}
			break;
	}
}

void func_68(auto uParam0)
{
	*uParam0.f_96 = get_random_int_in_range(2, 5);
	Local_96.f_178 += *uParam0.f_96;
	switch (*uParam0)
	{
		case 0:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {2320.896f, 1452.707f, 62.2404f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 354.4594f;
			*(uParam0.f_5[1 /*18*/].f_2) = {2353.574f, 1510.125f, 53.1555f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 98.8266f;
			*(uParam0.f_5[2 /*18*/].f_2) = {2294.484f, 1508.458f, 61.1572f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 284.4314f;
			*(uParam0.f_5[3 /*18*/].f_2) = {2287.753f, 1476.692f, 69.8952f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 313.3356f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {2330.363f, 1286.403f, 65.6944f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 1.8055f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {2380.052f, 1486.732f, 39.3839f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 173.8279f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {2212.928f, 1728.134f, 88.8012f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 261.9384f;
			*uParam0.f_97 = {3319.875f, 1396.298f, 177.9103f};
			*uParam0.f_100 = 84.3397f;
			break;
		
		case 1:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1063.983f, 2338.235f, 48.6123f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 350.1455f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1008.183f, 2370.161f, 54.5713f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 265.6562f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1128.295f, 2345.031f, 52.2852f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 72.3582f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1075.685f, 2394.358f, 51.4952f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 178.4742f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {934.3832f, 2377.912f, 45.5848f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 302.7182f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1161.811f, 2398.735f, 56.8772f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 3.897f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1042.273f, 2432.6f, 44.1508f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 275.9303f;
			*uParam0.f_97 = {-361.9944f, 2414.308f, 471.9749f};
			*uParam0.f_100 = 263.7351f;
			break;
		
		case 2:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-1952.565f, 2589.525f, 1.6831f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 113.619f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-1981.117f, 2631.698f, 1.702f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 183.9359f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-1992.678f, 2632.717f, 1.9292f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 197.8271f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-1996.694f, 2527.202f, 1.8938f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 337.1221f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-2214.625f, 2820.103f, 2.034f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 215.3564f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-1770.402f, 2736.629f, 4.4394f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 152.8846f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-2015.04f, 2702.457f, 2.4495f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 273.5316f;
			*uParam0.f_97 = {-3106.78f, 2567.887f, 200f};
			*uParam0.f_100 = 266.9502f;
			break;
		
		case 3:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1892.234f, 592.2417f, 189.3747f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 249.6456f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1927.436f, 591.7188f, 177.8152f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 159.7268f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1906.445f, 577.1587f, 174.8717f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 198.8829f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1896.536f, 584.7686f, 177.4033f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 211.7178f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1935.604f, 669.2496f, 184.7174f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 224.7734f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1865.464f, 478.8249f, 170.5025f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 261.0713f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1796.104f, 298.5035f, 170.3443f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 337.5981f;
			*uParam0.f_97 = {2961.06f, -102.1822f, 483.754f};
			*uParam0.f_100 = 67.1375f;
			break;
		
		case 4:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1460.868f, 1088.279f, 113.334f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 10.3573f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1455.516f, 1133.988f, 113.334f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 186.5074f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1482.747f, 1130.094f, 113.334f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 116.289f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1464.915f, 1134.746f, 113.3225f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 181.0186f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1287.343f, 1210.874f, 106.6704f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 180.3493f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1310.347f, 1073.41f, 104.5521f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 2.8196f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1468.254f, 1176.568f, 113.334f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 88.018f;
			*uParam0.f_97 = {2718.076f, 844.5446f, 650.5612f};
			*uParam0.f_100 = 86.5865f;
			break;
		
		case 5:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {781.7131f, 1296.37f, 360.3558f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 298.7285f;
			*(uParam0.f_5[1 /*18*/].f_2) = {817.8524f, 1342.544f, 356.6494f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 2.4516f;
			*(uParam0.f_5[2 /*18*/].f_2) = {837.4887f, 1296.438f, 363.3529f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 235.0403f;
			*(uParam0.f_5[3 /*18*/].f_2) = {779.8301f, 1314.87f, 359.3835f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 258.0066f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {842.7767f, 1338.928f, 351.54f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 219.8066f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {834.7274f, 1247.029f, 352.0706f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 289.2027f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {675.3398f, 1351.774f, 327.9539f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 256.7171f;
			*uParam0.f_97 = {869.2994f, 2807.811f, 770.8076f};
			*uParam0.f_100 = 178.8456f;
			break;
		
		case 6:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1422.101f, -2184.86f, 61.8352f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 30.6842f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1394.916f, -2087.58f, 53.4358f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 201.2894f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1391.63f, -2205.374f, 60.4674f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 18.653f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1357.787f, -2191.316f, 58.6791f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 108.6812f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1347.645f, -2021.752f, 48.4312f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 298.7371f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1504.546f, -1982.46f, 69.9607f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 75.8727f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1524.317f, -2293.609f, 72.1833f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 30.4687f;
			*uParam0.f_97 = {2283.102f, -1684.922f, 109.8941f};
			*uParam0.f_100 = 130.1306f;
			break;
		
		case 7:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1139.829f, -3134.407f, 15.0016f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 104.6551f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1139.654f, -3149.986f, 22.1254f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 86.9869f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1083.742f, -3163.082f, 4.901f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 312.9454f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1106.558f, -3120.745f, 4.901f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 186.7521f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {983.3778f, -3091.903f, 4.9009f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 181.5385f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1241.716f, -3095.097f, 4.9016f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 88.178f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1020.388f, -3218.337f, 4.888f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 270.4624f;
			*uParam0.f_97 = {1082.761f, -3913.538f, 259.5345f};
			*uParam0.f_100 = 357.1163f;
			break;
		
		case 8:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {550.9495f, -3046.577f, 12.2886f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 8.8327f;
			*(uParam0.f_5[1 /*18*/].f_2) = {542.4202f, -3002.079f, 5.0443f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 197.559f;
			*(uParam0.f_5[2 /*18*/].f_2) = {567.1848f, -3005.176f, 22.0949f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 120.1645f;
			*(uParam0.f_5[3 /*18*/].f_2) = {520.8234f, -3053.324f, 5.0696f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 0.38f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {656.7521f, -2960.734f, 5.0444f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 158.5572f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {586.759f, -2960.094f, 5.0444f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 182.1605f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {524.9021f, -2962.522f, 5.0453f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 175.0801f;
			*uParam0.f_97 = {-378.6478f, -3677.805f, 291.4673f};
			*uParam0.f_100 = 314.9697f;
			break;
		
		case 9:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1409.335f, -734.6124f, 66.6396f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 93.3841f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1395.727f, -701.6596f, 66.4683f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 140.4233f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1383.732f, -776.3151f, 66.4024f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 11.4037f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1361.304f, -697.9785f, 65.3824f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 208.016f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1237.501f, -761.1631f, 58.9825f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 287.8288f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1268.024f, -615.4786f, 67.8305f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 208.6499f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1245.512f, -711.1078f, 61.9082f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 180.0621f;
			*uParam0.f_97 = {2409.291f, -1098.351f, 496.8289f};
			*uParam0.f_100 = 70.7044f;
			break;
		
		case 10:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1103.402f, 89.1884f, 79.8909f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 323.525f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1193.05f, 149.3631f, 79.5353f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 115.8848f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1144.888f, 82.5526f, 79.8909f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 345.2191f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1106.952f, 128.1926f, 80.8914f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 255.009f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1065.068f, 241.121f, 79.8555f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 326.5492f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {980.4287f, -68.106f, 73.9594f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 297.0119f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {967.2383f, 184.9293f, 79.8308f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 261.3374f;
			*uParam0.f_97 = {1742.13f, 1556.528f, 326.8489f};
			*uParam0.f_100 = 158.5592f;
			break;
		
		case 11:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1725.837f, 3028.07f, 61.2235f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 67.0086f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1609.881f, 3047.903f, 46.7991f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 263.2002f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1674.129f, 3113.69f, 43.6611f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 30.7465f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1731.598f, 3019.928f, 61.4284f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 157.5899f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1741.06f, 3156.46f, 42.1906f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 110.1921f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1601.519f, 2890.423f, 55.9619f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 318.1643f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1571.932f, 3092.044f, 39.8558f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 297.0444f;
			*uParam0.f_97 = {768.1101f, 4080.211f, 438.6512f};
			*uParam0.f_100 = 199.9345f;
			break;
		
		case 12:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1002.517f, 4324.697f, 39.1856f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 3.4408f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1019.279f, 4405.163f, 42.1815f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 73.8213f;
			*(uParam0.f_5[2 /*18*/].f_2) = {995.6335f, 4394.133f, 47.8651f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 355.3108f;
			*(uParam0.f_5[3 /*18*/].f_2) = {972.6747f, 4352.731f, 43.7555f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 282.5687f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1125.155f, 4429.389f, 62.2158f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 82.7581f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {885.6168f, 4459.245f, 50.8314f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 239.2189f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {993.9852f, 4460.117f, 49.8088f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 260.9623f;
			*uParam0.f_97 = {-865.817f, 4403.578f, 604.2233f};
			*uParam0.f_100 = 268.7136f;
			break;
		
		case 13:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-1714.584f, 4954.133f, 7.2482f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 116.3591f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-1689.055f, 4954.641f, 10.6516f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 102.0189f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-1714.612f, 4982.892f, 7.9491f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 148.2065f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-1733.629f, 4983.355f, 5.2886f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 172.3626f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-1850.084f, 4774.318f, 3.2752f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 22.5589f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-1582.051f, 5057.125f, 33.7903f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 139.2498f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-1555.555f, 4921.68f, 60.363f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 307.6337f;
			*uParam0.f_97 = {-688.8508f, 7607.529f, 349.1056f};
			*uParam0.f_100 = 172.9232f;
			break;
		
		case 14:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-2405.702f, 4210.707f, 10.5095f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 146.9088f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-2382.956f, 4205.869f, 21.6201f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 121.7438f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-2407.653f, 4137.372f, 17.563f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 35.8796f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-2375.453f, 4184.967f, 22.8146f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 93.1919f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-2309.195f, 4291.07f, 30.5234f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 139.4109f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-2479.676f, 4007.82f, 5.868f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 345.5383f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-2368.042f, 4077.419f, 30.5281f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 326.4518f;
			*uParam0.f_97 = {-3820.056f, 4296.777f, 220.0733f};
			*uParam0.f_100 = 266.5256f;
			break;
		
		case 15:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-3131.286f, 753.4323f, 5.3342f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 94.0004f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-3177.387f, 790.2584f, 3.0064f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 172.8542f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-3183.727f, 787.8382f, 2.8265f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 203.5908f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-3140.75f, 724.6806f, 1.2483f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 56.6538f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-3116.019f, 647.4692f, 1.1468f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 41.7007f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-3235.432f, 892.0785f, 2.3308f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 169.4398f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-3170.898f, 944.9553f, 13.5189f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 181.8572f;
			*uParam0.f_97 = {-3996.097f, 1914.244f, 219.9833f};
			*uParam0.f_100 = 232.6708f;
			break;
		
		case 16:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-1744.401f, -966.3932f, 6.4026f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 300.0445f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-1721.433f, -1013.865f, 4.2361f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 124.3674f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-1710.114f, -999.4743f, 5.1064f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 60.6101f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-1673.702f, -992.2216f, 6.3501f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 53.7375f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-1708.448f, -868.3484f, 7.4161f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 144.709f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-1683.468f, -1047.061f, 3.2051f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 55.3434f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-1619.064f, -905.6519f, 7.9512f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 141.2538f;
			*uParam0.f_97 = {-1902.681f, -1889.568f, 114.6166f};
			*uParam0.f_100 = 358.7342f;
			break;
		
		case 17:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-813.9835f, 835.9732f, 201.4461f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 191.4548f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-799.1475f, 838.1729f, 203.5733f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 198.4863f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-833.4322f, 897.7642f, 212.0651f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 199.7569f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-798.2678f, 886.1758f, 202.1105f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 143.6434f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-739.907f, 822.6394f, 213.0717f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 38.4355f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-869.4866f, 797.1853f, 189.8626f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 294.5416f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-707.6155f, 897.8837f, 228.5368f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 178.5833f;
			*uParam0.f_97 = {-2203.284f, 1580.05f, 569.6727f};
			*uParam0.f_100 = 228.5565f;
			break;
		
		case 18:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-423.9036f, 1226.663f, 324.7588f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 232.6687f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-382.1511f, 1228.877f, 324.7606f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 156.8766f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-385.6131f, 1187.106f, 324.7588f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 154.8572f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-429.266f, 1214.575f, 324.7588f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 261.6925f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-509.5673f, 1228.719f, 320.3937f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 165.9902f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-321.2862f, 1201.17f, 320.5964f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 132.4112f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-345.4358f, 1303.327f, 335.4418f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 178.3955f;
			*uParam0.f_97 = {-1468.097f, 2146.756f, 764.3748f};
			*uParam0.f_100 = 233.1176f;
			break;
		
		case 19:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {721.5088f, -1510.831f, 18.6862f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 196.9149f;
			*(uParam0.f_5[1 /*18*/].f_2) = {753.9851f, -1520.364f, 19.5089f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 100.5212f;
			*(uParam0.f_5[2 /*18*/].f_2) = {703.6952f, -1539.909f, 8.7089f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 114.8652f;
			*(uParam0.f_5[3 /*18*/].f_2) = {733.1053f, -1535.687f, 18.647f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 173.8219f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {667.9203f, -1410.711f, 8.7295f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 196.4158f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {787.4294f, -1396.085f, 26.0718f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 179.2513f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {653.0773f, -1731.387f, 8.6921f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 354.5085f;
			*uParam0.f_97 = {2206.569f, -3593.554f, 346.688f};
			*uParam0.f_100 = 50.9998f;
			break;
		
		case 20:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1148.578f, -1295.304f, 33.6676f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 178.5031f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1124.733f, -1303.865f, 33.7184f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 281.0662f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1149.984f, -1280.695f, 33.6471f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 356.4931f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1155.671f, -1277.51f, 39.4394f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 134.7168f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1175.252f, -1284.31f, 33.7757f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 179.5388f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1179.979f, -1373.488f, 33.87f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 75.5108f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1251.886f, -1335.891f, 34.2108f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 351.2707f;
			*uParam0.f_97 = {2534.776f, -1420.195f, 451.8415f};
			*uParam0.f_100 = 83.05f;
			break;
		
		case 21:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {2932.422f, 790.123f, 24.9383f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 108.1342f;
			*(uParam0.f_5[1 /*18*/].f_2) = {2927.758f, 769.4883f, 23.6032f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 105.6544f;
			*(uParam0.f_5[2 /*18*/].f_2) = {2880.078f, 715.3883f, 30.4501f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 341.9437f;
			*(uParam0.f_5[3 /*18*/].f_2) = {2896.484f, 764.3184f, 18.5266f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 326.4059f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {2636.005f, 543.1351f, 94.625f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 0.7481f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {2619.153f, 639.2633f, 93.4987f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 18.6567f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {2554.605f, 405.6805f, 107.4526f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 312.7786f;
			*uParam0.f_97 = {3882.837f, 1694.206f, 365.5233f};
			*uParam0.f_100 = 145.8588f;
			break;
		
		case 22:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {2790.81f, 2842.266f, 35.1792f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 41.1631f;
			*(uParam0.f_5[1 /*18*/].f_2) = {2796.613f, 2874.403f, 39.164f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 131.3994f;
			*(uParam0.f_5[2 /*18*/].f_2) = {2778.494f, 2831.878f, 39.7195f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 35.0007f;
			*(uParam0.f_5[3 /*18*/].f_2) = {2756.627f, 2855.263f, 36.8614f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 279.8899f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {2664.172f, 2850.17f, 38.4106f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 252.0351f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {2619.735f, 2726.488f, 40.1266f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 286.5096f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {2642.569f, 2948.26f, 37.3319f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 230.3495f;
			*uParam0.f_97 = {3896.27f, 2191.885f, 350.8098f};
			*uParam0.f_100 = 74.6998f;
			break;
		
		case 23:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {2466.814f, 3784.966f, 39.9763f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 150.9192f;
			*(uParam0.f_5[1 /*18*/].f_2) = {2491.589f, 3769.751f, 43.3539f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 88.8265f;
			*(uParam0.f_5[2 /*18*/].f_2) = {2477.978f, 3761.751f, 40.9253f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 24.5861f;
			*(uParam0.f_5[3 /*18*/].f_2) = {2450.197f, 3755.673f, 40.9738f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 67.7862f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {2310.018f, 3748.419f, 36.9374f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 311.6797f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {2429.797f, 3874.425f, 36.0097f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 142.634f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {2301.956f, 3735.456f, 36.7863f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 339.1366f;
			*uParam0.f_97 = {1528.498f, 5012.703f, 555.9046f};
			*uParam0.f_100 = 223.5092f;
			break;
		
		case 24:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1917.188f, 4609.002f, 37.6286f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 154.3076f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1932.687f, 4649.753f, 39.4995f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 244.4298f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1876.038f, 4609.205f, 36.2622f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 180.3719f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1927.87f, 4635.505f, 39.4275f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 88.5296f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1970.517f, 4653.994f, 39.8374f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 148.0159f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1797.508f, 4585.467f, 36.0648f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 186.4325f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {1990.042f, 4601.601f, 39.5506f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 117.1525f;
			*uParam0.f_97 = {3711.549f, 4878.36f, 404.1502f};
			*uParam0.f_100 = 101.3695f;
			break;
		
		case 25:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {574.2339f, 2924.322f, 39.7349f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 213.2177f;
			*(uParam0.f_5[1 /*18*/].f_2) = {541.8079f, 2870.406f, 42.1283f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 288.7304f;
			*(uParam0.f_5[2 /*18*/].f_2) = {625.1206f, 2877.854f, 38.1618f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 87.2171f;
			*(uParam0.f_5[3 /*18*/].f_2) = {598.0822f, 2930.774f, 39.914f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 321.3549f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {591.658f, 2974.451f, 39.7528f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 258.7779f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {521.3518f, 2887.909f, 42.3507f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 194.5046f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {733.1032f, 2908.255f, 46.4786f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 27.0771f;
			*uParam0.f_97 = {-1071.609f, 2496.11f, 332.6916f};
			*uParam0.f_100 = 288.7392f;
			break;
		
		case 26:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {2805.899f, -684.5618f, 2.7772f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 356.7281f;
			*(uParam0.f_5[1 /*18*/].f_2) = {2792.485f, -650.1158f, 3.6368f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 212.2862f;
			*(uParam0.f_5[2 /*18*/].f_2) = {2815.231f, -668.5212f, 0.2468f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 274.147f;
			*(uParam0.f_5[3 /*18*/].f_2) = {2824.972f, -694.6227f, 0.5617f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 106.0981f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {2733.123f, -774.2815f, 22.6375f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 7.3256f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {2659.813f, -781.988f, 34.7736f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 191.9212f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {2669.105f, -686.0164f, 39.8963f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 207.926f;
			*uParam0.f_97 = {3835.905f, -1895.431f, 621.9581f};
			*uParam0.f_100 = 48.6187f;
			break;
		
		case 27:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-1725.351f, -189.919f, 57.519f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 103.1486f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-1746.584f, -206.355f, 56.4266f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 132.9578f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-1676.474f, -199.428f, 56.672f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 249.4169f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-1681.592f, -165.3771f, 56.7343f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 292.0603f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-1660.808f, -131.8831f, 58.885f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 92.4984f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-1787.203f, -265.7223f, 44.2972f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 231.4039f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-1603.282f, -201.1913f, 53.8901f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 143.5364f;
			*uParam0.f_97 = {-2497.777f, -1044.295f, 247.0226f};
			*uParam0.f_100 = 326.3715f;
			break;
		
		case 28:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-519.8322f, 3036.58f, 34.8224f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 209.6163f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-459.0498f, 2991.124f, 25.7687f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 78.439f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-531.2136f, 2980.925f, 25.18f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 168.7811f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-461.0627f, 3029.61f, 27.943f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 297.2584f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-349.4192f, 2959.483f, 24.8059f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 100.0125f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-405.8636f, 3068.1f, 29.4591f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 112.6015f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-659.7894f, 3011.683f, 23.5569f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 284.9224f;
			*uParam0.f_97 = {-2460.682f, 2015.017f, 839.101f};
			*uParam0.f_100 = 296.1674f;
			break;
		
		case 29:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-417.435f, 4308.393f, 63.3466f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 234.5174f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-438.7067f, 4340.647f, 61.0735f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 278.47f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-368.8454f, 4339.037f, 57.1845f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 77.0994f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-393.7048f, 4374.429f, 54.2199f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 64.5219f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-465.3588f, 4334.785f, 60.7145f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 227.85f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-338.1241f, 4256.839f, 42.4494f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 51.2469f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-542.6022f, 4354.644f, 64.1361f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 275.3314f;
			*uParam0.f_97 = {-2603.97f, 4864.047f, 631.5f};
			*uParam0.f_100 = 253.7774f;
			break;
		
		case 30:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {-127.9382f, -865.4045f, 32.33f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 131.1114f;
			*(uParam0.f_5[1 /*18*/].f_2) = {-120.4006f, -839.0247f, 43.2158f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 303.7408f;
			*(uParam0.f_5[2 /*18*/].f_2) = {-99.936f, -877.1848f, 43.2164f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 313.9738f;
			*(uParam0.f_5[3 /*18*/].f_2) = {-85.6775f, -842.2723f, 39.5395f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 126.871f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {-62.7999f, -923.7296f, 28.1789f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 69.7026f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {-215.8648f, -1010.772f, 28.1444f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 337.6824f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {-270.7842f, -887.5016f, 30.101f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 338.2989f;
			*uParam0.f_97 = {-1532.046f, -652.9149f, 637.4343f};
			*uParam0.f_100 = 262.2055f;
			*uParam0.f_101 = {-133.2166f, -871.6094f, 43.2173f};
			break;
		
		case 31:
			*uParam0.f_1 = {func_69(*uParam0)};
			*uParam0.f_4 = 2;
			*(uParam0.f_5[0 /*18*/].f_2) = {1109.562f, -544.2077f, 56.1076f};
			*(uParam0.f_5[0 /*18*/]).f_5 = 174.9766f;
			*(uParam0.f_5[1 /*18*/].f_2) = {1100.509f, -529.1635f, 61.9093f};
			*(uParam0.f_5[1 /*18*/]).f_5 = 356.8412f;
			*(uParam0.f_5[2 /*18*/].f_2) = {1078.51f, -554.7376f, 55.9086f};
			*(uParam0.f_5[2 /*18*/]).f_5 = 263.975f;
			*(uParam0.f_5[3 /*18*/].f_2) = {1130.424f, -565.5107f, 55.7759f};
			*(uParam0.f_5[3 /*18*/]).f_5 = 132.5288f;
			*(uParam0.f_78[0 /*17*/].f_2[0 /*3*/]) = {1077.153f, -428.0514f, 65.6296f};
			*(uParam0.f_78[0 /*17*/].f_12)[0] = 169.8658f;
			*(uParam0.f_78[0 /*17*/].f_2[1 /*3*/]) = {1176.293f, -465.3253f, 65.0413f};
			*(uParam0.f_78[0 /*17*/].f_12)[1] = 167.1621f;
			*(uParam0.f_78[0 /*17*/].f_2[2 /*3*/]) = {975.8554f, -567.0255f, 58.0341f};
			*(uParam0.f_78[0 /*17*/].f_12)[2] = 307.5059f;
			*uParam0.f_97 = {1466.305f, -2052.086f, 382.5888f};
			*uParam0.f_100 = 23.7138f;
			*uParam0.f_101 = {1100.461f, -546.2083f, 56.2259f};
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
	{
		*uParam0.f_96 = 4;
		*uParam0.f_4 = 0;
	}
}

Vector3 func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 4:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 5:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 6:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 7:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 8:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 9:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 10:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 11:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 12:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 13:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 14:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 15:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 16:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 17:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 18:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 19:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 20:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 21:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 22:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 23:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 24:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 25:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 26:
			return 2811.453f, -668.671f, 1.581f;
		
		case 27:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 28:
			return -498.3305f, 3006.906f, 27.4341f;
		
		case 29:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 30:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 31:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_70(auto uParam0)
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

void func_71(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	func_390();
	switch (Local_286[participant_id_to_int() /*4*/].f_3)
	{
		case 0:
			if (Local_96.f_180 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					Global_2460486.f_233[iVar0 /*3*/] = {Local_96.f_2.f_68[iVar0 /*104*/].f_1};
					iVar0++;
				}
				if ((func_55() && func_53()) && func_47())
				{
					if (((!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, true) && func_382(31, 0, 0)) && func_381(60000)) && !func_380())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
						{
							func_379("ACD_TICKS", 1);
						}
						else
						{
							func_379("ACD_TSC0", 1);
						}
					}
					func_378();
					Local_286[participant_id_to_int() /*4*/].f_3 = 1;
				}
			}
			break;
		
		case 1:
			func_372();
			func_371();
			iVar1 = false;
			while (iVar1 < Local_96.f_2)
			{
				func_174(iVar1);
				if (network_does_network_id_exist(Local_96.f_2.f_1[iVar1 /*66*/].f_1) && (network_does_network_id_exist(Local_96.f_181[iVar1 /*2*/]) || GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11)))
				{
					func_172(iVar1);
					func_171(iVar1);
					func_165(iVar1, Local_96.f_2.f_68[iVar1 /*104*/].f_101);
				}
				func_158(iVar1);
				if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), Local_96.f_2.f_68[iVar1 /*104*/].f_1, 200f, 200f, 200f, false, true, 0))
				{
					func_157();
					func_103(iVar1);
					fVar2 = 200f / 4f * 3f;
					if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), Local_96.f_2.f_68[iVar1 /*104*/].f_1, fVar2, fVar2, fVar2, false, true, 0))
					{
						func_82(iVar1, fVar2);
					}
				}
				else
				{
					func_73(1);
				}
				iVar1++;
			}
			if (Local_96.f_180 >= 2)
			{
				Local_286[participant_id_to_int() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_419();
			break;
	}
}

void func_73(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_415, 13))
	{
		if (func_431(player_id(), 1, 1) || iParam0 == 0)
		{
			func_74(1, 1);
			GAMEPLAY::CLEAR_BIT(&iLocal_415, 13);
		}
	}
}

void func_74(int iParam0, int iParam1)
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
		func_81();
	}
	func_77(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_76(0);
	func_75();
}

void func_75()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_79();
		func_78(8, 0, 0);
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
		func_79();
		func_78(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
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

void func_79()
{
	func_80();
	Global_2404956.f_635 = 0;
}

void func_80()
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

void func_81()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_82(int iParam0, float fParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_415, 13))
	{
		if (func_431(player_id(), 1, 1))
		{
			func_99(Local_96.f_2.f_68[iParam0 /*104*/].f_1, fParam1, 0, 0, 1, 0);
			func_84(Local_96.f_2.f_68[iParam0 /*104*/].f_1, 200f / 4f * 2f, 0, 1);
			func_83(Local_96.f_2.f_68[iParam0 /*104*/].f_1, 1, 0);
			GAMEPLAY::SET_BIT(&iLocal_415, 13);
		}
	}
}

void func_83(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_84(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	func_85(vParam0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam5);
}

void func_85(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5)
{
	struct<12> Var0;
	
	if (func_94(player_id()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_93(&vParam0, &vParam3);
		}
		Var0 = {vParam0};
		Var0.f_3 = {vParam3};
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_88(Var0))
		{
			Global_2404956.f_39.f_64 = func_87(player_id());
			func_86(Var0, uParam8);
		}
	}
}

void func_86(struct<12> Param0, auto uParam1)
{
	Global_2404956.f_347[uParam12 /*12*/] = {Param0};
	Global_2404956.f_347[uParam12 /*12*/].f_9 = 1;
}

int func_87(int iParam0)
{
	if (func_431(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_88(struct<12> Param0)
{
	struct<12>[] Var0 = new struct<12>[1];
	int iVar13;
	
	Var0[0 /*12*/] = {Param0};
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404956.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_89(Global_2404956.f_39[iVar13 /*12*/], &Var0))
			{
				return false;
			}
		}
		iVar13++;
	}
	return true;
}

bool func_89(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if (*(uParam12[iVar0 /*12*/]).f_9)
		{
			switch (*(uParam12[iVar0 /*12*/]).f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_92(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_90(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_92(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_90(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return false;
	}
	return true;
}

int func_90(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	fVar6 = fParam9 * 0.7071068f;
	vVar0 = {vParam6 - Vector(fVar6, fVar6, fVar6)};
	vVar3 = {vParam6 + Vector(fVar6, fVar6, fVar6)};
	return func_91(vParam0, vParam3, vVar0, vVar3);
}

bool func_91(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3)
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return true;
	}
	return false;
}

bool func_92(Vector3 vParam0, float fParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	
	vVar0 = {vParam4 - vParam0};
	if (vmag(vVar0) + fParam3 < fParam7)
	{
		return true;
	}
	return false;
}

void func_93(auto uParam0, auto uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar3.x = *uParam0;
	}
	if (*uParam0.f_1 <= *uParam1.f_1)
	{
		vVar0.y = *uParam0.f_1;
		vVar3.y = *uParam1.f_1;
	}
	else
	{
		vVar0.y = *uParam1.f_1;
		vVar3.y = *uParam0.f_1;
	}
	if (*uParam0.f_2 <= *uParam1.f_2)
	{
		vVar0.z = *uParam0.f_2;
		vVar3.z = *uParam1.f_2;
	}
	else
	{
		vVar0.z = *uParam1.f_2;
		vVar3.z = *uParam0.f_2;
	}
	*uParam0 = {vVar0};
	*uParam1 = {vVar3};
}

bool func_94(int iParam0)
{
	if ((func_97(iParam0, 1) || func_96(iParam0)) || func_95(iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_95(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

int func_97(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_87(iParam0) != 0;
	}
	return func_98(iParam0, iParam1);
}

bool func_98(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_402(iParam0))
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

void func_99(Vector3 vParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_100(vParam0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_100(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	struct<12> Var0;
	
	if (func_94(player_id()) || uParam9)
	{
		if (Global_2404956.f_634)
		{
			func_102();
		}
		if (Var0.f_10 == 1)
		{
			func_93(&vParam0, &vParam3);
		}
		Var0 = {vParam0};
		Var0.f_3 = {vParam3};
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2404956.f_39.f_64 = func_87(player_id());
		func_101(Var0, uParam8);
	}
}

void func_101(struct<12> Param0, auto uParam1)
{
	Global_2404956.f_39[uParam12 /*12*/] = {Param0};
	Global_2404956.f_39[uParam12 /*12*/].f_9 = 1;
}

void func_102()
{
	func_80();
	Global_2404956.f_634 = 0;
}

void func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_96.f_2.f_68[iParam0 /*104*/].f_96)
	{
		func_153(Local_96.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/], &(Local_421[iParam0 /*33*/][iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
		func_104(iParam0, iVar0);
		iVar0++;
	}
}

void func_104(auto uParam0, int iParam1)
{
	auto uVar0;
	
	if (network_does_network_id_exist(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iParam1 /*18*/]))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_455[uParam0], 0 + iParam1))
		{
			if (is_entity_dead(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iParam1 /*18*/]), 0))
			{
				if (player_id() == network_get_destroyer_of_network_id(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iParam1 /*18*/], &uVar0))
				{
					func_105(0, net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iParam1 /*18*/]), "XPT_KAIE", -1859646258, 2131309714, round(50f * Global_262145.f_4216), 1, -1, 0, 0);
					iLocal_462 += 50;
					iLocal_466++;
					GAMEPLAY::SET_BIT(&(uLocal_455[uParam0]), 0 + iParam1);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(net_to_ped(Local_96.f_2.f_68[uParam0 /*104*/].f_5[iParam1 /*18*/])))
		{
			GAMEPLAY::CLEAR_BIT(&(uLocal_455[uParam0]), 0 + iParam1);
		}
	}
}

int func_105(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_106(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_106(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_116(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_112(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_107(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_107(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_110(iParam0, 1)};
	if (iParam0 == func_109(PLAYER::PLAYER_PED_ID()))
	{
		func_108(1);
	}
	func_112(vVar0, iParam1, 0, sParam2);
}

void func_108(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_109(int iParam0)
{
	return iParam0;
}

Vector3 func_110(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_111(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
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

int func_111(int iParam0)
{
	return iParam0;
}

void func_112(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_115(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_114();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_113();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_113()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_114()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_115(Vector3 vParam0, auto uParam1, auto uParam2)
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

auto func_116(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_117(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_117(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_152(player_id()) || func_151(player_id()))
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
	if (func_150(sParam2))
	{
	}
	if (func_149())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_147(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_146(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_144(0, &iVar1);
					break;
				
				case 3:
					func_144(1, &iVar1);
					break;
				
				case 1:
					func_141(&iVar1);
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
			func_138(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_127(func_137(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_138(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_122(iVar1);
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
				func_118(func_120(player_id()) + iVar1);
			}
			else
			{
				func_118(func_120(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_118(int iParam0)
{
	if (func_149())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_119(joaat("mpply_globalxp"), iParam0);
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_120(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_431(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_121(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_121(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_121(int iParam0)
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

void func_122(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_33(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_125(func_126(&Var0));
			if (iVar13 == 0)
			{
				func_124(&Global_1347641, iParam0);
				func_123(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_124(&Global_1347642, iParam0);
				func_123(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_124(&Global_1347643, iParam0);
				func_123(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_124(&Global_1347644, iParam0);
				func_123(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_124(&Global_1347645, iParam0);
				func_123(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_123(int iParam0, int iParam1)
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

void func_124(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_125(int iParam0)
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

auto func_126(auto uParam0)
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

void func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_149())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_136(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_136(-1)])
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
		if (func_135(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_133(iParam0, 1);
		}
		func_132(632, iParam0, -1, 1);
		func_131(633, func_133(iParam0, 1), -1, 1);
		Global_1347756[func_136(-1)] = iParam0;
		func_128(7, 0);
	}
}

void func_128(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_130(iParam0, iParam1))
	{
		uVar0 = func_129();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_129()
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

bool func_130(int iParam0, auto uParam1)
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

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_136(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_136(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_136(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_136(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_136(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_136(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_136(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_136(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_136(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_136(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_136(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_136(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_136(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_136(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_136(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_136(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_136(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_136(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_136(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_136(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_136(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_136(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_136(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_136(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_136(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_136(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_136(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_136(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_136(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_136(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_136(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_134(iParam0, 0);
}

int func_134(int iParam0, int iParam1)
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

int func_135(int iParam0)
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

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_137(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_136(-1)];
			}
			else if (func_135(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_136(-1)];
	}
	return 0;
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_136(iParam2), 0);
	iVar0 += iParam1;
	if (!func_139(iParam0))
	{
		func_131(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_132(iParam0, iVar0, iParam2, 1);
	}
}

bool func_139(int iParam0)
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

int func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_136(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_141(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_143(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_34(player_id(), iVar5))
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
		iVar6 = round(func_142(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_142(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_142(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

int func_143(int iParam0, int iParam1, int iParam2)
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

void func_144(int iParam0, int iParam1)
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
				if (func_431(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_34(player_id(), iVar4))
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
			if (func_431(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_145(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_34(player_id(), iVar4))
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
		iVar5 = round(func_142(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_142(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_145(int iParam0, int iParam1)
{
	return vdist(func_27(iParam0), func_27(iParam1));
	return 0f;
}

auto func_146(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_142(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_147(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_137(player_id()))
		{
			iParam0 = -func_137(player_id());
		}
	}
	if (func_148(8000, 0, 0) > 0)
	{
		if (func_148(8000, 0, 0) < iParam0 + func_137(player_id()))
		{
			iParam0 = func_148(8000, 0, 0) - func_137(player_id());
		}
	}
	return iParam0;
}

auto func_148(int iParam0, int iParam1, int iParam2)
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

bool func_149()
{
	return true;
}

bool func_150(char* sParam0)
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

int func_151(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_152(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_153(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (func_156())
		{
			Global_2428492 = player_id();
		}
		if (iParam3)
		{
			func_155(net_to_ped(iParam0), iParam1, 1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
		else
		{
			func_155(net_to_ped(iParam0), iParam1, -1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
	}
	else if (does_blip_exist(*iParam1))
	{
		func_154(iParam1);
	}
}

void func_154(int iParam0)
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

bool func_155(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
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

auto func_156()
{
	return Global_1315888;
}

void func_157()
{
	Global_1332473.f_2 = 1;
	Global_1332473.f_3 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 1000);
}

void func_158(int iParam0)
{
	if ((!network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1) && Local_96.f_2.f_1[iParam0 /*66*/].f_64 == -1) && func_162())
	{
		func_159(iParam0);
	}
	else if (does_blip_exist(iLocal_419[iParam0]))
	{
		remove_blip(&(iLocal_419[iParam0]));
	}
}

void func_159(auto uParam0)
{
	if (does_blip_exist(iLocal_419[uParam0]))
	{
		if (func_160())
		{
			set_blip_display(iLocal_419[uParam0], 0);
		}
		else
		{
			set_blip_display(iLocal_419[uParam0], 4);
		}
	}
	else
	{
		iLocal_419[uParam0] = add_blip_for_radius(Local_96.f_2.f_68[uParam0 /*104*/].f_1, 200f);
		set_blip_colour(iLocal_419[uParam0], 2);
		set_blip_alpha(iLocal_419[uParam0], 220);
		_0x75A16C3DA34F1245(iLocal_419[uParam0], false);
		set_blip_name_from_text_file(iLocal_419[uParam0], "ACD_BLIPR");
		if (func_160())
		{
			set_blip_display(iLocal_419[uParam0], 0);
		}
	}
}

bool func_160()
{
	if (func_161(13))
	{
		return true;
	}
	if (func_161(0))
	{
		return true;
	}
	return false;
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = func_140(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

bool func_162()
{
	if (func_164())
	{
		return false;
	}
	if ((func_163(player_id(), 1) || func_163(player_id(), 2)) || Global_1587523[player_id() /*444*/] == 5)
	{
		return false;
	}
	if (!func_382(31, 0, 0))
	{
		return false;
	}
	return true;
}

int func_163(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_164()
{
	auto uVar0;
	
	uVar0 = Global_2428492;
	if (GAMEPLAY::IS_BIT_SET(Global_1609227[uVar0 /*34*/].f_12, false) && Global_1609227[uVar0 /*34*/].f_21 == 2)
	{
		return true;
	}
	return false;
}

void func_165(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	auto uVar8;
	int iVar11;
	
	if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
	{
		if (network_has_control_of_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_1) || (!_0xA1607996431332DF(Local_96.f_2.f_1[iParam0 /*66*/].f_1) && network_is_host_of_this_script()))
		{
			if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_2))
			{
				if (network_has_control_of_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_2) || (!_0xA1607996431332DF(Local_96.f_2.f_1[iParam0 /*66*/].f_2) && network_is_host_of_this_script()))
				{
					if (func_39(Local_96.f_2.f_1[iParam0 /*66*/].f_1) && func_39(Local_96.f_2.f_1[iParam0 /*66*/].f_2))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 2) && !GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 0 + iParam0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
							{
								if (network_does_network_id_exist(Local_96.f_181[iParam0 /*2*/]))
								{
									if (network_has_control_of_network_id(Local_96.f_181[iParam0 /*2*/]) || (!_0xA1607996431332DF(Local_96.f_181[iParam0 /*2*/]) && network_is_host_of_this_script()))
									{
										if (func_39(Local_96.f_181[iParam0 /*2*/]))
										{
											iVar4 = 1;
										}
									}
									iVar3 = net_to_obj(Local_96.f_181[iParam0 /*2*/]);
								}
							}
							else
							{
								GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11);
								iVar3 = net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1);
								iVar4 = 1;
							}
							if ((GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 13) && is_entity_static(iVar3)) && iVar4 == 1)
							{
								_0x3910051CCECDB00C(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), true);
								_0x3910051CCECDB00C(net_to_obj(Local_96.f_181[iParam0 /*2*/]), true);
								set_entity_velocity(iVar3, 0f, 0f, 0f);
								if (func_170(vParam1, 0f, 0f, 0f, 0))
								{
									get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar3), &vVar5, &uVar8);
									if (func_44())
									{
										vVar5.x = absf(vVar5.x * 2f);
									}
									else
									{
										vVar5.x = -absf(vVar5.x * 2f);
									}
									if (func_44())
									{
										vVar5.y = absf(vVar5.y * 2f);
									}
									else
									{
										vVar5.y = -absf(vVar5.y * 2f);
									}
									vVar5.z = absf(vVar5.z);
									set_entity_coords(iVar3, Local_96.f_2.f_68[iParam0 /*104*/].f_1 + vVar5, 1, false, 0, 1);
								}
								else
								{
									set_entity_coords(iVar3, vParam1, 1, false, 0, 1);
								}
								GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 6 + iParam0);
								GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 3 + iParam0);
								GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 0 + iParam0);
								func_169(&(Local_96.f_2.f_1[iParam0 /*66*/].f_2));
								_0x92AEFB5F6E294023(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 3) && !GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 6 + iParam0))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 11) || GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 3 + iParam0))
							{
								if (!is_entity_playing_anim(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), &(Local_96.f_2.f_1[iParam0 /*66*/].f_8), &(Local_96.f_2.f_1[iParam0 /*66*/].f_22), 3))
								{
									GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 6 + iParam0);
									func_169(&(Local_96.f_2.f_1[iParam0 /*66*/].f_2));
									_0x92AEFB5F6E294023(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 11) && !GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 3 + iParam0))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 2) || GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 0 + iParam0))
							{
								if (is_entity_playing_anim(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), &(Local_96.f_2.f_1[iParam0 /*66*/].f_8), &(Local_96.f_2.f_1[iParam0 /*66*/].f_22), 3))
								{
									GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 3 + iParam0);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 2) && !GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 0 + iParam0))
						{
							if (func_167(iParam0))
							{
								play_entity_anim(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_2), &(Local_96.f_2.f_1[iParam0 /*66*/].f_22), &(Local_96.f_2.f_1[iParam0 /*66*/].f_8), 1000f, false, 0, 0, 0f, 0);
								GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 0 + iParam0);
							}
							else
							{
								set_damping(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 2, 0.0245f);
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
			{
				if (network_does_network_id_exist(Local_96.f_181[iParam0 /*2*/]))
				{
					if (network_has_control_of_network_id(Local_96.f_181[iParam0 /*2*/]) || (!_0xA1607996431332DF(Local_96.f_181[iParam0 /*2*/]) && network_is_host_of_this_script()))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 15) && !GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 15 + iParam0))
						{
							if (func_39(Local_96.f_181[iParam0 /*2*/]))
							{
								set_damping(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 2, 0.1f);
								if (has_object_been_broken(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
								{
									if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
									{
										if (network_has_control_of_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_1) || (!_0xA1607996431332DF(Local_96.f_2.f_1[iParam0 /*66*/].f_1) && network_is_host_of_this_script()))
										{
											if (func_39(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
											{
												detach_entity(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1, true);
												_0x92AEFB5F6E294023(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
												if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_2))
												{
													if (network_has_control_of_network_id(Local_96.f_2.f_1[iParam0 /*66*/].f_2) || (!_0xA1607996431332DF(Local_96.f_2.f_1[iParam0 /*66*/].f_2) && network_is_host_of_this_script()))
													{
														func_169(&(Local_96.f_2.f_1[iParam0 /*66*/].f_2));
													}
												}
												GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 15 + iParam0);
											}
										}
									}
								}
								vVar0 = {get_entity_coords(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 1)};
								if (vVar0.z < 0f)
								{
									set_entity_coords(net_to_obj(Local_96.f_181[iParam0 /*2*/]), Local_96.f_2.f_68[iParam0 /*104*/].f_1, 1, false, 0, 1);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 12))
						{
							if (get_entity_height_above_ground(net_to_obj(Local_96.f_181[iParam0 /*2*/])) < 1f)
							{
								if (func_39(Local_96.f_181[iParam0 /*2*/]))
								{
									set_disable_breaking(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 1);
									set_disable_frag_damage(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 1);
									GAMEPLAY::SET_BIT(&(Local_96.f_1), 12);
								}
							}
						}
						else if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 13))
						{
							if (has_entity_been_damaged_by_any_ped(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
							{
								iVar11 = true;
							}
							if (GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 6 + iParam0))
							{
								if (!is_entity_waiting_for_world_collision(net_to_obj(Local_96.f_181[iParam0 /*2*/])) || has_collision_loaded_around_entity(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
								{
									if (!is_entity_in_air(net_to_obj(Local_96.f_181[iParam0 /*2*/])) && is_entity_static(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
									{
										iVar11 = true;
									}
								}
							}
							if (iVar11)
							{
								if (func_39(Local_96.f_181[iParam0 /*2*/]))
								{
									set_disable_breaking(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 0);
									set_disable_frag_damage(net_to_obj(Local_96.f_181[iParam0 /*2*/]), 0);
									GAMEPLAY::SET_BIT(&(Local_96.f_1), 13);
								}
							}
						}
					}
				}
			}
			vVar0 = {get_entity_coords(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1)};
			if (vVar0.z < 0f)
			{
				if (func_39(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
				{
					set_entity_coords(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), Local_96.f_2.f_68[iParam0 /*104*/].f_1, 1, false, 0, 1);
				}
			}
			func_166(iParam0);
		}
	}
}

void func_166(int iParam0)
{
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_64 != -1)
	{
		if (func_39(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
		{
			func_169(&(Local_96.f_2.f_1[iParam0 /*66*/].f_1));
		}
	}
}

bool func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
	{
		if (network_does_network_id_exist(Local_96.f_181[iParam0 /*2*/]))
		{
			if (!is_entity_in_air(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
			{
				iVar0 = false;
			}
			else
			{
				iVar0 = true;
			}
			if (is_entity_in_water(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
			{
				iVar1 = 1;
			}
			if (has_object_been_broken(net_to_obj(Local_96.f_181[iParam0 /*2*/])))
			{
				iVar2 = 1;
			}
		}
		if (func_168(iParam0))
		{
			iVar3 = 1;
		}
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_96.f_181[iParam0 /*2*/]) || (!_0xA1607996431332DF(Local_96.f_181[iParam0 /*2*/]) && network_is_host_of_this_script()))
		{
			if (((!iVar0 || iVar1) || iVar2) || iVar3)
			{
				if (func_39(Local_96.f_181[iParam0 /*2*/]))
				{
					return true;
				}
			}
		}
	}
	else if ((!is_entity_in_air(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1)) || is_entity_in_water(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1))) || func_168(iParam0))
	{
		return true;
	}
	return false;
}

bool func_168(auto uParam0)
{
	float fVar0;
	
	fVar0 = get_entity_pitch(net_to_obj(Local_96.f_2.f_1[uParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return true;
	}
	fVar0 = get_entity_roll(net_to_obj(Local_96.f_2.f_1[uParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return true;
	}
	return false;
}

void func_169(auto uParam0)
{
	int iVar0;
	
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
		}
	}
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		delete_entity(&iVar0);
	}
}

int func_170(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_171(int iParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_415, 1 + iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true) && Local_96.f_2.f_1[iParam0 /*66*/].f_64 == -1)
		{
			iVar0 = iParam0 + 1;
			if (iVar0 > Local_96.f_2 - 1)
			{
				iVar0 = Local_96.f_2 - 1;
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iVar0 /*66*/].f_65, true))
			{
				GAMEPLAY::SET_BIT(&iLocal_415, 1 + iParam0);
			}
		}
	}
}

void func_172(int iParam0)
{
	if (func_162() && !is_entity_attached_to_any_ped(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1)))
	{
		if ((!GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 9 + iParam0) && GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, 3)) && does_blip_exist(iLocal_417[iParam0]))
		{
			set_blip_alpha(iLocal_417[iParam0], 255);
			_0x75A16C3DA34F1245(iLocal_417[iParam0], true);
			GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 9 + iParam0);
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[iParam0 /*66*/].f_65, true))
		{
			func_173(iParam0);
		}
	}
	else if (does_blip_exist(iLocal_417[iParam0]))
	{
		remove_blip(&(iLocal_417[iParam0]));
	}
}

void func_173(int iParam0)
{
	if (does_blip_exist(iLocal_417[iParam0]))
	{
		if (func_160())
		{
			set_blip_display(iLocal_417[iParam0], 0);
		}
		else
		{
			set_blip_display(iLocal_417[iParam0], 4);
		}
	}
	else
	{
		iLocal_417[iParam0] = add_blip_for_entity(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1));
		set_blip_scale(iLocal_417[iParam0], 1.2f);
		set_blip_sprite(iLocal_417[iParam0], 306);
		set_blip_colour(iLocal_417[iParam0], 2);
		set_blip_alpha(iLocal_417[iParam0], 120);
		set_blip_name_from_text_file(iLocal_417[iParam0], "ACD_BLIPN");
		set_blip_priority(iLocal_417[iParam0], 5);
		if (func_160())
		{
			set_blip_display(iLocal_417[iParam0], 0);
		}
	}
}

void func_174(int iParam0)
{
	struct<14> Var0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_416, iParam0))
	{
		if (Local_96.f_2.f_1[iParam0 /*66*/].f_64 == -1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_286[participant_id_to_int() /*4*/].f_1, 12 + iParam0))
			{
				if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
				{
					if (is_entity_attached_to_entity(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), PLAYER::PLAYER_PED_ID()))
					{
						func_6(iParam0);
						func_4(iParam0);
						play_sound_from_entity(-1, "Crate_Collect", net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", 1, 15);
						func_180(iParam0);
						GAMEPLAY::SET_BIT(&iLocal_416, iParam0);
						if (!GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11))
						{
							Var0.f_2 = 99;
							func_179();
						}
						else
						{
							Var0.f_2 = 100;
							func_177();
						}
						Var0.f_10 = player_id();
						func_13(Var0, func_14(0));
						func_175(31, 1);
						GAMEPLAY::SET_BIT(&(Local_286[participant_id_to_int() /*4*/].f_1), 12 + iParam0);
					}
				}
			}
		}
		else if (Local_96.f_2.f_1[iParam0 /*66*/].f_64 == 9999)
		{
			func_6(iParam0);
			func_4(iParam0);
			GAMEPLAY::SET_BIT(&iLocal_416, iParam0);
		}
		else
		{
			func_6(iParam0);
			func_4(iParam0);
			GAMEPLAY::SET_BIT(&iLocal_416, iParam0);
		}
	}
}

void func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_176() /*10375*/].f_7704.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_176() /*10375*/].f_7704.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_176() /*10375*/].f_7704.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_176() /*10375*/].f_7704.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_176() /*10375*/].f_7704.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_176() /*10375*/].f_7704.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_176() /*10375*/].f_7704.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_176() /*10375*/].f_7704.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_176() /*10375*/].f_7704.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_176() /*10375*/].f_7704.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_176() /*10375*/].f_7704.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_176() /*10375*/].f_7704.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_176() /*10375*/].f_7704.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_176() /*10375*/].f_7704.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_176() /*10375*/].f_7704.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_176() /*10375*/].f_7704.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_176() /*10375*/].f_7704.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_176() /*10375*/].f_7704.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_176() /*10375*/].f_7704.f_30 = iVar0;
			break;
	}
}

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_177()
{
	auto uVar0;
	
	uVar0 = func_178(46);
	Global_2411218[uVar0 /*83*/] = 46;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_178(int iParam0)
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

void func_179()
{
	auto uVar0;
	
	uVar0 = func_178(45);
	Global_2411218[uVar0 /*83*/] = 45;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;
	auto uVar7;
	int iVar8;
	auto uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar24;
	auto uVar25;
	
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_30 == 2)
	{
		Local_96.f_2.f_1[iParam0 /*66*/].f_30 = get_random_int_in_range(0, 2);
	}
	if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
	{
		vVar2 = {get_entity_coords(net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), 1)};
	}
	else
	{
		vVar2 = {func_27(player_id())};
	}
	iVar5 = func_370(PLAYER::PLAYER_PED_ID());
	if (iVar5 == joaat("weapon_unarmed") || iVar5 == joaat("weapon_flare"))
	{
		iVar5 = Global_1312415;
	}
	func_367(iVar5, 3, 1);
	if (Local_96.f_2.f_1[iParam0 /*66*/].f_30 != 8)
	{
		if (Global_262145.f_65 < 0)
		{
			iVar6 = 250 * get_random_int_in_range(1, 5);
		}
		else
		{
			iVar6 = Global_262145.f_65;
		}
	}
	else if (Global_262145.f_66 < 0)
	{
		iVar6 = 250 * get_random_int_in_range(1, 5);
	}
	else
	{
		iVar6 = Global_262145.f_66;
	}
	iVar6 = round(IntToFloat(iVar6) * Global_262145.f_4215);
	func_366(3);
	if (network_does_network_id_exist(Local_96.f_2.f_1[iParam0 /*66*/].f_1))
	{
		func_105(0, net_to_obj(Local_96.f_2.f_1[iParam0 /*66*/].f_1), "XPT_MEDIUMT", -979004785, 1022861207, iVar6, 1, -1, 0, 0);
	}
	else
	{
		func_105(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", -979004785, 1022861207, iVar6, 1, -1, 0, 0);
	}
	iLocal_462 += iVar6;
	switch (Local_96.f_2.f_1[iParam0 /*66*/].f_30)
	{
		case 0:
			iVar1 = func_365(Local_96.f_2.f_1[iParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_46)
			{
				iVar1 = Global_262145.f_46;
			}
			func_331(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_330())
				{
					func_321(563463121, iVar1, &uVar7, 0, 0, 0);
				}
				else
				{
					_0xB1CC1B9EC3007A2A(iVar1);
				}
				func_320(vVar2, iVar1);
				func_319("ACD_TCONT_CX", iVar1, iVar6, 1);
				iLocal_463 += iVar1;
				func_318(2, iLocal_463);
			}
			break;
		
		case 1:
			if (Global_262145.f_4870 == 0)
			{
				if (func_311(Local_96.f_2.f_1[iParam0 /*66*/].f_33, &iVar8))
				{
				}
			}
			else
			{
				iVar8 = Local_96.f_2.f_1[iParam0 /*66*/].f_33;
			}
			if (iVar8 == joaat("weapon_minigun"))
			{
				iVar0 = Local_96.f_2.f_1[iParam0 /*66*/].f_32 * 200;
			}
			else
			{
				iVar0 = Local_96.f_2.f_1[iParam0 /*66*/].f_32 * get_max_ammo_in_clip(PLAYER::PLAYER_PED_ID(), iVar8, 1);
			}
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), iVar8, iVar0, 1);
			func_307("ACD_TCONT_XW", func_308(iVar8, 0), iVar6, 1);
			break;
		
		case 8:
			iVar1 = func_365(Local_96.f_2.f_1[iParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_42)
			{
				iVar1 = Global_262145.f_42;
			}
			func_331(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_330())
				{
					func_321(563463121, iVar1, &uVar9, 0, 0, 0);
				}
				else
				{
					_0xB1CC1B9EC3007A2A(iVar1);
				}
				func_320(vVar2, iVar1);
				iLocal_463 += iVar1;
				func_318(2, iLocal_463);
			}
			if (Local_96.f_2.f_1[iParam0 /*66*/].f_33 != 0)
			{
				if (Local_96.f_2.f_1[iParam0 /*66*/].f_33 != joaat("weapon_minigun"))
				{
					iVar0 = Global_262145.f_39 * get_max_ammo_in_clip(PLAYER::PLAYER_PED_ID(), Local_96.f_2.f_1[iParam0 /*66*/].f_33, 1);
				}
				else
				{
					iVar0 = Global_262145.f_39 * 300;
				}
				give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), Local_96.f_2.f_1[iParam0 /*66*/].f_33, iVar0, 1);
			}
			func_306();
			iLocal_476 = 1;
			iVar11 = -1;
			iVar12 = -1;
			if (func_59(player_id()))
			{
				iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_34;
				iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_35;
			}
			else
			{
				iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_36;
				iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_37;
			}
			if (func_301(iVar11, iVar12))
			{
				iVar10 = 1;
			}
			if (iVar10 == 0)
			{
				iVar13 = 0;
				while (iVar13 < 3 && iVar10 == 0)
				{
					iVar14 = get_random_int_in_range(0, 4);
					if (func_59(player_id()))
					{
						iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_38[iVar14];
						iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_43[iVar14];
					}
					else
					{
						iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_48[iVar14];
						iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_53[iVar14];
					}
					if (func_301(iVar11, iVar12))
					{
						iVar10 = 1;
					}
					iVar13++;
				}
			}
			if (iVar10 == 0)
			{
				iVar15 = 0;
				while (iVar15 < 4)
				{
					if (func_59(player_id()))
					{
						iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_38[iVar15];
						iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_43[iVar15];
					}
					else
					{
						iVar11 = Local_96.f_2.f_1[iParam0 /*66*/].f_48[iVar15];
						iVar12 = Local_96.f_2.f_1[iParam0 /*66*/].f_53[iVar15];
					}
					if (func_301(iVar11, iVar12))
					{
						iVar10 = 1;
						iVar15 = 4;
					}
					iVar15++;
				}
			}
			if (iVar10 == 0)
			{
				iVar12 = -99;
			}
			iVar24 = func_192(iVar11, iVar12, &sVar16);
			switch (iVar24)
			{
				case 0:
					func_191("ACD_TCONT_CXWA", func_308(Local_96.f_2.f_1[iParam0 /*66*/].f_33, 0), iVar1, iVar6, 1);
					break;
				
				case 1:
					func_186("ACD_TCONT_CXWAC", func_308(Local_96.f_2.f_1[iParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6, 1);
					break;
				
				case 2:
					func_186("ACD_TCONT_CXWAC", func_308(Local_96.f_2.f_1[iParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6, 1);
					break;
			}
			func_138(1245, 1, -1);
			if (func_185(9, -1) == 0)
			{
				func_184(9, 1, -1);
			}
			break;
		
		default:
			iVar1 = func_365(Local_96.f_2.f_1[iParam0 /*66*/].f_32, 1);
			func_331(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_330())
				{
					func_321(563463121, iVar1, &uVar25, 0, 0, 0);
				}
				else
				{
					_0xB1CC1B9EC3007A2A(iVar1);
				}
				func_320(vVar2, iVar1);
				func_319("ACD_TCONT_CX", iVar1, iVar6, 1);
				iLocal_463 += iVar1;
				func_318(2, iLocal_463);
			}
			break;
	}
	func_181(50, 1, -1);
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_183(iParam0, func_136(iParam2));
	iVar0 += iParam1;
	func_182(iParam0, iVar0, iParam2);
}

void func_182(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_136(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_183(auto uParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_136(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_184(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492706[iParam0 /*5*/][func_136(iParam2)];
	stat_set_bool(iVar0, iParam1, 1);
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492706[iParam0 /*5*/][func_136(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_186(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	_add_text_component_item_string(sParam1);
	_add_text_component_item_string(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	iVar0 = _draw_notification(0, 1);
	func_187(13, sParam0, 1, sParam1, iParam3, iParam4, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_187(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_190() || !network_is_activity_session()) || !func_24(player_id(), 0))
	{
		return;
	}
	iVar0 = func_188(iParam2);
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

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_189(iVar0);
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

void func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_190()
{
	return is_dlc_present(-1762644250);
}

int func_191(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	_add_text_component_item_string(sParam1);
	add_text_component_integer(iParam2);
	add_text_component_integer(iParam3);
	iVar0 = _draw_notification(0, 1);
	func_187(10, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_192(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	struct<4> Var1;
	struct<14> Var14;
	int iVar28;
	
	iVar0 = 0;
	Var14 = {func_260(func_300(), iParam0, iParam1)};
	iVar28 = false;
	if (iParam0 == 10 && iParam1 != -1)
	{
		if (func_59(player_id()))
		{
			if (func_252(&Var1, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1))
			{
				iVar28 = true;
			}
		}
		else if (func_252(&Var1, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1))
		{
			iVar28 = true;
		}
	}
	if (iVar28)
	{
		func_223(iParam1, 1, 0, 1, 0, -1);
		func_221(get_hash_key(&Var1));
		MemCopy(uParam2, {Var1}, 8);
		iVar0 = 1;
	}
	else if (((((iParam0 != -1 && iParam0 != 10) && iParam1 != -1) && iParam1 != -99) && func_220(func_300(), iParam0, iParam1)) && !is_string_null_or_empty(&(Var14.f_8)))
	{
		func_201(func_300(), iParam0, iParam1, 1, 1);
		func_221(get_hash_key(&(Var14.f_8)));
		MemCopy(uParam2, {Var14.f_8}, 8);
		func_193(get_hash_key(&(Var14.f_8)));
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_330())
	{
		return true;
	}
	if (func_200())
	{
		func_196();
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2558630[iVar0] == -1)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return false;
	}
	iVar2 = func_195(iParam0);
	if (iVar2 != 2)
	{
		func_131(func_194(iVar1), iVar2, -1, 1);
		Global_2558630[iVar1] = 1;
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3170;
			break;
		
		case 1:
			return 3171;
			break;
		
		case 2:
			return 3172;
			break;
		
		case 3:
			return 3173;
			break;
	}
	return 3170;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 1751120680:
			return 1884872695;
			break;
	}
	return 2;
}

void func_196()
{
	int iVar0;
	int iVar1;
	
	if (!func_199(188, -1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_131(func_194(iVar0), 2, -1, 1);
			Global_2558630[iVar0] = -1;
			iVar0++;
		}
		func_197(188, 1, -1, 1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_2558630[iVar0] == 0)
			{
				iVar1 = func_140(func_194(iVar0), -1, 0);
				if (iVar1 != 2)
				{
					Global_2558630[iVar0] = 1;
				}
				else
				{
					Global_2558630[iVar0] = -1;
				}
			}
			iVar0++;
		}
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_198())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_136(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_198()
{
	return true;
	return false;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_136(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_200()
{
	return (1 && Global_2558630[0] == 0);
}

bool func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
	auto uVar23;
	int iVar33;
	int iVar34;
	int iVar35;
	auto uVar36;
	auto uVar52;
	int iVar62;
	int iVar63;
	int[] iVar64 = new int[2];
	struct<2> Var67;
	int iVar84;
	int iVar85;
	int iVar86;
	int[] iVar87 = new int[2];
	struct<2> Var90;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	struct<2> Var111;
	int iVar128;
	int iVar129;
	int iVar130;
	
	Global_69311[1 /*14*/] = {func_260(iParam0, iParam1, iParam2)};
	if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				if (iParam3)
				{
					func_219(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					func_217(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				if (iParam3)
				{
					func_219(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					func_217(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (iParam3)
			{
				func_219(Global_2621444, 1, 1, 1, -1);
			}
			else
			{
				func_217(Global_2621444, 1, 1, 1, -1);
			}
			if (iParam4 == 1 && iParam3 == 1)
			{
				iVar0 = _0xC17AD0E5752BECDA(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					get_variant_component(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar2 != 0 && iVar2 != 1849449579)
					{
						func_219(iVar2, 1, 1, 1, -1);
					}
					else
					{
						func_201(iParam0, func_216(iVar4), uVar3, 1, 0);
					}
					iVar1++;
				}
			}
			if (iParam1 == 12)
			{
				uVar7 = {func_213(iParam0, iParam2)};
				iVar5 = 0;
				while (iVar5 <= 14)
				{
					if ((uVar7[iVar5] != -99 && iVar5 != 12) && iVar5 != 14)
					{
						if (iVar5 != 13)
						{
							func_201(iParam0, iVar5, uVar7[iVar5], 1, 1);
							func_210(iParam0, iVar5, uVar7[iVar5], 1, 0);
						}
						else
						{
							uVar23 = {func_207(iParam0, uVar7[iVar5])};
							iVar6 = 0;
							while (iVar6 <= 8)
							{
								if (uVar23[iVar6] >= 10)
								{
									func_201(iParam0, 14, uVar23[iVar6], 1, 1);
									func_210(iParam0, 14, uVar23[iVar6], 1, 0);
								}
								iVar6++;
							}
						}
					}
					iVar5++;
				}
			}
		}
		else
		{
			if (iParam1 != 5)
			{
				iVar33 = func_140(func_206(iParam1, Global_69311[1 /*14*/].f_2), Global_69309, 0);
				if (iParam3)
				{
					GAMEPLAY::SET_BIT(&iVar33, Global_69311[1 /*14*/].f_1);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&iVar33, Global_69311[1 /*14*/].f_1);
				}
				func_131(func_206(iParam1, Global_69311[1 /*14*/].f_2), iVar33, Global_69309, 1);
			}
			if (iParam1 == 12)
			{
				uVar36 = {func_213(iParam0, iParam2)};
				iVar34 = 0;
				while (iVar34 <= 14)
				{
					if ((uVar36[iVar34] != -99 && iVar34 != 12) && iVar34 != 14)
					{
						if (iVar34 != 13)
						{
							func_201(iParam0, iVar34, uVar36[iVar34], 1, 1);
							func_210(iParam0, iVar34, uVar36[iVar34], 1, 0);
						}
						else
						{
							uVar52 = {func_207(iParam0, uVar36[iVar34])};
							iVar35 = 0;
							while (iVar35 <= 8)
							{
								func_201(iParam0, 14, uVar52[iVar35], 1, 1);
								func_210(iParam0, 14, uVar52[iVar35], 1, 0);
								iVar35++;
							}
						}
					}
					iVar34++;
				}
			}
			if (iParam4 == 1 && iParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar62 = 75 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 14, iVar62, 1, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar62 = 83 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 14, iVar62, 1, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar62 = 64 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar62 = 48 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar62 = 112 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar62 = 96 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar62 = 160 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar62 = 176 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar62 = 0 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 11, iVar62, 1, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar62 = 16 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 11, iVar62, 1, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar62 = 32 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar62 = 224 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar64[0] = -783649692;
									iVar64[1] = 691352495;
									break;
								
								case 221:
									iVar64[0] = 1313566316;
									iVar64[1] = 451909412;
									break;
								
								case 222:
									iVar64[0] = 1552550633;
									iVar64[1] = -206550874;
									break;
								
								case 223:
									iVar64[0] = 860928119;
									iVar64[1] = -445797343;
									break;
								
								case 224:
									iVar64[0] = 1107219923;
									iVar64[1] = -173716332;
									break;
								
								case 225:
									iVar64[0] = -2017140386;
									iVar64[1] = -538304226;
									break;
								
								case 226:
									iVar64[0] = -1235599732;
									iVar64[1] = -592242000;
									break;
								
								case 227:
									iVar64[0] = 1815489089;
									iVar64[1] = -831095241;
									break;
								
								case 228:
									iVar64[0] = 2062043045;
									iVar64[1] = -1092100326;
									break;
								
								case 229:
									iVar64[0] = -1065332020;
									iVar64[1] = -1465994616;
									break;
								
								case 230:
									iVar64[0] = -1516536717;
									iVar64[1] = 507503642;
									break;
								
								case 231:
									iVar64[0] = -1470397961;
									iVar64[1] = -1392082519;
									break;
								
								case 232:
									iVar64[0] = 264425668;
									iVar64[1] = -88859389;
									break;
								
								case 233:
									iVar64[0] = 560755735;
									iVar64[1] = 157858412;
									break;
								
								case 234:
									iVar64[0] = -593565059;
									iVar64[1] = -513152401;
									break;
								
								case 235:
									iVar64[0] = -286945526;
									iVar64[1] = 2004948615;
									break;
							}
							init_shop_ped_component(&Var67);
							iVar86 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
							iVar84 = 0;
							while (iVar84 < iVar86)
							{
								get_shop_ped_query_component(iVar84, &Var67);
								if (!_is_dlc_data_empty(Var67))
								{
									if (Var67.f_1 == iVar64[0] || Var67.f_1 == iVar64[1])
									{
										func_201(iParam0, 8, 241 + iVar85, 1, 0);
									}
									iVar85++;
								}
								iVar84++;
							}
						}
						else if (iParam2 >= 188 && iParam2 <= 203)
						{
							switch (iParam2)
							{
								case 188:
									iVar87[0] = -1319425641;
									iVar87[1] = -1739646902;
									break;
								
								case 189:
									iVar87[0] = -1019622060;
									iVar87[1] = -1357494824;
									break;
								
								case 190:
									iVar87[0] = 1745491702;
									iVar87[1] = 1466340978;
									break;
								
								case 191:
									iVar87[0] = 133748437;
									iVar87[1] = 1689596175;
									break;
								
								case 192:
									iVar87[0] = 431159881;
									iVar87[1] = 2055363753;
									break;
								
								case 193:
									iVar87[0] = -1408327934;
									iVar87[1] = -2008549324;
									break;
								
								case 194:
									iVar87[0] = -1395416948;
									iVar87[1] = 504177600;
									break;
								
								case 195:
									iVar87[0] = 755638519;
									iVar87[1] = 870797172;
									break;
								
								case 196:
									iVar87[0] = 1053279346;
									iVar87[1] = 1094380059;
									break;
								
								case 197:
									iVar87[0] = 1360193800;
									iVar87[1] = -687139395;
									break;
								
								case 198:
									iVar87[0] = 1515149778;
									iVar87[1] = 1859221515;
									break;
								
								case 199:
									iVar87[0] = 1830748017;
									iVar87[1] = 707489472;
									break;
								
								case 200:
									iVar87[0] = 778666503;
									iVar87[1] = -209845914;
									break;
								
								case 201:
									iVar87[0] = 1130015721;
									iVar87[1] = 1007948429;
									break;
								
								case 202:
									iVar87[0] = -1793274004;
									iVar87[1] = 1306572326;
									break;
								
								case 203:
									iVar87[0] = -1549112185;
									iVar87[1] = 1627839602;
									break;
							}
							init_shop_ped_component(&Var90);
							iVar109 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
							iVar107 = 0;
							while (iVar107 < iVar109)
							{
								get_shop_ped_query_component(iVar107, &Var90);
								if (!_is_dlc_data_empty(Var90))
								{
									if (Var90.f_1 == iVar87[0] || Var90.f_1 == iVar87[1])
									{
										func_201(iParam0, 8, 241 + iVar108, 1, 0);
									}
									iVar108++;
								}
								iVar107++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_69311[2 /*14*/].f_4)
							{
								case 0:
									func_201(iParam0, 7, func_205(iParam0, -1893758670, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 221276858, 7, 3), 1, 0);
									break;
								
								case 1:
									func_201(iParam0, 7, func_205(iParam0, -1596052305, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 576886046, 7, 3), 1, 0);
									break;
								
								case 2:
									func_201(iParam0, 7, func_205(iParam0, 1233059274, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -392978047, 7, 3), 1, 0);
									break;
								
								case 3:
									func_201(iParam0, 7, func_205(iParam0, 232228476, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -33764269, 7, 3), 1, 0);
									break;
								
								case 4:
									func_201(iParam0, 7, func_205(iParam0, -454445919, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1510704243, 7, 3), 1, 0);
									break;
								
								case 5:
									func_201(iParam0, 7, func_205(iParam0, 925653285, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1800939276, 7, 3), 1, 0);
									break;
								
								case 6:
									func_201(iParam0, 7, func_205(iParam0, -2104856604, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 833565623, 7, 3), 1, 0);
									break;
								
								case 7:
									func_201(iParam0, 7, func_205(iParam0, 1657483366, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1201823645, 7, 3), 1, 0);
									break;
								
								case 8:
									func_201(iParam0, 7, func_205(iParam0, 501294735, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 2132496022, 7, 3), 1, 0);
									break;
								
								case 9:
									func_201(iParam0, 7, func_205(iParam0, 1882573627, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1939019463, 7, 3), 1, 0);
									break;
								
								case 10:
									func_201(iParam0, 7, func_205(iParam0, 206035418, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1713491273, 7, 3), 1, 0);
									break;
								
								case 11:
									func_201(iParam0, 7, func_205(iParam0, -642943834, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -156668318, 7, 3), 1, 0);
									break;
								
								case 12:
									func_201(iParam0, 7, func_205(iParam0, -388295935, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 106696135, 7, 3), 1, 0);
									break;
								
								case 13:
									func_201(iParam0, 7, func_205(iParam0, 927641567, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -802905767, 7, 3), 1, 0);
									break;
								
								case 14:
									func_201(iParam0, 7, func_205(iParam0, 1147226636, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -505527092, 7, 3), 1, 0);
									break;
								
								case 15:
									func_201(iParam0, 7, func_205(iParam0, 312665744, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1144129332, 7, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_69311[2 /*14*/].f_4)
							{
								case 0:
									func_201(iParam0, 7, func_205(iParam0, -335266079, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -925989020, 7, 3), 1, 0);
									break;
								
								case 1:
									func_201(iParam0, 7, func_205(iParam0, -1379548555, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 244486895, 7, 3), 1, 0);
									break;
								
								case 2:
									func_201(iParam0, 7, func_205(iParam0, -1402159165, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1095104597, 7, 3), 1, 0);
									break;
								
								case 3:
									func_201(iParam0, 7, func_205(iParam0, 1357351098, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1787874026, 7, 3), 1, 0);
									break;
								
								case 4:
									func_201(iParam0, 7, func_205(iParam0, -1097178082, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 476163725, 7, 3), 1, 0);
									break;
								
								case 5:
									func_201(iParam0, 7, func_205(iParam0, -179482237, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1223952305, 7, 3), 1, 0);
									break;
								
								case 6:
									func_201(iParam0, 7, func_205(iParam0, -750514831, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 2049796643, 7, 3), 1, 0);
									break;
								
								case 7:
									func_201(iParam0, 7, func_205(iParam0, -1724573356, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1013547784, 7, 3), 1, 0);
									break;
								
								case 8:
									func_201(iParam0, 7, func_205(iParam0, 94106144, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1456972664, 7, 3), 1, 0);
									break;
								
								case 9:
									func_201(iParam0, 7, func_205(iParam0, 1070524041, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1670762848, 7, 3), 1, 0);
									break;
								
								case 10:
									func_201(iParam0, 7, func_205(iParam0, -1644577318, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, 1428867383, 7, 3), 1, 0);
									break;
								
								case 11:
									func_201(iParam0, 7, func_205(iParam0, 1865900118, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1664165762, 7, 3), 1, 0);
									break;
								
								case 12:
									func_201(iParam0, 7, func_205(iParam0, 1611776523, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1962101510, 7, 3), 1, 0);
									break;
								
								case 13:
									func_201(iParam0, 7, func_205(iParam0, 1381115532, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1270511757, 7, 3), 1, 0);
									break;
								
								case 14:
									func_201(iParam0, 7, func_205(iParam0, 1636484345, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -1571626106, 7, 3), 1, 0);
									break;
								
								case 15:
									func_201(iParam0, 7, func_205(iParam0, 1422633851, 7, 3), 1, 0);
									func_201(iParam0, 7, func_205(iParam0, -698332248, 7, 3), 1, 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar62 = 16 + Global_69311[1 /*14*/].f_4;
							func_201(iParam0, 8, iVar62, 1, 0);
						}
					}
				}
				Global_69311[1 /*14*/] = {func_260(iParam0, iParam1, iParam2)};
				if (iParam1 == 11)
				{
					iVar63 = func_204(iParam0, iParam2, Global_69311[1 /*14*/].f_4);
					if (iVar63 != -99)
					{
						func_201(iParam0, 8, iVar63, 1, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar110 = 331193219;
								break;
							
							case 200:
								iVar110 = 1115060468;
								break;
							
							case 201:
								iVar110 = 779636984;
								break;
						}
						init_shop_ped_component(&Var111);
						iVar130 = _get_num_props_from_outfit(4, 6, -1, 0, -1, 8);
						iVar128 = 0;
						while (iVar128 < iVar130)
						{
							get_shop_ped_query_component(iVar128, &Var111);
							if (!_is_dlc_data_empty(Var111))
							{
								if (Var111.f_1 == iVar110)
								{
									func_201(iParam0, 8, 136 + iVar129, 1, 0);
									iVar128 = iVar130 + 1;
								}
								iVar129++;
							}
							iVar128++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar63 = func_202(iParam0, iParam2, Global_69311[1 /*14*/].f_4);
					if (iVar63 != -99)
					{
						func_201(iParam0, 11, iVar63, 1, 0);
					}
				}
			}
		}
		return true;
	}
	return false;
}

int func_202(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_203(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = _0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_203(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = _0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 += iParam2;
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_64(iParam0);
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_61(iParam0, func_62(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_62(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			get_shop_ped_query_component(iVar38, &Var21);
			if (!_is_dlc_data_empty(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_204(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_203(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = _0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_203(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = _0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 += iParam2;
	}
	return iVar0;
}

int func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return func_64(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_62(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_61(iParam0, func_62(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_206(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

struct<10> func_207(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_209(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_209(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_209(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_209(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_209(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_209(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_209(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_209(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_209(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_209(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_209(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_209(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_209(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_209(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_209(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_209(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_209(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_209(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_209(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_209(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_209(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_209(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_209(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_209(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_209(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_209(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_209(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_209(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_209(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_209(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_209(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_209(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_209(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_209(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_209(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_209(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_209(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_209(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_209(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_209(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_209(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_209(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_209(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_209(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_209(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_209(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_209(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_209(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_209(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_209(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_209(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_209(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_209(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_209(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_209(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_209(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_209(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_209(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_209(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_209(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_209(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_209(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_209(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_209(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_209(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_209(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_209(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_209(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_209(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_209(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_209(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_209(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_209(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_209(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_209(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_209(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_209(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_209(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_209(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_209(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_209(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_209(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	Vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		*iParam0[0] = 0;
		*iParam0[1] = 1;
		*iParam0[2] = 2;
		*iParam0[3] = 3;
		*iParam0[4] = 4;
		*iParam0[5] = 5;
		*iParam0[6] = 6;
		*iParam0[7] = 7;
		*iParam0[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		get_shop_ped_outfit(iParam2, &Var1);
		if (!_is_dlc_data_empty(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						*iParam0[vVar16.z] = func_205(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						*iParam0[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	*iParam0[0] = iParam1;
	*iParam0[1] = iParam2;
	*iParam0[2] = iParam3;
	*iParam0[3] = iParam4;
	*iParam0[4] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[6] = iParam7;
	*iParam0[7] = iParam8;
	*iParam0[8] = iParam9;
}

bool func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Global_69311[1 /*14*/] = {func_260(iParam0, iParam1, iParam2)};
	Global_69310++;
	if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false) && !GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam3)
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				func_132(1229, Global_1347786[func_136(-1)] + 1, -1, 1);
			}
			if (iParam1 == 1)
			{
				func_138(1235, 1, -1);
			}
		}
		else
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				func_132(1229, Global_1347786[func_136(-1)] - 1, -1, 1);
			}
			if (iParam1 == 1)
			{
				func_138(1235, -1, -1);
			}
		}
		if (iParam1 != 5)
		{
			iVar0 = func_140(func_212(iParam1, Global_69311[1 /*14*/].f_2), Global_69309, 0);
			if (iParam3)
			{
				GAMEPLAY::SET_BIT(&iVar0, Global_69311[1 /*14*/].f_1);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&iVar0, Global_69311[1 /*14*/].f_1);
			}
			func_131(func_212(iParam1, Global_69311[1 /*14*/].f_2), iVar0, Global_69309, 1);
		}
		if (iParam4)
		{
			if (func_211(iParam1, Global_69311[1 /*14*/].f_2, &iVar1))
			{
				iVar2 = func_140(iVar1, Global_69309, 0);
				GAMEPLAY::SET_BIT(&iVar2, Global_69311[1 /*14*/].f_1);
				func_131(iVar1, iVar2, Global_69309, 1);
			}
		}
		if (Global_69310 == 1 && iParam3 == 1)
		{
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 == 14)
				{
					if (iParam2 >= 83 && iParam2 <= 90)
					{
						iVar3 = 75 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 14, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 75 && iParam2 <= 82)
					{
						iVar3 = 83 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 14, iVar3, 1, iParam4);
					}
				}
				else if (iParam1 == 8)
				{
					if (iParam2 >= 48 && iParam2 <= 63)
					{
						iVar3 = 64 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 64 && iParam2 <= 79)
					{
						iVar3 = 48 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 96 && iParam2 <= 111)
					{
						iVar3 = 112 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 112 && iParam2 <= 127)
					{
						iVar3 = 96 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 176 && iParam2 <= 191)
					{
						iVar3 = 160 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 160 && iParam2 <= 175)
					{
						iVar3 = 176 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 32 && iParam2 <= 47)
					{
						iVar3 = 0 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 11, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 224 && iParam2 <= 239)
					{
						iVar3 = 16 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 11, iVar3, 1, iParam4);
					}
				}
				else if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = 32 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
					else if (iParam2 >= 16 && iParam2 <= 31)
					{
						iVar3 = 224 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
				}
			}
			else if (iParam0 == joaat("mp_f_freemode_01"))
			{
				if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = 16 + Global_69311[1 /*14*/].f_4;
						func_210(iParam0, 8, iVar3, 1, iParam4);
					}
				}
			}
			Global_69311[1 /*14*/] = {func_260(iParam0, iParam1, iParam2)};
			if (iParam1 == 11)
			{
				iVar4 = func_204(iParam0, iParam2, Global_69311[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_210(iParam0, 8, iVar4, 1, iParam4);
				}
			}
			else if (iParam1 == 8)
			{
				iVar4 = func_202(iParam0, iParam2, Global_69311[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_210(iParam0, 11, iVar4, 1, iParam4);
				}
			}
		}
		Global_69310--;
		return true;
	}
	Global_69310--;
	return false;
}

int func_211(int iParam0, int iParam1, auto uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

int func_212(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

struct<16> func_213(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_215(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_215(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_215(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_215(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_215(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_215(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_215(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_215(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_215(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_215(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_215(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_215(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_215(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_215(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_215(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_215(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_215(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_215(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_215(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_215(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_215(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_215(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_215(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_215(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_215(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_215(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_215(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_215(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_215(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_215(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_215(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_215(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_215(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_215(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_215(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_215(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_215(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_215(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_215(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_215(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_215(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_215(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_215(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_215(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_215(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_215(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_215(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_215(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_215(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_215(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_215(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_215(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_215(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_215(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_215(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_215(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_215(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_215(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_215(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_215(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_215(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_215(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_215(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_215(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_215(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_215(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_215(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_215(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_215(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_215(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_215(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_215(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_215(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_215(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_215(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_215(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_215(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_215(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_215(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_215(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_215(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_215(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_215(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_215(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_215(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_215(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_215(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_215(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_215(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_215(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_215(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_215(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_215(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_215(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_215(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_215(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_215(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_215(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_215(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_215(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_215(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_215(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_215(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_215(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_215(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_215(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_215(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_215(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_215(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_215(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_215(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_215(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_215(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_215(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_215(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_215(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_215(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_215(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_215(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_215(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_215(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_215(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_215(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_215(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_215(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_215(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_215(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_215(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_215(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_215(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_215(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_215(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_215(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_215(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_215(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_215(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_215(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_215(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_215(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_215(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_215(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_215(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_215(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_215(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_215(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_215(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_215(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_215(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_215(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_215(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_215(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_215(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_215(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_215(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_215(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_215(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_215(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_215(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_215(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_215(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_215(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_215(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_215(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_215(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_215(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_215(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_215(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_215(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_215(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_215(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_215(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_215(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_215(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_215(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_215(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_215(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_215(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_215(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_215(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_215(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_215(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_215(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_215(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_215(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_215(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_215(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_215(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_215(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_215(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_215(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_215(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_215(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_215(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_215(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_215(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_215(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_215(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_215(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_215(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_215(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_215(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_215(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_215(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	Vector3 vVar16;
	int iVar19;
	
	*iParam0[0] = 0;
	*iParam0[2] = -99;
	*iParam0[3] = 0;
	*iParam0[4] = 0;
	*iParam0[6] = 0;
	*iParam0[5] = 0;
	*iParam0[8] = 0;
	*iParam0[9] = 0;
	*iParam0[10] = 0;
	*iParam0[1] = 0;
	*iParam0[7] = 0;
	*iParam0[11] = 0;
	*iParam0[13] = -99;
	*iParam0[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		*iParam0[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	_0xF3FBE2D50A6A8C28(iVar0, 0);
	get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!_is_dlc_data_empty(Var1))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (_get_prop_from_outfit(Var1.f_1, iVar19, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						*iParam0[func_216(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_216(vVar16.z)] = func_205(iParam1, vVar16.x, func_216(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_216(vVar16.z)] = vVar16.y;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			*iParam0[13] = -99;
		}
		else
		{
			*iParam0[13] = Var1.f_1;
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	*iParam0[0] = iParam1;
	*iParam0[2] = iParam2;
	*iParam0[3] = iParam3;
	*iParam0[4] = iParam4;
	*iParam0[6] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[8] = iParam7;
	*iParam0[9] = iParam8;
	*iParam0[10] = iParam9;
	*iParam0[1] = iParam10;
	*iParam0[7] = iParam11;
	*iParam0[11] = iParam12;
	*iParam0[13] = iParam13;
	*iParam0[14] = -99;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_217(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_218(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_140(iVar2, iVar0, 0);
		GAMEPLAY::CLEAR_BIT(&iVar3, iVar1);
		func_131(iVar2, iVar3, iVar0, 1);
	}
}

int func_218(auto uParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (iParam4)
	{
		if (Global_2560780)
		{
			iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = _0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (iParam5)
	{
		iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = _0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_218(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_140(iVar2, iVar0, 0);
		GAMEPLAY::SET_BIT(&iVar3, iVar1);
		func_131(iVar2, iVar3, iVar0, 1);
	}
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_260(iParam0, iParam1, iParam2)};
	return GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, true);
}

void func_221(int iParam0)
{
	switch (iParam0)
	{
		case 1449707070:
		case -773166702:
			func_222(3593, 1, -1, 1);
			break;
		
		case -1912404917:
		case -308456130:
			func_222(3615, 1, -1, 1);
			break;
		
		case 603600547:
		case -1599080941:
			func_197(152, 1, -1, 1);
			break;
		
		case 1629732254:
		case 1924108767:
			func_197(151, 1, -1, 1);
			break;
		
		case 1470149028:
		case 2134049184:
			func_222(3783, 1, -1, 1);
			break;
		
		case -1357324997:
		case 513852309:
			func_222(3784, 1, -1, 1);
			break;
		
		case -399192206:
		case 342339363:
			func_222(3785, 1, -1, 1);
			break;
		
		case -890006288:
		case -655247304:
			func_222(3786, 1, -1, 1);
			break;
		
		case 64652989:
		case 799565220:
			func_222(3787, 1, -1, 1);
			break;
		
		case -161453111:
		case -715443961:
			func_222(3788, 1, -1, 1);
			break;
		
		case 795762148:
		case -905176471:
			func_222(3789, 1, -1, 1);
			break;
		
		case 296559202:
		case -121210915:
			func_222(3790, 1, -1, 1);
			break;
		
		case 1253971075:
		case -426585226:
			func_222(3791, 1, -1, 1);
			break;
		
		case 1023408391:
		case -1823527696:
			func_222(3792, 1, -1, 1);
			break;
		
		case 1504591288:
		case -1899487013:
			func_222(3793, 1, -1, 1);
			break;
		
		case 2023063246:
		case 613041245:
			func_222(3794, 1, -1, 1);
			break;
		
		case 1718016625:
		case -149165695:
			func_222(3795, 1, -1, 1);
			break;
		
		case 1428731893:
		case -923398858:
			func_222(3796, 1, -1, 1);
			break;
		
		case 1101074662:
		case -1017249282:
			func_222(3797, 1, -1, 1);
			break;
		
		case -1351684992:
		case -726555483:
			func_222(3798, 1, -1, 1);
			break;
		
		case -1657386993:
		case -372257055:
			func_222(3799, 1, -1, 1);
			break;
		
		case -1946409573:
		case -114397794:
			func_222(3800, 1, -1, 1);
			break;
		
		case 2042003728:
		case -1101989916:
			func_222(3801, 1, -1, 1);
			break;
		
		case -170362538:
		case -1749374280:
			func_222(3802, 1, -1, 1);
			break;
		
		case 2032023736:
		case -1560482447:
			func_222(3594, 1, -1, 1);
			break;
		
		case 1781897959:
		case 756154773:
			func_222(3595, 1, -1, 1);
			break;
		
		case -1077066219:
		case 1970016848:
			func_222(3596, 1, -1, 1);
			break;
		
		case -1347050010:
		case -2018330915:
			func_222(3597, 1, -1, 1);
			break;
		
		case -1656225525:
		case 1651272765:
			func_222(3598, 1, -1, 1);
			break;
		
		case 284813421:
		case 1353042096:
			func_222(3599, 1, -1, 1);
			break;
		
		case 1936268068:
		case -567597622:
			func_222(3616, 1, -1, 1);
			break;
		
		case -893708693:
		case -477604174:
			func_222(4260, 1, -1, 1);
			break;
		
		case -660753872:
		case 364034822:
			func_222(4257, 1, -1, 1);
			break;
		
		case -1412999036:
		case 136191965:
			func_222(4269, 1, -1, 1);
			break;
		
		case -1121780933:
		case 442582143:
			func_222(4261, 1, -1, 1);
			break;
		
		case -2121038819:
		case 84482511:
			func_222(4259, 1, -1, 1);
			break;
		
		case -1880350514:
		case 971670421:
			func_222(4268, 1, -1, 1);
			break;
		
		case 1724501642:
		case 736159614:
			func_222(4265, 1, -1, 1);
			break;
		
		case 1953982949:
		case 1667815057:
			func_222(4258, 1, -1, 1);
			break;
		
		case 1100809265:
		case 1294641685:
			func_222(4264, 1, -1, 1);
			break;
		
		case 1341235418:
		case -2030199366:
			func_222(4267, 1, -1, 1);
			break;
		
		case 202917910:
		case 601407264:
			func_222(4262, 1, -1, 1);
			break;
		
		case 509799595:
		case 764138118:
			func_222(4263, 1, -1, 1);
			break;
		
		case 797675260:
		case 1968955913:
			func_222(4266, 1, -1, 1);
			break;
		
		case -1155192675:
		case 1485373828:
			func_222(4247, 1, -1, 1);
			break;
		
		case -1928704920:
		case -71251979:
			func_222(4248, 1, -1, 1);
			break;
		
		case -524880960:
		case 235269247:
			func_222(4249, 1, -1, 1);
			break;
		
		case -1356263259:
		case 517180954:
			func_222(4250, 1, -1, 1);
			break;
		
		case 68860555:
		case 756099733:
			func_222(4251, 1, -1, 1);
			break;
		
		case -704258466:
		case -1329647121:
			func_222(4252, 1, -1, 1);
			break;
		
		case -902445334:
		case -975545307:
			func_222(4253, 1, -1, 1);
			break;
		
		case -133258609:
		case -721683864:
			func_222(4254, 1, -1, 1);
			break;
		
		case -296251615:
		case -356899352:
			func_222(4255, 1, -1, 1);
			break;
		
		case 479292308:
		case -1253393710:
			func_222(4256, 1, -1, 1);
			break;
	}
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_26();
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

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam4 || iParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_251(1231, iParam5);
			}
		}
		else
		{
			func_251(1231, iParam5);
		}
	}
	if (iParam1)
	{
		if (!func_250(iParam0, -1))
		{
			func_247(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_245(iParam0) == 0)
			{
				func_239(12, func_244(iParam0, 3), func_243(iParam0, 3), func_242(iParam0, 3), func_241(iParam0, 3), -1, 0, 0, 0, -1);
				func_238(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_233(iParam0, 1, iParam5);
		}
		if (Global_1338622.f_944 == 0)
		{
			Global_1338622.f_945 = iParam0;
		}
	}
	else
	{
		if (func_250(iParam0, iParam5))
		{
			func_247(iParam0, 0, iParam5);
			func_138(1231, -1, iParam5);
		}
		if (func_245(iParam0) == 1)
		{
			func_238(iParam0, 0);
		}
		if (func_232(iParam0, iParam5))
		{
			func_224(iParam0, 0, iParam5);
		}
	}
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_232(iParam0, iParam2))
		{
			func_225(iParam0, 1, iParam2);
		}
	}
	else if (func_232(iParam0, iParam2))
	{
		func_225(iParam0, 0, iParam2);
	}
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_231(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (iParam1)
		{
			GAMEPLAY::SET_BIT(&iVar0, func_230(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iVar0, func_230(iVar1));
		}
		func_131(func_226(iParam0), iVar0, iParam2, 1);
	}
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_229(iVar0);
	if ((func_228() == 0 || func_227() == 0) || (func_228() == 999 && func_227() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1041;
				break;
			
			case 1:
				return 1042;
				break;
			
			case 2:
				return 1043;
				break;
			
			case 3:
				return 1044;
				break;
			
			case 4:
				return 1045;
				break;
			
			case 5:
				return 1046;
				break;
			
			case 6:
				return 1480;
				break;
			
			case 7:
				return 1481;
				break;
			
			case 8:
				return 1482;
				break;
			
			case 9:
				return 1483;
				break;
			
			case 10:
				return 1939;
				break;
			
			case 11:
				return 1940;
				break;
			
			case 12:
				return 1941;
				break;
			
			case 13:
				return 2401;
				break;
			
			case 14:
				return 2421;
				break;
			
			case 15:
				return 2424;
				break;
			
			case 16:
				return 2427;
				break;
			
			case 17:
				return 2590;
				break;
			
			case 18:
				return 2593;
				break;
			
			case 19:
				return 2596;
				break;
			}
	}
	return 3949;
}

auto func_227()
{
	return Global_25121;
}

auto func_228()
{
	return Global_25120;
}

int func_229(int iParam0)
{
	return iParam0 / 32;
}

int func_230(int iParam0)
{
	return iParam0 % 32;
}

auto func_231(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_140(func_226(iParam0), iParam1, 0);
	return uVar0;
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_231(iParam0, iParam1);
	iVar1 = func_230(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(iVar0, iVar1);
}

void func_233(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_237(iParam0))
		{
			func_234(iParam0, 1, iParam2);
		}
	}
	else if (func_237(iParam0))
	{
		func_234(iParam0, 0, iParam2);
	}
}

void func_234(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_236(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (iParam1)
		{
			GAMEPLAY::SET_BIT(&iVar0, func_230(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iVar0, func_230(iVar1));
		}
		func_131(func_235(uParam0), iVar0, iParam2, 1);
	}
}

int func_235(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_229(iVar0);
	if ((func_228() == 0 || func_227() == 0) || (func_228() == 999 && func_227() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1036;
				break;
			
			case 1:
				return 1037;
				break;
			
			case 2:
				return 1038;
				break;
			
			case 3:
				return 1039;
				break;
			
			case 4:
				return 1040;
				break;
			
			case 5:
				return 1484;
				break;
			
			case 6:
				return 1485;
				break;
			
			case 7:
				return 1486;
				break;
			
			case 8:
				return 1487;
				break;
			
			case 9:
				return 1935;
				break;
			
			case 10:
				return 1936;
				break;
			
			case 11:
				return 1937;
				break;
			
			case 12:
				return 1938;
				break;
			
			case 13:
				return 2402;
				break;
			
			case 14:
				return 2422;
				break;
			
			case 15:
				return 2425;
				break;
			
			case 16:
				return 2428;
				break;
			
			case 17:
				return 2591;
				break;
			
			case 18:
				return 2594;
				break;
			
			case 19:
				return 2597;
				break;
			}
	}
	return 3949;
}

auto func_236(auto uParam0)
{
	auto uVar0;
	
	uVar0 = func_140(func_235(uParam0), -1, 0);
	return uVar0;
}

int func_237(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_236(uParam0);
	iVar1 = uParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_230(iVar1));
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (iParam1)
		{
			GAMEPLAY::SET_BIT(&(Global_2467971.f_1027[func_229(iVar0)]), func_230(iVar0));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2467971.f_1027[func_229(iVar0)]), func_230(iVar0));
		}
	}
}

void func_239(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	auto uVar0;
	
	uVar0 = func_240(&Global_1344708);
	Global_1344708[uVar0 /*105*/] = iParam0;
	StringCopy(&(Global_1344708[uVar0 /*105*/].f_17), sParam3, 64);
	StringCopy(&(Global_1344708[uVar0 /*105*/].f_1), sParam4, 64);
	StringCopy(&(Global_1344708[uVar0 /*105*/].f_33), sParam1, 64);
	StringCopy(&(Global_1344708[uVar0 /*105*/].f_49), sParam2, 64);
	Global_1344708[uVar0 /*105*/].f_97 = iParam5;
	Global_1344708[uVar0 /*105*/].f_104 = iParam9;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!is_string_null_or_empty(sParam8))
	{
		StringCopy(&(Global_1344708[uVar0 /*105*/].f_98), sParam8, 24);
	}
}

int func_240(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (*uParam0[iVar1 /*105*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_241(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_242(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 88:
			return "PickUpCrateFirst";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_243(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 88:
			return "TAT_FM_BELLE_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_244(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

int func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_230(iVar1));
}

auto func_246(int iParam0)
{
	auto uVar0;
	
	uVar0 = Global_2467971.f_1027[func_229(iParam0)];
	return uVar0;
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_249(iParam0) == 3949)
	{
		return;
	}
	iVar0 = func_248(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (iParam1)
		{
			GAMEPLAY::SET_BIT(&iVar0, func_230(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iVar0, func_230(iVar1));
		}
		func_131(func_249(iParam0), iVar0, iParam2, 1);
	}
}

auto func_248(auto uParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_140(func_249(uParam0), iParam1, 0);
	return uVar0;
}

int func_249(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_229(iVar0);
	if ((func_228() == 0 || func_227() == 0) || (func_228() == 999 && func_227() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1031;
				break;
			
			case 1:
				return 1032;
				break;
			
			case 2:
				return 1033;
				break;
			
			case 3:
				return 1034;
				break;
			
			case 4:
				return 1035;
				break;
			
			case 5:
				return 1495;
				break;
			
			case 6:
				return 1748;
				break;
			
			case 7:
				return 1942;
				break;
			
			case 8:
				return 1943;
				break;
			
			case 9:
				return 1944;
				break;
			
			case 10:
				return 1945;
				break;
			
			case 11:
				return 1946;
				break;
			
			case 12:
				return 1947;
				break;
			
			case 13:
				return 2400;
				break;
			
			case 14:
				return 2420;
				break;
			
			case 15:
				return 2423;
				break;
			
			case 16:
				return 2426;
				break;
			
			case 17:
				return 2589;
				break;
			
			case 18:
				return 2592;
				break;
			
			case 19:
				return 2595;
				break;
			}
	}
	return 3949;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_249(iParam0) == 3949)
	{
		return false;
	}
	iVar0 = func_248(iParam0, iParam1);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_230(iVar1));
}

void func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_136(iParam1), 0);
	iVar0++;
	if (!func_139(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_132(iParam0, iVar0, iParam1, 1);
	}
}

int func_252(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_259(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_258() || func_257())
					{
						iVar1 = 400;
						if (func_256() && (func_255() || func_254()))
						{
							iVar1 = 0;
						}
						func_259(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_259(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_253(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_258() || func_257())
					{
						iVar1 = 450;
						if (func_256() && (func_255() || func_254()))
						{
							iVar1 = 0;
						}
						func_259(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_259(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_253(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_258() || func_257())
					{
						iVar1 = 380;
						if (func_256() && (func_255() || func_254()))
						{
							iVar1 = 0;
						}
						func_259(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_259(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_253(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round(to_float(20000) * Global_262145.f_2902), 0);
					break;
				
				case 1:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round(to_float(1400) * Global_262145.f_2903), 2);
					break;
				
				case 2:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round(to_float(9750) * Global_262145.f_2904), 3);
					break;
				
				case 3:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round(to_float(2150) * Global_262145.f_2905), 0);
					break;
				
				case 4:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2906), 0);
					break;
				
				case 54:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round(to_float(12400) * Global_262145.f_2907), 1);
					break;
				
				case 5:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round(to_float(3500) * Global_262145.f_2908), 0);
					break;
				
				case 6:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round(to_float(4950) * Global_262145.f_2909), 2);
					break;
				
				case 55:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round(to_float(1350) * Global_262145.f_2910), 1);
					break;
				
				case 7:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round(to_float(1450) * Global_262145.f_2911), 0);
					break;
				
				case 8:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round(to_float(2700) * Global_262145.f_2912), 7);
					break;
				
				case 9:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round(to_float(1200) * Global_262145.f_2913), 0);
					break;
				
				case 10:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round(to_float(1500) * Global_262145.f_2914), 0);
					break;
				
				case 11:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round(to_float(2650) * Global_262145.f_2915), 0);
					break;
				
				case 56:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round(to_float(1900) * Global_262145.f_2916), 1);
					break;
				
				case 12:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round(to_float(4950) * Global_262145.f_2917), 2);
					break;
				
				case 57:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round(to_float(2400) * Global_262145.f_2918), 1);
					break;
				
				case 58:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round(to_float(5100) * Global_262145.f_2919), 1);
					break;
				
				case 59:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round(to_float(7400) * Global_262145.f_2920), 1);
					break;
				
				case 60:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round(to_float(10000) * Global_262145.f_2921), 1);
					break;
				
				case 17:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round(to_float(2400) * Global_262145.f_2926), 2);
					break;
				
				case 18:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round(to_float(5100) * Global_262145.f_2927), 2);
					break;
				
				case 19:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round(to_float(3600) * Global_262145.f_2928), 2);
					break;
				
				case 20:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round(to_float(10000) * Global_262145.f_2929), 3);
					break;
				
				case 21:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round(to_float(12500) * Global_262145.f_2930), 3);
					break;
				
				case 22:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round(to_float(10000) * Global_262145.f_2931), 3);
					break;
				
				case 23:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round(to_float(5000) * Global_262145.f_2932), 3);
					break;
				
				case 24:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round(to_float(7500) * Global_262145.f_2933), 3);
					break;
				
				case 25:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round(to_float(3750) * Global_262145.f_2934), 2);
					break;
				
				case 26:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round(to_float(3750) * Global_262145.f_2935), 3);
					break;
				
				case 27:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round(to_float(4800) * Global_262145.f_2936), 3);
					break;
				
				case 28:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round(to_float(3500) * Global_262145.f_2937), 3);
					break;
				
				case 61:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round(to_float(12350) * Global_262145.f_2938), 1);
					break;
				
				case 62:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round(to_float(1900) * Global_262145.f_2939), 1);
					break;
				
				case 63:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round(to_float(4500) * Global_262145.f_2940), 1);
					break;
				
				case 64:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round(to_float(12250) * Global_262145.f_2941), 1);
					break;
				
				case 65:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round(to_float(12300) * Global_262145.f_2942), 1);
					break;
				
				case 29:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round(to_float(2500) * Global_262145.f_2943), 0);
					break;
				
				case 30:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2944), 0);
					break;
				
				case 31:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round(to_float(10000) * Global_262145.f_2945), 0);
					break;
				
				case 66:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round(to_float(7500) * Global_262145.f_2946), 1);
					break;
				
				case 32:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round(to_float(5000) * Global_262145.f_2947), 2);
					break;
				
				case 33:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round(to_float(7300) * Global_262145.f_2948), 3);
					break;
				
				case 34:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round(to_float(7250) * Global_262145.f_2949), 2);
					break;
				
				case 35:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round(to_float(11900) * Global_262145.f_2950), 0);
					break;
				
				case 36:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round(to_float(2750) * Global_262145.f_2951), 0);
					break;
				
				case 37:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round(to_float(1750) * Global_262145.f_2952), 0);
					break;
				
				case 38:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round(to_float(7300) * Global_262145.f_2953), 3);
					break;
				
				case 39:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round(to_float(3250) * Global_262145.f_2954), 2);
					break;
				
				case 40:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round(to_float(1000) * Global_262145.f_2955), 0);
					break;
				
				case 67:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round(to_float(5000) * Global_262145.f_2956), 1);
					break;
				
				case 41:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round(to_float(7500) * Global_262145.f_2957), 2);
					break;
				
				case 68:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round(to_float(5100) * Global_262145.f_2958), 1);
					break;
				
				case 42:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round(to_float(5050) * Global_262145.f_2959), 0);
					break;
				
				case 43:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round(to_float(2450) * Global_262145.f_2960), 2);
					break;
				
				case 44:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round(to_float(4950) * Global_262145.f_2961), 0);
					break;
				
				case 45:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round(to_float(5100) * Global_262145.f_2962), 0);
					break;
				
				case 46:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round(to_float(12250) * Global_262145.f_2963), 0);
					break;
				
				case 47:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round(to_float(1150) * Global_262145.f_2964), 3);
					break;
				
				case 48:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round(to_float(7500) * Global_262145.f_2965), 3);
					break;
				
				case 49:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round(to_float(7600) * Global_262145.f_2966), 3);
					break;
				
				case 50:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round(to_float(2600) * Global_262145.f_2967), 2);
					break;
				
				case 51:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round(to_float(2500) * Global_262145.f_2968), 3);
					break;
				
				case 52:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round(to_float(7450) * Global_262145.f_2969), 3);
					break;
				
				case 53:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round(to_float(7500) * Global_262145.f_2970), 0);
					break;
				
				case 69:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round(to_float(10000) * Global_262145.f_2971), 1);
					break;
				
				case 70:
					func_259(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round(to_float(2500) * Global_262145.f_2972), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_259(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2925), 0);
						break;
					
					case 71:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					
					case 72:
						func_259(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_259(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_259(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_253(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		*sParam0.f_7 *= 2;
	}
	return *sParam0.f_11 != -1;
}

void func_253(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = iParam2 - iParam3;
	iVar1 = _0x278F76C3B0A8F109(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (_0xFF56381874F82086(iParam1, iVar0, &Var2))
		{
			if (!_is_dlc_data_empty(Var2))
			{
				*sParam0.f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				*sParam0.f_5 = Var2.f_3;
				*sParam0.f_4 = Var2.f_2;
				*sParam0.f_8 = Var2.f_6;
				*sParam0.f_6 = iParam1;
				*sParam0.f_7 = Var2.f_4;
				*sParam0.f_9 = iParam2 / 32;
				*sParam0.f_10 = iParam2 % 32;
				*sParam0.f_12 = Var2.f_5;
			}
		}
	}
}

bool func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 5))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, true) || GAMEPLAY::IS_BIT_SET(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, true) || GAMEPLAY::IS_BIT_SET(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, true) || GAMEPLAY::IS_BIT_SET(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				GAMEPLAY::SET_BIT(&iVar4, true);
				GAMEPLAY::SET_BIT(&iVar4, 3);
				GAMEPLAY::SET_BIT(&iVar4, 5);
				GAMEPLAY::SET_BIT(&Global_25, true);
				GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar4, true);
					GAMEPLAY::SET_BIT(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 2) || GAMEPLAY::IS_BIT_SET(Global_25, 4))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 2) || GAMEPLAY::IS_BIT_SET(iVar0, 4))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 8))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, 2) || GAMEPLAY::IS_BIT_SET(iVar3, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_256()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_257()
{
	return true;
}

bool func_258()
{
	return true;
}

void func_259(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char[32] cVar0;
	
	*sParam0.f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	*sParam0.f_4 = get_hash_key(sParam4);
	*sParam0.f_5 = get_hash_key(sParam5);
	*sParam0.f_8 = get_hash_key(sParam6);
	*sParam0.f_6 = iParam7;
	*sParam0.f_7 = iParam8;
	*sParam0.f_9 = iParam1 / 32;
	*sParam0.f_10 = iParam1 % 32;
	*sParam0.f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((*sParam0.f_6 == 0 || *sParam0.f_6 == 1) || *sParam0.f_6 == 2)
		{
		}
		else if (*sParam0.f_6 == 3 || *sParam0.f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((*sParam0.f_11 == 13 || *sParam0.f_11 == 14) || *sParam0.f_11 == 15) || *sParam0.f_11 == 16) || *sParam0.f_11 == 71) || *sParam0.f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (are_strings_equal(sParam6, "torsoDecal") || are_strings_equal(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((*sParam0.f_11 == 0 || *sParam0.f_11 == 1) || *sParam0.f_11 == 2) || *sParam0.f_11 == 4) || *sParam0.f_11 == 3) || *sParam0.f_11 == 54) || *sParam0.f_11 == 5) || *sParam0.f_11 == 6) || *sParam0.f_11 == 55) || *sParam0.f_11 == 7) || *sParam0.f_11 == 8) || *sParam0.f_11 == 9) || *sParam0.f_11 == 10) || *sParam0.f_11 == 11) || *sParam0.f_11 == 56) || *sParam0.f_11 == 12) || *sParam0.f_11 == 57) || *sParam0.f_11 == 58) || *sParam0.f_11 == 59) || *sParam0.f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || *sParam0.f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			*sParam0.f_5 = get_hash_key(&cVar0);
			if (_get_tattoo_zone(*sParam0.f_4, *sParam0.f_5) == 7)
			{
				*sParam0.f_11 = -1;
			}
		}
	}
}

struct<14> func_260(int iParam0, int iParam1, int iParam2)
{
	func_299();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_283(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_261(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_282(iParam1);
			break;
		
		case 11:
			func_281(iParam1);
			break;
		
		case 8:
			func_280(iParam1);
			break;
		
		case 9:
			func_279(iParam1);
			break;
		
		case 3:
			func_278(iParam1);
			break;
		
		case 4:
			func_277(iParam1);
			break;
		
		case 6:
			func_276(iParam1);
			break;
		
		case 1:
			func_275(iParam1);
			break;
		
		case 7:
			func_274(iParam1);
			break;
		
		case 10:
			func_273(iParam1);
			break;
		
		case 14:
			func_272(iParam1);
			break;
		
		case 12:
			func_271(iParam1);
			break;
		
		case 5:
			func_270(iParam1);
			break;
		
		case 0:
			func_268(iParam1);
			break;
		
		case 13:
			func_262(iParam1);
			break;
	}
}

void func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_263(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_267(iParam8);
	if ((*uParam0.f_2 >= 10 && *uParam0.f_5 >= 0) && *uParam0.f_5 < 3)
	{
		if (!iParam10)
		{
		}
		*uParam0.f_2 = 0;
	}
	if (get_hash_key(sParam3) != get_hash_key("NO_LABEL"))
	{
	}
	if (iParam7)
	{
		GAMEPLAY::SET_BIT(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		GAMEPLAY::SET_BIT(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, 5);
		}
		GAMEPLAY::SET_BIT(uParam0.f_6, true);
		GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		GAMEPLAY::SET_BIT(uParam0.f_6, 6);
		if (func_266(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_265(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_265(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_265(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_265(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_265(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_265(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		GAMEPLAY::SET_BIT(uParam0.f_6, false);
		GAMEPLAY::SET_BIT(uParam0.f_6, 5);
		if (func_264(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, true);
		}
		if (func_264(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
		if (!func_264(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, 4);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_266(14))
			{
				return;
			}
			iVar0 = func_140(func_212(iParam1, *uParam0.f_2), Global_69309, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, true);
			}
			iVar0 = func_140(func_206(iParam1, *uParam0.f_2), Global_69309, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
			{
				GAMEPLAY::SET_BIT(uParam0.f_6, 2);
			}
			if (func_211(iParam1, *uParam0.f_2, &iVar1))
			{
				iVar0 = func_140(iVar1, Global_69309, 0);
				if (!GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
				{
					GAMEPLAY::SET_BIT(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, true);
			GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			GAMEPLAY::SET_BIT(uParam0.f_6, true);
			GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
	}
}

int func_264(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

int func_265(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_218(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_140(iVar2, iVar0, 0);
		return GAMEPLAY::IS_BIT_SET(iVar3, iVar1);
	}
	return false;
}

int func_266(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 4;
	func_269(iVar0, iParam0, 0);
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = _0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_outfit(iVar17, &Var2);
			if (!_is_dlc_data_empty(Var2))
			{
				if (iVar18 == iParam1 - iParam2)
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_263(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_263(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = _get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			get_shop_ped_query_prop(iVar38, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iVar39 == iParam1 - iParam2)
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_263(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_62(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			get_shop_ped_query_component(iVar58, &Var41);
			if (!_is_dlc_data_empty(Var41))
			{
				if (iVar59 == iParam1 - iParam2)
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_263(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 28);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12--;
			}
			iVar1 = round(to_float(iVar1) * Global_262145.f_2041[iVar12] * Global_275816.f_26);
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2162[iVar13] * Global_275816.f_27);
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2187[iVar14] * Global_275816.f_56);
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2316[iVar15] * Global_275816.f_28);
		}
	}
	if (iParam0 >= 327)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_26);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_56);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_28);
			}
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 6);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4134 != -1)
			{
				iVar1 = Global_262145.f_4134;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4135 != -1)
			{
				iVar1 = Global_262145.f_4135;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4136 != -1)
			{
				iVar1 = Global_262145.f_4136;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4137 != -1)
			{
				iVar1 = Global_262145.f_4137;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4138 != -1)
			{
				iVar1 = Global_262145.f_4138;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4139 != -1)
			{
				iVar1 = Global_262145.f_4139;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 55);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_58);
			}
			return;
			break;
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_58);
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 26);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_29);
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_2014[iVar11] * Global_275816.f_29);
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_1757[iVar11] * Global_275816.f_25);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_25);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_1243[iVar11] * Global_275816.f_23);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_23);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 16);
		return;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 36);
		return;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[77]);
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[78]);
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[80]);
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[81]);
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[87]);
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[89]);
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[176]);
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[177]);
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[178]);
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[186]);
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[187]);
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[191]);
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[199]);
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[200]);
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[201]);
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[208]);
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[209]);
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[210]);
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[211]);
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[212]);
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[213]);
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[214]);
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[215]);
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[216]);
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[217]);
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[218]);
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[219]);
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[220]);
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[221]);
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[222]);
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[223]);
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[240]);
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[243]);
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[250]);
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[251]);
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 136);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_250(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_250(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_1500[7]);
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_250(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar11]);
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = iParam0 - 16;
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar12]);
		}
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_24);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_250(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[4] * Global_275816.f_24);
		}
	}
	else if (iParam0 == 7)
	{
		if (func_250(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_1500[7] * Global_275816.f_24);
		}
	}
	else if (iParam0 == 9)
	{
		if (func_250(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[9] * Global_275816.f_24);
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar11] * Global_275816.f_24);
		}
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_269(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[0]);
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[1]);
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[2]);
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[3]);
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[4]);
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[5]);
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[6]);
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[7]);
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[8]);
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[9]);
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[10]);
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[11]);
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[12]);
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[13]);
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[14]);
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[15]);
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[16]);
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[17]);
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[18]);
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[19]);
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[20]);
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[21]);
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[22]);
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[23]);
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[24]);
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[25]);
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[26]);
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[27]);
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[28]);
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[29]);
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[30]);
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[31]);
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[32]);
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[33]);
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[34]);
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[35]);
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[36]);
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[37]);
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[38]);
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[39]);
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[40]);
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[41]);
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[42]);
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[43]);
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[44]);
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[45]);
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[46]);
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[47]);
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[48]);
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[49]);
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[50]);
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[51]);
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[52]);
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[53]);
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[54]);
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[55]);
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[56]);
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[57]);
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[58]);
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[59]);
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[60]);
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[61]);
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[62]);
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[63]);
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[64]);
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[65]);
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[66]);
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[67]);
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[68]);
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[69]);
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[70]);
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[71]);
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[72]);
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[73]);
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[74]);
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[75]);
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_269(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_298(iParam1);
			break;
		
		case 11:
			func_297(iParam1);
			break;
		
		case 8:
			func_296(iParam1);
			break;
		
		case 9:
			func_295(iParam1);
			break;
		
		case 3:
			func_294(iParam1);
			break;
		
		case 4:
			func_293(iParam1);
			break;
		
		case 6:
			func_292(iParam1);
			break;
		
		case 1:
			func_291(iParam1);
			break;
		
		case 7:
			func_290(iParam1);
			break;
		
		case 10:
			func_289(iParam1);
			break;
		
		case 14:
			func_288(iParam1);
			break;
		
		case 12:
			func_287(iParam1);
			break;
		
		case 5:
			func_286(iParam1);
			break;
		
		case 0:
			func_285(iParam1);
			break;
		
		case 13:
			func_284(iParam1);
			break;
	}
}

void func_284(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 3;
	func_269(iVar0, iParam0, 0);
}

void func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 26);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_288(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12--;
			}
			iVar1 = round(to_float(iVar1) * Global_262145.f_952[iVar12] * Global_275816.f_18);
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1073[iVar13] * Global_275816.f_19);
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1098[iVar14] * Global_275816.f_20);
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1227[iVar15] * Global_275816.f_21);
		}
	}
	if (iParam0 >= 327)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_269(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_18);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_20);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_21);
			}
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 7);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 92);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_57);
			}
			return;
			break;
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_57);
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 26);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_925[iVar11] * Global_275816.f_22);
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_668[iVar11] * Global_275816.f_17);
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_269(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_17);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_173[iVar11] * Global_275816.f_15);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_269(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_15);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 16);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 46);
			return;
			break;
	}
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[80]);
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[81]);
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[82]);
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[87]);
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[16]);
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[17]);
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[19]);
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[20]);
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[21]);
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[22]);
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[23]);
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[24]);
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[27]);
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[28]);
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[30]);
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = false;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[32]);
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_250(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_430[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_250(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974);
		}
		else
		{
			iVar1 = round(to_float(60) * Global_262145.f_430[17]);
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_250(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973);
		}
		else
		{
			iVar1 = round(to_float(55) * Global_262145.f_430[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar11]);
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = iParam0 - 32;
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar12]);
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = iParam0 - 160 + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar13]);
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = iParam0 - 160 + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar14]);
		}
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_16);
	if (iParam0 >= 241)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_269(iVar10, iParam0, 241);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_250(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_430[23] * Global_275816.f_16);
		}
	}
	else if (iParam0 == 17)
	{
		if (func_250(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(60) * Global_262145.f_430[17] * Global_275816.f_16);
		}
	}
	else if (iParam0 == 28)
	{
		if (func_250(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(55) * Global_262145.f_430[28] * Global_275816.f_16);
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar11] * Global_275816.f_16);
		}
	}
	if (iParam0 >= 237)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_269(iVar10, iParam0, 237);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[0]);
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[1]);
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[2]);
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[3]);
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[4]);
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[5]);
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[6]);
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[7]);
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[8]);
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[9]);
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[10]);
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[11]);
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[12]);
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[13]);
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[14]);
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[15]);
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[16]);
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[17]);
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[18]);
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[19]);
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[20]);
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[21]);
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[22]);
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[23]);
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[24]);
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[25]);
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[26]);
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[27]);
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[28]);
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[29]);
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[30]);
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[31]);
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[32]);
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[33]);
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[34]);
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[35]);
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[36]);
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[37]);
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[38]);
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[39]);
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[40]);
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[41]);
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[42]);
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[43]);
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[44]);
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[45]);
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[46]);
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[47]);
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[48]);
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[49]);
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[50]);
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[51]);
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[52]);
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[53]);
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[54]);
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[55]);
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[56]);
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[57]);
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[58]);
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[59]);
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[60]);
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[61]);
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[62]);
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[63]);
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[64]);
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[65]);
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[66]);
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[67]);
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[68]);
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[69]);
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[70]);
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[71]);
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[72]);
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[73]);
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[74]);
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[75]);
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_269(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_263(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_299()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_300()
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

bool func_301(int iParam0, int iParam1)
{
	char* sVar0;
	struct<14> Var13;
	
	if (iParam0 == 10)
	{
		if ((func_59(player_id()) && func_252(&sVar0, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1)) || (!func_59(player_id()) && func_252(&sVar0, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1)))
		{
			if (!func_302(get_hash_key(&sVar0)))
			{
				return true;
			}
		}
	}
	else if (iParam0 != -1)
	{
		if ((iParam1 != -1 && iParam1 != -99) && func_220(func_300(), iParam0, iParam1))
		{
			Var13 = {func_260(func_300(), iParam0, iParam1)};
			if (GAMEPLAY::IS_BIT_SET(Var13.f_6, true) && !func_302(get_hash_key(&(Var13.f_8))))
			{
				return true;
			}
		}
	}
	return false;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 1449707070:
		case -773166702:
			return func_303(3593, -1, -1);
			break;
		
		case -1912404917:
		case -308456130:
			return func_303(3615, -1, -1);
			break;
		
		case 603600547:
		case -1599080941:
			return func_199(152, -1);
			break;
		
		case 1629732254:
		case 1924108767:
			return func_199(151, -1);
			break;
		
		case 1470149028:
		case 2134049184:
			return func_303(3783, -1, -1);
			break;
		
		case -1357324997:
		case 513852309:
			return func_303(3784, -1, -1);
			break;
		
		case -399192206:
		case 342339363:
			return func_303(3785, -1, -1);
			break;
		
		case -890006288:
		case -655247304:
			return func_303(3786, -1, -1);
			break;
		
		case 64652989:
		case 799565220:
			return func_303(3787, -1, -1);
			break;
		
		case -161453111:
		case -715443961:
			return func_303(3788, -1, -1);
			break;
		
		case 795762148:
		case -905176471:
			return func_303(3789, -1, -1);
			break;
		
		case 296559202:
		case -121210915:
			return func_303(3790, -1, -1);
			break;
		
		case 1253971075:
		case -426585226:
			return func_303(3791, -1, -1);
			break;
		
		case 1023408391:
		case -1823527696:
			return func_303(3792, -1, -1);
			break;
		
		case 1504591288:
		case -1899487013:
			return func_303(3793, -1, -1);
			break;
		
		case 2023063246:
		case 613041245:
			return func_303(3794, -1, -1);
			break;
		
		case 1718016625:
		case -149165695:
			return func_303(3795, -1, -1);
			break;
		
		case 1428731893:
		case -923398858:
			return func_303(3796, -1, -1);
			break;
		
		case 1101074662:
		case -1017249282:
			return func_303(3797, -1, -1);
			break;
		
		case -1351684992:
		case -726555483:
			return func_303(3798, -1, -1);
			break;
		
		case -1657386993:
		case -372257055:
			return func_303(3799, -1, -1);
			break;
		
		case -1946409573:
		case -114397794:
			return func_303(3800, -1, -1);
			break;
		
		case 2042003728:
		case -1101989916:
			return func_303(3801, -1, -1);
			break;
		
		case -170362538:
		case -1749374280:
			return func_303(3802, -1, -1);
			break;
		
		case -893708693:
		case -477604174:
			return func_303(4260, -1, -1);
			break;
		
		case -660753872:
		case 364034822:
			return func_303(4257, -1, -1);
			break;
		
		case -1412999036:
		case 136191965:
			return func_303(4269, -1, -1);
			break;
		
		case -1121780933:
		case 442582143:
			return func_303(4261, -1, -1);
			break;
		
		case -2121038819:
		case 84482511:
			return func_303(4259, -1, -1);
			break;
		
		case -1880350514:
		case 971670421:
			return func_303(4268, -1, -1);
			break;
		
		case 1724501642:
		case 736159614:
			return func_303(4265, -1, -1);
			break;
		
		case 1953982949:
		case 1667815057:
			return func_303(4258, -1, -1);
			break;
		
		case 1100809265:
		case 1294641685:
			return func_303(4264, -1, -1);
			break;
		
		case 1341235418:
		case -2030199366:
			return func_303(4267, -1, -1);
			break;
		
		case 202917910:
		case 601407264:
			return func_303(4262, -1, -1);
			break;
		
		case 509799595:
		case 764138118:
			return func_303(4263, -1, -1);
			break;
		
		case 797675260:
		case 1968955913:
			return func_303(4266, -1, -1);
			break;
		
		case -1155192675:
		case 1485373828:
			return func_303(4247, -1, -1);
			break;
		
		case -1928704920:
		case -71251979:
			return func_303(4248, -1, -1);
			break;
		
		case -524880960:
		case 235269247:
			return func_303(4249, -1, -1);
			break;
		
		case -1356263259:
		case 517180954:
			return func_303(4250, -1, -1);
			break;
		
		case 68860555:
		case 756099733:
			return func_303(4251, -1, -1);
			break;
		
		case -704258466:
		case -1329647121:
			return func_303(4252, -1, -1);
			break;
		
		case -902445334:
		case -975545307:
			return func_303(4253, -1, -1);
			break;
		
		case -133258609:
		case -721683864:
			return func_303(4254, -1, -1);
			break;
		
		case -296251615:
		case -356899352:
			return func_303(4255, -1, -1);
			break;
		
		case 479292308:
		case -1253393710:
			return func_303(4256, -1, -1);
			break;
	}
	return 0;
}

int func_303(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_305(iParam0, iParam1);
	uVar2 = func_304(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_304(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	return iVar0;
}

int func_305(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = round(50f * Global_262145.f_110);
		func_131(809, iVar0, -1, 1);
		iVar1 = get_player_max_armour(player_id());
		iVar2 = get_ped_armour(PLAYER::PLAYER_PED_ID());
		iVar3 = iVar1 - iVar2;
		set_ped_armour(PLAYER::PLAYER_PED_ID(), iVar2 + iVar3);
	}
}

int func_307(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	_add_text_component_item_string(sParam1);
	add_text_component_integer(iParam2);
	iVar0 = _draw_notification(0, 1);
	func_187(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_308(int iParam0, int iParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (iParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (iParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (iParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (iParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (iParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (iParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (iParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (iParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (iParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (iParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (iParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (iParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (iParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (iParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (iParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (iParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (iParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (iParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (iParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (iParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (iParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (iParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (iParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (iParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (iParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (iParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (iParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (iParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (iParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (iParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (iParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (iParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (iParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (iParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (iParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (iParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (iParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (iParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (iParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (iParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (iParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (iParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (iParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (iParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (iParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (iParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (iParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (iParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (iParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (iParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (iParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (iParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (iParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (iParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (iParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (iParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (iParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (iParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (iParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (iParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (iParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (iParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (iParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (iParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (iParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (iParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (iParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (iParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (iParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		default:
			if (func_310(iParam0, &Var0) != -1)
			{
				if (iParam1)
				{
					return func_309(&(Var0.f_31));
				}
				else
				{
					return func_309(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

auto func_309(auto uParam0)
{
	return uParam0;
}

int func_310(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_311(auto uParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = false;
	*uParam1 = uParam0;
	while (!func_312(*uParam1, -1, 0))
	{
		switch (*uParam1)
		{
			case joaat("weapon_minigun"):
				*uParam1 = joaat("weapon_rpg");
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = joaat("weapon_grenadelauncher");
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = joaat("weapon_mg");
				break;
			
			case joaat("weapon_molotov"):
				*uParam1 = joaat("weapon_grenade");
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = joaat("weapon_smokegrenade");
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = joaat("weapon_petrolcan");
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = joaat("weapon_stickybomb");
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = joaat("weapon_mg");
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = joaat("weapon_sniperrifle");
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = joaat("weapon_carbinerifle");
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = joaat("weapon_smg");
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = joaat("weapon_microsmg");
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = joaat("weapon_pumpshotgun");
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = joaat("weapon_sawnoffshotgun");
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = joaat("weapon_combatpistol");
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = joaat("weapon_knife");
				break;
			
			default:
				*uParam1 = joaat("weapon_pistol");
				break;
		}
		iVar0 = true;
	}
	if (iVar0)
	{
		return true;
	}
	return false;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_317())
	{
		return false;
	}
	iVar0 = func_315(iParam0, iParam1);
	iVar1 = func_313(iParam0);
	return GAMEPLAY::IS_BIT_SET(iVar0, func_230(iVar1));
}

int func_313(int iParam0)
{
	return func_314(iParam0);
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
	}
	return 0;
}

auto func_315(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_140(func_316(iParam0), iParam1, 0);
	return uVar0;
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_313(iParam0);
	iVar1 = func_229(iVar0);
	if ((func_228() == 0 || func_227() == 0) || (func_228() == 999 && func_227() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 672;
				break;
			
			case 1:
				return 673;
				break;
			
			case 2:
				return 2405;
				break;
			}
	}
	return 3949;
}

auto func_317()
{
	return Global_1315890;
}

void func_318(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_319(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	iVar0 = _draw_notification(0, 1);
	func_187(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_320(Vector3 vParam0, int iParam1)
{
	func_112(vParam0, iParam3, 6, 0);
}

void func_321(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_330())
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
				func_322(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_322(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_322(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_330())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_26()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_329(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_328(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_323(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_324(iParam0);
	}
}

void func_324(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_330())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_327(iParam0))
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
		func_325(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_325(auto uParam0)
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
	func_326(uParam0.f_8.f_3);
	func_326(uParam0.f_8.f_16);
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

void func_326(auto uParam0)
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

int func_327(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_328(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_329(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_330())
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

bool func_330()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_364())
		{
			if (func_363(0))
			{
				if (network_is_player_active(func_362()))
				{
					if (func_361() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_361();
						*iParam0 -= iVar0;
					}
					func_359(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_335("GB_BCUT_TICK1", func_362(), iVar0, 0, 0, 1, 1);
					}
					func_334(20);
					func_332(func_362(), iVar0, 1);
				}
			}
		}
	}
}

void func_332(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_431(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_333(iParam0));
	}
}

auto func_333(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_335(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_338(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_336(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_187(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

auto func_336(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_337(&cVar0);
}

auto func_337(char[4] cParam0)
{
	return cParam0;
}

int func_338(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_357(iParam0))
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
	if (func_357(player_id()) || (func_356() && func_355()))
	{
		iVar0 = func_354();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_431(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_353(iParam1, iParam0, 0);
							}
							else
							{
								return func_345(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_345(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_353(iParam1, iParam0, 0);
				}
				else
				{
					return func_339(0, -1, 0);
				}
			}
			else
			{
				return func_339(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_353(iParam1, iParam0, 0);
		}
		else
		{
			return func_345(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_345(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_339(int iParam0, int iParam1, int iParam2)
{
	return func_340(player_id(), iParam0, iParam1, iParam2);
}

int func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_143(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_344(1);
				}
				else
				{
					return func_344(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_341(iVar0, iParam2, 1);
			}
			else
			{
				return func_341(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_344(1);
	}
	return func_344(0);
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_343(iParam0, iParam1);
	if (func_342(Global_1617379.f_70365))
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

bool func_342(int iParam0)
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

int func_343(int iParam0, int iParam1)
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
			if (!func_143(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_344(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_352(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_143(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_344(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_351(1);
			}
			else
			{
				return func_340(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_344(1);
			}
			else
			{
				return func_340(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_348(iParam0);
	if (!iVar3 == -1)
	{
		return func_346(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = func_347(iParam0);
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

auto func_347(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_348(int iParam0)
{
	if (!iParam0 == func_31())
	{
		if (func_349(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_32(iParam0)];
		}
	}
	return -1;
}

int func_349(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_350(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_31();
}

int func_350(int iParam0)
{
	if (iParam0 != func_31())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_31())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_351(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_352(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_353(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_340(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_354()
{
	return Global_2359301.f_2;
}

int func_355()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_356()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_357(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return true;
	}
	if (func_358())
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

int func_358()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

void func_359(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_360(1);
	}
	else
	{
		iVar1 = func_360(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_360(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_361()
{
	return Global_262145.f_10328;
}

auto func_362()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_363(int iParam0)
{
	return func_349(player_id(), iParam0);
}

int func_364()
{
	return func_350(player_id());
}

int func_365(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = to_float(iParam0) * Global_262145;
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

void func_366(int iParam0)
{
	Global_2428492.f_1357 = iParam0;
}

void func_367(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 0)
	{
		iVar0 = get_max_ammo_in_clip(PLAYER::PLAYER_PED_ID(), iParam0, 1) * iParam1;
		get_max_ammo(PLAYER::PLAYER_PED_ID(), iParam0, &iVar1);
		iVar2 = iVar1 - get_ammo_in_ped_weapon(PLAYER::PLAYER_PED_ID(), iParam0);
		if (iVar0 > iVar2)
		{
			iVar0 = iVar2;
		}
		add_ammo_to_ped(PLAYER::PLAYER_PED_ID(), iParam0, iVar0);
		if (iParam2 == 1)
		{
			func_368(PLAYER::PLAYER_PED_ID(), iVar0);
		}
	}
}

void func_368(int iParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (iParam1 > 0)
	{
		if (func_369(get_entity_coords(iParam0, 0)))
		{
		}
		func_108(1);
		vVar0 = {func_110(PLAYER::PLAYER_PED_ID(), 1)};
		iVar4 = -1;
		iVar3 = 0;
		while (iVar3 < 20)
		{
			if (Global_2428492.f_774[iVar3 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar3 /*29*/].f_6 == 6)
			{
				iVar4 = iVar3;
				iVar3 = 20;
			}
			iVar3++;
		}
		if (iVar4 != -1)
		{
			Global_2428492.f_774[iVar4 /*29*/] = {vVar0};
			Global_2428492.f_774[iVar4 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar4 /*29*/].f_4 = func_115(Global_2428492.f_774[iVar4 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar4 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar4 /*29*/].f_3 = iParam1;
			Global_2428492.f_774[iVar4 /*29*/].f_8 = 1;
			Global_2428492.f_774[iVar4 /*29*/].f_9 = func_114();
			Global_2428492.f_774[iVar4 /*29*/].f_10 = func_113();
			Global_1725135 = 1;
			request_streamed_texture_dict("MPHud", false);
		}
	}
}

bool func_369(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

auto func_370(int iParam0)
{
	auto uVar0;
	
	get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

void func_371()
{
}

void func_372()
{
	if (func_431(player_id(), 1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_202.f_1, false))
		{
			if ((((((!is_help_message_being_displayed() && !func_377()) && !func_376()) && !func_375()) && func_382(31, 0, 0)) && !func_402(player_id())) && !func_374())
			{
				if (func_381(60000))
				{
					if (!func_160())
					{
						func_373("ACD_HELP1", -1);
					}
					GAMEPLAY::SET_BIT(&(Global_2460486.f_202.f_1), false);
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_2460486.f_202.f_1), false);
				}
			}
		}
	}
}

void func_373(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_374()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_375()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

int func_376()
{
	return Global_91330.f_297 > 0;
}

int func_377()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_378()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 1 - iVar0;
		if (iVar1 > 0)
		{
			Global_2460486.f_202.f_24[iVar1 /*3*/] = {Global_2460486.f_202.f_24[iVar1 - 1 /*3*/]};
		}
		else
		{
			Global_2460486.f_202.f_24[iVar1 /*3*/] = {func_69(Local_96.f_2.f_68[0 /*104*/])};
		}
		iVar0++;
	}
}

int func_379(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_187(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

auto func_380()
{
	return Global_1315913;
}

int func_381(int iParam0)
{
	return absi(get_time_difference(Global_2410698, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6088 == 1)
	{
		if (iParam0 == 67)
		{
			return true;
		}
		if (iParam0 == 74)
		{
			return true;
		}
		if (func_386(player_id(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return true;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return true;
		}
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4868 == 1)
		{
			return true;
		}
	}
	if (func_385() || func_384())
	{
		return true;
	}
	iVar0 = iParam0;
	iVar1 = iVar0 / 32;
	iVar0 %= 32;
	if (iParam1)
	{
		if (iParam0 == 3)
		{
			if (func_383())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (iParam2)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1573873[iVar1], iVar0);
}

bool func_383()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1638, 23))
	{
		return true;
	}
	if (func_385())
	{
		return true;
	}
	if (func_384())
	{
		return true;
	}
	iVar0 = Global_1347750[func_136(-1)];
	if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2460486.f_1638), 23);
		return true;
	}
	return false;
}

auto func_384()
{
	return Global_1315901;
}

auto func_385()
{
	return Global_1315903;
}

int func_386(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	if (!func_389())
	{
		return false;
	}
	if (func_388())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	uVar0 = func_387(iParam1);
	iVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_345, iVar1);
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

int func_388()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_135, 3);
}

int func_389()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_385())
	{
		return 1;
	}
	if (func_384())
	{
		return 1;
	}
	return func_199(120, -1);
}

void func_390()
{
	int iVar0;
	
	iVar0 = get_num_reserved_mission_vehicles(false);
	if (Local_96.f_177 != iVar0)
	{
		if (Local_96.f_177 < iVar0 || func_398(Local_96.f_177, 0, 1))
		{
			if (Local_96.f_177 >= _0x0CD9AB83489430EA(0))
			{
				reserve_network_mission_vehicles(Local_96.f_177);
			}
		}
	}
	iVar0 = get_num_reserved_mission_peds(false);
	if (Local_96.f_178 != iVar0)
	{
		if (Local_96.f_178 < iVar0 || func_397(Local_96.f_178, 0, 1))
		{
			if (Local_96.f_178 >= _0xCB215C4B56A7FAE7(0))
			{
				reserve_network_mission_peds(Local_96.f_178);
			}
		}
	}
	iVar0 = get_num_reserved_mission_objects(false);
	if (Local_96.f_179 != iVar0)
	{
		if (Local_96.f_179 < iVar0 || func_391(Local_96.f_179, 0, 1))
		{
			if (Local_96.f_179 >= _0x12B6281B6C6706C0(0))
			{
				reserve_network_mission_objects(Local_96.f_179);
			}
		}
	}
}

int func_391(int iParam0, int iParam1, int iParam2)
{
	return func_392(2, iParam0, 1, iParam1, iParam2);
}

bool func_392(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_396(iParam0) - func_395(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_395(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_396(iParam0) - func_394(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_395(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_396(iParam0) - func_395(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_393(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return get_num_reserved_mission_peds(!iParam1);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!iParam1);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return get_num_reserved_mission_objects(!iParam1);
			}
			break;
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	return func_392(0, iParam0, 1, iParam1, iParam2);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	return func_392(1, iParam0, 1, iParam1, iParam2);
}

int func_399()
{
	return Local_96;
}

auto func_400(int iParam0)
{
	return Local_286[iParam0 /*4*/];
}

void func_401()
{
	Global_2454689 = Local_96;
	Global_2454689.f_1 = Local_96.f_180;
	Global_2454689.f_2 = Local_96.f_2.f_1[0 /*66*/].f_64;
	Global_2454689.f_3 = GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, false);
	Global_2454689.f_4 = GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, true);
	Global_2454689.f_5 = GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 13);
	Global_2454689.f_6 = GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 3);
	Global_2454689.f_7 = GAMEPLAY::IS_BIT_SET(Local_96.f_2.f_1[0 /*66*/].f_65, 5);
	Global_2454689.f_8 = GAMEPLAY::IS_BIT_SET(Local_96.f_1, 11);
	Global_2454689.f_9 = Local_286[participant_id_to_int() /*4*/].f_3;
}

int func_402(int iParam0)
{
	return func_403(iParam0);
}

int func_403(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_404(int iParam0)
{
	switch (func_405(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 28:
		case 27:
		case 29:
		case 30:
		case 31:
			return true;
		
		default:
	}
	return false;
}

auto func_405(auto uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180;
}

int func_406(int iParam0)
{
	return !func_407(iParam0);
}

bool func_407(int iParam0)
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
			if (func_408(4))
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
			if (func_408(4))
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
			if (func_408(4))
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
			if (func_408(4))
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
			if (func_408(4))
			{
				return false;
			}
			if (func_163(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_408(4))
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

bool func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_431(int_to_playerindex(iVar0), 0, 1))
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

bool func_409()
{
	int iVar0;
	
	func_415(&iVar0);
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
	if (func_414())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_413())
	{
		return true;
	}
	if (func_412(157))
	{
		if (!func_411())
		{
			return true;
		}
	}
	if (func_412(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_410() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_410()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_410()
{
	switch (func_228())
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

auto func_411()
{
	return Global_2434762.f_574;
}

bool func_412(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_413()
{
	return Global_2443085;
}

auto func_414()
{
	return Global_2434762.f_569;
}

void func_415(auto uParam0)
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
					func_416(iVar0);
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

void func_416(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_431(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_417(iVar4, &iVar5))
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

bool func_417(int iParam0, auto uParam1)
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

void func_418()
{
	wait(0);
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_blip_exist(iLocal_417[iVar0]))
		{
			remove_blip(&(iLocal_417[iVar0]));
		}
		if (does_blip_exist(iLocal_419[iVar0]))
		{
			remove_blip(&(iLocal_419[iVar0]));
		}
		func_4(iVar0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (network_is_host_of_this_script())
			{
				if (func_399() == 4)
				{
					func_8();
					func_6(iVar0);
				}
			}
		}
		Global_2460486.f_233[iVar0 /*3*/] = {0f, 0f, 0f};
		iVar0++;
	}
	func_73(1);
	func_424(4, 0);
	if (iLocal_477)
	{
		func_422(0f, 0f, 0f, func_423(31), 1);
	}
	if (func_421("ACD_HELP1"))
	{
		clear_help(1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_416, false))
		{
			iLocal_464 = 0;
			iLocal_465 = 0;
			iLocal_467[0] = 0;
			iLocal_476 = 0;
		}
		if ((((((iLocal_462 != 0 || iLocal_463 != 0) || iLocal_464 != 0) || iLocal_465 != 0) || iLocal_466 != 0) || iLocal_467[0] != 0) || iLocal_476 == 1)
		{
			_0x1CAE5D2E3F9A07F0(31, iLocal_462, iLocal_463, iLocal_464, iLocal_465, iLocal_466, &iLocal_467, iLocal_476);
		}
	}
	Global_2454689.f_10 = 0;
	func_420();
}

void func_420()
{
	terminate_this_thread();
}

auto func_421(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_422(Vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!is_string_null_or_empty(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (are_strings_equal(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_170(Global_2460486.f_3827[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2460486.f_3827[iVar0 /*26*/] = 0;
					Global_2460486.f_3827[iVar0 /*26*/].f_1 = {0f, 0f, 0f};
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_423(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_424(int iParam0, int iParam1)
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

void func_425(struct<20> Param0)
{
	func_430(32, Param0);
	func_429(0, -1, 0);
	network_register_host_broadcast_variables(&Local_96, 190);
	network_register_player_broadcast_variables(&Local_286, 129);
	if (!func_428())
	{
		func_419();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (network_is_host_of_this_script())
		{
			func_426();
			func_56();
		}
		reserve_network_mission_peds(4 * Local_96.f_2);
		reserve_network_mission_vehicles(1 * Local_96.f_2);
		reserve_network_mission_objects(3 * Local_96.f_2);
		set_this_script_can_be_paused(0);
		func_424(4, 1);
		Local_286[participant_id_to_int() /*4*/] = 0;
	}
	else
	{
		func_419();
	}
}

void func_426()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_262145.f_67 >= 0 && Global_262145.f_67 < 32)
	{
		iVar1 = true;
		if (Global_262145.f_4997 >= 0 && Global_262145.f_4997 < 32)
		{
			iVar1 = 5;
			iVar2 = get_random_int_in_range(0, iVar1);
		}
		else if (Global_262145.f_4996 >= 0 && Global_262145.f_4996 < 32)
		{
			iVar1 = 4;
			iVar2 = get_random_int_in_range(0, iVar1);
		}
		else if (Global_262145.f_4995 >= 0 && Global_262145.f_4995 < 32)
		{
			iVar1 = 3;
			iVar2 = get_random_int_in_range(0, iVar1);
		}
		else if (Global_262145.f_4994 >= 0 && Global_262145.f_4994 < 32)
		{
			iVar1 = 2;
			iVar2 = get_random_int_in_range(0, iVar1);
		}
		else
		{
			iVar1 = true;
			iVar2 = 0;
		}
		switch (iVar2)
		{
			case 0:
				Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_67;
				break;
			
			case 1:
				Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4994;
				break;
			
			case 2:
				Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4995;
				break;
			
			case 3:
				Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4996;
				break;
			
			case 4:
				Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4997;
				break;
		}
		if (iVar1 > 1)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (func_427(Global_2460486.f_202.f_24[iVar0 /*3*/], func_69(Local_96.f_2.f_68[0 /*104*/]), 50f, 0))
				{
					iVar2++;
					if (iVar2 >= iVar1)
					{
						iVar2 = 0;
					}
					switch (iVar2)
					{
						case 0:
							Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_67;
							break;
						
						case 1:
							Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4994;
							break;
						
						case 2:
							Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4995;
							break;
						
						case 3:
							Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4996;
							break;
						
						case 4:
							Local_96.f_2.f_68[0 /*104*/] = Global_262145.f_4997;
							break;
						}
				}
				iVar0++;
			}
		}
	}
	if (((Global_262145.f_67 < 0 || Global_262145.f_67 >= 32) || Local_96.f_2.f_68[0 /*104*/] < 0) || Local_96.f_2.f_68[0 /*104*/] >= 32)
	{
		Local_96.f_2.f_68[0 /*104*/] = get_random_int_in_range(0, 32);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_427(Global_2460486.f_202.f_24[iVar0 /*3*/], func_69(Local_96.f_2.f_68[0 /*104*/]), 50f, 0))
			{
				Local_96.f_2.f_68[0 /*104*/]++;
				if (Local_96.f_2.f_68[0 /*104*/] >= 32)
				{
					Local_96.f_2.f_68[0 /*104*/] = 0;
				}
			}
			iVar0++;
		}
	}
	if (Global_2415926.f_84.f_2 == 1)
	{
		GAMEPLAY::SET_BIT(&(Local_96.f_1), 11);
		Local_96.f_2 = 1;
	}
	else
	{
		Local_96.f_2 = 1;
	}
	func_378();
}

bool func_427(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

bool func_428()
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
		if (func_414())
		{
			return false;
		}
		if (func_412(155))
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

bool func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_420();
			}
			else
			{
				return false;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_420();
					}
					else
					{
						return false;
					}
				}
				if (func_414())
				{
					if (!iParam2)
					{
						func_420();
					}
					else
					{
						return false;
					}
				}
				if (func_412(155))
				{
					if (!iParam2)
					{
						func_420();
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
					func_420();
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
				func_420();
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
			func_420();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_430(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_420();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

bool func_431(int iParam0, int iParam1, int iParam2)
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

