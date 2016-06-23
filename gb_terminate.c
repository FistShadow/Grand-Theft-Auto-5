#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	struct<10> Local_98 = 0;
	struct<4>[] Local_108 = new struct<4>[32];
	struct<20> Local_237 = 0;
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
	if (network_is_game_in_progress())
	{
		if (!func_476(Local_237))
		{
			func_459();
		}
	}
	while (true)
	{
		func_458();
		if (func_450())
		{
			func_459();
		}
		switch (func_449(participant_id_to_int()))
		{
			case 0:
				if (func_448() == 1)
				{
					if (func_447())
					{
						func_446(participant_id_to_int(), 1);
					}
				}
				break;
			
			case 1:
				if (func_448() == 1)
				{
					if (!func_444())
					{
						func_67();
					}
					if (func_39())
					{
						func_446(participant_id_to_int(), 3);
					}
				}
				else if (func_448() == 3)
				{
					func_446(participant_id_to_int(), 3);
				}
				break;
			
			case 3:
				func_459();
				break;
		}
		if (network_is_host_of_this_script())
		{
			if (func_38())
			{
				func_37(3);
			}
			switch (func_448())
			{
				case 0:
					if (func_30())
					{
						func_37(1);
					}
					break;
				
				case 1:
					if (func_29() == 3)
					{
						func_37(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_459();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_98.f_8)
	{
		case 0:
			if (func_28())
			{
				func_27(1);
			}
			func_25();
			break;
		
		case 1:
			func_25();
			func_2();
			break;
		
		case 2:
			if (is_bit_set(Local_98.f_1, 5))
			{
				func_27(3);
			}
			func_25();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_10(func_24()))
	{
		func_9(1);
		func_27(2);
		set_bit(&(Local_98.f_1), 2);
	}
	if (func_8() == func_7() || !func_6(func_8(), 0, 1))
	{
		func_9(3);
		func_27(2);
		set_bit(&(Local_98.f_1), 3);
	}
	if (is_bit_set(Local_98.f_1, false))
	{
		if (func_3(&(Local_98.f_4), func_5(), 0))
		{
			set_bit(&(Local_98.f_1), 4);
		}
	}
	if (is_bit_set(Local_98.f_1, 4))
	{
		func_9(2);
		func_27(2);
	}
	if (is_bit_set(Local_98.f_1, true))
	{
		func_9(0);
		func_27(2);
	}
}

bool func_3(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_4(uParam0, iParam2, 0);
	if (network_is_game_in_progress() && !iParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
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

void func_4(var uParam0, int iParam1, int iParam2)
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

int func_5()
{
	return 300000;
}

bool func_6(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
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

int func_7()
{
	return -1;
}

var func_8()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

void func_9(int iParam0)
{
	Local_98.f_9 = iParam0;
}

bool func_10(int iParam0)
{
	if (func_21(iParam0) && ((func_19(iParam0) == 142 || func_19(iParam0) == 164) || func_19(iParam0) == 148))
	{
		return false;
	}
	if (iParam0 == func_7())
	{
		return false;
	}
	if (!func_6(iParam0, 0, 1))
	{
		return false;
	}
	if (func_18(iParam0, 1, 0))
	{
		return false;
	}
	if (func_16(iParam0, 1) && func_15(iParam0) == func_8())
	{
		return false;
	}
	if (func_11(iParam0))
	{
		return false;
	}
	return true;
}

int func_11(int iParam0)
{
	if (iParam0 == player_id())
	{
		return func_14();
	}
	return is_bit_set(Global_1338622.f_241.f_136[func_13(10) /*33*/][iParam0], func_12(10));
}

int func_12(int iParam0)
{
	return iParam0 % 32;
}

int func_13(int iParam0)
{
	return iParam0 / 32;
}

var func_14()
{
	return Global_1312416;
}

int func_15(int iParam0)
{
	if (iParam0 != func_7())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_7();
}

int func_16(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_17(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_7();
}

int func_17(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_7())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_7())
	{
		return false;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
	{
		return true;
	}
	if (iParam1)
	{
		if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, true))
		{
			return true;
		}
	}
	if (iParam2)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_20(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_22(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_23(iParam0, 9);
	}
	return false;
}

int func_23(int iParam0, int iParam1)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

var func_24()
{
	return Local_98.f_2;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = _network_get_num_participants_host();
	iVar2 = false;
	while (iVar2 < iVar1)
	{
		if (func_29() < 2)
		{
			if (is_bit_set(Local_108[iVar2 /*4*/].f_1, true))
			{
				func_26(int_to_playerindex(iVar2));
				set_bit(&(Local_98.f_1), true);
			}
			if (is_bit_set(Local_108[iVar2 /*4*/].f_1, false))
			{
				set_bit(&(Local_98.f_1), false);
			}
			if (is_bit_set(Local_108[iVar2 /*4*/].f_1, 2))
			{
				set_bit(&(Local_98.f_1), 4);
			}
		}
		else if (func_29() == 2)
		{
			if (is_bit_set(Local_108[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_29() == 2)
	{
		if (iVar0 == network_get_num_participants())
		{
			set_bit(&(Local_98.f_1), 5);
		}
		else if (func_3(&(Local_98.f_6), 10000, 0))
		{
			set_bit(&(Local_98.f_1), 5);
		}
	}
}

void func_26(int iParam0)
{
	Local_98.f_3 = iParam0;
}

void func_27(int iParam0)
{
	Local_98.f_8 = iParam0;
}

bool func_28()
{
	return true;
}

var func_29()
{
	return Local_98.f_8;
}

bool func_30()
{
	if (func_31())
	{
		return true;
	}
	return false;
}

bool func_31()
{
	func_36(func_7());
	if (Global_2460486.f_4660.f_4 != func_7())
	{
	}
	if (func_6(Global_2460486.f_4660.f_4, 0, 1))
	{
		if (!func_34(Global_2460486.f_4660.f_4, player_id(), 1))
		{
			func_36(Global_2460486.f_4660.f_4);
		}
	}
	if (func_24() != func_7())
	{
		func_32(func_33(func_24()), 1);
		Global_2460486.f_4660.f_4 = func_7();
		return true;
	}
	else if (func_24() == func_7())
	{
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 452;
	vVar0.y = player_id();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam0);
	}
}

var func_33(int iParam0)
{
	var uVar0;
	
	set_bit(&uVar0, iParam0);
	return uVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_7())
	{
		if (!iParam2)
		{
			if (func_35(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_7())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_35(int iParam0, int iParam1)
{
	if (iParam1 != func_7())
	{
		if (iParam0 != func_7())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_7())
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

void func_36(int iParam0)
{
	Local_98.f_2 = iParam0;
	if (iParam0 == func_7())
	{
	}
}

void func_37(int iParam0)
{
	Local_98 = iParam0;
}

bool func_38()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return true;
	}
	return false;
}

bool func_39()
{
	if (func_40(1))
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

bool func_40(int iParam0)
{
	int iVar0;
	
	if (!func_66(1))
	{
		iVar0 = false;
		if (Global_1610316[player_id() /*174*/].f_10.f_51 != func_7())
		{
			if (func_6(Global_1610316[player_id() /*174*/].f_10.f_51, 0, 1) && Global_1610316[player_id() /*174*/].f_10.f_19 == 4)
			{
				iVar0 = true;
			}
		}
		else if (func_65(func_19(player_id())) == 0)
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (iParam0)
			{
				func_64(31);
				if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_41(Global_1610316[player_id() /*174*/].f_10.f_51, -2, 0, 0);
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_59(iParam0))
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
	if (func_59(player_id()) || (func_58() && func_57()))
	{
		iVar0 = func_56();
		if (does_entity_exist(iVar0))
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
								return func_55(iParam1, iParam0, 0);
							}
							else
							{
								return func_49(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_49(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_55(iParam1, iParam0, 0);
				}
				else
				{
					return func_42(0, -1, 0);
				}
			}
			else
			{
				return func_42(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_55(iParam1, iParam0, 0);
		}
		else
		{
			return func_49(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_49(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	return func_43(player_id(), iParam0, iParam1, iParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_48(iVar0, iParam2, 0) && !is_bit_set(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_47(1);
				}
				else
				{
					return func_47(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (is_bit_set(Global_1617379.f_4, 20))
			{
				return func_44(iVar0, iParam2, 1);
			}
			else
			{
				return func_44(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_47(1);
	}
	return func_47(0);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_46(iParam0, iParam1);
	if (func_45(Global_1617379.f_70365))
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

bool func_45(int iParam0)
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

int func_46(int iParam0, int iParam1)
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
			if (!func_48(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_48(int iParam0, int iParam1, int iParam2)
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

int func_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_54(iParam1, iParam0, iVar0, 0) && !is_bit_set(Global_1617379.f_15, 18)) || ((func_48(get_player_team(iParam1), get_player_team(iParam0), 0) && is_bit_set(Global_1617379.f_15, 23)) && !is_bit_set(Global_1617379.f_15, 18)))
			{
				return func_47(1);
			}
			else if (is_bit_set(Global_1617379.f_15, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_43(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_47(1);
			}
			else
			{
				return func_43(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_52(iParam0);
	if (!iVar3 == -1)
	{
		return func_50(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
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

var func_51(var uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_52(int iParam0)
{
	if (!iParam0 == func_7())
	{
		if (func_16(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_15(iParam0)];
		}
	}
	return -1;
}

int func_53(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_55(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_43(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

var func_56()
{
	return Global_2359301.f_2;
}

int func_57()
{
	return is_bit_set(Global_2359301, 4);
}

int func_58()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_59(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return true;
	}
	if (func_60())
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

int func_60()
{
	return is_bit_set(Global_2359301, 3);
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_62(-1, 0) == 8;
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

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_63();
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

var func_63()
{
	return Global_1312747;
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	set_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_65(int iParam0)
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

int func_66(int iParam0)
{
	return func_16(player_id(), iParam0);
}

void func_67()
{
	switch (func_443())
	{
		case 0:
			func_430(151, 1, -1);
			func_429(1);
			if (func_29() > 0)
			{
				func_428(1);
			}
			break;
		
		case 1:
			if (!is_bit_set(iLocal_96, 2))
			{
				func_425();
			}
			func_419();
			func_412();
			func_392();
			func_390();
			func_359();
			func_247(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
			if (func_29() > 1)
			{
				func_428(2);
			}
			break;
		
		case 2:
			if (!is_bit_set(Local_108[participant_id_to_int() /*4*/].f_1, 3))
			{
				func_244(0, func_246());
				func_200();
				func_68();
			}
			if (func_29() > 2)
			{
				func_428(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_68()
{
	struct<10> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	if (!is_bit_set(Local_108[participant_id_to_int() /*4*/].f_1, 3))
	{
		if ((is_bit_set(Local_98.f_1, 2) || is_bit_set(Local_98.f_1, 4)) || is_bit_set(Local_98.f_1, 4))
		{
			set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), 3);
			return;
		}
		if (func_199())
		{
			set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), 3);
			return;
		}
		if (func_191())
		{
			set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), 3);
			return;
		}
		func_69(151, is_bit_set(Local_108[participant_id_to_int() /*4*/].f_1, true), &Var0);
		set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), 3);
	}
}

void func_69(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
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
	var uVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	
	func_189(iParam0, &fVar2, &fVar3);
	if (*uParam2.f_6 == 0)
	{
		iVar1 += *uParam2.f_1;
		iVar0 += *uParam2;
	}
	if (iParam1)
	{
		iVar1 += func_188(iParam0);
		iVar1 = round(to_float(iVar1) / to_float(*uParam2.f_4));
		iVar1 = round(IntToFloat(iVar1) * fVar3);
		iVar1 = round(IntToFloat(iVar1) * *uParam2.f_3);
		iVar0 += func_187(iParam0);
		iVar0 = round(to_float(iVar0) / to_float(*uParam2.f_4));
		iVar0 = round(IntToFloat(iVar0) * fVar2);
		iVar0 = round(IntToFloat(iVar0) * *uParam2.f_2);
	}
	if (iParam1)
	{
		if (func_186(player_id()) > 0)
		{
			func_185();
		}
		else
		{
			func_184();
		}
	}
	else
	{
		func_183();
	}
	if (iParam0 == 168)
	{
		if (iParam1)
		{
			if (func_17(player_id()))
			{
				if (*uParam2.f_5)
				{
					iVar0 += func_175(Global_1610316[player_id() /*174*/].f_10.f_119);
				}
				else
				{
					iVar4 = *uParam2.f_7;
					if (*uParam2.f_8 > 0)
					{
						iVar4 += *uParam2.f_8;
					}
					iVar5 = func_174(iVar4);
					iVar6 = iVar5 * iVar4;
					iVar0 += iVar6;
					iVar8 = func_173(&uVar7);
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
						func_64(44);
					}
				}
				func_167(iVar0);
				func_166();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < _network_get_num_participants_host())
				{
					iVar13 = iVar12;
					if (network_is_participant_active(iVar13))
					{
						iVar14 = network_get_player_index(iVar13);
						if (func_165(iVar14))
						{
							func_157(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_17(player_id()))
		{
			func_156();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_17(player_id()))
		{
			if (iParam1)
			{
				func_155();
			}
			func_154();
		}
	}
	iVar15 = func_153();
	if (iVar15 != func_7() && iParam0 != 148)
	{
		if (func_16(player_id(), 0))
		{
			if (!func_34(player_id(), iVar15, 1))
			{
				func_140(&iVar0, 1);
			}
		}
	}
	func_136(iParam0, &iVar16, &iVar17);
	iVar1 += iVar16;
	iVar0 += iVar17;
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_135();
		func_85(0, player_ped_id(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_8();
		if (iVar20 != func_7())
		{
			func_84(iVar20, &uVar18, &uVar19);
		}
		iVar21 = !func_66(1);
		if (iParam0 == 168)
		{
			if (!func_83())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_83())
		{
			func_74(-856006867, iVar0, &uVar22, 0, 1, 0);
			Global_2558146[uVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[uVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[uVar22 /*73*/].f_8.f_56 = iVar21;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar18, uVar19, iVar0, iVar21);
		}
		if (func_73(iParam0))
		{
			if (func_72(iParam0) > -1)
			{
				func_71(func_72(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_70(&Global_2443512, 0, 0);
	}
}

void func_70(var uParam0, int iParam1, int iParam2)
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

void func_71(var uParam0, int iParam1)
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

int func_72(int iParam0)
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

int func_73(int iParam0)
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

void func_74(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_83())
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
				func_75(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_75(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_75(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_83())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_63()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_82(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_81(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_76(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_77(iParam0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_83())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_80(iParam0))
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
		func_78(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_78(var uParam0)
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
	func_79(uParam0.f_8.f_3);
	func_79(uParam0.f_8.f_16);
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

void func_79(var uParam0)
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

int func_80(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_81(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_82(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_83())
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

bool func_83()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

void func_84(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

int func_85(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_86(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_86(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_96(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_92(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_87(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_87(int iParam0, int iParam1, char* sParam2)
{
	vector3 vVar0;
	
	vVar0 = {func_90(iParam0, 1)};
	if (iParam0 == func_89(player_ped_id()))
	{
		func_88(1);
	}
	func_92(vVar0, iParam1, 0, sParam2);
}

void func_88(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_89(int iParam0)
{
	return iParam0;
}

Vector3 func_90(int iParam0, int iParam1)
{
	vector3 vVar0;
	Vector3 fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_91(player_ped_id()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
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

int func_91(int iParam0)
{
	return iParam0;
}

void func_92(vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_95(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = get_network_time();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_94();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_93();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_93()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

var func_94()
{
	var uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_95(vector3 vParam0, var uParam1, var uParam2)
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

var func_96(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	
	uVar0 = func_97(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_97(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_134(player_id()) || func_133(player_id()))
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
	if (func_132(sParam2))
	{
	}
	if (func_131())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_129(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_128(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_125(0, &iVar1);
					break;
				
				case 3:
					func_125(1, &iVar1);
					break;
				
				case 1:
					func_122(&iVar1);
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
			func_119(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_108(func_118(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_119(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_102(iVar1);
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
				func_98(func_100(player_id()) + iVar1);
			}
			else
			{
				func_98(func_100(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_98(int iParam0)
{
	if (func_131())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_99(joaat("mpply_globalxp"), iParam0);
	}
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

int func_100(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_101(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_101(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_102(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_107(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_105(func_106(&Var0));
			if (iVar13 == 0)
			{
				func_104(&Global_1347641, iParam0);
				func_103(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_104(&Global_1347642, iParam0);
				func_103(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_104(&Global_1347643, iParam0);
				func_103(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_104(&Global_1347644, iParam0);
				func_103(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_104(&Global_1347645, iParam0);
				func_103(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_103(int iParam0, int iParam1)
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

void func_104(var uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_105(int iParam0)
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

var func_106(var uParam0)
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

struct<13> func_107(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	if (func_131())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_117(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_117(-1)])
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
		if (func_116(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_114(iParam0, 1);
		}
		func_113(632, iParam0, -1, 1);
		func_112(633, func_114(iParam0, 1), -1, 1);
		Global_1347756[func_117(-1)] = iParam0;
		func_109(7, 0);
	}
}

void func_109(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_111(iParam0, iParam1))
	{
		uVar0 = func_110();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_110()
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

bool func_111(int iParam0, var uParam1)
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

void func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_117(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_117(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_117(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_117(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_117(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_117(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_117(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_117(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_117(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_117(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_117(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_117(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_117(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_117(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_117(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_117(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_117(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_117(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_117(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_117(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_117(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_117(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_117(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_117(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_117(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_117(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_117(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_117(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_117(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_117(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_117(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_117(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_117(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_114(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_115(iParam0, 0);
}

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0)
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

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_63();
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

int func_118(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_117(-1)];
			}
			else if (func_116(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_117(-1)];
	}
	return 0;
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_117(iParam2), 0);
	iVar0 += iParam1;
	if (!func_120(iParam0))
	{
		func_112(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_113(iParam0, iVar0, iParam2, 1);
	}
}

bool func_120(int iParam0)
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

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_48(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_124(player_id(), iVar5))
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
		iVar6 = round(func_123(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_123(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_123(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_124(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_107(iParam0)};
		Global_2459453 = {func_107(iParam1)};
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

void func_125(int iParam0, int iParam1)
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
						if (func_124(player_id(), iVar4))
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
					if (func_126(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_124(player_id(), iVar4))
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
		iVar5 = round(func_123(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_123(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_126(int iParam0, int iParam1)
{
	return vdist(func_127(iParam0), func_127(iParam1));
	return 0f;
}

Vector3 func_127(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

var func_128(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_123(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_129(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_118(player_id()))
		{
			iParam0 = -func_118(player_id());
		}
	}
	if (func_130(8000, 0, 0) > 0)
	{
		if (func_130(8000, 0, 0) < iParam0 + func_118(player_id()))
		{
			iParam0 = func_130(8000, 0, 0) - func_118(player_id());
		}
	}
	return iParam0;
}

var func_130(int iParam0, int iParam1, int iParam2)
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

bool func_131()
{
	return true;
}

bool func_132(char* sParam0)
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

int func_133(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_134(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_135()
{
	Global_2444573 = 1;
}

void func_136(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_139(7))
	{
		return;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_137(iParam0);
	iVar2 = absi(get_time_difference(Global_2460486.f_4660.f_67, get_network_time()));
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

int func_137(int iParam0)
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

int func_138(int iParam0)
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

int func_139(int iParam0)
{
	return is_bit_set(Global_2460486.f_4660.f_18, iParam0);
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_152())
		{
			if (func_66(0))
			{
				if (network_is_player_active(func_8()))
				{
					if (func_151() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_151();
						*iParam0 -= iVar0;
					}
					func_149(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_142("GB_BCUT_TICK1", func_8(), iVar0, 0, 0, 1, 1);
					}
					func_64(20);
					func_141(func_8(), iVar0, 1);
				}
			}
		}
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_33(iParam0));
	}
}

int func_142(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_41(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_147(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_143(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_143(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_146() || !network_is_activity_session()) || !func_61(player_id(), 0))
	{
		return;
	}
	iVar0 = func_144(iParam2);
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

int func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_145(iVar0);
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

void func_145(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_146()
{
	return is_dlc_present(-1762644250);
}

var func_147(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_148(&cVar0);
}

var func_148(char[4] cParam0)
{
	return cParam0;
}

void func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_150(1);
	}
	else
	{
		iVar1 = func_150(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_150(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

var func_151()
{
	return Global_262145.f_10328;
}

int func_152()
{
	return func_17(player_id());
}

var func_153()
{
	return Global_1610316[player_id() /*174*/].f_10.f_30;
}

void func_154()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_63()];
	iVar0++;
	Global_2493048[func_63()] = iVar0;
	func_113(3245, iVar0, -1, 1);
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_63()];
	iVar1 = Global_2493058[func_63()];
	iVar0++;
	iVar1++;
	Global_2493043[func_63()] = iVar0;
	Global_2493058[func_63()] = iVar1;
	Global_1587523[player_id() /*444*/].f_250.f_85 = iVar1;
	func_113(3243, iVar0, -1, 1);
	func_113(3244, iVar1, -1, 1);
}

void func_156()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_63()];
	iVar0++;
	func_113(3247, iVar0, -1, 1);
}

void func_157(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_159(iParam0);
	func_158(iParam0, uVar0, iParam1);
}

void func_158(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = 444;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_7())
	{
		if (network_is_player_active(iParam0))
		{
			trigger_script_event(1, &Var0, 4, func_33(iParam0));
		}
	}
}

int func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_164();
	iVar0 = func_162(iParam0, iVar0);
	iVar1 = Global_1610316[func_8() /*174*/].f_10.f_152;
	iVar0 += iVar1 * Global_262145.f_12335;
	if (iVar0 < func_161())
	{
		iVar0 = func_161();
	}
	if (iVar0 > func_160())
	{
		iVar0 = func_160();
	}
	return iVar0;
}

var func_160()
{
	return Global_262145.f_12336;
}

var func_161()
{
	return Global_262145.f_13498;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_186(iParam0) * func_163();
	iParam1 -= iVar0;
	return iParam1;
}

var func_163()
{
	return Global_262145.f_13497;
}

var func_164()
{
	return Global_262145.f_10320;
}

bool func_165(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		if (iParam0 != player_id())
		{
			if (func_34(iParam0, player_id(), 0))
			{
				if (!func_23(iParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_166()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_63()];
	iVar0++;
	func_113(3246, iVar0, -1, 1);
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_63()];
	iVar0 += iParam0;
	func_113(3248, iVar0, -1, 1);
	if (func_170(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_169(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_168(7666, iVar2, -1, 1);
	}
}

var func_168(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_63();
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

int func_169(int iParam0)
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

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_63();
	}
	iVar0 = 0;
	iVar1 = func_172(iParam0, iParam1);
	iVar2 = func_171(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_63();
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

int func_173(var uParam0)
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
			if (!func_61(iVar2, 0) && !func_34(iVar2, player_id(), 1))
			{
				iVar1++;
			}
			else if (func_61(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_174(int iParam0)
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

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_182(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_181(iParam0, iVar3))
			{
				iVar0 += func_180(iVar3);
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_176(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= func_176(iParam0) - iVar1)
			{
				iVar0 += func_180(get_random_int_in_range(true, 6));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_176(int iParam0)
{
	int iVar0;
	
	if (func_179(iParam0))
	{
		iVar0 = func_177(func_178(iParam0));
		return func_121(iVar0, -1, 0);
	}
	return 0;
}

int func_177(int iParam0)
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

int func_178(int iParam0)
{
	int iVar0;
	
	if (func_179(iParam0))
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

bool func_179(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_180(int iParam0)
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

bool func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_179(iParam0))
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

bool func_182(int iParam0)
{
	int iVar0;
	
	if (func_179(iParam0))
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

void func_183()
{
	if (func_152())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_184()
{
	if (func_152())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_185()
{
	if (func_152())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70--;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

var func_186(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_187(int iParam0)
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

int func_188(int iParam0)
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

void func_189(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_190(iParam0))
	{
		if (!func_152())
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
	if (func_16(player_id(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_153();
	if (iVar0 != func_7())
	{
		if (func_34(player_id(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_190(int iParam0)
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

bool func_191()
{
	if ((func_23(player_id(), 21) || func_23(player_id(), 22)) || func_197())
	{
		return true;
	}
	if (func_193())
	{
		func_192(22);
		return true;
	}
	return false;
}

void func_192(int iParam0)
{
	set_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_193()
{
	if (func_20(player_id(), 0))
	{
		if ((func_14() && !func_196()) || func_195(player_id(), 21))
		{
			if (!func_23(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_194(27);
		}
	}
	return false;
}

void func_194(int iParam0)
{
	clear_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_195(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

var func_196()
{
	return Global_1312416.f_1;
}

int func_197()
{
	return func_198(283, -1);
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_117(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_199()
{
	return false;
}

void func_200()
{
	struct<14> Var0;
	
	if (func_223())
	{
		return;
	}
	if (func_222())
	{
		func_215();
	}
	if (func_214())
	{
		func_213();
	}
	if ((!is_bit_set(Local_98.f_1, 2) && !is_bit_set(Local_98.f_1, 4)) && !is_bit_set(Local_98.f_1, 3))
	{
		if (func_246() != player_id())
		{
			func_212(88, func_246(), func_24(), -1, "GBTER_BIG_COMS", "GB_WORK_OVER", 1, -1, 2, 0, 0, 0);
		}
		else
		{
			func_211(85, func_24(), -1, "GBTER_BIG_WINS", "GB_WINNER", 1, -1, 2);
		}
	}
	else if (is_bit_set(Local_98.f_1, 3))
	{
	}
	else
	{
		func_202(86, "GB_WORK_OVER", "GBTER_BIG_FLEE", 1, -1, 2);
		if (is_bit_set(Local_98.f_1, 4) || func_18(func_24(), 1, 0))
		{
			if (player_id() == func_153())
			{
				Var0.f_10 = func_153();
				Var0.f_2 = 179;
				func_201(Var0, func_33(func_24()));
			}
		}
	}
}

void func_201(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

int func_202(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_210(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_203(&Var0);
}

bool func_203(var uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_209(uParam0, *uParam0.f_16);
	func_206(uParam0);
	if (func_205(*uParam0.f_1))
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
				set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_204(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_204(int iParam0)
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

bool func_205(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_206(var uParam0)
{
	if (func_208(*uParam0.f_1))
	{
		*uParam0.f_66 = func_207();
	}
}

int func_207()
{
	return 21;
}

bool func_208(int iParam0)
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

void func_209(var uParam0, int iParam1)
{
	if (func_208(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_7())
	{
		return;
	}
	if (func_204(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_41(iParam1, -2, 0, 0);
		}
	}
}

void func_210(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_7();
	*uParam1.f_17 = func_7();
	*uParam1.f_18 = func_7();
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

int func_211(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_210(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = uParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_203(&Var0);
}

int func_212(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_210(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = uParam1;
	Var0.f_17 = uParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_203(&Var0);
}

void func_213()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

int func_214()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_215()
{
	if (!func_221())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_216();
}

void func_216()
{
	func_218();
	func_217(0);
}

void func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = network_is_game_in_progress();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (iVar0)
	{
		Global_1312577.f_8 = get_network_time();
		Global_1312577.f_9 = get_network_time();
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

void func_218()
{
	if (!func_220())
	{
	}
	if (func_221())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_219();
		_0xFCC75460ABA29378();
	}
}

void func_219()
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

int func_220()
{
	if (!func_221())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_219();
	return _0x8A9BA1AB3E237613();
}

bool func_221()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_222()
{
	return func_221();
}

bool func_223()
{
	if (!func_224(1) || func_444())
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0)
{
	if (func_195(player_id(), 21))
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
	if (func_242(player_id()))
	{
		return false;
	}
	if (func_241())
	{
		return false;
	}
	if (func_240())
	{
		return false;
	}
	if (func_239())
	{
		return false;
	}
	if (func_238())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_236(player_id()))
	{
		return false;
	}
	if (!func_234())
	{
		return false;
	}
	if (func_195(player_id(), 0) || func_195(player_id(), 3))
	{
		return false;
	}
	if ((func_195(player_id(), 12) || func_195(player_id(), 14)) || func_195(player_id(), 13))
	{
		return false;
	}
	if (func_233(player_id(), 0, 0))
	{
		if ((!func_232(Global_1587523[player_id() /*444*/].f_250.f_9) && !func_230(player_id())) || (func_19(player_id()) != 167 && func_19(player_id()) != 168))
		{
			return false;
		}
	}
	if (func_229())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_228(player_id()))
	{
		return false;
	}
	if (func_227())
	{
		return false;
	}
	if (func_226(player_id()))
	{
		return false;
	}
	if (func_225(player_id()))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

bool func_226(int iParam0)
{
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_227()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_228(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_229()
{
	return Global_91330.f_297 > 0;
}

int func_230(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_231(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_231(int iParam0)
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

bool func_232(int iParam0)
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

bool func_233(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
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
		if (func_230(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_234()
{
	if (func_235() == 0)
	{
		return true;
	}
	return false;
}

var func_235()
{
	return Global_1312466.f_18;
}

int func_236(int iParam0)
{
	return func_237(iParam0);
}

int func_237(var uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_238()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

var func_239()
{
	return Global_1315913;
}

int func_240()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_241()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_242(int iParam0)
{
	if (func_243(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_243(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_236(iParam0))
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

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_7())
	{
		if (network_is_player_active(iParam1))
		{
			if (iParam1 == player_id())
			{
				iVar0 = 1;
			}
			else if (func_245(iParam1, player_id()))
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

int func_245(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_7() && iParam1 != func_7())
	{
		iVar0 = func_15(iParam0);
		if (iVar0 != func_7())
		{
			return iVar0 == func_15(iParam1);
		}
	}
	return false;
}

var func_246()
{
	return Local_98.f_3;
}

void func_247(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6)
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
	
	if (func_354(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_352() || iParam2 == 24)
	{
		if (func_312(iParam1, iParam2, uParam3, Global_1573685, 0, func_350()))
		{
			func_311(1);
			if ((!func_310() && !func_309()) || is_bit_set(Global_2460486.f_4426, true))
			{
				if (func_308())
				{
					func_307();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_306(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_305(iParam1);
							if (is_bit_set(*uParam3.f_33, 7))
							{
								clear_bit(uParam3.f_33, 7);
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
									if (!func_61(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_304(iVar35))
										{
											iVar44 = iVar35;
											if (func_17(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_303(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_301(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_299())
							{
								if (func_6(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_7();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_298(iVar35) && func_292(iVar35, iParam2)) && func_6(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_287(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_107(iVar35)};
								iVar37 = func_281(iVar35);
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
									if (!func_299())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_276(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_275(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_272(iVar35, 0);
								if (iVar34)
								{
									if (func_16(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_271(iParam5))
								{
									func_270(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_270(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								set_bit(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_6(iVar35, 0, 1) && !is_bit_set(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_7();
							}
							if (func_298(iVar35))
							{
								if (func_6(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_287(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_107(iVar35)};
									iVar37 = func_281(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_272(iVar35, 1);
									if (iVar34)
									{
										if (func_16(iVar35, 1))
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
									func_262(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (is_bit_set(*uParam3.f_33, 11))
						{
							func_259(uParam3, iParam1);
						}
						func_258(uParam3.f_21);
						func_257();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!is_bit_set(*uParam3.f_33, 7))
						{
							func_256(uParam3, iParam1);
							func_255(iParam1, 0, 1);
							set_bit(uParam3.f_33, 7);
						}
						func_256(uParam3, iParam1);
						if (!is_bit_set(*uParam3.f_33, 11))
						{
							set_bit(uParam3.f_33, 11);
						}
						if (func_251(uParam3))
						{
							Global_1573833 = 1;
						}
						func_248(uParam3);
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
			func_257();
			func_306(0);
			if (is_bit_set(*uParam3.f_33, 7))
			{
				clear_bit(uParam3.f_33, 7);
			}
			if (is_bit_set(*uParam3.f_33, 10))
			{
				clear_bit(uParam3.f_33, 10);
			}
		}
	}
	_0xE3A3DB414A373DAB();
}

void func_248(var uParam0)
{
	if (!func_250(uParam0.f_21))
	{
		func_4(uParam0.f_21, 0, 0);
	}
	else if (func_3(uParam0.f_21, 250, 0))
	{
		func_258(uParam0.f_21);
		func_249(0);
	}
}

void func_249(int iParam0)
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

var func_250(var uParam0)
{
	return *uParam0.f_1;
}

int func_251(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_7() && func_6(iVar15, 0, 1))
	{
		Var2 = {func_107(iVar15)};
		iVar1 = func_254(uParam0, *uParam0.f_37);
		if (func_253(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_252(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_252(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_252(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_252(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_252(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_252(uParam0, uVar0, 0);
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

void func_252(var uParam0, var uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

var func_254(var uParam0, var uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_255(int iParam0, int iParam1, int iParam2)
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

void func_256(var uParam0, int iParam1)
{
	if (!is_bit_set(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		set_bit(uParam0.f_33, 10);
	}
}

void func_257()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_258(var uParam0)
{
	*uParam0.f_1 = 0;
}

void func_259(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_7())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_261(*uParam0.f_38[iVar0 /*2*/], 0);
					func_260(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_260(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_261(int iParam0, int iParam1)
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

void func_262(char* sParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_269() && iParam3 < func_268())
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
			if (is_bit_set(*uParam2.f_33, 8) || *uParam2.f_108 == 6)
			{
				func_267("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_267(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_267("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_267("");
			if (*uParam2.f_108 == 6)
			{
				func_267("");
			}
			else
			{
				func_267(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_266(uParam2))
			{
				func_265("DPAD_FRIEND");
			}
			else if (func_264(uParam2))
			{
				func_265("DPAD_FRIEND");
			}
			else if (func_263(uParam2))
			{
				func_265("DPAD_CREW");
			}
			else
			{
				func_265("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_263(var uParam0)
{
	return is_bit_set(*uParam0.f_33, 6);
}

int func_264(var uParam0)
{
	return is_bit_set(*uParam0.f_33, 5);
}

void func_265(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_266(var uParam0)
{
	if (func_264(uParam0) && func_263(uParam0))
	{
		return true;
	}
	return false;
}

void func_267(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_268()
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

int func_269()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_270(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, Vector3 fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_269() && iParam2 < func_268())
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
				if (is_bit_set(*uParam1.f_33, 8) || *uParam1.f_108 == 6)
				{
					func_267("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_265(sParam15);
				}
				else
				{
					func_267(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_267("");
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
				if (func_299())
				{
					func_267("");
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
						func_265(uParam1.f_104);
					}
					else
					{
						func_267("");
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
					func_267("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_267("");
				}
				else
				{
					func_267(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_267("");
					func_267("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_266(uParam1))
				{
					func_265("DPAD_FRIEND");
				}
				else if (func_264(uParam1))
				{
					func_265("DPAD_FRIEND");
				}
				else if (func_263(uParam1))
				{
					func_265("DPAD_CREW");
				}
				else
				{
					func_265("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_271(int iParam0)
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

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_274(iParam0)) && !func_273(iParam0))
	{
		iVar0 = func_207();
	}
	iVar1 = func_52(iParam0);
	if (!iVar1 == -1)
	{
		return func_50(iVar1);
	}
	return iVar0;
}

int func_273(int iParam0)
{
	return func_23(iParam0, 20);
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

char* func_275(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_276(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_280(iParam3))
	{
		*fParam1 = func_277(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_271(iParam3))
	{
		*fParam1 = func_277(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_277(int iParam0, int iParam1)
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
				return func_279(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_278(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_278(Vector3 fParam0)
{
	return fParam0 / 1.609344f;
}

float func_279(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_280(int iParam0)
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

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		func_282(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_282(int iParam0, int iParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_284(iParam0) != -1)
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
	if (func_283(iParam0))
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

bool func_283(int iParam0)
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

int func_284(int iParam0)
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
			func_285(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_285(int iParam0)
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
	func_286(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_7();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (network_is_game_in_progress())
	{
		*uParam0.f_3 = get_network_time();
	}
}

struct<4> func_287(int iParam0)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Global_2459440 = {func_107(iParam0)};
		if (is_durango_version())
		{
			if (func_253(Global_2459440))
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
		if (func_291(&Global_2459440))
		{
			Global_2459370 = {func_289(iParam0)};
			func_288(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_288(var uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_289(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_290(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_107(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_290(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_291(var uParam0)
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

bool func_292(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_297(iParam0) || func_296(iParam0)) || func_295(iParam0))
		{
			return false;
		}
	}
	if (!func_294(iParam0))
	{
		return false;
	}
	if ((!func_293(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_304(iParam0))
	{
		return false;
	}
	return true;
}

bool func_293(int iParam0)
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

int func_294(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_295(int iParam0)
{
	if (func_297(iParam0))
	{
		return true;
	}
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 10) || is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return false;
}

int func_297(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 2);
}

bool func_298(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return false;
	}
	if (func_61(iParam0, 0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (is_bit_set(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_299()
{
	switch (func_300(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_273(player_id()))
	{
		switch (func_19(player_id()))
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

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_301(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_302(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_302(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

bool func_302(int iParam0)
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

void func_303(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_6(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_61(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_304(iVar1))
				{
					if (func_34(iVar1, iParam1, 0))
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

int func_304(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

void func_305(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_306(int iParam0)
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

void func_307()
{
	if (is_bit_set(Global_2460486.f_4426, true))
	{
		if (func_214())
		{
			func_213();
		}
	}
}

bool func_308()
{
	if (is_bit_set(Global_2460486.f_4426, false) && func_214())
	{
		return true;
	}
	if (is_bit_set(Global_2460486.f_4426, true) && func_214())
	{
		return true;
	}
	return false;
}

bool func_309()
{
	if (func_214())
	{
		if (func_204(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_310()
{
	if (func_214())
	{
		if (func_208(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_311(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_312(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_349(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_348();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_347())
		{
			if (func_346() > 0 && Global_1573687)
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
		if (!func_338())
		{
			func_337(iParam0, uParam2, 1);
			return false;
		}
	}
	if (is_bit_set(Global_2460486.f_4429, 26))
	{
		func_337(iParam0, uParam2, 1);
		return false;
	}
	if (!func_250(uParam2.f_19))
	{
		if (func_346() == 1)
		{
			func_336(iVar6, iParam0, 0);
			func_4(uParam2.f_19, 0, 0);
			func_337(iParam0, uParam2, 0);
		}
	}
	if (func_250(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_3(uParam2.f_19, 10000, 0) || (func_346() == 0 && !iParam5))
		{
			func_337(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_335();
				if (iParam1 == 23 || iParam1 == 24)
				{
					_0x25F87B30C382FCA7();
				}
				hide_hud_component_this_frame(18);
			}
			if (is_bit_set(*uParam2.f_33, false))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				_0x55598D21339CB998(fVar7);
				if (iVar5)
				{
					if (*uParam2.f_34 != Global_1573686)
					{
						clear_bit(uParam2.f_33, false);
					}
				}
				return true;
			}
			else
			{
				if (iVar5 == 0)
				{
					func_335();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_336(iVar6, iParam0, 0))
				{
					func_305(iParam0);
					sVar4 = func_333(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_330(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_323(iParam0, func_327(uParam2), func_324(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_320(iParam0, func_322(), func_321(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_330(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_318(iParam1)};
						iVar8 = func_313(iParam1);
						func_330(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					set_bit(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_313(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_317())
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
			if (func_316(player_id()))
			{
				iVar0 = 20;
			}
			if (func_315(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_314(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_314(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_315(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_316(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_317()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_318(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_319(player_id()) || func_314(player_id()))
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

int func_319(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_320(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_265(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_265("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_321()
{
	switch (func_19(player_id()))
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

char* func_322()
{
	switch (func_19(player_id()))
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

void func_323(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_265(sParam1);
		}
		else if (func_300(player_id()) == 133)
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
		func_265("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = func_300(player_id());
	if (func_326())
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
			switch (func_325())
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

int func_325()
{
	if (func_300(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

var func_326()
{
	return Global_1587522;
}

char* func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = func_300(player_id());
	if (func_326())
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
			if (func_329() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_329() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_325())
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
			if (func_328() == 1)
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

var func_328()
{
	return Global_2460486.f_4650;
}

int func_329()
{
	if (func_300(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_330(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_267(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_265(sParam1);
		}
		if (func_347() && iParam6)
		{
			if (func_332())
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
			func_265(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_331(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_331(int iParam0)
{
	if (func_316(iParam0) || func_315(iParam0))
	{
		return true;
	}
	return false;
}

var func_332()
{
	return Global_1573687;
}

char* func_333(int iParam0, char* sParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_334();
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

char* func_334()
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

void func_335()
{
	Global_36611 = 1;
}

int func_336(int iParam0, int iParam1, int iParam2)
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

void func_337(int iParam0, var uParam1, int iParam2)
{
	clear_bit(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_257();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_250(uParam1.f_19))
		{
			func_258(uParam1.f_19);
		}
	}
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
	}
	if (is_bit_set(*uParam1.f_33, false))
	{
		clear_bit(uParam1.f_33, false);
	}
	_0x55598D21339CB998(0f);
}

bool func_338()
{
	if (func_345())
	{
		return false;
	}
	if (func_240())
	{
		return false;
	}
	if (!func_343())
	{
		return false;
	}
	if (!func_234())
	{
		return false;
	}
	if (func_342(8, -1))
	{
		return false;
	}
	if (func_346() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_238())
	{
		return false;
	}
	else if (!func_243(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_341(1) || func_339(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_59(player_id()))
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
	if (func_139(0))
	{
		return false;
	}
	if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

bool func_339(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_340(player_ped_id()))
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
	if (is_pc_version())
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

bool func_340(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!is_ped_injured(iParam0))
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

int func_341(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_342(int iParam0, int iParam1)
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
	return is_bit_set(Global_1338622.f_949, iParam0);
}

bool func_343()
{
	if (func_344())
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

var func_344()
{
	return Global_1312438;
}

int func_345()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

var func_346()
{
	return Global_1338622.f_68;
}

bool func_347()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_348()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_349(int iParam0)
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

int func_350()
{
	if (func_351(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_351(int iParam0)
{
	if (network_is_game_in_progress())
	{
		if (func_61(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

bool func_352()
{
	if (func_350())
	{
		return true;
	}
	if (func_295(player_id()))
	{
		return false;
	}
	if (func_326())
	{
		return true;
	}
	if (func_274(player_id()))
	{
		switch (func_300(player_id()))
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
				if (!func_353(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_353(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_353(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_354(int iParam0)
{
	if ((iParam0 == 24 && func_274(player_id())) && !func_273(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_20(player_id(), 0) && func_273(player_id()))
		{
			return true;
		}
		if (func_355(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_274(iParam0) && !func_297(iParam0)) && !is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_273(iParam0);
	uVar3 = func_14();
	uVar4 = func_191();
	if ((iVar1 && (func_358(iParam0) || func_357(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_22(iParam0)) && !func_356(iParam0)))
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

int func_356(int iParam0)
{
	return func_23(iParam0, 19);
}

int func_357(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_358(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

void func_359()
{
	if (func_6(func_24(), 1, 1) && !is_entity_dead(get_player_ped(func_24()), 0))
	{
		func_360(151, get_entity_coords(get_player_ped(func_24()), 1), &uLocal_97, 1140457472, 1144750080, 0);
	}
}

void func_360(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 fVar0;
	float fVar1;
	
	if (((func_274(player_id()) && !func_297(player_id())) && !is_bit_set(Global_1610316[player_id() /*174*/].f_1, 8)) && (func_358(player_id()) || func_357(player_id())))
	{
		return;
	}
	Global_1727391 = {vParam1};
	fVar0 = vdist(get_entity_coords(player_ped_id(), 0), vParam1);
	func_386(iParam0, fVar0);
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_22(player_id()) || func_21(player_id()))
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
		if (!func_195(player_id(), 21))
		{
			func_385(vParam1, 1, 0);
		}
		if (!*uParam4 && func_6(player_id(), 1, 1))
		{
			*uParam4 = 1;
			if (func_384(iParam0))
			{
				set_wanted_level_multiplier(func_383(iParam0));
				if (func_382(iParam0, -1))
				{
					set_max_wanted_level(false);
					if (get_player_wanted_level(player_id()) > 0)
					{
						set_player_wanted_level(player_id(), false, 1);
						set_player_wanted_level_now(player_id(), 1);
					}
					set_bit(&(Global_1727391.f_3), false);
				}
			}
			if (func_381(iParam0))
			{
				fVar1 = func_380(iParam0);
				if (fVar1 != 1f)
				{
					func_377(fVar1);
					set_bit(&(Global_1727391.f_3), true);
				}
			}
			if (!Global_2391042)
			{
				if (func_376(iParam0) && func_22(player_id()))
				{
					func_375(1);
					func_374(2);
				}
			}
			func_192(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_23(player_id(), 19))
			{
				func_194(19);
			}
		}
		if (*uParam4 && func_6(player_id(), 1, 1))
		{
			*uParam4 = 0;
			if (func_384(iParam0))
			{
				if (is_bit_set(Global_1727391.f_3, false))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					clear_bit(&(Global_1727391.f_3), false);
				}
			}
			if (func_381(iParam0))
			{
				func_373();
				clear_bit(&(Global_1727391.f_3), true);
			}
			if (iParam7 && !func_274(player_id()))
			{
				if (func_19(player_id()) != 152)
				{
					func_362();
				}
			}
			if (func_139(2))
			{
				func_375(0);
				func_361(2);
			}
		}
	}
}

void func_361(int iParam0)
{
	clear_bit(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_362()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_371();
	func_363(1, 1);
}

void func_363(int iParam0, int iParam1)
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
		func_370();
	}
	func_366(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_365(0);
	func_364();
}

void func_364()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_365(int iParam0)
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

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_368();
		func_367(8, 0, 0);
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
		func_368();
		func_367(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_367(int iParam0, int iParam1, int iParam2)
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

void func_368()
{
	func_369();
	Global_2404956.f_635 = 0;
}

void func_369()
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

void func_370()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_371()
{
	func_372();
	Global_2404956.f_1280 = 0;
}

void func_372()
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

void func_373()
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

void func_374(int iParam0)
{
	set_bit(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_375(int iParam0)
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

bool func_376(int iParam0)
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

void func_377(float fParam0)
{
	Vector3 fVar0;
	
	if (get_hash_key(get_this_script_name()) == func_378())
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

int func_378()
{
	switch (func_379())
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

var func_379()
{
	return Global_25120;
}

float func_380(int iParam0)
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

bool func_381(int iParam0)
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

bool func_382(int iParam0, int iParam1)
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

float func_383(int iParam0)
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

bool func_384(int iParam0)
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

void func_385(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_386(int iParam0, Vector3 fParam1)
{
	int iVar0;
	
	iVar0 = func_389(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_387();
	}
}

void func_387()
{
	if (!func_388(player_id()))
	{
		func_192(25);
	}
}

int func_388(int iParam0)
{
	return func_23(iParam0, 25);
}

int func_389(int iParam0)
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

void func_390()
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
				func_391(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_391(int iParam0)
{
	struct<4> Var0;
	
	if (get_event_data(1, iParam0, &Var0, 10))
	{
		if ((does_entity_exist(Var0.f_1) && is_entity_a_ped(Var0.f_1)) && get_ped_index_from_entity_index(Var0.f_1) == player_ped_id())
		{
			if ((does_entity_exist(Var0) && is_entity_a_ped(Var0)) && get_ped_index_from_entity_index(Var0) == get_player_ped(func_24()))
			{
				if (Var0.f_3)
				{
					set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), true);
				}
			}
		}
	}
}

void func_392()
{
	char[8] cVar0;
	
	if (!is_bit_set(iLocal_96, 3))
	{
		if (func_6(func_24(), 1, 1) && network_is_player_active(func_24()))
		{
			StringCopy(&cVar0, "GBTBLIP", 8);
			func_409(func_24(), func_411(6), 1);
			func_407(func_24(), 432, 1);
			func_405(func_24(), 1, 1);
			func_404(func_24(), Global_262145.f_10294, 1);
			func_403(func_24(), 1);
			func_400(func_24(), cVar0, 1);
			if (func_29() <= 1)
			{
				func_393(func_24(), 1, 7000);
			}
			set_bit(&iLocal_96, 3);
		}
	}
}

void func_393(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (iParam1)
	{
		if (iParam0 == Global_2428492)
		{
		}
		else if (does_blip_exist(Global_2412879[iVar0]))
		{
			set_bit(&(Global_2412879.f_367), iVar0);
			clear_bit(&(Global_2412879.f_372), iVar0);
			set_blip_flashes(Global_2412879[iVar0], 1);
			set_blip_flash_interval(Global_2412879[iVar0], 250);
			func_394(iParam0);
			if (iParam2 < 0)
			{
				set_bit(&(Global_2412879.f_372), iVar0);
			}
			else
			{
				Global_2412879.f_198[iVar0] = get_time_offset(get_network_time(), iParam2);
			}
		}
		else
		{
			set_bit(&(Global_2412879.f_367), iVar0);
			clear_bit(&(Global_2412879.f_372), iVar0);
			if (iParam2 < 0)
			{
				set_bit(&(Global_2412879.f_372), iVar0);
			}
			else
			{
				Global_2412879.f_198[iVar0] = get_time_offset(get_network_time(), iParam2);
			}
		}
	}
	if (!iParam1)
	{
		clear_bit(&(Global_2412879.f_367), iVar0);
		clear_bit(&(Global_2412879.f_372), iVar0);
		if (does_blip_exist(Global_2412879[iVar0]))
		{
			func_394(iParam0);
			set_blip_flashes(Global_2412879[iVar0], 0);
		}
	}
}

void func_394(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	if (func_6(iParam0, 0, 1))
	{
		if (does_blip_exist(Global_2412879[iVar0]))
		{
			iVar1 = get_blip_sprite(Global_2412879[iVar0]);
			if (is_bit_set(Global_2412879.f_383, iVar0) || is_bit_set(Global_2412879.f_382, iVar0))
			{
				iVar2 = 1;
			}
			else if ((is_bit_set(Global_2412879.f_368, iVar0) || is_bit_set(Global_2412879.f_367, iVar0)) || is_bit_set(Global_2412879.f_385, iVar0))
			{
				iVar2 = func_397(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						iVar2 = func_397(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						iVar2 = func_397(11);
						break;
					
					case 254:
						if (get_player_team(iParam0) == get_player_team(Global_2428492))
						{
							iVar2 = func_397(6);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					
					case 271:
						if (get_player_team(iParam0) == get_player_team(Global_2428492))
						{
							iVar2 = func_397(6);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_54(Global_2428492, iParam0, -2, 0))
						{
							iVar2 = func_397(6);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					
					case 303:
					case 418:
						iVar2 = func_397(10);
						break;
					
					case 364:
						if (func_395(Global_2428492, iParam0, 1))
						{
							iVar2 = func_397(10);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					
					case 478:
						iVar2 = func_397(10);
						break;
					
					case 417:
						if (func_395(Global_2428492, iParam0, 1))
						{
							iVar2 = func_397(6);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_395(Global_2428492, iParam0, 1))
						{
							iVar2 = func_397(6);
						}
						else
						{
							iVar2 = func_397(5);
						}
						break;
					}
			}
			set_blip_priority(Global_2412879[iVar0], iVar2);
		}
	}
}

bool func_395(int iParam0, int iParam1, int iParam2)
{
	if (func_41(iParam0, -2, 0, 0) == func_41(iParam1, -2, 0, 0))
	{
		return true;
	}
	if (iParam2)
	{
		if (func_396(func_41(iParam0, -2, 0, 0)) && func_396(func_41(iParam1, -2, 0, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_396(int iParam0)
{
	if (iParam0 == func_47(1) || iParam0 == func_47(0))
	{
		return true;
	}
	return false;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_399())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_398(iParam0);
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_399()
{
	int iVar0;
	
	iVar0 = get_player_team(Global_2428492);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return is_bit_set(Global_1617379.f_80[iVar0 /*6968*/].f_3997, 4);
	}
	return false;
}

void func_400(int iParam0, char[8] cParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_378())
	{
		return;
	}
	iVar1 = iParam0;
	if (!is_thread_active(Global_2412879.f_726) || Global_2412879.f_726 == get_id_of_this_thread())
	{
		if (iParam3)
		{
			if (!is_bit_set(Global_2412879.f_392, iVar1))
			{
				iVar0 = true;
			}
			set_bit(&(Global_2412879.f_392), iVar1);
			Global_2412879.f_727[iVar1 /*2*/] = {cParam1};
			Global_2412879.f_726 = get_id_of_this_thread();
		}
		else
		{
			if (is_bit_set(Global_2412879.f_392, iVar1))
			{
				iVar0 = true;
			}
			clear_bit(&(Global_2412879.f_392), iVar1);
			if (Global_2412879.f_392 == 0)
			{
				Global_2412879.f_726 = -1;
			}
		}
	}
	if (iVar0)
	{
		if (does_blip_exist(Global_2412879[iVar1]))
		{
			func_401(iParam0);
		}
	}
}

void func_401(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (func_402(iParam0))
	{
		begin_text_command_set_blip_name("CUSPLNM");
		_add_text_component_item_string(&(Global_2412879.f_727[uVar0 /*2*/]));
		end_text_command_set_blip_name(Global_2412879[uVar0]);
	}
	else
	{
		set_blip_name_to_player_name(Global_2412879[uVar0], iParam0);
	}
}

bool func_402(int iParam0)
{
	if (is_bit_set(Global_2412879.f_392, iParam0))
	{
		if (is_thread_active(Global_2412879.f_726))
		{
			return true;
		}
		else
		{
			clear_bit(&(Global_2412879.f_392), iParam0);
		}
	}
	return false;
}

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_378())
	{
		return;
	}
	iVar0 = iParam0;
	if (!is_thread_active(Global_2412879.f_724) || Global_2412879.f_724 == get_id_of_this_thread())
	{
		if (iParam1)
		{
			set_bit(&(Global_2412879.f_389), iVar0);
			Global_2412879.f_724 = get_id_of_this_thread();
		}
		else
		{
			clear_bit(&(Global_2412879.f_389), iVar0);
			if (Global_2412879.f_389 == 0)
			{
				Global_2412879.f_724 = -1;
			}
		}
	}
}

void func_404(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_378())
	{
		return;
	}
	iVar0 = iParam0;
	if (!is_thread_active(Global_2412879.f_691[iParam0]) || Global_2412879.f_691[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			set_bit(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_493[iVar0] = fParam1;
			Global_2412879.f_691[iParam0] = get_id_of_this_thread();
		}
		else
		{
			clear_bit(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_691[iParam0] = -1;
		}
	}
}

void func_405(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (func_6(iParam0, 1, 1))
		{
			Global_2412879.f_625[iParam0] = get_id_of_this_thread();
			set_bit(&(Global_2412879.f_364), iParam0);
			func_406(iParam0, iParam2);
		}
	}
	else
	{
		func_406(iParam0, iParam2);
		clear_bit(&(Global_2412879.f_364), iParam0);
		Global_2412879.f_625[iParam0] = -1;
	}
}

void func_406(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&(Global_2412879.f_365), iParam0);
	}
	else
	{
		clear_bit(&(Global_2412879.f_365), iParam0);
	}
	if (does_blip_exist(Global_2412879[iParam0]))
	{
		if (iParam1)
		{
			set_blip_as_short_range(Global_2412879[iParam0], false);
		}
		else
		{
			set_blip_as_short_range(Global_2412879[iParam0], true);
		}
	}
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_378())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!is_thread_active(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			if (!is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_408();
			}
			set_bit(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = get_id_of_this_thread();
		}
		else
		{
			if (is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_408();
			}
			clear_bit(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_408()
{
	Global_2412879.f_880 = 1;
}

void func_409(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_378())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_410(iParam0))
	{
		if (iParam2)
		{
			set_bit(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = get_id_of_this_thread();
			Global_2412879.f_427[iVar0] = uParam1;
		}
		else
		{
			clear_bit(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

bool func_410(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

int func_411(int iParam0)
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

void func_412()
{
	if (func_223())
	{
		if (func_222())
		{
			func_215();
		}
		return;
	}
	func_413("GBTER_KILL", func_24(), 1, 0);
}

void func_413(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	func_414(sParam0, get_player_name(iParam1), iParam3, 1);
}

bool func_414(char* sParam0, char* sParam1, int iParam2, int iParam3)
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
	if (_0x43E4111189E54F0E(sParam1) > 63)
	{
		return false;
	}
	if (func_418(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_216();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_417();
	func_416(iParam2);
	func_415();
	return true;
}

void func_415()
{
	set_bit(&(Global_1312577.f_57), true);
}

void func_416(int iParam0)
{
	if (iParam0)
	{
		set_bit(&(Global_1312577.f_57), false);
		return;
	}
	clear_bit(&(Global_1312577.f_57), false);
}

void func_417()
{
	Global_1312577.f_8 = get_time_offset(get_network_time(), 86400000);
	Global_1312577.f_9 = get_network_time();
}

int func_418(char* sParam0, char* sParam1)
{
	if (!func_221())
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

void func_419()
{
	int iVar0;
	int iVar1;
	
	if (func_223())
	{
		return;
	}
	if (is_bit_set(Local_98.f_1, false))
	{
		if (func_250(&(Local_98.f_4)))
		{
			iVar1 = func_5() - func_424(&(Local_98.f_4), 0, 0);
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_423(iVar1, 0);
			if (iVar1 > 0)
			{
				func_420(iVar1, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_420(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_420(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_422(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_421(7, iVar0);
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

void func_421(int iParam0, int iParam1)
{
	set_bit(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_422(int iParam0, int iParam1)
{
	return is_bit_set(Global_1339940.f_4726[iParam0], iParam1);
}

int func_423(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_424(var uParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(get_network_time(), *uParam0);
		}
		else
		{
			return get_time_difference(_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(get_game_timer(), *uParam0);
}

void func_425()
{
	if (func_223())
	{
		return;
	}
	if (player_id() != func_153())
	{
		if (is_bit_set(iLocal_96, false))
		{
			if (!func_214())
			{
				func_427("GBTER_START", get_player_name(func_24()), 0, -1);
				func_426(1);
				set_bit(&iLocal_96, 2);
			}
		}
		else
		{
			func_213();
			func_211(84, func_24(), -1, "GBTER_BIG_GS", "GBTER_BIG", 1, -1, 2);
			set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), false);
		}
	}
	else if (is_bit_set(iLocal_96, false))
	{
		if (!func_214())
		{
			func_427("GBTER_BOSS", get_player_name(func_24()), 0, -1);
			set_bit(&iLocal_96, 2);
			func_426(1);
		}
	}
	else
	{
		func_213();
		func_211(84, func_24(), -1, "GBTER_BIG_BS", "GBTER_BIG", 1, -1, 2);
		set_bit(&(Local_108[participant_id_to_int() /*4*/].f_1), false);
	}
	set_bit(&iLocal_96, false);
}

void func_426(int iParam0)
{
	if (iParam0 && !func_214())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_427(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam3);
}

void func_428(int iParam0)
{
	Local_108[participant_id_to_int() /*4*/].f_2 = iParam0;
}

void func_429(int iParam0)
{
	if (iParam0)
	{
		if (!func_23(player_id(), 9))
		{
			if (func_355(player_id()) != 0)
			{
				func_192(9);
			}
		}
	}
	else if (func_23(player_id(), 9))
	{
		func_194(9);
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != iParam0)
	{
		func_442(-1);
		Global_1610316[player_id() /*174*/].f_10.f_28 = iParam0;
		if (func_441() != -1)
		{
			func_440(-1);
		}
		if (func_439() != -1)
		{
			func_438(-1);
		}
		func_436(iParam2);
		func_434(iParam0);
		if (!func_381(iParam0))
		{
			fVar0 = func_380(iParam0);
			if (fVar0 != 1f)
			{
				func_377(fVar0);
				set_bit(&(Global_1727391.f_3), true);
			}
		}
		if (!func_384(iParam0))
		{
			if (func_382(iParam0, iParam2))
			{
				set_max_wanted_level(false);
				set_player_wanted_level(player_id(), false, 0);
				set_player_wanted_level_now(player_id(), 0);
				set_bit(&(Global_1727391.f_3), false);
			}
			else if (get_max_wanted_level() < 5)
			{
				set_wanted_level_multiplier(1f);
				set_max_wanted_level(5);
			}
		}
		if (func_14())
		{
			func_192(27);
		}
		if (iParam1)
		{
			if (!func_191())
			{
				func_375(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((is_bit_set(Global_2460486.f_4414, true) || is_bit_set(Global_2460486.f_4414, 4)) || is_bit_set(Global_2460486.f_4414, false))
			{
				func_64(6);
			}
			func_433();
		}
		if (iParam0 == 164)
		{
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
		}
		if (func_274(player_id()) && func_22(player_id()))
		{
			set_bit(&(Global_1610316[player_id() /*174*/].f_1), 8);
		}
		func_431();
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_432();
	iVar2 = func_15(player_id());
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			if (func_34(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(player_id(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, player_id(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_432()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_8();
	if (iVar0 != func_7())
	{
		if (func_6(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return is_bit_set(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_433()
{
	if (is_bit_set(Global_2460486.f_4414, true))
	{
		clear_bit(&(Global_2460486.f_4414), true);
	}
	if (is_bit_set(Global_2460486.f_4414, 4))
	{
		clear_bit(&(Global_2460486.f_4414), 4);
	}
	if (is_bit_set(Global_2460486.f_4414, 6))
	{
		clear_bit(&(Global_2460486.f_4414), 6);
	}
	clear_bit(&(Global_2460486.f_4414), false);
	clear_bit(&(Global_2460486.f_4414), 2);
	Global_1587523[player_id() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		set_max_wanted_level(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_121(3351, -1, 0);
	iVar1 = func_435(iParam0);
	if (iVar1 != -1)
	{
		set_bit(&iVar0, iVar1);
		func_112(3351, iVar0, -1, 1);
	}
}

int func_435(int iParam0)
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

void func_436(int iParam0)
{
	func_437(player_id(), iParam0);
}

void func_437(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_438(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

var func_439()
{
	return Global_2460486.f_4660.f_138;
}

void func_440(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

var func_441()
{
	return Global_2460486.f_4660.f_137;
}

void func_442(int iParam0)
{
	Global_1610316[player_id() /*174*/].f_10.f_27 = iParam0;
}

var func_443()
{
	return Local_108[participant_id_to_int() /*4*/].f_2;
}

bool func_444()
{
	if (func_445(151) || func_191())
	{
		return true;
	}
	return false;
}

bool func_445(int iParam0)
{
	if (!func_152() && !func_16(player_id(), 1))
	{
		if (!func_22(player_id()))
		{
			if (func_191())
			{
				return true;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return false;
}

void func_446(int iParam0, int iParam1)
{
	Local_108[iParam0 /*4*/] = iParam1;
}

bool func_447()
{
	return true;
}

var func_448()
{
	return Local_98;
}

var func_449(int iParam0)
{
	return Local_108[iParam0 /*4*/];
}

bool func_450()
{
	int iVar0;
	
	func_455(&iVar0);
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
	if (func_454())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_453())
	{
		return true;
	}
	if (func_452(157))
	{
		if (!func_451())
		{
			return true;
		}
	}
	if (func_452(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_378() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_378()) == 0)
		{
			return true;
		}
	}
	return false;
}

var func_451()
{
	return Global_2434762.f_574;
}

bool func_452(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

var func_453()
{
	return Global_2443085;
}

var func_454()
{
	return Global_2434762.f_569;
}

void func_455(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
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
					func_456(iVar0);
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

void func_456(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_457(iVar4, &iVar5))
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

bool func_457(int iParam0, var uParam1)
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

void func_458()
{
	wait(0);
}

void func_459()
{
	func_215();
	func_404(func_24(), 1f, 1);
	func_32(func_33(func_24()), 0);
	func_460(1);
	terminate_this_thread();
}

void func_460(int iParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 167 || Global_1610316[player_id() /*174*/].f_10.f_28 == 168)
	{
		func_474();
		clear_bit(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 164)
	{
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[player_id() /*174*/].f_10.f_28 = -1;
		if (!is_bit_set(Global_1573883.f_1, 14) && !func_274(player_id()))
		{
			func_375(0);
		}
	}
	else if (func_472(player_id()) != -1)
	{
		func_442(-1);
	}
	func_436(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_469(iVar0);
		iVar0++;
	}
	if (is_bit_set(Global_1727391.f_3, false))
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		clear_bit(&(Global_1727391.f_3), false);
	}
	if (func_302(func_468()))
	{
		func_467(-1);
	}
	else if (func_466(func_468()))
	{
	}
	else
	{
		func_462(-1, 1);
	}
	func_194(19);
	func_194(20);
	func_194(21);
	func_194(22);
	func_194(27);
	func_361(3);
	func_361(4);
	func_361(7);
	func_461();
	if (func_22(player_id()))
	{
		func_429(0);
	}
	func_194(29);
	Global_1610316[player_id() /*174*/].f_10.f_51 = func_7();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (iParam0)
	{
		func_362();
	}
	if (!func_274(player_id()))
	{
		func_373();
		clear_bit(&(Global_1727391.f_3), true);
	}
}

void func_461()
{
	if (func_388(player_id()))
	{
		func_194(25);
	}
}

void func_462(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_468();
	}
	if (iParam0 > 0)
	{
		if (func_8() != func_7())
		{
			if (func_465(player_id()) == player_id())
			{
				Global_2459488.f_35[func_464(iParam0)] = 1;
			}
		}
		uVar0 = func_464(159);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(157);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(148);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(164);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(142);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(152);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(166);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(170);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(173);
		if (func_463(uVar0, Global_262145.f_10545, iParam1))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_463(var uParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if ((!func_23(player_id(), 19) && !func_23(player_id(), 20)) && !func_23(player_id(), 9))
		{
			return false;
		}
	}
	if (Global_2459488.f_35[uParam0] == 1 && func_250(&(Global_2459488[uParam0 /*2*/])))
	{
		if (func_424(&(Global_2459488[uParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[uParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_464(int iParam0)
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

var func_465(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

bool func_466(int iParam0)
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

void func_467(int iParam0)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_468();
	}
	if (iParam0 > 0)
	{
		if (func_8() != func_7())
		{
			Global_2459488.f_35[func_464(iParam0)] = 1;
		}
		uVar0 = func_464(155);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(163);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(160);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(153);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(162);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(154);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(171);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_464(172);
		if (func_463(uVar0, Global_262145.f_10546, 0))
		{
			func_258(&(Global_2459488[uVar0 /*2*/]));
			func_4(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

int func_468()
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

void func_469(int iParam0)
{
	if (!func_470(Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/], func_471(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/] = {func_471()};
	}
	if (!func_470(Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/], func_471(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/] = {func_471()};
	}
}

int func_470(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_471()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_472(int iParam0)
{
	if (func_473(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

bool func_473(var uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_28 != -1))
	{
		return true;
	}
	return false;
}

void func_474()
{
	clear_bit(&(Global_2460486.f_1643), 28);
	clear_bit(&(Global_2460486.f_1643), 29);
	func_475(24);
}

void func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	clear_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

bool func_476(struct<20> Param0)
{
	func_485(func_486(Param0), Param0);
	reserve_network_mission_objects(0);
	func_482(0, -1, 0);
	network_register_host_broadcast_variables(&Local_98, 10);
	network_register_player_broadcast_variables(&Local_108, 129);
	set_this_script_can_be_paused(0);
	func_477(0, 0);
	return true;
}

void func_477(int iParam0, int iParam1)
{
	func_481();
	func_480();
	if ((iParam0 != 0 && network_is_player_active(iParam1)) && func_479(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				set_bit(&Global_1727386, false);
				break;
			}
	}
	if (!func_152() && !func_16(player_id(), 1))
	{
		if (func_197())
		{
			func_374(3);
		}
		func_374(4);
	}
	if (func_66(0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_51 = func_8();
	}
	func_478();
}

void func_478()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_7();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_479(int iParam0, int iParam1)
{
	return func_34(player_id(), iParam0, iParam1);
}

void func_480()
{
	func_475(33);
	func_475(34);
	func_475(35);
	func_475(36);
	func_475(37);
	func_475(38);
	func_475(39);
	func_475(40);
	func_475(43);
	func_475(41);
	func_475(54);
	func_475(42);
	func_475(47);
}

void func_481()
{
	struct<14> Var0;
	
	Global_1727400 = {Var0};
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

bool func_482(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_484();
			}
			else
			{
				return false;
			}
		}
		if (!func_483())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_484();
					}
					else
					{
						return false;
					}
				}
				if (func_454())
				{
					if (!iParam2)
					{
						func_484();
					}
					else
					{
						return false;
					}
				}
				if (func_452(155))
				{
					if (!iParam2)
					{
						func_484();
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
					func_484();
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
				func_484();
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
			func_484();
		}
		else
		{
			return false;
		}
	}
	return true;
}

var func_483()
{
	return Global_1315888;
}

void func_484()
{
	terminate_this_thread();
}

void func_485(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_484();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_486(int iParam0)
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

