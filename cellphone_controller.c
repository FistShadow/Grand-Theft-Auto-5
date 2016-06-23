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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int[] iLocal_41 = new int[4];
	int[] iLocal_46 = new int[4];
	int[] iLocal_51 = new int[4];
	int[] iLocal_56 = new int[4];
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	float fLocal_81 = 0;
	float fLocal_82 = 0;
	float fLocal_83 = 0;
	float fLocal_84 = 0;
	float fLocal_85 = 0;
	float fLocal_86 = 0;
	float fLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
#endregion

void main()
{
	struct<57> Var0;
	int iVar314;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_84 = 0.95f;
	fLocal_85 = 0.07f;
	fLocal_86 = 0.755f;
	iLocal_95 = 9999;
	network_set_script_is_safe_for_network_game();
	Global_101096 = get_game_timer();
	func_115();
	func_114();
	func_112();
	Global_14413.f_1 = 3;
	Global_14401 = 0;
	Global_14573 = 0;
	Global_16747 = 0;
	while (true)
	{
		wait(0);
		if (Global_14413.f_1 > 3)
		{
			disable_control_action(0, 337, 1);
		}
		if (iLocal_93 == 0)
		{
			if (network_is_game_in_progress())
			{
				iLocal_93 = 1;
				iLocal_95 = func_109(3855, -1, 0);
			}
		}
		else if (network_is_game_in_progress())
		{
			if (iLocal_93 == 1)
			{
				switch (_get_ui_language_id())
				{
					case -1:
						unk_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 0:
						unk_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 1:
						unk_0x07DBD622D9533857("gta5mkt_fr");
						break;
					
					case 2:
						unk_0x07DBD622D9533857("gta5mkt_ge");
						break;
					
					case 3:
						unk_0x07DBD622D9533857("gta5mkt_it");
						break;
					
					case 4:
						unk_0x07DBD622D9533857("gta5mkt_sp");
						break;
					
					case 5:
						unk_0x07DBD622D9533857("gta5mkt_pt");
						break;
					
					case 6:
						unk_0x07DBD622D9533857("gta5mkt_pl");
						break;
					
					case 7:
						unk_0x07DBD622D9533857("gta5mkt_ru");
						break;
					
					case 8:
						unk_0x07DBD622D9533857("gta5mkt_ko");
						break;
					
					case 9:
						unk_0x07DBD622D9533857("gta5mkt_ch");
						break;
					
					case 10:
						unk_0x07DBD622D9533857("gta5mkt_ja");
						break;
					
					case 11:
						unk_0x07DBD622D9533857("gta5mkt_me");
						break;
				}
				_0x040ADDCBAFA1018A(0, 1);
				iLocal_93 = 2;
			}
			if (iLocal_93 == 2)
			{
				iLocal_94 = _0x16DA8172459434AA();
				switch (iLocal_94)
				{
					case 3:
						break;
					
					case 0:
						if (unk_0x7DB18CA8CAD5B098() > 0)
						{
							Var0.f_23 = 2;
							Var0.f_56 = 16;
							_0x4737980E8A283806(0, &Var0);
							if (Var0.f_1 != iLocal_95)
							{
								Global_2562131 = 1;
							}
							else
							{
								Global_2562131 = 0;
							}
						}
						iLocal_93 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_2562131 = 0;
						iLocal_93 = 3;
						break;
					}
			}
		}
		else
		{
			Global_2562131 = 0;
			iLocal_93 = 0;
		}
		if (is_pc_version())
		{
			if (is_stunt_jump_in_progress())
			{
				if (Global_14413.f_1 == 6)
				{
					Global_14413.f_1 = 3;
				}
			}
		}
		if (func_108(146))
		{
			if (Global_69489 == 0)
			{
				iVar314 = func_76(0, 0, 119);
				if (iVar314 != 0)
				{
					func_74(iVar314);
				}
				else
				{
					func_73();
				}
				func_71(0);
			}
		}
		if (Global_2460486.f_4404 == 1)
		{
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 3;
			}
		}
		if (Global_69489 == 1)
		{
			if (Global_14413.f_1 == 3)
			{
				if (is_bit_set(Global_2563397, 15))
				{
					set_bit(&Global_2563397, 14);
					wait(0);
					while (!func_69(3, 0, 1, 0))
					{
						wait(0);
					}
					clear_bit(&Global_2563397, 14);
					clear_bit(&Global_2563397, 15);
				}
				if (is_bit_set(Global_2563397, 16))
				{
					set_bit(&Global_2563397, 14);
					wait(0);
					while (!func_69(17, 0, 1, 0))
					{
						wait(0);
					}
					clear_bit(&Global_2563397, 14);
					clear_bit(&Global_2563397, 16);
				}
			}
		}
		if (Global_69489 == 0)
		{
			if (is_bit_set(Global_2563397, 11))
			{
				if ((Global_14413.f_1 != 10 && Global_14413.f_1 != 9) || func_68() == 0)
				{
					clear_bit(&Global_2563397, 11);
					set_bit(&Global_2284, 11);
				}
			}
			else if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
			{
				if (func_68())
				{
					set_bit(&Global_2563397, 11);
					set_bit(&Global_2284, 11);
				}
			}
			if (is_bit_set(Global_2563397, 12))
			{
				clear_bit(&Global_2563397, 12);
				set_bit(&Global_2284, 11);
			}
		}
		else if (is_bit_set(Global_2563397, 12))
		{
			if ((Global_16775 == 0 || Global_16776 == 0) && !Global_16777)
			{
				clear_bit(&Global_2563397, 12);
				set_bit(&Global_2284, 11);
			}
		}
		else if (Global_16777 || (Global_16775 > 0 && Global_16776 == 1))
		{
			set_bit(&Global_2563397, 12);
			set_bit(&Global_2284, 11);
		}
		if (is_pc_version())
		{
			if (_0xC0D2AF00BCC234CA())
			{
				if (!is_bit_set(Global_2563397, 19))
				{
					set_bit(&Global_2563397, 19);
					set_bit(&Global_2284, 11);
				}
			}
			else if (is_bit_set(Global_2563397, 19))
			{
				clear_bit(&Global_2563397, 19);
				set_bit(&Global_2284, 11);
			}
		}
		if (iLocal_91 == 0)
		{
			if (is_bit_set(Global_2283, 25))
			{
				stat_get_int(joaat("sp_cellphone_sleep_time"), &iLocal_90, -1);
				iLocal_88 = get_game_timer();
				iLocal_91 = 1;
			}
		}
		else if (!is_bit_set(Global_2283, 25))
		{
			stat_get_int(joaat("sp_cellphone_sleep_time"), &iLocal_90, -1);
			iLocal_89 = get_game_timer();
			iLocal_91 = 0;
			stat_set_int(joaat("sp_cellphone_sleep_time"), iLocal_90 + iLocal_89 - iLocal_88, 1);
		}
		func_67();
		func_66();
		func_65();
		func_63();
		func_52();
		func_51();
		func_50();
		if (is_bit_set(Global_2284, 21))
		{
			if (!_0xC8B1B2425604CDD0())
			{
				clear_bit(&Global_2284, 21);
			}
		}
		if (is_bit_set(Global_2283, 7))
		{
			func_46();
			clear_bit(&Global_2283, 7);
		}
		if (is_bit_set(Global_2283, false))
		{
			func_45();
		}
		if (is_bit_set(Global_2563397, false))
		{
			func_44();
		}
		if (is_bit_set(Global_2284, 11))
		{
			Global_2987 = 0;
			if (is_bit_set(Global_2283, 25))
			{
				Global_2987++;
			}
			if (is_bit_set(Global_2563397, 11))
			{
				if (Global_69489 == 0)
				{
					Global_2987++;
				}
			}
			if (is_bit_set(Global_2563397, 12))
			{
				if (Global_69489 && (Global_16776 || Global_16777))
				{
					Global_2987++;
				}
			}
			if (is_bit_set(Global_2563397, 19))
			{
				Global_2987++;
			}
			if (Global_2987 == 0)
			{
				clear_bit(&Global_2284, 11);
				iLocal_39 = 0;
			}
			else
			{
				iLocal_39 = 1;
			}
		}
		if (!func_43())
		{
			if (!is_warning_message_active())
			{
				if (Global_14413.f_1 == 3)
				{
					if (is_player_playing(player_id()))
					{
						if (is_player_control_on(player_id()) || _0x5EDEF0CF8C1DAB3C())
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (Global_69489)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_14413.f_1 == 4)
			{
				if (is_bit_set(Global_2284, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_16747)
		{
			case 0:
				func_13();
				if (Global_16749 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_16749 == 1)
				{
					func_12();
				}
				if (Global_16750 == 1)
				{
					Global_16747 = 9;
					Global_16750 = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_68 = _0x40AFB081F8ADD4EE(Global_16751);
	switch (iLocal_68)
	{
		case 0:
			Global_16747 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			set_bit(&Global_2284, 15);
			func_12();
			break;
	}
}

void func_2()
{
	if (_0xEC72C258667BE5EA(Global_16751))
	{
		Global_16747 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()
{
	if (network_is_game_in_progress())
	{
		iLocal_66 = get_time_difference(get_network_time(), iLocal_64);
	}
	else
	{
		iLocal_65 = get_game_timer();
		iLocal_66 = iLocal_65 - iLocal_63;
	}
	if (iLocal_66 > 3000)
	{
		_0x10D373323E5B9C0D();
	}
	if (iLocal_66 > 3200)
	{
		Global_16747 = 6;
	}
}

void func_4()
{
	iLocal_68 = _0x0C0C4E81E1AC60A0();
	switch (iLocal_68)
	{
		case 0:
			if (network_is_game_in_progress())
			{
				iLocal_64 = get_network_time();
			}
			else
			{
				iLocal_63 = get_game_timer();
			}
			Global_16747 = 11;
			settimerb(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()
{
	Global_16752 = -1;
	if (_0x3DEC726C25A11BAC(Global_16752))
	{
		Global_16747 = 10;
		_0xABA17D7CE615ADBF("CELL_278");
		_0xBD12F8228410D9B4(1);
	}
	else
	{
		func_12();
	}
}

void func_6()
{
	iLocal_68 = _0xF5BED327CEA362B1(1);
	switch (iLocal_68)
	{
		case 0:
			Global_16747 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()
{
	iLocal_68 = _0xCB82A0BF0E3E3265(iLocal_69);
	switch (iLocal_68)
	{
		case 0:
			_0x1072F115DAB0717E(1, 1);
			Global_16747 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_69 == 3)
			{
				set_bit(&Global_2284, 14);
				_0x1072F115DAB0717E(0, 0);
				_0xD801CC02177FA3F1();
				_0x6A12D88881435DCA();
				Global_16747 = 6;
			}
			if (Global_16747 == 5)
			{
				if (iLocal_69 == 0)
				{
					Global_16747 = 4;
					iLocal_69 = 1;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			if (Global_16747 == 5)
			{
				if (iLocal_69 == 1)
				{
					Global_16747 = 4;
					iLocal_69 = 2;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			if (Global_16747 == 5)
			{
				if (iLocal_69 == 2)
				{
					Global_16747 = 4;
					iLocal_69 = 3;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			break;
	}
}

void func_8()
{
	if (_0x759650634F07B6B4(iLocal_69))
	{
		Global_16747 = 5;
	}
	else
	{
		set_bit(&Global_2284, 15);
		func_12();
	}
}

void func_9()
{
	iLocal_68 = _0x0D6CA79EEEBD8CA3();
	switch (iLocal_68)
	{
		case 0:
			Global_16747 = 4;
			iLocal_69 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14413.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()
{
	if (_0xA67C35C56EB1BD9D())
	{
		Global_16747 = 3;
	}
}

void func_11()
{
	if (timerb() > 0)
	{
		Global_16747 = 2;
	}
}

void func_12()
{
	_0x1072F115DAB0717E(0, 0);
	_0xD801CC02177FA3F1();
	_0x6A12D88881435DCA();
	_0x10D373323E5B9C0D();
	Global_16748 = 0;
	Global_16749 = 0;
	Global_16750 = 0;
	Global_16747 = 0;
}

void func_13()
{
	if (Global_16748)
	{
		Global_16747 = 1;
		clear_bit(&Global_2284, 14);
		settimerb(0);
	}
}

bool func_14()
{
	char* sVar0;
	
	if ((func_20(2, Global_14380, 0) && !is_hud_component_active(19)) && !is_stunt_jump_in_progress())
	{
		if (is_pc_version())
		{
			if (decor_exist_on(player_ped_id(), "Synched"))
			{
				sVar0 = _get_label_text("CELL_ANTIH_A");
				_set_notification_text_entry("CELL_ANTIH");
				_set_notification_message("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_19(player_ped_id()) || is_ped_aiming_from_cover(player_ped_id()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					return false;
				}
			}
		}
		Global_16771 = 0;
		Global_16772 = 0;
		if (_get_current_notification() == Global_16769 && _get_current_notification() != -1)
		{
			Global_16771 = Global_16770;
			iLocal_72 = get_game_timer();
			iLocal_74 = 0;
			iLocal_75 = 0;
			while (((func_18(2, Global_14380) && iLocal_74 < 250) && Global_14579 == 0) && !is_hud_component_active(19))
			{
				if (Global_2987 > 0)
				{
					func_15();
				}
				wait(0);
				iLocal_73 = get_game_timer();
				iLocal_74 = iLocal_73 - iLocal_72;
				if (Global_2987 > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_14380) && Global_14579 == 0) && !is_hud_component_active(19))
			{
				iLocal_75 = 1;
			}
			if (Global_14579 == 0)
			{
				if (iLocal_75 == 1)
				{
					Global_16772 = 1;
					Global_16771 = Global_16770;
					if (Global_16771 == 1)
					{
					}
					if (Global_16771 == 2)
					{
					}
					if (Global_16771 == 3)
					{
					}
					if (Global_16771 == 0)
					{
					}
					if (Global_16771 == 4)
					{
					}
				}
				else
				{
					Global_16771 = 0;
				}
			}
			else
			{
				Global_16771 = 0;
			}
		}
		else
		{
			Global_16771 = 0;
		}
		if (!is_hud_component_active(19))
		{
			return true;
		}
		else
		{
			Global_16771 = 0;
			Global_16772 = 0;
			return false;
		}
	}
	return false;
}

void func_15()
{
	if (Global_16777)
	{
		fLocal_85 = -0.055f;
		fLocal_86 = 0.745f;
		fLocal_81 = get_safe_zone_size();
		fLocal_87 = 100f * fLocal_84 - 100f * fLocal_81;
		fLocal_82 = fLocal_85 + fLocal_87 * 0.005f;
		fLocal_83 = fLocal_86 - fLocal_87 * 0.005f;
		if (!func_17())
		{
			_0xC6372ECD45D73BCD(1);
			_set_2d_layer(7);
			if (is_pc_version())
			{
				_0xEFABC7722293DA7C();
			}
			draw_scaleform_movie(iLocal_37, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			_0xC6372ECD45D73BCD(0);
			_set_2d_layer(4);
		}
	}
	else
	{
		if (is_pc_version())
		{
			if (Global_2412879.f_871)
			{
				iLocal_38 = false;
			}
			else if (is_bit_set(Global_2283, 13))
			{
				if (is_bit_set(Global_2563397, 19))
				{
					iLocal_38 = false;
				}
				else
				{
					iLocal_38 = true;
				}
			}
			else
			{
				iLocal_38 = false;
			}
		}
		else if (Global_2412879.f_871 || is_bit_set(Global_2283, 13))
		{
			iLocal_38 = true;
		}
		else
		{
			iLocal_38 = false;
		}
		if (_is_radar_enabled())
		{
			if (!is_radar_hidden())
			{
				if (!iLocal_38)
				{
					if (!func_43())
					{
						if (!func_16())
						{
							if (is_player_playing(player_id()))
							{
								if (!is_player_being_arrested(player_id(), 1))
								{
									_set_2d_layer(4);
									if (is_pc_version() && Global_2412879.f_871)
									{
										fLocal_85 = 0.165f;
										fLocal_86 = 0.755f;
									}
									else
									{
										fLocal_85 = 0.07f;
										fLocal_86 = 0.755f;
									}
									fLocal_81 = get_safe_zone_size();
									fLocal_87 = 100f * fLocal_84 - 100f * fLocal_81;
									fLocal_82 = fLocal_85 + fLocal_87 * 0.005f;
									fLocal_83 = fLocal_86 - fLocal_87 * 0.005f;
									if (!func_17())
									{
										if (is_pc_version())
										{
											_0xEFABC7722293DA7C();
										}
										draw_scaleform_movie(iLocal_37, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, 255, 0);
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

bool func_16()
{
	if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) > 0)
	{
		return true;
	}
	return false;
}

bool func_17()
{
	if (is_bit_set(Global_2285, 3))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0, int iParam1)
{
	if (is_control_pressed(iParam0, iParam1))
	{
		if (is_pc_version())
		{
			if (update_onscreen_keyboard() == 0)
			{
				return false;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_19(int iParam0)
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

bool func_20(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (is_pc_version())
		{
			if (update_onscreen_keyboard() == 0 || (_network_is_text_chat_active() && _is_input_disabled(2)))
			{
				return false;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_21()
{
	switch (Global_14413.f_1)
	{
		case 4:
			if (is_bit_set(Global_2284, 21))
			{
			}
			else
			{
				if (is_thread_active(Global_14410))
				{
				}
				else
				{
					if (!is_thread_active(Global_14410))
					{
						if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
						{
							request_script("cellphone_flashhand");
							while (!has_script_loaded("cellphone_flashhand"))
							{
								wait(0);
								if (Global_2987 > 0)
								{
									func_15();
								}
							}
							if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
							{
								Global_14410 = start_new_script("cellphone_flashhand", 1424);
							}
							set_script_as_no_longer_needed("cellphone_flashhand");
						}
					}
					func_30(0);
				}
				if (Global_15722 || Global_15723)
				{
					if (!is_thread_active(Global_14410))
					{
						if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
						{
							request_script("cellphone_flashhand");
							while (!has_script_loaded("cellphone_flashhand"))
							{
								wait(0);
								if (Global_2987 > 0)
								{
									func_15();
								}
							}
							if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
							{
								Global_14410 = start_new_script("cellphone_flashhand", 1424);
							}
							set_script_as_no_longer_needed("cellphone_flashhand");
						}
					}
					while (!has_scaleform_movie_loaded(Global_14394) && Global_14396 == 0)
					{
						wait(0);
						if (Global_2987 > 0)
						{
							func_15();
						}
					}
					if (Global_14396 == 0)
					{
						Global_14413.f_1 = 9;
						func_22();
					}
				}
				else
				{
					iLocal_80 = false;
					if (Global_69489 && (Global_16774 || Global_1609099.f_4))
					{
						iLocal_80 = true;
					}
					if (((Global_101154.f_12741[Global_14413 /*20*/].f_18 == 1 || Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1) || iLocal_80 == 1) || Global_16771 != 0)
					{
						while (!has_scaleform_movie_loaded(Global_14394) && Global_14396 == 0)
						{
							wait(0);
							if (Global_2987 > 0)
							{
								func_15();
							}
						}
						if (Global_14396 == 0)
						{
							if (Global_14413.f_1 > 3)
							{
								Global_14413.f_1 = 6;
								if (Global_16771 == 0)
								{
									if (iLocal_80)
									{
									}
									else if (Global_69489 == 0)
									{
										if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
										{
											func_69(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16771 == 3)
									{
									}
									if (Global_16771 == 1)
									{
									}
									if (Global_16771 == 2)
									{
									}
									if (Global_16771 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!has_scaleform_movie_loaded(Global_14394) && Global_14396 == 0)
						{
							wait(0);
							if (Global_2987 > 0)
							{
								func_15();
							}
						}
						if (Global_14396 == 0)
						{
							if (Global_14413.f_1 > 3)
							{
								if (Global_15722 || Global_15723)
								{
									Global_14413.f_1 = 9;
								}
								else
								{
									Global_14413.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_22()
{
	struct<6> Var0;
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_14394))
	{
		wait(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_29(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_2888);
			if (Global_2888 == 1)
			{
				func_29(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_29(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_26(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_26(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_26(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_26(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_29(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_26(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_25();
				func_29(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_24("CELL_300");
					func_24("CELL_217");
					func_24("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_26(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_26(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_29(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_29(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_25();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_24("CELL_300");
					func_24("CELL_219");
					func_24("CELL_219");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_29(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_29(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_29(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_23()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (is_bit_set(Global_2283, 20))
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_26(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
		}
		else
		{
			func_26(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_25()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2563609)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_26(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_24(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_24(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_24(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_24(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_24(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_27(int iParam0)
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
		if (func_28(14))
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
								if (is_bit_set(Global_2284, 3))
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
								func_24(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_24(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
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
								func_24(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
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
								func_24(&(Global_2290[iVar1 /*15*/]));
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
								func_24(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_24(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_26(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

int func_28(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_29(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_30(int iParam0)
{
	if (iParam0)
	{
		if (Global_14413.f_1 == 9)
		{
			Global_14571 = 1;
		}
	}
	else
	{
		Global_14571 = 0;
	}
}

void func_31()
{
	if (func_14() || is_bit_set(Global_2283, 8))
	{
		clear_bit(&Global_2283, 8);
		func_37();
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (!is_ped_swimming_under_water(player_ped_id()))
			{
				if (func_36())
				{
				}
				else if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					if (is_bit_set(Global_2284, 21))
					{
						clear_bit(&Global_2284, 21);
					}
					if (Global_14579 == 1)
					{
						Global_14579 = 0;
					}
					switch (Global_14413.f_1)
					{
						case 3:
							Global_14413.f_1 = 4;
							if (iLocal_92 == 0)
							{
								func_32();
								iLocal_92 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_14569 = 1;
				}
			}
		}
	}
}

void func_32()
{
	if (Global_2562131 == 1)
	{
		if (!func_35())
		{
			return;
		}
		if (func_33(player_id()))
		{
			if (get_profile_setting(803) == 1)
			{
				_set_notification_text_entry("CELL_EMAIL_EVENT");
				_draw_notification(1, 1);
			}
			else if (get_profile_setting(803) != 1)
			{
			}
		}
	}
}

bool func_33(int iParam0)
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
			Var1 = {func_34(iParam0)};
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

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_35()
{
	if (is_ps3_version() && _0x9614B71F8ADB982B() == 3)
	{
		return true;
	}
	if (is_xbox360_version() && _0x9614B71F8ADB982B() == 3)
	{
		return true;
	}
	if (is_orbis_version() && _0x1353F87E89946207() == 0)
	{
		return true;
	}
	if (is_durango_version() && _0x1353F87E89946207() == 0)
	{
		return true;
	}
	if (is_pc_version() && network_have_online_privileges())
	{
		return true;
	}
	return false;
}

bool func_36()
{
	if (is_player_playing(player_id()))
	{
		if ((((get_ped_config_flag(player_ped_id(), 78, 1) || is_ped_ragdoll(player_ped_id())) || is_ped_being_stunned(player_ped_id(), 0)) || is_ped_in_parachute_free_fall(player_ped_id())) || get_ped_parachute_state(player_ped_id()) == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_37()
{
	if (func_28(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_38();
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

var func_38()
{
	func_39();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_39()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_42(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_41(player_ped_id());
			if (func_40(iVar0) && (!func_28(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_40(Global_101154.f_1826.f_539.f_3549))
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

int func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_43()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
	char[64] cVar0;
	int iVar16;
	char[64] cVar17;
	char[64] cVar33;
	struct<16> Var49;
	char[64] cVar65;
	
	clear_bit(&Global_2563397, false);
	if (Global_16773 != 0)
	{
		if (is_pedheadshot_valid(Global_16773))
		{
			if (is_pedheadshot_ready(Global_16773))
			{
				StringCopy(&cVar0, get_pedheadshot_txd_string(Global_16773), 64);
				Global_16781[Global_16779] = Global_16773;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16781[Global_2563381] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16781[Global_2563381] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2562132[Global_2563381 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16781[Global_2563381] = 0;
	}
	if (is_string_null_or_empty(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (are_strings_equal(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_2562132[Global_2563381 /*104*/].f_32 == 4 || Global_2562132[Global_2563381 /*104*/].f_32 == 5) || Global_2562132[Global_2563381 /*104*/].f_32 == 6) || Global_2562132[Global_2563381 /*104*/].f_32 == 7) || Global_2562132[Global_2563381 /*104*/].f_32 == 8) || Global_2562132[Global_2563381 /*104*/].f_32 == 9) || Global_2562132[Global_2563381 /*104*/].f_32 == 10) || Global_2562132[Global_2563381 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_2562132[Global_2563381 /*104*/].f_49)
		{
			case 1:
				_set_notification_text_entry("CELL_CL01");
				break;
			
			case 2:
				_set_notification_text_entry("CELL_CL02");
				break;
			
			case 3:
				_set_notification_text_entry("CELL_CL03");
				break;
			
			case 4:
				_set_notification_text_entry("CELL_CL04");
				break;
			
			case 5:
				_set_notification_text_entry("CELL_CL05");
				break;
			
			case 6:
				_set_notification_text_entry("CELL_CL06");
				break;
			
			case 7:
				_set_notification_text_entry("CELL_CL07");
				break;
			
			case 8:
				_set_notification_text_entry("CELL_CL08");
				break;
			
			case 9:
				_set_notification_text_entry("CELL_CL09");
				break;
		}
		_add_text_component_item_string(&(Global_2562132[Global_2563381 /*104*/]));
		while (iVar16 < Global_2562132[Global_2563381 /*104*/].f_49)
		{
			switch (Global_2562132[Global_2563381 /*104*/].f_32)
			{
				case 4:
					_add_text_component_item_string(&(Global_2460486.f_1569[iVar16 /*4*/]));
					break;
				
				case 5:
					_add_text_component_item_string(&(Global_1715404[iVar16 /*4*/]));
					break;
				
				case 6:
					_add_text_component_item_string(&(Global_1715445[iVar16 /*4*/]));
					break;
				
				case 7:
					_add_text_component_item_string(&(Global_1715466[iVar16 /*4*/]));
					break;
				
				case 8:
					_add_text_component_item_string(&(Global_1715483[iVar16 /*4*/]));
					break;
				
				case 9:
					_add_text_component_item_string(&(Global_1715496[iVar16 /*4*/]));
					break;
				
				case 10:
					_add_text_component_item_string(&(Global_1715509[iVar16 /*4*/]));
					break;
				
				case 11:
					_add_text_component_item_string(&(Global_1715522[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, _get_label_text(&(Global_101154.f_32575[Global_2562132[Global_2563381 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		set_bit(&Global_2563397, true);
		Global_16770 = 1;
		Global_16769 = uLocal_62;
		Global_16773 = 0;
	}
	else
	{
		_set_notification_text_entry(&(Global_2562132[Global_2563381 /*104*/]));
		switch (Global_2562132[Global_2563381 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_33));
				if (Global_2562132[Global_2563381 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_67), "NULL"))
				{
					add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_67));
				}
				if ((Global_2562132[Global_2563381 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_83), "NULL"))
				{
					if (does_text_label_exist(&(Global_2562132[Global_2563381 /*104*/].f_67)))
					{
						_add_text_component_item_string(&(Global_2562132[Global_2563381 /*104*/].f_67));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_67));
					}
					if (does_text_label_exist(&(Global_2562132[Global_2563381 /*104*/].f_83)))
					{
						_add_text_component_item_string(&(Global_2562132[Global_2563381 /*104*/].f_83));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				add_text_component_integer(Global_2562132[Global_2563381 /*104*/].f_49);
				break;
			
			case 3:
				add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_33));
				add_text_component_integer(Global_2562132[Global_2563381 /*104*/].f_49);
				if (Global_2562132[Global_2563381 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_67), "NULL"))
				{
					add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_67));
				}
				if ((Global_2562132[Global_2563381 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_2562132[Global_2563381 /*104*/].f_83), "NULL"))
				{
					if (does_text_label_exist(&(Global_2562132[Global_2563381 /*104*/].f_67)))
					{
						_add_text_component_item_string(&(Global_2562132[Global_2563381 /*104*/].f_67));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_67));
					}
					if (does_text_label_exist(&(Global_2562132[Global_2563381 /*104*/].f_83)))
					{
						_add_text_component_item_string(&(Global_2562132[Global_2563381 /*104*/].f_83));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_2562132[Global_2563381 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_2562132[Global_2563381 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2971, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			set_bit(&Global_2563397, true);
			Global_16770 = 1;
			Global_16769 = uLocal_62;
		}
		else
		{
			StringCopy(&Var49, _get_label_text(&(Global_101154.f_32575[Global_2562132[Global_2563381 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_2562132[Global_2563381 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &Var49, 64);
				uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 2, &Var49, 0);
			}
			set_bit(&Global_2563397, true);
			Global_16770 = 1;
			Global_16769 = uLocal_62;
			Global_16773 = 0;
		}
	}
	Global_2562132[Global_2563381 /*104*/].f_16 = uLocal_62;
}

void func_45()
{
	char[64] cVar0;
	char[64] cVar16;
	char* sVar32;
	
	StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		_set_notification_text_entry("");
		StringCopy(&cVar16, _get_label_text(&(Global_2893[1 /*6*/])), 64);
		sVar32 = _get_label_text("CELL_253");
		_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		_set_notification_text_entry("CELL_255");
		_add_text_component_item_string(&(Global_2893[1 /*6*/]));
		_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	clear_bit(&Global_2283, false);
}

void func_46()
{
	if (is_bit_set(Global_2283, true))
	{
		func_49();
		func_47();
		Global_101154.f_12741[Global_14413 /*20*/].f_18 = 1;
		if (network_is_game_in_progress())
		{
			iLocal_51[Global_14413] = get_network_time();
			iLocal_41[Global_14413] = 1;
		}
		else if (!is_bit_set(Global_2283, 10))
		{
			iLocal_46[Global_14413] = get_game_timer();
			iLocal_41[Global_14413] = 1;
		}
		else
		{
			iLocal_46[0] = get_game_timer();
			iLocal_46[2] = get_game_timer();
			iLocal_46[1] = get_game_timer();
			iLocal_41[0] = 1;
			iLocal_41[2] = 1;
			iLocal_41[1] = 1;
		}
		clear_bit(&Global_2283, true);
	}
}

void func_47()
{
	func_37();
	if (Global_69489)
	{
		Global_101154.f_12741[3 /*20*/].f_10 = func_109(1190, -1, 0);
	}
	if (Global_101154.f_12741[Global_14413 /*20*/].f_10 == 1)
	{
		if (!func_48(0))
		{
			set_pad_shake(0, 2000, 100);
		}
	}
}

bool func_48(int iParam0)
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

void func_49()
{
	char[64] cVar0;
	int iVar16;
	char[64] cVar17;
	char[64] cVar33;
	struct<16> Var49;
	char[64] cVar65;
	
	if (Global_16773 != 0)
	{
		if (is_pedheadshot_valid(Global_16773))
		{
			if (is_pedheadshot_ready(Global_16773))
			{
				StringCopy(&cVar0, get_pedheadshot_txd_string(Global_16773), 64);
				Global_16781[Global_16779] = Global_16773;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16781[Global_16779] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16781[Global_16779] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_101154.f_12831[Global_16779 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16781[Global_16779] = 0;
	}
	if (is_string_null_or_empty(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (are_strings_equal(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_101154.f_12831[Global_16779 /*104*/].f_32 == 4 || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 5) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 6) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 7) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 8) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 9) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 10) || Global_101154.f_12831[Global_16779 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_101154.f_12831[Global_16779 /*104*/].f_49)
		{
			case 1:
				_set_notification_text_entry("CELL_CL01");
				break;
			
			case 2:
				_set_notification_text_entry("CELL_CL02");
				break;
			
			case 3:
				_set_notification_text_entry("CELL_CL03");
				break;
			
			case 4:
				_set_notification_text_entry("CELL_CL04");
				break;
			
			case 5:
				_set_notification_text_entry("CELL_CL05");
				break;
			
			case 6:
				_set_notification_text_entry("CELL_CL06");
				break;
			
			case 7:
				_set_notification_text_entry("CELL_CL07");
				break;
			
			case 8:
				_set_notification_text_entry("CELL_CL08");
				break;
			
			case 9:
				_set_notification_text_entry("CELL_CL09");
				break;
		}
		_add_text_component_item_string(&(Global_101154.f_12831[Global_16779 /*104*/]));
		while (iVar16 < Global_101154.f_12831[Global_16779 /*104*/].f_49)
		{
			switch (Global_101154.f_12831[Global_16779 /*104*/].f_32)
			{
				case 4:
					_add_text_component_item_string(&(Global_2460486.f_1569[iVar16 /*4*/]));
					break;
				
				case 5:
					_add_text_component_item_string(&(Global_1715404[iVar16 /*4*/]));
					break;
				
				case 6:
					_add_text_component_item_string(&(Global_1715445[iVar16 /*4*/]));
					break;
				
				case 7:
					_add_text_component_item_string(&(Global_1715466[iVar16 /*4*/]));
					break;
				
				case 8:
					_add_text_component_item_string(&(Global_1715483[iVar16 /*4*/]));
					break;
				
				case 9:
					_add_text_component_item_string(&(Global_1715496[iVar16 /*4*/]));
					break;
				
				case 10:
					_add_text_component_item_string(&(Global_1715509[iVar16 /*4*/]));
					break;
				
				case 11:
					_add_text_component_item_string(&(Global_1715522[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, _get_label_text(&(Global_101154.f_32575[Global_101154.f_12831[Global_16779 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16770 = 3;
		Global_16769 = uLocal_62;
		Global_16773 = 0;
	}
	else
	{
		_set_notification_text_entry(&(Global_101154.f_12831[Global_16779 /*104*/]));
		switch (Global_101154.f_12831[Global_16779 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_33));
				if (Global_101154.f_12831[Global_16779 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), "NULL"))
				{
					add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
				}
				if ((Global_101154.f_12831[Global_16779 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), "NULL"))
				{
					if (does_text_label_exist(&(Global_101154.f_12831[Global_16779 /*104*/].f_67)))
					{
						_add_text_component_item_string(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
					}
					if (does_text_label_exist(&(Global_101154.f_12831[Global_16779 /*104*/].f_83)))
					{
						_add_text_component_item_string(&(Global_101154.f_12831[Global_16779 /*104*/].f_83));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				add_text_component_integer(Global_101154.f_12831[Global_16779 /*104*/].f_49);
				break;
			
			case 3:
				add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_33));
				add_text_component_integer(Global_101154.f_12831[Global_16779 /*104*/].f_49);
				if (Global_101154.f_12831[Global_16779 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), "NULL"))
				{
					add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
				}
				if ((Global_101154.f_12831[Global_16779 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), "NULL"))
				{
					if (does_text_label_exist(&(Global_101154.f_12831[Global_16779 /*104*/].f_67)))
					{
						_add_text_component_item_string(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_67));
					}
					if (does_text_label_exist(&(Global_101154.f_12831[Global_16779 /*104*/].f_83)))
					{
						_add_text_component_item_string(&(Global_101154.f_12831[Global_16779 /*104*/].f_83));
					}
					else
					{
						add_text_component_substring_player_name(&(Global_101154.f_12831[Global_16779 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_101154.f_12831[Global_16779 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2971, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16770 = 3;
			Global_16769 = uLocal_62;
		}
		else
		{
			StringCopy(&Var49, _get_label_text(&(Global_101154.f_32575[Global_101154.f_12831[Global_16779 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_101154.f_12831[Global_16779 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &Var49, 64);
				uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_62 = _set_notification_message(&cVar0, &cVar0, 0, 1, &Var49, 0);
			}
			Global_16770 = 3;
			Global_16769 = uLocal_62;
			Global_16773 = 0;
		}
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_16 = uLocal_62;
}

void func_50()
{
	if (is_bit_set(Global_2283, 19))
	{
		clear_bit(&Global_2283, 19);
		func_37();
		Global_101154.f_12741[3 /*20*/].f_18 = 0;
		Global_101154.f_12741[3 /*20*/].f_17 = 0;
	}
}

void func_51()
{
	if (iLocal_41[Global_14413] == 1)
	{
		if (network_is_game_in_progress())
		{
			iLocal_61 = get_time_difference(get_network_time(), iLocal_51[Global_14413]);
		}
		else
		{
			iLocal_56[Global_14413] = get_game_timer();
			iLocal_61 = iLocal_56[Global_14413] - iLocal_46[Global_14413];
		}
		if (iLocal_61 > 300000)
		{
			Global_101154.f_12741[Global_14413 /*20*/].f_18 = 0;
			Global_101154.f_12741[Global_14413 /*20*/].f_17 = 0;
			iLocal_41[Global_14413] = 0;
		}
	}
}

void func_52()
{
	int iVar0;
	
	func_37();
	if (Global_69489 == 0)
	{
		if (!func_43())
		{
			if (iLocal_67 == 0)
			{
				if ((Global_101154.f_12831[21 /*104*/].f_24 != 0 || Global_101154.f_12831[22 /*104*/].f_24 != 0) || Global_101154.f_12831[23 /*104*/].f_24 != 0)
				{
					switch (Global_14413)
					{
						case 0:
							if (Global_101154.f_12831[21 /*104*/].f_24 != 0)
							{
								iLocal_40 = 21;
								iLocal_67 = 1;
								settimera(0);
							}
							break;
						
						case 1:
							if (Global_101154.f_12831[22 /*104*/].f_24 != 0)
							{
								iLocal_40 = 22;
								iLocal_67 = 1;
								settimera(0);
							}
							break;
						
						case 2:
							if (Global_101154.f_12831[23 /*104*/].f_24 != 0)
							{
								iLocal_40 = 23;
								iLocal_67 = 1;
								settimera(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (timera() > 15000)
			{
				iLocal_67 = 0;
				iVar0 = 0;
				func_37();
				if (iLocal_40 == 21 && Global_14413 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_40 == 22 && Global_14413 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_40 == 23 && Global_14413 != 2)
				{
					iVar0 = 1;
				}
				if (Global_101154.f_12831[iLocal_40 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_28(14))
					{
						if (func_55(Global_101154.f_12831[iLocal_40 /*104*/].f_17, &(Global_101154.f_12831[iLocal_40 /*104*/]), Global_101154.f_12831[iLocal_40 /*104*/].f_24, Global_101154.f_12831[iLocal_40 /*104*/].f_25, Global_101154.f_12831[iLocal_40 /*104*/].f_26, Global_101154.f_12831[iLocal_40 /*104*/].f_29, 0, 1, Global_101154.f_12831[iLocal_40 /*104*/].f_31, Global_101154.f_12831[iLocal_40 /*104*/].f_30))
						{
							Global_101154.f_12831[iLocal_40 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (Global_2959[Global_14413])
				{
					iLocal_78 = 1;
					iLocal_79 = Global_14413;
					if (network_is_game_in_progress())
					{
						iLocal_76 = get_network_time();
					}
					else
					{
						iLocal_70 = get_game_timer();
					}
				}
			}
			else
			{
				if (network_is_game_in_progress())
				{
					iLocal_77 = get_time_difference(get_network_time(), iLocal_76);
				}
				else
				{
					iLocal_71 = get_game_timer();
					iLocal_77 = iLocal_71 - iLocal_70;
				}
				if (iLocal_77 > 7000)
				{
					if (func_53(0))
					{
						Global_2893[1 /*6*/] = {Global_2942[Global_14413 /*4*/]};
						Global_2969 = Global_2964[Global_14413];
						Global_2959[Global_14413] = 0;
						iLocal_78 = 0;
					}
				}
				if (iLocal_79 != Global_14413)
				{
					iLocal_78 = 0;
				}
			}
		}
	}
}

int func_53(int iParam0)
{
	return func_54(iParam0, Global_35711);
}

bool func_54(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

bool func_55(var uParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_56(uParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, iParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[uParam0 /*29*/].f_3};
			Global_2970 = uParam0;
			set_bit(&Global_2283, true);
			set_bit(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_56(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_37();
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
			if (is_ped_swimming_under_water(player_ped_id()))
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
	if (func_62() == 0)
	{
		func_60();
		return false;
	}
	func_59(Global_16779);
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
	if (is_bit_set(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_58(0);
		func_58(2);
		func_58(1);
	}
	else
	{
		func_37();
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
					func_58(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_58(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_58(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_58(3);
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
		if (is_bit_set(Global_2283, 10))
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
		func_37();
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
			if (!func_57())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_29(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(1);
			func_29(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

var func_57()
{
	return Global_1315913;
}

void func_58(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
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

void func_60()
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
		if (!func_61(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_61(struct<6> Param0, struct<6> Param1)
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

bool func_62()
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
			if (!func_61(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
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

void func_63()
{
	if (is_bit_set(Global_2283, 6))
	{
		if (Global_2987 > 0)
		{
			if (is_bit_set(Global_2284, 11))
			{
				if (iLocal_39)
				{
					func_64(iLocal_37, "CLEAR_ALL");
					if (is_bit_set(Global_2283, 25))
					{
						_push_scaleform_movie_function(iLocal_37, "CREATE_ALERT");
						_push_scaleform_movie_function_parameter_int(26);
						_push_scaleform_movie_function_parameter_float(222f);
						_push_scaleform_movie_function_parameter_float(222f);
						_pop_scaleform_movie_function_void();
					}
					if (is_bit_set(Global_2563397, 11))
					{
						_push_scaleform_movie_function(iLocal_37, "CREATE_ALERT");
						_push_scaleform_movie_function_parameter_int(53);
						_push_scaleform_movie_function_parameter_float(222f);
						_push_scaleform_movie_function_parameter_float(222f);
						_pop_scaleform_movie_function_void();
					}
					if (Global_69489 == 1)
					{
						if (is_bit_set(Global_2563397, 12))
						{
							_push_scaleform_movie_function(iLocal_37, "CREATE_ALERT");
							_push_scaleform_movie_function_parameter_int(52);
							_push_scaleform_movie_function_parameter_float(222f);
							_push_scaleform_movie_function_parameter_float(222f);
							_pop_scaleform_movie_function_void();
						}
					}
					if (is_bit_set(Global_2563397, 19))
					{
						_push_scaleform_movie_function(iLocal_37, "CREATE_ALERT");
						_push_scaleform_movie_function_parameter_int(55);
						_push_scaleform_movie_function_parameter_float(222f);
						if ((is_bit_set(Global_2563397, 12) || is_bit_set(Global_2563397, 11)) || is_bit_set(Global_2283, 25))
						{
							_push_scaleform_movie_function_parameter_float(192f);
						}
						else
						{
							_push_scaleform_movie_function_parameter_float(222f);
						}
						_pop_scaleform_movie_function_void();
					}
					clear_bit(&Global_2284, 11);
					iLocal_39 = 0;
				}
			}
		}
		if (Global_2987 < 1)
		{
			set_scaleform_movie_as_no_longer_needed(&iLocal_37);
			clear_bit(&Global_2283, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_2987 > 0)
	{
		iLocal_37 = unk_0x67D02A194A2FC2BD("cellphone_alert_popup");
		while (!has_scaleform_movie_loaded(iLocal_37))
		{
			wait(0);
		}
		_set_2d_layer(4);
		set_bit(&Global_2283, 6);
	}
}

void func_64(int iParam0, char* sParam1)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_pop_scaleform_movie_function_void();
}

void func_65()
{
	if (is_bit_set(Global_2284, 7))
	{
		set_bit(&Global_2284, 6);
		clear_bit(&Global_2284, 7);
		return;
	}
	if (!is_bit_set(Global_2284, 7))
	{
		clear_bit(&Global_2284, 6);
		return;
	}
}

void func_66()
{
	if (is_bit_set(Global_2284, 4))
	{
		set_bit(&Global_2284, 3);
		clear_bit(&Global_2284, 4);
		return;
	}
	if (!is_bit_set(Global_2284, 4))
	{
		clear_bit(&Global_2284, 3);
		return;
	}
}

void func_67()
{
	if (is_bit_set(Global_2284, 2))
	{
		if (!Global_14413.f_1 == 1)
		{
			Global_14413.f_1 = 0;
		}
		clear_bit(&Global_2284, 2);
		return;
	}
	if (!is_bit_set(Global_2284, 2))
	{
		if (!Global_14413.f_1 == 1)
		{
			if (Global_14413.f_1 < 4)
			{
				Global_14413.f_1 = 3;
			}
		}
		return;
	}
}

bool func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return false;
		}
		if (is_ped_in_cover(player_ped_id(), 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (!_0x4F32C0D5A90A9B40())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), 0)))
				{
					return false;
				}
			}
		}
		if (((is_ped_swimming(player_ped_id()) || is_ped_swimming_under_water(player_ped_id())) || is_player_climbing(player_id())) || is_ped_hanging_on_to_vehicle(player_ped_id()))
		{
			return false;
		}
		if (Global_100202)
		{
			return false;
		}
	}
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
				if ((((((((is_this_model_a_bike(get_entity_model(iVar3)) || is_this_model_a_bicycle(get_entity_model(iVar3))) || is_this_model_a_quadbike(get_entity_model(iVar3))) || get_entity_model(iVar3) == joaat("seashark")) || get_entity_model(iVar3) == joaat("seashark2")) || get_entity_model(iVar3) == joaat("rhino")) || get_entity_model(iVar3) == joaat("submersible")) || get_entity_model(iVar3) == joaat("submersible2")) || get_entity_model(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2563611 || iVar2 == 1)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) > 0 || Global_101154.f_12741.f_89)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
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
			return true;
		}
	}
	return false;
}

bool func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_37();
	if (Global_69489 == 0)
	{
		if (func_28(14))
		{
			if (Global_16771 == 2 || Global_16771 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (Global_14413.f_1 == 9)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		if (func_48(0) == 1)
		{
			return false;
		}
	}
	if (Global_14379 == 1)
	{
		return false;
	}
	if (Global_14413.f_1 == 7)
	{
		return false;
	}
	if (iParam1 == 1)
	{
	}
	if (!is_thread_active(Global_14410))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14413.f_1 < 4)
			{
				func_70("cellphone_flashhand");
				if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) == 0)
				{
					Global_14410 = start_new_script("cellphone_flashhand", 1424);
				}
				set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_14395)
	{
		wait(0);
	}
	func_114();
	func_112();
	if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
	{
		Global_2889 = 0;
		Global_14413.f_1 = 7;
		func_70(&(Global_2290[iParam0 /*15*/].f_5));
		if (iParam3)
		{
			if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
			{
				Global_14411 = start_new_script(&(Global_2290[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (_get_number_of_instances_of_streamed_script(Global_2290[iParam0 /*15*/].f_9) == 0)
		{
			Global_14411 = start_new_script(&(Global_2290[iParam0 /*15*/].f_5), 2552);
		}
		set_script_as_no_longer_needed(&(Global_2290[iParam0 /*15*/].f_5));
		return true;
	}
	return true;
}

void func_70(char* sParam0)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
	}
}

void func_71(int iParam0)
{
	if (Global_14571)
	{
		func_72(0, 0);
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
	if (!func_43())
	{
		Global_14413.f_1 = 3;
	}
}

void func_72(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_48(0))
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

void func_73()
{
	float fVar0;
	
	set_game_paused(true);
	set_input_exclusive(2, 201);
	set_input_exclusive(2, 202);
	fVar0 = 0f;
	while ((!is_control_just_pressed(2, 201) && !is_control_just_pressed(2, 202)) || fVar0 < 1f)
	{
		_set_warning_message_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		wait(0);
		fVar0 += get_frame_time();
	}
	set_game_paused(false);
	if (is_control_just_pressed(2, 201))
	{
		do_screen_fade_out(0);
		Global_100101 = 1;
	}
}

void func_74(int iParam0)
{
	float fVar0;
	int iVar1;
	
	set_game_paused(true);
	set_input_exclusive(2, 201);
	fVar0 = 0f;
	while (!is_control_just_pressed(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_75(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1);
		wait(0);
		fVar0 += get_frame_time();
	}
	set_game_paused(false);
}

char* func_75(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (is_entity_dead(player_ped_id(), 0))
	{
		return 13;
	}
	if (iParam1)
	{
		if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1)
		{
			return 2;
		}
	}
	if (func_107() && !func_28(14))
	{
		return 3;
	}
	if (func_106())
	{
		return 3;
	}
	if (func_105())
	{
		return 8;
	}
	if (iParam1)
	{
		if (func_104())
		{
			return 8;
		}
	}
	if (Global_88531)
	{
		return 3;
	}
	if (Global_25373)
	{
		return 8;
	}
	if (Global_25268)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (_get_number_of_instances_of_streamed_script(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (_get_number_of_instances_of_streamed_script(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("creator")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_103(iParam1))
	{
		return 3;
	}
	if (is_ped_falling(player_ped_id()) || is_ped_ragdoll(player_ped_id()))
	{
		return 12;
	}
	if (func_102(Global_100179, 256))
	{
		return 3;
	}
	if (((func_101() || func_100()) || func_95()) || func_94())
	{
		return 5;
	}
	if (func_94())
	{
		return 5;
	}
	if (func_93())
	{
		return 5;
	}
	if (func_92())
	{
		return 5;
	}
	if (func_100())
	{
		return 5;
	}
	if (func_91() && !Global_100105)
	{
		return 8;
	}
	if (func_95())
	{
		return 5;
	}
	if (is_player_switch_in_progress() || func_90())
	{
		return 4;
	}
	if (func_57())
	{
		return 4;
	}
	if (does_entity_exist(player_ped_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			iVar0 = func_80(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (is_ped_in_parachute_free_fall(player_ped_id()) || get_ped_parachute_state(player_ped_id()) != -1)
			{
				return 11;
			}
			if (is_ped_in_any_vehicle(player_ped_id(), 1) || Global_100201)
			{
				return 10;
			}
		}
	}
	if (Global_25371)
	{
		return 8;
	}
	if (Global_69487)
	{
		return 4;
	}
	if (is_player_playing(player_id()))
	{
		if (get_player_wanted_level(player_id()) > 0 || is_player_being_arrested(player_id(), 1))
		{
			return 6;
		}
		if (is_player_climbing(player_id()))
		{
			return 8;
		}
		if (is_ped_getting_up(player_ped_id()))
		{
			return 8;
		}
	}
	if (network_is_game_in_progress())
	{
		return 7;
	}
	if (func_79())
	{
		return 8;
	}
	if (Global_25122)
	{
		return 3;
	}
	if (is_gameplay_hint_active())
	{
		return 4;
	}
	if (is_entity_in_angled_area(player_ped_id(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (is_entity_in_water(player_ped_id()))
	{
		return 9;
	}
	if (iParam1)
	{
		if (!func_77(0))
		{
			return 8;
		}
	}
	if (is_ped_on_vehicle(player_ped_id()))
	{
		return 9;
	}
	return 0;
}

bool func_77(int iParam0)
{
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	if ((((((((((!is_player_control_on(player_id()) || !is_player_ready_for_cutscene(player_id())) || is_ped_shooting(player_ped_id())) || is_ped_in_combat(player_ped_id(), false)) || is_ped_in_melee_combat(player_ped_id())) || is_ped_being_jacked(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_getting_up(player_ped_id())) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_player_being_arrested(player_id(), 1))
	{
		return false;
	}
	if ((((((func_57() || Global_17118.f_4) || func_78()) || is_memory_card_in_use()) || is_auto_save_in_progress()) || func_90()) || func_106())
	{
		return false;
	}
	if (!iParam0)
	{
		if (get_mission_flag())
		{
			return false;
		}
	}
	return true;
}

int func_78()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

var func_79()
{
	return Global_52930;
}

int func_80(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		return 5;
	}
	vVar0 = {func_89(player_id())};
	if (Global_100241[10 /*10*/].f_1)
	{
		if (vdist2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_88(2) && !func_88(17))
	{
		if (vdist2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (is_point_in_angled_area(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, true))
			{
				return 9;
			}
		}
	}
	if (vdist2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (vdist2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_87(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_81(iParam0);
	}
	iVar3 = get_interior_from_entity(player_ped_id());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100117 || iVar3 == Global_100118) || iVar3 == Global_100119)
	{
		return 9;
	}
	else if (iVar3 == Global_100108)
	{
		return 9;
	}
	else if (iVar3 == Global_100109)
	{
		return 9;
	}
	else if (iVar3 == Global_100112)
	{
		return 9;
	}
	else if (iVar3 == Global_100111)
	{
		return 9;
	}
	else if (iVar3 == Global_100113)
	{
		return 9;
	}
	else if (iVar3 == Global_100114)
	{
		return 9;
	}
	else if (iVar3 == Global_100115)
	{
		return 9;
	}
	else if (iVar3 == Global_100116)
	{
		return 9;
	}
	else if (iVar3 == Global_100120)
	{
		return 9;
	}
	else if (iVar3 == Global_100121)
	{
		return 9;
	}
	else if (iVar3 == Global_100122)
	{
		return 9;
	}
	else if (iVar3 == Global_100123)
	{
		return 9;
	}
	else if (iVar3 == Global_100124)
	{
		return 9;
	}
	else if ((iVar3 == Global_100125 || iVar3 == Global_100126) && func_88(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= 19 - 1)
	{
		if (iVar3 == Global_100127[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_81(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_84(24, &Global_100108);
	func_84(47, &Global_100109);
	func_84(10, &Global_100117);
	func_84(9, &Global_100118);
	func_84(8, &Global_100119);
	func_84(21, &Global_100120);
	func_84(11, &Global_100121);
	func_84(18, &Global_100125);
	func_84(19, &Global_100126);
	Global_100112 = get_interior_at_coords_with_type(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100111 = get_interior_at_coords_with_type(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100113 = get_interior_at_coords_with_type(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100114 = get_interior_at_coords_with_type(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100115 = get_interior_at_coords_with_type(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100116 = get_interior_at_coords_with_type(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100122 = get_interior_at_coords_with_type(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100123 = get_interior_at_coords_with_type(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100124 = get_interior_at_coords_with_type(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= 19 - 1)
	{
		Global_100127[iVar0] = get_interior_at_coords(func_82(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_82(int iParam0)
{
	if (!func_83(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_83(int iParam0)
{
	if (iParam0 >= 19)
	{
		return false;
	}
	else if (iParam0 <= -1)
	{
		return false;
	}
	return true;
}

var func_84(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = {func_85(iParam0)};
	*uParam1 = get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_85(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = {-447.4833f, 280.3197f, 77.5215f};
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = {-1906.786f, -573.7576f, 19.0773f};
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = {1399.973f, 1148.756f, 113.3336f};
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = {-598.6379f, -1608.399f, 26.0108f};
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = {-556.5089f, 286.3181f, 81.1763f};
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = {-111.7116f, -11.912f, 69.5196f};
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = {1274.934f, -1714.726f, 53.7715f};
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = {147.433f, -2201.37f, 3.688f};
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = {320.9934f, 265.2515f, 82.1221f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = {-1425.564f, -244.3f, 15.8053f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = {377.153f, -717.567f, 10.0536f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = {245.1564f, 370.211f, 104.7382f};
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = {173.1176f, -1003.279f, -99.9999f};
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = {199.9715f, -999.6678f, -100f};
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = {228.6058f, -992.0537f, -99.9999f};
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = {1854.254f, 3686.739f, 33.2671f};
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = {-444.8907f, 6013.587f, 30.7164f};
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = {3522.845f, 3707.965f, 19.9918f};
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = {717.2994f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = {717.299f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = {2449.785f, 4983.825f, 45.8106f};
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = {1087.195f, -1988.445f, 28.649f};
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = {982.233f, -2160.382f, 28.4761f};
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = {479.0568f, -1316.825f, 28.2038f};
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = {-1005.663f, -478.3461f, 49.0265f};
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = {func_86(1)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = {func_86(2)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = {func_86(3)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = {func_86(4)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = {func_86(5)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = {func_86(6)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = {func_86(7)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = {Global_1049163[34 /*1924*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = {func_86(35)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = {func_86(36)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = {func_86(37)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = {func_86(38)};
			Var0 = {-20.1f, -580.8f, 91.3f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = {func_86(39)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = {func_86(40)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = {func_86(41)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = {func_86(42)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = {func_86(43)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = {-470.3754f, -698.5207f, 51.5276f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = {-460.6133f, -691.5562f, 69.9067f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = {300.633f, -997.4288f, -99.9727f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = {374.2012f, 416.9688f, 142.5991f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = {-16.29585f, -684.0385f, 33.50832f};
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = {341.1f, -1000f, -99.2f};
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = {199.9716f, -1018.954f, -100f};
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = {-1388.001f, -618.4197f, 30.8196f};
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = {func_86(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = {func_86(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = {func_86(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = {func_86(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_86(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 2:
			Var0 = {-761.0982f, 317.6259f, 169.5963f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 3:
			Var0 = {-761.1888f, 317.6295f, 216.0503f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 4:
			Var0 = {-795.3856f, 340.0188f, 152.7941f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 61:
			Var0 = {-778.5056f, 332.3779f, 212.1968f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 5:
			Var0 = {-258.1807f, -950.6853f, 70.0239f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 6:
			Var0 = {-285.0051f, -957.6552f, 85.3035f};
			Var0.f_3 = {0f, 0f, -110f};
			break;
		
		case 7:
			Var0 = {-1471.882f, -530.7484f, 62.34918f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 34:
			Var0 = {-1471.882f, -530.7484f, 49.72156f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 62:
			Var0 = {-1463.15f, -540.2369f, 74.2439f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 35:
			Var0 = {-885.3702f, -451.4775f, 119.327f};
			Var0.f_3 = {0f, 0f, 27.55617f};
			break;
		
		case 36:
			Var0 = {-913.0385f, -438.4284f, 114.3997f};
			Var0.f_3 = {0f, 0f, -153.3093f};
			break;
		
		case 37:
			Var0 = {-892.5499f, -430.4789f, 88.25368f};
			Var0.f_3 = {0f, 0f, 116.9193f};
			break;
		
		case 38:
			Var0 = {-35.0462f, -576.317f, 82.90739f};
			Var0.f_3 = {0f, 0f, 160f};
			break;
		
		case 39:
			Var0 = {-10.3788f, -590.7431f, 93.02542f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 65:
			Var0 = {-22.2487f, -589.1461f, 80.2305f};
			Var0.f_3 = {0f, 0f, 69.88f};
			break;
		
		case 40:
			Var0 = {-900.6311f, -376.7462f, 78.27306f};
			Var0.f_3 = {0f, 0f, 26.92611f};
			break;
		
		case 41:
			Var0 = {-929.483f, -374.5104f, 102.2329f};
			Var0.f_3 = {0f, 0f, -152.5531f};
			break;
		
		case 63:
			Var0 = {-914.4202f, -375.8189f, 114.4743f};
			Var0.f_3 = {0f, 0f, -63f};
			break;
		
		case 42:
			Var0 = {-617.1647f, 64.6042f, 100.8196f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 43:
			Var0 = {-584.2015f, 42.7133f, 86.4187f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 64:
			Var0 = {-609.5665f, 50.2203f, 98.3998f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 73:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = {0f, 0f, 11f};
			break;
		
		case 74:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = {0f, 0f, -63.5f};
			break;
		
		case 75:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = {0f, 0f, -71.5f};
			break;
		
		case 76:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = {0f, 0f, 40.5f};
			break;
		
		case 77:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = {0f, 0f, 6f};
			break;
		
		case 78:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = {0f, 0f, -14.5f};
			break;
		
		case 79:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = {0f, 0f, -29f};
			break;
		
		case 80:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = {0f, 0f, 4.5f};
			break;
		
		case 81:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 82:
			Var0 = {374.2012f, 416.9688f, 142.6977f};
			Var0.f_3 = {0f, 0f, -14f};
			break;
		
		case 83:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 84:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 85:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 86:
			Var0 = {-1573.098f, -4085.806f, 9.7851f};
			Var0.f_3 = {0f, 0f, 162f};
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = {342.8157f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = {260.3297f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 87:
			Var0 = {-1572.187f, -570.8315f, 109.9879f};
			Var0.f_3 = {0f, 0f, -54f};
			break;
		
		case 88:
			Var0 = {-1383.954f, -476.7112f, 73.507f};
			Var0.f_3 = {0f, 0f, 8f};
			break;
		
		case 89:
			Var0 = {-138.0029f, -629.739f, 170.2854f};
			Var0.f_3 = {0f, 0f, -84f};
			break;
		
		case 90:
			Var0 = {-74.8895f, -817.6883f, 244.8508f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
	}
	return Var0;
}

bool func_87(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	if (Global_85596[iParam0 /*2*/])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82363)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_88(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

Vector3 func_89(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_90()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_91()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

int func_92()
{
	return is_bit_set(Global_69737, 9);
}

int func_93()
{
	return is_bit_set(Global_69737, 8);
}

bool func_94()
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (((((((((((((((is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_intro", 3) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_base", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_enterchair", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_exitchair", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_idle_a", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_idle_b", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_idle_c", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@barbers", "player_idle_d", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_intro", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_base", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || is_entity_playing_anim(player_ped_id(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return true;
		}
	}
	return false;
}

bool func_95()
{
	int iVar0;
	
	if (func_101())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_96(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_96(int iParam0)
{
	return func_97(iParam0, 20, 1);
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_99() == 0)
		{
			return is_bit_set(func_109(func_98(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

var func_99()
{
	return Global_25120;
}

int func_100()
{
	return Global_91330.f_297 > 0;
}

int func_101()
{
	return Global_91330.f_296 > 0;
}

int func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_103(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

var func_104()
{
	return Global_91317.f_1;
}

var func_105()
{
	return Global_69756;
}

bool func_106()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

bool func_107()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_108(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	return false;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_110(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_110(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
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

var func_111()
{
	return Global_1312747;
}

void func_112()
{
	if (Global_69489 == 0)
	{
		Global_2290[14 /*15*/].f_4 = -99;
		Global_2290[4 /*15*/].f_4 = -99;
		if (Global_2443081)
		{
			if (func_28(14))
			{
				func_113(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_113(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_113(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_113(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2290[iParam0 /*15*/]), sParam1, 16);
	Global_2290[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2290[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2290[iParam0 /*15*/].f_9 = get_hash_key(sParam3);
	Global_2290[iParam0 /*15*/].f_10 = iParam4;
	Global_2290[iParam0 /*15*/].f_11 = iParam5;
	Global_2290[iParam0 /*15*/].f_12 = iParam6;
	Global_2290[iParam0 /*15*/].f_13 = iParam7;
	Global_2290[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2290[iParam0 /*15*/].f_12 == 0)
	{
		Global_2290[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_13 == 0)
	{
		Global_2290[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_14 == 0)
	{
		Global_2290[iParam0 /*15*/].f_14 = 0;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2290[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69489 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_101154.f_32575[iVar2 /*29*/].f_19[Global_14413] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_113(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_113(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_113(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35711 == 15 && func_103(0) == 0) && Global_2288 == 0)
		{
			func_113(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 0;
			Global_2289 = 255;
		}
		else
		{
			func_113(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 1;
			Global_2289 = 42;
		}
		if (iVar1 == 1)
		{
			func_113(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_113(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_113(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_113(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_113(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101154.f_12741.f_89 == 1)
		{
			func_113(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101154.f_12741.f_88 == 1)
		{
			func_113(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_113(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_113(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_113(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_113(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_113(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_113(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_113(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_113(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_113(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_113(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_113(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_113(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (is_bit_set(Global_2563397, 4) == 1)
		{
			func_113(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_113(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_113(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_113(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_113(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_113(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_113(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_113(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_113(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_113(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_113(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_113(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_113(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_113(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_113(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_113(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_113(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!is_bit_set(Global_2563397, 4) == 1)
		{
			if (Global_1573431)
			{
				func_113(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (is_bit_set(Global_2563397, 20) == 1)
			{
				func_113(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (is_bit_set(Global_2563397, 22) == 1)
			{
				func_113(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
		}
		if (((is_bit_set(Global_2563397, 4) == 0 && Global_1573431 == 0) && is_bit_set(Global_2563397, 20) == 0) && is_bit_set(Global_2563397, 22) == 0)
		{
			func_113(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_115()
{
}

