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
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int[] iLocal_91 = new int[30];
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	int iLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
#endregion

void main()
{
	int iVar0;
	auto uVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	iLocal_89 = 3;
	iLocal_90 = 9;
	if (func_139() == 2)
	{
		while (true)
		{
			wait(0);
		}
	}
	_0x2162C446DFDF38FD(1);
	network_set_script_is_safe_for_network_game();
	Global_1312434 = 1;
	iVar0 = 0;
	Global_1337094.f_281 = 1;
	Global_1334658.f_1 = 0;
	Global_1334658.f_3 = 0;
	Global_1334658.f_5 = 0;
	func_137(&Global_1337094);
	func_136(&Global_1337094);
	func_135(&Global_1337094);
	func_131();
	func_130(0, &Global_1337094);
	_set_2d_layer(7);
	_0xDD564BDD0472C936(337714004);
	_0xDD564BDD0472C936(-1884422346);
	enable_deathblood_seethrough(0);
	func_129();
	iVar5 = 1;
	switch (iLocal_124)
	{
		case 3:
			while (iVar0 == 0)
			{
				wait(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (_0x3BAB9A4E4F2FF5C7())
						{
							_0xEC9264727EEC0F28();
							iVar6 = 1;
						}
					}
				}
				if (func_128(201))
				{
					if (iVar5 == 0)
					{
						play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						Global_1334658.f_1 = 0;
						Global_1334658.f_3 = 0;
						iVar5 = 1;
						func_130(0, &Global_1337094);
						func_136(&Global_1337094);
						func_135(&Global_1337094);
						func_127(&Global_1337094, &Global_1334658);
						_0xAB58C27C2E6123C6("MENU_SHIFT_DEPTH");
						_push_scaleform_movie_function_parameter_int(true);
						_pop_scaleform_movie_function_void();
					}
				}
				if (iVar5 == 0)
				{
					if (func_128(189) || func_128(190))
					{
						iVar0 = 1;
					}
				}
				if (func_128(202))
				{
					func_125();
					if (iVar5 == 1)
					{
						_0xAB58C27C2E6123C6("MENU_SHIFT_DEPTH");
						_push_scaleform_movie_function_parameter_int(-1);
						_pop_scaleform_movie_function_void();
						play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						object_decal_toggle(337714004);
						enable_deathblood_seethrough(0);
						func_136(&Global_1337094);
						func_135(&Global_1337094);
						func_130(-1, &Global_1337094);
						iVar5 = 0;
					}
					else
					{
						play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar0 = 1;
						_0x14621BB1DF14E2B2();
					}
				}
				if (_0xF284AC67940C6812())
				{
					_0x36C1451A88A09630(&iVar2, &uVar3);
				}
				if (_0x2E22FEFA0100275E())
				{
					_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1334658.f_1 = iVar4 % 3;
						Global_1334658.f_3 = iVar4 / 3;
						func_130(iVar4, &Global_1337094);
						func_135(&Global_1337094);
					}
				}
				request_streamed_texture_dict("MPWeaponsCommon", false);
				request_streamed_texture_dict("MPWeaponsGang0", false);
				request_streamed_texture_dict("MPWeaponsGang1", false);
				func_9(&Global_1337094, &Global_1334658);
				if (iVar5 == 1)
				{
					func_1(&Global_1337094, &Global_1334658, &uLocal_122);
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
	_0x14621BB1DF14E2B2();
	_0x2162C446DFDF38FD(0);
	Global_1312434 = 0;
	_set_2d_layer(4);
	while (true)
	{
		wait(0);
	}
}

void func_1(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((is_control_pressed(2, 187) || func_6(187, &(Global_1338622.f_961), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		set_bit(uParam0.f_285, false);
	}
	if ((is_control_pressed(2, 188) || func_6(188, &(Global_1338622.f_961), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		set_bit(uParam0.f_285, true);
	}
	if (((is_control_pressed(2, 189) || is_control_pressed(2, 241)) || func_6(189, &(Global_1338622.f_961), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		set_bit(uParam0.f_285, 2);
	}
	if (((is_control_pressed(2, 190) || is_control_pressed(2, 242)) || func_6(190, &(Global_1338622.f_961), 1)) && iVar0)
	{
		set_bit(uParam0.f_285, 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (is_bit_set(*uParam0.f_285, true))
	{
		clear_bit(uParam0.f_285, true);
		play_sound_frontend(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		*uParam1.f_3--;
		if (*uParam1.f_3 < 0)
		{
			*uParam1.f_3 = 2;
		}
		func_130(func_3(uParam1.f_1, uParam1.f_3, *uParam1.f_5, 188), uParam0);
		func_136(uParam0);
		func_135(uParam0);
		func_127(uParam0, uParam1);
	}
	if (is_bit_set(*uParam0.f_285, false))
	{
		clear_bit(uParam0.f_285, false);
		play_sound_frontend(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		*uParam1.f_3++;
		if (*uParam1.f_3 > 2)
		{
			*uParam1.f_3 = 0;
		}
		func_130(func_3(uParam1.f_1, uParam1.f_3, *uParam1.f_5, 187), uParam0);
		func_136(uParam0);
		func_135(uParam0);
		func_127(uParam0, uParam1);
	}
	if (is_bit_set(*uParam0.f_285, 2))
	{
		clear_bit(uParam0.f_285, 2);
		*uParam1.f_1--;
		if (*uParam1.f_1 < 0)
		{
			if (iLocal_89 > 1)
			{
				func_137(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (*uParam1.f_5 > 0)
			{
				*uParam1.f_5--;
				*uParam1.f_1 = 2;
			}
			else
			{
				*uParam1.f_5 = iLocal_89;
				*uParam1.f_1 = 2;
				iVar1 = *uParam1.f_1 + *uParam1.f_3 * 3;
				if (iVar1 >= iLocal_90)
				{
					*uParam1.f_1 = iLocal_90 - 1 % 3;
					*uParam1.f_3 = iLocal_90 - 1 / 3;
				}
			}
		}
		play_sound_frontend(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_130(func_3(uParam1.f_1, uParam1.f_3, *uParam1.f_5, 189), uParam0);
		func_136(uParam0);
		func_135(uParam0);
		func_127(uParam0, uParam1);
	}
	if (is_bit_set(*uParam0.f_285, 3))
	{
		clear_bit(uParam0.f_285, 3);
		*uParam1.f_1++;
		iVar2 = *uParam1.f_1 + *uParam1.f_3 * 3;
		if (*uParam1.f_1 > 2 || (*uParam1.f_5 == iLocal_89 && iVar2 >= iLocal_90))
		{
			if (iLocal_89 > 1)
			{
				func_137(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			*uParam1.f_1 = 0;
			*uParam1.f_5++;
			if (*uParam1.f_5 > iLocal_89)
			{
				*uParam1.f_5 = 0;
			}
		}
		play_sound_frontend(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_130(func_3(uParam1.f_1, uParam1.f_3, *uParam1.f_5, 190), uParam0);
		func_136(uParam0);
		func_135(uParam0);
		func_127(uParam0, uParam1);
	}
}

void func_2(auto uParam0)
{
	*uParam0.f_281 = 0;
}

int func_3(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0 + *uParam1 * 3;
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_89)
			{
				if (iVar0 > iLocal_90 - 1)
				{
					*uParam1 = 0;
					iVar0 = *uParam0 + *uParam1 * 3;
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_89)
			{
				if (iVar0 > iLocal_90 - 1)
				{
					if (*uParam1 > 0)
					{
						*uParam1--;
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = *uParam0 + *uParam1 * 3;
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_89)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > iLocal_90 - 1)
						{
							*uParam1--;
							iVar0 = *uParam0 + *uParam1 * 3;
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > iLocal_90 - 1)
				{
					if (*uParam0 > 0)
					{
						*uParam0--;
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = *uParam0 + *uParam1 * 3;
				}
			}
			break;
	}
	return iVar0;
}

void func_4(auto uParam0, int iParam1, int iParam2)
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

void func_5(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_6(int iParam0, auto uParam1, int iParam2)
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

bool func_7(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_4(uParam0, iParam2, 0);
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

auto func_8(auto uParam0)
{
	return *uParam0.f_1;
}

void func_9(auto uParam0, auto uParam1)
{
	if ((has_streamed_texture_dict_loaded("MPWeaponsCommon") && has_streamed_texture_dict_loaded("MPWeaponsGang0")) && has_streamed_texture_dict_loaded("MPWeaponsGang1"))
	{
		if (func_124(8, -1) == 0)
		{
			*uParam1 = func_123();
		}
		func_129();
		switch (*uParam1.f_5)
		{
			case 0:
				if (!*uParam0.f_1[0])
				{
					func_94(joaat("weapon_pistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_combatpistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_appistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_microsmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_smg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_mg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!*uParam0.f_1[0])
				{
					func_94(joaat("weapon_combatmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_heavysniper"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_minigun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_rpg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!*uParam0.f_1[0])
				{
					func_94(joaat("weapon_knife"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_nightstick"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_bat"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_crowbar"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_golfclub"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_molotov"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_grenade"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_stickybomb"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!*uParam0.f_1[0])
				{
					func_91(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_90(uParam0));
	}
}

void func_10(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = false;
		while (iVar0 <= 8)
		{
			iVar5 = false;
			if (*uParam0.f_1[iVar0] == 1)
			{
				if (*uParam0.f_85[iVar0] != 0)
				{
					uVar2 = func_86(*uParam0.f_85[iVar0], *uParam0.f_276, 0);
				}
				iVar3 = func_83(*uParam0.f_85[iVar0], *uParam0.f_276, 0);
				iVar1 = false;
				while (iVar1 <= 8)
				{
					iVar4 = func_82(*uParam0.f_85[iVar0], iVar1);
					if (!iVar3)
					{
						func_66(iVar4, *uParam0.f_85[iVar0], 0, 0, 0);
						func_64(iVar4, *uParam0.f_85[iVar0], 0);
						func_58(iVar4, *uParam0.f_85[iVar0], 0);
					}
					if (are_strings_equal(func_57(iVar4, *uParam0.f_85[iVar0]), "WCT_CLIP1"))
					{
						func_66(iVar4, *uParam0.f_85[iVar0], 1, 0, 0);
						if (!iVar3)
						{
							func_64(iVar4, *uParam0.f_85[iVar0], 1);
							func_58(iVar4, *uParam0.f_85[iVar0], 1);
						}
					}
					if (are_strings_equal(func_57(iVar4, *uParam0.f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_66(iVar4, *uParam0.f_85[iVar0], 1, 0, 0);
						if (!iVar3)
						{
							func_64(iVar4, *uParam0.f_85[iVar0], 1);
							func_58(iVar4, *uParam0.f_85[iVar0], 1);
						}
					}
					if ((*uParam0.f_85[iVar0] == joaat("weapon_bullpupshotgun") || *uParam0.f_85[iVar0] == joaat("weapon_pistol50")) || *uParam0.f_85[iVar0] == joaat("weapon_snspistol"))
					{
						func_66(iVar4, *uParam0.f_85[iVar0], 1, 0, 0);
						func_64(iVar4, *uParam0.f_85[iVar0], 1);
						func_58(iVar4, *uParam0.f_85[iVar0], 1);
					}
					if (iVar3 && func_54(iVar4, *uParam0.f_85[iVar0], *uParam0.f_276))
					{
						if (uVar2 && func_49(iVar4, *uParam0.f_85[iVar0], *uParam0.f_276))
						{
							iVar5 += func_47(iVar4, *uParam0.f_85[iVar0], 8);
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 += func_47(iVar4, *uParam0.f_85[iVar0], 4);
					}
					iVar1++;
				}
			}
			iVar6 = false;
			if (*uParam0.f_85[iVar0] != 0)
			{
				if (iVar3)
				{
					if (((func_86(*uParam0.f_85[iVar0], *uParam0.f_276, 0) || (*uParam0.f_85[iVar0] == joaat("weapon_pistol") && has_ped_got_weapon(player_ped_id(), joaat("weapon_pistol"), 0))) || func_45(*uParam0.f_85[iVar0])) || func_29(*uParam0.f_85[iVar0], *uParam0.f_276))
					{
						iVar6++;
					}
					else
					{
						iVar6 += 2;
					}
				}
				else
				{
					iVar6 += 4;
				}
			}
			if (*uParam0.f_1[iVar0] == 0 || are_strings_equal(func_26(*uParam0.f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar6 = false;
			}
			_0xAB58C27C2E6123C6("SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_85[iVar0]);
			_push_scaleform_movie_function_parameter_int(iVar5);
			_push_scaleform_movie_function_parameter_int(iVar6);
			_pop_scaleform_movie_function_void();
			iVar0++;
		}
		_0xAB58C27C2E6123C6("DISPLAY_DATA_SLOT");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(auto uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0.f_279 = 0;
		func_12(uParam0);
	}
	if (*uParam0.f_279 == 0)
	{
		_0xAB58C27C2E6123C6("SET_COLUMN_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(*uParam0.f_277);
		_push_scaleform_movie_function_parameter_bool(false);
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
		*uParam0.f_279 = 1;
	}
}

void func_12(auto uParam0)
{
	*uParam0.f_283 = 0;
}

auto func_13(auto uParam0)
{
	return *uParam0.f_283;
}

void func_14(auto uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		*uParam0.f_280 = 0;
		func_21(uParam0);
	}
	if (*uParam0.f_280 == 0)
	{
		if (*uParam0.f_277 > -1)
		{
			_0xAB58C27C2E6123C6("SET_DESCRIPTION");
			iVar4 = *uParam0.f_215[*uParam0.f_277] - *uParam0.f_165[*uParam0.f_277];
			if (iVar4 < 0)
			{
				iVar4 = false;
			}
			_push_scaleform_movie_function_parameter_int(false);
			func_20(uParam0.f_11[*uParam0.f_277 /*4*/]);
			func_20(uParam0.f_48[*uParam0.f_277 /*4*/]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_95[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_105[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_float(*uParam0.f_135[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_float(*uParam0.f_115[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_145[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_155[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_165[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_185[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_195[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_205[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_225[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(iVar4);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_125[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_175[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(*uParam0.f_235[*uParam0.f_277]);
			_push_scaleform_movie_function_parameter_int(func_16(*uParam0.f_85[*uParam0.f_277]));
			_pop_scaleform_movie_function_void();
			if (func_15(*uParam0.f_85[*uParam0.f_277]))
			{
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20(&Var0);
				_push_scaleform_movie_function_parameter_int(2);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20(&Var0);
				_push_scaleform_movie_function_parameter_int(3);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20(&Var0);
				_push_scaleform_movie_function_parameter_int(4);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20(&Var0);
				_push_scaleform_movie_function_parameter_int(8);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20(&Var0);
				_push_scaleform_movie_function_parameter_int(9);
				_pop_scaleform_movie_function_void();
			}
			else
			{
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_ACCURACY");
				_push_scaleform_movie_function_parameter_int(2);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_RANGE");
				_push_scaleform_movie_function_parameter_int(3);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_CLIPSIZE");
				_push_scaleform_movie_function_parameter_int(4);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_KD_RATIO");
				_push_scaleform_movie_function_parameter_int(7);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_HEADSHOTS");
				_push_scaleform_movie_function_parameter_int(8);
				_pop_scaleform_movie_function_void();
				_0xAB58C27C2E6123C6("SET_COLUMN_TITLE");
				_push_scaleform_movie_function_parameter_int(false);
				func_20("PM_MY_ACCURACY");
				_push_scaleform_movie_function_parameter_int(9);
				_pop_scaleform_movie_function_void();
			}
		}
		*uParam0.f_280 = 1;
	}
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_machete"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
			return true;
			break;
	}
	return false;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0;
			break;
		
		case joaat("weapon_knife"):
			return 0;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_combatpistol"):
			return 9;
			break;
		
		case joaat("weapon_smg"):
			return 11;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 24;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 21;
			break;
		
		case joaat("weapon_stickybomb"):
			return 19;
			break;
		
		case joaat("weapon_petrolcan"):
			return 20;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 17;
			break;
		
		case joaat("weapon_appistol"):
			return 33;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 13;
			break;
		
		case joaat("weapon_grenade"):
			return 15;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 37;
			break;
		
		case joaat("weapon_molotov"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("weapon_mg"):
			return 50;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 70;
			break;
		
		case joaat("weapon_combatmg"):
			return 80;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_heavysniper"):
			return 90;
			break;
		
		case joaat("weapon_rpg"):
			return 100;
			break;
		
		case joaat("weapon_minigun"):
			return 120;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0;
			break;
		
		case joaat("weapon_golfclub"):
			return 0;
			break;
		
		case joaat("weapon_crowbar"):
			return 0;
			break;
		
		case joaat("weapon_bat"):
			return 0;
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_123();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_123();
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

void func_20(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_21(auto uParam0)
{
	*uParam0.f_284 = 0;
}

auto func_22(auto uParam0)
{
	return *uParam0.f_284;
}

void func_23(auto uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0.f_278 = 0;
		func_24(uParam0);
	}
	if (*uParam0.f_278 == 0)
	{
		if (*uParam0.f_275 != 9999)
		{
			_0xAB58C27C2E6123C6("SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_275);
			_pop_scaleform_movie_function_void();
			*uParam0.f_275 = 9999;
			*uParam0.f_278 = 1;
		}
	}
}

void func_24(auto uParam0)
{
	*uParam0.f_282 = 0;
}

auto func_25(auto uParam0)
{
	return *uParam0.f_282;
}

char* func_26(int iParam0, int iParam1)
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
			if (func_28(iParam0, &Var0) != -1)
			{
				if (iParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

auto func_27(auto uParam0)
{
	return uParam0;
}

int func_28(int iParam0, auto uParam1)
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

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_42() == 0)
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 285 && func_39(iVar0, -1))
	{
		return true;
	}
	else
	{
		return false;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return is_bit_set(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return iParam0 % 32;
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
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

auto func_33(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_34(func_36(iParam0), iParam1, 0);
	return uVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_35(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_35(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_123();
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 678;
				break;
			
			case 1:
				return 679;
				break;
			
			case 2:
				return 2397;
				break;
			}
	}
	return 3949;
}

auto func_37()
{
	return Global_25121;
}

int func_38(int iParam0)
{
	return iParam0 / 32;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_35(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 17;
			break;
		
		case joaat("weapon_combatpistol"):
			return 19;
			break;
		
		case joaat("weapon_appistol"):
			return 23;
			break;
		
		case joaat("weapon_pistol50"):
			return 21;
			break;
		
		case joaat("weapon_smg"):
			return 27;
			break;
		
		case joaat("weapon_microsmg"):
			return 25;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 31;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 33;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 35;
			break;
		
		case joaat("weapon_mg"):
			return 37;
			break;
		
		case joaat("weapon_combatmg"):
			return 39;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 43;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 45;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 49;
			break;
		
		case joaat("weapon_heavysniper"):
			return 55;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 53;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 59;
			break;
		
		case joaat("weapon_rpg"):
			return 61;
			break;
		
		case joaat("weapon_minigun"):
			return 63;
			break;
		
		case joaat("weapon_grenade"):
			return 65;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 67;
			break;
		
		case joaat("weapon_stickybomb"):
			return 69;
			break;
		
		case joaat("weapon_molotov"):
			return 71;
			break;
		
		case joaat("weapon_petrolcan"):
			return 74;
			break;
		
		case joaat("gadget_parachute"):
			return 73;
			break;
		
		case joaat("weapon_knife"):
			return 1;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_hammer"):
			return 11;
			break;
		
		case joaat("weapon_bat"):
			return 13;
			break;
		
		case joaat("weapon_crowbar"):
			return 5;
			break;
		
		case joaat("weapon_golfclub"):
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 47;
			break;
		
		case joaat("weapon_bottle"):
			return 142;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 207;
			break;
		
		case joaat("weapon_snspistol"):
			return 144;
			break;
		
		case joaat("weapon_heavypistol"):
			return 205;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 209;
			break;
		
		case joaat("weapon_gusenberg"):
			return 211;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 234;
			break;
		
		case joaat("weapon_dagger"):
			return 232;
			break;
		
		case joaat("weapon_musket"):
			return 238;
			break;
		
		case joaat("weapon_firework"):
			return 236;
			break;
		
		case joaat("weapon_flaregun"):
			return 226;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 250;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 252;
			break;
		
		case joaat("weapon_proxmine"):
			return 256;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 258;
			break;
		
		case joaat("weapon_hatchet"):
			return 254;
			break;
		
		case joaat("weapon_combatpdw"):
			return 260;
			break;
		
		case joaat("weapon_knuckle"):
			return 262;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 264;
			break;
		
		case joaat("weapon_machete"):
			return 266;
			break;
		
		case joaat("weapon_machinepistol"):
			return 268;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 273;
			break;
		
		case joaat("weapon_compactrifle"):
			return 271;
			break;
		
		case joaat("weapon_flashlight"):
			return 275;
			break;
		
		case joaat("weapon_revolver"):
			return 278;
			break;
		
		case joaat("weapon_switchblade"):
			return 280;
			break;
	}
	return 285;
}

auto func_41()
{
	return Global_1315890;
}

bool func_42()
{
	if (func_44() && func_43(0))
	{
		return true;
	}
	return false;
}

auto func_43(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_44()
{
	return func_43(func_123() + 1);
}

bool func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			iVar0 = true;
			iVar3 = 486;
			break;
		
		case joaat("weapon_golfclub"):
			iVar0 = true;
			iVar3 = 240;
			break;
		
		case joaat("weapon_bat"):
			iVar0 = true;
			iVar3 = 233;
			break;
		
		case joaat("weapon_crowbar"):
			iVar0 = true;
			iVar3 = 205;
			break;
	}
	if (iVar0)
	{
		iVar1 = func_46(player_id());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

auto func_46(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_195.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 16;
				
				case joaat("component_pistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 16;
				
				case joaat("component_pistol50_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 16;
				
				case joaat("component_combatpistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 16;
				
				case joaat("component_appistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 16;
				
				case joaat("component_microsmg_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 16;
				
				case joaat("component_assaultsmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_scope_macro"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 16;
				
				case joaat("component_smg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_at_scope_macro_02"):
					return 64;
				
				case joaat("component_smg_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 16;
				
				case joaat("component_assaultrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_assaultrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 16;
				
				case joaat("component_carbinerifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_carbinerifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 16;
				
				case joaat("component_specialcarbine_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_specialcarbine_clip_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 16;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 16;
				
				case joaat("component_heavypistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 16;
				
				case joaat("component_snspistol_clip_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 16;
				
				case joaat("component_advancedrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 16;
				
				case joaat("component_mg_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 16;
				
				case joaat("component_combatmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_scope_medium"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 1;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 16;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 16;
				
				case joaat("component_vintagepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 16;
				
				case joaat("component_gusenberg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 16;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 16;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 32;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 16;
				
				case joaat("component_combatpdw_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_combatpdw_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 16;
				
				case joaat("component_machinepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_machinepistol_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 16;
				
				case joaat("component_compactrifle_clip_02"):
					return 32;
				
				case joaat("component_compactrifle_clip_03"):
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return false;
	}
	iVar0 = func_52(iParam0, iParam1, iParam2);
	iVar1 = func_50(iParam0, iParam1);
	return is_bit_set(iVar0, func_30(iVar1));
}

int func_50(int iParam0, int iParam1)
{
	return func_51(iParam0, iParam1);
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
	}
	return 0;
}

auto func_52(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = func_34(func_53(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 803;
				break;
			
			case 1:
				return 804;
				break;
			
			case 2:
				return 805;
				break;
			
			case 3:
				return 806;
				break;
			
			case 4:
				return 1743;
				break;
			
			case 5:
				return 2411;
				break;
			
			case 6:
				return 2803;
				break;
			}
	}
	return 3949;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return false;
	}
	iVar0 = func_55(iParam0, iParam1, iParam2);
	iVar1 = func_50(iParam0, iParam1);
	return is_bit_set(iVar0, func_30(iVar1));
}

auto func_55(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = func_34(func_56(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 674;
				break;
			
			case 1:
				return 675;
				break;
			
			case 2:
				return 676;
				break;
			
			case 3:
				return 677;
				break;
			
			case 4:
				return 1742;
				break;
			
			case 5:
				return 2410;
				break;
			
			case 6:
				return 2802;
				break;
			}
	}
	return 1742;
}

char* func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar0))
					{
						if (get_dlc_weapon_component_data(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if (!func_63(iParam0, iParam1, -1))
		{
			func_59(iParam0, iParam1, 1);
		}
	}
	else if (func_63(iParam0, iParam1, -1))
	{
		func_59(iParam0, iParam1, 0);
	}
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_62(iParam0, iParam1, -1);
	iVar1 = func_50(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (iParam2)
		{
			set_bit(&iVar0, func_30(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_30(iVar1));
		}
		func_60(func_61(iParam0, iParam1), iVar0, -1, 1);
	}
}

void func_60(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 682;
				break;
			
			case 3:
				return 683;
				break;
			
			case 4:
				return 1745;
				break;
			
			case 5:
				return 2413;
				break;
			
			case 6:
				return 2805;
				break;
			}
	}
	return 1745;
}

auto func_62(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = func_34(func_61(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return false;
	}
	iVar0 = func_62(iParam0, iParam1, iParam2);
	iVar1 = func_50(iParam0, iParam1);
	return is_bit_set(iVar0, func_30(iVar1));
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if (!func_49(iParam0, iParam1, -1))
		{
			func_65(iParam0, iParam1, 1);
		}
	}
	else if (func_49(iParam0, iParam1, -1))
	{
		func_65(iParam0, iParam1, 0);
	}
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_52(iParam0, iParam1, -1);
	iVar1 = func_50(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (iParam2)
		{
			set_bit(&iVar0, func_30(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_30(iVar1));
		}
		func_60(func_53(iParam0, iParam1), iVar0, -1, 1);
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2)
	{
		if (!func_54(iParam0, iParam1, -1))
		{
			func_81(iParam0, iParam1, 1);
		}
		if (iParam3)
		{
			if (func_79(iParam0, iParam1) == 0)
			{
				func_74(16, func_57(iParam0, 0), func_78(iParam0, 0), func_77(iParam1), func_76(iParam1), -1, 0, 0, 0, -1);
				func_72(iParam0, iParam1, 1);
			}
		}
		if (iParam4)
		{
			func_67(iParam0, iParam1, 1);
		}
	}
	else if (func_54(iParam0, iParam1, -1))
	{
		func_81(iParam0, iParam1, 0);
	}
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if (!func_71(iParam0, iParam1, -1))
		{
			func_68(iParam0, iParam1, 1);
		}
	}
	else if (func_71(iParam0, iParam1, -1))
	{
		func_68(iParam0, iParam1, 0);
	}
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam0, iParam1, -1);
	iVar1 = func_50(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (iParam2)
		{
			set_bit(&iVar0, func_30(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_30(iVar1));
		}
		func_60(func_69(iParam0, iParam1), iVar0, -1, 1);
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 647;
				break;
			
			case 1:
				return 648;
				break;
			
			case 2:
				return 649;
				break;
			
			case 3:
				return 650;
				break;
			
			case 4:
				return 1744;
				break;
			
			case 5:
				return 2412;
				break;
			
			case 6:
				return 2804;
				break;
			}
	}
	return 3949;
}

auto func_70(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = func_34(func_69(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return false;
	}
	iVar0 = func_70(iParam0, iParam1, iParam2);
	iVar1 = func_50(iParam0, iParam1);
	return is_bit_set(iVar0, func_30(iVar1));
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (iParam2)
		{
			set_bit(&(Global_2467971.f_991[func_73(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			clear_bit(&(Global_2467971.f_991[func_73(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (func_38(iVar0))
	{
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
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
	}
	return 0;
}

void func_74(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	auto uVar0;
	
	uVar0 = func_75(&Global_1344708);
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

int func_75(auto uParam0)
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

char* func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_smg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_snspistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_combatmg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_heavysniper"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_microsmg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_mg"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_minigun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_combatpistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon_small";
			break;
		
		case 527765612:
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_molotov"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_petrolcan"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("weapon_stungun"):
			return "W_PI_Stungun";
			break;
		
		case joaat("weapon_pistol"):
			return "W_PI_Pistol";
			break;
		
		case joaat("gadget_parachute"):
			return "Parachute_Main";
			break;
		
		case joaat("weapon_smg"):
			return "W_SB_SMG";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("weapon_snspistol"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("weapon_grenade"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("weapon_stickybomb"):
			return "W_Ex_PE";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("weapon_combatmg"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("weapon_appistol"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("weapon_rpg"):
			return "W_LR_RPG";
			break;
		
		case joaat("weapon_heavysniper"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("weapon_microsmg"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("weapon_mg"):
			return "W_MG_MG";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("weapon_minigun"):
			return "W_MG_Minigun";
			break;
		
		case joaat("weapon_combatpistol"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("weapon_petrolcan"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("weapon_molotov"):
			return "W_EX_Molotov";
			break;
		
		case 527765612:
			return "rocket";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "rocket";
			break;
	}
	return "";
}

char* func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<15> Var41;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case 371102273:
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar0))
					{
						if (get_dlc_weapon_component_data(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_80(iParam0, iParam1);
	iVar1 = func_50(iParam0, iParam1);
	return is_bit_set(iVar0, func_30(iVar1));
}

auto func_80(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = Global_2467971.f_991[func_73(iParam0, iParam1)];
	return uVar0;
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_55(iParam0, iParam1, -1);
	iVar1 = func_50(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (iParam2)
		{
			set_bit(&iVar0, func_30(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_30(iVar1));
		}
		func_60(func_56(iParam0, iParam1), iVar0, -1, 1);
	}
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_28(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return false;
	}
	iVar0 = func_84(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return is_bit_set(iVar0, func_30(iVar1));
}

auto func_84(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_34(func_85(iParam0), iParam1, 0);
	return uVar0;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
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

int func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return false;
	}
	if (func_42() == 0)
	{
		return false;
	}
	if (iParam0 != joaat("gadget_parachute"))
	{
		if (func_39(func_89(iParam0), -1))
		{
			return false;
		}
	}
	iVar0 = func_87(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return is_bit_set(iVar0, func_30(iVar1));
}

auto func_87(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_34(func_88(iParam0), iParam1, 0);
	return uVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_139() == 0 || func_37() == 0) || (func_139() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 792;
				break;
			
			case 1:
				return 793;
				break;
			
			case 2:
				return 2396;
				break;
			}
	}
	return 3949;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 208;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 206;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 210;
			break;
		
		case joaat("weapon_gusenberg"):
			return 212;
			break;
		
		case joaat("weapon_dagger"):
			return 233;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 235;
			break;
		
		case joaat("weapon_firework"):
			return 237;
			break;
		
		case joaat("weapon_musket"):
			return 239;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 251;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 253;
			break;
		
		case joaat("weapon_proxmine"):
			return 257;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 259;
			break;
		
		case joaat("weapon_combatpdw"):
			return 261;
			break;
		
		case joaat("weapon_knuckle"):
			return 263;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 265;
			break;
		
		case joaat("weapon_hatchet"):
			return 255;
			break;
		
		case joaat("weapon_machete"):
			return 267;
			break;
		
		case joaat("weapon_machinepistol"):
			return 269;
			break;
		
		case joaat("weapon_compactrifle"):
			return 272;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 274;
			break;
		
		case joaat("weapon_flashlight"):
			return 276;
			break;
		
		case joaat("weapon_revolver"):
			return 279;
			break;
		
		case joaat("weapon_switchblade"):
			return 281;
			break;
	}
	return 2;
}

auto func_90(auto uParam0)
{
	return *uParam0.f_281;
}

void func_91(auto uParam0, auto uParam1)
{
	if (is_weapon_valid(joaat("weapon_hammer")) && iLocal_91[10] == *uParam1.f_5)
	{
		func_94(joaat("weapon_hammer"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_pistol50")) && iLocal_91[0] == *uParam1.f_5)
	{
		func_94(joaat("weapon_pistol50"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_bullpupshotgun")) && iLocal_91[1] == *uParam1.f_5)
	{
		func_94(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0);
	}
	if (func_93(1, 0))
	{
		if (is_weapon_valid(joaat("weapon_sawnoffshotgun")) && iLocal_91[2] == *uParam1.f_5)
		{
			func_94(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (is_weapon_valid(joaat("weapon_bottle")) && iLocal_91[3] == *uParam1.f_5)
	{
		func_94(joaat("weapon_bottle"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_snspistol")) && iLocal_91[4] == *uParam1.f_5)
	{
		func_94(joaat("weapon_snspistol"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_gusenberg")) && iLocal_91[11] == *uParam1.f_5)
	{
		func_94(joaat("weapon_gusenberg"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_heavypistol")) && iLocal_91[7] == *uParam1.f_5)
	{
		func_94(joaat("weapon_heavypistol"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_specialcarbine")) && iLocal_91[5] == *uParam1.f_5)
	{
		func_94(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_bullpuprifle")) && iLocal_91[6] == *uParam1.f_5)
	{
		func_94(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_dagger")) && iLocal_91[8] == *uParam1.f_5)
	{
		func_94(joaat("weapon_dagger"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_vintagepistol")) && iLocal_91[9] == *uParam1.f_5)
	{
		func_94(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_firework")) && iLocal_91[14] == *uParam1.f_5)
	{
		func_94(joaat("weapon_firework"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_musket")) && iLocal_91[13] == *uParam1.f_5)
	{
		func_94(joaat("weapon_musket"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_flaregun")) && iLocal_91[12] == *uParam1.f_5)
	{
		func_94(joaat("weapon_flaregun"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_heavyshotgun")) && iLocal_91[15] == *uParam1.f_5)
	{
		func_94(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_marksmanrifle")) && iLocal_91[16] == *uParam1.f_5)
	{
		func_94(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0);
	}
	if (func_92())
	{
		if (is_weapon_valid(joaat("weapon_hatchet")) && iLocal_91[22] == *uParam1.f_5)
		{
			func_94(joaat("weapon_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if (is_weapon_valid(joaat("weapon_proxmine")) && iLocal_91[17] == *uParam1.f_5)
	{
		func_94(joaat("weapon_proxmine"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_hominglauncher")) && iLocal_91[18] == *uParam1.f_5)
	{
		func_94(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_combatpdw")) && iLocal_91[19] == *uParam1.f_5)
	{
		func_94(joaat("weapon_combatpdw"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_marksmanpistol")) && iLocal_91[20] == *uParam1.f_5)
	{
		func_94(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_knuckle")) && iLocal_91[21] == *uParam1.f_5)
	{
		func_94(joaat("weapon_knuckle"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_machete")) && iLocal_91[23] == *uParam1.f_5)
	{
		func_94(joaat("weapon_machete"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_machinepistol")) && iLocal_91[24] == *uParam1.f_5)
	{
		func_94(joaat("weapon_machinepistol"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_9522 && is_weapon_valid(joaat("weapon_flashlight"))) && iLocal_91[25] == *uParam1.f_5)
	{
		func_94(joaat("weapon_flashlight"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_revolver")) && iLocal_91[26] == *uParam1.f_5)
	{
		func_94(joaat("weapon_revolver"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_switchblade")) && iLocal_91[27] == *uParam1.f_5)
	{
		func_94(joaat("weapon_switchblade"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_dbshotgun")) && iLocal_91[28] == *uParam1.f_5)
	{
		func_94(joaat("weapon_dbshotgun"), uParam0, *uParam1, 0);
	}
	if (is_weapon_valid(joaat("weapon_compactrifle")) && iLocal_91[29] == *uParam1.f_5)
	{
		func_94(joaat("weapon_compactrifle"), uParam0, *uParam1, 0);
	}
}

bool func_92()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
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
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_93(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (is_bit_set(Global_101154.f_668.f_780, 2))
		{
			return true;
		}
	}
	if (_0x67A5589628E0CFF6())
	{
		if (!iParam1 || network_is_signed_online())
		{
			if (!is_ps3_version() && !is_orbis_version())
			{
				return true;
			}
		}
	}
	if (iParam1)
	{
		if (_0x1353F87E89946207())
		{
			return false;
		}
	}
	if (_0x67A5589628E0CFF6())
	{
		return true;
	}
	return false;
}

void func_94(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	float fVar8;
	auto uVar9;
	auto uVar10;
	int iVar11;
	auto uVar12;
	struct<5> Var13;
	struct<5> Var18;
	struct<5> Var23;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0), 16);
	StringCopy(&Var4, func_122(iParam0), 16);
	fVar8 = func_121(iParam0);
	uVar9 = func_120(iParam0, iParam2);
	uVar10 = func_119(iParam0, iParam2);
	iVar11 = func_118(iParam0, iParam2);
	uVar12 = func_117(iParam0, iParam2);
	get_weapon_hud_stats(iParam0, &Var13);
	Var13.f_2 = get_weapon_clip_size(iParam0);
	iVar31 = false;
	iVar30 = 0;
	while (iVar30 <= 8)
	{
		if (*uParam1.f_1[iVar30] == 0 && is_weapon_valid(iParam0))
		{
			if (func_86(iParam0, iParam2, 0))
			{
				iVar31 = true;
				if (iVar31)
				{
				}
			}
			iVar29 = false;
			while (iVar29 <= 8)
			{
				iVar28 = func_82(iParam0, iVar29);
				if (iVar28 != 0)
				{
					if (func_54(iVar28, iParam0, iParam2) && iVar31)
					{
						if (get_weapon_component_hud_stats(iVar28, &Var18))
						{
							Var23 += Var18;
							Var23.f_1 += Var18.f_1;
							Var23.f_3 += Var18.f_3;
							Var23.f_4 += Var18.f_4;
						}
					}
					if (func_63(iVar28, iParam0, iParam2))
					{
						if (func_116(iVar28))
						{
							Var23.f_2 = func_115(iParam0);
						}
						else if (func_114(iVar28))
						{
							Var23.f_2 = func_113(iParam0);
						}
					}
					if (func_49(iVar28, iParam0, iParam2))
					{
					}
				}
				iVar29++;
			}
			if (Var23.f_2 == 0)
			{
				Var23.f_2 = Var13.f_2;
			}
			func_112(iVar30, &Var0, &Var4, uParam1);
			func_111(iVar30, Var13, uParam1);
			func_110(iVar30, Var23, uParam1);
			if (func_15(iParam0))
			{
				func_109(iVar30, -1, uParam1);
				func_108(iVar30, Var23.f_3, uParam1);
				func_107(iVar30, -1, uParam1);
				func_106(iVar30, Var23.f_4, uParam1);
				func_105(iVar30, -1, uParam1);
				func_104(iVar30, Var23.f_2, uParam1);
			}
			else
			{
				func_109(iVar30, Var13.f_3, uParam1);
				func_108(iVar30, Var23.f_3, uParam1);
				func_107(iVar30, Var13.f_4, uParam1);
				func_106(iVar30, Var23.f_4, uParam1);
				func_105(iVar30, Var13.f_2, uParam1);
				func_104(iVar30, Var23.f_2, uParam1);
			}
			func_103(iVar30, uVar10, uParam1);
			func_102(iVar30, uVar9, uParam1);
			if (func_15(iParam0))
			{
				func_101(iVar30, -1f, uParam1);
				func_100(iVar30, -1, uParam1);
			}
			else
			{
				func_101(iVar30, fVar8, uParam1);
				func_100(iVar30, iVar11, uParam1);
			}
			func_99(iVar30, uVar12, uParam1);
			func_98(iVar30, Var13.f_1, uParam1);
			func_97(iVar30, Var23.f_1, uParam1);
			func_96(iVar30, iParam0, uParam1);
			func_95(iParam2, uParam1);
			*uParam1.f_1[iVar30] = 1;
			iVar30 = 9;
		}
		iVar30++;
	}
}

void func_95(int iParam0, auto uParam1)
{
	*uParam1.f_276 = iParam0;
}

void func_96(int iParam0, int iParam1, auto uParam2)
{
	*uParam2.f_85[iParam0] = iParam1;
}

void func_97(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_205[iParam0] = uParam1;
}

void func_98(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_155[iParam0] = uParam1;
}

void func_99(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_135[iParam0] = uParam1;
}

void func_100(int iParam0, int iParam1, auto uParam2)
{
	*uParam2.f_125[iParam0] = iParam1;
}

void func_101(int iParam0, float fParam1, auto uParam2)
{
	*uParam2.f_115[iParam0] = fParam1;
}

void func_102(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_95[iParam0] = uParam1;
}

void func_103(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_105[iParam0] = uParam1;
}

void func_104(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_215[iParam0] = uParam1;
}

void func_105(int iParam0, int iParam1, auto uParam2)
{
	*uParam2.f_165[iParam0] = iParam1;
}

void func_106(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_235[iParam0] = uParam1;
}

void func_107(int iParam0, int iParam1, auto uParam2)
{
	*uParam2.f_175[iParam0] = iParam1;
}

void func_108(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_225[iParam0] = uParam1;
}

void func_109(int iParam0, int iParam1, auto uParam2)
{
	*uParam2.f_185[iParam0] = iParam1;
}

void func_110(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_195[iParam0] = uParam1;
}

void func_111(int iParam0, auto uParam1, auto uParam2)
{
	*uParam2.f_145[iParam0] = uParam1;
}

void func_112(int iParam0, char* sParam1, char* sParam2, auto uParam3)
{
	StringCopy(uParam3.f_11[iParam0 /*4*/], sParam1, 16);
	StringCopy(uParam3.f_48[iParam0 /*4*/], sParam2, 16);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 16;
		
		case joaat("weapon_combatpistol"):
			return 16;
		
		case joaat("weapon_appistol"):
			return 36;
		
		case joaat("weapon_microsmg"):
			return 30;
		
		case joaat("weapon_smg"):
			return 60;
		
		case joaat("weapon_assaultrifle"):
			return 60;
		
		case joaat("weapon_carbinerifle"):
			return 60;
		
		case joaat("weapon_advancedrifle"):
			return 60;
		
		case joaat("weapon_mg"):
			return 100;
		
		case joaat("weapon_combatmg"):
			return 200;
		
		case joaat("weapon_assaultshotgun"):
			return 32;
		
		case joaat("weapon_pistol50"):
			return 12;
		
		case joaat("weapon_assaultsmg"):
			return 60;
		
		case joaat("weapon_snspistol"):
			return 12;
		
		case joaat("weapon_specialcarbine"):
			return 60;
		
		case joaat("weapon_bullpuprifle"):
			return 60;
		
		case joaat("weapon_heavypistol"):
			return 36;
		
		case joaat("weapon_vintagepistol"):
			return 14;
		
		case joaat("weapon_gusenberg"):
			return 50;
		
		case joaat("weapon_marksmanrifle"):
			return 16;
		
		case joaat("weapon_heavyshotgun"):
			return 12;
		
		case joaat("weapon_combatpdw"):
			return 60;
		
		case joaat("weapon_compactrifle"):
			return 60;
		
		case joaat("weapon_machinepistol"):
			return 20;
		
		default:
	}
	return 0;
	return 0;
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_clip_02"):
			return true;
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return true;
			break;
		
		case joaat("component_appistol_clip_02"):
			return true;
			break;
		
		case joaat("component_microsmg_clip_02"):
			return true;
			break;
		
		case joaat("component_smg_clip_02"):
			return true;
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return true;
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return true;
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return true;
			break;
		
		case joaat("component_mg_clip_02"):
			return true;
			break;
		
		case joaat("component_combatmg_clip_02"):
			return true;
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return true;
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return true;
			break;
		
		case joaat("component_pistol50_clip_02"):
			return true;
			break;
		
		case -507117574:
			return true;
			break;
		
		case 1048471894:
			return true;
			break;
		
		case 1824470811:
			return true;
			break;
		
		case joaat("component_specialcarbine_clip_02"):
			return true;
			break;
		
		case joaat("component_bullpuprifle_clip_02"):
			return true;
			break;
		
		case joaat("component_heavypistol_clip_02"):
			return true;
			break;
		
		case joaat("component_snspistol_clip_02"):
			return true;
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return true;
			break;
		
		case joaat("component_gusenberg_clip_02"):
			return true;
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return true;
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return true;
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return true;
			break;
		
		case joaat("component_compactrifle_clip_02"):
			return true;
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return true;
			break;
	}
	return false;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_smg"):
			return 100;
		
		case joaat("weapon_assaultrifle"):
			return 100;
		
		case joaat("weapon_carbinerifle"):
			return 100;
		
		case joaat("weapon_specialcarbine"):
			return 100;
		
		case joaat("weapon_heavyshotgun"):
			return 30;
		
		case joaat("weapon_combatpdw"):
			return 100;
		
		case joaat("weapon_compactrifle"):
			return 100;
		
		case joaat("weapon_machinepistol"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

bool func_116(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_assaultrifle_clip_03"):
			return true;
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return true;
			break;
		
		case joaat("component_combatpdw_clip_03"):
			return true;
			break;
		
		case joaat("component_compactrifle_clip_03"):
			return true;
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return true;
			break;
		
		case joaat("component_machinepistol_clip_03"):
			return true;
			break;
		
		case joaat("component_smg_clip_03"):
			return true;
			break;
		
		case joaat("component_specialcarbine_clip_03"):
			return true;
			break;
	}
	return false;
}

float func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return to_float(func_34(243, iParam1, 0)) / to_float(func_34(244, iParam1, 0));
		
		case joaat("weapon_combatpistol"):
			return to_float(func_34(253, iParam1, 0)) / to_float(func_34(254, iParam1, 0));
		
		case joaat("weapon_appistol"):
			return to_float(func_34(273, iParam1, 0)) / to_float(func_34(274, iParam1, 0));
		
		case joaat("weapon_microsmg"):
			return to_float(func_34(283, iParam1, 0)) / to_float(func_34(284, iParam1, 0));
		
		case joaat("weapon_smg"):
			return to_float(func_34(293, iParam1, 0)) / to_float(func_34(294, iParam1, 0));
		
		case joaat("weapon_assaultrifle"):
			return to_float(func_34(313, iParam1, 0)) / to_float(func_34(314, iParam1, 0));
		
		case joaat("weapon_carbinerifle"):
			return to_float(func_34(322, iParam1, 0)) / to_float(func_34(323, iParam1, 0));
		
		case joaat("weapon_advancedrifle"):
			return to_float(func_34(331, iParam1, 0)) / to_float(func_34(332, iParam1, 0));
		
		case joaat("weapon_mg"):
			return to_float(func_34(340, iParam1, 0)) / to_float(func_34(341, iParam1, 0));
		
		case joaat("weapon_combatmg"):
			return to_float(func_34(349, iParam1, 0)) / to_float(func_34(350, iParam1, 0));
		
		case joaat("weapon_pumpshotgun"):
			return to_float(func_34(367, iParam1, 0)) / to_float(func_34(368, iParam1, 0));
		
		case joaat("weapon_sawnoffshotgun"):
			return to_float(func_34(376, iParam1, 0)) / to_float(func_34(377, iParam1, 0));
		
		case joaat("weapon_assaultshotgun"):
			return to_float(func_34(395, iParam1, 0)) / to_float(func_34(396, iParam1, 0));
		
		case joaat("weapon_sniperrifle"):
			return to_float(func_34(414, iParam1, 0)) / to_float(func_34(415, iParam1, 0));
		
		case joaat("weapon_heavysniper"):
			return to_float(func_34(423, iParam1, 0)) / to_float(func_34(424, iParam1, 0));
		
		case joaat("weapon_grenadelauncher"):
			return to_float(func_34(434, iParam1, 0)) / to_float(func_34(435, iParam1, 0));
		
		case joaat("weapon_rpg"):
			return to_float(func_34(441, iParam1, 0)) / to_float(func_34(442, iParam1, 0));
		
		case joaat("weapon_minigun"):
			return to_float(func_34(448, iParam1, 0)) / to_float(func_34(449, iParam1, 0));
		
		case joaat("weapon_grenade"):
			return to_float(func_34(457, iParam1, 0)) / to_float(func_34(458, iParam1, 0));
		
		case joaat("weapon_smokegrenade"):
			return to_float(func_34(465, iParam1, 0)) / to_float(func_34(466, iParam1, 0));
		
		case joaat("weapon_stickybomb"):
			return to_float(func_34(474, iParam1, 0)) / to_float(func_34(475, iParam1, 0));
		
		case joaat("weapon_molotov"):
			return to_float(func_34(482, iParam1, 0)) / to_float(func_34(483, iParam1, 0));
		
		case joaat("weapon_stungun"):
			return to_float(func_34(404, iParam1, 0)) / to_float(func_34(405, iParam1, 0));
		
		case joaat("weapon_knife"):
			return to_float(func_34(186, iParam1, 0)) / to_float(func_34(188, iParam1, 0));
		
		case joaat("weapon_nightstick"):
			return to_float(func_34(194, iParam1, 0)) / to_float(func_34(196, iParam1, 0));
		
		case joaat("weapon_hammer"):
			return to_float(func_34(222, iParam1, 0)) / to_float(func_34(224, iParam1, 0));
		
		case joaat("weapon_bat"):
			return to_float(func_34(229, iParam1, 0)) / to_float(func_34(231, iParam1, 0));
		
		case joaat("weapon_crowbar"):
			return to_float(func_34(201, iParam1, 0)) / to_float(func_34(203, iParam1, 0));
		
		case joaat("weapon_golfclub"):
			return to_float(func_34(236, iParam1, 0)) / to_float(func_34(238, iParam1, 0));
		
		case joaat("weapon_pistol50"):
			return to_float(func_34(263, iParam1, 0)) / to_float(func_34(264, iParam1, 0));
		
		case joaat("weapon_assaultsmg"):
			return to_float(func_34(303, iParam1, 0)) / to_float(func_34(304, iParam1, 0));
		
		case joaat("weapon_bullpupshotgun"):
			return to_float(func_34(386, iParam1, 0)) / to_float(func_34(387, iParam1, 0));
		
		case -572349828:
			return to_float(func_34(358, iParam1, 0)) / to_float(func_34(359, iParam1, 0));
		
		case 392730790:
			return to_float(func_34(313, iParam1, 0)) / to_float(func_34(314, iParam1, 0));
		
		case -947031628:
			return to_float(func_34(423, iParam1, 0)) / to_float(func_34(424, iParam1, 0));
		
		case -1887867191:
			return to_float(func_34(313, iParam1, 0)) / to_float(func_34(314, iParam1, 0));
		
		case joaat("weapon_bottle"):
			return to_float(func_34(1721, iParam1, 0)) / to_float(func_34(1722, iParam1, 0));
		
		case joaat("weapon_snspistol"):
			return to_float(func_34(1731, iParam1, 0)) / to_float(func_34(1732, iParam1, 0));
		
		case joaat("weapon_specialcarbine"):
			return to_float(func_34(3362, iParam1, 0)) / to_float(func_34(3363, iParam1, 0));
		
		case joaat("weapon_bullpuprifle"):
			return to_float(func_34(3372, iParam1, 0)) / to_float(func_34(3373, iParam1, 0));
		
		case joaat("weapon_heavypistol"):
			return to_float(func_34(3352, iParam1, 0)) / to_float(func_34(3353, iParam1, 0));
		
		case joaat("weapon_dagger"):
			return to_float(func_34(3655, iParam1, 0)) / to_float(func_34(3656, iParam1, 0));
		
		case joaat("weapon_vintagepistol"):
			return to_float(func_34(3665, iParam1, 0)) / to_float(func_34(3666, iParam1, 0));
		
		case joaat("weapon_gusenberg"):
			return to_float(func_34(3382, iParam1, 0)) / to_float(func_34(3383, iParam1, 0));
		
		case joaat("weapon_musket"):
			return to_float(func_34(3685, iParam1, 0)) / to_float(func_34(3686, iParam1, 0));
		
		case joaat("weapon_firework"):
			return to_float(func_34(3675, iParam1, 0)) / to_float(func_34(3676, iParam1, 0));
		
		case joaat("weapon_heavyshotgun"):
			return to_float(func_34(3763, iParam1, 0)) / to_float(func_34(3764, iParam1, 0));
		
		case joaat("weapon_marksmanrifle"):
			return to_float(func_34(3773, iParam1, 0)) / to_float(func_34(3774, iParam1, 0));
		
		case joaat("weapon_hominglauncher"):
			return to_float(func_34(3799, iParam1, 0)) / to_float(func_34(3800, iParam1, 0));
		
		case joaat("weapon_proxmine"):
			return to_float(func_34(3791, iParam1, 0)) / to_float(func_34(3792, iParam1, 0));
		
		case joaat("weapon_combatpdw"):
			return to_float(func_34(3807, iParam1, 0)) / to_float(func_34(3808, iParam1, 0));
		
		case joaat("weapon_marksmanpistol"):
			return to_float(func_34(3824, iParam1, 0)) / to_float(func_34(3825, iParam1, 0));
		
		case joaat("weapon_knuckle"):
			return to_float(func_34(3817, iParam1, 0)) / to_float(func_34(3818, iParam1, 0));
		
		case joaat("weapon_machete"):
			return to_float(func_34(3834, iParam1, 0)) / to_float(func_34(3835, iParam1, 0));
		
		case joaat("weapon_machinepistol"):
			return to_float(func_34(3842, iParam1, 0)) / to_float(func_34(3843, iParam1, 0));
		
		case joaat("weapon_flashlight"):
			return to_float(func_34(3880, iParam1, 0)) / to_float(func_34(3881, iParam1, 0));
		
		case joaat("weapon_switchblade"):
			return to_float(func_34(3908, iParam1, 0)) / to_float(func_34(3909, iParam1, 0));
		
		case joaat("weapon_revolver"):
			return to_float(func_34(3898, iParam1, 0)) / to_float(func_34(3899, iParam1, 0));
		
		case joaat("weapon_dbshotgun"):
			return to_float(func_34(3870, iParam1, 0)) / to_float(func_34(3871, iParam1, 0));
		
		case joaat("weapon_compactrifle"):
			return to_float(func_34(3860, iParam1, 0)) / to_float(func_34(3861, iParam1, 0));
		
		case joaat("weapon_hatchet"):
			return to_float(func_34(3783, iParam1, 0)) / to_float(func_34(3784, iParam1, 0));
		
		default:
	}
	return 0f;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(247, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(257, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(277, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(287, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(297, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(317, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(326, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(335, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(344, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(353, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(371, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(380, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(399, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(418, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(427, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(452, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(267, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(307, iParam1, 0);
		
		case -947031628:
			return func_34(427, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(390, iParam1, 0);
		
		case -572349828:
			return func_34(362, iParam1, 0);
		
		case 392730790:
			return func_34(317, iParam1, 0);
		
		case -1887867191:
			return func_34(317, iParam1, 0);
		
		case -837150131:
			return func_34(317, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1735, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(3366, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(3376, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(3356, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(3669, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(3386, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(3689, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(3679, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(3767, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(3777, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(3811, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(3828, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(3846, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(3902, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(3874, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(3864, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(244, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(254, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(274, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(284, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(294, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(314, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(323, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(332, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(341, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(350, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(368, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(377, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(396, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(415, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(424, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(435, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(442, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(449, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(458, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(466, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(475, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(483, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(405, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(188, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(196, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(224, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(231, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(203, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(238, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(264, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(304, iParam1, 0);
		
		case -947031628:
			return func_34(424, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(387, iParam1, 0);
		
		case -572349828:
			return func_34(359, iParam1, 0);
		
		case 392730790:
			return func_34(314, iParam1, 0);
		
		case -1887867191:
			return func_34(314, iParam1, 0);
		
		case -837150131:
			return func_34(314, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1722, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1732, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(3363, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(3373, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(3353, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(3656, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(3666, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(3383, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(3686, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(3676, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(3764, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(3774, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(3792, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(3800, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(3808, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(3825, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(3818, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(3835, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(3843, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(3881, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(3909, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(3899, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(3871, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(3861, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(3784, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(243, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(253, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(273, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(283, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(293, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(313, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(322, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(331, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(340, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(349, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(367, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(376, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(395, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(414, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(423, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(434, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(441, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(448, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(457, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(465, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(474, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(482, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(404, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(186, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(194, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(222, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(229, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(201, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(236, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(263, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(303, iParam1, 0);
		
		case -947031628:
			return func_34(423, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(386, iParam1, 0);
		
		case -572349828:
			return func_34(358, iParam1, 0);
		
		case 392730790:
			return func_34(313, iParam1, 0);
		
		case -1887867191:
			return func_34(313, iParam1, 0);
		
		case -837150131:
			return func_34(313, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1721, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1731, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(3362, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(3372, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(3352, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(3655, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(3665, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(3382, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(3685, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(3675, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(3763, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(3773, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(3791, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(3799, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(3807, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(3824, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(3817, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(3834, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(3842, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(3880, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(3908, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(3898, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(3870, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(3860, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(3783, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 fVar2;
	Vector3 fVar3;
	Vector3 fVar4;
	int iVar5;
	
	if (iParam0 == joaat("weapon_pistol"))
	{
		iVar0 = 245;
		iVar1 = 246;
	}
	else if (iParam0 == joaat("weapon_combatpistol"))
	{
		iVar0 = 255;
		iVar1 = 256;
	}
	else if (iParam0 == joaat("weapon_appistol"))
	{
		iVar0 = 275;
		iVar1 = 276;
	}
	else if (iParam0 == joaat("weapon_microsmg"))
	{
		iVar0 = 285;
		iVar1 = 286;
	}
	else if (iParam0 == joaat("weapon_smg"))
	{
		iVar0 = 295;
		iVar1 = 296;
	}
	else if (iParam0 == joaat("weapon_assaultrifle"))
	{
		iVar0 = 315;
		iVar1 = 316;
	}
	else if (iParam0 == joaat("weapon_carbinerifle"))
	{
		iVar0 = 324;
		iVar1 = 325;
	}
	else if (iParam0 == joaat("weapon_specialcarbine"))
	{
		iVar0 = 3364;
		iVar1 = 3365;
	}
	else if (iParam0 == joaat("weapon_snspistol"))
	{
		iVar0 = 1733;
		iVar1 = 1734;
	}
	else if (iParam0 == joaat("weapon_advancedrifle"))
	{
		iVar0 = 333;
		iVar1 = 334;
	}
	else if (iParam0 == joaat("weapon_mg"))
	{
		iVar0 = 342;
		iVar1 = 343;
	}
	else if (iParam0 == joaat("weapon_combatmg"))
	{
		iVar0 = 351;
		iVar1 = 352;
	}
	else if (iParam0 == joaat("weapon_sawnoffshotgun"))
	{
		iVar0 = 378;
		iVar1 = 379;
	}
	else if (iParam0 == joaat("weapon_pumpshotgun"))
	{
		iVar0 = 369;
		iVar1 = 370;
	}
	else if (iParam0 == joaat("weapon_assaultshotgun"))
	{
		iVar0 = 397;
		iVar1 = 398;
	}
	else if (iParam0 == joaat("weapon_sniperrifle"))
	{
		iVar0 = 416;
		iVar1 = 417;
	}
	else if (iParam0 == joaat("weapon_heavysniper"))
	{
		iVar0 = 425;
		iVar1 = 426;
	}
	else if (iParam0 == joaat("weapon_grenadelauncher"))
	{
		iVar0 = 436;
		iVar1 = 434;
	}
	else if (iParam0 == joaat("weapon_minigun"))
	{
		iVar0 = 450;
		iVar1 = 451;
	}
	else if (iParam0 == joaat("weapon_rpg"))
	{
		iVar0 = 443;
		iVar1 = 441;
	}
	else if (iParam0 == joaat("weapon_bullpupshotgun"))
	{
		iVar0 = 388;
		iVar1 = 389;
	}
	else if (iParam0 == joaat("weapon_assaultsmg"))
	{
		iVar0 = 305;
		iVar1 = 306;
	}
	else if (iParam0 == joaat("weapon_pistol50"))
	{
		iVar0 = 265;
		iVar1 = 266;
	}
	else if (iParam0 == joaat("weapon_heavypistol"))
	{
		iVar0 = 3354;
		iVar1 = 3355;
	}
	else if (iParam0 == joaat("weapon_bullpuprifle"))
	{
		iVar0 = 3374;
		iVar1 = 3375;
	}
	else if (iParam0 == joaat("weapon_gusenberg"))
	{
		iVar0 = 3384;
		iVar1 = 3385;
	}
	else if (iParam0 == joaat("weapon_vintagepistol"))
	{
		iVar0 = 3667;
		iVar1 = 3668;
	}
	else if (iParam0 == joaat("weapon_musket"))
	{
		iVar0 = 3687;
		iVar1 = 3688;
	}
	else if (iParam0 == joaat("weapon_firework"))
	{
		iVar0 = 3677;
		iVar1 = 3678;
	}
	else if (iParam0 == joaat("weapon_heavyshotgun"))
	{
		iVar0 = 3765;
		iVar1 = 3766;
	}
	else if (iParam0 == joaat("weapon_marksmanrifle"))
	{
		iVar0 = 3775;
		iVar1 = 3776;
	}
	else if (iParam0 == joaat("weapon_hominglauncher"))
	{
		iVar0 = 3801;
		iVar1 = 3799;
	}
	else if (iParam0 == joaat("weapon_proxmine"))
	{
		iVar0 = 3793;
		iVar1 = 3791;
	}
	else if (iParam0 == joaat("weapon_combatpdw"))
	{
		iVar0 = 3809;
		iVar1 = 3810;
	}
	else if (iParam0 == joaat("weapon_marksmanpistol"))
	{
		iVar0 = 3826;
		iVar1 = 3827;
	}
	else if (iParam0 == joaat("weapon_machinepistol"))
	{
		iVar0 = 3844;
		iVar1 = 3845;
	}
	else if (iParam0 == joaat("weapon_compactrifle"))
	{
		iVar0 = 3862;
		iVar1 = 3863;
	}
	else if (iParam0 == joaat("weapon_dbshotgun"))
	{
		iVar0 = 3872;
		iVar1 = 3873;
	}
	else if (iParam0 == joaat("weapon_revolver"))
	{
		iVar0 = 3900;
		iVar1 = 3901;
	}
	else
	{
		return 0f;
	}
	fVar2 = to_float(func_34(iVar0, -1, 0));
	fVar3 = to_float(func_34(iVar1, -1, 0));
	if (fVar2 > 0f)
	{
		fVar4 = fVar3 / fVar2;
		if (fVar4 > 1f)
		{
			fVar4 = 1f;
		}
		fVar4 *= 100f;
		iVar5 = round(fVar4);
		fVar4 = to_float(iVar5);
		return fVar4;
	}
	return 0f;
}

char* func_122(int iParam0)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case 1742569970:
			return "";
			break;
		
		case -1474608608:
			return "";
			break;
		
		case 527765612:
			return "";
			break;
		
		case -165357558:
			return "";
			break;
		
		case -1372674932:
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		default:
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

auto func_123()
{
	return Global_1312747;
}

int func_124(int iParam0, int iParam1)
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

void func_125()
{
	func_126(0, -1, -1, 0, 0);
}

void func_126(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
		func_20("");
	}
	_push_scaleform_movie_function_parameter_bool(iParam4);
	_pop_scaleform_movie_function_void();
}

void func_127(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_129();
	iVar0 = 9;
	iVar1 = *uParam0.f_277;
	if (*uParam1.f_5 < iLocal_89)
	{
		iVar1 += iVar0 * *uParam1.f_5;
	}
	else
	{
		iVar1 += iVar0 * *uParam1.f_5;
	}
	iVar2 = *uParam1.f_5 + 1;
	iVar3 = iLocal_89 + 1;
	func_126(0, iVar2, iVar3, "HUD_PAGE", 0);
}

bool func_128(int iParam0)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	
	iVar0 = iParam0;
	uVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((is_control_just_released(2, iParam0) || is_disabled_control_just_released(2, iParam0)) || func_6(iParam0, &(Global_1338622.f_961), 1))
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

void func_129()
{
	iLocal_90 = 0;
	iLocal_89 = 3;
	if (is_weapon_valid(joaat("weapon_hammer")))
	{
		iLocal_91[10] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[10] = -1;
	}
	if (is_weapon_valid(joaat("weapon_pistol50")))
	{
		iLocal_91[0] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[0] = -1;
	}
	if (is_weapon_valid(joaat("weapon_bullpupshotgun")))
	{
		iLocal_91[1] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[1] = -1;
	}
	if (func_93(1, 0))
	{
		if (is_weapon_valid(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_91[2] = iLocal_90 / 9 + iLocal_89;
			iLocal_90++;
		}
		else
		{
			iLocal_91[2] = -1;
		}
	}
	if (is_weapon_valid(joaat("weapon_bottle")))
	{
		iLocal_91[3] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[3] = -1;
	}
	if (is_weapon_valid(joaat("weapon_snspistol")))
	{
		iLocal_91[4] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[4] = -1;
	}
	if (is_weapon_valid(joaat("weapon_gusenberg")))
	{
		iLocal_91[11] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[11] = -1;
	}
	if (is_weapon_valid(joaat("weapon_heavypistol")))
	{
		iLocal_91[7] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[7] = -1;
	}
	if (is_weapon_valid(joaat("weapon_specialcarbine")))
	{
		iLocal_91[5] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[5] = -1;
	}
	if (is_weapon_valid(joaat("weapon_bullpuprifle")))
	{
		iLocal_91[6] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[6] = -1;
	}
	if (is_weapon_valid(joaat("weapon_dagger")))
	{
		iLocal_91[8] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[8] = -1;
	}
	if (is_weapon_valid(joaat("weapon_vintagepistol")))
	{
		iLocal_91[9] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[9] = -1;
	}
	if (is_weapon_valid(joaat("weapon_firework")))
	{
		iLocal_91[14] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[14] = -1;
	}
	if (is_weapon_valid(joaat("weapon_musket")))
	{
		iLocal_91[13] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[13] = -1;
	}
	if (is_weapon_valid(joaat("weapon_heavyshotgun")))
	{
		iLocal_91[15] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[15] = -1;
	}
	if (is_weapon_valid(joaat("weapon_marksmanrifle")))
	{
		iLocal_91[16] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[16] = -1;
	}
	if (func_92())
	{
		if (is_weapon_valid(joaat("weapon_hatchet")))
		{
			iLocal_91[22] = iLocal_90 / 9 + iLocal_89;
			iLocal_90++;
		}
		else
		{
			iLocal_91[22] = -1;
		}
	}
	if (is_weapon_valid(joaat("weapon_hominglauncher")))
	{
		iLocal_91[18] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[18] = -1;
	}
	if (is_weapon_valid(joaat("weapon_proxmine")))
	{
		iLocal_91[17] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[17] = -1;
	}
	if (is_weapon_valid(joaat("weapon_flaregun")))
	{
		iLocal_91[12] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[12] = -1;
	}
	if (is_weapon_valid(joaat("weapon_combatpdw")))
	{
		iLocal_91[19] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[19] = -1;
	}
	if (is_weapon_valid(joaat("weapon_marksmanpistol")))
	{
		iLocal_91[20] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[20] = -1;
	}
	if (is_weapon_valid(joaat("weapon_knuckle")))
	{
		iLocal_91[21] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[21] = -1;
	}
	if (is_weapon_valid(joaat("weapon_machete")))
	{
		iLocal_91[23] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[23] = -1;
	}
	if (is_weapon_valid(joaat("weapon_machinepistol")))
	{
		iLocal_91[24] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[24] = -1;
	}
	if (Global_262145.f_9522 && is_weapon_valid(joaat("weapon_flashlight")))
	{
		iLocal_91[25] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[25] = -1;
	}
	if (is_weapon_valid(joaat("weapon_revolver")))
	{
		iLocal_91[26] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[26] = -1;
	}
	if (is_weapon_valid(joaat("weapon_switchblade")))
	{
		iLocal_91[27] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[27] = -1;
	}
	if (is_weapon_valid(joaat("weapon_dbshotgun")))
	{
		iLocal_91[28] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[28] = -1;
	}
	if (is_weapon_valid(joaat("weapon_compactrifle")))
	{
		iLocal_91[29] = iLocal_90 / 9 + iLocal_89;
		iLocal_90++;
	}
	else
	{
		iLocal_91[29] = -1;
	}
	if (iLocal_90 == 0)
	{
		iLocal_89 = 2;
		iLocal_90 = 9;
	}
	else
	{
		iLocal_89 += iLocal_90 / 9;
		iLocal_90 -= 9 * iLocal_90 / 9;
		if (iLocal_90 == 0)
		{
			iLocal_89--;
			iLocal_90 = 9;
		}
	}
}

void func_130(int iParam0, auto uParam1)
{
	*uParam1.f_277 = iParam0;
}

void func_131()
{
	func_129();
	func_132();
	func_126(0, 1, iLocal_89 + 1, "HUD_PAGE", 0);
}

void func_132()
{
	func_133(1);
}

void func_133(int iParam0)
{
	if (iParam0)
	{
		func_134(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_134(0, 2, 0, 2, 1, 0);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_135(auto uParam0)
{
	*uParam0.f_284 = 1;
}

void func_136(auto uParam0)
{
	*uParam0.f_283 = 1;
}

void func_137(auto uParam0)
{
	func_138(uParam0);
	*uParam0.f_281 = 1;
}

void func_138(auto uParam0)
{
	*uParam0 = {Global_1336808};
}

auto func_139()
{
	return Global_25120;
}

