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
	auto uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	auto uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
#endregion

void main()
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_97 = 50 + 1000;
	iLocal_98 = 58 + 1000;
	iLocal_107 = 39;
	_0x2162C446DFDF38FD(1);
	network_set_script_is_safe_for_network_game();
	_set_2d_layer(1);
	if ((is_durango_version() || is_orbis_version()) || is_pc_version())
	{
		iLocal_107 = 40;
	}
	switch (iLocal_108)
	{
		case 3:
			while (iLocal_99 == 0)
			{
				wait(0);
				func_53();
				if (func_49(202))
				{
					_0x14621BB1DF14E2B2();
					iLocal_99 = 1;
				}
				if (_0x2E22FEFA0100275E())
				{
					if (iLocal_106 == 0)
					{
						if (func_48())
						{
							func_45();
						}
					}
					else
					{
						_0x7E17BE53E1AAABAF(&uVar0, &iVar1, &iVar2);
						if (iVar1 == 50)
						{
							iLocal_103 = iVar2;
							func_1(&uLocal_105);
						}
					}
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	object_decal_toggle(-1871331138);
	object_decal_toggle(337714004);
	enable_deathblood_seethrough(0);
	_0x14621BB1DF14E2B2();
	while (true)
	{
		wait(0);
	}
}

bool func_1(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	func_44(0, iLocal_103, 0, 1);
	func_43(1);
	iVar0 = false;
	switch (iLocal_103)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < 13)
			{
				func_37(&iVar0, func_42(iVar1), func_39(iVar1));
				iVar1++;
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < 50)
			{
				func_27(&iVar0, func_28(iVar1));
				iVar1++;
			}
			break;
		
		case 2:
			func_16(&iVar0, "PM_UCON_T21", func_18(31, 0, 0));
			func_16(&iVar0, "PM_UCON_T22", func_18(32, 0, 0));
			func_16(&iVar0, "PM_UCON_T0", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T1", func_18(2, 0, 0));
			func_16(&iVar0, "PM_UCON_T2", func_18(21, 0, 0));
			func_16(&iVar0, "PM_UCON_T3", func_18(59, 0, 0));
			func_16(&iVar0, "PM_UCON_T4", func_18(30, 0, 0));
			func_16(&iVar0, "PM_UCON_T6", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T5", func_18(90, 0, 0));
			func_16(&iVar0, "PM_UCON_T8", func_18(13, 0, 0));
			func_16(&iVar0, "PM_UCON_T7", func_18(22, 0, 0));
			func_16(&iVar0, "PM_UCON_T9", func_18(60, 0, 0));
			func_16(&iVar0, "PM_UCON_T11", func_18(23, 0, 0));
			func_16(&iVar0, "PM_UCON_T10", func_18(76, 0, 0));
			func_16(&iVar0, "PM_UCON_T15", func_18(15, 0, 0));
			func_16(&iVar0, "PM_UCON_T14", func_18(14, 0, 0));
			func_16(&iVar0, "PM_UCON_T13", func_18(11, 0, 0));
			func_16(&iVar0, "PM_UCON_T38", func_18(122, 0, 0));
			func_16(&iVar0, "PM_UCON_T16", func_18(27, 0, 0));
			func_16(&iVar0, "PM_UCON_T12", func_18(12, 0, 0));
			func_16(&iVar0, "PM_UCON_T43", func_18(4, 0, 0));
			func_16(&iVar0, "PM_UCON_T17", func_18(19, 0, 0));
			func_16(&iVar0, "PM_UCON_T18", func_18(29, 0, 0));
			func_16(&iVar0, "PM_UCON_T19", func_18(8, 0, 0));
			func_16(&iVar0, "PM_UCON_T20", func_18(61, 0, 0));
			func_16(&iVar0, "PM_UCON_T42", func_18(119, 0, 0));
			func_16(&iVar0, "PM_UCON_T49", func_18(96, 0, 0));
			func_16(&iVar0, "PM_UCON_T48", func_18(78, 0, 0));
			func_16(&iVar0, "PM_UCON_T41", func_18(127, 0, 0));
			func_16(&iVar0, "PM_UCON_T39", func_18(126, 0, 0));
			func_16(&iVar0, "PM_UCON_T40", func_18(124, 0, 0));
			func_16(&iVar0, "PM_UCON_T44", func_18(103, 0, 0));
			func_16(&iVar0, "PM_UCON_T23", func_18(3, 0, 0));
			func_16(&iVar0, "PM_UCON_T24", func_18(74, 0, 0));
			func_16(&iVar0, "PM_UCON_T25", func_18(6, 0, 0));
			func_16(&iVar0, "PM_UCON_T26", func_18(20, 0, 0));
			func_16(&iVar0, "PM_UCON_T27", func_18(62, 0, 0));
			func_16(&iVar0, "PM_UCON_T28", func_18(65, 0, 0));
			func_16(&iVar0, "PM_UCON_T29", func_18(63, 0, 0));
			func_16(&iVar0, "PM_UCON_T45", func_18(104, 0, 0));
			func_16(&iVar0, "PM_UCON_T30", func_18(77, 0, 0));
			func_16(&iVar0, "PM_UCON_T46", func_18(98, 0, 0));
			func_16(&iVar0, "PM_UCON_T31", func_18(81, 0, 0));
			func_16(&iVar0, "PM_UCON_T32", func_18(75, 0, 0));
			func_16(&iVar0, "PM_UCON_T33", func_18(95, 0, 0));
			func_16(&iVar0, "PM_UCON_T47", func_18(105, 0, 0));
			func_16(&iVar0, "PM_UCON_T35", func_18(64, 0, 0));
			func_16(&iVar0, "PM_UCON_T34", func_18(67, 0, 0));
			func_16(&iVar0, "PM_UCON_T37", func_9(func_11(player_id(), 1), 0) >= 100);
			func_16(&iVar0, "PM_UCON_T36", func_9(func_11(player_id(), 1), 0) >= func_8(4, 170));
			break;
	}
	if (iVar0 > 16)
	{
		iLocal_104 = 1;
		func_7(1, 2, 1, 1, 0, 0);
		func_5(1, 0, iVar0, 0, 0);
		_0xDD564BDD0472C936(-1871331138);
	}
	else
	{
		iLocal_104 = 0;
		func_5(1, -1, -1, 0, 0);
		object_decal_toggle(-1871331138);
	}
	_0xDD564BDD0472C936(337714004);
	enable_deathblood_seethrough(0);
	func_4(1);
	func_2(1);
	*uParam0 = 1;
	return true;
}

void func_2(int iParam0)
{
	func_3(iParam0, 1);
}

void func_3(int iParam0, int iParam1)
{
	if (_0xAB58C27C2E6123C6("SHOW_COLUMN"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_bool(iParam1);
		_pop_scaleform_movie_function_void();
	}
	if (iParam0 == 2)
	{
		if (iParam1)
		{
			clear_bit(&Global_1312769, iParam0);
		}
		else
		{
			set_bit(&Global_1312769, iParam0);
		}
	}
}

void func_4(int iParam0)
{
	if (_0xAB58C27C2E6123C6("DISPLAY_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_pop_scaleform_movie_function_void();
	}
}

void func_5(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	_0xAB58C27C2E6123C6("SET_COLUMN_SCROLL");
	_push_scaleform_movie_function_parameter_int(iParam0);
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	_push_scaleform_movie_function_parameter_int(-1);
	if (!is_string_null_or_empty(sParam3))
	{
		_begin_text_component(sParam3);
		add_text_component_integer(iParam1);
		add_text_component_integer(iParam2);
		_end_text_component();
	}
	else
	{
		func_6("");
	}
	_push_scaleform_movie_function_parameter_bool(iParam4);
	_pop_scaleform_movie_function_void();
}

void func_6(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	_0xAB58C27C2E6123C6("INIT_COLUMN_SCROLL");
	_push_scaleform_movie_function_parameter_int(iParam0);
	_push_scaleform_movie_function_parameter_bool(false);
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	_push_scaleform_movie_function_parameter_int(iParam3);
	_push_scaleform_movie_function_parameter_bool(true);
	_push_scaleform_movie_function_parameter_int(iParam4);
	_push_scaleform_movie_function_parameter_bool(iParam5);
	_pop_scaleform_movie_function_void();
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_9(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_10(iParam0, 0);
}

int func_10(int iParam0, int iParam1)
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

int func_11(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_12(iParam0);
}

int func_12(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_14(-1)];
			}
			else if (func_13(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_14(-1)];
	}
	return 0;
}

int func_13(int iParam0)
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

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

auto func_15()
{
	return Global_1312747;
}

void func_16(int iParam0, char* sParam1, int iParam2)
{
	func_17(1, *iParam0, iLocal_98, *iParam0, sParam1, iParam2, 1);
	*iParam0++;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (_0xAB58C27C2E6123C6("SET_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_int(iParam2);
		_push_scaleform_movie_function_parameter_int(iParam3);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(true);
		func_6(sParam4);
		if (iParam5 == 1)
		{
			if (iParam6 == 0)
			{
				func_6("PM_UJOB_YES");
			}
			else
			{
				func_6("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0)
		{
			func_6("PM_UJOB_NO");
		}
		else
		{
			func_6("PM_UCON_LCK");
		}
		_pop_scaleform_movie_function_void();
	}
}

int func_18(int iParam0, int iParam1, int iParam2)
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
		if (func_22(player_id(), 85))
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
	if (func_21() || func_20())
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
			if (func_19())
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

bool func_19()
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
	if (func_21())
	{
		return true;
	}
	if (func_20())
	{
		return true;
	}
	iVar0 = Global_1347750[func_14(-1)];
	if (is_bit_set(iVar0, 7))
	{
		set_bit(&(Global_2460486.f_1638), 23);
		return true;
	}
	return false;
}

auto func_20()
{
	return Global_1315901;
}

auto func_21()
{
	return Global_1315903;
}

int func_22(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	if (!func_25())
	{
		return false;
	}
	if (func_24())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	uVar0 = func_23(iParam1);
	iVar1 = uVar0;
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_345, iVar1);
}

int func_23(int iParam0)
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

int func_24()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_135, 3);
}

int func_25()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_26(120, -1);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_14(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_27(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "PM_UJOB_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_17(1, *iParam0, iLocal_98, *iParam0, &Var0, iParam1, 0);
	*iParam0++;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_26(78, -1);
		
		case 1:
			return func_26(79, -1);
		
		case 2:
			return func_26(80, -1);
		
		case 3:
			return func_34(30, -1, -1);
		
		case 4:
			return func_26(81, -1);
		
		case 5:
			return func_33(1251, -1, 0) > 0;
		
		case 6:
			return func_33(1253, -1, 0) > 0;
		
		case 7:
			return func_26(83, -1);
		
		case 8:
			return func_34(11, -1, -1);
		
		case 9:
			return func_26(95, -1);
		
		case 10:
			return func_26(96, -1);
		
		case 11:
			return func_26(97, -1);
		
		case 12:
			return func_34(8, -1, -1);
		
		case 13:
			return func_34(9, -1, -1);
		
		case 14:
			return func_26(98, -1);
		
		case 15:
			return func_26(99, -1);
		
		case 16:
			return func_32(27, -1) > 0;
		
		case 17:
			return func_34(3, -1, -1);
		
		case 18:
			return func_34(2, -1, -1);
		
		case 19:
			return func_34(4, -1, -1);
		
		case 20:
			return func_26(100, -1);
		
		case 21:
			return func_34(31, -1, -1);
		
		case 22:
			return func_26(102, -1);
		
		case 23:
			return func_26(103, -1);
		
		case 24:
			return func_26(104, -1);
		
		case 25:
			return func_26(105, -1);
		
		case 26:
			return func_26(107, -1);
		
		case 27:
			return func_26(84, -1);
		
		case 28:
			return func_33(1257, -1, 0) > 0;
		
		case 29:
			return func_26(85, -1);
		
		case 30:
			return func_33(1255, -1, 0) > 0;
		
		case 31:
			return func_33(1259, -1, 0) > 0;
		
		case 32:
			return func_33(1252, -1, 0) > 0;
		
		case 33:
			return func_33(1258, -1, 0) > 0;
		
		case 34:
			return func_33(1241, -1, 0) > 0;
		
		case 35:
			return func_26(86, -1);
		
		case 36:
			if (func_31(joaat("mpply_race_2_point_wins")) > 0 || func_31(joaat("mpply_race_2_point_lost")) > 0)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 37:
			return func_34(27, -1, -1);
		
		case 38:
			return func_34(26, -1, -1);
		
		case 39:
			return func_33(1250, -1, 0) > 0;
		
		case 40:
			return func_33(1160, -1, 0) > 0;
		
		case 41:
			return func_34(5, -1, -1);
		
		case 42:
			return func_34(1, -1, -1);
		
		case 43:
			return (func_33(1140, -1, 0) > 0 || func_33(1141, -1, 0) > 0);
		
		case 44:
			return func_34(10, -1, -1);
		
		case 45:
			return func_26(90, -1);
		
		case 46:
			return func_32(18, -1) > 0;
		
		case 47:
			return func_34(25, -1, -1);
		
		case 48:
			return func_30();
		
		case 49:
			return func_29();
	}
	return false;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_32(70, -1) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_33(2080, -1, 0) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[iParam0 /*5*/][func_14(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_14(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_36(iParam0, iParam1);
	uVar2 = func_35(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_35(int iParam0)
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

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_15();
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

void func_37(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "PM_UGEN_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_38(1, *iParam0, iLocal_98, *iParam0, &Var0, "PM_UGEN_NUM", iParam1, iParam2);
	*iParam0++;
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	if (_0xAB58C27C2E6123C6("SET_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_int(iParam2);
		_push_scaleform_movie_function_parameter_int(iParam3);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(true);
		func_6(sParam4);
		_begin_text_component(sParam5);
		add_text_component_integer(iParam6);
		add_text_component_integer(iParam7);
		_end_text_component();
		_pop_scaleform_movie_function_void();
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_794608.f_111851[2];
		
		case 1:
			return Global_794608.f_111851[1];
		
		case 2:
			return Global_794608.f_111851[8];
		
		case 3:
			return Global_794608.f_111851[3];
		
		case 4:
			return Global_794608.f_111851[0];
		
		case 5:
			if ((((func_41() || func_40()) || is_pc_version()) || is_orbis_version()) || is_durango_version())
			{
				iVar0 += 2;
				iVar0 += 2;
				iVar0++;
				return 46 + iVar0;
			}
			else
			{
				return 44;
			}
			break;
		
		case 6:
			if ((_0x67A5589628E0CFF6() || func_41()) || func_40())
			{
				iVar0 = 0;
				iVar0 += 19;
				iVar0 += 8;
				return 278 + iVar0;
			}
			else
			{
				return 278;
			}
			break;
		
		case 7:
			return 205;
		
		case 8:
			return 106;
		
		case 9:
			return 60;
		
		case 10:
			return 180;
		
		case 11:
			return 89 + iLocal_107;
		
		case 12:
			return 10;
	}
	return -1;
}

bool func_40()
{
	return true;
}

bool func_41()
{
	return true;
}

int func_42(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_794608.f_111865[2];
		
		case 1:
			return Global_794608.f_111865[1];
		
		case 2:
			return Global_794608.f_111865[8];
		
		case 3:
			return Global_794608.f_111865[3];
		
		case 4:
			return Global_794608.f_111865[0];
		
		case 5:
			return func_33(1225, -1, 0);
		
		case 6:
			return func_33(1226, -1, 0);
		
		case 7:
			return func_33(1235, -1, 0) - 1;
		
		case 8:
			return func_33(1230, -1, 0);
		
		case 9:
			return func_33(1236, -1, 0);
		
		case 10:
			return func_33(1231, -1, 0);
		
		case 11:
			return func_33(748, -1, 0);
		
		case 12:
			if (func_26(240, -1))
			{
				iVar0++;
			}
			if (func_26(241, -1))
			{
				iVar0++;
			}
			if (func_26(242, -1))
			{
				iVar0++;
			}
			if (func_26(243, -1))
			{
				iVar0++;
			}
			if (func_26(244, -1))
			{
				iVar0++;
			}
			if (func_26(245, -1))
			{
				iVar0++;
			}
			if (func_26(246, -1))
			{
				iVar0++;
			}
			if (func_26(247, -1))
			{
				iVar0++;
			}
			if (func_26(248, -1))
			{
				iVar0++;
			}
			if (func_26(249, -1))
			{
				iVar0++;
			}
			return iVar0;
			break;
	}
	return -1;
}

void func_43(int iParam0)
{
	if (_0xAB58C27C2E6123C6("SET_DATA_SLOT_EMPTY"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
	}
	_pop_scaleform_movie_function_void();
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (_0xAB58C27C2E6123C6("SET_COLUMN_HIGHLIGHT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_bool(iParam2);
		_push_scaleform_movie_function_parameter_bool(iParam3);
		_pop_scaleform_movie_function_void();
	}
}

void func_45()
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	_0x7E17BE53E1AAABAF(&uVar0, &uVar1, &uVar2);
	func_43(0);
	iLocal_103 = false;
	func_47(0, 0, iLocal_97, 0, 1, "PM_UL_D0", 0, 0);
	func_47(0, 1, iLocal_97, 1, 1, "PM_UL_D1", 0, 0);
	func_47(0, 2, iLocal_97, 2, 1, "PM_UL_D2", 0, 0);
	func_2(0);
	func_46(2);
	func_46(3);
	func_46(4);
	func_46(5);
	func_4(0);
	func_1(&uLocal_105);
	object_decal_toggle(-1871331138);
	_0xDD564BDD0472C936(337714004);
	enable_deathblood_seethrough(0);
	iLocal_106 = 1;
}

void func_46(int iParam0)
{
	func_3(iParam0, 0);
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (_0xAB58C27C2E6123C6("SET_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_int(iParam2);
		_push_scaleform_movie_function_parameter_int(iParam3);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(false);
		if (iParam4)
		{
			_push_scaleform_movie_function_parameter_int(true);
		}
		else
		{
			_push_scaleform_movie_function_parameter_int(2);
		}
		func_6(sParam5);
		if (iParam6)
		{
			_push_scaleform_movie_function_parameter_int(true);
		}
		else
		{
			_push_scaleform_movie_function_parameter_int(false);
		}
		_push_scaleform_movie_function_parameter_int(iParam7);
		_pop_scaleform_movie_function_void();
	}
}

bool func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_794608.f_111865[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1100)
	{
		if (is_bit_set(Global_794608.f_4[iVar0 /*88*/].f_76, 14))
		{
			if (Global_794608.f_4[iVar0 /*88*/].f_65 < 13 && Global_794608.f_4[iVar0 /*88*/].f_70 <= 1000)
			{
				Global_794608.f_111865[Global_794608.f_4[iVar0 /*88*/].f_65]++;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_49(int iParam0)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	
	iVar0 = iParam0;
	uVar1 = func_52(iVar0);
	iVar2 = func_51(iVar0);
	if ((is_control_just_released(2, iParam0) || is_disabled_control_just_released(2, iParam0)) || func_50(iParam0, &(Global_1338622.f_961), 1))
	{
		if (!is_bit_set(Global_1338622.f_950[uVar1], iVar2))
		{
			set_bit(&(Global_1338622.f_950[uVar1]), iVar2);
			return true;
		}
	}
	else if (is_bit_set(Global_1338622.f_950[uVar1], iVar2))
	{
		clear_bit(&(Global_1338622.f_950[uVar1]), iVar2);
	}
	return false;
}

bool func_50(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = get_control_value(2, 195) - 127;
	iVar1 = get_control_value(2, 196) - 127;
	iVar2 = get_control_value(2, 197) - 127;
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < get_game_timer() || iParam2 == 0)
				{
					*uParam1 = get_game_timer() + 250;
					return true;
				}
			}
			break;
	}
	return false;
}

int func_51(int iParam0)
{
	return iParam0 % 32;
}

int func_52(int iParam0)
{
	return iParam0 / 32;
}

void func_53()
{
	int iVar0;
	
	if (!_is_input_disabled(2))
	{
		iVar0 = get_control_value(2, 221);
		if (iVar0 > 180)
		{
			if (func_55(&uLocal_100, iLocal_102, 0))
			{
				if (iLocal_104)
				{
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (_0xAB58C27C2E6123C6("SET_COLUMN_INPUT_EVENT"))
					{
						_push_scaleform_movie_function_parameter_int(true);
						_push_scaleform_movie_function_parameter_int(9);
						_pop_scaleform_movie_function_void();
					}
					iLocal_102 = 250;
					func_54(&uLocal_100);
				}
			}
		}
		else if (iVar0 < 80)
		{
			if (func_55(&uLocal_100, iLocal_102, 0))
			{
				if (iLocal_104)
				{
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (_0xAB58C27C2E6123C6("SET_COLUMN_INPUT_EVENT"))
					{
						_push_scaleform_movie_function_parameter_int(true);
						_push_scaleform_movie_function_parameter_int(8);
						_pop_scaleform_movie_function_void();
					}
					iLocal_102 = 250;
					func_54(&uLocal_100);
				}
			}
		}
		else if (iLocal_102 != -1)
		{
			iLocal_102 = -1;
		}
	}
}

void func_54(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_55(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_56(uParam0, iParam2, 0);
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

void func_56(auto uParam0, int iParam1, int iParam2)
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

