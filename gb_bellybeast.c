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
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
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
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int[] iLocal_99 = new int[4];
	int[] iLocal_104 = new int[4];
	int iLocal_109 = 0;
	Vector3 vLocal_110 = 0;
	Vector3 vLocal_113 = 0;
	auto uLocal_116 = 0;
	int iLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	int iLocal_127 = 0;
	struct<59> Local_128 = 0;
	struct<4>[] Local_187 = new struct<4>[32];
	struct<20> Local_316 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_560(Local_316))
		{
			func_538(0);
		}
	}
	while (true)
	{
		func_537();
		if (func_529())
		{
			func_538(1);
		}
		func_525();
		switch (func_524(participant_id_to_int()))
		{
			case 0:
				if (func_523() == 1)
				{
					if (func_522())
					{
						func_521(participant_id_to_int(), 1);
					}
				}
				else if (func_523() == 3)
				{
					func_521(participant_id_to_int(), 3);
				}
				break;
			
			case 1:
				if (func_523() == 1)
				{
					if (!func_520())
					{
						func_87();
					}
					else
					{
						if (func_86())
						{
							func_79();
						}
						func_78();
					}
					if (func_44())
					{
						func_521(participant_id_to_int(), 3);
					}
				}
				else if (func_523() == 3)
				{
					func_521(participant_id_to_int(), 3);
				}
				break;
			
			case 3:
				func_538(0);
				break;
		}
		if (network_is_host_of_this_script())
		{
			if (func_43())
			{
				func_42(3);
			}
			switch (func_523())
			{
				case 0:
					if (func_18())
					{
						func_42(1);
					}
					break;
				
				case 1:
					if (func_17() == 4)
					{
						func_42(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_538(0);
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_128.f_55)
	{
		case 0:
			if (func_16())
			{
				func_15(1);
			}
			func_9();
			break;
		
		case 1:
			func_9();
			func_5();
			func_2();
			break;
		
		case 2:
			func_9();
			func_5();
			func_2();
			break;
		
		case 3:
			if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 23))
			{
				func_15(4);
			}
			func_9();
			break;
		
		case 4:
			break;
	}
}

void func_2()
{
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 12) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17))
	{
		if (func_3(&(Local_128.f_53), 600000, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 24);
		}
	}
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

void func_5()
{
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 19))
	{
		func_8(2);
		func_15(3);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 22))
	{
		func_8(0);
		func_15(3);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 21))
	{
		func_8(1);
		func_15(3);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 16))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 22);
		func_8(3);
		func_15(3);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 13))
	{
		func_8(0);
		func_15(3);
	}
	if (!func_6(func_7(), 0, 1))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 18);
		func_8(4);
		func_15(3);
	}
}

bool func_6(int iParam0, int iParam1, int iParam2)
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

auto func_7()
{
	return Global_1610316[player_id() /*174*/].f_10.f_30;
}

void func_8(int iParam0)
{
	Local_128.f_56 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			if (func_17() < 3)
			{
				iVar2 = false;
				while (iVar2 < func_14())
				{
					if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, iVar2) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar2))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), iVar2);
						Local_128.f_34++;
					}
					if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, iVar2 + 4) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar2 + 4))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), iVar2 + 4);
					}
					if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, iVar2 + 8) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar2 + 8))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), iVar2 + 8);
						Local_128.f_35++;
					}
					iVar2++;
				}
				if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, 14))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17))
					{
						func_11(int_to_playerindex(iVar1));
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 17);
					}
					iVar0++;
				}
			}
			else if (func_17() == 3)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, 21))
				{
					iVar0++;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_187[iVar1 /*4*/].f_1, 12))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 12);
			}
		}
		iVar1++;
	}
	if (func_17() < 3)
	{
		if (iVar0 == func_14() - Local_128.f_34 + Local_128.f_35)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 14);
		}
		else if (iVar0 == 1 && GAMEPLAY::IS_BIT_SET(Local_128.f_1, 15))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 14);
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 14))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_128.f_1), 14);
		}
		if (Local_128.f_34 + Local_128.f_35 == func_14())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 22);
		}
		if (func_14() - Local_128.f_34 + Local_128.f_35 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 15);
		}
		if (Local_128.f_34 == func_14())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 13);
		}
		if (Local_128.f_35 == func_14())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 21);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 12))
		{
			if (func_3(&(Local_128.f_49), func_10(), 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 16);
			}
		}
	}
	else if (func_17() == 3)
	{
		if (iVar0 == network_get_num_participants())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 20);
		}
		else if (func_3(&(Local_128.f_51), 15000, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_128.f_1), 23);
		}
	}
}

auto func_10()
{
	return Global_262145.f_10402;
}

void func_11(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_11 = func_7();
	Var0.f_2 = 181;
	func_12(Var0, func_13(1));
}

void func_12(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_13(int iParam0)
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
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

auto func_14()
{
	return Local_128.f_5;
}

void func_15(int iParam0)
{
	Local_128.f_55 = iParam0;
}

bool func_16()
{
	return true;
}

auto func_17()
{
	return Local_128.f_55;
}

bool func_18()
{
	if (func_19())
	{
		return true;
	}
	return false;
}

bool func_19()
{
	_0x6DEE77AFF8C21BD1(&(Local_128.f_57), &(Local_128.f_58));
	if (!iLocal_97)
	{
		iLocal_96 = get_random_int_in_range(false, 3);
		if (Global_2460486.f_4660.f_6 == -1)
		{
			func_42(3);
			return false;
		}
		func_41(iLocal_96);
		func_40(Global_2460486.f_4660.f_6);
		func_28();
		iLocal_97 = 1;
	}
	if (func_20())
	{
		return true;
	}
	return false;
}

bool func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < func_14())
	{
		if (func_26(func_27(iVar0)))
		{
			if (!network_does_network_id_exist(func_25(iVar0)))
			{
				if (func_22(&(Local_128.f_6[iVar0]), func_27(iVar0), func_24(iVar0), func_23(iVar0), 1, 1, 1, 1, 0, 1))
				{
					func_21(net_to_veh(func_25(iVar0)));
					_0x9737A37136F07E75(net_to_veh(func_25(iVar0)), 1);
					_0x3910051CCECDB00C(net_to_veh(func_25(iVar0)), true);
					set_vehicle_tyres_can_burst(net_to_veh(func_25(iVar0)), false);
					set_vehicle_has_strong_axles(net_to_veh(func_25(iVar0)), true);
					set_vehicle_strong(net_to_veh(func_25(iVar0)), true);
					set_vehicle_explodes_on_high_explosion_damage(net_to_veh(func_25(iVar0)), 0);
					_0x7D6F9A3EF26136A0(net_to_veh(func_25(iVar0)), false, 0);
					set_vehicle_allow_no_passengers_lockon(net_to_veh(func_25(iVar0)), false);
					unk_0x1DDA078D12879EEE(net_to_veh(func_25(iVar0)), 0, 0);
					_0xCFD778E7904C255E(net_to_veh(func_25(iVar0)));
					_0x2311DD7159F00582(net_to_veh(func_25(iVar0)), 1);
					_0xDBC631F109350B8C(net_to_veh(func_25(iVar0)), 1);
					set_vehicle_automatically_attaches(net_to_veh(func_25(iVar0)), false, 0);
					unk_0x352E2B5CF420BF3B(net_to_veh(func_25(iVar0)), 1);
					set_entity_invincible(net_to_veh(func_25(iVar0)), true);
					network_fade_in_entity(net_to_veh(func_25(iVar0)), 1, 1);
					if (decor_is_registered_as_type("Not_Allow_As_Saved_Veh", 3))
					{
						decor_set_int(net_to_veh(func_25(iVar0)), "Not_Allow_As_Saved_Veh", true);
					}
					if (decor_is_registered_as_type("MPBitset", 3))
					{
						if (decor_exist_on(net_to_veh(func_25(iVar0)), "MPBitset"))
						{
							iVar2 = decor_get_int(net_to_veh(func_25(iVar0)), "MPBitset");
						}
						GAMEPLAY::GAMEPLAY::SET_BIT(&iVar2, 10);
						GAMEPLAY::GAMEPLAY::SET_BIT(&iVar2, 11);
						decor_set_int(net_to_veh(func_25(iVar0)), "MPBitset", iVar2);
					}
					set_model_as_no_longer_needed(func_27(iVar0));
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == func_14())
	{
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = get_vehicle_livery_count(iParam0);
	iVar1 = get_number_of_vehicle_colours(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = get_random_int_in_range(false, iVar0);
		set_vehicle_livery(iParam0, iVar3);
	}
	iVar2 = get_random_int_in_range(false, iVar1);
	set_vehicle_colour_combination(iParam0, iVar2);
}

bool func_22(auto uParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

auto func_23(int iParam0)
{
	return Local_128.f_29[iParam0];
}

Vector3 func_24(int iParam0)
{
	return Local_128.f_16[iParam0 /*3*/];
}

auto func_25(int iParam0)
{
	return Local_128.f_6[iParam0];
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

auto func_27(int iParam0)
{
	return Local_128.f_11[iParam0];
}

void func_28()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	
	func_39(2);
	switch (func_38())
	{
		case 0:
			vVar0 = {-1039.623f, -855.3737f, 3.8758f};
			vVar3 = {-1112.362f, -855.0657f, 12.531f};
			vVar6 = {0f, 0f, 0f};
			vVar9 = {0f, 0f, 0f};
			func_37(1);
			if (func_36(func_7()) == 0)
			{
				func_39(1);
			}
			func_35(0, joaat("pigalle"));
			func_34(0, 237.632f);
			func_35(1, joaat("rhapsody"));
			func_34(1, 218.751f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			break;
		
		case 1:
			vVar0 = {861.2779f, -1357.735f, 25.0962f};
			vVar3 = {833.7587f, -1414.288f, 25.1543f};
			vVar6 = {0f, 0f, 0f};
			vVar9 = {0f, 0f, 0f};
			func_37(1);
			if (func_36(func_7()) == 0)
			{
				func_39(1);
			}
			func_35(0, joaat("comet2"));
			func_34(0, 269.772f);
			func_35(1, joaat("banshee"));
			func_34(1, 332.369f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			break;
		
		case 2:
			vVar0 = {471.1763f, -1024.233f, 27.1807f};
			vVar3 = {407.7268f, -993.1101f, 28.2665f};
			vVar6 = {0f, 0f, 0f};
			vVar9 = {0f, 0f, 0f};
			func_37(1);
			if (func_36(func_7()) == 0)
			{
				func_39(1);
			}
			func_35(0, joaat("dominator"));
			func_34(0, 95.7556f);
			func_35(1, joaat("gauntlet"));
			func_34(1, 231.8613f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			break;
		
		case 3:
			vVar0 = {530.3759f, -29.6076f, 69.6295f};
			vVar3 = {628.4064f, 23.6166f, 86.6466f};
			vVar6 = {0f, 0f, 0f};
			vVar9 = {0f, 0f, 0f};
			func_37(1);
			if (func_36(func_7()) == 0)
			{
				func_39(1);
			}
			func_35(0, joaat("feltzer3"));
			func_34(0, 31.0119f);
			func_35(1, joaat("coquette3"));
			func_34(1, 71.2592f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			break;
		
		case 4:
			vVar0 = {1854.039f, 3675.524f, 32.7389f};
			vVar3 = {1867.226f, 3694.696f, 32.6526f};
			vVar6 = {1866.02f, 3682.976f, 32.7085f};
			vVar9 = {1861.596f, 3681.005f, 32.7102f};
			func_37(0);
			func_39(func_36(func_7()) + 1);
			func_35(0, joaat("blazer"));
			func_34(0, 30.2891f);
			func_35(1, joaat("blazer"));
			func_34(1, 209.6525f);
			func_35(2, joaat("blazer"));
			func_34(1, 19.0028f);
			func_35(3, joaat("blazer"));
			func_34(1, 209.3371f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			func_30(2, func_31(2));
			func_30(3, func_31(3));
			break;
		
		case 5:
			vVar0 = {-451.4124f, 5998.274f, 30.3405f};
			vVar3 = {-461.0853f, 6047.062f, 30.3405f};
			vVar6 = {-438.0848f, 5980.269f, 30.4901f};
			vVar9 = {-434.6339f, 5983.896f, 30.4901f};
			func_37(0);
			func_39(func_36(func_7()) + 1);
			func_35(0, joaat("lectro"));
			func_34(0, 267.2382f);
			func_35(1, joaat("lectro"));
			func_34(1, 315.4168f);
			func_35(2, joaat("lectro"));
			func_34(1, 251.2614f);
			func_35(3, joaat("lectro"));
			func_34(1, 44.8117f);
			func_30(0, func_31(0));
			func_30(1, func_31(1));
			func_30(2, func_31(2));
			func_30(3, func_31(3));
			break;
	}
	if (func_14() == 2)
	{
		func_29(0, vVar0);
		func_29(1, vVar3);
	}
	else
	{
		func_29(0, vVar0);
		func_29(1, vVar3);
		func_29(2, vVar6);
		func_29(3, vVar9);
	}
}

void func_29(int iParam0, Vector3 vParam1)
{
	Local_128.f_16[iParam0 /*3*/] = {vParam1};
}

void func_30(int iParam0, Vector3 vParam1)
{
	Local_128.f_36[iParam0 /*3*/] = {vParam1};
}

Vector3 func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (func_33())
		{
			case 0:
				if (func_32())
				{
					return 1685.737f, 6435.972f, 31.3601f;
				}
				return 255.4336f, -3057.406f, 4.7974f;
				break;
			
			case 1:
				if (func_32())
				{
					return -1576.524f, 5159.825f, 18.7791f;
				}
				return -965.0558f, -2072.717f, 8.4059f;
				break;
			
			case 2:
				if (func_32())
				{
					return 756.7225f, 4179.839f, 39.6685f;
				}
				return -1209.318f, -1305.557f, 3.7185f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (func_33())
		{
			case 0:
				if (func_32())
				{
					return 1682.386f, 6434.001f, 31.1545f;
				}
				return 248.4273f, -3064.162f, 4.7802f;
				break;
			
			case 1:
				if (func_32())
				{
					return -1581.573f, 5159.565f, 18.5702f;
				}
				return -971.9658f, -2065.526f, 8.4059f;
				break;
			
			case 2:
				if (func_32())
				{
					return 762.5063f, 4179.577f, 39.6335f;
				}
				return -1207.275f, -1310.006f, 3.7944f;
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (func_33())
		{
			case 0:
				return 252.0648f, -3060.967f, 4.7768f;
				break;
			
			case 1:
				return -975.444f, -2061.842f, 8.4059f;
				break;
			
			case 2:
				return -1222.124f, -1309.285f, 3.5209f;
				break;
		}
	}
	else if (iParam0 == 3)
	{
		switch (func_33())
		{
			case 0:
				return 244.6635f, -3068.048f, 4.7864f;
				break;
			
			case 1:
				return -968.5905f, -2069.149f, 8.4059f;
				break;
			
			case 2:
				return -1229.652f, -1321.23f, 3.0921f;
				break;
			}
	}
	return 1685.737f, 6435.972f, 31.3601f;
}

auto func_32()
{
	return Local_128.f_4;
}

auto func_33()
{
	return Local_128.f_3;
}

void func_34(int iParam0, float fParam1)
{
	Local_128.f_29[iParam0] = fParam1;
}

void func_35(int iParam0, int iParam1)
{
	Local_128.f_11[iParam0] = iParam1;
}

auto func_36(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_14;
}

void func_37(int iParam0)
{
	Local_128.f_4 = iParam0;
}

auto func_38()
{
	return Local_128.f_2;
}

void func_39(int iParam0)
{
	Local_128.f_5 = iParam0;
}

void func_40(auto uParam0)
{
	Local_128.f_2 = uParam0;
}

void func_41(int iParam0)
{
	Local_128.f_3 = iParam0;
}

void func_42(int iParam0)
{
	Local_128 = iParam0;
}

bool func_43()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return true;
	}
	return false;
}

bool func_44()
{
	if (func_45(1))
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

bool func_45(int iParam0)
{
	int iVar0;
	
	if (!func_77(1))
	{
		iVar0 = false;
		if (Global_1610316[player_id() /*174*/].f_10.f_51 != func_76())
		{
			if (func_6(Global_1610316[player_id() /*174*/].f_10.f_51, 0, 1) && Global_1610316[player_id() /*174*/].f_10.f_19 == 4)
			{
				iVar0 = true;
			}
		}
		else if (func_73(func_74(player_id())) == 0)
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (iParam0)
			{
				func_72(31);
				if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_46(Global_1610316[player_id() /*174*/].f_10.f_51, -2, 0, 0);
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

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_67(iParam0))
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
	if (func_67(player_id()) || (func_66() && func_65()))
	{
		iVar0 = func_64();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_6(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_63(iParam1, iParam0, 0);
							}
							else
							{
								return func_54(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_54(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_63(iParam1, iParam0, 0);
				}
				else
				{
					return func_47(0, -1, 0);
				}
			}
			else
			{
				return func_47(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_63(iParam1, iParam0, 0);
		}
		else
		{
			return func_54(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_54(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	return func_48(player_id(), iParam0, iParam1, iParam2);
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_53(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_52(1);
				}
				else
				{
					return func_52(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_49(iVar0, iParam2, 1);
			}
			else
			{
				return func_49(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_52(1);
	}
	return func_52(0);
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_51(iParam0, iParam1);
	if (func_50(Global_1617379.f_70365))
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

bool func_50(int iParam0)
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

int func_51(int iParam0, int iParam1)
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
			if (!func_53(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_52(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_53(int iParam0, int iParam1, int iParam2)
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_62(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_53(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_52(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_61(1);
			}
			else
			{
				return func_48(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_52(1);
			}
			else
			{
				return func_48(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_57(iParam0);
	if (!iVar3 == -1)
	{
		return func_55(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
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

auto func_56(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_76())
	{
		if (func_59(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_76())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_76();
}

int func_59(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_60(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_76();
}

int func_60(int iParam0)
{
	if (iParam0 != func_76())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_76())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_61(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_63(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_48(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_64()
{
	return Global_2359301.f_2;
}

int func_65()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_66()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_67(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return true;
	}
	if (func_68())
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

int func_68()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_70(-1, 0) == 8;
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

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
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

auto func_71()
{
	return Global_1312747;
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_73(int iParam0)
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

int func_74(int iParam0)
{
	if (func_75(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_75(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_76()
{
	return -1;
}

int func_77(int iParam0)
{
	return func_59(player_id(), iParam0);
}

void func_78()
{
	int iVar0;
	
	if (does_blip_exist(iLocal_109))
	{
		remove_blip(&iLocal_109);
	}
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (does_blip_exist(iLocal_104[iVar0]))
		{
			remove_blip(&(iLocal_104[iVar0]));
		}
		if (does_blip_exist(iLocal_99[iVar0]))
		{
			remove_blip(&(iLocal_99[iVar0]));
		}
		iVar0++;
	}
}

void func_79()
{
	if (!func_85())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_80();
}

void func_80()
{
	func_82();
	func_81(0);
}

void func_81(int iParam0)
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

void func_82()
{
	if (!func_84())
	{
	}
	if (func_85())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_83();
		_0xFCC75460ABA29378();
	}
}

void func_83()
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

int func_84()
{
	if (!func_85())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_83();
	return _0x8A9BA1AB3E237613();
}

bool func_85()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_86()
{
	return func_85();
}

void func_87()
{
	switch (func_519())
	{
		case 0:
			if (func_518(func_7(), 1))
			{
				func_505(157, 1, -1);
			}
			else
			{
				func_505(157, 0, -1);
			}
			func_501();
			if (func_17() > 0)
			{
				if (func_518(func_7(), 1))
				{
					func_500(1);
					func_499(1);
				}
				else
				{
					func_499(2);
				}
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 24))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 3))
				{
					func_493();
				}
				func_487();
				func_476();
				func_474();
				func_470();
				func_469();
				func_466();
				func_464();
				func_435(157, vLocal_113, &uLocal_116, 1140457472, 1144750080, 0);
				if (func_17() > 1)
				{
					func_499(3);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 3))
			{
				func_493();
			}
			func_487();
			func_476();
			func_466();
			func_434();
			func_474();
			func_470();
			func_469();
			func_433();
			func_430();
			func_418();
			func_464();
			func_435(157, vLocal_113, &uLocal_116, 1140457472, 1144750080, 0);
			func_315(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
			func_296(157);
			if (func_17() > 1)
			{
				func_499(3);
			}
			break;
		
		case 3:
			func_257();
			func_122();
			func_487();
			func_418();
			if (((GAMEPLAY::IS_BIT_SET(iLocal_98, 11) && GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 20)) && !func_121()) && func_88(&uLocal_120, 1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 21);
			}
			if (func_17() > 3)
			{
				func_499(4);
			}
			break;
		
		case 4:
			break;
	}
}

bool func_88(auto uParam0, int iParam1)
{
	int iVar0;
	
	func_120(29);
	if ((*uParam0 > 0 && !func_121()) && func_103(player_id()) != 0)
	{
		if (!func_102())
		{
			func_101();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_100(uParam0.f_3))
			{
				func_4(uParam0.f_3, 0, 0);
			}
			else if (func_3(uParam0.f_3, 1000, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), 2);
				if (iParam1)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), false);
					func_4(uParam0.f_5, 0, 0);
				}
				func_4(uParam0.f_1, 0, 0);
				func_99(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_100(uParam0.f_5))
			{
				if (func_3(uParam0.f_5, 3000, 0))
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
				func_93();
				func_99(uParam0, 2);
			}
			break;
		
		case 2:
			func_93();
			if (func_3(uParam0.f_1, 15000, 0))
			{
				if (func_89(func_90()))
				{
					clear_help(1);
				}
				func_99(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_3(uParam0.f_1, 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
				GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), 2);
				func_99(uParam0, 4);
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

int func_89(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

char* func_90()
{
	if (func_91(func_92()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

bool func_91(int iParam0)
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

auto func_92()
{
	return Global_1615885;
}

void func_93()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false))
	{
		if ((((((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_6(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out()) && !func_98(player_id(), 22)) && func_103(player_id()) != 0) && !func_96(func_97()))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), true);
			func_95(func_90(), -1);
			func_94(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), false);
		}
	}
}

void func_94(int iParam0)
{
	if (iParam0 && !func_121())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_95(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

bool func_96(int iParam0)
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

int func_97()
{
	char* sVar0;
	
	sVar0 = get_this_script_name();
	if (are_strings_equal(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (are_strings_equal(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (are_strings_equal(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (are_strings_equal(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (are_strings_equal(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (are_strings_equal(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (are_strings_equal(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (are_strings_equal(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (are_strings_equal(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_99(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

auto func_100(auto uParam0)
{
	return *uParam0.f_1;
}

void func_101()
{
	Global_2444574 = 1;
}

bool func_102()
{
	if (func_74(player_id()) == 170)
	{
		return true;
	}
	return false;
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_119(iParam0) && !func_118(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_117(iParam0);
	uVar3 = func_116();
	uVar4 = func_108();
	if ((iVar1 && (func_107(iParam0) || func_106(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_105(iParam0)) && !func_104(iParam0)))
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

int func_104(int iParam0)
{
	return func_98(iParam0, 19);
}

int func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_98(iParam0, 9);
	}
	return false;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

bool func_108()
{
	if ((func_98(player_id(), 21) || func_98(player_id(), 22)) || func_113())
	{
		return true;
	}
	if (func_109())
	{
		func_120(22);
		return true;
	}
	return false;
}

bool func_109()
{
	if (func_75(player_id(), 0))
	{
		if ((func_116() && !func_112()) || func_111(player_id(), 21))
		{
			if (!func_98(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_110(27);
		}
	}
	return false;
}

void func_110(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_111(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

auto func_112()
{
	return Global_1312416.f_1;
}

int func_113()
{
	return func_114(283, -1);
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_115(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_71();
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

auto func_116()
{
	return Global_1312416;
}

int func_117(int iParam0)
{
	return func_98(iParam0, 20);
}

int func_118(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 2);
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

void func_120(int iParam0)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_121()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_122()
{
	struct<10> Var0;
	int iVar10;
	auto uVar11;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 20))
	{
		if (func_256())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 20);
			return;
		}
		if (func_108())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 20);
			return;
		}
		func_250(&Var0, &(Var0.f_1), 0, 0);
		if (func_518(func_7(), 1))
		{
			if (Local_128.f_34 > 0)
			{
				func_248(0, player_id());
				func_141(157, 1, &Var0);
			}
			else
			{
				func_248(0, func_76());
				func_141(157, 0, &Var0);
			}
		}
		else
		{
			func_141(157, func_138(0, 0) > 0, &Var0);
			if (func_137() != func_76() && func_74(func_137()) != 157)
			{
				func_250(&iVar10, &uVar11, 0, 1);
				func_123(&iVar10, 1);
			}
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 20);
	}
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_136())
		{
			if (func_77(0))
			{
				if (network_is_player_active(func_137()))
				{
					if (func_135() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_135();
						*iParam0 -= iVar0;
					}
					func_133(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_126("GB_BCUT_TICK1", func_137(), iVar0, 0, 0, 1, 1);
					}
					func_72(20);
					func_124(func_137(), iVar0, 1);
				}
			}
		}
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_125(iParam0));
	}
}

auto func_125(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_126(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_46(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_131(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_127(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_127(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_130() || !network_is_activity_session()) || !func_69(player_id(), 0))
	{
		return;
	}
	iVar0 = func_128(iParam2);
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

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_129(iVar0);
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

void func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_130()
{
	return is_dlc_present(-1762644250);
}

auto func_131(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_132(&cVar0);
}

auto func_132(char[4] cParam0)
{
	return cParam0;
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_134(1);
	}
	else
	{
		iVar1 = func_134(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_134(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_135()
{
	return Global_262145.f_10328;
}

int func_136()
{
	return func_60(player_id());
}

auto func_137()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_77(1) && !iParam1)
	{
		if (iParam0 || func_136())
		{
			iVar0 = false;
			while (iVar0 < _network_get_num_participants_host())
			{
				iVar2 = int_to_participantindex(iVar0);
				if (network_is_participant_active(iVar2))
				{
					if (func_139(network_get_player_index(iVar2), func_137(), 1))
					{
						iVar1 += Local_187[iVar0 /*4*/].f_2;
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return Local_187[participant_id_to_int() /*4*/].f_2;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_76())
	{
		if (!iParam2)
		{
			if (func_140(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_76())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_140(int iParam0, int iParam1)
{
	if (iParam1 != func_76())
	{
		if (iParam0 != func_76())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_76())
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

void func_141(int iParam0, int iParam1, auto uParam2)
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
	
	func_246(iParam0, &fVar2, &fVar3);
	if (*uParam2.f_6 == 0)
	{
		iVar1 += *uParam2.f_1;
		iVar0 += *uParam2;
	}
	if (iParam1)
	{
		iVar1 += func_245(iParam0);
		iVar1 = round(to_float(iVar1) / to_float(*uParam2.f_4));
		iVar1 = round(IntToFloat(iVar1) * fVar3);
		iVar1 = round(IntToFloat(iVar1) * *uParam2.f_3);
		iVar0 += func_244(iParam0);
		iVar0 = round(to_float(iVar0) / to_float(*uParam2.f_4));
		iVar0 = round(IntToFloat(iVar0) * fVar2);
		iVar0 = round(IntToFloat(iVar0) * *uParam2.f_2);
	}
	if (iParam1)
	{
		if (func_243(player_id()) > 0)
		{
			func_242();
		}
		else
		{
			func_241();
		}
	}
	else
	{
		func_240();
	}
	if (iParam0 == 168)
	{
		if (iParam1)
		{
			if (func_60(player_id()))
			{
				if (*uParam2.f_5)
				{
					iVar0 += func_232(Global_1610316[player_id() /*174*/].f_10.f_119);
				}
				else
				{
					iVar4 = *uParam2.f_7;
					if (*uParam2.f_8 > 0)
					{
						iVar4 += *uParam2.f_8;
					}
					iVar5 = func_231(iVar4);
					iVar6 = iVar5 * iVar4;
					iVar0 += iVar6;
					iVar8 = func_230(&uVar7);
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
						func_72(44);
					}
				}
				func_224(iVar0);
				func_223();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < _network_get_num_participants_host())
				{
					iVar13 = iVar12;
					if (network_is_participant_active(iVar13))
					{
						iVar14 = network_get_player_index(iVar13);
						if (func_222(iVar14))
						{
							func_214(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_60(player_id()))
		{
			func_213();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_60(player_id()))
		{
			if (iParam1)
			{
				func_212();
			}
			func_211();
		}
	}
	iVar15 = func_7();
	if (iVar15 != func_76() && iParam0 != 148)
	{
		if (func_59(player_id(), 0))
		{
			if (!func_139(player_id(), iVar15, 1))
			{
				func_123(&iVar0, 1);
			}
		}
	}
	func_207(iParam0, &iVar16, &iVar17);
	iVar1 += iVar16;
	iVar0 += iVar17;
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_206();
		func_157(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_137();
		if (iVar20 != func_76())
		{
			func_156(iVar20, &uVar18, &uVar19);
		}
		iVar21 = !func_77(1);
		if (iParam0 == 168)
		{
			if (!func_155())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_155())
		{
			func_146(-856006867, iVar0, &uVar22, 0, 1, 0);
			Global_2558146[uVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[uVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[uVar22 /*73*/].f_8.f_56 = iVar21;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar18, uVar19, iVar0, iVar21);
		}
		if (func_145(iParam0))
		{
			if (func_144(iParam0) > -1)
			{
				func_143(func_144(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_142(&Global_2443512, 0, 0);
	}
}

void func_142(auto uParam0, int iParam1, int iParam2)
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

void func_143(auto uParam0, int iParam1)
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

int func_144(int iParam0)
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

int func_145(int iParam0)
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

void func_146(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_155())
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
				func_147(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_147(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_147(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_155())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_71()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_154(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_153(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_148(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_149(iParam0);
	}
}

void func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_155())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_152(iParam0))
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
		func_150(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_150(auto uParam0)
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
	func_151(uParam0.f_8.f_3);
	func_151(uParam0.f_8.f_16);
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

void func_151(auto uParam0)
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

int func_152(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_153(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_154(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_155())
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

bool func_155()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_156(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

int func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_158(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_158(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_168(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_164(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_159(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_162(iParam0, 1)};
	if (iParam0 == func_161(PLAYER::PLAYER_PED_ID()))
	{
		func_160(1);
	}
	func_164(vVar0, iParam1, 0, sParam2);
}

void func_160(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_161(int iParam0)
{
	return iParam0;
}

Vector3 func_162(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_163(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
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

int func_163(int iParam0)
{
	return iParam0;
}

void func_164(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_167(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_166();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_165();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_165()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_166()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_167(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 fVar0;
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

auto func_168(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_169(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_169(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_205(player_id()) || func_204(player_id()))
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
	if (func_203(sParam2))
	{
	}
	if (func_202())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_200(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_199(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_196(0, &iVar1);
					break;
				
				case 3:
					func_196(1, &iVar1);
					break;
				
				case 1:
					func_193(&iVar1);
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
			func_190(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_180(func_189(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_190(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_174(iVar1);
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
				func_170(func_172(player_id()) + iVar1);
			}
			else
			{
				func_170(func_172(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_170(int iParam0)
{
	if (func_202())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_171(joaat("mpply_globalxp"), iParam0);
	}
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_172(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_173(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_173(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_173(int iParam0)
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

void func_174(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_179(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_177(func_178(&Var0));
			if (iVar13 == 0)
			{
				func_176(&Global_1347641, iParam0);
				func_175(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_176(&Global_1347642, iParam0);
				func_175(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_176(&Global_1347643, iParam0);
				func_175(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_176(&Global_1347644, iParam0);
				func_175(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_176(&Global_1347645, iParam0);
				func_175(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_175(int iParam0, int iParam1)
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

void func_176(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_177(int iParam0)
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

auto func_178(auto uParam0)
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

struct<13> func_179(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	if (func_202())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_115(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_115(-1)])
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
		if (func_188(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_186(iParam0, 1);
		}
		func_185(632, iParam0, -1, 1);
		func_184(633, func_186(iParam0, 1), -1, 1);
		Global_1347756[func_115(-1)] = iParam0;
		func_181(7, 0);
	}
}

void func_181(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_183(iParam0, iParam1))
	{
		uVar0 = func_182();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_182()
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

bool func_183(int iParam0, auto uParam1)
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

void func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_115(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_115(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_115(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_115(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_115(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_115(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_115(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_115(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_115(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_115(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_115(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_115(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_115(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_115(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_115(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_115(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_115(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_115(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_115(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_115(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_115(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_115(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_115(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_115(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_115(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_115(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_115(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_115(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_115(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_115(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_115(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_115(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_115(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_186(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_187(iParam0, 0);
}

int func_187(int iParam0, int iParam1)
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

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_115(-1)];
			}
			else if (func_188(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_115(-1)];
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_192(iParam0, func_115(iParam2), 0);
	iVar0 += iParam1;
	if (!func_191(iParam0))
	{
		func_184(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_185(iParam0, iVar0, iParam2, 1);
	}
}

bool func_191(int iParam0)
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

int func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_115(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_193(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_53(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_195(player_id(), iVar5))
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
		iVar6 = round(func_194(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_194(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_194(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_195(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_179(iParam0)};
		Global_2459453 = {func_179(iParam1)};
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

void func_196(int iParam0, int iParam1)
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
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_195(player_id(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_197(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_195(player_id(), iVar4))
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
		iVar5 = round(func_194(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_194(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_197(int iParam0, int iParam1)
{
	return vdist(func_198(iParam0), func_198(iParam1));
	return 0f;
}

Vector3 func_198(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

auto func_199(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_194(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_200(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_189(player_id()))
		{
			iParam0 = -func_189(player_id());
		}
	}
	if (func_201(8000, 0, 0) > 0)
	{
		if (func_201(8000, 0, 0) < iParam0 + func_189(player_id()))
		{
			iParam0 = func_201(8000, 0, 0) - func_189(player_id());
		}
	}
	return iParam0;
}

auto func_201(int iParam0, int iParam1, int iParam2)
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

bool func_202()
{
	return true;
}

bool func_203(char* sParam0)
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

int func_204(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_205(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_206()
{
	Global_2444573 = 1;
}

void func_207(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_210(7))
	{
		return;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_208(iParam0);
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

int func_208(int iParam0)
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

int func_209(int iParam0)
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

int func_210(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_18, iParam0);
}

void func_211()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_71()];
	iVar0++;
	Global_2493048[func_71()] = iVar0;
	func_185(3245, iVar0, -1, 1);
}

void func_212()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_71()];
	iVar1 = Global_2493058[func_71()];
	iVar0++;
	iVar1++;
	Global_2493043[func_71()] = iVar0;
	Global_2493058[func_71()] = iVar1;
	Global_1587523[player_id() /*444*/].f_250.f_85 = iVar1;
	func_185(3243, iVar0, -1, 1);
	func_185(3244, iVar1, -1, 1);
}

void func_213()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_71()];
	iVar0++;
	func_185(3247, iVar0, -1, 1);
}

void func_214(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_216(iParam0);
	func_215(iParam0, uVar0, iParam1);
}

void func_215(int iParam0, auto uParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 444;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_76())
	{
		if (network_is_player_active(iParam0))
		{
			trigger_script_event(1, &Var0, 4, func_125(iParam0));
		}
	}
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_221();
	iVar0 = func_219(iParam0, iVar0);
	iVar1 = Global_1610316[func_137() /*174*/].f_10.f_152;
	iVar0 += iVar1 * Global_262145.f_12335;
	if (iVar0 < func_218())
	{
		iVar0 = func_218();
	}
	if (iVar0 > func_217())
	{
		iVar0 = func_217();
	}
	return iVar0;
}

auto func_217()
{
	return Global_262145.f_12336;
}

auto func_218()
{
	return Global_262145.f_13498;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_243(iParam0) * func_220();
	iParam1 -= iVar0;
	return iParam1;
}

auto func_220()
{
	return Global_262145.f_13497;
}

auto func_221()
{
	return Global_262145.f_10320;
}

bool func_222(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		if (iParam0 != player_id())
		{
			if (func_139(iParam0, player_id(), 0))
			{
				if (!func_98(iParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_223()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_71()];
	iVar0++;
	func_185(3246, iVar0, -1, 1);
}

void func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_71()];
	iVar0 += iParam0;
	func_185(3248, iVar0, -1, 1);
	if (func_227(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_226(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_225(7666, iVar2, -1, 1);
	}
}

auto func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_71();
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

int func_226(int iParam0)
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

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	iVar1 = func_229(iParam0, iParam1);
	iVar2 = func_228(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_228(int iParam0)
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

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
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

int func_230(auto uParam0)
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
			if (!func_69(iVar2, 0) && !func_139(iVar2, player_id(), 1))
			{
				iVar1++;
			}
			else if (func_69(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

auto func_231(int iParam0)
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

int func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_239(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_238(iParam0, iVar3))
			{
				iVar0 += func_237(iVar3);
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_233(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= func_233(iParam0) - iVar1)
			{
				iVar0 += func_237(get_random_int_in_range(true, 6));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_233(int iParam0)
{
	int iVar0;
	
	if (func_236(iParam0))
	{
		iVar0 = func_234(func_235(iParam0));
		return func_192(iVar0, -1, 0);
	}
	return 0;
}

int func_234(int iParam0)
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

int func_235(int iParam0)
{
	int iVar0;
	
	if (func_236(iParam0))
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

bool func_236(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_237(int iParam0)
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

bool func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_236(iParam0))
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

bool func_239(int iParam0)
{
	int iVar0;
	
	if (func_236(iParam0))
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

void func_240()
{
	if (func_136())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_241()
{
	if (func_136())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_242()
{
	if (func_136())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70--;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

auto func_243(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_244(int iParam0)
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

int func_245(int iParam0)
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

void func_246(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_247(iParam0))
	{
		if (!func_136())
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
	if (func_59(player_id(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_7();
	if (iVar0 != func_76())
	{
		if (func_139(player_id(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_247(int iParam0)
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

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_76())
	{
		if (network_is_player_active(iParam1))
		{
			if (iParam1 == player_id())
			{
				iVar0 = 1;
			}
			else if (func_249(iParam1, player_id()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_6(player_id(), 1, 1))
		{
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			Global_2460486.f_4660.f_170 = _get_posix_time();
		}
	}
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_76() && iParam1 != func_76())
	{
		iVar0 = func_58(iParam0);
		if (iVar0 != func_76())
		{
			return iVar0 == func_58(iParam1);
		}
	}
	return false;
}

void func_250(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	Vector3 fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_518(func_7(), 1))
	{
		if (func_32())
		{
			*uParam0 = func_255() * Local_128.f_34;
			*uParam1 = func_254() * Local_128.f_34;
		}
		else
		{
			*uParam0 = func_253() * Local_128.f_34;
			*uParam1 = func_252() * Local_128.f_34;
		}
	}
	else if (func_77(1))
	{
		if (func_136())
		{
			iVar4 = func_138(iParam2, iParam3) - Local_187[participant_id_to_int() /*4*/].f_2;
		}
		else
		{
			iVar5 = network_get_participant_index(func_137());
			if (iVar5 != -1)
			{
				iVar4 = func_138(iParam2, iParam3) - Local_187[iVar5 /*4*/].f_2;
			}
		}
		if (func_32())
		{
			*uParam0 = func_255() * func_138(iParam2, iParam3);
			*uParam1 = func_254() * func_138(1, 0);
			iVar3 = func_255() * iVar4;
			*uParam0 -= iVar3;
		}
		else
		{
			*uParam0 = func_253() * func_138(iParam2, iParam3);
			*uParam1 = func_252() * func_138(1, 0);
			iVar3 = func_255() * iVar4;
			*uParam0 -= iVar3;
		}
		fVar0 = to_float(*uParam0) * Global_262145.f_10336;
		fVar1 = to_float(*uParam1) * Global_262145.f_10335;
		fVar2 = to_float(iVar3) * Global_262145.f_10336;
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
		iVar3 = round(fVar2);
		if (func_251() > 0)
		{
			func_133(&iVar3, 0);
		}
		*uParam0 += iVar3;
	}
	else
	{
		if (func_32())
		{
			*uParam0 = func_255() * func_138(0, 0);
			*uParam1 = func_254() * func_138(0, 0);
		}
		else
		{
			*uParam0 = func_253() * func_138(0, 0);
			*uParam1 = func_252() * func_138(0, 0);
		}
		fVar0 = to_float(*uParam0) * Global_262145.f_10338 * Global_262145.f_10417;
		fVar1 = to_float(*uParam1) * Global_262145.f_10337 * Global_262145.f_10418;
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
	}
}

int func_251()
{
	if (func_137() == func_76())
	{
		return 0;
	}
	return func_36(func_137());
}

auto func_252()
{
	return Global_262145.f_10412;
}

auto func_253()
{
	return Global_262145.f_10410;
}

auto func_254()
{
	return Global_262145.f_10413;
}

auto func_255()
{
	return Global_262145.f_10411;
}

bool func_256()
{
	return false;
}

void func_257()
{
	char* sVar0;
	auto uVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	
	if (func_275())
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 11);
	}
	if (func_86())
	{
		func_79();
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_98, 11))
	{
		return;
	}
	if (func_77(1))
	{
		sVar0 = func_274();
		uVar1 = func_46(player_id(), -2, 0, 0);
	}
	if (func_518(func_7(), 1))
	{
		if (Local_128.f_34 != -1)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 22))
			{
				func_250(&iVar2, &uVar3, 0, 0);
				if (Local_128.f_34 == 1)
				{
					func_272(85, "GB_WINNER", "GB_BB_SS_DEL1", sVar0, uVar1, 0, iVar2, -1, -1, 2, -1);
				}
				else if (Local_128.f_34 > 1)
				{
					func_272(85, "GB_WINNER", "GB_BB_SS_DEL", sVar0, uVar1, 0, Local_128.f_34, iVar2, -1, 2, -1);
				}
				else if (Local_128.f_34 == 0)
				{
					if (Local_128.f_35 != func_14())
					{
						if (func_14() > 1)
						{
							func_272(86, "GB_WORK_OVER", "GB_BB_SS_DELL", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_272(86, "GB_WORK_OVER", "GB_BB_SS_DELL1", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
						}
					}
					else if (Local_128.f_35 == func_14())
					{
						if (func_14() > 1)
						{
							func_271(86, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2);
						}
						else
						{
							func_271(86, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2);
						}
					}
				}
			}
			GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 11);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 22) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 16))
		{
			iVar4 = func_138(1, 0);
			func_250(&iVar5, &uVar6, 1, 0);
			if (iVar4 == 1)
			{
				if (func_77(1))
				{
					func_272(88, "GB_WORK_OVER", "GB_BB_SS_DES1", sVar0, uVar1, 0, iVar5, -1, -1, 2, -1);
				}
				else
				{
					func_262(88, iVar5, -1, "GB_BB_SS_SDES1", 1, -1, 2, "GB_WORK_OVER");
				}
			}
			else if (iVar4 > 1)
			{
				if (func_77(1))
				{
					func_272(88, "GB_WORK_OVER", "GB_BB_SS_DES", sVar0, uVar1, 0, iVar4, iVar5, -1, 2, -1);
				}
				else
				{
					func_262(88, iVar4, iVar5, "GB_BB_SS_SDES", 1, -1, 2, "GB_WORK_OVER");
				}
			}
			else if (iVar4 == 0)
			{
				if (Local_128.f_35 == 0)
				{
					if (Local_128.f_34 != func_14())
					{
						if (func_77(1))
						{
							if (func_14() > 1)
							{
								func_272(88, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_272(88, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
							}
						}
						else if (func_14() > 1)
						{
							func_271(86, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2);
						}
						else
						{
							func_271(86, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2);
						}
					}
					else if (Local_128.f_34 == func_14())
					{
						sVar0 = func_258(func_7());
						uVar1 = func_46(func_7(), -2, 0, 0);
						if (func_14() > 1)
						{
							func_272(86, "GB_WORK_OVER", "GB_BB_SS_DELIV", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_272(86, "GB_WORK_OVER", "GB_BB_SS_DELIV1", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
						}
					}
				}
				else if (Local_128.f_35 == func_14())
				{
					if (func_14() > 1)
					{
						func_271(86, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2);
					}
					else
					{
						func_271(86, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2);
					}
				}
				else if (func_77(1))
				{
					if (func_14() > 1)
					{
						func_272(88, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
					}
					else
					{
						func_272(88, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, uVar1, 0, -1, -1, -1, 2, -1);
					}
				}
				else if (func_14() > 1)
				{
					func_271(86, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2);
				}
				else
				{
					func_271(86, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 18))
		{
			func_271(86, "GB_WORK_OVER", "GB_BB_SS_FLEFT", 1, -1, 2);
		}
		func_78();
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 11);
	}
}

char* func_258(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_261(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_98(iParam0, 28) || func_98(player_id(), 28)) || func_260(iParam0)) && !func_259(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_58(iParam0);
	if (iVar1 != func_76())
	{
		sVar0 = func_261(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
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

bool func_259(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_179(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_179(iParam0)};
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

auto func_261(auto uParam0)
{
	return uParam0;
}

int func_262(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7)
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
	func_270(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_66 = iParam6;
	return func_263(&Var0);
}

bool func_263(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_269(uParam0, *uParam0.f_16);
	func_266(uParam0);
	if (func_265(*uParam0.f_1))
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
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_264(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_264(int iParam0)
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

bool func_265(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_266(auto uParam0)
{
	if (func_268(*uParam0.f_1))
	{
		*uParam0.f_66 = func_267();
	}
}

int func_267()
{
	return 21;
}

bool func_268(int iParam0)
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

void func_269(auto uParam0, int iParam1)
{
	if (func_268(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_76())
	{
		return;
	}
	if (func_264(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_46(iParam1, -2, 0, 0);
		}
	}
}

void func_270(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_76();
	*uParam1.f_17 = func_76();
	*uParam1.f_18 = func_76();
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

int func_271(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_270(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_263(&Var0);
}

int func_272(int iParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	uVar0 = func_76();
	uVar1 = func_76();
	uVar2 = func_76();
	return func_273(iParam0, sParam1, sParam2, sParam3, uParam4, uVar0, uVar1, uVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_273(auto uParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13)
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
	func_270(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Var0.f_63), 2);
	return func_263(&Var0);
}

char* func_274()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_58(player_id());
	if (iVar0 != func_76())
	{
		if (iVar0 != player_id())
		{
			if (((func_98(iVar0, 28) || func_98(player_id(), 28)) || func_260(iVar0)) && !func_259(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_261(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
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

bool func_275()
{
	if ((!func_276(1) || func_520()) || func_103(player_id()) == 0)
	{
		return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	if (func_111(player_id(), 21))
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
	if (func_294(player_id()))
	{
		return false;
	}
	if (func_293())
	{
		return false;
	}
	if (func_292())
	{
		return false;
	}
	if (func_291())
	{
		return false;
	}
	if (func_290())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_288(player_id()))
	{
		return false;
	}
	if (!func_286())
	{
		return false;
	}
	if (func_111(player_id(), 0) || func_111(player_id(), 3))
	{
		return false;
	}
	if ((func_111(player_id(), 12) || func_111(player_id(), 14)) || func_111(player_id(), 13))
	{
		return false;
	}
	if (func_285(player_id(), 0, 0))
	{
		if ((!func_284(Global_1587523[player_id() /*444*/].f_250.f_9) && !func_282(player_id())) || (func_74(player_id()) != 167 && func_74(player_id()) != 168))
		{
			return false;
		}
	}
	if (func_281())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_280(player_id()))
	{
		return false;
	}
	if (func_279())
	{
		return false;
	}
	if (func_278(player_id()))
	{
		return false;
	}
	if (func_277(player_id()))
	{
		return false;
	}
	return true;
}

bool func_277(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

bool func_278(int iParam0)
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

bool func_279()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_280(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_281()
{
	return Global_91330.f_297 > 0;
}

int func_282(int iParam0)
{
	if (iParam0 != func_76())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_283(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_283(int iParam0)
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

bool func_284(int iParam0)
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

bool func_285(int iParam0, int iParam1, int iParam2)
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
		if (func_282(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_286()
{
	if (func_287() == 0)
	{
		return true;
	}
	return false;
}

auto func_287()
{
	return Global_1312466.f_18;
}

int func_288(int iParam0)
{
	return func_289(iParam0);
}

int func_289(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_290()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

auto func_291()
{
	return Global_1315913;
}

int func_292()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_293()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_294(int iParam0)
{
	if (func_295(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_295(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_288(iParam0))
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

void func_296(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	if (Global_1727386 != 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1727386, true))
		{
			if (func_136())
			{
				if (func_297(82, "GB_INTTXT_YA", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					GAMEPLAY::CLEAR_BIT(&Global_1727386, true);
				}
			}
			else if (func_297(82, "GB_INTTXT_YA_2", 2, 0, 0, 0, 0, 1, 0, 1))
			{
				GAMEPLAY::CLEAR_BIT(&Global_1727386, true);
			}
		}
	}
}

bool func_297(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
	if (func_298(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_298(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_309();
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
	if (func_308() == 0)
	{
		func_306();
		return false;
	}
	func_305(Global_16779);
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
		func_304(0);
		func_304(2);
		func_304(1);
	}
	else
	{
		func_309();
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
					func_304(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_304(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_304(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_304(3);
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
		func_309();
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
			if (!func_291())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_303(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_299(1);
			func_303(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_299(int iParam0)
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
		if (func_302(14))
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
								func_301(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_301(&(Global_2290[iVar1 /*15*/]));
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
								func_301(&(Global_2290[iVar1 /*15*/]));
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
								func_301(&(Global_2290[iVar1 /*15*/]));
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
								func_301(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_301(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_300(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_300(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_301(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_301(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_301(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_301(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_301(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_301(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

int func_302(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_303(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_304(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_305(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
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

void func_306()
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
		if (!func_307(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_307(struct<6> Param0, struct<6> Param1)
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

bool func_308()
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
			if (!func_307(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
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

void func_309()
{
	if (func_302(14))
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
		Global_14413 = func_310();
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

auto func_310()
{
	func_311();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_311()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_314(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_313(PLAYER::PLAYER_PED_ID());
			if (func_312(iVar0) && (!func_302(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_312(Global_101154.f_1826.f_539.f_3549))
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

int func_312(int iParam0)
{
	return iParam0 < 3;
}

int func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_314(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_314(int iParam0)
{
	if (func_312(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_315(auto uParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
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
	
	if (func_417(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_415() || iParam2 == 24)
	{
		if (func_375(iParam1, iParam2, uParam3, Global_1573685, 0, func_413()))
		{
			func_374(1);
			if ((!func_373() && !func_372()) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
			{
				if (func_371())
				{
					func_369();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_368(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_367(iParam1);
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
								if (func_6(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_69(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_366(iVar35))
										{
											iVar44 = iVar35;
											if (func_60(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_365(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_364(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_362())
							{
								if (func_6(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_76();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_361(iVar35) && func_356(iVar35, iParam2)) && func_6(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_351(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_179(iVar35)};
								iVar37 = func_345(iVar35);
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
									if (!func_362())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_340(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_339(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_338(iVar35, 0);
								if (iVar34)
								{
									if (func_59(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_337(iParam5))
								{
									func_336(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_336(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								GAMEPLAY::GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_6(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_76();
							}
							if (func_361(iVar35))
							{
								if (func_6(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_351(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_179(iVar35)};
									iVar37 = func_345(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_338(iVar35, 1);
									if (iVar34)
									{
										if (func_59(iVar35, 1))
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
									func_329(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							func_326(uParam3, iParam1);
						}
						func_325(uParam3.f_21);
						func_324();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
						{
							func_323(uParam3, iParam1);
							func_322(iParam1, 0, 1);
							GAMEPLAY::GAMEPLAY::SET_BIT(uParam3.f_33, 7);
						}
						func_323(uParam3, iParam1);
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(uParam3.f_33, 11);
						}
						if (func_318(uParam3))
						{
							Global_1573833 = 1;
						}
						func_316(uParam3);
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
			func_324();
			func_368(0);
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

void func_316(auto uParam0)
{
	if (!func_100(uParam0.f_21))
	{
		func_4(uParam0.f_21, 0, 0);
	}
	else if (func_3(uParam0.f_21, 250, 0))
	{
		func_325(uParam0.f_21);
		func_317(0);
	}
}

void func_317(int iParam0)
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

int func_318(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_76() && func_6(iVar15, 0, 1))
	{
		Var2 = {func_179(iVar15)};
		iVar1 = func_321(uParam0, *uParam0.f_37);
		if (func_320(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_319(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_319(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_319(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_319(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_319(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_319(uParam0, uVar0, 0);
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

void func_319(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_320(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_321(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_322(int iParam0, int iParam1, int iParam2)
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

void func_323(auto uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_33, 10);
	}
}

void func_324()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_325(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_326(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_76())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_328(*uParam0.f_38[iVar0 /*2*/], 0);
					func_327(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_327(auto uParam0, int iParam1, int iParam2, int iParam3)
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

int func_328(int iParam0, int iParam1)
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

void func_329(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_335() && iParam3 < func_334())
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
				func_333("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_333(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_333("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_333("");
			if (*uParam2.f_108 == 6)
			{
				func_333("");
			}
			else
			{
				func_333(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_332(uParam2))
			{
				func_301("DPAD_FRIEND");
			}
			else if (func_331(uParam2))
			{
				func_301("DPAD_FRIEND");
			}
			else if (func_330(uParam2))
			{
				func_301("DPAD_CREW");
			}
			else
			{
				func_301("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_330(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 6);
}

int func_331(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 5);
}

bool func_332(auto uParam0)
{
	if (func_331(uParam0) && func_330(uParam0))
	{
		return true;
	}
	return false;
}

void func_333(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_334()
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

int func_335()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_336(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, Vector3 fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_335() && iParam2 < func_334())
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
					func_333("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_301(sParam15);
				}
				else
				{
					func_333(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_333("");
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
				if (func_362())
				{
					func_333("");
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
						func_301(uParam1.f_104);
					}
					else
					{
						func_333("");
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
					func_333("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_333("");
				}
				else
				{
					func_333(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_333("");
					func_333("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_332(uParam1))
				{
					func_301("DPAD_FRIEND");
				}
				else if (func_331(uParam1))
				{
					func_301("DPAD_FRIEND");
				}
				else if (func_330(uParam1))
				{
					func_301("DPAD_CREW");
				}
				else
				{
					func_301("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_337(int iParam0)
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

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_119(iParam0)) && !func_117(iParam0))
	{
		iVar0 = func_267();
	}
	iVar1 = func_57(iParam0);
	if (!iVar1 == -1)
	{
		return func_55(iVar1);
	}
	return iVar0;
}

char* func_339(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_340(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_344(iParam3))
	{
		*fParam1 = func_341(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_337(iParam3))
	{
		*fParam1 = func_341(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_341(int iParam0, int iParam1)
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
				return func_343(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_342(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_342(Vector3 fParam0)
{
	return fParam0 / 1.609344f;
}

float func_343(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_344(int iParam0)
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

int func_345(int iParam0)
{
	int iVar0;
	
	iVar0 = func_348(iParam0);
	if (iVar0 == -1)
	{
		func_346(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_346(int iParam0, int iParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_348(iParam0) != -1)
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
	if (func_347(iParam0))
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

bool func_347(int iParam0)
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

int func_348(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
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
			func_349(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_349(int iParam0)
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
	func_350(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_350(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_76();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_351(int iParam0)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Global_2459440 = {func_179(iParam0)};
		if (is_durango_version())
		{
			if (func_320(Global_2459440))
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
		if (func_355(&Global_2459440))
		{
			Global_2459370 = {func_353(iParam0)};
			func_352(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_352(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_353(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_354(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_179(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_354(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_355(auto uParam0)
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

bool func_356(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_118(iParam0) || func_360(iParam0)) || func_359(iParam0))
		{
			return false;
		}
	}
	if (!func_358(iParam0))
	{
		return false;
	}
	if ((!func_357(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_366(iParam0))
	{
		return false;
	}
	return true;
}

bool func_357(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (func_6(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_358(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_359(int iParam0)
{
	if (func_118(iParam0))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_360(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_361(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_76())
	{
		return false;
	}
	if (func_69(iParam0, 0))
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

bool func_362()
{
	switch (func_363(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_117(player_id()))
	{
		switch (func_74(player_id()))
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

int func_363(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_364(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_91(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_91(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_6(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_69(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_366(iVar1))
				{
					if (func_139(iVar1, iParam1, 0))
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

int func_366(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

void func_367(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_368(int iParam0)
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

void func_369()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
	{
		if (func_121())
		{
			func_370();
		}
	}
}

void func_370()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

bool func_371()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false) && func_121())
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true) && func_121())
	{
		return true;
	}
	return false;
}

bool func_372()
{
	if (func_121())
	{
		if (func_264(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_373()
{
	if (func_121())
	{
		if (func_268(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_374(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_375(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_412(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_411();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_410())
		{
			if (func_409() > 0 && Global_1573687)
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
		if (!func_401())
		{
			func_400(iParam0, uParam2, 1);
			return false;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
	{
		func_400(iParam0, uParam2, 1);
		return false;
	}
	if (!func_100(uParam2.f_19))
	{
		if (func_409() == 1)
		{
			func_399(iVar6, iParam0, 0);
			func_4(uParam2.f_19, 0, 0);
			func_400(iParam0, uParam2, 0);
		}
	}
	if (func_100(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_3(uParam2.f_19, 10000, 0) || (func_409() == 0 && !iParam5))
		{
			func_400(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_398();
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
					func_398();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_399(iVar6, iParam0, 0))
				{
					func_367(iParam0);
					sVar4 = func_396(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_393(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_386(iParam0, func_390(uParam2), func_387(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_383(iParam0, func_385(), func_384(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_393(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_381(iParam1)};
						iVar8 = func_376(iParam1);
						func_393(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_380())
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
			if (func_379(player_id()))
			{
				iVar0 = 20;
			}
			if (func_378(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_377(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_377(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_378(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_379(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_380()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_381(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_382(player_id()) || func_377(player_id()))
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

int func_382(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_383(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_301(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_301("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_384()
{
	switch (func_74(player_id()))
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

char* func_385()
{
	switch (func_74(player_id()))
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

void func_386(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_301(sParam1);
		}
		else if (func_363(player_id()) == 133)
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
		func_301("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_387(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_363(player_id());
	if (func_389())
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
			switch (func_388())
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

int func_388()
{
	if (func_363(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

auto func_389()
{
	return Global_1587522;
}

char* func_390(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_363(player_id());
	if (func_389())
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
			if (func_392() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_392() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_388())
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
			if (func_391() == 1)
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

auto func_391()
{
	return Global_2460486.f_4650;
}

int func_392()
{
	if (func_363(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_393(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_333(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_301(sParam1);
		}
		if (func_410() && iParam6)
		{
			if (func_395())
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
			func_301(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_394(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_394(int iParam0)
{
	if (func_379(iParam0) || func_378(iParam0))
	{
		return true;
	}
	return false;
}

auto func_395()
{
	return Global_1573687;
}

char* func_396(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_397();
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

char* func_397()
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

void func_398()
{
	Global_36611 = 1;
}

int func_399(int iParam0, int iParam1, int iParam2)
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

void func_400(int iParam0, auto uParam1, int iParam2)
{
	GAMEPLAY::CLEAR_BIT(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_324();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_100(uParam1.f_19))
		{
			func_325(uParam1.f_19);
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

bool func_401()
{
	if (func_408())
	{
		return false;
	}
	if (func_292())
	{
		return false;
	}
	if (!func_406())
	{
		return false;
	}
	if (!func_286())
	{
		return false;
	}
	if (func_405(8, -1))
	{
		return false;
	}
	if (func_409() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_290())
	{
		return false;
	}
	else if (!func_295(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_404(1) || func_402(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_67(player_id()))
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
	if (func_210(0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

bool func_402(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_403(PLAYER::PLAYER_PED_ID()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
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
	if (is_control_pressed(0, 19) || (!iParam0 && is_disabled_control_pressed(0, 19)))
	{
		return true;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((is_control_pressed(0, 166) || is_control_pressed(0, 167)) || is_control_pressed(0, 168)) || is_control_pressed(0, 169))
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

bool func_403(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			get_current_ped_weapon(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_404(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_405(int iParam0, int iParam1)
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

bool func_406()
{
	if (func_407())
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

auto func_407()
{
	return Global_1312438;
}

int func_408()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

auto func_409()
{
	return Global_1338622.f_68;
}

bool func_410()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_411()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_412(int iParam0)
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

int func_413()
{
	if (func_414(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_414(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_69(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

bool func_415()
{
	if (func_413())
	{
		return true;
	}
	if (func_359(player_id()))
	{
		return false;
	}
	if (func_389())
	{
		return true;
	}
	if (func_119(player_id()))
	{
		switch (func_363(player_id()))
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
				if (!func_416(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_416(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_416(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_417(int iParam0)
{
	if ((iParam0 == 24 && func_119(player_id())) && !func_117(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_75(player_id(), 0) && func_117(player_id()))
		{
			return true;
		}
		if (func_103(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

void func_418()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_98, 4);
		GAMEPLAY::CLEAR_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 14);
		GAMEPLAY::CLEAR_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 15);
	}
	iVar0 = false;
	while (iVar0 < func_14())
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar0)))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar0) && !GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, iVar0))
			{
				if (func_17() < 3)
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), net_to_veh(func_25(iVar0)), 0))
					{
						func_428();
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 15);
						if (get_ped_in_vehicle_seat(net_to_veh(func_25(iVar0)), -1) == PLAYER::PLAYER_PED_ID())
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 14);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 4))
						{
							if (is_entity_at_coord(net_to_veh(func_25(iVar0)), func_24(iVar0), IntToFloat(func_427()), IntToFloat(func_427()), IntToFloat(func_427()), false, true, 0))
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_98, 8);
								GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 4);
							}
						}
						iVar1 = false;
						while (iVar1 < func_14())
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar1 + 4))
							{
								if (GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 16))
								{
									if (get_player_wanted_level(player_id()) == 0 && get_ped_in_vehicle_seat(net_to_veh(func_25(iVar0)), -1) == PLAYER::PLAYER_PED_ID())
									{
										if (is_entity_at_coord(net_to_veh(func_25(iVar0)), func_426(iVar1), 2f, 1f, 2f, true, true, 0))
										{
											func_425(net_to_veh(func_25(iVar0)), 4f, 1, 0.5f, 0, 0, 0);
											GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar0);
											GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar1 + 4);
											GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 18);
											GAMEPLAY::CLEAR_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 14);
											GAMEPLAY::CLEAR_BIT(&iLocal_98, 4);
											GAMEPLAY::CLEAR_BIT(&iLocal_98, 8);
											Var2.f_10 = player_id();
											Var2.f_11 = func_7();
											Var2.f_2 = 180;
											func_12(Var2, func_13(1));
											iVar1 = func_14();
										}
									}
								}
								else if (is_entity_at_coord(net_to_veh(func_25(iVar0)), func_426(iVar1), IntToFloat(func_424()), IntToFloat(func_424()), IntToFloat(func_424()), false, true, 0))
								{
									set_audio_flag("WantedMusicDisabled", 1);
									if (func_32())
									{
										set_player_wanted_level(player_id(), func_423(), 0);
									}
									else
									{
										set_player_wanted_level(player_id(), func_422(), 0);
									}
									set_player_wanted_level_now(player_id(), 0);
									GAMEPLAY::CLEAR_BIT(&iLocal_98, 4);
									GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 16);
									set_audio_flag("WantedMusicDisabled", 0);
								}
							}
							iVar1++;
						}
					}
				}
			}
			else
			{
				func_419(net_to_veh(func_25(iVar0)), 0);
			}
		}
		iVar0++;
	}
}

bool func_419(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_421(iParam0, 1, 1, 0, 0, 0))
	{
		iVar0 = false;
		while (iVar0 < 32)
		{
			iVar1 = int_to_playerindex(iVar0);
			if (func_6(iVar1, 0, 1))
			{
				if (is_ped_in_vehicle(get_player_ped(iVar1), iParam0, 0))
				{
					func_420(func_125(iVar1), 0, 0f, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	else if (!network_has_control_of_entity(iParam0))
	{
		network_request_control_of_entity(iParam0);
	}
	else
	{
		set_vehicle_doors_locked_for_all_players(iParam0, 1);
		freeze_entity_position(iParam0, false);
		if (iParam1)
		{
			set_entity_invincible(iParam0, true);
		}
		return true;
	}
	return false;
}

void func_420(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0 = 58;
	Var0.f_1 = player_id();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 7, iParam0);
	}
}

bool func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
	if (iParam4 || !is_entity_dead(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!is_vehicle_seat_free(iParam0, iVar0 - 1))
			{
				iVar2 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (is_ped_a_player(iVar2))
						{
							if (get_player_wanted_level(_network_get_ped_player(iVar2)) == 0)
							{
								if (!iParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else
				{
					iVar3 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

auto func_422()
{
	return Global_262145.f_10406;
}

auto func_423()
{
	return Global_262145.f_10407;
}

auto func_424()
{
	return Global_262145.f_10408;
}

bool func_425(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_426(int iParam0)
{
	return Local_128.f_36[iParam0 /*3*/];
}

auto func_427()
{
	return Global_262145.f_10409;
}

void func_428()
{
	if (!func_429(player_id()))
	{
		func_120(25);
	}
}

int func_429(int iParam0)
{
	return func_98(iParam0, 25);
}

void func_430()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 16))
	{
		if (func_6(player_id(), 1, 1))
		{
			if (get_max_wanted_level() != func_432())
			{
				set_max_wanted_level(func_432());
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 8))
			{
				if (is_player_control_on(player_id()))
				{
					if (func_32())
					{
						set_player_wanted_level(player_id(), func_432(), 0);
					}
					else
					{
						set_player_wanted_level(player_id(), func_431(), 0);
					}
					set_player_wanted_level_now(player_id(), 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 8);
				}
			}
			else
			{
				_0xBC9490CA15AEA8FB(player_id());
				_0x4669B3ED80F24B4E(player_id());
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_98, 8);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 17))
	{
		if (!func_6(player_id(), 1, 1))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 7);
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_98, 7))
		{
			if (is_player_control_on(player_id()))
			{
				if (iLocal_117 > 0)
				{
					set_player_wanted_level(player_id(), iLocal_117, 0);
					set_player_wanted_level_now(player_id(), 0);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_98, 7);
			}
		}
		else
		{
			iVar0 = get_player_wanted_level(player_id());
			if (iVar0 == 0)
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_98, 8);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 17);
			}
			else if (iVar0 != iLocal_117)
			{
				iLocal_117 = iVar0;
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_98, 4) && !GAMEPLAY::IS_BIT_SET(iLocal_98, 8))
	{
		if (func_32())
		{
			set_player_wanted_level(player_id(), func_432(), 0);
		}
		else
		{
			set_player_wanted_level(player_id(), func_431(), 0);
		}
		set_player_wanted_level_now(player_id(), 0);
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 8);
	}
}

auto func_431()
{
	return Global_262145.f_10404;
}

auto func_432()
{
	return Global_262145.f_10405;
}

void func_433()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 13))
	{
		if (func_6(player_id(), 1, 1))
		{
			if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), func_24(0), 100f, 100f, 100f, false, true, 0))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 13);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 15) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 14))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 13);
		}
	}
}

void func_434()
{
	struct<4> Var0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 9))
	{
		switch (func_38())
		{
			case 0:
				StringCopy(&Var0, "GB_INTTXT_BOB0", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_INTTXT_BOB1", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_INTTXT_BOB2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_INTTXT_BOB3", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "GB_INTTXT_BOB4", 16);
				break;
			
			case 5:
				StringCopy(&Var0, "GB_INTTXT_BOB5", 16);
				break;
		}
		if (func_14() == 1)
		{
			StringConCat(&Var0, "1", 16);
		}
		if (func_297(82, &Var0, 2, 0, 0, 0, 0, 1, 0, 1))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 9);
		}
	}
}

void func_435(int iParam0, Vector3 vParam1, auto uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if (((func_119(player_id()) && !func_118(player_id())) && !GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 8)) && (func_107(player_id()) || func_106(player_id())))
	{
		return;
	}
	Global_1727391 = {vParam1};
	fVar0 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_462(iParam0, fVar0);
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_105(player_id()) || func_461(player_id()))
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
		if (!func_111(player_id(), 21))
		{
			func_460(vParam1, 1, 0);
		}
		if (!*uParam4 && func_6(player_id(), 1, 1))
		{
			*uParam4 = 1;
			if (func_459(iParam0))
			{
				set_wanted_level_multiplier(func_458(iParam0));
				if (func_457(iParam0, -1))
				{
					set_max_wanted_level(false);
					if (get_player_wanted_level(player_id()) > 0)
					{
						set_player_wanted_level(player_id(), false, 1);
						set_player_wanted_level_now(player_id(), 1);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
				}
			}
			if (func_456(iParam0))
			{
				fVar1 = func_455(iParam0);
				if (fVar1 != 1f)
				{
					func_452(fVar1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
				}
			}
			if (!Global_2391042)
			{
				if (func_451(iParam0) && func_105(player_id()))
				{
					func_450(1);
					func_449(2);
				}
			}
			func_120(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_98(player_id(), 19))
			{
				func_110(19);
			}
		}
		if (*uParam4 && func_6(player_id(), 1, 1))
		{
			*uParam4 = 0;
			if (func_459(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), false);
				}
			}
			if (func_456(iParam0))
			{
				func_448();
				GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), true);
			}
			if (iParam7 && !func_119(player_id()))
			{
				if (func_74(player_id()) != 152)
				{
					func_437();
				}
			}
			if (func_210(2))
			{
				func_450(0);
				func_436(2);
			}
		}
	}
}

void func_436(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_437()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_446();
	func_438(1, 1);
}

void func_438(int iParam0, int iParam1)
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
		func_445();
	}
	func_441(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_440(0);
	func_439();
}

void func_439()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_440(int iParam0)
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

void func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_443();
		func_442(8, 0, 0);
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
		func_443();
		func_442(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_442(int iParam0, int iParam1, int iParam2)
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

void func_443()
{
	func_444();
	Global_2404956.f_635 = 0;
}

void func_444()
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

void func_445()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_446()
{
	func_447();
	Global_2404956.f_1280 = 0;
}

void func_447()
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

void func_448()
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

void func_449(int iParam0)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_450(int iParam0)
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

bool func_451(int iParam0)
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

void func_452(float fParam0)
{
	Vector3 fVar0;
	
	if (get_hash_key(get_this_script_name()) == func_453())
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

int func_453()
{
	switch (func_454())
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

auto func_454()
{
	return Global_25120;
}

float func_455(int iParam0)
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

bool func_456(int iParam0)
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

bool func_457(int iParam0, int iParam1)
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

float func_458(int iParam0)
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

bool func_459(int iParam0)
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

void func_460(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

bool func_461(int iParam0)
{
	if (func_60(iParam0))
	{
		if (func_105(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_462(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_463(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_428();
	}
}

int func_463(int iParam0)
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

void func_464()
{
	Vector3 vVar0;
	int iVar3;
	
	if (func_3(&uLocal_118, 5000, 0))
	{
		iVar3 = false;
		while (iVar3 < func_14())
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar3)) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(net_to_veh(func_25(iVar3))) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (func_6(player_id(), 1, 1))
					{
						vLocal_110 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
					}
					if (!is_entity_dead(net_to_veh(func_25(iVar3)), 0))
					{
						if (func_465(vVar0))
						{
							vVar0 = {get_entity_coords(net_to_veh(func_25(iVar3)), 1)};
							vLocal_113 = {vVar0};
						}
						else if (vdist(vLocal_110, vVar0) > vdist(vLocal_110, get_entity_coords(net_to_veh(func_25(iVar3)), 1)))
						{
							vVar0 = {get_entity_coords(net_to_veh(func_25(iVar3)), 1)};
						}
					}
				}
			}
			iVar3++;
		}
		vLocal_113 = {vVar0};
		func_325(&uLocal_118);
	}
}

bool func_465(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_466()
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 13) && func_518(func_7(), 1))
	{
		if (!does_blip_exist(iLocal_109))
		{
			iLocal_109 = add_blip_for_coord(func_24(0));
			func_468(&iLocal_109, 12);
			set_blip_route(iLocal_109, true);
			set_blip_route_colour(iLocal_109, func_467(12));
		}
	}
	else
	{
		if (does_blip_exist(iLocal_109))
		{
			remove_blip(&iLocal_109);
		}
		iVar1 = false;
		while (iVar1 < func_14())
		{
			if ((((network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar1)) && !is_entity_dead(net_to_veh(func_25(iVar1)), 0)) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), net_to_veh(func_25(iVar1)), 0)) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar1)) && !func_275())
			{
				if (!does_blip_exist(iLocal_99[iVar1]))
				{
					iLocal_99[iVar1] = add_blip_for_entity(net_to_veh(func_25(iVar1)));
					set_blip_sprite(iLocal_99[iVar1], 461);
					if (func_518(func_7(), 1))
					{
						func_468(&(iLocal_99[iVar1]), 9);
					}
					else
					{
						func_468(&(iLocal_99[iVar1]), 6);
					}
					unk_0xB552929B85FC27EC(iLocal_99[iVar1], 1);
					set_blip_priority(iLocal_99[iVar1], 12);
					set_blip_name_from_text_file(iLocal_99[iVar1], "GB_BB_B_VEH");
					set_blip_scale(iLocal_99[iVar1], Global_262145.f_10294);
					if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 5))
					{
						set_blip_flashes(iLocal_99[iVar1], 1);
						set_blip_flash_timer(iLocal_99[iVar1], 7000);
						if (iVar1 == func_14() - 1)
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 5);
						}
					}
				}
			}
			else if (does_blip_exist(iLocal_99[iVar1]))
			{
				remove_blip(&(iLocal_99[iVar1]));
			}
			if (func_518(func_7(), 1))
			{
				if (((GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 15) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 14)) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar1 + 4)) && !func_275())
				{
					if (!does_blip_exist(iLocal_104[iVar1]))
					{
						iLocal_104[iVar1] = add_blip_for_coord(func_426(iVar1));
						func_468(&(iLocal_104[iVar1]), 12);
					}
					iVar0 = iVar1;
				}
				else if (does_blip_exist(iLocal_104[iVar1]))
				{
					remove_blip(&(iLocal_104[iVar1]));
				}
			}
			iVar1++;
		}
		if (does_blip_exist(iLocal_104[iVar0]) && !_0xDD2238F57B977751(iLocal_104[iVar0]))
		{
			set_blip_route(iLocal_104[iVar0], true);
			set_blip_route_colour(iLocal_104[iVar0], func_467(12));
		}
	}
}

int func_467(int iParam0)
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

void func_468(int iParam0, int iParam1)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_colour(*iParam0, func_467(iParam1));
	}
}

void func_469()
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 24))
	{
		iVar0 = false;
		while (iVar0 < func_14())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar0) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar0 + 8))
			{
				if (network_does_network_id_exist(func_25(iVar0)))
				{
					if (network_has_control_of_network_id(func_25(iVar0)))
					{
						set_entity_invincible(net_to_veh(func_25(iVar0)), false);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_470()
{
	int iVar0;
	
	func_471();
	if (func_275() || func_103(player_id()) != 3)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 2))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 17) || GAMEPLAY::IS_BIT_SET(Local_128.f_1, 24))
		{
			if (func_518(func_7(), 1))
			{
				if (!is_help_message_being_displayed())
				{
					func_95("GB_BB_ALERT", -1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 2);
				}
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 2);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 12))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 16))
		{
			if (!is_help_message_being_displayed())
			{
				func_95("GB_BB_LOSE", -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 12);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_98, 10))
	{
		if (func_14() == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 10);
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar0 + 8))
			{
				if (!is_help_message_being_displayed())
				{
					if (func_518(func_7(), 1))
					{
						func_95("GB_BB_DES", -1);
					}
					else if (func_77(1))
					{
						if (func_136())
						{
							func_95("GB_BB_DESF", -1);
						}
						else
						{
							func_95("GB_BB_DESR", -1);
						}
					}
					else
					{
						func_95("GB_BB_DESF", -1);
					}
					func_94(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 10);
				}
			}
			iVar0++;
		}
	}
}

void func_471()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_1643, 22))
	{
		iVar0 = func_363(player_id());
		if (iVar0 != -1)
		{
			if (!func_473(0) && !func_473(func_472(iVar0)))
			{
				func_72(22);
			}
		}
	}
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 12;
}

int func_473(int iParam0)
{
	int iVar0;
	
	iVar0 = func_192(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

void func_474()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	
	if (func_275() || func_103(player_id()) != 3)
	{
		return;
	}
	iVar0 = false;
	while (iVar0 < func_14())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar0))
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar0)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(net_to_veh(func_25(iVar0))))
				{
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !is_entity_dead(net_to_veh(func_25(iVar0)), 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), net_to_veh(func_25(iVar0)), 0))
						{
							if (func_518(func_7(), 1))
							{
								get_hud_colour(9, &iVar1, &iVar2, &iVar3, &uVar4);
							}
							else
							{
								get_hud_colour(6, &iVar1, &iVar2, &iVar3, &uVar4);
							}
							func_475(net_to_veh(func_25(iVar0)), iVar1, iVar2, iVar3);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3)
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
	draw_marker(2, get_entity_coords(iParam0, 1) + Vector(vVar3.z - vVar0.z / 2f + fVar6, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_476()
{
	if (func_275() || func_103(player_id()) != 3)
	{
		if (func_86())
		{
			func_79();
		}
		return;
	}
	if (func_518(func_7(), 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 13))
		{
			func_484("GB_BB_GT_GOTO", func_486(), 0, 0);
		}
		else if ((GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 16) && GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 15)) && get_player_wanted_level(player_id()) > 0)
		{
			func_478("GB_BB_COPS", 0);
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 15))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 15))
			{
				func_478("GB_BB_GT_UDLVR", 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 14))
			{
				func_478("GB_BB_GT_DLVR1", 0);
			}
			else
			{
				func_478("GB_BB_GT_STEAL1", 0);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_187[participant_id_to_int() /*4*/].f_1, 15))
		{
			func_478("GB_BB_GT_UDLVR", 0);
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 14))
		{
			func_478("GB_BB_GT_DLVR", 0);
		}
		else
		{
			func_478("GB_BB_GT_STEAL", 0);
		}
	}
	else if (func_6(func_7(), 0, 1))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 15))
		{
			func_477("GB_BB_GT_DSTRY1", func_258(func_7()), 0, 0);
		}
		else
		{
			func_477("GB_BB_GT_DSTRY", func_258(func_7()), 0, 0);
		}
	}
}

void func_477(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_484(sParam0, sParam1, iParam3, iParam2))
	{
		Global_1312577 = 15;
		Global_1312577.f_54 = iParam2;
	}
}

void func_478(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_482(sParam0))
	{
		return;
	}
	func_80();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_481();
	func_480(iParam1);
	func_479();
}

void func_479()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1312577.f_57), true);
}

void func_480(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1312577.f_57), false);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312577.f_57), false);
}

void func_481()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

int func_482(char* sParam0)
{
	if (!func_85())
	{
		return false;
	}
	if (Global_1312577 == 11)
	{
		return func_483(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10));
}

int func_483(char* sParam0)
{
	if (!func_85())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_14));
}

bool func_484(char* sParam0, char* sParam1, int iParam2, int iParam3)
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
	if (func_485(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_80();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_481();
	func_480(iParam2);
	func_479();
	return true;
}

int func_485(char* sParam0, char* sParam1)
{
	if (!func_85())
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
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	return get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14));
}

char* func_486()
{
	switch (func_38())
	{
		case 0:
			return "GB_BB_GT_PS0";
		
		case 1:
			return "GB_BB_GT_PS1";
		
		case 2:
			return "GB_BB_GT_PS2";
		
		case 3:
			return "GB_BB_GT_PS3";
		
		case 4:
			return "GB_BB_GT_PS4";
		
		case 5:
			return "GB_BB_GT_PS5";
		
		default:
	}
	return "GB_BB_GT_PS0";
}

void func_487()
{
	int iVar0;
	
	if (func_275() || func_103(player_id()) != 3)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 12))
	{
		if (func_100(&(Local_128.f_49)))
		{
			if (func_17() < 3)
			{
				iLocal_127 = func_10() - func_492(&(Local_128.f_49), 0, 0);
			}
			if (iLocal_127 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iLocal_127 = func_491(iLocal_127, 0);
			if (iLocal_127 > 0)
			{
				func_488(iLocal_127, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0);
			}
			else
			{
				func_488(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0);
			}
		}
	}
}

void func_488(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_490(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_489(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_489(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_490(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

int func_491(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_492(auto uParam0, int iParam1, int iParam2)
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

void func_493()
{
	if (func_275())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_98, false))
	{
		if (!func_121())
		{
			if (func_518(func_7(), 1))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_98, true))
				{
					if (!is_help_message_being_displayed())
					{
						if (func_14() == 1)
						{
							func_95("GB_BB_WARN1", -1);
						}
						else
						{
							func_95("GB_BB_WARN", -1);
						}
						func_94(1);
						GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 3);
					}
				}
				else
				{
					if (player_id() != func_7())
					{
						func_95("GB_BB_GSTART", -1);
					}
					else if (func_14() == 1)
					{
						func_95("GB_BB_BSTART1", -1);
					}
					else
					{
						func_95("GB_BB_BSTART", -1);
					}
					func_94(1);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, true);
				}
			}
			else
			{
				if (func_14() == 1)
				{
					func_498("GB_BB_FSTART1", func_258(func_7()), func_46(func_7(), -2, 0, 0), -1);
				}
				else
				{
					func_498("GB_BB_FSTART", func_258(func_7()), func_46(func_7(), -2, 0, 0), -1);
				}
				func_94(1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, 3);
			}
		}
	}
	else
	{
		if (func_518(func_7(), 1))
		{
			if (func_14() == 1)
			{
				func_271(84, "GB_BB_ST_START", "GB_BB_SS_START1", 1, -1, 2);
			}
			else
			{
				func_271(84, "GB_BB_ST_START", "GB_BB_SS_START", 1, -1, 2);
			}
		}
		else if (func_14() == 1)
		{
			func_272(84, "GB_BB_ST_START", "GB_BB_SS_DSTRY1", func_258(func_7()), func_46(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		else
		{
			func_272(84, "GB_BB_ST_START", "GB_BB_SS_DSTRY", func_258(func_7()), func_46(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		func_494();
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_98, false);
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), 12);
	}
}

void func_494()
{
	if (func_137() != func_76())
	{
		Global_1727400 = func_497(func_137());
		Global_1727400.f_1 = func_496(func_137());
	}
	Global_1727400.f_5 = _get_posix_time();
	Global_1727400.f_13 = func_495();
	Global_1727400.f_15 = 0;
	if (func_77(1))
	{
		if (func_7() == func_137())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_495()
{
	int iVar0;
	
	iVar0 = func_137();
	if (iVar0 != func_76())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

auto func_496(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[1];
}

auto func_497(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[0];
}

void func_498(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam3);
}

void func_499(int iParam0)
{
	Local_187[participant_id_to_int() /*4*/].f_3 = iParam0;
}

void func_500(int iParam0)
{
	if (iParam0)
	{
		if (!func_98(player_id(), 9))
		{
			if (func_103(player_id()) != 0)
			{
				func_120(9);
			}
		}
	}
	else if (func_98(player_id(), 9))
	{
		func_110(9);
	}
}

void func_501()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < func_14())
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar0)))
		{
			if (is_vehicle_driveable(net_to_veh(func_25(iVar0)), 0))
			{
				if (network_has_control_of_entity(net_to_veh(func_25(iVar0))))
				{
					if (func_6(player_id(), 0, 1))
					{
						func_502(net_to_veh(func_25(iVar0)));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (func_6(iVar1, 0, 1))
		{
			if (func_139(iVar1, func_7(), 1) || func_504(iVar1, func_7()))
			{
				set_vehicle_doors_locked_for_player(iParam0, iVar1, 0);
			}
			else
			{
				func_503(iVar1, iParam0);
				set_vehicle_doors_locked_for_player(iParam0, iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_player_ped(iParam0);
	if (is_vehicle_driveable(iParam1, 0))
	{
		if (is_ped_in_vehicle(iVar0, iParam1, 1))
		{
			func_420(func_125(iParam0), 0, 0f, 0, 0, 0);
		}
	}
}

int func_504(int iParam0, int iParam1)
{
	if (iParam1 != func_76())
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_21 != func_76())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10.f_21;
		}
	}
	return false;
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != iParam0)
	{
		func_517(-1);
		Global_1610316[player_id() /*174*/].f_10.f_28 = iParam0;
		if (func_516() != -1)
		{
			func_515(-1);
		}
		if (func_514() != -1)
		{
			func_513(-1);
		}
		func_511(iParam2);
		func_509(iParam0);
		if (!func_456(iParam0))
		{
			fVar0 = func_455(iParam0);
			if (fVar0 != 1f)
			{
				func_452(fVar0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), true);
			}
		}
		if (!func_459(iParam0))
		{
			if (func_457(iParam0, iParam2))
			{
				set_max_wanted_level(false);
				set_player_wanted_level(player_id(), false, 0);
				set_player_wanted_level_now(player_id(), 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1727391.f_3), false);
			}
			else if (get_max_wanted_level() < 5)
			{
				set_wanted_level_multiplier(1f);
				set_max_wanted_level(5);
			}
		}
		if (func_116())
		{
			func_120(27);
		}
		if (iParam1)
		{
			if (!func_108())
			{
				func_450(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, true) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, 4)) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4414, false))
			{
				func_72(6);
			}
			func_508();
		}
		if (iParam0 == 164)
		{
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
		}
		if (func_119(player_id()) && func_105(player_id()))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
		}
		func_506();
	}
}

void func_506()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_507();
	iVar2 = func_58(player_id());
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			if (func_139(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(player_id(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, player_id(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_507()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_137();
	if (iVar0 != func_76())
	{
		if (func_6(iVar0, 0, 1))
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

void func_508()
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

void func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_192(3351, -1, 0);
	iVar1 = func_510(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_184(3351, iVar0, -1, 1);
	}
}

int func_510(int iParam0)
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

void func_511(int iParam0)
{
	func_512(player_id(), iParam0);
}

void func_512(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_513(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

auto func_514()
{
	return Global_2460486.f_4660.f_138;
}

void func_515(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

auto func_516()
{
	return Global_2460486.f_4660.f_137;
}

void func_517(int iParam0)
{
	Global_1610316[player_id() /*174*/].f_10.f_27 = iParam0;
}

int func_518(int iParam0, int iParam1)
{
	return func_139(player_id(), iParam0, iParam1);
}

auto func_519()
{
	return Local_187[participant_id_to_int() /*4*/].f_3;
}

bool func_520()
{
	if (func_108())
	{
		return true;
	}
	return false;
}

void func_521(int iParam0, int iParam1)
{
	Local_187[iParam0 /*4*/] = iParam1;
}

bool func_522()
{
	return true;
}

auto func_523()
{
	return Local_128;
}

auto func_524(int iParam0)
{
	return Local_187[iParam0 /*4*/];
}

void func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_526(iVar0);
				break;
		}
		iVar0++;
	}
	iVar2 = false;
	while (iVar2 < func_14())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar2) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar2 + 8))
		{
			if (player_id() == func_7())
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar2)))
				{
					if (is_entity_dead(net_to_veh(func_25(iVar2)), 0))
					{
						if ((is_entity_in_water(net_to_veh(func_25(iVar2))) && !is_vehicle_driveable(net_to_veh(func_25(iVar2)), 0)) && is_vehicle_seat_free(net_to_veh(func_25(iVar2)), -1))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar2 + 8);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_526(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	
	if (get_event_data(1, iParam0, &Var0, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0))
		{
			if (is_entity_a_vehicle(Var0))
			{
				iVar10 = false;
				while (iVar10 < func_14())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar10) && !GAMEPLAY::IS_BIT_SET(Local_128.f_1, iVar10 + 8))
					{
						if (get_vehicle_index_from_entity_index(Var0) == net_to_veh(func_25(iVar10)))
						{
							if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar10)) && is_entity_dead(net_to_veh(func_25(iVar10)), 0))
							{
								if ((is_entity_in_water(net_to_veh(func_25(iVar10))) && !is_vehicle_driveable(net_to_veh(func_25(iVar10)), 0)) && is_vehicle_seat_free(net_to_veh(func_25(iVar10)), -1))
								{
									return;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && is_entity_a_ped(Var0.f_1))
							{
								if (get_ped_index_from_entity_index(Var0.f_1) == PLAYER::PLAYER_PED_ID())
								{
									if (func_108())
									{
										if (Var0.f_3)
										{
											GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar10 + 8);
											func_528(func_76());
										}
									}
									else if (!func_139(player_id(), func_7(), 1))
									{
										func_428();
										if (!func_98(player_id(), 20))
										{
											func_527(0);
										}
										if (Var0.f_3)
										{
											Local_187[participant_id_to_int() /*4*/].f_2++;
											GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar10 + 8);
											func_528(player_id());
										}
									}
									else if (Var0.f_3)
									{
										GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar10 + 8);
										func_528(func_76());
									}
								}
								else if (!is_ped_a_player(get_ped_index_from_entity_index(Var0.f_1)))
								{
									if (Var0.f_3)
									{
										GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_187[participant_id_to_int() /*4*/].f_1), iVar10 + 8);
										func_528(func_76());
									}
								}
							}
						}
					}
					iVar10++;
				}
			}
			else if ((!func_108() && is_entity_a_ped(Var0)) && is_ped_a_player(get_ped_index_from_entity_index(Var0)))
			{
				if (!func_429(player_id()) && !func_98(player_id(), 20))
				{
					iVar11 = _network_get_ped_player(get_ped_index_from_entity_index(Var0));
					if (func_6(iVar11, 0, 1))
					{
						if (func_139(iVar11, func_7(), 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && is_entity_a_ped(Var0.f_1))
							{
								if (get_ped_index_from_entity_index(Var0.f_1) == PLAYER::PLAYER_PED_ID())
								{
									func_428();
									if (!func_98(player_id(), 20))
									{
										func_527(0);
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

void func_527(int iParam0)
{
	if (!func_117(player_id()))
	{
		if (iParam0 || func_103(player_id()) != 0)
		{
			func_120(20);
			if (func_119(player_id()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 8))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 8);
				}
			}
		}
	}
}

void func_528(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_2 = 182;
	func_12(Var0, func_13(1));
}

bool func_529()
{
	int iVar0;
	
	func_534(&iVar0);
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
	if (func_533())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_532())
	{
		return true;
	}
	if (func_531(157))
	{
		if (!func_530())
		{
			return true;
		}
	}
	if (func_531(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_453() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_453()) == 0)
		{
			return true;
		}
	}
	return false;
}

auto func_530()
{
	return Global_2434762.f_574;
}

bool func_531(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_532()
{
	return Global_2443085;
}

auto func_533()
{
	return Global_2434762.f_569;
}

void func_534(auto uParam0)
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
					func_535(iVar0);
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

void func_535(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_536(iVar4, &iVar5))
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

bool func_536(int iParam0, auto uParam1)
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

void func_537()
{
	wait(0);
}

void func_538(int iParam0)
{
	func_79();
	if (get_max_wanted_level() < 5)
	{
		set_max_wanted_level(5);
	}
	func_78();
	func_558(iParam0);
	func_555();
	if (network_get_num_participants() > 1)
	{
		func_554();
		func_540(1);
		terminate_this_thread();
	}
	else if (func_539())
	{
		func_540(1);
		terminate_this_thread();
	}
}

bool func_539()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar0)))
		{
			iVar1 = net_to_ent(func_25(iVar0));
			if (!is_entity_dead(iVar1, 0))
			{
				if (func_419(net_to_veh(func_25(iVar0)), 0))
				{
					set_entity_as_no_longer_needed(&iVar1);
				}
				else
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_540(int iParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 167 || Global_1610316[player_id() /*174*/].f_10.f_28 == 168)
	{
		func_552();
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
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 14) && !func_119(player_id()))
		{
			func_450(0);
		}
	}
	else if (func_550(player_id()) != -1)
	{
		func_517(-1);
	}
	func_511(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_547(iVar0);
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false))
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), false);
	}
	if (func_91(func_97()))
	{
		func_546(-1);
	}
	else if (func_96(func_97()))
	{
	}
	else
	{
		func_542(-1, 1);
	}
	func_110(19);
	func_110(20);
	func_110(21);
	func_110(22);
	func_110(27);
	func_436(3);
	func_436(4);
	func_436(7);
	func_541();
	if (func_105(player_id()))
	{
		func_500(0);
	}
	func_110(29);
	Global_1610316[player_id() /*174*/].f_10.f_51 = func_76();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (iParam0)
	{
		func_437();
	}
	if (!func_119(player_id()))
	{
		func_448();
		GAMEPLAY::CLEAR_BIT(&(Global_1727391.f_3), true);
	}
}

void func_541()
{
	if (func_429(player_id()))
	{
		func_110(25);
	}
}

void func_542(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 > 0)
	{
		if (func_137() != func_76())
		{
			if (func_545(player_id()) == player_id())
			{
				Global_2459488.f_35[func_544(iParam0)] = 1;
			}
		}
		uVar0 = func_544(159);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(157);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(148);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(164);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(142);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(152);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(166);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(170);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(173);
		if (func_543(uVar0, Global_262145.f_10545, iParam1))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_543(auto uParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if ((!func_98(player_id(), 19) && !func_98(player_id(), 20)) && !func_98(player_id(), 9))
		{
			return false;
		}
	}
	if (Global_2459488.f_35[uParam0] == 1 && func_100(&(Global_2459488[uParam0 /*2*/])))
	{
		if (func_492(&(Global_2459488[uParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[uParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_544(int iParam0)
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

auto func_545(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_546(int iParam0)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 > 0)
	{
		if (func_137() != func_76())
		{
			Global_2459488.f_35[func_544(iParam0)] = 1;
		}
		uVar0 = func_544(155);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(163);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(160);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(153);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(162);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(154);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(171);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_544(172);
		if (func_543(uVar0, Global_262145.f_10546, 0))
		{
			func_325(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

void func_547(int iParam0)
{
	if (!func_548(Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/], func_549(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/] = {func_549()};
	}
	if (!func_548(Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/], func_549(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/] = {func_549()};
	}
}

int func_548(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_549()
{
	Vector3 vVar0;
	
	return vVar0;
}

int func_550(int iParam0)
{
	if (func_551(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

bool func_551(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_28 != -1))
	{
		return true;
	}
	return false;
}

void func_552()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1643), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1643), 29);
	func_553(24);
}

void func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_554()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(func_25(iVar0)))
		{
			iVar1 = net_to_veh(func_25(iVar0));
			if (!is_entity_dead(iVar1, 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar1, 0))
				{
					func_420(func_125(player_id()), 0, 0f, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_555()
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32())
	{
		iVar0 = 1;
	}
	Global_1727400.f_2 = Local_128.f_57;
	Global_1727400.f_3 = Local_128.f_58;
	func_556(iVar0, func_38(), func_33(), -1082130432);
}

void func_556(int iParam0, auto uParam1, auto uParam2, int iParam3)
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
		if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = {Var1};
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = {Var1};
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = uParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = {Var1};
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = iParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = {Var1};
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = uParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (are_strings_equal(sVar0, "GB_ASSAULT"))
		{
			Var82 = {Var1};
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = iParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = {Var1};
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = uParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = {Var1};
			Var116.f_14 = iParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = {Var1};
			Var134.f_15 = iParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = {Var1};
			Var153.f_14 = iParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_557();
}

void func_557()
{
	struct<18> Var0;
	
	Global_1727400 = {Var0};
}

void func_558(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 2;
	if (func_518(func_7(), 1))
	{
		if (Local_128.f_34 > 0)
		{
			iVar0 = true;
			iVar1 = 1;
		}
	}
	else if (func_138(1, 0) > 0)
	{
		iVar0 = true;
		iVar1 = 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 18))
	{
		iVar1 = 8;
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_128.f_1, 16))
	{
		iVar1 = 7;
	}
	if (iParam0)
	{
		iVar1 = 4;
	}
	func_559(iVar0, iVar1);
}

void func_559(int iParam0, int iParam1)
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
		if ((func_105(player_id()) || func_104(player_id())) || func_117(player_id()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

bool func_560(struct<20> Param0)
{
	func_570(func_571(Param0), Param0);
	reserve_network_mission_objects(0);
	reserve_network_mission_vehicles(func_568(157, -1));
	func_565(0, -1, 0);
	network_register_host_broadcast_variables(&Local_128, 59);
	network_register_player_broadcast_variables(&Local_187, 129);
	set_this_script_can_be_paused(0);
	func_561(157, 0);
	return true;
}

void func_561(int iParam0, int iParam1)
{
	func_564();
	func_563();
	if ((iParam0 != 0 && network_is_player_active(iParam1)) && func_518(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_1727386, false);
				break;
			}
	}
	if (!func_136() && !func_59(player_id(), 1))
	{
		if (func_113())
		{
			func_449(3);
		}
		func_449(4);
	}
	if (func_77(0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_51 = func_137();
	}
	func_562();
}

void func_562()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_76();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

void func_563()
{
	func_553(33);
	func_553(34);
	func_553(35);
	func_553(36);
	func_553(37);
	func_553(38);
	func_553(39);
	func_553(40);
	func_553(43);
	func_553(41);
	func_553(54);
	func_553(42);
	func_553(47);
}

void func_564()
{
	struct<14> Var0;
	
	Global_1727400 = {Var0};
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

bool func_565(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_567();
			}
			else
			{
				return false;
			}
		}
		if (!func_566())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_567();
					}
					else
					{
						return false;
					}
				}
				if (func_533())
				{
					if (!iParam2)
					{
						func_567();
					}
					else
					{
						return false;
					}
				}
				if (func_531(155))
				{
					if (!iParam2)
					{
						func_567();
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
					func_567();
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
				func_567();
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
			func_567();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_566()
{
	return Global_1315888;
}

void func_567()
{
	terminate_this_thread();
}

int func_568(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_569(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 6;
		
		default:
	}
	return 0;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

void func_570(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_567();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_571(int iParam0)
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

