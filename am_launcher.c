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
	int iLocal_35 = 0;
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
	int iLocal_87 = 0;
	struct<20> Local_88 = 0;
	int iLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	int iLocal_111 = 0;
	Vector3 vLocal_112 = 0;
	auto uLocal_115 = 0;
	int iLocal_116 = 0;
	Vector3[] vLocal_117 = new Vector3[32];
	struct<20> Local_214 = 0;
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
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_111 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_125(Local_214))
		{
			func_124();
		}
	}
	while (true)
	{
		func_123();
		if (func_114())
		{
			func_124();
		}
		switch (func_113(network_player_id_to_int()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (func_111())
					{
						vLocal_117[network_player_id_to_int() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_39();
				}
				else if (func_112() == 3)
				{
					vLocal_117[network_player_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_124();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_112())
			{
				case 0:
					if (func_37())
					{
						Global_2454809 = 1;
					}
					break;
				
				case 1:
					if (func_36())
					{
						Global_2454809 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_124();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (Global_2454809.f_2)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, true))
			{
				func_35(&(Global_2454809.f_167));
				GAMEPLAY::SET_BIT(&(Global_2454809.f_1), true);
			}
			else if (func_33(&(Global_2454809.f_167), Global_2454809.f_169, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2454809.f_1), true);
				func_32(1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 19)
				{
					iVar1 = iVar0;
					func_31(iVar1, 0f);
					if (!func_30(iVar1))
					{
						if (func_18(func_29(iVar1), func_28(iVar1), func_27(iVar1), 1, 1))
						{
							if (!func_17(iVar1))
							{
								if (iVar1 != 9 || func_16())
								{
									func_31(iVar1, func_15(iVar1));
								}
							}
						}
					}
					iVar0++;
				}
				func_32(3);
			}
			else
			{
				func_32(0);
			}
			break;
		
		case 3:
			iVar2 = func_13();
			if (iVar2 != -1)
			{
				Global_2454809.f_3 = {Global_2454809.f_8[iVar2 /*5*/]};
				func_32(4);
			}
			else
			{
				Global_2454809.f_169 = Global_262145.f_6482 / 2;
				func_32(0);
			}
			break;
		
		case 4:
			switch (func_10(Global_2454809.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2454809.f_3)
					{
						case 1:
							func_8();
							break;
					}
					iVar3 = true;
					if (iVar3)
					{
						if (Global_2454809.f_3 == 1)
						{
							if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 4))
							{
								func_32(5);
							}
							else
							{
								func_32(6);
							}
						}
						else
						{
							func_32(6);
						}
					}
					else
					{
						func_31(Global_2454809.f_3, 0f);
						func_32(3);
					}
					break;
				
				case 2:
					func_31(Global_2454809.f_3, 0f);
					func_32(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2454809.f_3 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 4))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 3))
					{
						func_35(&(Global_2454809.f_165));
						GAMEPLAY::SET_BIT(&(Global_2454809.f_1), 3);
					}
					else if (func_33(&(Global_2454809.f_165), Global_262145.f_45 * 120000, 0))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_2454809.f_1), 3);
						func_32(6);
					}
				}
				else
				{
					func_32(6);
				}
			}
			else
			{
				func_32(6);
			}
			break;
		
		case 6:
			if (Global_2454809.f_3.f_1 == 19)
			{
				if (network_get_host_of_script("AM_IMP_EXP", -1, 0) != func_7())
				{
					func_5(func_6(network_get_host_of_script("AM_IMP_EXP", -1, 0)), 1);
					Global_2460486.f_1568 = 0;
					func_32(7);
					func_3(Global_2454809.f_3);
				}
			}
			else if (network_is_script_active(func_2(Global_2454809.f_3.f_1), -1, 0, 0))
			{
				func_32(7);
				func_3(Global_2454809.f_3);
			}
			break;
		
		case 7:
			if (Global_2454809.f_3.f_1 == 19)
			{
				if (Global_2460486.f_1568)
				{
					func_32(8);
					Global_2460486.f_1568 = 0;
				}
			}
			else if (!network_is_script_active(func_2(Global_2454809.f_3.f_1), -1, 0, 0))
			{
				func_32(8);
			}
			break;
		
		case 8:
			if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, false))
			{
				func_32(0);
				GAMEPLAY::CLEAR_BIT(&(Global_2454809.f_1), false);
			}
			else
			{
				Global_2454809.f_169 = Global_262145.f_6482;
				Global_2454809.f_8[Global_2454809.f_3 /*5*/].f_4 = 1;
				if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 2))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2454809.f_1), 2);
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 4))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2454809.f_1), 4);
				}
				Global_2454809.f_3 = -1;
				Global_2454809.f_3.f_1 = 0;
				GAMEPLAY::SET_BIT(&(Global_2454809.f_1), false);
			}
			break;
	}
}

char* func_2(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 2:
			return "AM_CR_SecurityVan";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 104:
			return "dont_cross_the_line";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 73:
			return "AM_BOAT_TAXI";
		
		case 74:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 87:
			return "am_rollercoaster";
		
		case 88:
			return "am_ferriswheel";
		
		case 89:
			return "AM_LAUNCHER";
		
		case 90:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 75:
			return "fm_hold_up_tut";
		
		case 76:
			return "AM_CAR_MOD_TUT";
		
		case 77:
			return "AM_CONTACT_REQUESTS";
		
		case 78:
			return "am_mission_launch";
		
		case 79:
			return "am_npc_invites";
		
		case 80:
			return "am_lester_cut";
		
		case 83:
			return "AM_VEHICLE_SPAWN";
		
		case 84:
			return "am_ronTrevor_Cut";
		
		case 85:
			return "AM_ARMYBASE";
		
		case 86:
			return "AM_PRISON";
		
		case 91:
			return "AM_ArmWrestling";
		
		case 98:
			return "fm_Bj_race_controler";
		
		case 92:
			return "AM_Darts";
		
		case 99:
			return "fm_deathmatch_controler";
		
		case 97:
			return "FM_Impromptu_DM_Controler";
		
		case 100:
			return "fm_hideout_controler";
		
		case 93:
			return "golf_mp";
		
		case 96:
			return "Pilot_School_MP";
		
		case 101:
			return "FM_Mission_Controller";
		
		case 102:
			return "FM_Race_Controler";
		
		case 94:
			return "Range_Modern_MP";
		
		case 103:
			return "FM_Horde_Controler";
		
		case 95:
			return "tennis_network_mp";
		
		case 81:
			return "am_heist_int";
		
		case 82:
			return "am_lowrider_int";
		
		case 105:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

void func_3(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9)
	{
		if (Global_262145.f_6480 > 0 && Global_262145.f_6480 <= 19)
		{
			if (!Global_2454809.f_104[Global_262145.f_6480 - 1] == -1)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6480 - 1)
				{
					Global_2454809.f_104[iVar0] = Global_2454809.f_104[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2454809.f_104[Global_262145.f_6480 - 1] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2454809.f_124[iVar0 + 1 /*2*/] = {Global_2454809.f_124[iVar0 /*2*/]};
		iVar0 += -1;
	}
	Global_2454809.f_124[0 /*2*/] = iParam0;
	Global_2454809.f_124[0 /*2*/].f_1 = -1;
	if (iParam0 == 9)
	{
		Global_2454809.f_170 = 0;
		func_4();
	}
	else
	{
		Global_2454809.f_170++;
	}
}

void func_4()
{
	Global_2454809.f_171 = get_random_int_in_range(Global_262145.f_9078, Global_262145.f_9077);
}

void func_5(int iParam0, int iParam1)
{
	Vector3 vVar0;
	
	vVar0.x = 397;
	vVar0.y = player_id();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam0);
	}
}

auto func_6(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_7()
{
	return -1;
}

void func_8()
{
	func_9(func_6(network_get_host_of_script("freemode", -1, 0)), 0);
	if (get_random_int_in_range(0, 100) < Global_262145.f_124)
	{
		if (network_get_num_participants() >= Global_262145.f_125)
		{
			func_9(func_6(network_get_host_of_script("freemode", -1, 0)), 1);
			GAMEPLAY::SET_BIT(&(Global_2454809.f_1), 4);
		}
	}
}

void func_9(int iParam0, int iParam1)
{
	Vector3 vVar0;
	
	vVar0.x = 398;
	vVar0.y = player_id();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam0);
	}
}

int func_10(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	iLocal_108 = 0;
	iVar0 = false;
	while (iVar0 < 30)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_12(int_to_playerindex(iVar0), 1, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(vLocal_117[iVar0 /*3*/].f_1, false))
			{
				if (!GAMEPLAY::IS_BIT_SET(vLocal_117[iVar0 /*3*/].f_1, 4))
				{
					iLocal_108++;
				}
				if (Param0.f_1 == 18)
				{
					if (network_get_num_participants() >= func_11(Param0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_108 >= func_11(Param0))
				{
					if (Param0.f_1 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 2))
						{
							GAMEPLAY::SET_BIT(&(Global_2454809.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(vLocal_117[iVar0 /*3*/].f_1, true))
			{
			}
			else if (!GAMEPLAY::IS_BIT_SET(vLocal_117[iVar0 /*3*/].f_1, true))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4869;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return Global_262145.f_9066;
		
		case 9:
			return Global_262145.f_8971;
		
		case 10:
			return Global_262145.f_9018;
		
		case 11:
			return Global_262145.f_9039;
		
		case 12:
			return Global_262145.f_9089;
		
		case 13:
			return Global_262145.f_9107;
		
		case 14:
			return Global_262145.f_9122;
		
		case 15:
			return Global_262145.f_9133;
		
		case 16:
			return Global_262145.f_9141;
		
		case 17:
			return Global_262145.f_9155;
		
		case 18:
			return Global_262145.f_9164;
		
		default:
	}
	return 0;
}

bool func_12(int iParam0, int iParam1, int iParam2)
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

int func_13()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (func_14())
	{
		return 9;
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		fVar1 += Global_2454809.f_8[iVar0 /*5*/].f_2;
		iVar0++;
	}
	fVar3 = get_random_float_in_range(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		fVar2 += Global_2454809.f_8[iVar0 /*5*/].f_2;
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	if (Global_2454809.f_8[9 /*5*/].f_2 >= 1f)
	{
		return func_16();
	}
	return 0;
}

float func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6522;
		
		case 1:
			return Global_262145.f_6519;
		
		case 2:
			return Global_262145.f_6520;
		
		case 3:
			return Global_262145.f_6521;
		
		case 4:
			return Global_262145.f_6523;
		
		case 5:
			return Global_262145.f_6524;
		
		case 6:
			return Global_262145.f_6525;
		
		case 7:
			return Global_262145.f_6905;
		
		case 8:
			return Global_262145.f_8139;
		
		case 9:
			return Global_262145.f_8141;
		
		case 10:
			return Global_262145.f_8137;
		
		case 11:
			return Global_262145.f_8144;
		
		case 12:
			return Global_262145.f_8574;
		
		case 13:
			return Global_262145.f_8576;
		
		case 14:
			return Global_262145.f_8577;
		
		case 15:
			return Global_262145.f_8578;
		
		case 16:
			return Global_262145.f_8579;
		
		case 17:
			return Global_262145.f_8583;
		
		case 18:
			return Global_262145.f_9165;
		
		default:
	}
	return 0f;
}

bool func_16()
{
	if (Global_2454809.f_170 >= Global_2454809.f_171)
	{
		return true;
	}
	return false;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_5067;
		
		case 1:
			return Global_262145.f_5064;
		
		case 2:
			return Global_262145.f_5065;
		
		case 3:
			return Global_262145.f_5066;
		
		case 4:
			return Global_262145.f_6573;
		
		case 5:
			return Global_262145.f_6466;
		
		case 6:
			return Global_262145.f_6471;
		
		case 7:
			return Global_262145.f_6476;
		
		case 8:
			return Global_262145.f_8140;
		
		case 9:
			return Global_262145.f_8142;
		
		case 10:
			return Global_262145.f_8138;
		
		case 11:
			return (Global_262145.f_9311 && Global_262145.f_9310);
		
		case 12:
			return Global_262145.f_8568;
		
		case 13:
			return Global_262145.f_8570;
		
		case 14:
			return Global_262145.f_8571;
		
		case 15:
			return Global_262145.f_8572;
		
		case 16:
			return Global_262145.f_8573;
		
		case 17:
			return Global_262145.f_8582;
		
		case 18:
			return Global_262145.f_9166;
		
		default:
	}
	return 0;
}

bool func_18(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if ((func_26(iParam0, iParam3, iParam4) || func_25(iParam1, iParam3, iParam4)) || func_19(iParam2, iParam3, iParam4))
	{
		return true;
	}
	return false;
}

int func_19(int iParam0, int iParam1, int iParam2)
{
	return func_20(2, iParam0, 0, iParam1, iParam2);
}

bool func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_24(iParam0) - func_23(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_23(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_24(iParam0) - func_22(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_23(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_24(iParam0) - func_23(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_21(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_21(int iParam0)
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

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
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

int func_24(int iParam0)
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

int func_25(int iParam0, int iParam1, int iParam2)
{
	return func_20(1, iParam0, 0, iParam1, iParam2);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	return func_20(0, iParam0, 0, iParam1, iParam2);
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 14;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 24;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		default:
	}
	return 0;
}

bool func_30(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9)
	{
		return false;
	}
	if (Global_262145.f_6480 > 0 && Global_262145.f_6480 <= 19)
	{
		if (!Global_2454809.f_104[Global_262145.f_6480 - 1] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6480)
			{
				if (Global_2454809.f_104[iVar0] == iParam0)
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_31(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2454809.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_32(int iParam0)
{
	Global_2454809.f_2 = iParam0;
}

bool func_33(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_34(uParam0, iParam2, 0);
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

void func_34(auto uParam0, int iParam1, int iParam2)
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

void func_35(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_36()
{
	return false;
}

bool func_37()
{
	int iVar0;
	int iVar1;
	
	Global_2454809.f_169 = Global_262145.f_6482;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		Global_2454809.f_8[iVar0 /*5*/] = iVar0;
		Global_2454809.f_8[iVar0 /*5*/].f_1 = func_38(iVar0);
		Global_2454809.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_6480 > 0 && Global_262145.f_6480 <= 19)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6480)
		{
			Global_2454809.f_104[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2454809.f_124[iVar1 /*2*/] = -1;
			Global_2454809.f_124[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	func_4();
	return true;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32;
			break;
		
		case 1:
			return 18;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 19;
			break;
		
		case 4:
			return 78;
			break;
		
		case 5:
			return 33;
			break;
		
		case 6:
			return 34;
			break;
		
		case 7:
			return 35;
			break;
		
		case 8:
			return 39;
			break;
		
		case 9:
			return 40;
			break;
		
		case 10:
			return 36;
			break;
		
		case 11:
			return 37;
			break;
		
		case 12:
			return 41;
			break;
		
		case 13:
			return 42;
			break;
		
		case 14:
			return 43;
			break;
		
		case 15:
			return 44;
			break;
		
		case 16:
			return 45;
			break;
		
		case 17:
			return 46;
			break;
		
		case 18:
			return 47;
			break;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar0 = 10000;
	switch (vLocal_117[network_player_id_to_int() /*3*/].f_2)
	{
		case 0:
			if (Global_2454809.f_2 >= 4 && Global_2454809.f_2 != 8)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 2))
				{
					GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), true);
				}
				if (!GAMEPLAY::IS_BIT_SET(vLocal_117[network_player_id_to_int() /*3*/].f_1, true))
				{
					func_110(4);
				}
				else if (!GAMEPLAY::IS_BIT_SET(vLocal_117[network_player_id_to_int() /*3*/].f_1, 3))
				{
					func_35(&uLocal_109);
					GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 3);
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_87, true))
					{
						iVar0 = 500;
					}
					if (func_33(&uLocal_109, iVar0, 0))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_87, true);
						func_110(4);
						GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 3);
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(vLocal_117[network_player_id_to_int() /*3*/].f_1, true))
			{
				GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), true);
			}
			break;
		
		case 4:
			if (GAMEPLAY::IS_BIT_SET(vLocal_117[network_player_id_to_int() /*3*/].f_1, false))
			{
				if (Global_2454809.f_2 == 8)
				{
					func_110(8);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
				}
				else if (Global_2454809.f_2 == 5)
				{
					func_110(5);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
				}
				else if (Global_2454809.f_2 >= 6)
				{
					func_110(6);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
				}
				else if (Global_2454809.f_2 == 3)
				{
					func_110(0);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
				}
			}
			else
			{
				iVar1 = 0;
				if (((((((((((((((!network_is_in_tutorial_session() && !func_109(player_id())) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && !func_103(player_id())) && !network_is_activity_session()) && !func_101(player_id())) && func_99()) && !func_98(player_id(), 0)) && !func_98(player_id(), 7)) && !func_98(player_id(), 21)) && (!func_95(player_id(), 0, 0) || Global_2454809.f_3 == 11)) && func_12(player_id(), 1, 1)) && !func_94(player_id()))
				{
					iVar2 = func_93(Global_2454809.f_3);
					if ((((iVar2 >= 0 && (func_91(iVar2) || func_91(0))) || func_89(player_id())) || func_87(player_id())) || !func_86(player_id()))
					{
						GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
					}
					switch (Global_2454809.f_3)
					{
						case 0:
							if (((func_81(0) && func_79(func_80(player_id()), 40f, 40f, 40f)) && get_entity_speed(PLAYER::PLAYER_PED_ID()) < 10f) && !func_78())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (func_68(31, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 2:
							if (func_68(20, 0, 0) && !func_67())
							{
								iVar1 = func_57();
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 3:
							if (func_68(19, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 4:
							if (((((func_68(20, 0, 0) && !func_98(player_id(), 1)) && !func_98(player_id(), 2)) && !func_98(player_id(), 3)) && !Global_2428492.f_3169) && !func_55())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 5:
							if (func_68(124, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 6:
							if (func_68(126, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 7:
							if (func_68(127, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 8:
							if (func_68(132, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 9:
							if (func_68(133, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 10:
							if (func_68(131, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 11:
							iVar1 = 1;
							break;
						
						case 12:
							iVar1 = 1;
							break;
						
						case 13:
							if (func_68(138, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 14:
							if (func_68(139, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 15:
							if (func_68(140, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 16:
							if (func_68(141, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 17:
							if (func_68(144, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 18:
							if (func_68(146, 0, 0) || func_52(player_id(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						default:
							iVar1 = 2;
							break;
					}
				}
				else
				{
					iVar1 = 2;
				}
				if (iVar1 == 1)
				{
					GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), false);
				}
				else if (iVar1 == 2)
				{
					if (!func_99() && !GAMEPLAY::IS_BIT_SET(iLocal_87, false))
					{
						GAMEPLAY::SET_BIT(&iLocal_87, true);
					}
					func_110(0);
					GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), true);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2454809.f_2 == 6)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), true);
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), 3);
				func_110(6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2454809.f_1, 3) && func_51(&(Global_2454809.f_165)))
			{
				func_44();
			}
			break;
		
		case 6:
			sVar3 = func_2(Global_2454809.f_3.f_1);
			if (Global_2454809.f_3.f_1 == 19)
			{
				if (Global_2460486.f_1565)
				{
					if (Global_2454809.f_2 == 7)
					{
						func_110(7);
					}
				}
				else if (Global_2460486.f_1566)
				{
					Global_2460486.f_1566 = 0;
					func_110(0);
					GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), true);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(vLocal_117[network_player_id_to_int() /*3*/].f_1, 2))
			{
				Local_88.f_16 = -1;
				if (_get_number_of_instances_of_streamed_script(GAMEPLAY::GET_HASH_KEY(sVar3)) == 0)
				{
					if (!network_is_script_active(sVar3, -1, 0, 0) || _0x3658E8CD94FC121A(sVar3, -1, 0) < 32)
					{
						if (!network_is_script_active(sVar3, -1, 1, 0))
						{
							Local_88 = Global_2454809.f_3.f_1;
							if (func_40(Local_88, 0))
							{
								GAMEPLAY::SET_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (_get_number_of_instances_of_streamed_script(GAMEPLAY::GET_HASH_KEY(sVar3)) != 0)
			{
				if (Global_2454809.f_2 == 7)
				{
					func_110(7);
					GAMEPLAY::SET_BIT(&iLocal_87, false);
					GAMEPLAY::CLEAR_BIT(&(vLocal_117[network_player_id_to_int() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2454809.f_2 != 7)
			{
				func_110(8);
			}
			break;
		
		case 8:
			func_110(0);
			break;
	}
}

bool func_40(struct<17> Param0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
{
	char[32] cVar0;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_43())
	{
		return false;
	}
	iParam20 = iParam20;
	StringCopy(&cVar0, func_2(Param0), 32);
	if (does_script_exist(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		if (SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
		{
			iVar8 = 1;
			if (iParam20)
			{
				iVar9 = false;
				iVar9 = false;
				while (iVar9 < 16)
				{
					if (network_is_script_active(&cVar0, iVar9, iVar8, 0))
					{
						return false;
					}
					iVar9++;
				}
			}
			else if (network_is_script_active(&cVar0, Param0.f_16, iVar8, 0))
			{
				return false;
			}
			iVar10 = SYSTEM::START_NEW_SCRIPT_with_args(&cVar0, &Param0, 20, func_41(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar10 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 98:
		case 92:
		case 96:
		case 99:
		case 100:
		case 93:
		case 101:
		case 102:
		case 94:
		case 103:
		case 95:
		case 105:
		case 97:
		case 49:
		case 64:
		case 62:
		case 70:
			return 33000;
		
		default:
	}
	if (func_42(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_42(iParam0) == 7)
	{
		if ((((((iParam0 == 45 || iParam0 == 43) || iParam0 == 39) || iParam0 == 37) || iParam0 == 41) || iParam0 == 47) || iParam0 == 40)
		{
			return 8344;
		}
		return 3650;
	}
	else if (func_42(iParam0) == 0)
	{
		return 3650;
	}
	else if (func_42(iParam0) == 2)
	{
		return 3650;
	}
	else if (func_42(iParam0) == 6)
	{
		if ((((((((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 87) || iParam0 == 88) || iParam0 == 60) || iParam0 == 79) || iParam0 == 65) || iParam0 == 71) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68)
		{
			return 3650;
		}
		if (iParam0 == 77)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 74) || iParam0 == 73) || iParam0 == 19) || iParam0 == 78) || iParam0 == 75) || iParam0 == 21) || iParam0 == 89) || iParam0 == 90)
		{
			return 2050;
		}
		if (iParam0 == 83)
		{
			return 2812;
		}
	}
	return 1424;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 2:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
			return 7;
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 104:
			return 6;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 73:
			return 6;
		
		case 74:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 77:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 75:
			return 6;
		
		case 78:
			return 6;
		
		case 79:
			return 6;
		
		case 76:
			return 6;
		
		case 80:
			return 6;
		
		case 83:
			return 6;
		
		case 84:
			return 6;
		
		case 91:
			return 6;
		
		case 98:
			return 0;
		
		case 92:
			return 6;
		
		case 99:
			return 0;
		
		case 97:
			return 0;
		
		case 100:
			return 0;
		
		case 93:
			return 6;
		
		case 101:
			return 0;
		
		case 96:
			return 6;
		
		case 102:
			return 0;
		
		case 94:
			return 6;
		
		case 103:
			return 0;
		
		case 95:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 105:
			return 6;
		
		default:
	}
	return 11;
}

auto func_43()
{
	return Global_2434762.f_569;
}

void func_44()
{
	if (Global_2415926.f_84.f_2 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_202.f_1, true))
		{
			if (Global_262145.f_45 * 120000 - func_50(&(Global_2454809.f_165), 0, 0) < 360000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_202.f_1, true))
				{
					if (func_68(31, 0, 0) && !func_106())
					{
						if (Global_262145.f_45 < 3)
						{
							func_45("ACD_TSCH", Global_262145.f_45, 1);
						}
						else
						{
							func_45("ACD_TSCH", 3, 1);
						}
					}
					GAMEPLAY::SET_BIT(&(Global_2460486.f_202.f_1), true);
				}
			}
			else if (Global_262145.f_45 * 120000 - func_50(&(Global_2454809.f_165), 0, 0) < 600000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_202.f_1, 2))
				{
					if (func_68(31, 0, 0) && !func_106())
					{
						func_45("ACD_TSCH", 5, 1);
					}
					GAMEPLAY::SET_BIT(&(Global_2460486.f_202.f_1), 2);
				}
			}
			else if (Global_262145.f_45 * 120000 - func_50(&(Global_2454809.f_165), 0, 0) < 1200000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_202.f_1, 3))
				{
					if (func_68(31, 0, 0) && !func_106())
					{
						func_45("ACD_TSCH", 10, 1);
					}
					GAMEPLAY::SET_BIT(&(Global_2460486.f_202.f_1), 3);
				}
			}
		}
	}
}

int func_45(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	add_text_component_integer(iParam1);
	iVar0 = _draw_notification(0, 1);
	func_46(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_46(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_49() || !network_is_activity_session()) || !func_52(player_id(), 0))
	{
		return;
	}
	iVar0 = func_47(iParam2);
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

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_48(iVar0);
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

void func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_49()
{
	return is_dlc_present(-1762644250);
}

int func_50(auto uParam0, int iParam1, int iParam2)
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

auto func_51(auto uParam0)
{
	return *uParam0.f_1;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_53(-1, 0) == 8;
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

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

auto func_54()
{
	return Global_1312747;
}

bool func_55()
{
	if (!func_56())
	{
		return false;
	}
	if (Global_2404519.f_2 == Global_262145.f_6918 || Global_2404519.f_2 == Global_262145.f_6942)
	{
		return true;
	}
	return false;
}

bool func_56()
{
	switch (Global_2404519)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return false;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		
		default:
	}
	return false;
}

int func_57()
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	auto uVar4;
	Vector3 vVar5;
	
	iVar1 = 0;
	vVar5 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	if (!iVar0)
	{
		if (get_nth_closest_vehicle_node_with_heading(vVar5, iLocal_111, &vLocal_112, &uLocal_115, &uVar2, 0, 3f, 0f))
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1367.557f, -3220.598f, 12.9448f, vVar5, 1) >= 600f)
			{
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar5, vLocal_112, 1) >= 75f)
				{
					_0x07FB139B592FA687(vVar5.x - 250f, vVar5.y - 250f, vVar5.x + 250f, vVar5.y + 250f);
					if (get_vehicle_node_properties(vLocal_112, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_116 <= 0)
							{
								if (func_58(vLocal_112, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									iVar0 = true;
									iVar1 = 1;
								}
							}
							else
							{
								iVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!iVar0)
	{
		iLocal_111 += 3;
		if (iLocal_111 >= 150)
		{
			iLocal_111 = 40;
			iLocal_116++;
		}
	}
	if (iLocal_116 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

bool func_58(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_61(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_59(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_59(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_12(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_80(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_52(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_60(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_80(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_80(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_60(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_61(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_60(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_62(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_80(iVar1), vParam0, 1) < fParam3)
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

bool func_62(int iParam0)
{
	if (func_66(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_65(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_63(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_7())
	{
		if (iVar0 == func_64(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_64(int iParam0)
{
	if (iParam0 != func_7())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_7();
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_66(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_65(iParam0)};
		Global_2459453 = {func_65(iParam1)};
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

bool func_67()
{
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, true, 0))
	{
		return true;
	}
	return false;
}

int func_68(int iParam0, int iParam1, int iParam2)
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
		if (func_73(player_id(), 85))
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
	if (func_72() || func_71())
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
			if (func_69())
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

bool func_69()
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
	if (func_72())
	{
		return true;
	}
	if (func_71())
	{
		return true;
	}
	iVar0 = Global_1347750[func_70(-1)];
	if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2460486.f_1638), 23);
		return true;
	}
	return false;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

auto func_71()
{
	return Global_1315901;
}

auto func_72()
{
	return Global_1315903;
}

int func_73(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	if (!func_76())
	{
		return false;
	}
	if (func_75())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	uVar0 = func_74(iParam1);
	iVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_345, iVar1);
}

int func_74(int iParam0)
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

int func_75()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_135, 3);
}

int func_76()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	return func_77(120, -1);
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_70(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_78()
{
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, true, 0))
	{
		return true;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, true, 0))
	{
		return true;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, true, 0))
	{
		return true;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, true, 0))
	{
		return true;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, true, 0))
	{
		return true;
	}
	return false;
}

bool func_79(Vector3 vParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	
	if (get_closest_vehicle_node(vParam0, &vVar0, 0, 3f, 0f))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, vParam3, false, true, 0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_80(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

bool func_81(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (func_85(player_id(), 1))
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (func_108())
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (network_is_activity_session())
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (!func_68(19, 0, 0))
	{
		if (iParam0)
		{
		}
		return false;
	}
	if (func_82(9))
	{
		if (iParam0)
		{
		}
		return false;
	}
	return true;
}

int func_82(int iParam0)
{
	return !func_83(iParam0);
}

bool func_83(int iParam0)
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
			if (func_98(player_id(), 7))
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
			if (func_98(player_id(), 7))
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
			if (func_98(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
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
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_84(4))
			{
				return false;
			}
			if (func_98(player_id(), 7))
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

bool func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_12(int_to_playerindex(iVar0), 0, 1))
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

bool func_85(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_101(iParam0))
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

int func_86(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 22);
}

bool func_87(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return true;
	}
	if (func_88())
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

int func_88()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_89(int iParam0)
{
	if (func_90(iParam0))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_90(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_1, 2);
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = func_92(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_70(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		case 6:
			return 19;
		
		case 7:
			return 18;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 10;
		
		case 11:
			return 8;
		
		case 12:
			return 11;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 4;
		
		case 16:
			return 9;
		
		case 17:
			return 3;
		
		case 18:
			return 7;
		
		default:
	}
	return -1;
}

bool func_94(int iParam0)
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

bool func_95(int iParam0, int iParam1, int iParam2)
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
		if (func_96(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_96(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_97(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_97(int iParam0)
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

int func_98(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_99()
{
	if (func_100() == 0)
	{
		return true;
	}
	return false;
}

auto func_100()
{
	return Global_1312466.f_18;
}

int func_101(int iParam0)
{
	return func_102(iParam0);
}

int func_102(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_103(int iParam0)
{
	switch (func_104(iParam0))
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

auto func_104(auto uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180;
}

int func_105()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

auto func_106()
{
	return Global_1315913;
}

int func_107()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_108()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_109(int iParam0)
{
	if (func_85(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

void func_110(int iParam0)
{
	vLocal_117[network_player_id_to_int() /*3*/].f_2 = iParam0;
}

bool func_111()
{
	return true;
}

auto func_112()
{
	return Global_2454809;
}

auto func_113(int iParam0)
{
	return vLocal_117[iParam0 /*3*/];
}

bool func_114()
{
	int iVar0;
	
	func_120(&iVar0);
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
	if (func_43())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_119())
	{
		return true;
	}
	if (func_118(157))
	{
		if (!func_117())
		{
			return true;
		}
	}
	if (func_118(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_115() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_115()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_115()
{
	switch (func_116())
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

auto func_116()
{
	return Global_25120;
}

auto func_117()
{
	return Global_2434762.f_574;
}

bool func_118(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_119()
{
	return Global_2443085;
}

void func_120(auto uParam0)
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
					func_121(iVar0);
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

void func_121(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_122(iVar4, &iVar5))
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

bool func_122(int iParam0, auto uParam1)
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

void func_123()
{
	wait(0);
}

void func_124()
{
	Global_2460486.f_1565 = 0;
	Global_2460486.f_1566 = 0;
	Global_2460486.f_1568 = 0;
	Global_2460486.f_1567 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), true);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), 2);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_202.f_1), 3);
	terminate_this_thread();
}

bool func_125(struct<20> Param0)
{
	func_131();
	func_129(func_130(Param0), Param0);
	reserve_network_mission_objects(0);
	func_126(0, -1, 0);
	network_register_host_broadcast_variables(&Global_2454809, 172);
	network_register_player_broadcast_variables(&vLocal_117, 97);
	set_this_script_can_be_paused(0);
	vLocal_117[network_player_id_to_int() /*3*/] = 0;
	func_110(0);
	return true;
}

bool func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_128();
			}
			else
			{
				return false;
			}
		}
		if (!func_127())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_128();
					}
					else
					{
						return false;
					}
				}
				if (func_43())
				{
					if (!iParam2)
					{
						func_128();
					}
					else
					{
						return false;
					}
				}
				if (func_118(155))
				{
					if (!iParam2)
					{
						func_128();
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
					func_128();
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
				func_128();
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
			func_128();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_127()
{
	return Global_1315888;
}

void func_128()
{
	terminate_this_thread();
}

void func_129(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_128();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_130(int iParam0)
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

void func_131()
{
	struct<172> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 19;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_104 = 19;
	Var0.f_124 = 20;
	Var0.f_124.f_1 = -1;
	Var0.f_124.f_1.f_1 = -1;
	Var0.f_124.f_1.f_2 = -1;
	Var0.f_124.f_1.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Global_2454809 = {Var0};
}

