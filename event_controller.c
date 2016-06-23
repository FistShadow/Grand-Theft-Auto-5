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
	float fLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 8;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 2;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 8;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 8;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	int iLocal_89 = 0;
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
	fLocal_47 = 0.05f + 0.275f - 0.01f;
	if (has_force_cleanup_occurred(34))
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		func_129();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (is_player_online())
	{
		iVar2 = 0;
		while (iVar2 < get_number_of_events(1))
		{
			iVar7 = get_event_at_index(1, iVar2);
			switch (iVar7)
			{
				case 186:
					func_126();
					break;
				
				case 187:
					func_125();
					break;
				
				case 188:
					func_119(iVar2);
					break;
				
				case 189:
					func_118(iVar2);
					break;
				
				case 190:
					func_109(iVar2);
					break;
				
				case 208:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < get_number_of_events(0))
	{
		iVar0 = get_event_at_index(0, iVar2);
		iLocal_89 = 1;
		switch (iVar0)
		{
			case 139:
				get_event_data(0, iVar2, &iVar1, 1);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_vehicle(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_48000.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (is_entity_a_ped(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_48000.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				get_event_data(0, iVar2, &iVar1, 1);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_vehicle(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_48000.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (is_entity_a_ped(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_48000.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_48000 = iVar3;
	Global_48000.f_12 = iVar4;
	Global_48000.f_24 = iVar5;
	Global_48000.f_36 = iVar6;
}

int func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (get_event_data(1, iParam0, &Var0, 39))
	{
		iVar39 = _0x742B58F723233ED9(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < _0xCEFA968912D0F78D())
		{
			if (_0x3DBF2DF0AEB7D289(iVar39) || _0x8806CEBFABD3CE05(iVar39))
			{
				if (_0x8806CEBFABD3CE05(iVar39))
				{
					func_56(iVar39);
				}
				else
				{
					network_accept_presence_invite(iVar39);
				}
				func_55(Var0.f_37, -1);
			}
			else if (func_48())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

bool func_4(struct<6> Param0, struct<16> Param1, auto uParam2, struct<13> Param3, auto uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	auto uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char[64] cVar36;
	char[64] cVar52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	auto uVar74;
	auto uVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	iVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 -= 1000000;
		iVar0 = true;
	}
	if (network_is_game_in_progress())
	{
		if (func_47())
		{
			func_46(uParam22);
			return false;
		}
		if (func_45())
		{
			func_46(uParam22);
			return false;
		}
	}
	if (!network_is_game_in_progress())
	{
		if (iVar0)
		{
		}
		else if (!network_is_friend(&Param23))
		{
			func_46(uParam22);
			return false;
		}
		if (Global_14356)
		{
			func_46(uParam22);
			return false;
		}
		iVar1 = true;
		if (!func_44())
		{
			if (!func_43(0))
			{
				if (iVar1)
				{
					func_46(uParam22);
					return false;
				}
			}
		}
	}
	if (network_is_game_in_progress())
	{
		if (!func_42(player_id()))
		{
			func_46(uParam22);
			return false;
		}
	}
	if (is_string_null_or_empty(&Param6))
	{
		func_46(uParam22);
		return false;
	}
	if (is_string_null_or_empty(&Param0))
	{
		func_46(uParam22);
		return false;
	}
	Var2 = {Param6};
	iVar18 = func_41(Var2);
	if (iVar18 != -1)
	{
		func_38(iVar18);
	}
	uVar19 = _0x742B58F723233ED9(uParam22);
	iVar20 = _0x26E1CD96B0903D60(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2395202[iVar21 /*4*/].f_3 && get_game_timer() < Global_2395202[iVar21 /*4*/].f_2)
		{
			Global_2395202[iVar21 /*4*/].f_2 = get_game_timer() + 30000;
			iVar21 = 12;
			func_46(uParam22);
			return false;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_37(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&cVar36, "", 64);
	StringCopy(&cVar52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_36(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_34(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_33(iVar34, Var22.f_1);
		iVar33 = func_32(&Var22);
		cVar36 = {func_31(&Var22, 0)};
		cVar52 = {func_30(&Var22)};
		iVar69 = 1;
		iVar68 = func_29(&Var22, 0);
		iVar73 = func_28(&Var22);
		uVar74 = func_26(&Var22);
		uVar75 = func_25(&Var22);
		iVar76 = func_20(&Var22);
		if (!iVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		iVar77 = false;
		if (func_18(player_id(), Param23))
		{
			if (!network_is_game_in_progress())
			{
				iVar77 = true;
			}
			else
			{
				func_46(uParam22);
				if ((is_xbox360_version() || is_ps3_version()) && !network_is_game_in_progress())
				{
					func_17();
				}
				else
				{
					func_15(0);
				}
				return false;
			}
		}
		if (!is_durango_version())
		{
			if (!iVar77)
			{
				if (func_13(player_id(), Param23))
				{
					func_46(uParam22);
					func_15(0);
					return false;
				}
			}
		}
		if (!func_12())
		{
			func_46(uParam22);
			iVar78 = true;
			func_15(iVar78);
			return false;
		}
		iVar79 = false;
		if (!iVar77)
		{
			if (func_7(Param23, &iVar79, 1))
			{
				func_46(uParam22);
				func_15(iVar79);
				return false;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1347400;
	if (iVar80 >= 12)
	{
		iVar80--;
	}
	iVar81 = iVar80 - 1;
	while (iVar81 >= 0)
	{
		Global_2392939[iVar80 /*98*/] = {Global_2392939[iVar81 /*98*/]};
		iVar80--;
		iVar81--;
	}
	Global_1347400++;
	if (Global_1347400 > 12)
	{
		Global_1347400 = 12;
	}
	iVar82 = 0;
	Global_2392939[iVar82 /*98*/] = 0;
	Global_2392939[iVar82 /*98*/].f_1 = 0;
	Global_2392939[iVar82 /*98*/].f_5 = 0;
	Global_2392939[iVar82 /*98*/].f_2 = iVar70;
	Global_2392939[iVar82 /*98*/].f_3 = 0;
	Global_2392939[iVar82 /*98*/].f_4 = iVar71;
	Global_2392939[iVar82 /*98*/].f_6 = {Param0};
	Global_2392939[iVar82 /*98*/].f_12 = uVar74;
	Global_2392939[iVar82 /*98*/].f_13 = uVar75;
	Global_2392939[iVar82 /*98*/].f_14 = {Param6};
	StringCopy(&(Global_2392939[iVar82 /*98*/].f_30), "", 64);
	Global_2392939[iVar82 /*98*/].f_48 = iVar34;
	Global_2392939[iVar82 /*98*/].f_49 = iVar32;
	Global_2392939[iVar82 /*98*/].f_50 = iVar33;
	Global_2392939[iVar82 /*98*/].f_90 = uParam22;
	Global_2392939[iVar82 /*98*/].f_56 = {cVar36};
	Global_2392939[iVar82 /*98*/].f_72 = {cVar52};
	Global_2392939[iVar82 /*98*/].f_51 = iVar68;
	Global_2392939[iVar82 /*98*/].f_52 = 0;
	Global_2392939[iVar82 /*98*/].f_52.f_1 = 0;
	Global_2392939[iVar82 /*98*/].f_52.f_2 = 0;
	Global_2392939[iVar82 /*98*/].f_55 = iVar69;
	Global_2392939[iVar82 /*98*/].f_89 = uParam36;
	Global_2392939[iVar82 /*98*/].f_91 = -1;
	Global_2392939[iVar82 /*98*/].f_92 = iVar72;
	Global_2392939[iVar82 /*98*/].f_93 = Global_2395254;
	Global_2392939[iVar82 /*98*/].f_94 = iVar73;
	Global_2392939[iVar82 /*98*/].f_97 = network_is_friend(&Param23);
	if (Global_2392939[iVar82 /*98*/].f_49 == 0)
	{
		if (Global_2392939[iVar82 /*98*/].f_50 == 1)
		{
			Global_2392939[iVar82 /*98*/].f_55 = 0;
		}
	}
	Global_2392939[iVar82 /*98*/].f_95 = func_6(Param23, iVar82);
	Global_2392939[iVar82 /*98*/].f_96 = 0;
	Global_2392939[iVar82 /*98*/].f_88 = iParam37;
	Global_2395254++;
	Global_2392939[iVar82 /*98*/].f_46 = func_5(Param23);
	if (Global_2392939[iVar82 /*98*/].f_46 != -1)
	{
		Global_2392939[iVar82 /*98*/].f_47 = get_game_timer() + 15000;
	}
	return true;
}

int func_5(struct<13> Param0)
{
	struct<13>[] Var0 = new struct<13>[1];
	int iVar14;
	
	if (!is_durango_version())
	{
		return -1;
	}
	Var0[0 /*13*/] = {Param0};
	iVar14 = _0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

bool func_6(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	if (!network_is_friend(&uParam0))
	{
		return false;
	}
	if (Global_2392939[iParam13 /*98*/].f_89 > 0)
	{
		return false;
	}
	return true;
}

bool func_7(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13, int iParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return false;
	}
	if (is_durango_version())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return true;
		}
	}
	if (!func_9(1) && !iParam14)
	{
		return true;
	}
	Var0 = {func_8(player_id())};
	if (!iParam14 && !network_are_handles_the_same(&Var0, &uParam0))
	{
		if (!network_is_friend(&uParam0))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_9(int iParam0)
{
	if (is_ps3_version() || (is_orbis_version() && iParam0 == 0))
	{
		if (_0x72D918C99BCACC54(1) == 0 || _0xAEEF48CDF5B6CE7C(1, -1) == 0)
		{
			return false;
		}
	}
	else if (_0x72D918C99BCACC54(1) == 0)
	{
		return false;
	}
	if (func_10() == 0)
	{
		return false;
	}
	return true;
}

bool func_10()
{
	if (is_ps3_version() && network_have_online_privileges())
	{
		return true;
	}
	if (is_xbox360_version() && network_have_online_privileges())
	{
		return true;
	}
	if ((is_orbis_version() && _0x1353F87E89946207() == 0) && network_have_online_privileges())
	{
		return true;
	}
	if (is_durango_version() && network_have_online_privileges())
	{
		return true;
	}
	if (is_pc_version() && network_have_online_privileges())
	{
		return true;
	}
	return false;
}

bool func_11(int iParam0)
{
	if (is_ps3_version() || (is_orbis_version() && iParam0 == 0))
	{
		if (_0x72D918C99BCACC54(0) == 0 || _0xAEEF48CDF5B6CE7C(0, -1) == 0)
		{
			return false;
		}
	}
	else if (_0x72D918C99BCACC54(0) == 0)
	{
		return false;
	}
	if (func_10() == 0)
	{
		return false;
	}
	return true;
}

int func_12()
{
	if (!is_xbox360_version())
	{
		return true;
	}
	return network_have_online_privileges();
}

bool func_13(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13)
{
	if (!func_14(iParam0))
	{
		if (is_durango_version())
		{
			if (_0xB57A49545BA53CE7(&uParam1))
			{
				return false;
			}
		}
		if (!_0x72D918C99BCACC54(0))
		{
			if (!_0x72D918C99BCACC54(1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return true;
		
		default:
	}
	return false;
}

void func_15(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		if (!is_xbox360_version())
		{
			return;
		}
	}
	iVar0 = get_game_timer();
	if (iVar0 < Global_2395251)
	{
		return;
	}
	if (is_help_message_being_displayed())
	{
		return;
	}
	if (iParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395251 = iVar0 + 1800000;
}

void func_16(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_17()
{
	int iVar0;
	
	if (!is_xbox360_version() && !is_ps3_version())
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	iVar0 = get_game_timer();
	if (iVar0 < Global_2395251)
	{
		return;
	}
	if (is_help_message_being_displayed())
	{
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2395251 = iVar0 + 1800000;
}

bool func_18(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13)
{
	if (!func_14(iParam0))
	{
		if (is_durango_version())
		{
			if (_0xB57A49545BA53CE7(&uParam1))
			{
				return false;
			}
		}
		if (!func_19())
		{
			return true;
		}
	}
	return false;
}

bool func_19()
{
	if (_0x66B59CFFD78467AF() == 0)
	{
		return false;
	}
	if (is_ps3_version())
	{
		if (_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_orbis_version())
	{
		if (_0x72D918C99BCACC54(1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_xbox360_version() || is_durango_version())
	{
		if (_0x595F028698072DD9(0, -3, 1))
		{
			return true;
		}
	}
	if (is_pc_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	return false;
}

int func_20(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return is_bit_set(Global_2395256.f_356[*uParam0.f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return is_bit_set(Global_2398013.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return is_bit_set(Global_794608.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return is_bit_set(Global_906487.f_1204[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return iVar0;
	}
	else if (*uParam0.f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_21(auto uParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(uParam0.f_3))
	{
		return -1;
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (*uParam0.f_2)
	{
		case 63:
			if (is_bit_set(Global_794608.f_4[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_794608.f_4[*uParam0.f_1 /*88*/]), uParam0.f_3))
				{
					return *uParam0.f_1;
				}
			}
			if (!is_bit_set(Global_794608.f_4[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (is_bit_set(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (are_strings_equal(&(Global_794608.f_4[iVar0 /*88*/]), uParam0.f_3))
					{
						*uParam0.f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (is_bit_set(Global_906487.f_1204[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_906487.f_1204[*uParam0.f_1 /*88*/]), uParam0.f_3))
				{
					return *uParam0.f_1;
				}
			}
			if (!is_bit_set(Global_906487.f_1204[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (is_bit_set(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (are_strings_equal(&(Global_906487.f_1204[iVar0 /*88*/]), uParam0.f_3))
					{
						*uParam0.f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return *uParam0.f_1;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		if (is_bit_set(Global_949333.f_5[*uParam0.f_1 /*88*/].f_76, 13))
		{
			if (are_strings_equal(&(Global_949333.f_5[*uParam0.f_1 /*88*/]), uParam0.f_3))
			{
				return *uParam0.f_1;
			}
		}
		if (is_bit_set(Global_949333.f_5[*uParam0.f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (is_bit_set(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_949333.f_5[iVar0 /*88*/]), uParam0.f_3))
				{
					*uParam0.f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (*uParam0.f_2 < 32)
	{
		return -1;
	}
	return -1;
}

bool func_22(auto uParam0)
{
	if (Global_2398013)
	{
		if (are_strings_equal(&(Global_2398013.f_1), uParam0.f_3))
		{
			return true;
		}
	}
	return false;
}

int func_23(int iParam0)
{
	return iParam0 == 9999;
}

bool func_24(auto uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0.f_9;
	if (iVar0 == -1)
	{
		return false;
	}
	if (!Global_2395256.f_356[iVar0 /*75*/])
	{
		return false;
	}
	if (!are_strings_equal(&(Global_2395256.f_356[iVar0 /*75*/].f_10), uParam0.f_3))
	{
		return false;
	}
	if (!is_bit_set(Global_2395256.f_356[iVar0 /*75*/].f_5, 3))
	{
		return false;
	}
	return true;
}

int func_25(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_26(auto uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_21(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			Var0 = {func_27(uParam0)};
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_27(auto uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_21(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_28(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return is_bit_set(Global_2395256.f_356[*uParam0.f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return is_bit_set(Global_2398013.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return is_bit_set(Global_794608.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return is_bit_set(Global_906487.f_1204[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return iVar0;
	}
	else if (*uParam0.f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_29(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!iParam1)
	{
		if (func_24(uParam0))
		{
			if (is_bit_set(Global_1311772.f_1[*uParam0.f_9 /*2*/], false))
			{
				return Global_2398147.f_513[*uParam0.f_9];
			}
		}
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2398013.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_906487.f_1204[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return Global_949333.f_5[iVar1 /*88*/].f_54;
	}
	else if (*uParam0.f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_30(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "NO DESCRIPTION", 64);
	if (func_24(uParam0))
	{
		return Global_2395256.f_356[*uParam0.f_9 /*75*/].f_10.f_28;
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2398013.f_1.f_28;
		}
		return cVar0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return cVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_4[iVar16 /*88*/].f_38;
		
		case 62:
			return Global_906487.f_1204[iVar16 /*88*/].f_38;
		
		case 40:
			return cVar0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return Global_949333.f_5[iVar16 /*88*/].f_38;
	}
	else if (*uParam0.f_2 < 32)
	{
		return cVar0;
	}
	return cVar0;
}

struct<16> func_31(auto uParam0, int iParam1)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "UNKNOWN", 64);
	if (iParam1)
	{
		StringCopy(&cVar0, "", 64);
	}
	if (!iParam1)
	{
		if (func_24(uParam0))
		{
			if (is_bit_set(Global_1311772.f_1[*uParam0.f_9 /*2*/], false))
			{
				return Global_2398147[*uParam0.f_9 /*16*/];
			}
			return Global_2395256.f_356[*uParam0.f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2398013.f_1.f_12;
		}
		return cVar0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return cVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_4[iVar16 /*88*/].f_22;
		
		case 62:
			return Global_906487.f_1204[iVar16 /*88*/].f_22;
		
		case 40:
			return cVar0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return Global_949333.f_5[iVar16 /*88*/].f_22;
	}
	else if (*uParam0.f_2 < 32)
	{
		return cVar0;
	}
	return cVar0;
}

int func_32(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_24(uParam0))
	{
		return Global_2395256.f_356[*uParam0.f_9 /*75*/].f_10.f_55;
	}
	if (func_23(*uParam0.f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2398013.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_906487.f_1204[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		return Global_949333.f_5[iVar1 /*88*/].f_68;
	}
	else if (*uParam0.f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_33(int iParam0, int iParam1)
{
	if (func_23(iParam1))
	{
		if (Global_2398013)
		{
			return Global_2398013.f_1.f_53;
		}
		return 178;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794608.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_906487.f_1204[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == player_id())
	{
		return Global_949333.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 178;
	}
	return 178;
}

bool func_34(char* sParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!iParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (is_bit_set(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (are_strings_equal(&(Global_794608.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794608.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				*uParam1.f_1 = iVar0;
				*uParam1.f_2 = 63;
				*uParam1.f_3 = {Global_794608.f_4[iVar0 /*88*/]};
				*uParam1.f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (is_bit_set(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
		{
			if (are_strings_equal(&(Global_906487.f_1204[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_906487.f_1204[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				*uParam1.f_1 = iVar0;
				*uParam1.f_2 = 62;
				*uParam1.f_3 = {*sParam0};
				*uParam1.f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (is_bit_set(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (are_strings_equal(&(Global_949333.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_949333.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				*uParam1.f_1 = iVar0;
				*uParam1.f_2 = player_id();
				*uParam1.f_3 = {*sParam0};
				*uParam1.f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 91;
		
		case 14:
			return 92;
		
		case 122:
			return 96;
		
		case 11:
			return 93;
		
		case 13:
			return 94;
		
		case 12:
			return 95;
		
		case 8:
			return 98;
		
		case 1:
			return 99;
		
		case 5:
			return 97;
		
		case 6:
			return 100;
		
		case 3:
			return 103;
		
		case 0:
			return 101;
		
		case 2:
			return 102;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		default:
	}
	return 0;
}

bool func_36(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[8] cVar1;
	char[16] cVar3;
	char[8] cVar7;
	
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	iVar0 = _0x43E4111189E54F0E(sParam0);
	if (!iVar0 > 12)
	{
		return false;
	}
	StringCopy(&cVar1, _get_text_substring_slice(sParam0, 0, 5), 8);
	if (!are_strings_equal(&cVar1, "FAKE_"))
	{
		return false;
	}
	StringCopy(&cVar3, _get_text_substring_slice(sParam0, 5, 12), 16);
	if (are_strings_equal(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (are_strings_equal(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (are_strings_equal(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (are_strings_equal(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (are_strings_equal(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (are_strings_equal(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return false;
	}
	StringCopy(&cVar7, _get_text_substring_slice(sParam0, 12, iVar0), 8);
	if (!string_to_int(&cVar7, iParam2))
	{
		return false;
	}
	return true;
}

void func_37(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	*uParam0.f_2 = -1;
	StringCopy(uParam0.f_3, "", 24);
	*uParam0.f_9 = -1;
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1347400)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (get_game_timer() > Global_2395202[iVar0 /*4*/].f_2 || Global_2395202[iVar0 /*4*/].f_2 == 0)
		{
			if (_0xCEFA968912D0F78D() > 0 && Global_2392939[iParam0 /*98*/].f_90 < _0xCEFA968912D0F78D())
			{
				Global_2395202[iVar0 /*4*/].f_3 = _0x26E1CD96B0903D60(Global_2392939[iParam0 /*98*/].f_90);
				Global_2395202[iVar0 /*4*/].f_2 = get_game_timer() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392939[iParam0 /*98*/].f_91 != -1)
	{
		_remove_notification(Global_2392939[iParam0 /*98*/].f_91);
	}
	if (!Global_2392939[iParam0 /*98*/].f_55)
	{
		if (Global_2392939[iParam0 /*98*/].f_51 != 0)
		{
			_0x5A34CD9C3C5BEC44(Global_2392939[iParam0 /*98*/].f_51);
		}
	}
	func_46(Global_2392939[iParam0 /*98*/].f_90);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1347400)
	{
		Global_2392939[iVar1 /*98*/] = {Global_2392939[iVar2 /*98*/]};
		iVar1++;
		iVar2++;
	}
	func_40(iVar1);
	Global_1347400--;
	if (Global_1347373)
	{
		if (Global_1347371 > 0)
		{
			func_39();
		}
	}
}

void func_39()
{
	Global_1347373 = 0;
}

void func_40(int iParam0)
{
	Global_2392939[iParam0 /*98*/] = 0;
	Global_2392939[iParam0 /*98*/].f_1 = 0;
	Global_2392939[iParam0 /*98*/].f_5 = 0;
	StringCopy(&(Global_2392939[iParam0 /*98*/].f_14), "", 64);
	StringCopy(&(Global_2392939[iParam0 /*98*/].f_30), "", 64);
	Global_2392939[iParam0 /*98*/].f_46 = -1;
	Global_2392939[iParam0 /*98*/].f_47 = get_game_timer();
	Global_2392939[iParam0 /*98*/].f_48 = -1;
	Global_2392939[iParam0 /*98*/].f_49 = -1;
	Global_2392939[iParam0 /*98*/].f_50 = -1;
	Global_2392939[iParam0 /*98*/].f_51 = 0;
	Global_2392939[iParam0 /*98*/].f_52 = 0;
	Global_2392939[iParam0 /*98*/].f_52.f_1 = 0;
	Global_2392939[iParam0 /*98*/].f_52.f_2 = 0;
	Global_2392939[iParam0 /*98*/].f_55 = 0;
	StringCopy(&(Global_2392939[iParam0 /*98*/].f_56), "", 64);
	StringCopy(&(Global_2392939[iParam0 /*98*/].f_72), "", 64);
	Global_2392939[iParam0 /*98*/].f_88 = 0;
	Global_2392939[iParam0 /*98*/].f_89 = 0;
	Global_2392939[iParam0 /*98*/].f_90 = -1;
	Global_2392939[iParam0 /*98*/].f_91 = -1;
	Global_2392939[iParam0 /*98*/].f_92 = 0;
	Global_2392939[iParam0 /*98*/].f_93 = -1;
	Global_2392939[iParam0 /*98*/].f_94 = 0;
	Global_2392939[iParam0 /*98*/].f_95 = 0;
	Global_2392939[iParam0 /*98*/].f_96 = 0;
	Global_2392939[iParam0 /*98*/].f_97 = 0;
}

int func_41(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1347400)
	{
		if (are_strings_equal(&uParam0, &(Global_2392939[iVar0 /*98*/].f_14)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_43(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

bool func_44()
{
	if (Global_101154.f_7775.f_330[0 /*6*/])
	{
		return true;
	}
	return false;
}

int func_45()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_131, 2);
}

void func_46(auto uParam0)
{
	int iVar0;
	
	iVar0 = _0x742B58F723233ED9(uParam0);
	if (iVar0 < 0 || iVar0 >= _0xCEFA968912D0F78D())
	{
		return;
	}
	if (network_remove_presence_invite(iVar0))
	{
		return;
	}
}

int func_47()
{
	return Global_1315871 == 10;
}

bool func_48()
{
	if (!Global_69489)
	{
		return true;
	}
	else if (func_49())
	{
		return true;
	}
	return false;
}

int func_49()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	return func_50(120, -1);
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_51(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

auto func_52()
{
	return Global_1312747;
}

auto func_53()
{
	return Global_1315901;
}

auto func_54()
{
	return Global_1315903;
}

void func_55(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_52();
	}
	Global_1315891[iVar0] = uParam0;
}

void func_56(int iParam0)
{
	func_102();
	if (func_101(1))
	{
		if (!func_92())
		{
			if (!func_81(1))
			{
				if (network_is_activity_session())
				{
					func_80();
				}
				func_59(1, 0);
				network_accept_presence_invite(iParam0);
				func_58();
				func_57();
			}
		}
	}
}

void func_57()
{
	Global_1715541.f_7 = 1;
}

void func_58()
{
	Global_1715541.f_6 = 1;
}

void func_59(int iParam0, int iParam1)
{
	if (func_101(iParam0))
	{
		Global_1715541.f_16[iParam0 /*44*/].f_5 = 1;
		func_61(iParam0, 0);
		func_60();
		if (iParam1)
		{
			Global_1715541 = 1;
		}
	}
}

void func_60()
{
	Global_1715541.f_2 = 1;
}

void func_61(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	if (!network_is_activity_session())
	{
		if (iParam1)
		{
			func_79();
			func_73(player_id(), 0, 81920);
			Global_1587523[player_id() /*444*/].f_87 = 8;
			func_72();
			func_71();
		}
		func_70(iParam0);
		func_69(iParam0);
		func_67();
		func_66();
		func_60();
	}
	Var0 = {func_65(iParam0)};
	func_64(iParam0);
	func_62(&Var0);
}

void func_62(char* sParam0)
{
	StringCopy(&(Global_2434762.f_732), sParam0, 24);
	if (func_63())
	{
		StringCopy(&(Global_969327.f_42), sParam0, 24);
	}
}

int func_63()
{
	return is_bit_set(Global_2435528.f_1.f_2808, 5);
}

void func_64(auto uParam0)
{
	Global_1715541.f_16[uParam0 /*44*/].f_3 = 1;
}

struct<6> func_65(auto uParam0)
{
	return Global_1715541.f_16[uParam0 /*44*/].f_6;
}

void func_66()
{
	Global_2434762.f_5 = 100;
}

void func_67()
{
	set_bit(&Global_2434762, 5);
	func_68();
}

void func_68()
{
	set_bit(&Global_2434762, 8);
}

void func_69(auto uParam0)
{
	Global_1715541.f_8 = uParam0;
}

void func_70(auto uParam0)
{
	Global_1715541.f_9 = uParam0;
}

void func_71()
{
	Global_2441456.f_1 = 0;
}

void func_72()
{
	char* sVar0;
	
	StringCopy(&(Global_2434762.f_732), sVar0, 24);
}

void func_73(int iParam0, int iParam1, int iParam2)
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
		if (!func_77())
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
				if (!func_76(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
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
				func_75();
				func_74();
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
				if (!func_76(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
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

void func_74()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_75()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_76(int iParam0)
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

bool func_77()
{
	if (func_78() == 0)
	{
		return true;
	}
	return false;
}

auto func_78()
{
	return Global_1312466.f_18;
}

void func_79()
{
	set_bit(&Global_2434762, 7);
}

void func_80()
{
	set_bit(&(Global_2434762.f_2), 15);
}

bool func_81(int iParam0)
{
	if (iParam0 || func_91())
	{
		if (!func_83(1))
		{
			return true;
		}
		if (!func_82())
		{
			return true;
		}
		if (network_player_is_cheater())
		{
			return true;
		}
	}
	return false;
}

auto func_82()
{
	return Global_1715541.f_4;
}

bool func_83(int iParam0)
{
	if (!func_88())
	{
		return false;
	}
	if ((func_86(func_87(-1), 0) >= 1 || func_50(123, -1)) && func_50(133, -1))
	{
		func_85();
		return true;
	}
	else if (iParam0)
	{
		func_84();
	}
	return false;
}

void func_84()
{
	Global_1715541.f_5 = 1;
}

void func_85()
{
	Global_1715541.f_4 = 1;
}

int func_86(int iParam0, int iParam1)
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

auto func_87(int iParam0)
{
	return Global_1347756[func_51(iParam0)];
}

bool func_88()
{
	if (func_90() && func_89(0))
	{
		return true;
	}
	return false;
}

auto func_89(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_90()
{
	return func_89(func_52() + 1);
}

auto func_91()
{
	return Global_1715541.f_2;
}

bool func_92()
{
	if (((((func_100() || !func_98(-1)) || !func_96()) || !func_95()) || !func_94()) || func_93())
	{
		return true;
	}
	return false;
}

auto func_93()
{
	return Global_2443097;
}

bool func_94()
{
	if (get_profile_setting(903) == 1)
	{
		return true;
	}
	return false;
}

bool func_95()
{
	int iVar0;
	
	if (_get_mp_loading_state(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return false;
		}
	}
	return true;
}

bool func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_97(iVar0) == 1)
		{
			iVar0 = 4;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_97(int iParam0)
{
	if (func_50(76, iParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_99(iParam0);
	iVar1 = get_profile_setting(iVar0);
	if (is_bit_set(iVar1, true))
	{
		return true;
	}
	return false;
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

auto func_100()
{
	return Global_2434762.f_618;
}

auto func_101(int iParam0)
{
	return Global_1715541.f_16[iParam0 /*44*/].f_4;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	func_108();
	if (_0xFF8F3A92B75ED67A() && !func_105())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = _0x4A7D6E727F941747(func_104(iVar0));
			if (iVar1 > 0)
			{
				Global_1715541.f_16[iVar0 /*44*/] = iVar1;
				func_103(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1715541.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	auto uVar17;
	
	iVar0 = true;
	if (_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1715541.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		iVar0 = false;
	}
	if (_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_1715541.f_16[iParam0 /*44*/].f_12 = {Var1};
	}
	else
	{
		iVar0 = false;
	}
	if (_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1715541.f_16[iParam0 /*44*/].f_28 = {Var1};
	}
	else
	{
		iVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1715541.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1715541.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1715541.f_16[iParam0 /*44*/].f_2 = 0;
		if (_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar17))
		{
			Global_1715541.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (iVar0)
	{
		if (iParam0 != 1)
		{
			Global_1715541.f_1 = 1;
		}
		Global_1715541.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1715541.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

bool func_105()
{
	if (!func_106())
	{
		return true;
	}
	return false;
}

bool func_106()
{
	if (func_107())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

auto func_107()
{
	return Global_2443548;
}

void func_108()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1715541 = {Var0};
}

void func_109(int iParam0)
{
	auto uVar0;
	
	if (Global_69489)
	{
		play_sound_frontend(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		play_sound_frontend(-1, "Hang_Up", &Global_14402, 1);
	}
	if (get_event_data(1, iParam0, &uVar0, 21))
	{
		func_111();
	}
	Global_2465472.f_1 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	StringCopy(&(Global_2465472.f_4), "", 64);
	func_110(&(Global_2465472.f_20));
}

void func_110(auto uParam0)
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

void func_111()
{
	Global_2465472.f_2 = 1;
	Global_2465472.f_38 = 1;
	if (network_is_signed_online())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				wait(0);
			}
			network_session_voice_leave();
			Global_2465472 = 0;
			Global_2465472.f_2 = 0;
		}
		else if (func_117(Global_2465472.f_20))
		{
			if (network_is_friend(&(Global_2465472.f_20)))
			{
				if (!_0x87EB7A3FFCB314DB(&(Global_2465472.f_20)))
				{
					func_116();
				}
			}
		}
		else
		{
			func_116();
		}
	}
	else
	{
		func_116();
	}
	if (Global_2465472.f_37)
	{
		func_112(0);
	}
	Global_2465472.f_37 = 0;
	Global_2465472.f_3 = 0;
}

void func_112(int iParam0)
{
	if (Global_14571)
	{
		func_114(0, 0);
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
	if (!func_113())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_113()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_115(0))
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

bool func_115(int iParam0)
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

void func_116()
{
	Global_2465472.f_1 = 0;
	Global_2465472 = 0;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	StringCopy(&(Global_2465472.f_4), "", 64);
	StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
	Global_2465472.f_38 = 0;
	Global_2465472.f_56 = 0;
	Global_2465472.f_57 = 0;
	Global_2465472.f_58 = -2;
	Global_2465472.f_3 = 0;
	func_110(&(Global_2465472.f_20));
}

int func_117(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_118(int iParam0)
{
	struct<2> Var0;
	
	if (get_event_data(1, iParam0, &Var0, 15))
	{
		Global_2465472.f_33 = Var0.f_1;
		Global_2465472.f_34 = Var0;
	}
}

void func_119(int iParam0)
{
	struct<9> Var0;
	
	if (get_event_data(1, iParam0, &Var0, 21))
	{
		if (Global_2465472.f_3 == 0)
		{
			if (!func_120(&(Var0.f_8)))
			{
				network_set_keep_focuspoint(0, 2);
			}
			else
			{
				Global_2465472.f_3 = 1;
				MemCopy(&(Global_2465472.f_4), {Var0}, 16);
				Global_2465472.f_20 = {Var0.f_8};
				StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
				Global_2465472.f_58 = -2;
				Global_2465472.f_56 = 0;
				Global_2465472.f_57 = 0;
			}
		}
		else if (!func_120(&(Var0.f_8)))
		{
			network_set_keep_focuspoint(0, 2);
		}
		else
		{
			Global_2465472.f_3 = 1;
			MemCopy(&(Global_2465472.f_4), {Var0}, 16);
			Global_2465472.f_20 = {Var0.f_8};
			StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
			Global_2465472.f_58 = -2;
			Global_2465472.f_56 = 0;
			Global_2465472.f_57 = 0;
		}
	}
}

bool func_120(auto uParam0)
{
	if (Global_69489)
	{
		if (func_49() == 0)
		{
			return false;
		}
		if (func_124(player_id(), 1, 1))
		{
			if (is_entity_in_water(player_ped_id()))
			{
				if (get_entity_submerged_level(player_ped_id()) >= 1f)
				{
					return false;
				}
			}
		}
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	if (Global_2465472.f_1)
	{
	}
	if (Global_14579 == 1)
	{
		return false;
	}
	if (Global_1573858)
	{
		return false;
	}
	if (Global_2465472.f_36)
	{
		return false;
	}
	if (func_113())
	{
		return false;
	}
	if (((Global_35711 != 6 && Global_35711 != 8) && Global_35711 != 12) && Global_35711 != 15)
	{
		return false;
	}
	if (func_123() && !func_122(12))
	{
		return false;
	}
	if (is_mobile_phone_call_ongoing())
	{
		return false;
	}
	if (is_cutscene_active())
	{
		return false;
	}
	if (!func_121(player_id()))
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (Global_69749)
	{
		return false;
	}
	if (network_is_session_active())
	{
		if (!network_player_has_headset(player_id()))
		{
			return false;
		}
	}
	if (!network_is_signed_online())
	{
		return false;
	}
	if (network_is_gamer_muted_by_me(uParam0) || network_is_gamer_blocked_by_me(uParam0))
	{
		return false;
	}
	if (network_am_i_muted_by_gamer(uParam0) || network_am_i_blocked_by_gamer(uParam0))
	{
		return false;
	}
	if (_0x2FC5650B0271CB57())
	{
		if (is_durango_version())
		{
			if (_0xFD8B834A8BA05048())
			{
				return false;
			}
		}
		else if (is_orbis_version())
		{
			return false;
		}
	}
	return true;
}

bool func_121(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (_0x66B59CFFD78467AF() == 0)
	{
		return false;
	}
	iVar0 = -1;
	if (iParam0 != player_id())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return false;
		}
	}
	if (is_ps3_version() || is_orbis_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_xbox360_version() || is_durango_version())
	{
		if (iParam0 == player_id())
		{
			if (_0x83F28CE49FBBFFBA(0, -3, 1) || _0xAEEF48CDF5B6CE7C(1, -1))
			{
				return true;
			}
		}
		else
		{
			Var1 = {func_8(iParam0)};
			if (_0xAEEF48CDF5B6CE7C(0, -1) || (_0xAEEF48CDF5B6CE7C(1, -1) && network_is_friend(&Var1)))
			{
				return true;
			}
		}
	}
	if (is_pc_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	return false;
}

int func_122(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_123()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_124(int iParam0, int iParam1, int iParam2)
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

void func_125()
{
	func_116();
}

void func_126()
{
	Global_2465472.f_1 = 1;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	if (has_scaleform_movie_loaded(Global_14394) == 1)
	{
		if (Global_14401)
		{
			func_127(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14356)
			{
				func_127(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_127(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_127(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_128(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_128(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_128(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_128(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_128(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_128(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_129()
{
	int iVar0;
	
	if (iLocal_89)
	{
		Global_48000 = 0;
		Global_48000.f_12 = 0;
		Global_48000.f_24 = 0;
		Global_48000.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_48000.f_1[iVar0] = 0;
			Global_48000.f_13[iVar0] = 0;
			Global_48000.f_25[iVar0] = 0;
			Global_48000.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_89 = 0;
	}
}

