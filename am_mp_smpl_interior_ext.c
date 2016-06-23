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
	auto uLocal_96 = 0;
	Vector3[] vLocal_97 = new Vector3[32];
	struct<91> Local_194 = 0;
	struct<5> Local_285 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 0;
	auto uLocal_292 = 0;
	auto uLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 3;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 0;
	auto uLocal_307 = 0;
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
	if (network_is_game_in_progress())
	{
		func_379(&uLocal_305);
	}
	else
	{
		func_372();
	}
	while (true)
	{
		func_371();
		if (func_362())
		{
			func_372();
		}
		func_24();
		func_2();
		if (network_is_host_of_this_script())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_285.f_2;
	if (network_is_participant_active(int_to_participantindex(iVar0)))
	{
		iVar1 = network_get_player_index(int_to_participantindex(iVar0));
		if (iVar1 != func_23() && player_id() != iVar1)
		{
			iVar2 = get_player_ped(iVar1);
			if (func_22(iVar1, 1, 1))
			{
				func_4(iVar0, iVar1, iVar2);
				func_3(iVar0, iVar1, iVar2);
			}
		}
	}
	Local_285.f_2 += 1 % _network_get_num_participants_host();
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
}

void func_4(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = false;
	if (func_21(iParam1))
	{
		if (func_20(iParam1))
		{
			iVar0 = true;
		}
	}
	if (func_19(iParam1) && !iVar0)
	{
		func_18(iParam1);
	}
	if (iVar0)
	{
		if (func_17(0))
		{
			func_8(iParam1);
		}
	}
	if (func_7(iParam1))
	{
		if (func_6(iParam1))
		{
			if (!func_17(0))
			{
				func_5(iParam1);
			}
		}
	}
}

void func_5(int iParam0)
{
	clear_bit(&(vLocal_97[player_id() /*3*/].f_1), iParam0);
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = is_bit_set(vLocal_97[iParam0 /*3*/].f_2, player_id());
	return iVar0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = is_bit_set(vLocal_97[player_id() /*3*/].f_1, iParam0);
	return iVar0;
}

void func_8(int iParam0)
{
	if (!func_14(player_id(), Local_194))
	{
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	if (!func_17(0))
	{
		return;
	}
	if (!func_13())
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	Local_285.f_3 = iParam0;
	func_11(&(Local_285.f_4), 0, 0);
	func_10(4);
	func_9(iParam0);
}

void func_9(int iParam0)
{
	set_bit(&(vLocal_97[player_id() /*3*/].f_2), iParam0);
}

void func_10(int iParam0)
{
	if (Local_285 != iParam0)
	{
		Local_285 = iParam0;
	}
}

void func_11(auto uParam0, int iParam1, int iParam2)
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

bool func_12()
{
	return true;
}

bool func_13()
{
	int iVar0;
	
	if (!func_22(player_id(), 1, 1))
	{
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		return false;
	}
	iVar0 = get_player_ped(player_id());
	if (get_is_task_active(iVar0, 2))
	{
		return false;
	}
	if (is_ped_getting_into_a_vehicle(iVar0))
	{
		return false;
	}
	if (get_script_task_status(iVar0, -1794415470) == 1 || get_script_task_status(iVar0, -1794415470) == 0)
	{
		return false;
	}
	return true;
}

int func_14(int iParam0, int iParam1)
{
	switch (func_16(iParam1))
	{
		case 0:
			return func_15(iParam0, iParam1);
			break;
	}
	return 0;
}

bool func_15(auto uParam0, int iParam1)
{
	return false;
}

int func_16(int iParam0)
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

int func_17(int iParam0)
{
	return Local_285 == iParam0;
}

void func_18(int iParam0)
{
	clear_bit(&(vLocal_97[player_id() /*3*/].f_2), iParam0);
}

int func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = is_bit_set(vLocal_97[player_id() /*3*/].f_2, iParam0);
	return iVar0;
}

int func_20(auto uParam0)
{
	int iVar0;
	
	iVar0 = is_bit_set(vLocal_97[uParam0 /*3*/].f_1, player_id());
	return iVar0;
}

int func_21(auto uParam0)
{
	int iVar0;
	
	iVar0 = vLocal_97[uParam0 /*3*/].f_1 > 0;
	return iVar0;
}

bool func_22(int iParam0, int iParam1, int iParam2)
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

int func_23()
{
	return -1;
}

void func_24()
{
	func_357(&(Local_194.f_4.f_6));
	func_355(&(Local_194.f_4), Local_194);
	func_351();
	func_272(Local_194, Local_194.f_1);
	func_271();
	func_270();
	func_265();
	if (func_17(0))
	{
		func_252();
	}
	else if (func_17(4))
	{
		func_251();
	}
	else if (func_17(5))
	{
		func_250();
	}
	else if (func_17(2))
	{
		func_248();
	}
	else if (func_17(1))
	{
		func_227();
	}
	else if (func_17(3))
	{
		func_223();
	}
	else if (func_17(6))
	{
		func_150();
	}
	else if (func_17(7))
	{
		func_104();
	}
	else if (func_17(8))
	{
		func_103();
	}
	else if (func_17(9))
	{
		func_25();
	}
}

void func_25()
{
	if (func_74(1))
	{
		if (func_40(Local_194))
		{
			if (func_33(player_id(), Local_194))
			{
				func_28();
			}
		}
	}
	if (!func_27())
	{
		func_26(func_12());
		func_10(0);
	}
}

void func_26(int iParam0)
{
	if (iParam0)
	{
		set_bit(&(vLocal_97[player_id() /*3*/]), true);
	}
	else
	{
		clear_bit(&(vLocal_97[player_id() /*3*/]), true);
	}
}

int func_27()
{
	int iVar0;
	
	iVar0 = _get_number_of_instances_of_streamed_script(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || network_is_script_active("AM_MP_SMPL_INTERIOR_INT", Global_1728515.f_121, 1, 0));
}

void func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (func_32() == 0)
	{
		func_29(Local_194, &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xE82728F0DE75D13A(1, Local_194.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 0.75f, 0.75f, 0.75f, iVar0, iVar1, iVar2, 255, 0, 0, 2, 0, 0, 0, 0, 0);
	}
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4)
{
	switch (func_16(iParam0))
	{
		case 0:
			func_30(iParam0, iParam1, iParam2, iParam3, uParam4);
			break;
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4)
{
	int iVar0;
	
	iVar0 = func_31(iParam0) - 1;
	if ((iVar0 > -1 && iVar0 < 32) && is_bit_set(Global_1728639.f_24, iVar0))
	{
		get_hud_colour(Global_1728639.f_1[iVar0], iParam1, iParam2, iParam3, uParam4);
		return;
	}
	get_hud_colour(9, iParam1, iParam2, iParam3, uParam4);
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

auto func_32()
{
	return Global_1312466.f_19;
}

int func_33(int iParam0, int iParam1)
{
	switch (func_16(iParam1))
	{
		case 0:
			return func_34(iParam0, iParam1);
			break;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	if (Global_262145.f_12738)
	{
		return 0;
	}
	if (func_38(iParam0, 1))
	{
		return func_35(func_37(iParam0), func_31(iParam1));
	}
	else if (func_35(iParam0, func_31(iParam1)))
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_36(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/] == iParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_36(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_37(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_23();
}

int func_38(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_39(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_23();
}

int func_39(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_23())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

bool func_40(int iParam0)
{
	switch (func_16(iParam0))
	{
		case 0:
			if (!func_59(iParam0))
			{
				return false;
			}
			break;
	}
	if ((((((((func_58() || func_57(8, -1)) || func_56()) || func_55()) || _0x2EAC52B4019E2782()) || _0x2F057596F2BD0061()) || func_54()) || func_43()) || !is_player_control_on(player_id()))
	{
		return false;
	}
	if (func_41(iParam0))
	{
		return false;
	}
	return true;
}

int func_41(int iParam0)
{
	switch (func_16(iParam0))
	{
		case 0:
			return func_42(iParam0);
			break;
	}
	return false;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	if (func_36(iVar0))
	{
		iVar1 = iVar0 - 1;
		return is_bit_set(Global_1728639.f_25, iVar1);
	}
	return false;
}

bool func_43()
{
	if (((((((((func_53() || func_52()) || func_51()) || func_50()) || (func_49() && !network_is_activity_session())) || (func_46() && !func_45())) || Global_2394645) || Global_2394645.f_1 != 0) || Global_2394718 != 0) || (func_44() == 2 && !network_is_activity_session()))
	{
		return true;
	}
	return false;
}

auto func_44()
{
	return Global_978143;
}

int func_45()
{
	return is_bit_set(Global_2434762.f_2, 27);
}

int func_46()
{
	if (func_48() || func_47())
	{
		return Global_1587523[player_id() /*444*/].f_87 == 8;
	}
	return false;
}

auto func_47()
{
	return Global_2434762.f_610;
}

int func_48()
{
	return is_bit_set(Global_2434762.f_2, 11);
}

int func_49()
{
	return is_bit_set(Global_2434762, 5);
}

int func_50()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_51()
{
	return is_bit_set(Global_2434762, 2);
}

int func_52()
{
	return is_bit_set(Global_2434762, 20);
}

auto func_53()
{
	return Global_2434762.f_574;
}

bool func_54()
{
	if (Global_2428492.f_648.f_5 == -1)
	{
		return false;
	}
	return true;
}

auto func_55()
{
	return Global_68058;
}

int func_56()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

int func_57(int iParam0, int iParam1)
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

int func_58()
{
	return get_pause_menu_state() != 0;
}

bool func_59(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_12738)
	{
		return false;
	}
	if (!func_72(player_id()) && Global_1572925)
	{
		return false;
	}
	if (func_71(player_id(), 0))
	{
		if (func_70(player_id()) == 168 && !is_bit_set(Global_1727391.f_3, 4))
		{
			return false;
		}
		else if (func_70(player_id()) == 167)
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				return false;
			}
		}
	}
	if (network_is_activity_session())
	{
		return false;
	}
	iVar0 = false;
	if (func_60(iVar0, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_60(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572926 != 0)
	{
		if (!iParam2)
		{
			if (iParam0)
			{
			}
			return true;
		}
		else
		{
			iVar0 = Global_1572926;
			clear_bit(&iVar0, 4);
			if (iVar0 > 0)
			{
				if (iParam0)
				{
				}
				return true;
			}
		}
	}
	if (func_66(player_id()) && !func_64())
	{
		return true;
	}
	if (func_63(player_id(), 21))
	{
		return true;
	}
	if (iParam1)
	{
		if (Global_1587523[player_id() /*444*/] == 9)
		{
			if (iParam0)
			{
			}
			return true;
		}
		if (Global_262145.f_12733)
		{
			if (iParam0)
			{
			}
			return true;
		}
		if (func_62(player_id()) || func_61(player_id()))
		{
			if (iParam0)
			{
			}
			return true;
		}
	}
	return false;
}

int func_61(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_62(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_63(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_64()
{
	return func_65(player_id());
}

bool func_65(int iParam0)
{
	if (func_70(iParam0) == 167 || func_70(iParam0) == 168)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	if (func_69(iParam0))
	{
		return true;
	}
	if (func_67(iParam0))
	{
		return true;
	}
	return false;
}

int func_67(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return func_68(uParam0, 9);
	}
	return false;
}

int func_68(auto uParam0, int iParam1)
{
	return is_bit_set(Global_1610316[uParam0 /*174*/].f_10.f_4, iParam1);
}

int func_69(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_70(int iParam0)
{
	if (func_71(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_71(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_72(int iParam0)
{
	return func_73(func_70(iParam0));
}

bool func_73(int iParam0)
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

bool func_74(int iParam0)
{
	if (!func_93(60, 0, 0) && !iParam0)
	{
		return false;
	}
	if (func_92(player_id()))
	{
		return false;
	}
	if (func_91(player_id()))
	{
		return false;
	}
	if (func_90(player_id()))
	{
		return false;
	}
	if (func_89())
	{
		return false;
	}
	if (func_88())
	{
		return false;
	}
	if (Global_1587523[player_id() /*444*/] == 1 || Global_1587523[player_id() /*444*/] == 3)
	{
		return false;
	}
	if (Global_1587523[player_id() /*444*/] == 32)
	{
		return false;
	}
	if (func_86(player_id(), 101))
	{
		return true;
	}
	if (func_83(player_id(), 1))
	{
		return false;
	}
	if (func_82())
	{
		return false;
	}
	if (func_81())
	{
		return false;
	}
	if (Global_1573871)
	{
		return false;
	}
	if (func_80())
	{
		return false;
	}
	if (func_75(player_id()))
	{
		return false;
	}
	return true;
}

bool func_75(int iParam0)
{
	if (func_77(iParam0, 0))
	{
		return true;
	}
	if (func_76())
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

int func_76()
{
	return is_bit_set(Global_2359301, 3);
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_78(-1, 0) == 8;
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

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

auto func_79()
{
	return Global_1312747;
}

auto func_80()
{
	return Global_1315888;
}

int func_81()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_82()
{
	auto uVar0;
	
	uVar0 = Global_2428492;
	if (is_bit_set(Global_1609227[uVar0 /*34*/].f_12, false) && Global_1609227[uVar0 /*34*/].f_21 == 2)
	{
		return true;
	}
	return false;
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_84(iParam0))
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

int func_84(auto uParam0)
{
	return func_85(uParam0);
}

int func_85(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_86(int iParam0, int iParam1)
{
	return iParam1 == func_87(iParam0);
}

int func_87(int iParam0)
{
	if (func_22(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_88()
{
	return Global_1587523[player_id() /*444*/] == 148;
}

int func_89()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_90(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_91(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 6;
}

int func_92(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

int func_93(int iParam0, int iParam1, int iParam2)
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
		if (func_98(player_id(), 85))
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
	if (func_97() || func_96())
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
			if (func_94())
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
	return is_bit_set(Global_1573873[iVar1], iVar0);
}

bool func_94()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return true;
	}
	if (is_bit_set(Global_2460486.f_1638, 23))
	{
		return true;
	}
	if (func_97())
	{
		return true;
	}
	if (func_96())
	{
		return true;
	}
	iVar0 = Global_1347750[func_95(-1)];
	if (is_bit_set(iVar0, 7))
	{
		set_bit(&(Global_2460486.f_1638), 23);
		return true;
	}
	return false;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

auto func_96()
{
	return Global_1315901;
}

auto func_97()
{
	return Global_1315903;
}

int func_98(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	if (!func_101())
	{
		return false;
	}
	if (func_100())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	uVar0 = func_99(iParam1);
	iVar1 = uVar0;
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_345, iVar1);
}

int func_99(int iParam0)
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

int func_100()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_135, 3);
}

int func_101()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	return func_102(120, -1);
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_95(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_103()
{
	if (func_27())
	{
		func_10(9);
	}
}

void func_104()
{
	int iVar0;
	
	iVar0 = false;
	if (Local_285.f_3 > -1)
	{
		_set_warning_message_3("PROP_HEI_WARNc", "PROP_HEI_WARN", 134217728, "", 0, -1, 1, get_player_name(Local_285.f_3), 0, 1);
		if (func_149(&(Local_285.f_4), 4000, 0))
		{
			iVar0 = true;
			func_148(&(Local_285.f_4));
		}
	}
	else
	{
		iVar0 = is_screen_faded_out();
		if (is_screen_faded_out() && !is_bit_set(Local_194.f_4.f_6, false))
		{
			if (!is_string_null_or_empty(Local_194.f_4.f_6.f_53) && !is_string_null_or_empty(Local_194.f_4.f_6.f_54))
			{
				play_sound_frontend(-1, Local_194.f_4.f_6.f_53, Local_194.f_4.f_6.f_54, 1);
			}
			set_bit(&(Local_194.f_4.f_6), false);
		}
	}
	if (is_screen_faded_out() && !func_147())
	{
		func_146(1, Local_194);
	}
	if (!_0x422F32CC7E56ABAD(player_ped_id()) && iVar0)
	{
		func_145(1);
		if (func_144(&(Local_194.f_4.f_6)))
		{
			func_113(&(Local_194.f_4.f_6), 0);
		}
		func_106();
		func_105();
		func_10(8);
	}
}

void func_105()
{
	Global_1728515.f_11 = 1;
}

void func_106()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		func_107(int_to_playerindex(iVar0));
		iVar0++;
	}
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (iParam0 == player_id() || !func_22(iParam0, 0, 1))
	{
		return;
	}
	if ((func_111(iParam0, 0, 1) || func_110(iParam0, 0)) || func_109(iParam0))
	{
		return;
	}
	if (func_108(player_id()) && Global_2418472[player_id() /*313*/].f_305.f_2 > -1)
	{
		if (func_108(iParam0) && Global_2418472[iParam0 /*313*/].f_305.f_2 > -1)
		{
			if (Global_2418472[player_id() /*313*/].f_305.f_2 != Global_2418472[iParam0 /*313*/].f_305.f_2)
			{
				iVar0 = true;
			}
		}
		else
		{
			iVar0 = true;
		}
	}
	else if (func_108(iParam0) && Global_2418472[iParam0 /*313*/].f_305.f_2 > -1)
	{
		iVar0 = true;
	}
	if (iVar0)
	{
		if (!_0x919B3C98ED8292F9(iParam0))
		{
			_0xBBDF066252829606(iParam0, true);
		}
	}
	else if (_0x919B3C98ED8292F9(iParam0))
	{
		_0xBBDF066252829606(iParam0, false);
	}
}

int func_108(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_22(iParam0, 1, 1))
		{
			return Global_2418472[iParam0 /*313*/].f_305.f_1 != -1;
		}
	}
	return false;
}

bool func_109(int iParam0)
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

bool func_110(int iParam0, int iParam1)
{
	if (func_111(iParam0, iParam1, 0))
	{
		if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 3))
		{
			return true;
		}
	}
	return false;
}

bool func_111(int iParam0, int iParam1, int iParam2)
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
		if (func_112(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_112(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_16(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

void func_113(auto uParam0, int iParam1)
{
	if ((func_143(5, uParam0) || func_143(6, uParam0)) || iParam1)
	{
		if (is_synchronized_scene_running(*uParam0.f_13))
		{
			detach_synchronized_scene(*uParam0.f_13);
		}
		if (does_entity_exist(*uParam0.f_2))
		{
			delete_ped(uParam0.f_2);
		}
		render_script_cams(false, false, 3000, 1, 0, 0);
		destroy_cam(*uParam0.f_5, 0);
		func_115(1, 0);
		if (iParam1)
		{
			func_114(7, uParam0);
		}
		else
		{
			func_114(3, uParam0);
		}
		Global_1728515.f_10 = 0;
	}
}

void func_114(int iParam0, auto uParam1)
{
	if (iParam0 != *uParam1.f_1)
	{
		*uParam1.f_1 = iParam0;
	}
}

void func_115(int iParam0, int iParam1)
{
	func_141();
	if (iParam0)
	{
		func_139(1);
		clear_help(1);
	}
	clear_prints();
	func_133();
	set_particle_fx_cam_inside_vehicle(0);
	func_129(0, 1, 1, 0);
	func_128();
	func_127(12, 0, -1);
	func_126(1);
	set_widescreen_borders(false, -1);
	display_radar(true);
	display_hud(true);
	func_125();
	set_user_radio_control_enabled(1);
	if (network_is_game_in_progress())
	{
		if (network_is_in_mp_cutscene())
		{
			network_set_in_mp_cutscene(0, 0);
		}
	}
	func_124(0);
	if (((func_123() == 0 && func_122() == 0) && iParam1) && !func_75(player_id()))
	{
		func_116(player_id(), 1, 0);
	}
	Global_2428492.f_3169 = 0;
}

void func_116(int iParam0, int iParam1, int iParam2)
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam1)
	{
		if (_get_no_loading_screen())
		{
			set_no_loading_screen(0);
		}
	}
	if (!network_is_game_in_progress())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, iParam1, iVar0);
	}
	else
	{
		iVar1 = iParam2 & 2 != false;
		iVar2 = iParam2 & 4 != false;
		iVar3 = iParam2 & 8 != false;
		iVar4 = iParam2 & 16 != false;
		iVar5 = iParam2 & 32 != false;
		iVar6 = iParam2 & 64 != false;
		iVar7 = iParam2 & 128 != false;
		iVar8 = iParam2 & 256 != false;
		iVar9 = iParam2 & 512 != false;
		iVar10 = iParam2 & 1024 != false;
		iVar11 = iParam2 & 2048 != false;
		iVar12 = iParam2 & 4096 != false;
		iVar13 = iParam2 & 8192 != false;
		iVar14 = iParam2 & 16384 != false;
		iVar15 = iParam2 & 32768 != false;
		iVar16 = iParam2 & 65536 != false;
		iVar17 = iParam2 & 131072 != false;
		iVar18 = iParam2 & 262144 != false;
		iVar19 = iParam2 & 524288 != false;
		iVar20 = iParam2 & 1048576 != false;
		iVar21 = iParam2 & 2097152 != false;
		iVar22 = iParam2 & 4194304 != false;
		iVar23 = iParam2 & 8388608 != false;
		if (!func_120())
		{
			iVar24 = false;
			if (iParam1 == 1)
			{
				iVar24 = true;
			}
			if (iVar15 == 0 && !iVar20)
			{
				iVar24 = true;
			}
			if (iVar9 == 1)
			{
				iVar24 = true;
			}
			if (iVar24)
			{
				return;
			}
		}
		if (iVar17)
		{
		}
		if (network_is_player_active(iParam0) && is_player_playing(iParam0))
		{
			iVar25 = get_player_ped(iParam0);
			if (!iVar19)
			{
				if ((iVar18 && iParam1 == 0) && network_is_game_in_progress())
				{
					fade_out_local_player(1);
				}
				else
				{
					set_entity_visible(iVar25, !iVar13, 0);
				}
				if (!iVar13)
				{
					if (network_is_game_in_progress() && !iVar18)
					{
						fade_out_local_player(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (iParam1)
			{
				if (!func_119(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, true, 0);
					}
				}
				if (!is_entity_attached(iVar25))
				{
					if (!iVar20)
					{
						freeze_entity_position(iVar25, false);
					}
					_0x3910051CCECDB00C(iVar25, true);
				}
				else if (!iVar20)
				{
					freeze_entity_position(iVar25, false);
				}
				set_ped_can_be_targetted(iVar25, true);
				set_player_invincible(iParam0, 0);
				_0x4668D80430D6C299(iVar25);
				set_ped_can_ragdoll(iVar25, 1);
				func_118();
				func_117();
				if (is_player_teleport_active())
				{
					if (!iVar22)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!iVar23)
				{
					iVar2 = true;
				}
			}
			else
			{
				if (!func_119(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, !iVar14, 0);
					}
					if (!is_entity_attached(iVar25))
					{
						if (!iVar20)
						{
							freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15)
						{
							_0x3910051CCECDB00C(iVar25, true);
						}
					}
				}
				if (iVar9)
				{
					set_player_invincible(iParam0, 0);
				}
				else
				{
					set_player_invincible(iParam0, 1);
				}
				set_ped_can_be_targetted(iVar25, iVar16);
				if (iVar2)
				{
					if (!is_ped_fatally_injured(iVar25) && !is_ped_in_any_vehicle(iVar25, 0))
					{
						clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (iVar1)
			{
				iVar26 |= 2;
			}
			if (iVar2)
			{
				iVar26 |= 4;
			}
			if (iVar3)
			{
				iVar26 |= 8;
			}
			if (iVar4)
			{
				iVar26 |= 16;
			}
			if (iVar5)
			{
				iVar26 |= 32;
			}
			if (iVar6)
			{
				iVar26 |= 64;
			}
			if (iVar7)
			{
				iVar26 |= 128;
			}
			if (iVar8)
			{
				iVar26 |= 256;
			}
			if (iVar9)
			{
				iVar26 |= 512;
			}
			if (iVar10)
			{
				iVar26 |= 1024;
			}
			if (iVar11)
			{
				iVar26 |= 2048;
			}
			if (iVar12)
			{
				iVar26 |= 4096;
			}
			set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

void func_117()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_118()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_119(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_120()
{
	if (func_121() == 0)
	{
		return true;
	}
	return false;
}

auto func_121()
{
	return Global_1312466.f_18;
}

int func_122()
{
	return is_bit_set(Global_2434762, 7);
}

auto func_123()
{
	return Global_1315913;
}

void func_124(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

void func_125()
{
	Global_17118.f_5 = 0;
}

void func_126(int iParam0)
{
	Global_2460486.f_4390 = iParam0;
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1338622.f_137[iParam2] = iParam1;
			}
			break;
		
		default:
			if (iParam1)
			{
				set_bit(&(Global_1338622.f_947), iParam0);
			}
			else
			{
				clear_bit(&(Global_1338622.f_947), iParam0);
			}
			break;
	}
}

void func_128()
{
	func_126(1);
	func_127(4, 0, -1);
	func_127(6, 0, -1);
	func_127(7, 0, -1);
	func_127(3, 0, -1);
	func_127(1, 0, -1);
	func_127(2, 0, -1);
	func_127(11, 0, -1);
	func_127(13, 0, -1);
	func_127(14, 0, -1);
	func_127(16, 0, -1);
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_124(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_132())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_131(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_124(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_131(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_75(player_id())) && !func_77(player_id(), 0)) && !func_130())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_75(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_130()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_131(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_132()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_133()
{
	func_134(0);
}

void func_134(int iParam0)
{
	if (iParam0)
	{
		func_138();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_137(0))
		{
			func_135(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_135(int iParam0)
{
	if (Global_14571)
	{
		func_136(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_132())
	{
		Global_14413.f_1 = 3;
	}
}

void func_136(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_137(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_137(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_138()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_99808)
	{
		clear_floating_help(iVar0, iParam0);
		func_140(iVar0);
		iVar0++;
	}
}

void func_140(int iParam0)
{
	Global_99808[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99808[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99808[iParam0 /*28*/].f_4), "", 64);
	Global_99808[iParam0 /*28*/].f_23 = 0;
	Global_99808[iParam0 /*28*/].f_24 = {0f, 0f, 0f};
	Global_99808[iParam0 /*28*/].f_27 = 0;
	Global_99808[iParam0 /*28*/].f_20 = 0;
	Global_99808[iParam0 /*28*/].f_22 = 0;
}

void func_141()
{
	if (!Global_1312569)
	{
		return;
	}
	func_142();
}

void func_142()
{
	Global_1312569 = 0;
	StringCopy(&(Global_1312569.f_1), "", 24);
	Global_1312569.f_7 = 0;
}

int func_143(int iParam0, auto uParam1)
{
	return *uParam1.f_1 == iParam0;
}

int func_144(auto uParam0)
{
	return !is_string_null_or_empty(*uParam0.f_3);
}

void func_145(int iParam0)
{
	if (!iParam0)
	{
		func_11(&Global_2467233, 1, 0);
	}
	else
	{
		func_148(&Global_2467233);
	}
}

void func_146(int iParam0, auto uParam1)
{
	if (iParam0)
	{
		Global_1728515.f_1 = uParam1;
		Global_2418472[player_id() /*313*/].f_305.f_1 = uParam1;
	}
	else
	{
		Global_1728515.f_1 = -1;
		Global_2418472[player_id() /*313*/].f_305.f_1 = -1;
		Global_1728515.f_2 = 0;
		Global_2418472[player_id() /*313*/].f_305.f_3 = 0;
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), false);
	}
}

int func_147()
{
	return Global_1728515.f_1 != -1;
}

void func_148(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_149(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_11(uParam0, iParam2, 0);
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

void func_150()
{
	func_165(&uLocal_291);
	if (func_164(0, &uLocal_291))
	{
		do_screen_fade_out(322);
		func_160(&uLocal_291);
		func_10(7);
	}
	else if (func_164(1, &uLocal_291))
	{
		func_152();
		do_screen_fade_out(322);
		func_160(&uLocal_291);
		func_10(7);
	}
	else if (func_151(&uLocal_291))
	{
		func_160(&uLocal_291);
	}
}

int func_151(auto uParam0)
{
	return is_bit_set(*uParam0.f_2, 2);
}

void func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_158(player_id(), Local_194))
	{
		return;
	}
	if (vLocal_97[player_id() /*3*/].f_1 > 0)
	{
		return;
	}
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar1 = false;
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar0));
			if (player_id() != iVar2 && iVar2 != func_23())
			{
				if (func_22(iVar2, 1, 1))
				{
					if (func_14(iVar2, Local_194))
					{
						if (func_157(iVar2) && func_156(iVar2))
						{
							if (get_distance_between_coords(func_155(iVar2), Local_194.f_1, 1) < IntToFloat(func_154(Local_194)))
							{
								iVar1 = true;
							}
						}
					}
				}
			}
			if (iVar1)
			{
				func_153(iVar2);
			}
			else
			{
				func_5(iVar2);
			}
		}
		iVar0++;
	}
}

void func_153(int iParam0)
{
	set_bit(&(vLocal_97[player_id() /*3*/].f_1), iParam0);
}

int func_154(auto uParam0)
{
	return 20;
}

Vector3 func_155(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

int func_156(int iParam0)
{
	return is_bit_set(vLocal_97[iParam0 /*3*/], true);
}

int func_157(int iParam0)
{
	return is_bit_set(vLocal_97[iParam0 /*3*/], false);
}

int func_158(int iParam0, int iParam1)
{
	switch (func_16(iParam1))
	{
		case 0:
			return func_159(iParam0, iParam1);
			break;
	}
	return 0;
}

bool func_159(auto uParam0, int iParam1)
{
	return false;
}

void func_160(auto uParam0)
{
	func_161(1, -1);
	*uParam0.f_2 = 0;
	*uParam0.f_1 = 0;
	*uParam0 = 0;
}

void func_161(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (!func_163(&uVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7862)
	{
		reset_hud_component_values(15);
		Global_17257.f_7862 = 0;
	}
	_0x55598D21339CB998(0f);
	if (Global_17257.f_5498[uVar0])
	{
		clear_additional_text(9, false);
		Global_17257.f_5498[uVar0] = 0;
	}
	if (Global_17257.f_5484[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17257.f_5484[uVar0] = 0;
	}
	if (Global_17257.f_5491[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17257.f_5491[uVar0] = 0;
	}
	if (iParam0)
	{
		func_162(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_162(int iParam0)
{
	if (*iParam0.f_9 != 0)
	{
		if (has_scaleform_movie_loaded(*iParam0))
		{
			set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam0 = 0;
		*iParam0.f_9 = 0;
	}
}

bool func_163(auto uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (network_is_game_in_progress() && network_get_this_script_is_network_script())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return true;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return true;
		}
	}
	return false;
}

int func_164(int iParam0, auto uParam1)
{
	if (is_bit_set(*uParam1.f_2, true))
	{
		return *uParam1.f_4 == iParam0;
	}
	return false;
}

void func_165(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0.f_1 == *uParam0)
	{
		if (*uParam0.f_1 == 1)
		{
			iVar0 = false;
			func_213(uParam0, &iVar0);
			hide_hud_and_radar_this_frame();
			func_193(1, -1, 1, 0, 1, -1082130432, 0, 0);
			if (!is_bit_set(*uParam0.f_2, 3))
			{
				return;
			}
			if ((is_control_pressed(2, 201) || is_bit_set(iVar0, false)) || is_disabled_control_just_pressed(2, 201))
			{
				set_bit(uParam0.f_2, true);
				clear_bit(uParam0.f_2, 3);
			}
			else if (is_control_pressed(2, 202) || is_bit_set(iVar0, true))
			{
				set_bit(uParam0.f_2, 2);
				clear_bit(uParam0.f_2, 3);
			}
			else if (func_192(uParam0.f_12, uParam0.f_13, 1))
			{
				if (is_control_pressed(2, 188) || is_bit_set(iVar0, 2))
				{
					if (func_191(uParam0, *uParam0.f_4 - 1))
					{
						iVar1 = *uParam0.f_4 - 1;
						while (!func_190(uParam0, iVar1))
						{
							if (!func_191(uParam0, iVar1 - 1))
							{
								iVar1 = func_189(uParam0);
							}
							else
							{
								iVar1--;
							}
						}
					}
					else
					{
						iVar1 = func_189(uParam0);
					}
					if (iVar1 != *uParam0.f_4)
					{
						*uParam0.f_4 = iVar1;
						func_187(func_188(uParam0, *uParam0.f_4), 1, 1);
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
					}
				}
				else if (is_control_pressed(2, 187) || is_bit_set(iVar0, 3))
				{
					if (func_191(uParam0, *uParam0.f_4 + 1))
					{
						iVar2 = *uParam0.f_4 + 1;
						while (!func_190(uParam0, iVar2))
						{
							if (!func_191(uParam0, iVar2 + 1))
							{
								iVar2 = func_186(uParam0);
							}
							else
							{
								iVar2++;
							}
						}
					}
					else
					{
						iVar2 = func_186(uParam0);
					}
					if (iVar2 != *uParam0.f_4)
					{
						*uParam0.f_4 = iVar2;
						func_187(func_188(uParam0, *uParam0.f_4), 1, 1);
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
					}
				}
			}
		}
		return;
	}
	if (*uParam0 == 1)
	{
		if (!is_bit_set(*uParam0.f_2, false))
		{
			func_166(uParam0);
		}
		else
		{
			*uParam0.f_1 = 1;
		}
		return;
	}
	if (*uParam0 == 0)
	{
		if (is_bit_set(*uParam0.f_2, false))
		{
			func_160(uParam0);
		}
		else
		{
			*uParam0.f_1 = 0;
		}
		return;
	}
}

void func_166(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_184(0, -1, 0))
	{
		func_183(0);
		func_182(*uParam0.f_6);
		func_181(1, 2, 1, 1, 1);
		func_180(1, 1, 0, 0, 0);
		iVar2 = -1;
		iVar0 = false;
		while (iVar0 < *uParam0.f_5)
		{
			if (func_190(uParam0, iVar0))
			{
				if (iVar2 == -1)
				{
					iVar2 = iVar0;
				}
				if (iVar1 == 0)
				{
					func_168(iVar0, *uParam0.f_7[iVar0], 0, 1, 0, 0);
				}
				else
				{
					func_168(iVar0, *uParam0.f_7[iVar0], 0, 1, 0, 0);
				}
			}
			iVar0++;
		}
		if (iVar2 > -1)
		{
			*uParam0.f_4 = iVar2;
			func_187(iVar2, 1, 1);
		}
		func_167(201, "ITEM_SELECT", -1, 0);
		func_167(202, "ITEM_BACK", -1, 0);
		set_bit(uParam0.f_2, false);
		set_bit(uParam0.f_2, 3);
		if (*uParam0.f_11)
		{
			play_sound_frontend(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
		}
	}
}

void func_167(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	sVar0 = _get_control_action_name(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	if (!iParam3)
	{
		set_bit(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_168(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!is_string_null_or_empty(sParam1) && !does_text_label_exist(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!iParam3)
	{
		func_179(Global_17257.f_5088, 1);
	}
	else
	{
		func_179(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_176(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_170(26, 1, 0, &fVar2, &fVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (iParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_169(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	set_bit(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_169(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

bool func_170(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_175(iParam0);
	sVar1 = func_173(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_172())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_172())
			{
				fVar4 = 1f;
			}
			if (_get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
			{
				get_screen_resolution(&iVar2, &iVar3);
			}
			iVar2 = round(to_float(iVar2) / fVar4);
			iVar3 = round(to_float(iVar3) / fVar4);
		}
		else
		{
			get_screen_resolution(&iVar2, &iVar3);
		}
		vVar7 = {get_texture_resolution(sVar0, sVar1)};
		vVar7.x *= func_171(iParam0) / fVar4;
		vVar7.y *= func_171(iParam0) / fVar4;
		if (!iParam2)
		{
			vVar7.x -= 2f;
			vVar7.y -= 2f;
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		*fParam3 = vVar7.x / IntToFloat(iVar2) * IntToFloat(iVar2 / iVar3);
		*fParam4 = vVar7.y / IntToFloat(iVar3) / vVar7.x / IntToFloat(iVar2) * *fParam3;
		if (!iParam5)
		{
			if (!get_is_widescreen() && iParam0 != 30)
			{
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 *= Global_17256 / *fParam3;
				*fParam3 = Global_17256;
			}
		}
		return true;
	}
	return false;
}

float func_171(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

bool func_172()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	_get_screen_active_resolution(&iVar0, &iVar1);
	fVar2 = to_float(iVar0) / to_float(iVar1);
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

auto func_173(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_174(&(Global_17257.f_6687[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (iParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

auto func_174(auto uParam0)
{
	return uParam0;
}

char* func_175(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_174(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_176(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_177(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_178(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (iParam0 == 0)
				{
					get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (iParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1)
		{
			if (iParam0)
			{
				get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0)
		{
			set_text_colour(155, 155, 155, 255);
		}
		else
		{
			set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1)
	{
		if (iParam0)
		{
			set_text_colour(0, 0, 0, floor(255f * 0.8f));
		}
		else
		{
			get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0)
	{
		set_text_colour(155, 155, 155, 255);
	}
	else
	{
		set_text_colour(155, 155, 155, 255);
	}
	set_text_scale(0f, 0.35f);
	set_text_justification(1);
	if (iParam5)
	{
		set_text_scale(0f, 0.425f);
		set_text_font(4);
	}
	else
	{
		set_text_font(0);
	}
	set_text_wrap(0f, 1f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_178(int iParam0, auto uParam1, auto uParam2, auto uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		set_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		clear_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_182(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2443586[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6687[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2562053.f_21), "", 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = 0;
	Global_2562053.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2562053.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7858 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7837 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7852 = 0;
	Global_17257.f_7854 = 0;
	Global_17257.f_7860 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = _get_screen_aspect_ratio(0);
	if (iParam0)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_184(char* sParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_163(&uVar0, 1, iParam1))
	{
		return false;
	}
	iVar1 = true;
	StringCopy(&(Global_17257.f_5505[uVar0 /*4*/]), sParam0, 16);
	if (!is_string_null_or_empty(&(Global_17257.f_5505[uVar0 /*4*/])))
	{
		request_additional_text(&(Global_17257.f_5505[uVar0 /*4*/]), 9);
		Global_17257.f_5498[uVar0] = 1;
		if (!has_this_additional_text_loaded(&(Global_17257.f_5505[uVar0 /*4*/]), 9))
		{
			iVar1 = false;
		}
	}
	request_streamed_texture_dict("CommonMenu", false);
	Global_17257.f_5484[uVar0] = 1;
	if (!has_streamed_texture_dict_loaded("CommonMenu"))
	{
		iVar1 = false;
	}
	if (iParam2)
	{
		request_streamed_texture_dict("MPShopSale", false);
		Global_17257.f_5491[uVar0] = 1;
		if (!has_streamed_texture_dict_loaded("MPShopSale"))
		{
			iVar1 = false;
		}
	}
	iVar2 = false;
	StringCopy(&(Global_17257.f_5530[uVar0 /*10*/].f_1), "instructional_buttons", 24);
	iVar2 = func_185(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_185(auto uParam0)
{
	switch (*uParam0.f_9)
	{
		case 0:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(uParam0.f_1);
				*uParam0.f_9 = 1;
				if (*uParam0.f_7)
				{
					if (has_scaleform_movie_loaded(*uParam0))
					{
						*uParam0.f_8 = get_game_timer();
						*uParam0.f_9 = 2;
					}
				}
			}
			else
			{
				*uParam0.f_8 = get_game_timer();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_8 = get_game_timer();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 2:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_9 = 0;
			}
			break;
	}
	return *uParam0.f_9 == 2;
}

int func_186(auto uParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < *uParam0.f_5)
	{
		if (func_190(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return false;
}

void func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= Global_17257.f_5605 + Global_17257.f_5095))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (iParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2562053.f_21), "", 16);
	}
}

int func_188(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < *uParam0.f_5)
	{
		if (func_190(uParam0, iVar0))
		{
			if (iParam1 == iVar0)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_189(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < *uParam0.f_5)
	{
		if (func_190(uParam0, iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_190(auto uParam0, int iParam1)
{
	if (func_191(uParam0, iParam1))
	{
		return is_bit_set(*uParam0.f_3, iParam1);
	}
	return false;
}

int func_191(auto uParam0, int iParam1)
{
	return (iParam1 > -1 && iParam1 < *uParam0.f_5);
}

int func_192(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (iParam2)
	{
		if (((is_disabled_control_pressed(2, 188) || get_control_normal(2, 219) < -0.3f) || is_disabled_control_pressed(2, 241)) || is_control_just_pressed(2, 188))
		{
			if (is_disabled_control_pressed(2, 241))
			{
				iVar1 = 100;
			}
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((is_disabled_control_pressed(2, 187) || get_control_normal(2, 219) > 0.3f) || is_disabled_control_pressed(2, 242)) || is_control_just_pressed(2, 187))
		{
			if (is_disabled_control_pressed(2, 242))
			{
				iVar1 = 100;
			}
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((is_disabled_control_pressed(2, 190) || get_control_normal(2, 218) > 0.3f) || is_control_just_released(2, 201))
		{
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (is_disabled_control_pressed(2, 189) || get_control_normal(2, 218) < -0.3f)
		{
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	Vector3 vVar37;
	int iVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_163(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_211(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_170(29, 1, 1, &fVar35, &fVar36, iParam7))
		{
			fVar55 = fVar36;
			fVar55 += 0f;
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = Global_17255 + fVar55 + 0.034722f + 0f;
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (iParam7)
	{
		_get_screen_active_resolution(&iVar57, &iVar58);
		fVar60 = _get_screen_aspect_ratio(0);
		if (func_172())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_172())
		{
			fVar59 = 1f;
		}
		iVar57 = round(to_float(iVar57) / fVar59);
		iVar58 = round(to_float(iVar58) / fVar59);
	}
	else
	{
		get_screen_resolution(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					draw_sprite(func_175(29), func_173(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7832)
				{
					iVar1 = Global_17257.f_7828;
					iVar2 = Global_17257.f_7829;
					iVar3 = Global_17257.f_7830;
					iVar4 = Global_17257.f_7831;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_210(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_209();
					_set_text_entry(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							add_text_component_integer(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							add_text_component_float(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							_add_text_component_item_string(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					_draw_text(Global_17254 + 0.00390625f, Global_17255 + fVar55 + 0.00416664f, 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_209();
						func_207(Global_17254 + fParam5 - 0.00390625f - func_208("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7842)
			{
				iVar1 = Global_17257.f_7838;
				iVar2 = Global_17257.f_7839;
				iVar3 = Global_17257.f_7840;
				iVar4 = Global_17257.f_7841;
			}
			else
			{
				get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 += 0.00277776f;
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 += fVar54;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 += fVar54;
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar62 + fVar49 - fVar62 * 0.5f - 0.00138888f, fParam5, fVar49 - fVar62, 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_210(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar59;
				vVar37.y *= 0.5f / fVar59;
				if (Global_17257.f_7860)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17254 + fParam5 * 0.5f, fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar59, vVar37.y / 720f * fVar59, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (get_hash_key(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_17257.f_4638 != 0)
				{
					func_170(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_206(fVar41);
				_set_text_gxt_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_210(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_206(fVar41);
				_set_text_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17257.f_4638 != 0)
				{
					func_170(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_205(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_175(Global_17257.f_4638), func_173(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (get_game_timer() - Global_17257.f_4637 > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (get_hash_key(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_2562053.f_67 != 0)
				{
					func_170(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_206(fVar41);
				_set_text_gxt_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_210(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_206(fVar41);
				_set_text_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2562053.f_67 != 0)
				{
					func_170(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_205(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_175(Global_2562053.f_67), func_173(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (get_game_timer() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_200(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = Global_17257.f_5602 - 1;
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7488[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				iVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					iVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = Global_17254 + 0.0046875f;
				iVar40 = false;
				iVar31 = Global_17257.f_5606 == iVar6;
				if ((iVar31 && iVar5 == 1) && iVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7854)
					{
						get_hud_colour(Global_17257.f_7853, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						get_hud_colour(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					draw_sprite("CommonMenu", "Gradient_Nav", Global_17254 + fParam5 * 0.5f, fVar56 + fVar65 + 0.00277776f * IntToFloat(iVar12) + fVar54 * 0.5f, fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_177(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (is_bit_set(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8];
								iVar20 = Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8];
								iVar21 = Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8];
								iVar22 = Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8];
								iVar23 = Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8];
							}
							else
							{
								Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8] = iVar19;
								Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8] = iVar20;
								Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8] = iVar21;
								Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8] = iVar22;
								Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8] = iVar23;
							}
							iVar70 = 0;
							iVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[0])
								{
									iVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[1])
								{
									iVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = Global_17254 + 0.0046875f + Global_17257.f_4932[iVar8];
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = Global_17257.f_4932[iVar8 + 1] - fVar33;
							}
							else
							{
								fVar45 = Global_17254 + Global_17256 - 0.0046875f - fVar33;
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && iVar31)
							{
								iVar51 = true;
							}
							else
							{
								iVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												iVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														iVar50 = true;
													}
													iVar14++;
												}
												func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
												_set_text_entry_for_width(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = _get_text_screen_width(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar43 += fVar35;
														if (iVar14 > 0)
														{
															fVar43 -= 0.00078125f * 4f;
														}
														if (Global_17257.f_4433[iVar22 + iVar14] == 2 || Global_17257.f_4433[iVar22 + iVar14] == 48)
														{
															fVar43 -= 0.00078125f * 5f;
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 + fVar43 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
											Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
											fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_170(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_170(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(26), func_173(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_170(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_170(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(27), func_173(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											iVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar50 = true;
												}
												iVar14++;
											}
											func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_199(iVar31);
											}
											_set_text_entry(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[iVar22 + iVar28] == 2 || Global_17257.f_4433[iVar22 + iVar28] == 48)
												{
													if (func_170(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_170(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_205(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_175(Global_17257.f_4433[iVar22 + iVar28]), func_173(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_175(Global_17257.f_4433[iVar22 + iVar28]), func_173(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 += 0.00078125f * 3f;
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												_draw_text(fVar33 + fVar41 + 0.00078125f * 7f, fVar34, 0);
											}
											else
											{
												_draw_text(fVar33 + fVar41, fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 += 6f * 0.00078125f;
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[iVar22 + iVar14] != 2 && Global_17257.f_4433[iVar22 + iVar14] != 48)
												{
													if (func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_205(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_175(Global_17257.f_4433[iVar22 + iVar14]), func_173(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_175(Global_17257.f_4433[iVar22 + iVar14]), func_173(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_175(Global_17257.f_4433[iVar22 + iVar14]), func_173(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 += 12f * 0.00078125f;
													}
												}
												iVar14++;
											}
										}
									}
									iVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_199(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_integer(Global_17257.f_3918[iVar20]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_170(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_170(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(26), func_173(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_170(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_170(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(27), func_173(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_198(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_199(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_float(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_170(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_170(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(26), func_173(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_170(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_170(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_205(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_175(27), func_173(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_177(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_197(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_170(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 += fVar45 - fVar33 * 0.5f - fVar43 * 0.5f;
												}
												Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
												Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
												fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
											}
											if (iVar51)
											{
												if (func_170(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_170(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_205(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_175(26), func_173(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_170(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_170(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_205(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_175(27), func_173(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_170(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_205(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_175(Global_17257.f_4433[iVar22]), func_173(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_196(Global_17257.f_4433[iVar22]), fVar36 * func_196(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar40 = true;
									iVar22++;
									break;
								
								case 5:
									iVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 += Global_17257.f_4938[iVar8];
								}
								else
								{
									fVar33 += 0.05f;
								}
							}
							else
							{
								fVar33 += Global_17257.f_4938[iVar8];
								if (Global_17257.f_4945[iVar8])
								{
									if (func_170(26, 1, 1, &fVar35, &fVar36, iParam7))
									{
										fVar33 -= fVar35;
									}
								}
							}
						}
						else
						{
							fVar33 += Global_17257.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (iVar40)
				{
					if (iVar32)
					{
						Global_17257.f_7488[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 += Global_17257.f_5612[iVar6];
						}
						else
						{
							fVar64 += 0.034722f;
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (iVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (iVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12);
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = get_game_timer();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_195();
	}
	Global_17257.f_7827 = 0;
	if (iParam2)
	{
		hide_hud_component_this_frame(10);
	}
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(8);
	if (iParam0)
	{
		func_194(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_194(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_195()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_137(0))
		{
			func_135(0);
		}
		set_bit(&Global_2284, 2);
	}
}

float func_196(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_197(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_198(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (iParam0)
	{
		get_hud_colour(Global_17257.f_7855[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		get_hud_colour(Global_17257.f_7855[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	set_text_colour(iVar0, iVar1, iVar2, 255);
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_163(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_211(iParam4, iParam8))
	{
		return;
	}
	if (func_203())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_77(player_id(), 0))
		{
			return;
		}
	}
	if (is_pc_version())
	{
		if (update_onscreen_keyboard() == 0 || _network_is_text_chat_active())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _get_control_action_name(2, Global_17257.f_4896[iVar1], true), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_17257.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_MAX_WIDTH");
			_push_scaleform_movie_function_parameter_float(1f - Global_17257.f_4951 / 100f);
			_pop_scaleform_movie_function_void();
			if (is_pc_version())
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (get_hash_key(&(Global_17257.f_4834[iVar1 /*4*/])) != get_hash_key("PREV"))
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					func_202(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_202(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_201(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (iParam5)
						{
							add_text_component_substring_time(iParam2, 70);
						}
						else
						{
							add_text_component_integer(iParam2);
						}
						_end_text_component();
					}
					if (is_pc_version())
					{
						if (Global_17257.f_4896[iVar1] != 344 && is_bit_set(Global_17257.f_4922, iVar1))
						{
							_push_scaleform_movie_function_parameter_bool(true);
							_push_scaleform_movie_function_parameter_int(Global_17257.f_4896[iVar1]);
						}
						else
						{
							_push_scaleform_movie_function_parameter_bool(false);
							_push_scaleform_movie_function_parameter_int(344);
						}
					}
					_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (get_hash_key(&(Global_2562053.f_16)) != get_hash_key(""))
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(Global_17257.f_4639);
				func_202(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_201(&(Global_2562053.f_16));
				}
				else
				{
					_begin_text_component(&(Global_2562053.f_16));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				_push_scaleform_movie_function_parameter_int(true);
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(false);
			}
			_pop_scaleform_movie_function_void();
			Global_17257.f_4640 = 1;
		}
		iVar1 = false;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
					_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2562053.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_push_scaleform_movie_function_parameter_int(iVar1);
				_begin_text_component(&(Global_2562053.f_16));
				if (iParam5)
				{
					add_text_component_substring_time(iParam2, 70);
				}
				else
				{
					add_text_component_integer(iParam2);
				}
				_end_text_component();
				_pop_scaleform_movie_function_void();
			}
		}
		_set_screen_draw_position(76, 66);
		_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (iParam6)
		{
			if (!Global_17257.f_7862)
			{
				set_hud_component_position(15, 0f, -0.0375f);
				Global_17257.f_7862 = 1;
			}
		}
		else if (Global_17257.f_7862)
		{
			reset_hud_component_values(15);
			Global_17257.f_7862 = 0;
		}
		_0xE3A3DB414A373DAB();
		if (Global_17257.f_4925)
		{
			_set_screen_draw_position(82, 66);
			_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			draw_scaleform_movie(Global_17257.f_5530[uVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			_0xE3A3DB414A373DAB();
		}
		else
		{
			draw_scaleform_movie_fullscreen(Global_17257.f_5530[uVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_201(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_202(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_203()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_204())
	{
		vVar0 = {0f, -500f, 0f};
		get_mobile_phone_position(&vVar0);
		if (Global_14358 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_204()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	auto uVar0;
	
	get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (iParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_206(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_leading(2);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(fParam0, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_207(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_208(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_209();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7837)
	{
		iVar0 = Global_17257.f_7833;
		iVar1 = Global_17257.f_7834;
		iVar2 = Global_17257.f_7835;
		iVar3 = Global_17257.f_7836;
	}
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(Global_17254 + 0.0046875f, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_210(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

bool func_211(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_57(8, -1) && func_212() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

auto func_212()
{
	return Global_1315846;
}

void func_213(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!is_pc_version())
	{
		return;
	}
	if ((((get_pause_menu_state() == 0 && !is_system_ui_being_displayed()) && !is_warning_message_active()) && !Global_91330.f_1352) && !_network_is_text_chat_active())
	{
		if (_is_input_just_disabled(2))
		{
			disable_control_action(0, 1, 1);
			disable_control_action(0, 2, 1);
			disable_control_action(2, 200, 1);
			enable_control_action(0, 237, 1);
			enable_control_action(0, 238, 1);
			enable_control_action(0, 241, 1);
			enable_control_action(0, 242, 1);
			func_220(0, 0, 0, 1);
			func_219(0, -1, 1);
		}
		iVar0 = func_218(uParam0, Global_2562129);
		if (func_217())
		{
			if (iVar0 == *uParam0.f_4)
			{
				set_bit(iParam1, false);
			}
			else
			{
				*uParam0.f_4 = iVar0;
				func_187(Global_2562129, 1, 1);
			}
		}
		if (func_216())
		{
			set_bit(iParam1, true);
		}
		if (func_215(0, 0, 0))
		{
			set_bit(iParam1, 2);
		}
		if (func_214(0, 0, 0))
		{
			set_bit(iParam1, 3);
		}
	}
}

bool func_214(int iParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -3)
		{
			if ((is_control_pressed(2, 237) && iParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 242) || (is_disabled_control_pressed(2, 242) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_215(int iParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -2)
		{
			if ((is_control_pressed(2, 237) && iParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 241) || (is_disabled_control_pressed(2, 241) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_216()
{
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 238))
		{
			return true;
		}
	}
	return false;
}

bool func_217()
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 > -1)
		{
			if (is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

int func_218(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < *uParam0.f_5)
	{
		if (func_190(uParam0, iVar0))
		{
			if (iParam1 == iVar1)
			{
				return iVar0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

bool func_219(int iParam0, int iParam1, int iParam2)
{
	if (!_is_input_disabled(2))
	{
		return false;
	}
	if (is_pause_menu_active() || is_warning_message_active())
	{
		return false;
	}
	if (iParam2)
	{
		_show_cursor_this_frame();
	}
	if (Global_2562129 == -6)
	{
		_0x8DB8CFFD58B62552(4);
		if (iParam0 && is_control_pressed(2, 237))
		{
			return true;
		}
		else
		{
			Global_2562129 = -1;
			return false;
		}
	}
	if (((Global_2562129 > -1 || Global_2562129 == -3) || Global_2562129 == -2) || _0x3D9ACB1EB139E702())
	{
		_0x8DB8CFFD58B62552(1);
		return false;
	}
	if (Global_2562129 == -1 && iParam0)
	{
		if (is_control_pressed(2, 237))
		{
			_0x8DB8CFFD58B62552(4);
			Global_2562129 = -6;
			return true;
		}
		else
		{
			_0x8DB8CFFD58B62552(3);
			return false;
		}
	}
	_0x8DB8CFFD58B62552(1);
	return false;
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!_is_input_disabled(2))
	{
		Global_2562129 = -1;
		return;
	}
	_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17254;
	fVar2 = fVar0 + Global_17256;
	fVar3 = Global_17257.f_5600;
	fVar1 = Global_17257.f_5600 - IntToFloat(Global_17257.f_5602) * 0.034722f;
	if (iParam2)
	{
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = Global_17257.f_5600 - 0.034722f;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	_0xE3A3DB414A373DAB();
	func_222();
	if (Global_2562129 == -6)
	{
		return;
	}
	Global_2562129 = -1;
	fVar7 = Global_2562123;
	fVar8 = Global_2562124;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3) && Global_2562124 < fVar3 + fVar6)
		{
			Global_2562129 = -2;
			if (iParam3)
			{
				func_221(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_221(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = fVar8 - fVar1;
		iVar13 = floor(fVar9 / 0.034722f);
		if (Global_17257.f_5603 == -1)
		{
			Global_2562129 = 0;
			iVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17257.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3)
		{
			if (!iParam1 || iVar13 != 0)
			{
				_set_screen_draw_position(76, 84);
				_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_210(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
				_0xE3A3DB414A373DAB();
			}
		}
		Global_2562129 = Global_17257.f_7488[iVar13];
		return;
	}
	if (!iParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2562129 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2562129 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f)
	{
		Global_2562129 = -4;
		return;
	}
	Global_2562129 = -1;
}

void func_221(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 0.034722f / 2f;
	if (iParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_2562129 == -2)
	{
		func_210(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_210(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_222()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_223()
{
	if (func_143(5, &(Local_194.f_4.f_6)))
	{
		if (func_158(player_id(), Local_194) && func_226())
		{
			func_225(&(Local_194.f_4.f_6));
			func_224(1, &uLocal_291);
			func_10(6);
		}
		else
		{
			do_screen_fade_out(322);
			func_10(7);
		}
	}
}

void func_224(int iParam0, auto uParam1)
{
	if (*uParam1 != iParam0)
	{
		*uParam1 = iParam0;
	}
}

void func_225(auto uParam0)
{
	if (func_143(5, uParam0))
	{
		set_cam_coord(*uParam0.f_5, *uParam0.f_39);
		set_cam_rot(*uParam0.f_5, *uParam0.f_42, 2);
		func_114(6, uParam0);
	}
}

bool func_226()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (player_id() != iVar1 && iVar1 != func_23())
			{
				if (func_22(iVar1, 1, 1))
				{
					if (func_157(iVar1) && func_156(iVar1))
					{
						if (get_distance_between_coords(func_155(iVar1), Local_194.f_1, 1) < IntToFloat(func_154(Local_194)))
						{
							if (func_14(iVar1, Local_194))
							{
								return true;
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

void func_227()
{
	func_26(0);
	func_247(1, Local_194, 1);
	clear_area_of_projectiles(func_155(player_id()), 3f, 1);
	if (func_144(&(Local_194.f_4.f_6)) && !func_246(Local_194))
	{
		func_242(&(Local_194.f_4.f_6));
		func_236(Local_194, -1);
		func_229();
		func_10(2);
	}
	else
	{
		func_236(Local_194, -1);
		func_229();
		func_228();
		do_screen_fade_out(322);
		func_10(7);
	}
}

void func_228()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		func_145(0);
		network_fade_out_entity(player_ped_id(), 1, 1);
		func_116(player_id(), 0, 524288);
	}
}

void func_229()
{
	func_230(Local_194, Local_285.f_3);
	SCRIPT::REQUEST_SCRIPT("AM_MP_SMPL_INTERIOR_INT");
	Global_1728515.f_12 = 0;
	Global_1728515.f_5 = 0;
	Local_194.f_84 = 1;
	Global_1728515.f_11 = 0;
}

bool func_230(int iParam0, auto uParam1)
{
	if (Global_2413760.f_2031.f_1[player_id()] > -1 && !is_bit_set(Global_2418472[player_id() /*313*/].f_305, false))
	{
		if (!func_235(&(Global_1728515.f_117)) || func_149(&(Global_1728515.f_117), 3000, 0))
		{
			func_234();
			func_233(&(Global_1728515.f_117), 0, 0);
		}
		return false;
	}
	func_148(&(Global_1728515.f_117));
	if (!is_bit_set(Global_2418472[player_id() /*313*/].f_305, false) || func_149(&(Global_1728515.f_115), 3000, 0))
	{
		set_bit(&(Global_2418472[player_id() /*313*/].f_305), false);
		func_232(iParam0, Global_2418472[player_id() /*313*/].f_305.f_3);
		func_233(&(Global_1728515.f_115), 0, 0);
	}
	else if (Global_2413760.f_2031.f_1[player_id()] > -1)
	{
		func_231(Global_2413760.f_2031.f_1[player_id()]);
		func_148(&(Global_1728515.f_115));
		Global_2418472[player_id() /*313*/].f_305.f_3 = 0;
		return true;
	}
	return false;
}

void func_231(auto uParam0)
{
	Global_2418472[player_id() /*313*/].f_305.f_2 = uParam0;
}

void func_232(auto uParam0, auto uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = 483;
	Var0.f_2 = player_id();
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	iVar5 = network_get_host_of_script("freemode", -1, 0);
	set_bit(&iVar6, iVar5);
	if (!iVar6 == 0)
	{
		trigger_script_event(1, &Var0, 5, iVar6);
	}
}

void func_233(auto uParam0, int iParam1, int iParam2)
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

void func_234()
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	
	vVar0.x = 485;
	vVar0.z = player_id();
	iVar3 = network_get_host_of_script("freemode", -1, 0);
	set_bit(&iVar4, iVar3);
	if (!iVar4 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iVar4);
	}
}

auto func_235(auto uParam0)
{
	return *uParam0.f_1;
}

void func_236(int iParam0, int iParam1)
{
	switch (func_16(iParam0))
	{
		case 0:
			func_237(iParam0, iParam1);
			break;
	}
}

void func_237(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2418472[player_id() /*313*/].f_305.f_3 = 0;
	if (func_38(player_id(), 1))
	{
		if (func_39(player_id()))
		{
			set_bit(&(Global_1728515.f_2), false);
		}
		else
		{
			set_bit(&(Global_1728515.f_2), true);
		}
		iVar0 = func_37(player_id());
		if (iVar0 != func_23() && iVar0 != player_id())
		{
			set_bit(&(Global_2418472[player_id() /*313*/].f_305.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < func_239())
		{
			iVar1 = func_238(iVar0, iVar2);
			if (iVar1 != func_23() && iVar1 != player_id())
			{
				set_bit(&(Global_2418472[player_id() /*313*/].f_305.f_3), iVar1);
			}
			iVar2++;
		}
	}
	else if (func_35(player_id(), func_31(iParam0)))
	{
		set_bit(&(Global_1728515.f_2), 2);
	}
}

int func_238(int iParam0, int iParam1)
{
	if (func_39(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 3)
		{
			return Global_1610316[iParam0 /*174*/].f_10.f_10[iParam1];
		}
	}
	return func_23();
}

int func_239()
{
	if (func_241() == func_23())
	{
		return 0;
	}
	return func_240(func_241());
}

auto func_240(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_14;
}

auto func_241()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

void func_242(auto uParam0)
{
	if (!func_143(3, uParam0))
	{
		if (is_synchronized_scene_running(*uParam0.f_13))
		{
			detach_synchronized_scene(*uParam0.f_13);
		}
		if (does_entity_exist(*uParam0.f_2))
		{
			delete_ped(uParam0.f_2);
		}
		render_script_cams(false, false, 3000, 1, 0, 0);
		if (does_cam_exist(*uParam0.f_5))
		{
			destroy_cam(*uParam0.f_5, 0);
		}
		if (network_is_in_mp_cutscene())
		{
			func_115(1, 0);
		}
		func_114(3, uParam0);
	}
	*uParam0 = 0;
	*uParam0.f_45 = 0;
	request_anim_dict(*uParam0.f_3);
	func_243(uParam0);
	func_114(2, uParam0);
	Global_1728515.f_10 = 1;
}

void func_243(auto uParam0)
{
	if (!does_entity_exist(*uParam0.f_2))
	{
		if (!func_244())
		{
			*uParam0.f_2 = PED::CREATE_PED(4, get_entity_model(player_ped_id()), get_entity_coords(player_ped_id(), 1) + Vector(-10f, 0f, 0f), get_entity_heading(player_ped_id()), 0, false);
		}
		else
		{
			*uParam0.f_2 = PED::CREATE_PED(5, get_entity_model(player_ped_id()), get_entity_coords(player_ped_id(), 1) + Vector(-10f, 0f, 0f), get_entity_heading(player_ped_id()), 0, false);
		}
		_assign_player_to_ped(player_ped_id(), *uParam0.f_2);
		freeze_entity_position(*uParam0.f_2, true);
		set_entity_proofs(*uParam0.f_2, true, true, true, true, true, true, 0, false);
	}
}

int func_244()
{
	return func_245(player_id());
}

bool func_245(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_246(int iParam0)
{
	return is_bit_set(Global_1728515.f_13, iParam0);
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (Global_1728515.f_9 == -1)
		{
			Global_1728515.f_9 = iParam1;
			Global_1728515.f_7 = 1;
			Global_1728515.f_8 = iParam2;
			set_bit(&(Global_2418472[player_id() /*313*/].f_305), 3);
		}
	}
	else if (Global_1728515.f_9 == iParam1)
	{
		Global_1728515.f_9 = -1;
		Global_1728515.f_7 = 0;
		Global_1728515.f_8 = 0;
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), 3);
	}
}

void func_248()
{
	if (func_143(7, &(Local_194.f_4.f_6)))
	{
		func_113(&(Local_194.f_4.f_6), 1);
		func_10(0);
		func_249();
		return;
	}
	if (!func_143(2, &(Local_194.f_4.f_6)))
	{
		func_146(1, Local_194);
		func_228();
		func_10(3);
	}
}

void func_249()
{
	if (func_27())
	{
		Global_1728515.f_12 = 1;
	}
}

void func_250()
{
	if (is_screen_faded_out())
	{
		func_228();
		func_10(7);
	}
}

void func_251()
{
	func_26(0);
	func_146(1, Local_194);
	func_236(Local_194, Local_285.f_3);
	func_229();
	do_screen_fade_out(322);
	func_10(5);
}

void func_252()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	iVar1 = false;
	iVar2 = false;
	func_26(func_12());
	if (func_74(1))
	{
		if (func_40(Local_194))
		{
			if (func_33(player_id(), Local_194))
			{
				iVar2 = true;
			}
			if (func_13())
			{
				iVar0 = true;
				if (func_33(player_id(), Local_194))
				{
					iVar1 = true;
				}
			}
		}
	}
	if (func_246(Local_194))
	{
		if (!Global_2443496)
		{
			iVar2 = false;
			if (!func_264(player_id()))
			{
				func_263(1, Local_194);
				func_10(1);
			}
		}
	}
	if (iVar1)
	{
		if (func_262())
		{
			iVar2 = false;
			iVar0 = false;
			func_10(1);
		}
	}
	if (iVar2)
	{
		func_28();
	}
	func_261(iVar0);
	if (Local_285.f_3 > -1)
	{
		Local_285.f_3 = -1;
	}
	if (func_27() && func_259(Local_194))
	{
		func_10(9);
	}
	if (func_16(Local_194) == 0)
	{
		if (func_17(1))
		{
			if (func_71(player_id(), 0) && func_70(player_id()) == 167)
			{
				set_no_loading_screen(1);
				set_bit(&Global_1728515, false);
				if (func_246(Local_194))
				{
					Global_1728639.f_31 = 1;
					SCRIPT::REQUEST_SCRIPT_audio_bank("DLC_EXEC1/BUY_SELL", false);
				}
				else if (func_257(player_id()))
				{
					Global_1728639.f_32 = 1;
					Global_1728639.f_36 = 1;
					SCRIPT::REQUEST_SCRIPT_audio_bank("DLC_EXEC1/BUY_SELL", false);
				}
			}
			if (func_39(player_id()) && !is_bit_set(Global_1728639, true))
			{
				if (!func_256())
				{
					set_bit(&(Global_2418472[player_id() /*313*/].f_310), false);
				}
				else
				{
					clear_bit(&(Global_2418472[player_id() /*313*/].f_310), false);
				}
			}
		}
		func_253();
	}
}

void func_253()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	
	if (func_38(player_id(), 0))
	{
		iVar0 = func_37(player_id());
		if (func_35(player_id(), Local_194.f_90) && !func_35(iVar0, Local_194.f_90))
		{
			if (func_22(player_id(), 1, 1))
			{
				vVar1 = {func_155(player_id())};
				fVar4 = vdist(vVar1, Local_194.f_1);
				if (fVar4 < 3f)
				{
					if (!func_235(&(Local_194.f_88)))
					{
						if (func_255(func_241()))
						{
							func_254("WHOUSE_GOONHLP1C", -1);
						}
						else
						{
							func_254("WHOUSE_GOON_HLP1", -1);
						}
						func_11(&(Local_194.f_88), 0, 0);
					}
				}
				else if (fVar4 > 30f)
				{
					if (func_235(&(Local_194.f_88)))
					{
						if (func_149(&(Local_194.f_88), 20000, 0))
						{
							func_148(&(Local_194.f_88));
						}
					}
				}
			}
		}
	}
}

void func_254(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

bool func_256()
{
	int iVar0;
	
	iVar0 = Global_1347750[func_95(-1)];
	if (is_bit_set(iVar0, 14))
	{
		return true;
	}
	return false;
}

int func_257(int iParam0)
{
	return func_258(iParam0, 0);
}

int func_258(auto uParam0, int iParam1)
{
	return is_bit_set(Global_1610316[uParam0 /*174*/].f_10.f_5, iParam1);
}

int func_259(int iParam0)
{
	return func_260() == iParam0;
}

auto func_260()
{
	return Global_1728515.f_1;
}

void func_261(int iParam0)
{
	if (iParam0)
	{
		set_bit(&(vLocal_97[player_id() /*3*/]), false);
	}
	else
	{
		clear_bit(&(vLocal_97[player_id() /*3*/]), false);
	}
}

bool func_262()
{
	Vector3 vVar0;
	
	vVar0 = {1f, 1f, 2f};
	if (is_entity_at_coord(player_ped_id(), Local_194.f_1, vVar0, false, true, 1))
	{
		return true;
	}
	return false;
}

void func_263(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (!is_bit_set(Global_2418472[player_id() /*313*/].f_305, true))
		{
			set_bit(&(Global_2418472[player_id() /*313*/].f_305), true);
			clear_bit(&(Global_2418472[player_id() /*313*/].f_305), 2);
			Global_2418472[player_id() /*313*/].f_305.f_4 = iParam1;
		}
	}
	else
	{
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), true);
		set_bit(&(Global_1728515.f_107), iParam1);
		Global_2418472[player_id() /*313*/].f_305.f_4 = -1;
	}
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_23() && func_22(iParam0, 1, 1))
	{
		iVar0 = is_bit_set(Global_2418472[iParam0 /*313*/].f_305, true);
		return iVar0;
	}
	return false;
}

void func_265()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = false;
	func_267(Local_194, &Var1);
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (is_entity_in_area(player_ped_id(), Var1, Var1.f_3, 0, 1, 0))
		{
			iVar0 = true;
		}
	}
	if (((!func_27() && !iVar0) && !func_266(Local_194)) && get_distance_between_coords(func_155(player_id()), Local_194.f_1, 1) > 200f)
	{
		func_372();
	}
}

int func_266(int iParam0)
{
	if (func_246(iParam0))
	{
		return is_bit_set(Global_1728515.f_15, iParam0);
	}
	return false;
}

void func_267(int iParam0, auto uParam1)
{
	switch (func_16(iParam0))
	{
		case 0:
			func_268(iParam0, uParam1);
			break;
	}
}

void func_268(int iParam0, auto uParam1)
{
	switch (func_269(func_31(iParam0)))
	{
		case 0:
			*uParam1 = {1086.836f, -3103.88f, -41f};
			*uParam1.f_3 = {1105.807f, -3094.803f, -36.0099f};
			break;
		
		case 1:
			*uParam1 = {1047.356f, -3112.175f, -41f};
			*uParam1.f_3 = {1074.308f, -3092.826f, -33.7074f};
			break;
		
		case 2:
			*uParam1 = {990.5693f, -3113.382f, -41f};
			*uParam1.f_3 = {1030.264f, -3088.479f, -28.7216f};
			break;
	}
}

int func_269(int iParam0)
{
	if (func_36(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

void func_270()
{
	if (!func_22(player_id(), 1, 1))
	{
		func_372();
	}
}

void func_271()
{
	if (Global_1728639.f_31 || Global_1728639.f_32)
	{
		if (is_screen_faded_out() && SCRIPT::REQUEST_SCRIPT_audio_bank("DLC_EXEC1/BUY_SELL", false))
		{
			Local_194.f_87 = get_sound_id();
			if (Global_1728639.f_31)
			{
				play_sound_frontend(Local_194.f_87, "Delivery_Screen_Fade", "DLC_Exec1_Buy_Sell_Sounds", 0);
			}
			else
			{
				play_sound_frontend(Local_194.f_87, "Delivery_Screen_Fade_On_Foot", "DLC_Exec1_Buy_Sell_Sounds", 0);
			}
			Global_1728639.f_31 = 0;
			Global_1728639.f_32 = 0;
			func_233(&(Global_1728639.f_34), 0, 0);
		}
	}
	else if (Local_194.f_87 > -1)
	{
		if (has_sound_finished(Local_194.f_87))
		{
			release_sound_id(Local_194.f_87);
			release_named_script_audio_bank("DLC_EXEC1/BUY_SELL");
			func_148(&(Global_1728639.f_34));
			Local_194.f_87 = -1;
		}
	}
}

void func_272(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 fVar5;
	struct<24> Var6;
	
	if (Global_1728515.f_108 != iParam0)
	{
		return;
	}
	if ((Global_1728515.f_109 != 0 && !is_entity_dead(Global_1728515.f_109, 0)) && is_vehicle_driveable(Global_1728515.f_109, 0))
	{
		iVar0 = Global_1728515.f_109;
		if (!network_has_control_of_entity(iVar0))
		{
			network_request_control_of_entity(iVar0);
		}
		else
		{
			if (Global_1728515.f_112 == 0)
			{
				iVar1 = get_entity_model(iVar0);
				if (((is_this_model_a_heli(iVar1) && is_entity_in_air(iVar0)) && get_entity_height_above_ground(iVar0) > 10f) && !func_149(&(Global_1728515.f_110), 5000, 0))
				{
					if (func_350(iVar0, 1, 0, 0, 0, 0))
					{
						freeze_entity_position(iVar0, true);
						network_fade_out_entity(iVar0, 1, 1);
						Global_1728515.f_112 = 1;
					}
				}
				else
				{
					Global_1728515.f_109 = 0;
				}
			}
			if (Global_1728515.f_112 == 1)
			{
				if (!_0x422F32CC7E56ABAD(iVar0))
				{
					Global_1728515.f_112 = 2;
				}
			}
			if (Global_1728515.f_112 == 2)
			{
				Var6.f_3 = 1125515264;
				Var6.f_4 = 1;
				Var6.f_5 = 1;
				Var6.f_7 = 1082130432;
				Var6.f_8 = 1;
				Var6.f_11 = 1;
				Var6.f_13 = 2;
				Var6.f_20 = 2;
				Var6.f_23 = 1;
				if (func_273(vParam1, 0f, 0f, 0f, get_entity_model(iVar0), 0, &vVar2, &fVar5, &Var6))
				{
					set_entity_coords(iVar0, vVar2, 1, false, 0, 1);
					set_entity_heading(iVar0, fVar5);
					set_vehicle_on_ground_properly(iVar0);
					freeze_entity_position(iVar0, false);
					network_fade_in_entity(iVar0, 1, 1);
					Global_1728515.f_112 = 0;
					Global_1728515.f_109 = 0;
					Global_1728515.f_108 = -1;
				}
			}
		}
	}
	else if (Global_1728515.f_109 != 0)
	{
		Global_1728515.f_112 = 0;
		Global_1728515.f_109 = 0;
		Global_1728515.f_108 = -1;
	}
}

bool func_273(Vector3 vParam0, Vector3 vParam1, int iParam2, int iParam3, auto uParam4, auto uParam5, auto uParam6)
{
	int iVar0;
	int iVar1;
	struct<57> Var2;
	struct<57> Var59;
	
	iVar0 = false;
	if (*uParam10.f_12)
	{
		if (*uParam10.f_23)
		{
			*uParam10.f_23 = 0;
		}
	}
	if (is_player_switch_in_progress())
	{
		if (!get_player_switch_state() > 7 && !get_player_switch_state() == 5)
		{
			return false;
		}
	}
	if (Global_2404956.f_485)
	{
		Global_2404956.f_485 = 0;
		return false;
	}
	if (!func_349(player_id()))
	{
		return false;
	}
	if (!Global_2404956.f_558 == 0 && get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_563) < func_348(0))
	{
		if (!Global_2404956.f_610 == 0)
		{
			Global_2404956.f_610 = 0;
			func_347();
			func_346();
		}
		return false;
	}
	if (!get_id_of_this_thread() == Global_2404956.f_609)
	{
		if (!Global_2404956.f_610 == 0)
		{
			if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_613) < func_348(0))
			{
				return false;
			}
			else
			{
				Global_2404956.f_610 = 0;
			}
		}
	}
	else
	{
		if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_611) > 30000)
		{
			Global_2404956.f_610 = 0;
		}
		if (!Global_2404956.f_610 == 0)
		{
			if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_613) > func_348(1))
			{
				Global_2404956.f_610 = 0;
			}
		}
	}
	if (*uParam10.f_5)
	{
		if (func_341(vParam0))
		{
			if (func_340(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2404956.f_610 == 0)
	{
		if (vdist(Global_2404956.f_622, vParam0) > 100f)
		{
			return false;
		}
	}
	_0x07FB139B592FA687(vParam0.x - 100f, vParam0.y - 100f, vParam0.x + 100f, vParam0.y + 100f);
	if (Global_2404956.f_610 == 0)
	{
		Global_2404956.f_616 = 0;
		Global_2404956.f_611 = NETWORK::_0x89023FBBF9200E9F();
		Global_2404956.f_609 = get_id_of_this_thread();
		Global_2404956.f_613 = NETWORK::_0x89023FBBF9200E9F();
		Global_2404956.f_622 = {vParam0};
		Global_2404956.f_615 = NETWORK::_0x89023FBBF9200E9F();
		Global_2404956.f_610 = 2;
		func_347();
		func_336(vParam0);
	}
	switch (Global_2404956.f_610)
	{
		case 2:
			if (_0xF7B79A50B905A30D(vParam0.x - 100f, vParam0.y - 100f, vParam0.x + 100f, vParam0.y + 100f))
			{
				Global_2404956.f_617 = {vParam0};
				Global_2404956.f_620 = 0f;
				if (((*uParam10.f_2 && func_333(vParam0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !*uParam10.f_6) && !func_330(vParam0, *uParam9, iParam6, player_id(), 0))
				{
					Global_2404956.f_617 = {vParam0};
					Global_2404956.f_620 = *uParam9;
				}
				else
				{
					Var2.f_6 = 1082130432;
					Var2.f_7 = 1176255488;
					Var2.f_8 = 1;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 1;
					Var2.f_16 = 1;
					Var2.f_31 = 1;
					Var2.f_34 = joaat("tailgater");
					Var2.f_38 = 2;
					Var2.f_45 = 2;
					Var2.f_49 = 1123024896;
					Var2.f_53 = 999;
					Var2.f_54 = 1176256410;
					Var2.f_55 = 1;
					Var2.f_56 = 1;
					Var2.f_9 = iParam7;
					Var2.f_3 = 7f;
					Var2.f_10 = *uParam10.f_4;
					Var2.f_4 = *uParam10;
					Var2.f_13 = *uParam10.f_1;
					Var2.f_5 = *uParam10.f_3;
					Var2.f_15 = *uParam10.f_5;
					Var2.f_11 = *uParam10.f_6;
					Var2.f_6 = *uParam10.f_7;
					Var2.f_16 = *uParam10.f_8;
					Var2.f_17 = *uParam10.f_9;
					Var2 = {vParam3};
					Var2.f_12 = 1;
					Var2.f_34 = iParam6;
					Var2.f_31 = *uParam10.f_11;
					Var2.f_30 = 1;
					Var2.f_48 = *uParam10.f_12;
					Var2.f_56 = *uParam10.f_23;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = {*(uParam10.f_13[iVar1 /*3*/])};
						Var2.f_45[iVar1] = *uParam10.f_20[iVar1];
						iVar1++;
					}
					func_289(&(Global_2404956.f_617), &(Global_2404956.f_620), &Var2);
				}
				func_287(Global_2404956.f_617, Global_2404956.f_620, iParam6);
				Global_2404956.f_607 = 0;
				Global_2404956.f_608 = 0;
				Global_2404956.f_616++;
				Global_2404956.f_612 = NETWORK::_0x89023FBBF9200E9F();
				Global_2404956.f_611 = NETWORK::_0x89023FBBF9200E9F();
				Global_2404956.f_610 = 3;
			}
			break;
		
		case 3:
			if (Global_2404956.f_607)
			{
				if (Global_2404956.f_608)
				{
					if (*uParam10.f_10 && !*uParam10.f_9)
					{
						func_286(Global_2404956.f_617, 2f);
						Global_2404956.f_610 = 4;
						Global_2404956.f_614 = NETWORK::_0x89023FBBF9200E9F();
					}
					else
					{
						iVar0 = true;
					}
				}
				else
				{
					func_285();
				}
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_612) > 3000)
			{
				func_285();
			}
			break;
		
		case 4:
			if (*uParam10.f_10 && !*uParam10.f_9)
			{
				if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_612) < 10000)
				{
					if (_0xE64A3CA08DFA37A9(Global_2404956.f_621))
					{
						if (_0x4DF7CFFF471A7FB1(Global_2404956.f_621))
						{
							if (!_0x4A2D4E8BF4265B0F(Global_2404956.f_621))
							{
								if (func_284(Global_2404956.f_617, Global_2404956.f_620, iParam6, player_id(), 0) || func_274(Global_2404956.f_617, Global_2404956.f_620, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_285();
								}
								else
								{
									iVar0 = true;
								}
							}
							else
							{
								func_285();
							}
						}
					}
					else
					{
						func_285();
					}
				}
				else
				{
					func_285();
				}
			}
			else
			{
				iVar0 = true;
			}
			break;
		
		case 5:
			Global_2404956.f_617 = {vParam0};
			Global_2404956.f_620 = 0f;
			Var59.f_6 = 1082130432;
			Var59.f_7 = 1176255488;
			Var59.f_8 = 1;
			Var59.f_10 = 1;
			Var59.f_13 = 1;
			Var59.f_15 = 1;
			Var59.f_16 = 1;
			Var59.f_31 = 1;
			Var59.f_34 = joaat("tailgater");
			Var59.f_38 = 2;
			Var59.f_45 = 2;
			Var59.f_49 = 1123024896;
			Var59.f_53 = 999;
			Var59.f_54 = 1176256410;
			Var59.f_55 = 1;
			Var59.f_56 = 1;
			Var59.f_9 = iParam7;
			Var59.f_3 = 3.5f;
			Var59.f_10 = *uParam10.f_4;
			Var59.f_4 = *uParam10;
			Var59.f_12 = 1;
			Var59.f_13 = 0;
			Var59.f_15 = *uParam10.f_5;
			Var59.f_11 = *uParam10.f_6;
			Var59.f_6 = *uParam10.f_7;
			Var59 = {vParam3};
			Var59.f_34 = iParam6;
			Var59.f_31 = *uParam10.f_11;
			Var59.f_30 = 1;
			Var59.f_48 = *uParam10.f_12;
			Var59.f_56 = *uParam10.f_23;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var59.f_38[iVar1 /*3*/] = {*(uParam10.f_13[iVar1 /*3*/])};
				Var59.f_45[iVar1] = *uParam10.f_20[iVar1];
				iVar1++;
			}
			func_289(&(Global_2404956.f_617), &(Global_2404956.f_620), &Var59);
			Global_2404956.f_610 = 6;
			break;
		
		case 6:
			iVar0 = true;
			break;
	}
	Global_2404956.f_622 = {vParam0};
	Global_2404956.f_613 = NETWORK::_0x89023FBBF9200E9F();
	if (iVar0)
	{
		*uParam8 = {Global_2404956.f_617};
		*uParam9 = Global_2404956.f_620;
		Global_2404956.f_610 = 0;
		func_347();
		func_346();
		return true;
	}
	return false;
}

bool func_274(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && player_id() != iVar1) || iParam9 == 0)
		{
			if (func_22(iVar1, iParam5, iParam6))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam8 || (!is_ped_injured(get_player_ped(iVar1)) && func_283(iVar1)))
					{
						if ((!iParam7 || (iParam7 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam10) && iParam7) && func_279(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (func_275(func_155(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

bool func_275(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (vdist(vParam0, vParam3) < func_278(iParam7, 1008981770))
	{
		vVar0 = {0f, 1f, 0f};
		func_277(&vVar0, 0f, 0f, fParam6);
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
		func_276(iParam7, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
		fVar9 = absf(vVar6.y - vVar3.y);
		fVar10 = absf(vVar6.x - vVar3.x);
		fVar11 = absf(vVar6.z - vVar3.z);
		vVar12 = {vParam3 + vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar12.z -= 0.5f * fVar11 + fParam8;
		vVar15 = {vParam3 - vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar15.z += 0.5f * fVar11 + fParam8;
		if (is_point_in_angled_area(vParam0, vVar12, vVar15, fVar10, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_276(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (is_model_valid(iParam0))
	{
		get_model_dimensions(iParam0, fParam1, fParam2);
	}
	if (vmag(*fParam1) <= 0.01f || vmag(*fParam2) <= 0.01f)
	{
		*fParam1 = 0f - fParam4 * 0.5f;
		*fParam2 = 0f + fParam4 * 0.5f;
		*fParam1.f_1 = 0f - fParam3 * 0.5f;
		*fParam2.f_1 = 0f + fParam3 * 0.5f;
		*fParam1.f_2 = 0f - fParam5 * 0.5f;
		*fParam2.f_2 = 0f + fParam5 * 0.5f;
	}
}

void func_277(auto uParam0, Vector3 vParam1)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = fVar0 * *uParam0.f_1 - fVar1 * *uParam0.f_2;
	vVar2.z = fVar1 * *uParam0.f_1 + fVar0 * *uParam0.f_2;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = fVar0 * *uParam0 + fVar1 * *uParam0.f_2;
	vVar2.y = *uParam0.f_1;
	vVar2.z = fVar0 * *uParam0.f_2 - fVar1 * *uParam0;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = fVar0 * *uParam0 - fVar1 * *uParam0.f_1;
	vVar2.y = fVar1 * *uParam0 + fVar0 * *uParam0.f_1;
	vVar2.z = *uParam0.f_2;
	*uParam0 = {vVar2};
}

float func_278(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_276(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = {vVar3 - vVar0};
	fVar9 = sqrt(vVar6.x * 0.5f * vVar6.x * 0.5f + vVar6.y * 0.5f * vVar6.y * 0.5f + vVar6.z * 0.5f * vVar6.z * 0.5f) + fParam1;
	return fVar9;
}

bool func_279(int iParam0)
{
	if (func_282(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_281(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_280(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_37(iParam0);
	if (!iVar0 == func_23())
	{
		if (iVar0 == func_37(iParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_281(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_282(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_281(iParam0)};
		Global_2459453 = {func_281(iParam1)};
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

bool func_283(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_284(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_22(iVar1, 0, 1) && func_22(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_275(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
				else if (func_275(func_155(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_275(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (func_22(iVar1, 0, 0))
			{
				if (does_entity_exist(get_player_ped(iVar1)))
				{
					if (func_275(func_155(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_285()
{
	if (Global_2404956.f_616 < 20 && get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_615) < 30000)
	{
		Global_2404956.f_610 = 2;
	}
	else
	{
		Global_2404956.f_610 = 5;
	}
}

void func_286(Vector3 vParam0, float fParam1)
{
	func_347();
	Global_2404956.f_621 = _0x25B99872D588A101(vParam0 - Vector(fParam3, fParam3, fParam3), vParam0 + Vector(fParam3, fParam3, fParam3));
}

void func_287(Vector3 vParam0, auto uParam1, int iParam2)
{
	struct<7> Var0;
	
	Var0 = 337;
	Var0.f_1 = player_id();
	Var0.f_2 = {vParam0};
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	trigger_script_event(1, &Var0, 7, func_288(1, 1));
}

auto func_288(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_22(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_77(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_289(auto uParam0, auto uParam1, auto uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_329(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_290(uParam0, uParam1, uParam2);
	}
}

void func_290(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	auto uVar6;
	auto uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	Vector3 vVar25;
	auto uVar28;
	Vector3 vVar29;
	float fVar32;
	int iVar33;
	
	iVar0 = 0;
	if (!vmag(*uParam2.f_35) > 0f)
	{
		*uParam2.f_35 = {*uParam0};
	}
	if (*uParam2.f_15)
	{
		if (func_324(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
		{
			*uParam2.f_6 = 9999.9f;
			*uParam2.f_7 = 9999.9f;
		}
	}
	if (*uParam2.f_51)
	{
		*uParam2.f_6 = 9999.9f;
	}
	if (*uParam2.f_48)
	{
		if (func_319(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (*uParam2.f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (*uParam2.f_10 == 0 || (*uParam2.f_33 > 0 && *uParam2.f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (*uParam2.f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = {0f, 0f, 0f};
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = get_nth_closest_vehicle_node_id_with_heading(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (is_vehicle_node_id_valid(iVar8))
		{
			get_vehicle_node_position(iVar8, &vVar1);
			iVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				iVar12 = true;
			}
			Global_2409361.f_165 = {vVar1};
			if (((*uParam2.f_10 || *uParam2.f_33 > 0) || !_get_is_slow_road_flag(iVar8)) || _get_supports_gps_route_flag(iVar8))
			{
				get_vehicle_node_properties(vVar1, &uVar6, &uVar7);
				if (vdist(vVar1, *uParam2.f_35) > *uParam2.f_4)
				{
					if (!func_313(&vVar1, 0))
					{
						if ((*uParam2.f_13 || uVar7 & 64 == 0) || *uParam2.f_33 == 1)
						{
							if (*uParam2.f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_310(vVar1))
									{
										if (!func_309(vVar1, 5f))
										{
											if (vVar1.z >= *uParam2.f_35.f_2 - *uParam2.f_7 || *uParam2.f_33 >= 2)
											{
												if (vVar1.z <= *uParam2.f_35.f_2 + *uParam2.f_6 || *uParam2.f_33 >= 2)
												{
													if (func_305(vVar1, uParam2) || *uParam2.f_33 >= 2)
													{
														if ((*uParam2.f_48 && !func_319(&vVar1, 0)) || *uParam2.f_48 == 0)
														{
															vVar1 = {func_302(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, iVar12, 1, *uParam2.f_51)};
															if (!iVar12)
															{
																if (iVar11)
																{
																	iVar0 += -1;
																}
															}
															if (vmag(vVar1) > 0f)
															{
																if (((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f) || *uParam2.f_33 >= 2)
																{
																	if ((*uParam2.f_12 && !func_301(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
																	{
																		if (!*uParam2.f_15 || !func_324(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
																		{
																			if (*uParam2.f_8)
																			{
																				iVar17 = *uParam2.f_31;
																				iVar18 = true;
																				iVar19 = 1;
																				fVar20 = *uParam2.f_49;
																				if (!*uParam2.f_55)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (*uParam2.f_17)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					if (*uParam2.f_33 == 1)
																					{
																						fVar20 *= 0.375f;
																					}
																				}
																				else
																				{
																					iVar18 = true;
																					iVar19 = 1;
																					if (*uParam2.f_28)
																					{
																						if (*uParam2.f_33 == 1)
																						{
																							fVar20 *= 0.375f;
																						}
																					}
																				}
																				iVar21 = 0;
																				if (*uParam2.f_3 > 7f)
																				{
																					if (func_333(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_333(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_274(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || *uParam2.f_33 >= 2)
																				{
																					if (((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52) || *uParam2.f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (*uParam2.f_52)
																						{
																							iVar22 = func_298(vVar1, *uParam2.f_54, &fVar23);
																						}
																						if (!*uParam2.f_52 || (*uParam2.f_52 && iVar22 <= *uParam2.f_53))
																						{
																							if (*uParam2.f_52)
																							{
																								if (iVar22 < *uParam2.f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									*uParam2.f_53 = iVar22;
																								}
																							}
																							if (*uParam2.f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = {vVar1};
																									Global_2409361.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar16 /*3*/], *uParam2.f_35))
																											{
																												func_297(vVar1, fVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
																								Global_2409361.f_121[Global_2409361.f_162] = fVar4;
																								Global_2409361.f_162++;
																								if (func_305(vVar1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = {vVar1};
																						*uParam1 = fVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = {vVar1};
																				*uParam1 = fVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!*uParam2.f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= 40 + iVar15 || iVar0 >= 100)
			{
				if (Global_2409361.f_162 > 0 && ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_33 >= 2))
				{
					if (*uParam2.f_30)
					{
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_295(0, uParam2);
						}
						iVar24 = get_random_int_in_range(0, Global_2409361.f_162);
						vVar25 = {Global_2409361[0 /*3*/]};
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = {Global_2409361[iVar24 /*3*/]};
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = {vVar25};
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
				}
				else
				{
					*uParam2.f_33++;
					if (*uParam2.f_33 < 3)
					{
						func_290(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = get_random_int_in_range(1 + iVar15, 40 + iVar15);
						get_nth_closest_vehicle_node_with_heading(*uParam0, iVar0, &vVar1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						vVar1 = {func_302(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, 0, 0, *uParam2.f_51)};
						vVar29 = {vVar1};
						fVar32 = fVar4;
						if (!*uParam2.f_50)
						{
							iVar33 = true;
						}
						else
						{
							iVar33 = false;
						}
						if (func_324(*uParam2.f_35, &vVar29, uParam2.f_38, uParam2.f_45, iVar33, 1) || func_319(&vVar29, iVar33))
						{
							if (!*uParam2.f_50)
							{
								*uParam2.f_33 = 0;
								*uParam2.f_50 = 1;
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								*uParam2.f_6 = 9999.9f;
								*uParam2.f_7 = 9999.9f;
								func_290(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = {vVar29};
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 3)
			{
				func_290(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_291(&Global_1312061, uParam0, uParam1, *uParam0);
				if (*uParam2.f_11)
				{
					*uParam2.f_27 = 1;
				}
				return;
			}
		}
		Global_2409361.f_164 = iVar8;
	}
}

void func_291(auto uParam0, auto uParam1, auto uParam2, Vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_292(*(uParam0[iVar2 /*4*/]), 5f, player_id(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = {*(uParam0[iVar3 /*4*/])};
		*uParam2 = *(uParam0[iVar3 /*4*/]).f_3;
	}
}

bool func_292(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_294(vParam0, fParam3, iParam4, iParam5, 0) || func_293(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

bool func_293(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_275(vParam0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_22(iVar1, 0, 1) && func_22(iParam3, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_294(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (iParam6)
			{
				if (func_22(iVar1, 0, 1) && func_22(iParam4, 0, 1))
				{
					if (get_player_team(iVar1) == get_player_team(iParam4))
					{
						return false;
					}
				}
			}
			if (func_22(iVar1, 0, 1) && func_22(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
					{
						return true;
					}
				}
				else if (vdist(func_155(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (func_22(iVar1, 0, 1))
			{
				if (vdist(func_155(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_295(int iParam0, auto uParam1)
{
	if (!func_305(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162--;
		func_296(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_295(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_295(iParam0 + 1, uParam1);
	}
}

void func_296(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409361[iParam0 /*3*/] = {Global_2409361[iParam0 + 1 /*3*/]};
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_297(Vector3 vParam0, float fParam1, int iParam2)
{
	Vector3 vVar0;
	auto uVar3;
	
	vVar0 = {Global_2409361[iParam4 /*3*/]};
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = {vParam0};
	Global_2409361.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_297(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_298(Vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_299(iVar5))
		{
			vVar1 = {func_155(iVar5)};
			fVar7 = vdist(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_299(int iParam0)
{
	if (func_22(iParam0, 0, 1))
	{
		if (!func_75(iParam0))
		{
			if (_0x9DE986FC9A87C474(player_id(), iParam0))
			{
				if (!get_player_team(iParam0) == get_player_team(player_id()))
				{
					if (func_83(player_id(), 1))
					{
						if (!func_300(get_player_team(iParam0), get_player_team(player_id()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (get_player_team(iParam0) == -1 && get_player_team(player_id()) == -1)
				{
					if (!func_83(player_id(), 1))
					{
						if (!func_279(iParam0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_300(int iParam0, int iParam1, int iParam2)
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

bool func_301(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_284(vParam0, fParam3, iParam4, iParam5, iParam6) || func_330(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

Vector3 func_302(Vector3 vParam0, float fParam1, int iParam2, int iParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	auto uVar5;
	auto uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	Vector3 vVar24;
	Vector3 vVar27;
	Vector3 vVar30;
	
	if (iParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_303(vParam0, *fParam3, vParam6))
			{
				*fParam3 += 180f;
			}
		}
		return vParam0;
	}
	get_vehicle_node_properties(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !iParam10)
	{
		get_closest_road(vParam0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*iParam12 = 1;
		}
		if (iParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (iVar11 + iVar12 != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *iParam12)
		{
			*fParam3 += 180f;
			if (*fParam3 > 360f)
			{
				*fParam3 += -360f;
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			iVar15 = true;
		}
		else
		{
			iVar15 = false;
		}
		iVar16 = false;
		if (iVar15)
		{
			if (iVar11 == 0)
			{
				if (iParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				iVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			iVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (iVar15)
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar11) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar11);
				}
				if (iVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 += IntToFloat(iVar11 - 2) * 1f;
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 += IntToFloat(iVar11 - 1) * 1f;
				}
			}
			else
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar12) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar12);
				}
				if (iVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 += IntToFloat(iVar12 - 2) * 1f;
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 += IntToFloat(iVar12 - 1) * 1f;
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 += 0.95f * fVar13;
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 += -0.5f;
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 += -1f;
			}
			if (!iParam5 || !uVar4 & 8 == 0)
			{
				fVar14 += 4.2f * -0.5f;
			}
			if (!iParam11 == 0)
			{
				func_276(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				if (fVar23 > 1.8f)
				{
					fVar14 += fVar23 - 1.8f * -0.5f;
				}
			}
		}
	}
	if (vmag(vParam6) > 0f)
	{
		if (!func_303(vParam0, *fParam3, vParam6))
		{
			if (iParam5)
			{
				*fParam3 += 180f;
			}
			else if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	vVar0 = {_get_object_offset_from_coords(vParam0, *fParam3, fVar14, 0f, 0f)};
	if (iParam5)
	{
		if (unk_0xA0F8A7517A273C05(vParam0, *fParam3, &vVar24))
		{
			vVar27 = {vVar24 - vParam0};
			if (!iParam11 == 0)
			{
				vVar30 = {vVar27 / FtoV(vmag(vVar27))};
				func_276(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				vVar30 = {vVar30 * Vector(fVar23 * 0.5f, fVar23 * 0.5f, fVar23 * 0.5f)};
				vVar27 = {vVar27 - vVar30};
				vVar24 = {vParam0 + vVar27};
			}
			vVar30 = {vVar0 - vVar24};
			vVar0 = {vVar24};
		}
	}
	return vVar0;
}

bool func_303(Vector3 vParam0, float fParam1, Vector3 vParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {0f, 1f, 0f};
	func_277(&vVar0, 0f, 0f, fParam3);
	vVar3 = {vParam4 - vParam0};
	if (func_304(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

float func_304(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

bool func_305(Vector3 vParam0, auto uParam1)
{
	if (*uParam3.f_18)
	{
		switch (*uParam3.f_26)
		{
			case 0:
				if (func_308(vParam0, *uParam3.f_19, *uParam3.f_25, 0, 0))
				{
					return true;
				}
				break;
			
			case 1:
				if (func_306(vParam0, *uParam3.f_19, *uParam3.f_22, 0, 0))
				{
					return true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(vParam0, *uParam3.f_19, *uParam3.f_22, *uParam3.f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_306(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, int iParam4)
{
	func_307(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (iParam9 && iParam10)
	{
		return true;
	}
	else if (iParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (iParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_307(auto uParam0, auto uParam1)
{
	auto uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (*uParam0.f_1 > *uParam1.f_1)
	{
		uVar0 = *uParam1.f_1;
		*uParam1.f_1 = *uParam0.f_1;
		*uParam0.f_1 = uVar0;
	}
	if (*uParam0.f_2 > *uParam1.f_2)
	{
		uVar0 = *uParam1.f_2;
		*uParam1.f_2 = *uParam0.f_2;
		*uParam0.f_2 = uVar0;
	}
}

int func_308(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam7 && iParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	return vdist(vParam0, vParam3) < fParam6 + 0.01f;
}

bool func_309(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_83(player_id(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_275(vParam0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_275(vParam0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_275(vParam0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_310(Vector3 vParam0)
{
	int iVar0;
	auto uVar1;
	
	uVar1 = func_312(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[uVar1])
	{
		if (func_311(vParam0, &(Global_2408393[uVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_311(vParam0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_311(Vector3 vParam0, auto uParam1)
{
	return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
}

int func_312(struct<2> Param0, auto uParam1)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0 < Global_2408388[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_313(auto uParam0, int iParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if (func_318(*uParam0))
	{
		if (iParam1)
		{
			vVar1 = {*uParam0};
			func_317(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_314(vVar1, &uVar0) || func_318(vVar1))
			{
				vVar1 = {*uParam0};
				func_317(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = {vVar1};
		}
	}
	return false;
}

bool func_314(Vector3 vParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_316();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_315(vParam0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_315(Vector3 vParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	switch (*uParam3.f_10)
	{
		case 0:
			return func_308(vParam0, *uParam3, *uParam3.f_6 + fParam4 + IntToFloat(Global_2404956.f_1714) * *uParam3.f_8, iParam5, iParam6);
			break;
		
		case 1:
			return func_306(vParam0, *uParam3 + Vector(fParam4 * -1f, fParam4 * -1f, fParam4 * -1f), *uParam3.f_3 + Vector(fParam4, fParam4, fParam4), iParam5, iParam6);
			break;
		
		case 2:
			if (iParam5 && iParam6)
			{
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false);
			}
			else if (iParam5)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z < *uParam3.f_2 && vParam0.z < *uParam3.f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (iParam6)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z > *uParam3.f_2 && vParam0.z > *uParam3.f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
			}
			break;
	}
	return false;
}

int func_316()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_317(auto uParam0, Vector3 vParam1, float fParam2, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {*uParam0 - vParam1};
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	}
	else
	{
		vVar0 = {0f, 1f, 0f};
		func_277(&vVar0, 0f, 0f, get_random_float_in_range(0f, 360f));
	}
	vVar0 = {vVar0 * Vector(fParam4 + fParam5, fParam4 + fParam5, fParam4 + fParam5)};
	if (!iParam6)
	{
		vVar3 = {vParam1 + vVar0};
	}
	else
	{
		vVar3 = {vParam1 - vVar0};
	}
	*uParam0 = vVar3.x;
	*uParam0.f_1 = vVar3.y;
}

bool func_318(Vector3 vParam0)
{
	float fVar0;
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
		{
			return true;
		}
	}
	return false;
}

int func_319(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_308(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 1:
				if (func_306(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, true))
				{
					iVar0 = true;
				}
				break;
		}
		if (iVar0)
		{
			if (iParam1)
			{
				*uParam0 = {func_320(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0)};
			}
		}
	}
	return iVar0;
}

Vector3 func_320(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	int iVar0;
	Vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_317(&vParam0, vParam3, fParam9, fParam11, iParam12);
			break;
		
		case 1:
			func_323(&vParam0, vParam3, vParam6, fParam11, iParam12);
			break;
		
		case 2:
			func_321(&vParam0, vParam3, vParam6, fParam9, fParam11, iParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		get_nth_closest_vehicle_node(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_308(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_306(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!is_point_in_angled_area(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

void func_321(auto uParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	Vector3 vVar10;
	Vector3 vVar13;
	float fVar16;
	Vector3 vVar17;
	Vector3 vVar20;
	Vector3 vVar23;
	Vector3 vVar26;
	Vector3 vVar29;
	
	vVar0 = {vParam4 - vParam1};
	vVar0.z = 0f;
	vVar3 = {*uParam0 - vParam1};
	vVar3.z = 0f;
	vVar6 = {func_322(0f, 0f, 1f, vVar0)};
	vVar6 = {vVar6 / FtoV(vmag(vVar6))};
	fVar9 = vmag(vVar3) * sin(get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y));
	if (fVar9 < fParam7 * 0.5f)
	{
		if (!iParam9)
		{
			if (func_304(vVar6, vVar3) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_304(vVar6, vVar3) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8)};
		}
		vVar10 = {*uParam0 + vVar6};
		fVar16 = vdist(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = {vParam1 + vParam4 / Vector(2f, 2f, 2f)};
		vVar17.z = 0f;
		vVar6 = {func_322(0f, 0f, 1f, vVar0)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		vVar6 = {vVar6 * Vector(fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f)};
		vVar20 = {vVar17 - vVar6};
		vVar23 = {vVar17 + vVar6};
		vVar26 = {vVar23 - vVar20};
		vVar26.z = 0f;
		vVar29 = {*uParam0 - vVar20};
		vVar29.z = 0f;
		vVar6 = {func_322(0f, 0f, 1f, vVar26)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		fVar9 = vmag(vVar29) * sin(get_angle_between_2d_vectors(vVar26.x, vVar26.y, vVar29.x, vVar29.y));
		if (!iParam9)
		{
			if (func_304(vVar6, vVar29) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_304(vVar6, vVar29) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8)};
		}
		vVar13 = {*uParam0 + vVar6};
		if (vdist(vVar10, *uParam0, *uParam0.f_1, 0f) < vdist(vVar13, *uParam0, *uParam0.f_1, 0f))
		{
			*uParam0 = {vVar10};
		}
		else
		{
			*uParam0 = {vVar13};
		}
	}
}

Vector3 func_322(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

void func_323(auto uParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, float fParam5, int iParam6)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = {*uParam0};
	fVar3 = *uParam0 - Param1;
	fVar4 = *uParam0 - Param4;
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = *uParam0.f_1 - Param1.f_1;
	fVar7 = *uParam0.f_1 - Param4.f_1;
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = {*uParam0};
	if (!iParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = Param1 - fParam7;
			}
			else
			{
				vVar0.x = Param4 + fParam7;
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = Param1.f_1 - fParam7;
		}
		else
		{
			vVar0.y = Param4.f_1 + fParam7;
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = Param4 + fParam7;
		}
		else
		{
			vVar0.x = Param1 - fParam7;
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = Param4.f_1 + fParam7;
	}
	else
	{
		vVar0.y = Param1.f_1 - fParam7;
	}
	*uParam0 = {vVar0};
}

bool func_324(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (func_341(vParam0))
	{
		if (func_328(uParam3, iParam6, 0, 1))
		{
			if (iParam6)
			{
			}
			return true;
		}
	}
	if (func_326(uParam3, iParam6, 1))
	{
		if (iParam6)
		{
		}
		return true;
	}
	if (iParam7)
	{
		if (func_325(*uParam3, 1056964608))
		{
			return true;
		}
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (vdist(*uParam3, *(uParam4[iVar0 /*3*/])) < *uParam5[iVar0])
		{
			if (iParam6)
			{
				func_317(uParam3, *(uParam4[iVar0 /*3*/]), *uParam5[iVar0], 1036831949, 0);
			}
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		return true;
	}
	return false;
}

bool func_325(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (vdist(vParam0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_326(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	auto uVar1;
	Vector3 vVar2;
	
	if (func_314(*uParam0, &uVar0))
	{
		if (iParam1)
		{
			vVar2 = {*uParam0};
			func_327(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 0, iParam2);
			if (func_314(vVar2, &uVar1) || func_318(vVar2))
			{
				vVar2 = {*uParam0};
				func_327(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 1, iParam2);
			}
			*uParam0 = {vVar2};
		}
		return true;
	}
	return false;
}

void func_327(auto uParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam4)
	{
		switch (*uParam1.f_10)
		{
			case 0:
				*uParam0 = {func_320(*uParam0, *uParam1, 0f, 0f, 0f, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, 0, fParam2, iParam3)};
				break;
			
			case 1:
				*uParam0 = {func_320(*uParam0, *uParam1, *uParam1.f_3, 0f, 1, fParam2, iParam3)};
				break;
			
			case 2:
				*uParam0 = {func_320(*uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, 2, fParam2, iParam3)};
				break;
		}
	}
	else
	{
		switch (*uParam1.f_10)
		{
			case 0:
				func_317(uParam0, *uParam1, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, fParam2, iParam3);
				break;
			
			case 1:
				func_323(uParam0, *uParam1, *uParam1.f_3, fParam2, iParam3);
				break;
			
			case 2:
				func_321(uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, fParam2, iParam3);
				break;
			}
	}
}

bool func_328(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!iParam2 || (iParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_315(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (iParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = {Global_2407408[iVar0 /*17*/].f_13};
						}
						else
						{
							vVar1 = {*uParam0};
							func_327(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, iParam3);
							if (func_328(&vVar1, 0, 0, 0))
							{
								vVar1 = {*uParam0};
								func_327(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = {vVar1};
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_329(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	Vector3 vVar14;
	auto uVar17;
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!vmag(*uParam2.f_35) > 0f)
		{
			*uParam2.f_35 = {*uParam0};
		}
		if (*uParam2.f_15)
		{
			if (func_324(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		if (*uParam2.f_48)
		{
			if (func_319(uParam0, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			vVar1 = {Global_2404956.f_1151[iVar0 /*4*/]};
			fVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (vmag(vVar1) > 0f)
			{
				if ((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f)
				{
					if ((*uParam2.f_12 && !func_301(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
					{
						if (!*uParam2.f_15 || !func_324(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
						{
							if (*uParam2.f_8)
							{
								iVar6 = *uParam2.f_31;
								iVar7 = true;
								iVar8 = 1;
								fVar9 = *uParam2.f_49;
								if (!*uParam2.f_55)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (*uParam2.f_17)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									if (*uParam2.f_33 == 1)
									{
										fVar9 *= 0.375f;
									}
								}
								else
								{
									iVar7 = true;
									iVar8 = 1;
									if (*uParam2.f_28)
									{
										if (*uParam2.f_33 == 1)
										{
											fVar9 *= 0.375f;
										}
									}
								}
								iVar10 = false;
								if (*uParam2.f_3 > 7f)
								{
									if (func_333(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
									{
										iVar10 = true;
									}
								}
								else if (func_333(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_274(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
								{
									iVar10 = true;
								}
								if (iVar10)
								{
									if ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52)
									{
										fVar12 = 0f;
										if (*uParam2.f_52)
										{
											iVar11 = func_298(vVar1, *uParam2.f_54, &fVar12);
										}
										if (!*uParam2.f_52 || (*uParam2.f_52 && iVar11 <= *uParam2.f_53))
										{
											if (*uParam2.f_52)
											{
												if (iVar11 < *uParam2.f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													*uParam2.f_53 = iVar11;
												}
											}
											if (*uParam2.f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = {vVar1};
													Global_2409361.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar5 /*3*/], *uParam2.f_35))
															{
																func_297(vVar1, fVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
												Global_2409361.f_121[Global_2409361.f_162] = fVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = {vVar1};
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = {vVar1};
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (*uParam2.f_30)
			{
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_295(0, uParam2);
				}
				iVar13 = get_random_int_in_range(0, Global_2409361.f_162);
				vVar14 = {Global_2409361[0 /*3*/]};
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = {Global_2409361[iVar13 /*3*/]};
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = {vVar14};
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 2)
			{
				return func_329(uParam0, uParam1, uParam2);
			}
			else
			{
				*uParam2.f_33 = 0;
				func_290(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

bool func_330(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_332(vParam0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_331(vParam0, fParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_22(iVar1, 0, 1) && func_22(iParam5, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_331(Vector3 vParam0, float fParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5)
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[4];
	Vector3 vVar14;
	Vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	Vector3 vVar23;
	Vector3 vVar26;
	
	if (func_275(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return true;
	}
	func_276(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	fVar20 = absf(vVar17.y - vVar14.y);
	fVar21 = absf(vVar17.x - vVar14.x);
	fVar22 = absf(vVar17.z - vVar14.z);
	vVar23 = {0f, fVar20 * 0.5f, 0f};
	func_277(&vVar23, 0f, 0f, fParam3);
	vVar26 = {fVar21 * 0.5f, 0f, 0f};
	func_277(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = {vParam0 + vVar23 + vVar26};
	vVar1[0 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[1 /*3*/] = {vParam0 + vVar23 - vVar26};
	vVar1[1 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[2 /*3*/] = {vParam0 - vVar23 + vVar26};
	vVar1[2 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[3 /*3*/] = {vParam0 - vVar23 - vVar26};
	vVar1[3 /*3*/].f_2 += 0.5f * fVar22;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_275(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_332(Vector3 vParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_278(iParam3, 1008981770);
	fVar1 = func_278(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < fVar0 + fVar1)
	{
		return true;
	}
	return false;
}

bool func_333(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_335(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_334(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_334(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_22(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_155(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_22(iVar1, 1, 1))
		{
			if (!func_77(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_283(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_155(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (get_distance_between_coords(func_155(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_335(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_22(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_283(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_279(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_155(iVar1), vParam0, 1) < fParam3)
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

void func_336(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_339(vParam0);
	if (iVar0 > -1 && !func_338())
	{
		func_346();
		switch (iVar0)
		{
			case 0:
				func_337(-1139.678f, -2694.165f, 12.949f, 283.4298f);
				func_337(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
				func_337(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
				func_337(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
				func_337(-1110.51f, -2693.236f, 12.9595f, 298.84f);
				func_337(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
				func_337(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
				func_337(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
				func_337(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
				break;
			
			case 1:
				func_337(-1411.731f, -533.6462f, 30.2703f, 215.116f);
				func_337(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
				func_337(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
				func_337(-1438.8f, -584.4678f, 29.595f, 118.1207f);
				break;
			
			case 2:
				func_337(-780.5905f, 292.8159f, 84.673f, 97.2697f);
				func_337(-788.6147f, 291.8073f, 84.72f, 97.7348f);
				func_337(-765.572f, 294.4459f, 84.5182f, 93.9327f);
				func_337(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
				break;
			
			case 3:
				func_337(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
				func_337(-647.239f, 49.2068f, 40.7135f, 355.9723f);
				func_337(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
				func_337(-610.5603f, 5.1258f, 41.2404f, 98.696f);
				break;
			
			case 4:
				func_337(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
				func_337(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
				func_337(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
				func_337(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
				break;
			
			case 5:
				func_337(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
				func_337(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
				func_337(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
				func_337(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
				break;
			
			case 6:
				func_337(-58.1347f, -573.486f, 36.5789f, 341.8442f);
				func_337(-64.227f, -590.2214f, 35.1654f, 338.972f);
				func_337(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
				func_337(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
				break;
			
			case 7:
				func_337(-232.1917f, -978.1431f, 28.166f, 160.2115f);
				func_337(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
				func_337(-251.993f, -998.3963f, 28.3747f, 249.3297f);
				func_337(-262.222f, -994.5226f, 29.23f, 249.4673f);
				break;
			
			case 8:
				func_337(151.624f, -1309.343f, 28.2023f, 243.201f);
				func_337(152.7886f, -1305.608f, 28.2023f, 243.9973f);
				func_337(145.8017f, -1287.19f, 28.312f, 120.6275f);
				func_337(142.8935f, -1282.286f, 28.3156f, 120.3024f);
				break;
			
			case 9:
				func_337(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
				func_337(-2322.187f, 277.638f, 168.4671f, 23.4249f);
				func_337(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
				func_337(-2314.396f, 290.9f, 168.4671f, 114.3983f);
				func_337(-2316.81f, 296.424f, 168.4671f, 113.6228f);
				func_337(-2318.572f, 299.2423f, 168.4671f, 293.83f);
				func_337(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
				func_337(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
				func_337(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
				func_337(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
				func_337(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
				func_337(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
				break;
			
			case 10:
				func_337(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
				func_337(-612.8933f, 692.116f, 148.7577f, 79.1005f);
				func_337(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
				func_337(-639.3558f, 696.9992f, 150.5134f, 77.481f);
				break;
			
			case 11:
				func_337(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_337(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_337(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_337(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 12:
				func_337(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_337(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_337(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_337(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 13:
				func_337(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
				func_337(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
				func_337(-1283.894f, 467.2136f, 95.4036f, 95.058f);
				func_337(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
				break;
			
			case 14:
				func_337(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
				func_337(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
				func_337(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
				func_337(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
				break;
			
			case 15:
				func_337(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_337(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_337(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_337(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 16:
				func_337(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_337(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_337(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_337(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 17:
				func_337(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				func_337(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_337(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_337(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				break;
			
			case 18:
				func_337(128.4334f, 578.7522f, 182.2934f, 106.5458f);
				func_337(97.7791f, 576.8907f, 181.5599f, 91.3539f);
				func_337(83.5896f, 576.4791f, 181.0832f, 89.7262f);
				func_337(69.9599f, 575.9902f, 180.5019f, 91.4926f);
				break;
			
			case 19:
				func_337(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
				func_337(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
				func_337(-931.6637f, 703.693f, 151.369f, 87.7447f);
				func_337(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
				break;
			
			case 20:
				func_337(-872.1293f, 698.7591f, 148.5084f, 339.673f);
				func_337(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
				func_337(-907.3458f, 695.8158f, 150.396f, 270.6491f);
				func_337(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
				break;
			
			case 21:
			case 25:
				func_337(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_337(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_337(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_337(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_337(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_337(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_337(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_337(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
				break;
			
			case 22:
			case 26:
				func_337(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_337(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_337(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_337(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_337(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_337(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_337(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_337(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
				break;
			
			case 23:
			case 27:
				func_337(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_337(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_337(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_337(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_337(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_337(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_337(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_337(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
				break;
			
			case 24:
			case 28:
				func_337(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_337(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_337(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_337(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_337(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_337(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_337(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_337(-9.239f, -773.0505f, 43.0788f, 318.0367f);
				break;
			}
	}
}

void func_337(Vector3 vParam0, float fParam1)
{
	if (Global_2404956.f_1150 < 32)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2404956.f_1151[Global_2404956.f_1150 /*4*/] = {vParam0};
		Global_2404956.f_1151[Global_2404956.f_1150 /*4*/].f_3 = fParam3;
		Global_2404956.f_1150++;
	}
}

bool func_338()
{
	if (is_bit_set(Global_1617379.f_13, false) && !Global_2435528.f_5852)
	{
		return false;
	}
	return false;
}

int func_339(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.z = Global_2409143[iVar0 /*7*/].f_2 + Global_2409143[iVar0 /*7*/].f_3.f_2 * 0.5f;
		}
		if (func_311(vParam0, &(Global_2409143[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_340(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	
	vVar1 = {*uParam0};
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = Global_2409106[iVar0 /*7*/].f_2 + Global_2409106[iVar0 /*7*/].f_3.f_2 * 0.5f;
		}
		if (func_311(vVar1, &(Global_2409106[iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_321(&vVar1, Global_2409106[iVar0 /*7*/], Global_2409106[iVar0 /*7*/].f_3, Global_2409106[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_341(Vector3 vParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_345(player_id(), 1))
		{
			return true;
		}
		if (!func_344(vParam0, 1008981770))
		{
			if (!func_328(&vParam0, 0, 0, 0))
			{
				return true;
			}
			else if (func_328(&vParam0, 0, 1, 0))
			{
				return true;
			}
		}
		else
		{
			iVar0 = func_343(vParam0, 1008981770);
			if (iVar0 > -1)
			{
				vVar1 = {func_342(&(Global_2404956.f_39[iVar0 /*12*/]))};
				if (!func_328(&vVar1, 0, 0, 0))
				{
					if (!func_328(&vParam0, 0, 0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_342(auto uParam0)
{
	switch (*uParam0.f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + *uParam0.f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_343(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_315(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_344(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_315(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_345(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_87(iParam0) != 0;
	}
	return func_83(iParam0, iParam1);
}

void func_346()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404956.f_1151[iVar0 /*4*/] = {Var1};
		iVar0++;
	}
	Global_2404956.f_1150 = 0;
}

void func_347()
{
	if (_0xE64A3CA08DFA37A9(Global_2404956.f_621))
	{
		network_remove_entity_area(Global_2404956.f_621);
	}
	Global_2404956.f_621 = -1;
}

int func_348(int iParam0)
{
	if (is_screen_faded_out())
	{
		return 10000;
	}
	if (iParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_349(int iParam0)
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

bool func_350(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				if (iParam3 && iVar2 == player_ped_id())
				{
				}
				else if (iParam2)
				{
					if (!is_ped_injured(iVar2))
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
					if (!is_ped_injured(iVar3))
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

void func_351()
{
	if (func_354())
	{
		if (func_352())
		{
			Local_194.f_84 = 0;
		}
	}
}

bool func_352()
{
	Vector3 vVar0;
	
	if ((SCRIPT::HAS_SCRIPT_LOADED("AM_MP_SMPL_INTERIOR_INT") && func_230(Local_194, Local_285.f_3)) && !func_27())
	{
		vVar0.x = Local_194;
		vVar0.y = Local_285.f_3;
		vVar0.z = func_353();
		if (!network_is_script_active("AM_MP_SMPL_INTERIOR_INT", vVar0.z, 1, 0))
		{
			SYSTEM::START_NEW_SCRIPT_with_args("AM_MP_SMPL_INTERIOR_INT", &vVar0, 3, 1424);
			set_script_as_no_longer_needed("AM_MP_SMPL_INTERIOR_INT");
		}
		return true;
	}
	return false;
}

auto func_353()
{
	return Global_2418472[player_id() /*313*/].f_305.f_2;
}

auto func_354()
{
	return Local_194.f_84;
}

void func_355(auto uParam0, int iParam1)
{
	switch (func_16(iParam1))
	{
		case 0:
			func_356(uParam0, iParam1);
			break;
	}
}

void func_356(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	
	if (iParam1 == 20)
	{
		vVar0 = {550.9767f, -1896.741f, 24.1463f};
		if (is_bit_set(*uParam0.f_79, 2))
		{
			if (vdist(func_155(player_id()), vVar0) > 70f)
			{
				clear_bit(uParam0.f_79, 2);
			}
		}
		else if (vdist(func_155(player_id()), vVar0) <= 70f)
		{
			if (!_0x589F80B325CC82C5(vVar0, joaat("prop_facgate_01"), &iVar3))
			{
				iVar3 = get_hash_key("WHOUSE_DOOR_RANCHO_2A");
				if (!_does_door_exist(iVar3))
				{
					add_door_to_system(iVar3, joaat("prop_facgate_01"), vVar0, 0, 0, 0);
				}
			}
			_set_door_ajar_angle(iVar3, 1f, 0, 0);
			_set_door_acceleration_limit(iVar3, 0, 0, 0);
			vVar0 = {539.9537f, -1901.956f, 24.2126f};
			if (!_0x589F80B325CC82C5(vVar0, joaat("prop_facgate_01b"), &iVar3))
			{
				iVar3 = get_hash_key("WHOUSE_DOOR_RANCHO_2B");
				if (!_does_door_exist(iVar3))
				{
					add_door_to_system(iVar3, joaat("prop_facgate_01b"), vVar0, 0, 0, 0);
				}
			}
			_set_door_ajar_angle(iVar3, -1f, 0, 0);
			_set_door_acceleration_limit(iVar3, 0, 0, 0);
			set_bit(uParam0.f_79, 2);
		}
	}
	if (iParam1 == 18 && !is_bit_set(*uParam0.f_79, 2))
	{
		create_model_hide(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), 0);
		create_model_hide(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), 0);
		create_model_hide(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
		create_model_hide(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
		set_bit(uParam0.f_79, 2);
	}
	if (iParam1 == 12 && !is_bit_set(*uParam0.f_79, 2))
	{
		create_model_hide(-550.8629f, -1772.796f, 22.3438f, 4f, -1391539216, 0);
		create_model_hide(-542.201f, -1777.798f, 22.1771f, 4f, 406528547, 0);
		set_bit(uParam0.f_79, 2);
	}
}

void func_357(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	
	if (func_143(0, uParam0))
	{
		if (*uParam0.f_23 != 0)
		{
			request_model(*uParam0.f_23);
		}
		if (*uParam0.f_31 != 0)
		{
			request_model(*uParam0.f_31);
		}
		func_114(1, uParam0);
	}
	else if (func_143(1, uParam0))
	{
		if (*uParam0.f_23 == 0 && *uParam0.f_31 == 0)
		{
			func_114(3, uParam0);
			return;
		}
		if (*uParam0.f_23 != 0 && !has_model_loaded(*uParam0.f_23))
		{
			return;
		}
		if (*uParam0.f_31 != 0 && !has_model_loaded(*uParam0.f_31))
		{
			return;
		}
		iVar0 = false;
		iVar1 = false;
		if (*uParam0.f_23 != 0)
		{
			*uParam0.f_30 = create_object_no_offset(*uParam0.f_23, *uParam0.f_24, 0, 0, 1);
			set_entity_rotation(*uParam0.f_30, *uParam0.f_27, 2, 1);
			freeze_entity_position(*uParam0.f_30, true);
			iVar0 = true;
		}
		if (*uParam0.f_31 != 0)
		{
			*uParam0.f_38 = create_object_no_offset(*uParam0.f_31, *uParam0.f_32, 0, 0, 1);
			set_entity_rotation(*uParam0.f_38, *uParam0.f_35, 2, 1);
			freeze_entity_position(*uParam0.f_38, true);
			iVar1 = true;
		}
		if (iVar0)
		{
			set_model_as_no_longer_needed(*uParam0.f_23);
		}
		if (iVar1)
		{
			set_model_as_no_longer_needed(*uParam0.f_31);
		}
		func_114(3, uParam0);
	}
	else if (func_143(3, uParam0))
	{
	}
	else if (func_143(2, uParam0))
	{
		if (is_entity_dead(player_ped_id(), 0))
		{
			func_114(7, uParam0);
			return;
		}
		if ((has_anim_dict_loaded(*uParam0.f_3) && does_entity_exist(*uParam0.f_2)) && !is_entity_dead(*uParam0.f_2, 0))
		{
			if (_0x7350823473013C02(*uParam0.f_2))
			{
				set_local_player_visible_in_cutscene(0, 1);
				func_359(1, 1);
				func_358(uParam0);
				freeze_entity_position(*uParam0.f_2, false);
				*uParam0.f_13 = create_synchronized_scene(*uParam0.f_14, *uParam0.f_17, 2);
				task_synchronized_scene(*uParam0.f_2, *uParam0.f_13, *uParam0.f_3, *uParam0.f_4, 1000f, -1000f, 4, 0, 1000f, 0);
				set_synchronized_scene_phase(*uParam0.f_13, *uParam0.f_20);
				func_114(4, uParam0);
			}
		}
	}
	else if (func_143(4, uParam0))
	{
		if (is_synchronized_scene_running(*uParam0.f_13))
		{
			*uParam0.f_22 = get_synchronized_scene_phase(*uParam0.f_13);
			if (!is_string_null_or_empty(*uParam0.f_52))
			{
				iVar2 = false;
				while (iVar2 < 2)
				{
					if ((!is_bit_set(*uParam0.f_45, iVar2) && !is_string_null_or_empty(*uParam0.f_46[iVar2])) && *uParam0.f_22 >= *uParam0.f_49[iVar2])
					{
						if (!is_entity_dead(*uParam0.f_2, 0))
						{
							vVar3 = {get_entity_coords(*uParam0.f_2, 1)};
						}
						play_sound_from_coord(-1, *uParam0.f_46[iVar2], vVar3, *uParam0.f_52, 0, 0, 0);
						set_bit(uParam0.f_45, iVar2);
					}
					iVar2++;
				}
			}
			if (*uParam0.f_22 > *uParam0.f_21)
			{
				func_114(5, uParam0);
			}
		}
	}
	else if (func_143(7, uParam0))
	{
	}
}

void func_358(auto uParam0)
{
	if (does_cam_exist(*uParam0.f_5))
	{
		destroy_cam(*uParam0.f_5, 0);
	}
	*uParam0.f_5 = create_camera(26379945, 1);
	set_cam_params(*uParam0.f_5, *uParam0.f_6, *uParam0.f_9, *uParam0.f_12, false, 1, 1, 2);
	set_cam_far_clip(*uParam0.f_5, 1000f);
	shake_cam(*uParam0.f_5, "HAND_SHAKE", 0.25f);
	render_script_cams(true, false, 3000, 1, 0, 0);
}

void func_359(int iParam0, int iParam1)
{
	func_361();
	func_139(1);
	clear_help(1);
	clear_prints();
	func_129(1, 1, 1, 0);
	func_360();
	func_127(12, 1, -1);
	func_126(0);
	set_widescreen_borders(true, -1);
	display_radar(false);
	display_hud(false);
	func_139(1);
	func_124(1);
	Global_2428492.f_3169 = 1;
	if (iParam0)
	{
		if (!network_is_in_mp_cutscene())
		{
			network_set_in_mp_cutscene(1, iParam1);
		}
	}
}

void func_360()
{
	func_126(0);
	func_127(4, 1, -1);
	func_127(6, 1, -1);
	func_127(7, 1, -1);
	func_127(3, 1, -1);
	func_127(1, 1, -1);
	func_127(2, 1, -1);
	func_127(11, 1, -1);
	func_127(13, 1, -1);
	func_127(14, 1, -1);
	func_127(16, 1, -1);
}

void func_361()
{
	Global_1312569 = 1;
	StringCopy(&(Global_1312569.f_1), get_this_script_name(), 24);
	Global_1312569.f_7 = get_hash_key(&(Global_1312569.f_1));
}

bool func_362()
{
	int iVar0;
	
	func_368(&iVar0);
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
	if (func_367())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_366())
	{
		return true;
	}
	if (func_365(157))
	{
		if (!func_53())
		{
			return true;
		}
	}
	if (func_365(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_363() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_363()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_363()
{
	switch (func_364())
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

auto func_364()
{
	return Global_25120;
}

bool func_365(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_366()
{
	return Global_2443085;
}

auto func_367()
{
	return Global_2434762.f_569;
}

void func_368(auto uParam0)
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
					func_369(iVar0);
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

void func_369(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_22(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_370(iVar4, &iVar5))
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

bool func_370(int iParam0, auto uParam1)
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

void func_371()
{
	wait(0);
}

void func_372()
{
	func_378(&(Local_194.f_4.f_6));
	func_376(&(Local_194.f_4), Local_194);
	func_374(Local_194);
	func_247(0, Local_194, 0);
	if (is_bit_set(Global_1728515, false))
	{
		set_no_loading_screen(0);
		clear_bit(&Global_1728515, false);
	}
	func_373();
}

void func_373()
{
	terminate_this_thread();
}

void func_374(int iParam0)
{
	if (!func_375(iParam0))
	{
		return;
	}
	clear_bit(&(Global_1728515.f_13), iParam0);
	clear_bit(&(Global_1728515.f_14), iParam0);
	clear_bit(&(Global_1728515.f_15), iParam0);
	clear_bit(&(Global_1728515.f_106), iParam0);
	clear_bit(&(Global_1728515.f_107), iParam0);
	Global_1728515.f_16[iParam0 /*3*/] = {0f, 0f, 0f};
	Global_1728515.f_83[iParam0] = 0f;
	if (Global_2418472[player_id() /*313*/].f_305.f_4 == iParam0)
	{
		Global_2418472[player_id() /*313*/].f_305.f_4 = -1;
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), 2);
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), true);
	}
}

bool func_375(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 22)
	{
		return true;
	}
	return false;
}

void func_376(auto uParam0, int iParam1)
{
	switch (func_16(iParam1))
	{
		case 0:
			func_377(uParam0, iParam1);
			break;
	}
}

void func_377(auto uParam0, int iParam1)
{
	if (iParam1 == 20)
	{
	}
	if (iParam1 == 18)
	{
		remove_model_hide(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), false);
		remove_model_hide(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), false);
		remove_model_hide(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), false);
		remove_model_hide(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), false);
		clear_bit(uParam0.f_79, 2);
	}
	if (iParam1 == 12)
	{
		remove_model_hide(-550.8629f, -1772.796f, 22.3438f, 4f, -1391539216, false);
		remove_model_hide(-542.201f, -1777.798f, 22.1771f, 4f, 406528547, false);
		clear_bit(uParam0.f_79, 2);
	}
}

void func_378(auto uParam0)
{
	if (does_entity_exist(*uParam0.f_30))
	{
		delete_object(uParam0.f_30);
	}
	if (does_entity_exist(*uParam0.f_38))
	{
		delete_object(uParam0.f_38);
	}
}

void func_379(auto uParam0)
{
	Local_194 = *uParam0;
	network_set_this_script_is_network_script(32, 0, Local_194);
	func_392(0, -1, 0);
	network_register_host_broadcast_variables(&uLocal_96, 1);
	network_register_player_broadcast_variables(&vLocal_97, 97);
	if (!func_391())
	{
		func_372();
	}
	if (network_is_game_in_progress())
	{
	}
	else
	{
		func_372();
	}
	func_380();
}

void func_380()
{
	func_389(Local_194, &(Local_194.f_1));
	func_381(Local_194, &(Local_194.f_4));
	if (func_16(Local_194) == 0)
	{
		Local_194.f_90 = func_31(Local_194);
	}
	if (is_bit_set(Global_1728515.f_107, Local_194))
	{
		func_374(Local_194);
	}
	clear_area_of_peds(Local_194.f_1, 20f, 0);
}

void func_381(int iParam0, auto uParam1)
{
	switch (func_16(iParam0))
	{
		case 0:
			func_382(iParam0, uParam1);
			break;
	}
}

void func_382(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = func_31(iParam0);
	switch (func_269(iVar0))
	{
		case 0:
			func_388(uParam1);
			break;
		
		case 1:
			func_387(uParam1);
			break;
		
		case 2:
			func_386(uParam1);
			break;
	}
	func_268(iParam0, uParam1.f_73);
	func_385(iParam0, uParam1);
	*uParam1.f_5 = "AM_MP_WAREHOUSE";
	switch (iParam0)
	{
		case 0:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {55.6698f, -2562.517f, 9.7216f};
			*uParam1.f_6.f_9 = {-26.9934f, 0f, 158.2394f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {55.173f, -2569.18f, 5.005f};
			*uParam1.f_6.f_17 = {0f, 0f, 88.92f};
			*uParam1.f_6.f_20 = 0.185f;
			*uParam1.f_6.f_21 = 0.45f;
			*uParam1.f_6.f_39 = {44.7715f, -2557.584f, 10.1455f};
			*uParam1.f_6.f_42 = {-8.0643f, 0f, -152.2484f};
			break;
		
		case 1:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-1085.303f, -1258.34f, 6.2175f};
			*uParam1.f_6.f_9 = {-8.7714f, 0f, -149.6619f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-1083.55f, -1262.168f, 4.584f};
			*uParam1.f_6.f_17 = {0f, 0f, 120f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			*uParam1.f_6.f_39 = {-1059.413f, -1258.688f, 9.2647f};
			*uParam1.f_6.f_42 = {-0.8577f, -0.0673f, 101.8546f};
			*uParam1.f_6.f_23 = joaat("prop_damdoor_01");
			*uParam1.f_6.f_24 = {-1083.314f, -1262.911f, 6.048f};
			*uParam1.f_6.f_27 = {0f, 0f, 120f};
			*uParam1.f_6.f_31 = joaat("prop_damdoor_01");
			*uParam1.f_6.f_32 = {-1083.289f, -1262.854f, 3.742f};
			*uParam1.f_6.f_35 = {0f, 0f, 120f};
			break;
		
		case 2:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {894.9501f, -1036.63f, 35.7994f};
			*uParam1.f_6.f_9 = {-6.6207f, 0f, -74.3905f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {896.377f, -1036.943f, 34.114f};
			*uParam1.f_6.f_17 = {0f, 0f, -176.04f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			*uParam1.f_6.f_39 = {910.2495f, -1025.511f, 38.8374f};
			*uParam1.f_6.f_42 = {-9.788f, 0f, 130.8543f};
			break;
		
		case 3:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {249.927f, -1959.511f, 23.9722f};
			*uParam1.f_6.f_9 = {0.0683f, 0f, 47.4904f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {246.915f, -1957.426f, 22.234f};
			*uParam1.f_6.f_17 = {0f, 0f, -41.4f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			*uParam1.f_6.f_39 = {257.5783f, -1951.699f, 24.6414f};
			*uParam1.f_6.f_42 = {-0.1556f, 0f, 115.5168f};
			break;
		
		case 4:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-422.9159f, 186.277f, 81.3179f};
			*uParam1.f_6.f_9 = {0.2632f, 0f, 96.0908f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-424.77f, 186.591f, 79.806f};
			*uParam1.f_6.f_17 = {0f, 0f, 6.84f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 5:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-1040.969f, -2022.84f, 13.8865f};
			*uParam1.f_6.f_9 = {-4.3062f, 0f, 128.7958f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-1041.771f, -2024.093f, 12.262f};
			*uParam1.f_6.f_17 = {0f, 0f, 48.6f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 6:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-1269.049f, -810.1869f, 17.6841f};
			*uParam1.f_6.f_9 = {-5.2284f, 0f, -154.3061f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-1267.408f, -811.694f, 16.108f};
			*uParam1.f_6.f_17 = {0f, 0f, 129.24f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 7:
			*uParam1.f_6.f_3 = "anim@apt_trans@garage";
			*uParam1.f_6.f_4 = "gar_open_1_left";
			*uParam1.f_6.f_14 = {-873.02f, -2736.37f, 12.96f};
			*uParam1.f_6.f_17 = {0f, 0f, -1.44f};
			*uParam1.f_6.f_20 = 0f;
			*uParam1.f_6.f_21 = 0.45f;
			func_383(uParam1.f_6);
			break;
		
		case 8:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {275.3322f, -3009.54f, 10.6753f};
			*uParam1.f_6.f_9 = {-38.649f, 0f, 167.1707f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {276.13f, -3015.219f, 5.299f};
			*uParam1.f_6.f_17 = {0f, 0f, 89.64f};
			*uParam1.f_6.f_20 = 0.22f;
			*uParam1.f_6.f_21 = 0.48f;
			*uParam1.f_6.f_23 = joaat("prop_damdoor_01");
			*uParam1.f_6.f_24 = {276.161f, -3016.038f, 6.4456f};
			*uParam1.f_6.f_27 = {0f, 0f, 90f};
			break;
		
		case 9:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {1575.451f, -2129.365f, 80.8606f};
			*uParam1.f_6.f_9 = {-16.8649f, 0f, 103.5603f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {1569.734f, -2129.194f, 77.335f};
			*uParam1.f_6.f_17 = {0f, 0f, 15.48f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			*uParam1.f_6.f_23 = joaat("prop_damdoor_01");
			*uParam1.f_6.f_24 = {1568.861f, -2129.332f, 78.573f};
			*uParam1.f_6.f_27 = {0f, 0f, 15.3f};
			break;
		
		case 10:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-307.5915f, -2705.994f, 11.3516f};
			*uParam1.f_6.f_9 = {-13.9349f, 0f, 44.8217f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-316.077f, -2698.804f, 6.55f};
			*uParam1.f_6.f_17 = {0f, 0f, 134.28f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 11:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {501.5328f, -645.445f, 28.0574f};
			*uParam1.f_6.f_9 = {-22.2649f, 0f, 160.9995f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {499.179f, -651.811f, 23.909f};
			*uParam1.f_6.f_17 = {0f, 0f, 84.24f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 12:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-539.1638f, -1778.434f, 23.8737f};
			*uParam1.f_6.f_9 = {-9.2253f, 0f, -119.9646f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-528.827f, -1784.887f, 20.598f};
			*uParam1.f_6.f_17 = {0f, 0f, 149.04f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 13:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_r";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-294.106f, -1359.92f, 32.7505f};
			*uParam1.f_6.f_9 = {-4.7499f, 0f, -0.9732f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-296.605f, -1353.023f, 30.308f};
			*uParam1.f_6.f_17 = {0f, 0f, -89.64f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 14:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {356.1015f, 326.3331f, 107.5898f};
			*uParam1.f_6.f_9 = {-18.8627f, 0f, 59.592f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {350.351f, 330.055f, 103.445f};
			*uParam1.f_6.f_17 = {0f, 0f, -13.68f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 15:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {925.8218f, -1564.616f, 34.3633f};
			*uParam1.f_6.f_9 = {-32.8521f, 0f, -19.6456f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {927.6f, -1560.443f, 29.943f};
			*uParam1.f_6.f_17 = {0f, 0f, -90.72f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			*uParam1.f_6.f_23 = joaat("prop_damdoor_01");
			*uParam1.f_6.f_24 = {927.711f, -1559.567f, 31.094f};
			*uParam1.f_6.f_27 = {0f, 0f, -90f};
			break;
		
		case 16:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {759.1849f, -906.91f, 26.0423f};
			*uParam1.f_6.f_9 = {-1.1809f, 0f, -179.4534f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {758.631f, -909.267f, 24.438f};
			*uParam1.f_6.f_17 = {0f, 0f, 91.44f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 17:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {1038f, -2170.053f, 32.9912f};
			*uParam1.f_6.f_9 = {-22.5347f, 0f, 175.7987f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {1037.014f, -2172.944f, 30.55f};
			*uParam1.f_6.f_17 = {0f, 0f, 84.96f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 18:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {1017.937f, -2517.583f, 30.4418f};
			*uParam1.f_6.f_9 = {-18.4157f, 0f, -15.4654f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {1019.739f, -2511.918f, 27.445f};
			*uParam1.f_6.f_17 = {0f, 0f, -96.12f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 19:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {-248.4653f, 203.9834f, 86.8847f};
			*uParam1.f_6.f_9 = {-36.3135f, 0f, -102.8081f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {-245.054f, 204.085f, 83f};
			*uParam1.f_6.f_17 = {0f, 0f, -3.6f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
		
		case 20:
			*uParam1.f_6.f_3 = "anim@apt_trans@garage";
			*uParam1.f_6.f_4 = "gar_open_1_right";
			*uParam1.f_6.f_14 = {539.003f, -1945.851f, 23.984f};
			*uParam1.f_6.f_17 = {0f, 0f, -131.04f};
			*uParam1.f_6.f_20 = 0f;
			*uParam1.f_6.f_21 = 0.45f;
			func_383(uParam1.f_6);
			break;
		
		case 21:
			*uParam1.f_6.f_3 = "anim@apt_trans@hinge_l";
			*uParam1.f_6.f_4 = "ext_player";
			*uParam1.f_6.f_6 = {97.0925f, -2218.317f, 6.9921f};
			*uParam1.f_6.f_9 = {-1.0588f, 0f, -3.5294f};
			*uParam1.f_6.f_12 = 40f;
			*uParam1.f_6.f_14 = {97.293f, -2215.945f, 5.502f};
			*uParam1.f_6.f_17 = {0f, 0f, -88.2f};
			*uParam1.f_6.f_20 = 0.2f;
			*uParam1.f_6.f_21 = 0.46f;
			break;
	}
}

void func_383(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	float fVar12;
	Vector3 vVar13;
	float fVar16;
	
	vVar0 = {func_384(231.848f, -1006.707f, -99.992f, 63.36f)};
	vVar3 = {0f, 0f, -63.36f};
	vVar6 = {func_384(233.2975f, -1005.81f, -98.5457f, 63.36f)};
	vVar9 = {-26.8902f, -0.038f, 129.5137f};
	fVar12 = 30.3982f;
	vVar13 = {vVar6 - vVar0};
	fVar16 = vVar9.z - vVar3.z;
	*uParam0.f_6 = {func_384(func_384(*uParam0.f_14, -1f * *uParam0.f_17.f_2) + vVar13, *uParam0.f_17.f_2)};
	*uParam0.f_9 = {vVar9};
	*uParam0.f_9.f_2 = *uParam0.f_17.f_2 + fVar16;
	*uParam0.f_12 = fVar12;
}

Vector3 func_384(Vector3 vParam0, Vector3 fParam1)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = vParam0.x * fVar4 - vParam0.y * fVar3;
	vVar0.y = vParam0.x * fVar3 + vParam0.y * fVar4;
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_385(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = func_31(iParam0);
	if (iVar0 == 8 || iVar0 == 21)
	{
		*uParam1.f_6.f_54 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		*uParam1.f_6.f_53 = "Door_Open";
		*uParam1.f_6.f_56 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		*uParam1.f_6.f_55 = "Door_Close";
	}
	else
	{
		*uParam1.f_6.f_46[0] = "PUSH";
		*uParam1.f_6.f_46[1] = "LIMIT";
		*uParam1.f_6.f_49[0] = 0.271f;
		*uParam1.f_6.f_49[1] = 0.411f;
		*uParam1.f_6.f_52 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		*uParam1.f_6.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		*uParam1.f_6.f_55 = "Closed";
	}
}

void func_386(auto uParam0)
{
	*uParam0 = {1007.135f, -3102.079f, -40f};
	*uParam0.f_4 = "ex_int_warehouse_l_dlc";
	*uParam0.f_65.f_1 = {-15.091f, 2.575f, 0f};
	*uParam0.f_65.f_4 = {-15.091f, 5.875f, 2.2f};
	*uParam0.f_65.f_7 = 3.86f;
	*uParam0.f_65 = 90f;
}

void func_387(auto uParam0)
{
	*uParam0 = {1056.488f, -3105.724f, -40f};
	*uParam0.f_4 = "ex_int_warehouse_m_dlc";
	*uParam0.f_65.f_1 = {-8.78f, 6.917f, 0f};
	*uParam0.f_65.f_4 = {-8.78f, 10f, 2.2f};
	*uParam0.f_65.f_7 = 3.86f;
	*uParam0.f_65 = 90f;
}

void func_388(auto uParam0)
{
	*uParam0 = {1094.988f, -3104.776f, -40f};
	*uParam0.f_4 = "ex_int_warehouse_s_dlc";
	*uParam0.f_65.f_1 = {-7.911f, 4.559f, 0f};
	*uParam0.f_65.f_4 = {-7.911f, 6.989f, 2.2f};
	*uParam0.f_65.f_7 = 3.86f;
	*uParam0.f_65 = 90f;
}

void func_389(int iParam0, auto uParam1)
{
	switch (func_16(iParam0))
	{
		case 0:
			func_390(iParam0, uParam1);
			break;
	}
}

void func_390(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {54.191f, -2569.248f, 5.0046f};
			break;
		
		case 1:
			*uParam1 = {-1083.054f, -1261.893f, 4.534f};
			break;
		
		case 2:
			*uParam1 = {896.3665f, -1035.749f, 34.1096f};
			break;
		
		case 3:
			*uParam1 = {247.473f, -1956.943f, 22.1908f};
			break;
		
		case 4:
			*uParam1 = {-424.828f, 185.825f, 79.775f};
			break;
		
		case 5:
			*uParam1 = {-1042.482f, -2023.516f, 12.1616f};
			break;
		
		case 6:
			*uParam1 = {-1268.119f, -812.2741f, 16.1075f};
			break;
		
		case 7:
			*uParam1 = {-873.65f, -2735.948f, 12.9438f};
			break;
		
		case 8:
			*uParam1 = {274.5224f, -3015.413f, 4.6993f};
			break;
		
		case 9:
			*uParam1 = {1569.69f, -2129.792f, 77.3351f};
			break;
		
		case 10:
			*uParam1 = {-315.551f, -2698.654f, 6.5495f};
			break;
		
		case 11:
			*uParam1 = {499.81f, -651.982f, 23.909f};
			break;
		
		case 12:
			*uParam1 = {-528.5296f, -1784.573f, 20.5853f};
			break;
		
		case 13:
			*uParam1 = {-295.8596f, -1353.238f, 30.3138f};
			break;
		
		case 14:
			*uParam1 = {349.839f, 328.889f, 103.272f};
			break;
		
		case 15:
			*uParam1 = {926.2818f, -1560.311f, 29.7404f};
			break;
		
		case 16:
			*uParam1 = {759.566f, -909.466f, 24.244f};
			break;
		
		case 17:
			*uParam1 = {1037.813f, -2173.062f, 30.5334f};
			break;
		
		case 18:
			*uParam1 = {1019.116f, -2511.69f, 27.302f};
			break;
		
		case 19:
			*uParam1 = {-245.3405f, 203.3286f, 82.818f};
			break;
		
		case 20:
			*uParam1 = {539.346f, -1945.682f, 23.984f};
			break;
		
		case 21:
			*uParam1 = {96.1538f, -2216.4f, 5.1712f};
			break;
	}
}

bool func_391()
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
		if (func_367())
		{
			return false;
		}
		if (func_365(155))
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

bool func_392(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_373();
			}
			else
			{
				return false;
			}
		}
		if (!func_80())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_373();
					}
					else
					{
						return false;
					}
				}
				if (func_367())
				{
					if (!iParam2)
					{
						func_373();
					}
					else
					{
						return false;
					}
				}
				if (func_365(155))
				{
					if (!iParam2)
					{
						func_373();
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
					func_373();
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
				func_373();
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
			func_373();
		}
		else
		{
			return false;
		}
	}
	return true;
}

