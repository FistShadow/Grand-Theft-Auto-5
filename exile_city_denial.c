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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	auto uLocal_33 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
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
	iLocal_28 = -1;
	iLocal_32 = true;
	if (_get_number_of_instances_of_streamed_script(joaat("exile_city_denial")) > 1)
	{
		Global_35676 = 0;
		terminate_this_thread();
	}
	func_36(18);
	func_35();
	settimera(0);
	settimerb(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31)
	{
		iLocal_31 = 1;
		if (has_force_cleanup_occurred(83))
		{
			Global_35676 = 0;
			if (!func_34(130))
			{
				func_33(18);
				func_32();
			}
			else if (func_34(131))
			{
				func_33(18);
				func_32();
			}
			switch (get_cause_of_most_recent_force_cleanup())
			{
				case 16:
					func_33(18);
					func_32();
					break;
				
				case 2:
					func_32();
					break;
				
				case 1:
					func_24(1628462442);
					func_24(1791324372);
					func_24(-240877892);
					func_24(1806999335);
					func_24(2054503592);
					func_24(-2009081795);
					iLocal_29 = false;
					while (!is_player_playing(player_id()))
					{
						wait(1000);
					}
					iLocal_31 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 -= timera();
			settimera(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		vVar2 = {get_entity_coords(player_ped_id(), 0)};
		iLocal_29 = func_23(vVar2, &iLocal_32);
		if (Global_69758 || Global_69758.f_1)
		{
			iLocal_29 = false;
		}
		iVar5 = false;
		iVar6 = false;
		if (func_34(131))
		{
			iVar5 = true;
		}
		if (!func_34(130))
		{
			iVar5 = true;
		}
		if (iVar5)
		{
			Global_35676 = 0;
			func_33(18);
			func_32();
		}
		if (func_21() == 1)
		{
			iVar6 = true;
		}
		Global_35676 = iLocal_29;
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_plane(player_ped_id()) || is_ped_in_any_heli(player_ped_id()))
			{
				if (is_entity_in_air(get_vehicle_ped_is_in(player_ped_id(), 0)))
				{
					iLocal_29 = false;
				}
			}
		}
		if (iLocal_30 != iLocal_29)
		{
			if (!iLocal_29)
			{
				func_19();
			}
			if (iLocal_29 && !iVar6)
			{
				iVar7 = false;
				iVar8 = true;
				while (iVar8)
				{
					switch (func_17(&iLocal_28, 6, 12, 0, 0))
					{
						case 0:
							iVar8 = false;
							iVar7 = false;
							break;
						
						case 1:
							iVar8 = false;
							iVar7 = true;
							break;
						
						default:
							wait(0);
							break;
					}
					if (Global_69489)
					{
						terminate_this_thread();
					}
				}
				if (iVar7)
				{
					is_ped_injured(player_ped_id());
					if (does_entity_exist(player_ped_id()))
					{
						iVar9 = get_interior_from_entity(player_ped_id());
						while (is_valid_interior(iVar9))
						{
							wait(5000);
							is_ped_injured(player_ped_id());
							if (does_entity_exist(player_ped_id()))
							{
								iVar9 = get_interior_from_entity(player_ped_id());
							}
						}
					}
					if (func_15(player_ped_id()) == 0)
					{
						if (!is_bit_set(Global_101154.f_6378.f_923, false))
						{
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!is_bit_set(Global_101154.f_6378.f_923, true))
						{
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!is_bit_set(Global_101154.f_6378.f_923, 2))
						{
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(player_ped_id()) == 2)
					{
						if (!is_bit_set(Global_101154.f_6378.f_923, 3))
						{
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!is_bit_set(Global_101154.f_6378.f_923, 4))
						{
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!is_bit_set(Global_101154.f_6378.f_923, 4))
						{
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !iVar6)
					{
						if ((!func_9(0) && !func_9(4)) && !func_9(3))
						{
							if (_0xEB4A0C2D56441717(11) < 256)
							{
								if (does_entity_exist(player_ped_id()))
								{
									if (!is_ped_injured(player_ped_id()))
									{
										create_incident_with_entity(11, player_ped_id(), iVar0, 0f, &uLocal_33);
									}
								}
							}
							if (is_screen_faded_in())
							{
								if (iLocal_32)
								{
									func_8("CITDENAL", -1);
								}
								else
								{
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					iLocal_29 = false;
				}
			}
			else
			{
				func_19();
			}
		}
		if (iLocal_29)
		{
			if (!is_incident_valid(uLocal_33))
			{
				if (_0xEB4A0C2D56441717(11) < 256)
				{
					if (does_entity_exist(player_ped_id()))
					{
						if (!is_ped_injured(player_ped_id()))
						{
							create_incident_with_entity(11, player_ped_id(), iVar0, 0f, &uLocal_33);
						}
					}
				}
			}
		}
		if (iLocal_29 && timerb() > 60000)
		{
			settimerb(0);
			iVar0 += get_random_int_in_range(true, 2);
			if (iVar0 < 8)
			{
				if (is_incident_valid(uLocal_33))
				{
					_0xB08B85D860E7BA3C(uLocal_33, 11, iVar0);
				}
				else if (_0xEB4A0C2D56441717(11) < 256)
				{
					if (does_entity_exist(player_ped_id()))
					{
						if (!is_ped_injured(player_ped_id()))
						{
							create_incident_with_entity(11, player_ped_id(), iVar0, 0f, &uLocal_33);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		iLocal_30 = iLocal_29;
		if (iVar6)
		{
			Global_35676 = 0;
			if (iLocal_29)
			{
				func_19();
			}
			func_4();
			while (func_21() == 1)
			{
				wait(2000);
			}
			func_35();
			iVar6 = false;
		}
		if (iLocal_29)
		{
			wait(0);
		}
		else
		{
			wait(10000);
		}
		if (func_1(12) && !func_9(12))
		{
			if (iLocal_29)
			{
				func_19();
			}
			while (func_9(0) || func_9(4))
			{
				wait(8000);
			}
		}
	}
	func_4();
}

bool func_1(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_2(iParam0))
	{
		return false;
	}
	return true;
}

int func_2(int iParam0)
{
	return func_3(iParam0, Global_35711);
}

bool func_3(int iParam0, int iParam1)
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

void func_4()
{
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == 7)
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_101154.f_5919.f_17[iParam0]), false);
	}
	else
	{
		clear_bit(&(Global_101154.f_5919.f_17[iParam0]), false);
	}
	disable_police_restart(Global_86750[iParam0 /*9*/].f_8, !iParam1);
	func_6(Global_86750[iParam0 /*9*/].f_7, 0, 0);
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = is_bit_set(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 5)
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_101154.f_5919.f_11[iParam0]), false);
	}
	else
	{
		clear_bit(&(Global_101154.f_5919.f_11[iParam0]), false);
	}
	disable_hospital_restart(Global_86814[iParam0 /*9*/].f_8, !iParam1);
	func_6(Global_86814[iParam0 /*9*/].f_7, 0, 0);
}

void func_8(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_9(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_14(0))
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (iParam3 < 3)
	{
		if (is_bit_set(iParam2, iParam3))
		{
			return false;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return false;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return false;
	}
	if (Global_101154.f_6378.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_101154.f_6378.f_911 == Var0)
		{
			Global_101154.f_6378.f_911 = -1;
		}
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = get_game_timer() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		clear_bit(&(Var0.f_1), true);
		clear_bit(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			set_bit(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			set_bit(&(Var0.f_1), 10);
		}
		Global_101154.f_6378[Global_101154.f_6378.f_136 /*15*/] = {Var0};
		Global_101154.f_6378.f_136++;
		iVar15 = false;
		while (iVar15 < 3)
		{
			if (is_bit_set(iParam2, iVar15))
			{
				func_11(iVar15);
			}
			iVar15++;
		}
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (is_bit_set(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101154.f_6378[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101154.f_6378[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101154.f_6378.f_764)
	{
		if (is_bit_set(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101154.f_6378.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101154.f_6378.f_919[iParam0] = iVar1;
}

int func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_14(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_1(0))
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *iParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_2(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_18(iParam0, iParam4);
		}
	}
	return 2;
}

void func_18(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_19()
{
	if (iLocal_28 != -1)
	{
		func_20(&iLocal_28);
	}
	func_24(1628462442);
	func_24(1791324372);
	func_24(-240877892);
	func_24(1806999335);
	func_24(2054503592);
	func_24(-2009081795);
	iLocal_29 = false;
	iLocal_30 = false;
	Global_35676 = 0;
	delete_incident(uLocal_33);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35673)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

auto func_21()
{
	func_22();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_16(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_15(player_ped_id());
			if (func_12(iVar0) && (!func_9(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_12(Global_101154.f_1826.f_539.f_3549))
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

bool func_23(struct<2> Param0, auto uParam1, int iParam2)
{
	if (!(is_screen_faded_in() || is_screen_fading_in()))
	{
		return false;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return true;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam3 = 0;
					return true;
				}
			}
		}
	}
	return false;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/] == iParam0)
		{
			if (Global_36258 != iVar0)
			{
				func_31(iVar0);
				func_28(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/] == iParam0)
		{
			func_27(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar0 /*10*/] == iParam0)
		{
			func_25(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_25(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_866)
	{
		return;
	}
	if (Global_101154.f_6378.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_866 - 2)
		{
			Global_101154.f_6378.f_765[iVar0 /*10*/] = {Global_101154.f_6378.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_866 > 0)
	{
		Global_101154.f_6378.f_765[Global_101154.f_6378.f_866 - 1 /*10*/] = {Var1};
		Global_101154.f_6378.f_866--;
	}
}

void func_26(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_764)
	{
		return;
	}
	if (Global_101154.f_6378.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_764 - 2)
		{
			Global_101154.f_6378.f_651[iVar0 /*14*/] = {Global_101154.f_6378.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_764 > 0)
	{
		Global_101154.f_6378.f_651[Global_101154.f_6378.f_764 - 1 /*14*/] = {Var1};
		Global_101154.f_6378.f_764--;
	}
	func_11(0);
	func_11(1);
	func_11(2);
}

void func_27(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= Global_101154.f_6378.f_650 - 2)
			{
				Global_101154.f_6378.f_199[iVar16 /*15*/] = {Global_101154.f_6378.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101154.f_6378.f_199[Global_101154.f_6378.f_650 - 1 /*15*/] = {Var0};
			Global_101154.f_6378.f_650--;
			return;
		}
		iVar15++;
	}
}

void func_28(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar15 /*15*/] == iParam0)
		{
			func_29(Global_101154.f_6378.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= Global_101154.f_6378.f_198 - 2)
			{
				Global_101154.f_6378.f_137[iVar16 /*15*/] = {Global_101154.f_6378.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101154.f_6378.f_137[Global_101154.f_6378.f_198 - 1 /*15*/] = {Var0};
			Global_101154.f_6378.f_198--;
			return;
		}
		iVar15++;
	}
}

bool func_29(auto uParam0)
{
	int iVar0;
	
	if (Global_117[uParam0 /*10*/].f_8 != 138)
	{
		if (Global_101154.f_32575[uParam0 /*29*/].f_19[Global_14413] == 1)
		{
			Global_101154.f_32575[uParam0 /*29*/].f_19[Global_14413] = 0;
			if (Global_101154.f_32575[uParam0 /*29*/].f_24[Global_14413] == 0)
			{
				iVar0 = Global_14413;
				func_30(uParam0, iVar0);
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_30(auto uParam0, int iParam1)
{
	if (Global_117[uParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101154.f_32575[uParam0 /*29*/].f_12[iParam1] = 0;
			Global_101154.f_32575[uParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_101154.f_6378.f_136)
	{
		return;
	}
	iVar1 = Global_101154.f_6378[iParam0 /*15*/].f_2;
	if (Global_101154.f_6378.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= Global_101154.f_6378.f_136 - 2)
		{
			Global_101154.f_6378[iVar0 /*15*/] = {Global_101154.f_6378[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (Global_101154.f_6378.f_136 > 0)
	{
		Global_101154.f_6378[Global_101154.f_6378.f_136 - 1 /*15*/] = {Var2};
		Global_101154.f_6378.f_136--;
	}
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (is_bit_set(iVar1, iVar0))
		{
			func_11(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_19();
	func_4();
	terminate_this_thread();
}

bool func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		clear_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

int func_34(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_35()
{
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

bool func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return false;
	}
	set_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

