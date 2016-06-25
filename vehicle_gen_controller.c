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
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	int iLocal_47 = 0;
	var[] uLocal_48 = new var[68];
	int[] iLocal_117 = new int[68];
	Vector3[] vLocal_186 = new Vector3[68];
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int[] iLocal_393 = new int[6];
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	struct<114> Local_402 = 0;
	struct<5> Local_516 = 0;
	int iLocal_521 = 0;
	auto uLocal_522 = 0;
	auto uLocal_523 = 0;
	auto uLocal_524 = 0;
	auto uLocal_525 = 0;
	auto uLocal_526 = 0;
	auto uLocal_527 = 0;
	auto uLocal_528 = 0;
	auto uLocal_529 = 0;
	auto uLocal_530 = 0;
	auto uLocal_531 = 0;
	auto uLocal_532 = 0;
	auto uLocal_533 = 0;
	auto uLocal_534 = 0;
	auto uLocal_535 = 0;
	auto uLocal_536 = 0;
	auto uLocal_537 = 0;
	auto uLocal_538 = 0;
	auto uLocal_539 = 0;
	auto uLocal_540 = 0;
	auto uLocal_541 = 0;
	auto uLocal_542 = 0;
	auto uLocal_543 = 0;
	auto uLocal_544 = 0;
	auto uLocal_545 = 0;
	struct<74> Local_546 = 4;
	auto uLocal_620 = 0;
	auto uLocal_621 = 0;
	auto uLocal_622 = 0;
	auto uLocal_623 = 0;
	auto uLocal_624 = 0;
	auto uLocal_625 = 0;
	auto uLocal_626 = 0;
	auto uLocal_627 = 0;
	auto uLocal_628 = 0;
	auto uLocal_629 = 0;
	auto uLocal_630 = 0;
	auto uLocal_631 = 0;
	auto uLocal_632 = 2;
	auto uLocal_633 = 0;
	auto uLocal_634 = 0;
	auto uLocal_635 = 0;
	auto uLocal_636 = 0;
	auto uLocal_637 = 0;
	auto uLocal_638 = 0;
	auto uLocal_639 = 0;
	auto uLocal_640 = 0;
	auto uLocal_641 = 0;
	auto uLocal_642 = 0;
	auto uLocal_643 = 0;
	auto uLocal_644 = 0;
	int iLocal_645 = 0;
	int[] iLocal_646 = new int[4];
	int iLocal_651 = 0;
	int[] iLocal_652 = new int[1];
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int[] iLocal_664 = new int[2];
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<13> Local_674 = 0;
	auto uLocal_687 = 0;
	auto uLocal_688 = 0;
	auto uLocal_689 = 0;
	auto uLocal_690 = 0;
	auto uLocal_691 = 0;
	auto uLocal_692 = 0;
	auto uLocal_693 = 0;
	auto uLocal_694 = 0;
	struct<81> Local_695 = 0;
	struct<78> Local_776 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int[] iLocal_858 = new int[6];
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int[] iLocal_867 = new int[68];
	int[] iLocal_936 = new int[3];
	int iLocal_940 = 0;
	Vector3[] fLocal_941 = new Vector3[68];
	auto uLocal_1010 = 0;
	auto uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	char[16] cLocal_1019 = 0;
	char[16] cLocal_1023 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	char* sLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0;
	int iLocal_1039 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_655 = -1;
	iLocal_656 = -1;
	iLocal_661 = -1;
	iLocal_668 = -1;
	iLocal_940 = -1;
	set_this_script_can_be_paused(0);
	Local_402.f_5 = -1;
	Local_402 = -1;
	Local_402.f_1 = 99999.99f;
	initializeSasquatchLocations(&iLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_88990[iVar0 /*3*/][0] = -1;
		Global_88990[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_101154.f_18807.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_101154.f_18807.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_101154.f_18807.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_101154.f_18807.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_101154.f_18807.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_101154.f_18807.f_4801 = -15;
		Global_101154.f_18807.f_4802 = 1;
	}
	if (((!isDLCPresent_B6DE61E2() && !func_380()) && !func_379()) && !func_378())
	{
		func_377(60, 0);
		func_377(61, 0);
	}
	func_376();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_375(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_69308)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_374();
						func_373();
					}
					Global_69308 = 0;
				}
				else
				{
					func_374();
					func_373();
				}
			}
		}
		wait(false);
		if (get_index_of_current_level() != 5)
		{
			iLocal_672 = func_371();
			func_332();
			func_330();
			func_298(&iLocal_521);
			func_276();
			func_27();
			func_19();
			func_17(&uLocal_1010);
		}
		func_1(&iLocal_521);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	Vector3 fVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8706.pSasquatchFlags, 7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_14(func_16()))
		{
			iVar0 = false;
			if (GAMEPLAY::IS_BIT_SET(*iParam0, 6) && GAMEPLAY::IS_BIT_SET(*iParam0, 12))
			{
				fVar1 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *iParam0.f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					iVar0 = true;
					if (*iParam0.f_2 == -1)
					{
						*iParam0.f_2 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(10000, 15000);
					}
					else
					{
						if (func_13())
						{
							*iParam0.f_2 = func_12(*iParam0.f_2, GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(2000, 4000));
						}
						if (!GAMEPLAY::IS_BIT_SET(*iParam0, 23))
						{
							func_11(iParam0, iParam0.f_9);
						}
						else if (!GAMEPLAY::IS_BIT_SET(*iParam0, 30))
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(iParam0.f_9, false))
							{
								if (GAMEPLAY::GET_GAME_TIMER() > *iParam0.f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										GAMEPLAY::SET_BIT(iParam0, 30);
									}
								}
							}
						}
						else if (has_sound_finished(*iParam0.f_1))
						{
							GAMEPLAY::CLEAR_BIT(iParam0, 30);
							release_sound_id(*iParam0.f_1);
							*iParam0.f_1 = -1;
							*iParam0.f_2 = -1;
						}
					}
				}
			}
			if (!iVar0)
			{
				if (GAMEPLAY::IS_BIT_SET(*iParam0, 23))
				{
					func_2(iParam0);
				}
				GAMEPLAY::CLEAR_BIT(iParam0, 30);
				*iParam0.f_2 = -1;
			}
		}
	}
}

void func_2(int iParam0)
{
	release_script_audio_bank();
	GAMEPLAY::CLEAR_BIT(iParam0, 23);
}

void func_3(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_8706.pSasquatchFlags), 22);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_8706.pSasquatchFlags), 22);
	}
}

void func_4(int iParam0, Vector3 vParam1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = {stringConcat_1_0_3_2_c64("EAS", "B", "ALLS", "T_C")}; //BEAST_CALLS
	Var16 = {stringConcat_1_0_3_2_c64("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT")}; //FM_EVENTS_SASQUATCH_SOUNDS
	*iParam0.f_1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_COORD(*iParam0.f_1, &Var0, vParam1, &Var16, 0, 0, 0);
}

struct<16> stringConcat_1_0_3_2_c64(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam3, 64);
	StringConCat(&cVar0, sParam2, 64);
	return cVar0;
}

Vector3 func_6(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		vVar6 = {func_7(*iParam0.f_6 - vVar3) * Vector(52.5f, 52.5f, 52.5f)};
		vVar0 = {vVar3 + vVar6};
	}
	return vVar0;
}

Vector3 func_7(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (is_disabled_control_just_pressed(0, 36))
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_8706.pSasquatchFlags), 22);
	}
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_8706.pSasquatchFlags, 22);
	if (iParam0 && iVar0)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_8706.pSasquatchFlags), 22);
	}
	iParam1 = iParam1;
	return iVar0;
}

auto func_9()
{
	auto uVar0;
	
	uVar0 = func_10(Global_101154.f_8706.pSasquatchFlags, 14336, 11);
	return uVar0;
}

int func_10(auto uParam0, int iParam1, int iParam2)
{
	return shift_right((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)
{
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false);
	GAMEPLAY::SET_BIT(iParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_13()
{
	int iVar0;
	
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_8706.pSasquatchFlags, 22);
	return (func_8(0, 0) && !iVar0);
}

int func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_17(auto uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320775.f_21)
	{
		iVar1 = func_18(*uParam0, *uParam0.f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			*uParam0.f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320775.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = _0x00C09F246ABEDD82(iVar0);
			if (Global_1320775[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = get_vehicle_class_max_acceleration(iVar0);
			if (Global_1320775[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = get_vehicle_class_max_agility(iVar0);
			}
			else
			{
				fVar2 = get_vehicle_class_max_traction(iVar0);
			}
			if (Global_1320775[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = get_vehicle_class_max_braking(iVar0);
			if (Global_1320775[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][2] = fVar2;
			}
			*uParam0.f_1++;
		}
	}
}

int func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (does_blip_exist(Global_68319.f_583))
	{
		iVar0 = false;
		if (iLocal_672 != Global_68319.f_582)
		{
			iVar0 = true;
		}
		else if (((((func_26(0) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(13)) || func_26(14))
		{
			iVar0 = true;
		}
		else if (Global_68319.f_590)
		{
			if (!func_25(Global_68319.f_584, get_blip_coords(Global_68319.f_583), 1056964608, 0) || func_21(Global_68319.f_582, func_22(Global_68319.f_582, 1)) > 0)
			{
				iVar0 = true;
			}
		}
		else if (Global_68319.f_591)
		{
			if (!func_25(Global_68319.f_587, get_blip_coords(Global_68319.f_583), 1056964608, 0) || func_21(Global_68319.f_582, func_22(Global_68319.f_582, 1)) > 0)
			{
				iVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_68319.f_581) || !is_vehicle_driveable(Global_68319.f_581, 0)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_581, 0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_581) && !is_vehicle_driveable(Global_68319.f_581, 0))
			{
				Global_68319.f_587 = {0f, 0f, 0f};
			}
			iVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_581))
		{
			if (is_vehicle_driveable(Global_68319.f_581, 0))
			{
				Global_68319.f_587 = {ENTITY::GET_ENTITY_COORDS(Global_68319.f_581, 1)};
			}
			else
			{
				Global_68319.f_587 = {0f, 0f, 0f};
			}
		}
		if (iVar0)
		{
			remove_blip(&(Global_68319.f_583));
			Global_68319.f_590 = 0;
			Global_68319.f_591 = 0;
			Global_68319.f_581 = 0;
		}
	}
	else
	{
		Global_68319.f_590 = 0;
		Global_68319.f_591 = 0;
		Global_68319.f_581 = 0;
	}
	if ((((((!does_blip_exist(Global_68319.f_583) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(13)) && !func_26(14))
	{
		iVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_88952[iVar2] != 145 && Global_88962[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar2])) && is_vehicle_driveable(Global_88942[iVar2], 0)) && !does_blip_exist(get_blip_from_entity(Global_88942[iVar2]))) && Global_88952[iVar2] == iLocal_672) && is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(Global_88942[iVar2])))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_88942[iVar2], 0))
				{
					Global_68319.f_581 = Global_88942[iVar2];
					Global_68319.f_582 = iLocal_672;
					Global_68319.f_590 = 0;
					Global_68319.f_583 = add_blip_for_entity(Global_68319.f_581);
				}
				iVar2 = 10;
				iVar1 = true;
			}
			iVar2++;
		}
		if (!iVar1)
		{
			if (!does_blip_exist(Global_68319.f_583) && !func_20(Global_68319.f_584, 0f, 0f, 0f, 0))
			{
				Global_68319.f_581 = 0;
				Global_68319.f_582 = iLocal_672;
				Global_68319.f_590 = 1;
				Global_68319.f_583 = add_blip_for_coord(Global_68319.f_584);
			}
			if (!does_blip_exist(Global_68319.f_583) && !func_20(Global_68319.f_587, 0f, 0f, 0f, 0))
			{
				Global_68319.f_581 = 0;
				Global_68319.f_582 = iLocal_672;
				Global_68319.f_591 = 1;
				Global_68319.f_583 = add_blip_for_coord(Global_68319.f_587);
			}
		}
		else
		{
			Global_68319.f_590 = 0;
			Global_68319.f_591 = 0;
		}
		if (does_blip_exist(Global_68319.f_583))
		{
			set_blip_sprite(Global_68319.f_583, 225);
			set_blip_name_from_text_file(Global_68319.f_583, "PVEHICLE");
			set_blip_as_short_range(Global_68319.f_583, false);
			set_blip_priority(Global_68319.f_583, 3);
			if (iLocal_672 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_672 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_672 == 2)
			{
				iVar3 = 44;
			}
			set_blip_colour(Global_68319.f_583, iVar3);
		}
	}
}

int func_20(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar1]) && is_vehicle_driveable(Global_88942[iVar1], 0))
		{
			if (Global_88952[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_88942[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_24(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_23(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_24(int iParam0)
{
	return iParam0 < 3;
}

bool func_25(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

int func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_27()
{
	func_219();
	func_160();
	func_64();
	func_28();
}

void func_28()
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402 != -1) && func_63(Local_402, 0)) && func_63(Local_402, 5)) && _get_number_of_instances_of_streamed_script(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_402.f_113))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_60(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (is_vehicle_driveable(Local_402.f_113, 0) && func_60(ENTITY::GET_ENTITY_MODEL(Local_402.f_113)))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_402.f_113, 0))
				{
					if (is_entity_in_angled_area(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, true, 0))
					{
						if ((!func_59(Local_402.f_113) && !func_58(Local_402.f_113)) && Local_402.f_113 != Global_68319.f_484[Local_402])
						{
							func_29(Local_402, Local_402.f_113, 1);
						}
						Local_402.f_113 = 0;
					}
				}
			}
			else
			{
				Local_402.f_113 = 0;
			}
		}
		else
		{
			Local_402.f_113 = 0;
		}
	}
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 12) && !GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_46();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_45(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_30(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_35(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_31(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_31(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_34(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_33(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_32(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
		}
	}
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_33(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_34(auto uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

bool func_35(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_43(iParam0, 0, 0)) || func_43(iParam0, 1, 0)) || func_43(iParam0, 2, 0)) || func_42(iParam0) != 145) || func_41(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_40(iParam0)) || !func_36(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_43(iParam0, 0, 0))
		{
		}
		if (func_43(iParam0, 1, 0))
		{
		}
		if (func_43(iParam0, 2, 0))
		{
		}
		if (func_42(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_36(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_37(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_37(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_39())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!isDLCPresent_B6DE61E2() && !func_380()) && !func_379()) && !func_378()) && !func_39())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_379())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_38(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_39()
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

bool func_40(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_37(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_41(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_44(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

int func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

auto func_46()
{
	auto uVar0;
	
	func_56(&uVar0, get_clock_seconds());
	func_55(&uVar0, get_clock_minutes());
	func_54(&uVar0, get_clock_hours());
	func_49(&uVar0, get_clock_day_of_month());
	func_48(&uVar0, get_clock_month());
	func_47(&uVar0, get_clock_year());
	return uVar0;
}

void func_47(auto uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_48(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_49(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_50(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

auto func_51(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_52(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(int iParam0)
{
	return (iParam0 && 15);
}

void func_54(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_55(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_56(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_57(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_22(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_22(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_22(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_22(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_22(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_22(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_22(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_22(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_22(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_39())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_39())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_20(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 19))
	{
		if (!func_20(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 20))
	{
		if (!func_20(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_59(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_60(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_62(iParam0);
			break;
		
		case 1:
			if (((is_this_model_a_boat(iParam0) || _is_this_model_an_emergency_boat(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return true;
			}
			break;
		
		case 3:
			return func_61(iParam0);
			break;
		
		case 2:
			return (is_this_model_a_heli(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return false;
}

bool func_61(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return false;
	}
	if (iParam0 == joaat("rhino"))
	{
		return false;
	}
	if (((!is_this_model_a_car(iParam0) && !is_this_model_a_bike(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !is_this_model_a_quadbike(iParam0))
	{
		return false;
	}
	return true;
}

bool func_62(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return false;
	}
	if ((((!is_this_model_a_plane(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return false;
	}
	return true;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_64()
{
	struct<99> Var0;
	struct<78> Var99;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	struct<4> Var183;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	struct<4> Var202;
	int iVar206;
	int iVar207;
	int iVar208;
	int iVar209;
	auto uVar210;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var99.f_9 = 49;
	Var99.f_59 = 2;
	iVar177 = false;
	iVar178 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, true, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]) && is_vehicle_driveable(Global_68319.f_484[Local_402], 0)) && (is_ped_on_specific_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402]) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402], 1)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && (get_entity_height_above_ground(PLAYER::PLAYER_PED_ID()) - 1f > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402], 1))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(14)) || func_159(0) != iLocal_1018) || iLocal_854) || func_158(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_player_control_on(player_id())) && !Global_68058) && !iLocal_854) && !is_screen_faded_out())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_68319.f_592[0] != -1 || func_157() != 0)) && Local_402 != -1) && !iLocal_1016) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(14)) && !func_158(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_63(Local_402, 0) && func_63(Local_402, 5))
					{
						if ((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, true, 0) && !is_ped_climbing(PLAYER::PLAYER_PED_ID())) && !is_entity_attached(PLAYER::PLAYER_PED_ID()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]) || !is_vehicle_driveable(Global_68319.f_484[Local_402], 0)) || (!is_ped_on_specific_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402]) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_484[Local_402], 1)))
							{
								iVar181 = func_157();
								iVar182 = 0;
								while (iVar182 < iVar181)
								{
									if (func_60(func_153(iVar182)))
									{
										iVar180++;
									}
									iVar182++;
								}
								iVar179 = 0;
								while (iVar179 < Global_68319.f_592)
								{
									if (Global_68319.f_592[iVar179] != -1)
									{
										if ((func_152(Global_68319.f_592[iVar179], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar179]] == -15) && (Global_68319.f_592[iVar179] != 200 || !Global_101154.f_29598.f_7))
										{
											iVar180++;
										}
									}
									iVar179++;
								}
								if (iVar180 > 0)
								{
									if (!is_help_message_being_displayed())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_151(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_151(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										iLocal_1018 = func_159(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!is_help_message_being_displayed() || func_150("HANGAR_NO"))
										{
											func_149("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										iVar177 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!is_help_message_being_displayed() || func_150("MARINA_NO"))
										{
											func_149("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										iVar177 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!is_help_message_being_displayed() || func_150("HELIPAD_NO"))
										{
											func_149("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										iVar177 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var183, "CAR_GAR_NO", 16);
										if (is_ps3_version() || is_orbis_version())
										{
											StringConCat(&Var183, "_1", 16);
										}
										else if (is_xbox360_version() || is_durango_version())
										{
											StringConCat(&Var183, "_2", 16);
										}
										if (!is_help_message_being_displayed() || func_150(&Var183))
										{
											func_149(&Var183, -1);
											cLocal_1019 = {Var183};
										}
										iVar177 = true;
									}
								}
							}
						}
						else
						{
							iLocal_856 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_147(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_146(iLocal_655, 1))
				{
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
					{
						set_player_control(player_id(), false, 0);
					}
					else
					{
						set_player_control(player_id(), false, 256);
					}
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							set_vehicle_radio_enabled(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
					func_145();
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_659 = 0;
					iLocal_645 = -1;
					iLocal_654++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 4, 0, 0, 0);
				func_142(1, 2, 1, 1, 1);
				func_141("WEB_VEH_TITLE");
				iVar187 = 0;
				while (iVar187 < iLocal_646)
				{
					iLocal_646[iVar187] = 0;
					iVar187++;
				}
				iVar188 = -1;
				iVar189 = 0;
				func_57(&(Local_402.f_8), Local_402);
				iVar191 = false;
				iVar192 = func_157();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_60(func_153(iVar190)))
					{
						if (iVar188 == -1)
						{
							iVar188 = iVar191;
						}
						if (Local_402.f_8.f_4 == func_153(iVar190))
						{
							iLocal_645 = iVar191;
							iVar189 = 1;
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68319.f_592)
				{
					if (Global_68319.f_592[iVar190] != -1)
					{
						if ((func_152(Global_68319.f_592[iVar190], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar190]] == -15) && (Global_68319.f_592[iVar190] != 200 || !Global_101154.f_29598.f_7))
						{
							func_130(Global_68319.f_592[iVar190], &Var0, 0, iLocal_672, -1);
							if (iVar188 == -1)
							{
								iVar188 = iVar191;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_645 = iVar191;
								iVar189 = 1;
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				if (iLocal_645 == -1)
				{
					iLocal_645 = iVar188;
				}
				iVar191 = false;
				iVar192 = func_157();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_60(func_153(iVar190)))
					{
						GAMEPLAY::SET_BIT(&(iLocal_646[iVar191 / 32]), iVar191 % 32);
						func_126(iVar191, get_display_name_from_vehicle_model(func_153(iVar190)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar191 && iVar189) && Local_402.f_6 != 3)
						{
							func_125(iVar191, 4, 0);
						}
						else
						{
							func_125(iVar191, 0, 0);
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68319.f_592)
				{
					if (Global_68319.f_592[iVar190] != -1)
					{
						if ((func_152(Global_68319.f_592[iVar190], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar190]] == -15) && (Global_68319.f_592[iVar190] != 200 || !Global_101154.f_29598.f_7))
						{
							GAMEPLAY::SET_BIT(&(iLocal_646[iVar191 / 32]), iVar191 % 32);
							func_130(Global_68319.f_592[iVar190], &Var0, 0, iLocal_672, -1);
							if (Global_68319.f_592[iVar190] != 164)
							{
								func_126(iVar191, func_123(Global_68319.f_592[iVar190]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_126(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_120(func_123(Global_68319.f_592[iVar190]), 0);
								func_120("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_126(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_120(func_123(Global_68319.f_592[iVar190]), 0);
								func_120("VNX_SWFTB", 0);
							}
							else
							{
								func_126(iVar191, func_123(Global_68319.f_592[iVar190]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar191 && iVar189)
							{
								func_125(iVar191, 4, 0);
							}
							else
							{
								func_125(iVar191, 0, 0);
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				func_119(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (_is_input_just_disabled(2))
					{
						CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
						enable_control_action(0, 237, 1);
						enable_control_action(0, 238, 1);
						enable_control_action(0, 241, 1);
						enable_control_action(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_645)
							{
								play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_2562129;
								func_119(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (is_control_just_pressed(2, 188) || is_control_just_pressed(2, 241))
				{
					iLocal_660 = 1;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar193 = iLocal_645 - 1;
					while (iVar193 >= 0)
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_646[iVar193 / 32], iVar193 % 32))
						{
							iLocal_645 = iVar193;
							iVar194 = true;
							iVar193 = 0;
						}
						iVar193 += -1;
					}
					if (!iVar194)
					{
						iVar193 = iLocal_646 * 32 - 1;
						while (iVar193 >= iLocal_645 + 1)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_646[iVar193 / 32], iVar193 % 32))
							{
								iLocal_645 = iVar193;
								iVar194 = true;
								iVar193 = 0;
							}
							iVar193 += -1;
						}
					}
					if (iVar194)
					{
						func_119(iLocal_645, 1, 1);
					}
				}
				else if (is_control_just_pressed(2, 187) || is_control_just_pressed(2, 242))
				{
					iLocal_660 = 1;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = iLocal_645 + 1;
					while (iVar195 <= iLocal_646 * 32 - 1)
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_646[iVar195 / 32], iVar195 % 32))
						{
							iLocal_645 = iVar195;
							iVar196 = true;
							iVar195 = iLocal_646 * 32 + 1;
						}
						iVar195++;
					}
					if (!iVar196)
					{
						iVar195 = 0;
						while (iVar195 <= iLocal_645 - 1)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_646[iVar195 / 32], iVar195 % 32))
							{
								iLocal_645 = iVar195;
								iVar196 = true;
								iVar195 = iLocal_646 * 32 + 1;
							}
							iVar195++;
						}
					}
					if (iVar196)
					{
						func_119(iLocal_645, 1, 1);
					}
				}
				else if (is_control_just_released(2, 201) || iVar178 == 1)
				{
					iVar197 = false;
					iVar178 = 0;
					play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar199 = 0;
					iVar200 = func_157();
					iVar198 = 0;
					while (iVar198 < iVar200)
					{
						if (func_60(func_153(iVar198)))
						{
							if (iLocal_645 == iVar199 && (((((Local_402.f_8.f_4 != func_153(iVar198) || !ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402])) || !is_vehicle_driveable(Global_68319.f_484[Local_402], 0)) || Local_402 == 21) || Local_402 == 22) || Local_402 == 23))
							{
								iVar197 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_153(iVar198)) || (!iLocal_659 && Local_402 == 21)) || (!iLocal_659 && Local_402 == 22)) || (!iLocal_659 && Local_402 == 23))
								{
									func_113("VEH_SELECT_CNFA", 0, 0);
									func_112(-1);
									func_111(201, "ITEM_YES", -1);
									func_111(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar198 = func_157() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_110(func_153(iVar198)))
									{
										iLocal_1017 = func_153(iVar198);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = false;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_153(iVar198);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_110(func_153(iVar198)))
								{
									iLocal_1017 = func_153(iVar198);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = false;
									iLocal_654++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]))
									{
										set_entity_as_mission_entity(Global_68319.f_484[Local_402], false, 1);
										delete_vehicle(&(Global_68319.f_484[Local_402]));
									}
									Var99.f_66 = func_153(iVar198);
									GAMEPLAY::SET_BIT(&(Var99.f_77), 14);
									func_107(Local_402, &Var99, 0f, 0f, 0f, -1f, 145);
									func_106(Local_402);
									func_57(&(Local_402.f_8), Local_402);
									iVar198 = func_157() + 1;
									iLocal_658 = 1;
								}
							}
							iVar199++;
						}
						iVar198++;
					}
					if (!iVar197)
					{
						iVar198 = 0;
						while (iVar198 < Global_68319.f_592)
						{
							if (Global_68319.f_592[iVar198] != -1)
							{
								if ((func_152(Global_68319.f_592[iVar198], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar198]] == -15) && (Global_68319.f_592[iVar198] != 200 || !Global_101154.f_29598.f_7))
								{
									func_130(Global_68319.f_592[iVar198], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar199 && ((Local_402.f_8.f_4 != Var0.f_66 || !ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402])) || !is_vehicle_driveable(Global_68319.f_484[Local_402], 0)))
									{
										iVar197 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_113("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_113("VEH_SELECT_CNFA", 0, 0);
											}
											func_112(-1);
											func_111(201, "ITEM_YES", -1);
											func_111(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar198 = Global_68319.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar198 = Global_68319.f_592 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]))
											{
												set_entity_as_mission_entity(Global_68319.f_484[Local_402], false, 1);
												delete_vehicle(&(Global_68319.f_484[Local_402]));
											}
											func_130(Global_68319.f_592[iVar198], &Var0, 0, iLocal_672, -1);
											GAMEPLAY::SET_BIT(&(Var0.f_77), 14);
											if (is_this_model_a_plane(Var0.f_66))
											{
												GAMEPLAY::SET_BIT(&(Var0.f_77), 22);
											}
											func_107(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
											func_106(Local_402);
											func_57(&(Local_402.f_8), Local_402);
											iVar198 = Global_68319.f_592 + 1;
											iLocal_658 = 1;
										}
									}
									iVar199++;
								}
							}
							iVar198++;
						}
					}
				}
				else if (is_control_just_released(2, 202) || is_control_just_released(2, 238))
				{
					play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_654 = 99;
					}
				}
			}
			hide_hud_and_radar_this_frame();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 0, 0, 0, 0);
				func_142(1, 1, 1, 1, 1);
				iVar201 = false;
				while (iVar201 < iLocal_652)
				{
					iLocal_652[iVar201] = 0;
					iVar201++;
				}
				func_141("WEB_VEH_TITLE2");
				iVar201 = false;
				while (iVar201 < 25)
				{
					StringCopy(&Var202, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var202, iVar201, 16);
					func_126(iVar201, &Var202, 0, 1, 0, 0);
					GAMEPLAY::SET_BIT(&(iLocal_652[iVar201 / 32]), iVar201 % 32);
					iVar201++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_101154.f_29707.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_101154.f_29707.f_626[200];
				}
				else
				{
					iLocal_651 = Global_101154.f_29707.f_939[200];
				}
				func_119(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (_is_input_just_disabled(2))
					{
						CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
						enable_control_action(0, 237, 1);
						enable_control_action(0, 238, 1);
						enable_control_action(0, 241, 1);
						enable_control_action(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_651)
							{
								play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_2562129;
								func_119(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (is_control_just_pressed(2, 188) || is_control_just_pressed(2, 241))
				{
					iLocal_660 = 1;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar206 = iLocal_651 - 1;
					while (iVar206 >= 0)
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_652[iVar206 / 32], iVar206 % 32))
						{
							iLocal_651 = iVar206;
							iVar207 = true;
							iVar206 = 0;
						}
						iVar206 += -1;
					}
					if (!iVar207)
					{
						iVar206 = 31;
						while (iVar206 >= iLocal_651 + 1)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_652[iVar206 / 32], iVar206 % 32))
							{
								iLocal_651 = iVar206;
								iVar207 = true;
								iVar206 = iLocal_651;
							}
							iVar206 += -1;
						}
					}
					if (iVar207)
					{
						func_119(iLocal_651, 1, 1);
					}
				}
				else if (is_control_just_pressed(2, 187) || is_control_just_pressed(2, 242))
				{
					iLocal_660 = 1;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = iLocal_651 + 1;
					while (iVar208 <= 31)
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_652[iVar208 / 32], iVar208 % 32))
						{
							iLocal_651 = iVar208;
							iVar209 = true;
							iVar208 = 31;
						}
						iVar208++;
					}
					if (!iVar209)
					{
						iVar208 = 0;
						while (iVar208 <= iLocal_651 - 1)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_652[iVar208 / 32], iVar208 % 32))
							{
								iLocal_651 = iVar208;
								iVar209 = true;
								iVar208 = iLocal_651;
							}
							iVar208++;
						}
					}
					if (iVar209)
					{
						func_119(iLocal_651, 1, 1);
					}
				}
				else if (is_control_just_released(2, 201) || iVar178 == 1)
				{
					iVar178 = 0;
					play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[Local_402]))
					{
						set_entity_as_mission_entity(Global_68319.f_484[Local_402], false, 1);
						delete_vehicle(&(Global_68319.f_484[Local_402]));
					}
					uVar210 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_101154.f_29707.f_313[200] = uVar210;
					}
					else if (iLocal_672 == 1)
					{
						Global_101154.f_29707.f_626[200] = uVar210;
					}
					else if (iLocal_672 == 2)
					{
						Global_101154.f_29707.f_939[200] = uVar210;
					}
					func_130(200, &Var0, 0, iLocal_672, -1);
					GAMEPLAY::SET_BIT(&(Var0.f_77), 14);
					if (is_this_model_a_plane(Var0.f_66))
					{
						GAMEPLAY::SET_BIT(&(Var0.f_77), 22);
					}
					func_107(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
					func_106(Local_402);
					func_57(&(Local_402.f_8), Local_402);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (is_control_just_released(2, 202) || is_control_just_released(2, 238))
				{
					play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654--;
				}
			}
			hide_hud_and_radar_this_frame();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_player_control(player_id(), true, 0);
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!_0x5F43D83FD6738741())
					{
						set_vehicle_radio_enabled(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
				}
			}
			func_67(1, -1);
			iLocal_654 = 0;
			func_65(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!iVar177 && is_help_message_being_displayed())
	{
		if (!is_string_null_or_empty(&cLocal_1019))
		{
			if ((((func_150("HANGAR_NO") || func_150("MARINA_NO")) || func_150("HELIPAD_NO")) || func_150("CAR_GAR_NO_1")) || func_150("CAR_GAR_NO_2"))
			{
				clear_help(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_65(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_66(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_67(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (!func_69(&uVar0, 0, iParam1))
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
		func_68(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_68(int iParam0)
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

bool func_69(auto uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && network_get_this_script_is_network_script())
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

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_103(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_101(29, 1, 1, &fVar35, &fVar36, iParam7))
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
		if (func_100())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_100())
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
					draw_sprite(func_99(29), func_97(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
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
				func_96(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_95();
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
						func_95();
						func_93(Global_17254 + fParam5 - 0.00390625f - func_94("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
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
				func_96(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_101(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_92(fVar41);
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
				func_96(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_92(fVar41);
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
					func_101(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_91(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_99(Global_17257.f_4638), func_97(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_17257.f_4637 > Global_17257.f_4636)
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
					func_101(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_92(fVar41);
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
				func_96(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_92(fVar41);
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
					func_101(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_91(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_99(Global_2562053.f_67), func_97(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_83(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
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
					func_81(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
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
												func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
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
													if (func_101(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
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
											if (func_101(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_101(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(26), func_97(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_101(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(27), func_97(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(iVar31);
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
													if (func_101(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_101(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_91(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_99(Global_17257.f_4433[iVar22 + iVar28]), func_97(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_99(Global_17257.f_4433[iVar22 + iVar28]), func_97(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
													if (func_101(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_101(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_91(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_99(Global_17257.f_4433[iVar22 + iVar14]), func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_99(Global_17257.f_4433[iVar22 + iVar14]), func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_99(Global_17257.f_4433[iVar22 + iVar14]), func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(iVar31);
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
											if (func_101(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_101(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(26), func_97(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_101(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(27), func_97(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_79(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(iVar31);
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
											if (func_101(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_101(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(26), func_97(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_101(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_99(27), func_97(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_81(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_78(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_101(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
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
												if (func_101(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_101(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_91(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_99(26), func_97(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_101(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_101(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_91(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_99(27), func_97(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_101(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_91(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_99(Global_17257.f_4433[iVar22]), func_97(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_77(Global_17257.f_4433[iVar22]), fVar36 * func_77(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_101(26, 1, 1, &fVar35, &fVar36, iParam7))
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
	Global_17257.f_5745 = GAMEPLAY::GET_GAME_TIMER();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_72();
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
		func_71(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_71(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_72()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_76(0))
		{
			func_73(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_75(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_74())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_75(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_76(0))
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

bool func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
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

float func_77(int iParam0)
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

void func_78(float fParam0, float fParam1, char* sParam2, Vector3 fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_79(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_80(int iParam0)
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

void func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_82(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_82(int iParam0, auto uParam1, auto uParam2, auto uParam3)
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

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_69(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_103(iParam4, iParam8))
	{
		return;
	}
	if (func_89())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_86(player_id(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
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
			if (GAMEPLAY::IS_PC_VERSION())
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
					func_85(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_85(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_84(&(Global_17257.f_4834[iVar1 /*4*/]));
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
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_17257.f_4896[iVar1] != 344 && GAMEPLAY::IS_BIT_SET(Global_17257.f_4922, iVar1))
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
				func_85(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_84(&(Global_2562053.f_16));
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

void func_84(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_85(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_87(-1, 0) == 8;
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

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_88();
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

auto func_88()
{
	return Global_1312747;
}

bool func_89()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_90())
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

bool func_90()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_92(float fParam0)
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

void func_93(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_94(char* sParam0, int iParam1, int iParam2)
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
	func_95();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_95()
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

void func_96(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

auto func_97(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_98(&(Global_17257.f_6687[iParam0 /*16*/]));
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

auto func_98(auto uParam0)
{
	return uParam0;
}

char* func_99(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_98(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_100()
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

bool func_101(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_99(iParam0);
	sVar1 = func_97(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_100())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_100())
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
		vVar7.x *= func_102(iParam0) / fVar4;
		vVar7.y *= func_102(iParam0) / fVar4;
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

float func_102(int iParam0)
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

bool func_103(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_105(8, -1) && func_104() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

auto func_104()
{
	return Global_1315846;
}

int func_105(int iParam0, int iParam1)
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

void func_106(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_68319[iParam0] = 0;
	Global_68319.f_69[iParam0] = 0;
}

void func_107(int iParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_109(iParam0);
			func_108(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_377(iParam0, 1);
		}
	}
}

void func_108(auto uParam0, auto uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

void func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_377(iParam0, 0);
		}
	}
}

bool func_110(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return true;
			break;
	}
	return false;
}

void func_111(int iParam0, char* sParam1, int iParam2)
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
	GAMEPLAY::CLEAR_BIT(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_112(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	Global_17257.f_4922 = 0;
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (!func_69(&uVar1, 0, iParam0))
		{
			return;
		}
		_push_scaleform_movie_function(Global_17257.f_5530[uVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_113(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = GAMEPLAY::GET_GAME_TIMER();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

bool func_114()
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 > -1)
		{
			if (is_control_just_released(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_115(int iParam0, int iParam1, int iParam2)
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

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_118();
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
				func_117(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_117(0);
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
				func_96(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
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

void func_117(int iParam0)
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
		func_96(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_96(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_118()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_119(int iParam0, int iParam1, int iParam2)
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

void func_120(char* sParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam0, 24);
	Global_17257.f_5090++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 1;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_122();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_101(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_121();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_121()
{
	int iVar0;
	int iVar1;
	float fVar2;
	auto uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0] != 0)
		{
			if (func_101(Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > _get_text_scale_height(0.35f, 0))
	{
		return fVar2;
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_122()
{
	float fVar0;
	float fVar1;
	auto uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_81(0, 1, 0, 0, 0, iVar6 > 0);
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		_set_text_entry_for_width(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_integer(Global_17257.f_3918[Global_17257.f_5092 - iVar3 + iVar9]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_float(Global_17257.f_4175[Global_17257.f_5093 - iVar4 + iVar10], Global_17257.f_4304[Global_17257.f_5093 - iVar4 + iVar10]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = _get_text_screen_width(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7] != 0)
		{
			func_101(Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

char* func_123(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (func_124(iParam0, -1) == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "ZTYPE";
		
		case 1:
			return "STINGER";
		
		case 2:
			return "JB700";
		
		case 3:
			return "CHEETAH";
		
		case 4:
			return "ENTITYXF";
		
		case 5:
			return "ADDER";
		
		case 6:
			return "MONROE";
		
		case 7:
			return "COGCABRI";
		
		case 9:
			return "DODO";
		
		case 12:
			return "CUBAN800";
		
		case 13:
			return "DUSTER";
		
		case 14:
			return "LUXOR";
		
		case 10:
			return "SHAMAL";
		
		case 11:
			return "STUNT";
		
		case 113:
			return "VESTRA";
		
		case 15:
			return "FROGGER";
		
		case 16:
			return "MAVERICK";
		
		case 17:
			return "RHINO";
		
		case 18:
			return "TITAN";
		
		case 19:
			return "CARGOBOB";
		
		case 20:
			return "BUZZARD";
		
		case 21:
			return "CRUSADER";
		
		case 22:
			return "BARRACKS";
		
		case 23:
			return "MARINA";
		
		case 24:
			return "MARQUIS";
		
		case 25:
			return "JETMAX";
		
		case 26:
			return "SPEEDER";
		
		case 27:
			return "SQUALO";
		
		case 28:
			return "SUNTRAP";
		
		case 29:
			return "TROPIC";
		
		case 30:
			return "SEASHARK";
		
		case 32:
			return "SUNTRAP";
		
		case 31:
			return "SUBMERSIBLE";
		
		case 258:
			return "TUG";
		
		case 33:
			return "BMX";
		
		case 34:
			return "SCORCHER";
		
		case 35:
			return "TRIBIKE";
		
		case 36:
			return "TRIBIKE2";
		
		case 37:
			return "TRIBIKE3";
		
		case 38:
			return "CRUISER";
		
		case 39:
			return "SCHWARZE";
		
		case 40:
			return "ZION";
		
		case 41:
			return "GAUNTLET";
		
		case 42:
			return "VIGERO";
		
		case 43:
			return "ISSI2";
		
		case 44:
			return "INFERNUS";
		
		case 45:
			return "SURANO";
		
		case 46:
			return "VACCA";
		
		case 47:
			return "NINEF";
		
		case 48:
			return "COMET2";
		
		case 49:
			return "BANSHEE";
		
		case 50:
			return "FELTZER";
		
		case 51:
			return "BFINJECT";
		
		case 52:
			return "SANDKING";
		
		case 53:
			return "FUGITIVE";
		
		case 54:
			return "DILETTAN";
		
		case 55:
			return "SUPERD";
		
		case 56:
			return "EXEMPLAR";
		
		case 57:
			return "BALLER2";
		
		case 58:
			return "CAVCADE";
		
		case 59:
			return "ROCOTO";
		
		case 60:
			return "FELON";
		
		case 61:
			return "ORACLE";
		
		case 62:
			return "BATI";
		
		case 63:
			return "AKUMA";
		
		case 64:
			return "RUFFIAN";
		
		case 65:
			return "VADER";
		
		case 66:
			return "BLAZER";
		
		case 67:
			return "PCJ";
		
		case 68:
			return "SANCHEZ";
		
		case 69:
			return "FAGGIO";
		
		default:
	}
	switch (iParam0)
	{
		case 70:
			return "BULLET";
		
		case 71:
			return "CARBONIZ";
		
		case 72:
			return "COQUETTE";
		
		case 73:
			return "NINEF2";
		
		case 74:
			return "RAPIDGT";
		
		case 75:
			return "RAPIDGT";
		
		case 76:
			return "STINGERG";
		
		case 77:
			return "VOLTIC";
		
		case 78:
			return "ANNIHL";
		
		case 79:
			return "MAMMATUS";
		
		case 80:
			return "VELUM";
		
		case 81:
			return "DUMP";
		
		case 82:
			return "AIRBUS";
		
		case 83:
			return "BUS";
		
		case 84:
			return "COACH";
		
		case 85:
			return "JOURNEY";
		
		case 86:
			return "MULE";
		
		case 87:
			return "RENTBUS";
		
		case 88:
			return "STRETCH";
		
		case 89:
			return "BISON";
		
		case 90:
			return "DOUBLE";
		
		case 91:
			return "FELON2";
		
		case 92:
			return "HEXER";
		
		case 93:
			return "ZION2";
		
		case 94:
			return "BATI2";
		
		case 95:
			return "ELEGY2";
		
		case 96:
			return "KHAMEL";
		
		case 97:
			return "HOTKNIFE";
		
		case 98:
			return "CARBON";
		
		case 99:
			return "BIFTA";
		
		case 100:
			return "KALAHARI";
		
		case 101:
			return "PARADISE";
		
		case 102:
			return "SPEEDER";
		
		case 103:
			return "BODHI2";
		
		case 104:
			return "DUNE";
		
		case 105:
			return "REBEL";
		
		case 106:
			return "SADLER";
		
		case 107:
			return "SANCHEZ2";
		
		case 108:
			return "SANDKIN2";
		
		case 109:
			return "ROOSEVELT";
		
		case 111:
			return "JESTER";
		
		case 114:
			return "MASSACRO";
		
		case 112:
			return "TURISMOR";
		
		case 115:
			return "ZENTORNO";
		
		case 116:
			return "HUNTLEY";
		
		case 110:
			return "ALPHA";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 121:
			return "THRUST";
		
		case 128:
			return "ASEA";
		
		case 129:
			return "ASTROPE";
		
		case 130:
			return "BOBCATXL";
		
		case 131:
			return "CAVCADE";
		
		case 132:
			return "GRANGER";
		
		case 133:
			return "INGOT";
		
		case 134:
			return "INTRUDER";
		
		case 135:
			return "MINIVAN";
		
		case 136:
			return "PREMIER";
		
		case 137:
			return "RADI";
		
		case 138:
			return "RANCHERX";
		
		case 139:
			return "RLOADER";
		
		case 140:
			return "STANIER";
		
		case 141:
			return "STRATUM";
		
		case 142:
			return "WASHINGT";
		
		case 122:
			return "DOMINATO";
		
		case 123:
			return "F620";
		
		case 124:
			return "FUSILADE";
		
		case 125:
			return "PENUMBRA";
		
		case 126:
			return "SENTINEL";
		
		case 127:
			return "SENTINEL2";
		
		case 143:
			return "BLADE";
		
		case 144:
			return "WARRENER";
		
		case 145:
			return "GLENDALE";
		
		case 146:
			return "RHAPSODY";
		
		case 147:
			return "PANTO";
		
		case 148:
			return "DUBSTA3";
		
		case 149:
			return "PIGALLE";
		
		case 150:
			return "PICADOR";
		
		case 151:
			return "REGINA";
		
		case 152:
			return "SURFER";
		
		case 153:
			return "YOUGA";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 156:
			return "PRIMO";
		
		case 157:
			return "BUFFALO";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 161:
			return "SOVEREIGN";
		
		case 160:
			return "MONSTER";
		
		case 162:
			return "MILJET";
		
		case 163:
			return "BESRA";
		
		case 164:
			return "SWIFT";
		
		case 165:
			return "COQUETTE2";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 167:
			return "INNOVATION";
		
		case 168:
			return "HAKUCHOU";
		
		case 169:
			return "FURORE";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 187:
			return "VALKYRIE";
		
		case 177:
			return "HYDRA";
		
		case 185:
			return "SAVAGE";
		
		case 174:
			return "ENDURO";
		
		case 171:
			return "BOXVILLE4";
		
		case 172:
			return "CASCO";
		
		case 173:
			return "DINGHY3";
		
		case 175:
			return "GBURRITO2";
		
		case 176:
			return "GUARDIAN";
		
		case 178:
			return "INSURGENT";
		
		case 179:
			return "INSURGENT2";
		
		case 180:
			return "KURUMA";
		
		case 181:
			return "KURUMA2";
		
		case 182:
			return "LECTRO";
		
		case 183:
			return "MULE3";
		
		case 184:
			return "PBUS";
		
		case 186:
			return "TECHNICAL";
		
		case 188:
			return "VELUM2";
		
		case 189:
			return "GRESLEY";
		
		case 190:
			return "JACKAL";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 193:
			return "NEMESIS";
		
		case 194:
			return "ORACLE1";
		
		case 195:
			return "RUMPO";
		
		case 196:
			return "SCHAFTER2";
		
		case 197:
			return "SEMINOLE";
		
		case 198:
			return "SURGE";
		
		case 199:
			return "DODO";
		
		case 200:
			return "MARSHALL";
		
		case 201:
			return "SUBMERS2";
		
		case 202:
			return "BLISTA2";
		
		case 203:
			return "STALION";
		
		case 204:
			return "DUKES";
		
		case 205:
			return "DUKES2";
		
		case 206:
			return "STALION2";
		
		case 207:
			return "DOMINATOR2";
		
		case 208:
			return "GAUNTLET2";
		
		case 209:
			return "BUFFALO3";
		
		case 210:
			return "SLAMVAN";
		
		case 211:
			return "RLOADER2";
		
		case 212:
			return "JESTER2";
		
		case 213:
			return "MASSACRO2";
		
		case 214:
			return "FELTZER3";
		
		case 215:
			return "LUXOR2";
		
		case 216:
			return "OSIRIS";
		
		case 217:
			return "SWIFT2";
		
		case 218:
			return "VIRGO";
		
		case 219:
			return "WINDSOR";
		
		case 220:
			return "BRAWLER";
		
		case 221:
			return "CHINO";
		
		case 222:
			return "COQUETTE3";
		
		case 223:
			return "T20";
		
		case 224:
			return "TORO";
		
		case 225:
			return "VINDICATOR";
		
		case 229:
			return "PRIMO";
		
		case 228:
			return "MOONBEAM";
		
		case 227:
			return "FACTION";
		
		case 226:
			return "BUCCANEE";
		
		case 230:
			return "VOODOO";
		
		case 231:
			return "BTYPE2";
		
		case 232:
			return "LURCHER";
		
		case 251:
			return "VIRGO3";
		
		case 250:
			return "TORNADO";
		
		case 249:
			return "SABREGT";
		
		case 252:
			return "FACTION";
		
		case 233:
			return "BALLER3";
		
		case 234:
			return "BALLER4";
		
		case 235:
			return "COG55";
		
		case 236:
			return "COGNOSC";
		
		case 237:
			return "LIMO2";
		
		case 238:
			return "MAMBA";
		
		case 239:
			return "NITESHAD";
		
		case 240:
			return "SCHAFTER3";
		
		case 241:
			return "SCHAFTER4";
		
		case 242:
			return "VERLIER";
		
		case 243:
			return "SVOLITO";
		
		case 244:
			return "SVOLITO2";
		
		case 245:
			return "BIG_YACHT";
		
		case 246:
			return "TAMPA";
		
		case 247:
			return "SULTAN";
		
		case 49:
			return "BANSHEE";
		
		case 248:
			return "ROOSEVELT2";
		
		default:
	}
	switch (iParam0)
	{
		case 253:
			return "VOLATUS";
		
		case 254:
			return "CARGOBOB2";
		
		case 255:
			return "RUMPO3";
		
		case 256:
			return "BRICKADE";
		
		case 257:
			return "NIMBUS";
		
		case 259:
			return "WINDSOR2";
		
		case 260:
			return "PROTOTIPO";
		
		case 261:
			return "FMJ";
		
		case 262:
			return "BESTIAGTS";
		
		case 263:
			return "XLS";
		
		case 264:
			return "SEVEN70";
		
		case 265:
			return "PFISTER811";
		
		case 266:
			return "REAPER";
		
		default:
	}
	return "";
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68041;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
	}
	return 0;
}

void func_125(int iParam0, int iParam1, int iParam2)
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
	if (Global_17257.f_5094 >= 128)
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
	if (iVar0 != 4)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 4)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17257.f_4433[Global_17257.f_5094] = iParam1;
	Global_17257.f_5094++;
	if (iParam1 != 0)
	{
		func_101(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_101(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 += fVar3 * 2f;
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
		if (iParam2)
		{
			if (fVar2 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar2;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 4;
}

void func_126(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	auto uVar3;
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
		func_129(Global_17257.f_5088, 1);
	}
	else
	{
		func_129(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_128(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_101(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_127(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_127(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_128(char* sParam0)
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
	func_81(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

void func_130(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	auto uVar4;
	int iVar5;
	char* sVar6;
	int iVar10;
	auto uVar11;
	auto uVar12;
	int iVar13;
	char* sVar14;
	int iVar18;
	auto uVar19;
	auto uVar20;
	
	*uParam1.f_66 = func_124(iParam0, iParam4);
	if (*uParam1.f_66 == 0)
	{
		if (iParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && *uParam1.f_66 == joaat("frogger"))
	{
		*uParam1.f_66 = joaat("frogger2");
		*uParam1.f_5 = 0;
		*uParam1.f_6 = 0;
		*uParam1.f_7 = 0;
		*uParam1.f_8 = 0;
		*uParam1.f_67 = 1;
		return;
	}
	*uParam1.f_77 = 0;
	func_140(iParam0, uParam1.f_77);
	*uParam1.f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		*uParam1.f_9[16] = 4;
	}
	else if (func_139(iParam0))
	{
		if (Global_68316)
		{
			*uParam1.f_9[16] = 4;
		}
	}
	*uParam1.f_9[23] = 0;
	if (iParam0 == 218)
	{
		*uParam1.f_9[23] = 7;
	}
	*uParam1.f_9[48] = 0;
	*uParam1.f_98 = 0;
	if (iParam0 == 251)
	{
		*uParam1.f_98 = 4;
	}
	*uParam1.f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_68316)
		{
			*uParam1.f_65 = 1;
		}
	}
	if (iParam2)
	{
		iVar0 = Global_68315;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_101154.f_29707.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_101154.f_29707.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_101154.f_29707.f_939[iParam0];
	}
	*uParam1.f_5 = 0;
	*uParam1.f_6 = 0;
	*uParam1.f_7 = 0;
	*uParam1.f_8 = 156;
	*uParam1.f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar0)
		{
			case 1:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 2:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 3:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 4:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 5:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 6:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 7:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 8:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 9:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 10:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 11:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 12:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 13:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 14:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 15:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 16:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 17:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 18:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 19:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 20:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 21:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 22:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 23:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 24:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 25:
				func_135(func_136(iParam0, iVar0), uParam1.f_5, uParam1.f_6);
				*uParam1.f_7 = 4;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar0)
		{
			case 1:
				*uParam1.f_5 = 98;
				*uParam1.f_6 = 98;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 1;
				break;
			
			case 2:
				*uParam1.f_5 = 111;
				*uParam1.f_6 = 111;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 2;
				break;
			
			case 3:
				*uParam1.f_5 = 135;
				*uParam1.f_6 = 135;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 3;
				break;
			
			case 4:
				*uParam1.f_5 = 59;
				*uParam1.f_6 = 59;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 8;
				break;
			
			case 5:
				*uParam1.f_5 = 98;
				*uParam1.f_6 = 98;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 4;
				break;
			
			case 6:
				*uParam1.f_5 = 98;
				*uParam1.f_6 = 98;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 5;
				break;
			
			case 7:
				*uParam1.f_5 = 42;
				*uParam1.f_6 = 42;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 7;
				break;
			
			case 8:
				*uParam1.f_5 = 111;
				*uParam1.f_6 = 111;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				if (func_133(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_132(iParam0, iVar0, &uVar1))
						{
							*uParam1.f_9[48] = uVar1;
						}
						else
						{
							*uParam1.f_67 = 0;
						}
					}
					else
					{
						*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 143;
						*uParam1.f_6 = 34;
						*uParam1.f_7 = 31;
						*uParam1.f_96 = 99;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 40;
						*uParam1.f_6 = 40;
						*uParam1.f_96 = 93;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 27;
					*uParam1.f_6 = 36;
					*uParam1.f_67 = -1;
				}
				break;
			
			case 2:
				if (func_133(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_132(iParam0, iVar0, &uVar2))
						{
							*uParam1.f_9[48] = uVar2;
						}
						else
						{
							*uParam1.f_67 = 1;
						}
					}
					else
					{
						*uParam1.f_5 = 0;
						*uParam1.f_6 = 10;
						*uParam1.f_7 = 4;
						*uParam1.f_8 = 156;
						*uParam1.f_67 = func_134(func_136(iParam0, iVar0));
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 8;
						*uParam1.f_6 = 8;
						*uParam1.f_7 = 5;
						*uParam1.f_96 = 106;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 14;
						*uParam1.f_6 = 14;
						*uParam1.f_96 = 108;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 135;
					*uParam1.f_6 = 135;
					*uParam1.f_67 = -1;
				}
				break;
			
			case 3:
				if (func_133(iParam0))
				{
					if (func_132(iParam0, iVar0, &uVar3))
					{
						*uParam1.f_9[48] = uVar3;
					}
					else
					{
						*uParam1.f_67 = 2;
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 100;
						*uParam1.f_6 = 100;
						*uParam1.f_7 = 100;
						*uParam1.f_96 = 22;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 152;
						*uParam1.f_6 = 152;
						*uParam1.f_96 = 22;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 88;
					*uParam1.f_6 = 88;
					*uParam1.f_67 = -1;
				}
				break;
			
			case 4:
				if (func_133(iParam0))
				{
					if (func_132(iParam0, iVar0, &uVar4))
					{
						*uParam1.f_9[48] = uVar4;
					}
					else
					{
						*uParam1.f_67 = 3;
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 99;
						*uParam1.f_6 = 99;
						*uParam1.f_7 = 106;
						*uParam1.f_96 = 101;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 99;
						*uParam1.f_6 = 99;
						*uParam1.f_96 = 48;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 38;
					*uParam1.f_6 = 27;
					while (func_131(iVar5, &sVar6, &iVar10, &uVar11, &uVar12))
					{
						if (are_strings_equal(&sVar6, "ORANGE") && iVar10 == 1)
						{
							*uParam1.f_5 = uVar11;
							*uParam1.f_6 = uVar12;
							iVar5 = -99;
						}
						iVar5++;
					}
					*uParam1.f_67 = -1;
				}
				break;
			
			case 5:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 49;
						*uParam1.f_6 = 49;
						*uParam1.f_7 = 52;
						*uParam1.f_96 = 98;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 128;
						*uParam1.f_6 = 128;
						*uParam1.f_96 = 99;
						*uParam1.f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					*uParam1.f_5 = 152;
					*uParam1.f_6 = 152;
					*uParam1.f_7 = 18;
					*uParam1.f_8 = 152;
				}
				else
				{
					*uParam1.f_5 = 128;
					*uParam1.f_6 = 0;
					while (func_131(iVar13, &sVar14, &iVar18, &uVar19, &uVar20))
					{
						if (are_strings_equal(&sVar14, "LIME_GREEN") && iVar18 == 1)
						{
							*uParam1.f_5 = uVar19;
							*uParam1.f_6 = uVar20;
							iVar13 = -99;
						}
						iVar13++;
					}
					*uParam1.f_67 = -1;
				}
				break;
			
			case 6:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 141;
						*uParam1.f_6 = 141;
						*uParam1.f_7 = 73;
						*uParam1.f_96 = 5;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 84;
						*uParam1.f_6 = 84;
						*uParam1.f_96 = 24;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 64;
					*uParam1.f_6 = 68;
					*uParam1.f_67 = -1;
				}
				break;
			
			case 7:
				if (*uParam1.f_66 == joaat("kuruma2"))
				{
					*uParam1.f_5 = 12;
					*uParam1.f_6 = 12;
					*uParam1.f_7 = 13;
					*uParam1.f_8 = 156;
					*uParam1.f_67 = -1;
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 0;
						*uParam1.f_6 = 0;
						*uParam1.f_7 = 10;
						*uParam1.f_96 = 1;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 12;
						*uParam1.f_6 = 12;
						*uParam1.f_96 = 0;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 0;
					*uParam1.f_6 = 10;
					*uParam1.f_67 = -1;
				}
				break;
			
			case 8:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						*uParam1.f_5 = 112;
						*uParam1.f_6 = 112;
						*uParam1.f_7 = 0;
						*uParam1.f_96 = 7;
						*uParam1.f_67 = -1;
					}
					else
					{
						*uParam1.f_5 = 131;
						*uParam1.f_6 = 131;
						*uParam1.f_96 = 78;
						*uParam1.f_67 = -1;
					}
				}
				else
				{
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 0;
					*uParam1.f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 32:
				*uParam1.f_5 = 111;
				*uParam1.f_6 = 65;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 13:
				*uParam1.f_5 = 46;
				*uParam1.f_6 = 24;
				*uParam1.f_7 = 46;
				*uParam1.f_8 = 24;
				*uParam1.f_67 = -1;
				break;
			
			case 33:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 34:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 35:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 36:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 37:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 38:
				*uParam1.f_5 = 7;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 111;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 206:
				*uParam1.f_5 = 2;
				*uParam1.f_6 = 134;
				*uParam1.f_7 = 134;
				*uParam1.f_8 = 29;
				*uParam1.f_67 = -1;
				break;
			
			case 207:
				*uParam1.f_5 = 134;
				*uParam1.f_6 = 134;
				*uParam1.f_7 = 134;
				*uParam1.f_8 = 126;
				*uParam1.f_67 = -1;
				break;
			
			case 208:
				*uParam1.f_5 = 134;
				*uParam1.f_6 = 134;
				*uParam1.f_7 = 134;
				*uParam1.f_8 = 29;
				*uParam1.f_67 = -1;
				break;
			
			case 209:
				*uParam1.f_5 = 134;
				*uParam1.f_6 = 134;
				*uParam1.f_7 = 134;
				*uParam1.f_8 = 139;
				*uParam1.f_67 = -1;
				break;
			
			case 210:
				*uParam1.f_5 = 28;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 14;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 213:
				*uParam1.f_5 = 38;
				*uParam1.f_6 = 38;
				*uParam1.f_7 = 42;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 212:
				*uParam1.f_5 = 134;
				*uParam1.f_6 = 134;
				*uParam1.f_7 = 134;
				*uParam1.f_8 = 27;
				*uParam1.f_67 = -1;
				break;
			
			case 17:
				*uParam1.f_5 = 30;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 215:
				*uParam1.f_5 = 159;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 160;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 217:
				*uParam1.f_5 = 159;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 160;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 205:
				*uParam1.f_5 = 12;
				*uParam1.f_6 = 12;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 12;
				*uParam1.f_67 = -1;
				break;
			
			case 227:
				*uParam1.f_5 = 0;
				*uParam1.f_6 = 0;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 0;
				*uParam1.f_67 = -1;
				break;
			
			case 226:
				*uParam1.f_5 = 36;
				*uParam1.f_6 = 36;
				*uParam1.f_7 = 0;
				*uParam1.f_8 = 156;
				*uParam1.f_67 = -1;
				break;
			
			case 230:
				*uParam1.f_5 = 41;
				*uParam1.f_6 = 41;
				*uParam1.f_7 = 156;
				*uParam1.f_8 = 0;
				*uParam1.f_67 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		*uParam1.f_5 = 111;
		*uParam1.f_6 = 111;
		*uParam1.f_7 = 111;
		*uParam1.f_8 = 156;
		*uParam1.f_67 = -1;
	}
	if (iParam0 == 231)
	{
		*uParam1.f_5 = 142;
		*uParam1.f_6 = 0;
		*uParam1.f_7 = 145;
		*uParam1.f_8 = 90;
	}
	if (*uParam1.f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		*uParam1.f_67 = 1;
	}
}

int func_131(int iParam0, char* sParam1, auto uParam2, auto uParam3, auto uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

bool func_132(int iParam0, int iParam1, auto uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return true;
				break;
			
			case 2:
				*uParam2 = 1;
				return true;
				break;
			
			case 3:
				*uParam2 = 2;
				return true;
				break;
			
			case 4:
				*uParam2 = 3;
				return true;
				break;
		}
		*uParam2 = -1;
		return false;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return true;
				break;
			
			case 2:
				*uParam2 = 1;
				return true;
				break;
		}
		*uParam2 = -1;
		return false;
	}
	*uParam2 = -1;
	return false;
}

bool func_133(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return true;
	}
	return false;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		default:
	}
	return -1;
}

bool func_135(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return true;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return true;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return true;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return true;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return true;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return true;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return true;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return true;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return true;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return true;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return true;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return true;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return true;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return true;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return true;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return true;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return true;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return true;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return true;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return true;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return true;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return true;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return true;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return true;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return true;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return true;
			break;
	}
	return false;
}

int func_136(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_137(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		default:
	}
	return -1;
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return true;
		}
		return false;
	}
	if (iParam0 == 95)
	{
		if (_0x67A5589628E0CFF6())
		{
			return true;
		}
		return false;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_39() && func_138())
		{
			return true;
		}
		return false;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return true;
	}
	if ((iParam0 == 221 || iParam0 == 135) || iParam0 == 210)
	{
		if (iParam1 == 26)
		{
			return true;
		}
		return false;
	}
	if (func_139(iParam0))
	{
		if (Global_68316)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_138()
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

bool func_139(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return true;
	}
	return false;
}

void func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 64:
			GAMEPLAY::SET_BIT(iParam1, 4);
			break;
		
		case 67:
			GAMEPLAY::SET_BIT(iParam1, 4);
			break;
		
		case 72:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 117:
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			break;
		
		case 49:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 118:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 119:
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			break;
		
		case 77:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 120:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 130:
			GAMEPLAY::SET_BIT(iParam1, false);
			break;
		
		case 132:
			GAMEPLAY::SET_BIT(iParam1, false);
			break;
		
		case 135:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 137:
			GAMEPLAY::SET_BIT(iParam1, false);
			break;
		
		case 141:
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 6);
			break;
		
		case 147:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::SET_BIT(iParam1, 2);
			GAMEPLAY::SET_BIT(iParam1, 3);
			GAMEPLAY::SET_BIT(iParam1, 4);
			GAMEPLAY::SET_BIT(iParam1, 5);
			GAMEPLAY::SET_BIT(iParam1, 6);
			GAMEPLAY::SET_BIT(iParam1, 7);
			GAMEPLAY::SET_BIT(iParam1, 8);
			break;
		
		case 203:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 100:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::SET_BIT(iParam1, 2);
			break;
		
		case 170:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 160:
			GAMEPLAY::SET_BIT(iParam1, 15);
			break;
		
		case 161:
			GAMEPLAY::SET_BIT(iParam1, 15);
			break;
		
		case 192:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 221:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			break;
		
		case 222:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 172:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 165:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 166:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::CLEAR_BIT(iParam1, true);
			break;
		
		case 139:
			GAMEPLAY::SET_BIT(iParam1, false);
			break;
		
		case 104:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 109:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::SET_BIT(iParam1, 2);
			break;
		
		case 227:
		case 252:
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::CLEAR_BIT(iParam1, 2);
			GAMEPLAY::CLEAR_BIT(iParam1, 4);
			break;
		
		case 97:
			GAMEPLAY::SET_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 52:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 108:
			GAMEPLAY::SET_BIT(iParam1, true);
			break;
		
		case 237:
			GAMEPLAY::SET_BIT(iParam1, 9);
			break;
		
		case 238:
			GAMEPLAY::CLEAR_BIT(iParam1, false);
			GAMEPLAY::SET_BIT(iParam1, true);
			GAMEPLAY::SET_BIT(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_68316)
			{
				GAMEPLAY::SET_BIT(iParam1, 9);
			}
			break;
		
		default:
			return;
			break;
	}
}

void func_141(char* sParam0)
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

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_144(int iParam0)
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

void func_145()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_0xFC695459D4D0E219(0.325f, 0.3f);
	}
}

bool func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_76(0))
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (iParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_147(char* sParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_69(&uVar0, 1, iParam1))
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
	iVar2 = func_148(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_148(auto uParam0)
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
						*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_9 = 2;
					}
				}
			}
			else
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
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

void func_149(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_150(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_151(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_65(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_152(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_29707[uParam0], iVar0);
}

int func_153(int iParam0)
{
	int iVar0;
	int[] iVar1 = new int[128];
	
	if (func_156(1, 1))
	{
		if (iVar0 < iVar1 - 1)
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[45 /*6*/], 3))
	{
		if (iVar0 < iVar1 - 1)
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_39() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_155(33, 0) && !func_154(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_101154.f_29598.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_101154.f_29598.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

bool func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_155(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_668.f_780, 2))
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

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_156(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (func_39() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_155(33, 0) && !func_154(1751306471))
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_3)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_4)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_5)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_6)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_158(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= 0f)
		{
			return _0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return _0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return false;
}

int func_159(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_160()
{
	var[] uVar0 = new var[10];
	int iVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	Vector3 vVar15;
	Vector3 vVar18;
	Vector3 vVar21;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	Vector3 vVar30;
	int iVar51;
	float fVar52;
	int iVar53;
	Vector3 vVar54;
	Vector3 vVar57;
	int iVar60;
	Vector3 vVar61;
	int iVar82;
	float fVar83;
	int iVar84;
	int iVar85;
	struct<4> Var86;
	int iVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	int iVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	int iVar281;
	int iVar282;
	
	iVar11 = false;
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_402.f_2 == 0) && Local_402 != -1) && func_63(Local_402, 0)) && func_63(Local_402, 5)) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(5)) && !func_26(14)) && !Global_68058) && !func_159(1)) && !func_218()) || (((Local_402.f_3 > 1 && !func_159(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !func_218()))
	{
		func_217(Local_402, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		vVar15 = {198.3659f, -1020.273f, -100f};
		vVar18 = {vVar15};
		vVar21 = {198.9538f, -1026.13f, -100f};
		iVar24 = func_216(Local_402);
		switch (Local_402.f_3)
		{
			case 0:
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !is_player_switch_in_progress())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && (func_215(get_entity_heading(PLAYER::PLAYER_PED_ID()), Local_402.f_29.f_68, 90f) || is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))) && is_player_control_on(player_id())) && !is_ped_being_jacked(PLAYER::PLAYER_PED_ID())) && !is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) && !get_is_task_active(PLAYER::PLAYER_PED_ID(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_214())
					{
						iVar25 = true;
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
						{
							iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								if (is_vehicle_driveable(iVar12, 0))
								{
									iVar26 = ENTITY::GET_ENTITY_MODEL(iVar12);
									if (((((((((!func_60(iVar26) || func_59(iVar12)) || func_58(iVar12)) || !func_37(iVar26, 0)) || is_big_vehicle(iVar12)) || ((!is_this_model_a_car(iVar26) && !is_this_model_a_bike(iVar26)) && !is_this_model_a_quadbike(iVar26))) || iVar26 == joaat("monster")) || is_entity_on_fire(iVar12)) || is_vehicle_attached_to_trailer(iVar12)) || (is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()) && _get_number_of_instances_of_streamed_script(joaat("taxi_procedural")) > 0))
									{
										iVar25 = false;
									}
								}
								else
								{
									iVar25 = false;
								}
							}
						}
						else if (does_anim_dict_exist(sVar14))
						{
							request_anim_dict(sVar14);
							if (!has_anim_dict_loaded(sVar14))
							{
								iVar25 = false;
							}
						}
						if (iVar25)
						{
							func_151(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!is_help_message_being_displayed() || func_150("WEB_VEH_INV"))
							{
								func_149("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								iVar11 = true;
							}
						}
					}
					else if (!is_help_message_being_displayed() || func_150("WEB_VEH_FULL"))
					{
						func_149("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						iVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_1032 = 0;
						request_anim_dict(sVar14);
						if (has_anim_dict_loaded(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						remove_anim_dict(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (is_vehicle_driveable(iVar12, 0))
						{
							iVar28 = ENTITY::GET_ENTITY_MODEL(iVar12);
							if ((((((((!func_60(iVar28) || func_59(iVar12)) || func_58(iVar12)) || is_big_vehicle(iVar12)) || ((!is_this_model_a_car(iVar28) && !is_this_model_a_bike(iVar28)) && !is_this_model_a_quadbike(iVar28))) || iVar28 == joaat("monster")) || is_entity_on_fire(iVar12)) || is_vehicle_attached_to_trailer(iVar12)) || (is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()) && _get_number_of_instances_of_streamed_script(joaat("taxi_procedural")) > 0))
							{
								iVar27 = 0;
							}
						}
						else
						{
							iVar27 = 0;
						}
					}
				}
				if (((((((((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && (func_215(get_entity_heading(PLAYER::PLAYER_PED_ID()), Local_402.f_29.f_68, 90f) || is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))) && is_player_control_on(player_id())) && func_214()) && !is_ped_being_jacked(PLAYER::PLAYER_PED_ID())) && !is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) && !get_is_task_active(PLAYER::PLAYER_PED_ID(), 2)) && !func_218()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()) || (has_anim_dict_loaded(sVar14) || !does_anim_dict_exist(sVar14)))
					{
						if (func_146(iLocal_656, 1))
						{
							func_65(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_212(47, 0);
						func_207(47, 0);
						Local_402.f_112 = get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
						if (is_valid_interior(Local_402.f_112))
						{
							if (!is_interior_ready(Local_402.f_112))
							{
								if (GAMEPLAY::GET_FRAME_COUNT() % 10 == 0)
								{
									_0x2CA429C029CCF247(Local_402.f_112);
								}
							}
							StringCopy(&Global_32434, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !is_new_load_scene_active())
						{
							if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
							{
								iVar29 = func_205(Local_402);
								func_57(&vVar30, iVar29);
								vVar18 = {vVar30};
								_new_load_scene_start_safe(vVar18, 20f, 0);
							}
							else
							{
								_new_load_scene_start_safe(vVar21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && is_new_load_scene_active())
					{
						new_load_scene_stop();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_65(&iLocal_656);
					remove_anim_dict(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_212(47, 0);
				func_207(47, 0);
				force_cleanup(8);
				Global_68319.f_577 = 1;
				Global_68319.f_578 = {Local_402.f_29.f_55};
				iLocal_1012 = get_player_wanted_level(player_id());
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				set_ped_stealth_movement(PLAYER::PLAYER_PED_ID(), 0, 0);
				set_player_control(player_id(), false, 0);
				display_hud(false);
				display_radar(false);
				set_all_random_peds_flee_this_frame(player_id());
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
					{
						if (func_215(get_entity_heading(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar12, true, true, true, true, true, true, 0, false);
						clear_area_of_objects(Local_546.f_86[0 /*6*/], 20f, 0);
						clear_area_of_projectiles(Local_546.f_86[0 /*6*/], 20f, 0);
						remove_particle_fx_in_range(Local_546.f_86[0 /*6*/], 7f);
						set_entity_coords(iVar12, Local_546.f_86[0 /*6*/], 1, false, 0, 1);
						if (iLocal_1034 && !is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
						{
							set_entity_heading(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2 + 180f);
						}
						else
						{
							set_entity_heading(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
						{
							give_ped_helmet(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
							set_ped_helmet(PLAYER::PLAYER_PED_ID(), 1);
						}
						set_vehicle_on_ground_properly(iVar12);
					}
					set_player_control(player_id(), false, 0);
					func_199(1, 1, 1, 0);
					func_198(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && !ENTITY::IS_ENTITY_DEAD(iLocal_1027, 0))
					{
						if (is_entity_a_mission_entity(iLocal_1027) && does_entity_belong_to_this_script(iLocal_1027, 1))
						{
							set_vehicle_as_no_longer_needed(&iLocal_1027);
						}
					}
					iLocal_1027 = get_players_last_vehicle();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_vehicle_driveable(iLocal_1027, 0)) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iLocal_1027))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iLocal_1027))) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iLocal_1027)))
					{
						if (!is_entity_a_mission_entity(iLocal_1027))
						{
							set_entity_as_mission_entity(iLocal_1027, false, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_vehicle_driveable(iLocal_1027, 0))
						{
							if (!iVar51)
							{
								if (is_entity_in_angled_area(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0))
								{
									iVar51 = true;
								}
							}
							if (!iVar51)
							{
								fVar52 = vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < 5f * 5f)
								{
									iVar51 = true;
								}
							}
							if (iVar51)
							{
								iVar53 = func_45(24);
								if (func_197(&Local_776, 24))
								{
									func_192(&Local_776, func_371());
									if (ENTITY::DOES_ENTITY_EXIST(iVar53))
									{
										delete_vehicle(&iVar53);
									}
								}
								if (Local_402 == 21)
								{
									clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402 == 22)
								{
									clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402 == 23)
								{
									clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								set_vehicle_on_ground_properly(iLocal_1027);
							}
						}
					}
					else
					{
						iLocal_1027 = false;
					}
					vVar54 = {Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f)};
					vVar57 = {Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f)};
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29, vVar54.x, vVar54.y, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, true, 0))
					{
						sLocal_1035 = "";
						switch (get_random_int_in_range(false, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vVar54.x, vVar54.y, Local_402.f_29.f_2, vVar57.x, vVar57.y, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, true, 0))
					{
						sLocal_1035 = "";
						switch (get_random_int_in_range(false, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vVar57.x, vVar57.y, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0))
					{
						sLocal_1035 = "";
						switch (get_random_int_in_range(false, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1035 = "";
						switch (get_random_int_in_range(false, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
							}
					}
					clear_area_of_objects(Local_546.f_73[0 /*4*/], 20f, 0);
					clear_area_of_projectiles(Local_546.f_86[0 /*6*/], 20f, 0);
					set_entity_coords(PLAYER::PLAYER_PED_ID(), Local_546.f_73[0 /*4*/], 1, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = create_synchronized_scene(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1000f, 0);
					func_199(1, 1, 1, 0);
					func_198(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
				if (is_valid_interior(Local_402.f_112))
				{
					if (!is_interior_ready(Local_402.f_112))
					{
						_0x2CA429C029CCF247(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
					{
						iVar60 = func_205(Local_402);
						func_57(&vVar61, iVar60);
						vVar18 = {vVar61};
						_new_load_scene_start_safe(vVar18, 20f, 0);
					}
					else
					{
						_new_load_scene_start_safe(vVar21, 20f, 0);
					}
				}
				GAMEPLAY::SET_BIT(&(Local_674.f_9), 25);
				func_186(198.0043f, -999.7775f, -100f, 50f, 0);
				func_106(Local_402);
				func_106(26);
				func_106(29);
				func_106(32);
				func_106(28);
				func_106(31);
				func_106(34);
				func_106(27);
				func_106(30);
				func_106(33);
				settimera(false);
				iLocal_1033 = 0;
				break;
			
			case 4:
				iVar82 = true;
				if (!is_new_load_scene_active())
				{
				}
				else if (is_new_load_scene_loaded())
				{
				}
				else
				{
					iVar82 = false;
				}
				if (is_valid_interior(Local_402.f_112))
				{
					if (!is_interior_ready(Local_402.f_112))
					{
						_0x2CA429C029CCF247(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
				}
				if (func_185())
				{
				}
				else
				{
					iVar82 = false;
				}
				if (does_cam_exist(Local_402.f_110) && is_cam_rendering(Local_402.f_110))
				{
					if (is_cam_interpolating(Local_402.f_110))
					{
						iVar82 = false;
					}
					if (IntToFloat(timera()) <= Local_546[0 /*15*/].f_14 * 1000f)
					{
						iVar82 = false;
					}
				}
				else if (does_cam_exist(Local_402.f_111) && is_cam_rendering(Local_402.f_111))
				{
					if (is_cam_interpolating(Local_402.f_111))
					{
						iVar82 = false;
					}
					if (IntToFloat(timera()) <= Local_546[0 /*15*/].f_14 * 1000f)
					{
						iVar82 = false;
					}
				}
				else
				{
					iVar82 = false;
				}
				if (is_synchronized_scene_running(iLocal_661))
				{
					fVar83 = get_synchronized_scene_phase(iLocal_661);
					if (fVar83 < 0.4f)
					{
						iVar82 = false;
					}
				}
				if (iVar82)
				{
					do_screen_fade_out(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (is_screen_faded_out())
				{
					iVar84 = AUDIO::GET_SOUND_ID();
					play_sound_frontend(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					set_variable_on_sound(iVar84, "hold", 2250f / 1000f);
					func_199(0, 1, 1, 0);
					render_script_cams(false, false, 3000, 1, 0, 0);
					if (does_cam_exist(Local_402.f_110))
					{
						set_cam_active(Local_402.f_110, false);
						destroy_cam(Local_402.f_110, 0);
					}
					if (does_cam_exist(Local_402.f_111))
					{
						set_cam_active(Local_402.f_111, false);
						destroy_cam(Local_402.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
					{
						set_entity_collision(iLocal_1037, true, 0);
						freeze_entity_position(iLocal_1037, false);
						iLocal_1037 = false;
					}
					clear_player_wanted_level(player_id());
					set_player_control(player_id(), true, 0);
					force_cleanup(8);
					if (is_synchronized_scene_running(iLocal_661))
					{
						detach_synchronized_scene(iLocal_661);
					}
					iLocal_661 = -1;
					AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
					set_entity_coords(PLAYER::PLAYER_PED_ID(), 194.5394f, -1026.32f, -100f, 1, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), 334.1665f);
					freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					settimera(false);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_184(Local_402);
				if (is_screen_faded_out() && timera() > 2250)
				{
					remove_anim_dict(sVar14);
					func_183();
					if (is_new_load_scene_active())
					{
						new_load_scene_stop();
					}
					do_screen_fade_in(800);
					set_player_control(player_id(), true, 0);
					freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
					settimera(false);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_184(Local_402);
				iVar85 = true;
				if (!is_new_load_scene_active())
				{
				}
				else if (is_new_load_scene_loaded())
				{
				}
				else
				{
					iVar85 = false;
				}
				if (is_valid_interior(Local_402.f_112))
				{
					if (!is_interior_ready(Local_402.f_112))
					{
						_0x2CA429C029CCF247(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
				}
				if (func_185())
				{
				}
				else
				{
					iVar85 = false;
				}
				if (does_cam_exist(Local_402.f_110) && is_cam_rendering(Local_402.f_110))
				{
					if (is_cam_interpolating(Local_402.f_110))
					{
						iVar85 = false;
					}
					if (IntToFloat(timera()) <= Local_546[1 /*15*/].f_14 * 1000f)
					{
						iVar85 = false;
					}
				}
				else if (does_cam_exist(Local_402.f_111) && is_cam_rendering(Local_402.f_111))
				{
					if (is_cam_interpolating(Local_402.f_111))
					{
						iVar85 = false;
					}
					if (IntToFloat(timera()) <= Local_546[1 /*15*/].f_14 * 1000f)
					{
						iVar85 = false;
					}
				}
				else
				{
					iVar85 = false;
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					Var86 = {0f, 0f, 0f};
					Var86.f_3 = 0f;
					func_175(PLAYER::PLAYER_PED_ID(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], Local_546[1 /*15*/].f_14 * 1000f - 500f, Var86, 2, &fVar13);
				}
				if (iVar85)
				{
					func_183();
					settimera(false);
					do_screen_fade_out(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				iVar90 = true;
				func_184(Local_402);
				if (IntToFloat(timera()) <= Local_546.f_61[1] * 1000f)
				{
					iVar90 = false;
				}
				if (iVar90)
				{
					func_183();
					func_199(0, 1, 1, 0);
					render_script_cams(false, false, 3000, 1, 0, 0);
					if (does_cam_exist(Local_402.f_110))
					{
						set_cam_active(Local_402.f_110, false);
						destroy_cam(Local_402.f_110, 0);
					}
					if (does_cam_exist(Local_402.f_111))
					{
						set_cam_active(Local_402.f_111, false);
						destroy_cam(Local_402.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
					{
						set_entity_collision(iLocal_1037, true, 0);
						freeze_entity_position(iLocal_1037, false);
						iLocal_1037 = false;
					}
					clear_player_wanted_level(player_id());
					set_player_control(player_id(), true, 0);
					force_cleanup(8);
					if (is_new_load_scene_active())
					{
						new_load_scene_stop();
					}
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
						{
							iVar91 = func_205(Local_402);
							func_57(&Var92, iVar91);
							set_entity_coords(iVar12, Var92, 1, false, 0, 1);
							set_entity_heading(iVar12, Var92.f_3);
							set_vehicle_doors_shut(iVar12, 1);
							set_vehicle_engine_on(iVar12, false, 1, 0);
							set_vehicle_lights(iVar12, 4);
							set_vehicle_indicator_lights(iVar12, 1, 0);
							set_vehicle_indicator_lights(iVar12, 0, 0);
							set_vehicle_radio_enabled(iVar12, 0);
							ENTITY::SET_ENTITY_PROOFS(iVar12, false, false, false, false, false, false, 0, false);
							task_leave_vehicle(PLAYER::PLAYER_PED_ID(), iVar12, 0);
							freeze_entity_position(iVar12, false);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_31(iVar12, &Var113);
							func_107(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_29(iVar91, iVar12, 1);
							func_174(iVar12);
						}
						set_gameplay_cam_relative_heading(0f);
						set_gameplay_cam_relative_pitch(0f, 1f);
					}
					iVar191 = get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar192]) && !PED::IS_PED_INJURED(uVar0[iVar192])) && is_ped_group_member(uVar0[iVar192], get_player_group(player_id())))
						{
							set_entity_coords_no_offset(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					settimera(false);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					do_screen_fade_in(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (timera() < 7000 || !Global_101154.f_18807.f_4800)
				{
					if (!Global_101154.f_18807.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_149("CAR_GAR_05", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_05", 16);
							iVar11 = true;
							if (timera() >= 7000)
							{
								settimera(false);
								iLocal_1013++;
							}
						}
						else if (iLocal_1013 == 1)
						{
							func_149("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							iVar11 = true;
							if (timera() >= 7000)
							{
								settimera(false);
								Global_101154.f_18807.f_4800 = 1;
							}
						}
					}
					else
					{
						func_149("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						iVar11 = true;
					}
				}
				else
				{
					Global_101154.f_18807.f_4800 = 1;
				}
				iVar193 = 0;
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_65(&iLocal_656);
					}
					iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
					{
						if (_is_vehicle_engine_on(iVar12) || is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
						{
							if (!(is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID())))
							{
								if ((((_0x4F8A26A890FD62FB(0, 71) != 0f || is_control_just_pressed(0, 71)) || is_control_pressed(0, 71)) || is_disabled_control_just_pressed(0, 71)) || is_disabled_control_pressed(0, 71))
								{
									iVar193 = 1;
								}
								if ((((_0x4F8A26A890FD62FB(0, 72) != 0f || is_control_just_pressed(0, 72)) || is_control_pressed(0, 72)) || is_disabled_control_just_pressed(0, 72)) || is_disabled_control_pressed(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					request_anim_dict(sVar14);
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_215(get_entity_heading(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_65(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_151(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_146(iLocal_656, 1))
							{
								func_65(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_65(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_173())
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || iLocal_1016)
					{
						settimera(false);
						_new_load_scene_start_safe(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (has_anim_dict_loaded(sVar14))
					{
						sLocal_1035 = "";
						switch (get_random_int_in_range(false, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
						}
						iLocal_661 = create_synchronized_scene(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1000f, 0);
						func_199(1, 1, 1, 0);
						func_198(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						set_player_control(player_id(), false, 0);
						_new_load_scene_start_safe(Local_546.f_73[2 /*4*/], 20f, 0);
						settimera(false);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!does_anim_dict_exist(sVar14))
					{
						set_entity_coords(PLAYER::PLAYER_PED_ID(), Local_546.f_73[1 /*4*/], 1, false, 0, 1);
						set_entity_heading(PLAYER::PLAYER_PED_ID(), Local_546.f_73[1 /*4*/].f_3);
						func_199(1, 1, 1, 0);
						func_198(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						set_player_control(player_id(), false, 0);
						_new_load_scene_start_safe(Local_546.f_73[2 /*4*/], 20f, 0);
						settimera(false);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				iVar194 = true;
				if (!is_new_load_scene_active())
				{
				}
				else if (is_new_load_scene_loaded())
				{
				}
				else
				{
					iVar194 = false;
				}
				if (func_185())
				{
				}
				else
				{
					iVar194 = false;
				}
				if (does_cam_exist(Local_402.f_110) && is_cam_rendering(Local_402.f_110))
				{
					if (is_cam_interpolating(Local_402.f_110))
					{
						iVar194 = false;
					}
					if (IntToFloat(timera()) <= Local_546[2 /*15*/].f_14 * 1000f)
					{
						iVar194 = false;
					}
				}
				else if (does_cam_exist(Local_402.f_111) && is_cam_rendering(Local_402.f_111))
				{
					if (is_cam_interpolating(Local_402.f_111))
					{
						iVar194 = false;
					}
					if (IntToFloat(timera()) <= Local_546[2 /*15*/].f_14 * 1000f)
					{
						iVar194 = false;
					}
				}
				else
				{
					iVar194 = false;
				}
				if (is_synchronized_scene_running(iLocal_661))
				{
					fVar195 = get_synchronized_scene_phase(iLocal_661);
					if (fVar195 < 0.4f)
					{
						iVar194 = false;
					}
				}
				if (iVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					do_screen_fade_out(800);
					settimera(false);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (timera() > 500)
				{
					iVar196 = func_172();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_107(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_109(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_377(iVar196, 0);
							func_109(iVar196);
						}
					}
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					set_ped_stealth_movement(PLAYER::PLAYER_PED_ID(), 0, 0);
					set_player_control(player_id(), false, 0);
					remove_anim_dict(sVar14);
					do_screen_fade_out(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (is_screen_faded_out())
				{
					iVar275 = AUDIO::GET_SOUND_ID();
					play_sound_frontend(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					set_variable_on_sound(iVar275, "hold", 2250f / 1000f);
					render_script_cams(false, false, 3000, 1, 0, 0);
					if (does_cam_exist(Local_402.f_110))
					{
						set_cam_active(Local_402.f_110, false);
						destroy_cam(Local_402.f_110, 0);
					}
					if (does_cam_exist(Local_402.f_111))
					{
						set_cam_active(Local_402.f_111, false);
						destroy_cam(Local_402.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
					{
						set_entity_collision(iLocal_1037, true, 0);
						freeze_entity_position(iLocal_1037, false);
						iLocal_1037 = false;
					}
					clear_player_wanted_level(player_id());
					force_cleanup(8);
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
							{
								AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								set_entity_coords(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, false, 0, 1);
								set_entity_heading(iVar12, Local_402.f_29.f_77[1]);
								set_vehicle_on_ground_properly(iVar12);
							}
						}
					}
					else
					{
						if (is_synchronized_scene_running(iLocal_661))
						{
							detach_synchronized_scene(iLocal_661);
						}
						iLocal_661 = -1;
						AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
						set_entity_coords(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_70[1 /*3*/], 1, false, 0, 1);
						set_entity_heading(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_77[1]);
					}
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					settimera(false);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (is_screen_faded_out() && timera() > 2250)
				{
					iVar276 = true;
					if (iLocal_1016)
					{
						STREAMING::REQUEST_MODEL(iLocal_1017);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_1017))
						{
							iVar277 = create_vehicle(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, true);
							if (iLocal_1017 == joaat("windsor"))
							{
								set_vehicle_livery(iVar277, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar277) && is_vehicle_driveable(iVar277, 0))
							{
								set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iVar277, -1);
								set_vehicle_dirt_level(iVar277, 0f);
								set_model_as_no_longer_needed(iLocal_1017);
								if (func_110(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											set_vehicle_livery(iVar277, iLocal_651);
											break;
										}
								}
								set_vehicle_as_no_longer_needed(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							iVar276 = false;
						}
					}
					if (!is_new_load_scene_active())
					{
					}
					else if (is_new_load_scene_loaded())
					{
					}
					else
					{
						iVar276 = false;
					}
					if (iVar276)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_vehicle_driveable(iLocal_1027, 0))
						{
							iVar278 = func_45(24);
							if (func_197(&Local_776, 24))
							{
								func_192(&Local_776, func_371());
								if (ENTITY::DOES_ENTITY_EXIST(iVar278))
								{
									delete_vehicle(&iVar278);
								}
							}
							if (Local_402 == 21)
							{
								clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								set_entity_coords(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
								set_entity_heading(iLocal_1027, 154.4846f);
								func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402 == 22)
							{
								clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								set_entity_coords(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
								set_entity_heading(iLocal_1027, 319.6985f);
								func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402 == 23)
							{
								clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								set_entity_coords(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
								set_entity_heading(iLocal_1027, 270.8741f);
								func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							set_vehicle_on_ground_properly(iLocal_1027);
						}
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
							{
								set_entity_coords(iVar12, Local_546.f_66[1 /*3*/], 1, false, 0, 1);
								set_entity_heading(iVar12, Local_402.f_29.f_77[0]);
								set_vehicle_on_ground_properly(iVar12);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									_0x428BACCDF5E26EAD(iVar12, false);
								}
								else
								{
									_0x428BACCDF5E26EAD(iVar12, true);
								}
								if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
								{
									give_ped_helmet(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
									set_ped_helmet(PLAYER::PLAYER_PED_ID(), 1);
								}
								set_vehicle_radio_enabled(iVar12, 1);
								func_166(func_371(), &iVar12, 3, 1);
							}
							do_screen_fade_in(800);
							func_199(1, 1, 1, 0);
							func_198(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							remove_anim_dict(sVar14);
							func_183();
							render_script_cams(false, false, 3000, 1, 0, 0);
							if (does_cam_exist(Local_402.f_110))
							{
								set_cam_active(Local_402.f_110, false);
								destroy_cam(Local_402.f_110, 0);
							}
							if (does_cam_exist(Local_402.f_111))
							{
								set_cam_active(Local_402.f_111, false);
								destroy_cam(Local_402.f_111, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
							{
								set_entity_collision(iLocal_1037, true, 0);
								freeze_entity_position(iLocal_1037, false);
								iLocal_1037 = false;
							}
							clear_player_wanted_level(player_id());
							set_player_control(player_id(), true, 0);
							force_cleanup(8);
							AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
							set_entity_coords(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_70[1 /*3*/], 1, false, 0, 1);
							set_entity_heading(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_77[1]);
							do_screen_fade_in(800);
							settimera(false);
							func_186(198.0043f, -999.7775f, -100f, 50f, 0);
							set_player_control(player_id(), true, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							set_player_control(player_id(), false, 0);
						}
						display_hud(false);
						display_radar(false);
						settimera(false);
						set_gameplay_cam_relative_heading(0f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						iVar279 = get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
						iVar280 = false;
						while (iVar280 < iVar279)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar280]) && !PED::IS_PED_INJURED(uVar0[iVar280])) && is_ped_group_member(uVar0[iVar280], get_player_group(player_id())))
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0)) && get_vehicle_max_number_of_passengers(iVar12) > iVar280)
									{
										set_ped_into_vehicle(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									set_entity_coords_no_offset(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						force_cleanup(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				iVar281 = true;
				if (!is_new_load_scene_active())
				{
				}
				else if (is_new_load_scene_loaded())
				{
				}
				else
				{
					iVar281 = false;
				}
				if (func_185())
				{
				}
				else
				{
					iVar281 = false;
				}
				if (does_cam_exist(Local_402.f_110) && is_cam_rendering(Local_402.f_110))
				{
					if (is_cam_interpolating(Local_402.f_110))
					{
						iVar281 = false;
					}
					if (IntToFloat(timera()) <= Local_546[3 /*15*/].f_14 * 1000f)
					{
						iVar281 = false;
					}
				}
				else if (does_cam_exist(Local_402.f_111) && is_cam_rendering(Local_402.f_111))
				{
					if (is_cam_interpolating(Local_402.f_111))
					{
						iVar281 = false;
					}
					if (IntToFloat(timera()) <= Local_546[3 /*15*/].f_14 * 1000f)
					{
						iVar281 = false;
					}
				}
				else
				{
					iVar281 = false;
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_175(PLAYER::PLAYER_PED_ID(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], Local_546[3 /*15*/].f_14 * 1000f - 500f, Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_165(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_186(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1036++;
				}
				if (iVar281)
				{
					settimera(false);
					Local_402.f_3 = 16;
				}
				else
				{
					set_player_control(player_id(), false, 0);
				}
				break;
			
			case 16:
				iVar282 = true;
				if (IntToFloat(timera()) <= Local_546.f_61[3] * 1000f)
				{
					iVar282 = false;
				}
				if (iVar282)
				{
					Local_402.f_3 = 17;
				}
				break;
			
			case 17:
				if (is_valid_interior(Local_402.f_112))
				{
					unpin_interior(Local_402.f_112);
				}
				StringCopy(&Global_32434, "", 32);
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				func_164(47, 1);
				func_162(47, 1);
				Global_68319.f_577 = 0;
				if (is_screen_faded_out() || is_screen_fading_out())
				{
					do_screen_fade_in(250);
				}
				settimera(false);
				render_script_cams(false, false, 3000, 1, 0, 0);
				if (does_cam_exist(Local_402.f_110))
				{
					set_cam_active(Local_402.f_110, false);
					destroy_cam(Local_402.f_110, 0);
				}
				if (does_cam_exist(Local_402.f_111))
				{
					set_cam_active(Local_402.f_111, false);
					destroy_cam(Local_402.f_111, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
				{
					set_entity_collision(iLocal_1037, true, 0);
					freeze_entity_position(iLocal_1037, false);
					iLocal_1037 = false;
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar12 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && is_vehicle_driveable(iVar12, 0))
					{
						set_entity_coords(iVar12, Local_546.f_73[2 /*4*/], 1, false, 0, 1);
						set_entity_heading(iVar12, Local_546.f_73[2 /*4*/].f_3);
						set_vehicle_on_ground_properly(iVar12);
						set_gameplay_cam_relative_heading(0f);
						set_gameplay_cam_relative_pitch(0f, 1f);
					}
				}
				display_hud(true);
				display_radar(true);
				func_199(0, 1, 1, 0);
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				set_player_control(player_id(), true, 0);
				if (iLocal_1012 > 0)
				{
					set_player_wanted_level(player_id(), iLocal_1012, 0);
					set_player_wanted_level_now(player_id(), 0);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_entity_a_mission_entity(iLocal_1027)) && does_entity_belong_to_this_script(iLocal_1027, 0)) && iLocal_1027 != func_45(24))
				{
					set_vehicle_as_no_longer_needed(&iLocal_1027);
				}
				GAMEPLAY::CLEAR_BIT(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (is_screen_faded_in())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_68319.f_577)
		{
			func_164(47, 1);
			func_162(47, 1);
			Global_68319.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_65(&iLocal_656);
		}
	}
	if (Global_68319.f_577)
	{
		_disable_radar_this_frame();
		func_161();
		func_72();
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		set_input_exclusive(2, 202);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 157, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 158, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 159, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 160, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 161, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 162, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 163, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 164, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 165, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 14, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 15, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 53, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 54, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 38, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 46, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	}
	if (!iVar11 && Local_402.f_2 == 0)
	{
		if (is_help_message_being_displayed())
		{
			if (!is_string_null_or_empty(&cLocal_1023))
			{
				if ((((func_150("WEB_VEH_INV") || func_150("WEB_VEH_FULL")) || func_150("CAR_GAR_05")) || func_150("CAR_GAR_06")) || func_150("CAR_GAR_EXIT"))
				{
					clear_help(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_161()
{
	Global_17118.f_6 = 1;
}

void func_162(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = {func_163(iParam0)};
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31492[Var0.f_1]), Var0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31492[Var0.f_1]), Var0);
	}
}

struct<2> func_163(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 4)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = iVar0 - Var3.f_1 * 32;
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_164(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = {func_163(iParam0)};
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31487[Var0.f_1]), Var0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31487[Var0.f_1]), Var0);
	}
}

auto func_165(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar6;
	
	if ((func_24(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && is_vehicle_driveable(*iParam1, 0))
	{
		if (iParam2 > Global_101154.f_1826.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_30(*iParam1, iParam0);
		}
		if (get_num_mod_kits(*iParam1) != 0)
		{
			set_vehicle_mod_kit(*iParam1, 0);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (get_vehicle_trailer_vehicle(*iParam1, &iVar1))
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = get_vehicle_dirt_level(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = get_entity_health(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = is_vehicle_extra_turned_on(*iParam1, 1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = is_vehicle_extra_turned_on(*iParam1, 2);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = is_vehicle_extra_turned_on(*iParam1, 3);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = is_vehicle_extra_turned_on(*iParam1, 4);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = is_vehicle_extra_turned_on(*iParam1, 5);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = is_vehicle_extra_turned_on(*iParam1, 6);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = is_vehicle_extra_turned_on(*iParam1, 7);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = is_vehicle_extra_turned_on(*iParam1, 8);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = is_vehicle_extra_turned_on(*iParam1, 9);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = is_vehicle_extra_turned_on(*iParam1, 10);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = is_vehicle_extra_turned_on(*iParam1, 11);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = is_vehicle_extra_turned_on(*iParam1, 12);
		if (is_vehicle_a_convertible(*iParam1, 0))
		{
			iVar2 = get_convertible_roof_state(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = get_player_radio_station_index();
		StringCopy(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), get_vehicle_number_plate_text(*iParam1), 16);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = get_vehicle_number_plate_text_index(*iParam1);
		get_vehicle_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		get_vehicle_extra_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		get_vehicle_tyre_smoke_color(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = get_vehicle_tyres_can_burst(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = get_vehicle_window_tint(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = get_vehicle_livery(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = get_vehicle_wheel_type(*iParam1);
		_get_vehicle_neon_lights_colour(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (_is_vehicle_neon_light_enabled(*iParam1, 2))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 3))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 0))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 1))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101154.f_1826.f_539.f_3545[iParam0] = 10;
		if ((get_vehicle_mod_kit(*iParam1) >= 0 && get_vehicle_mod_kit(*iParam1) < 255) && func_169(*iParam1, 0, &uVar0))
		{
			func_33(iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (iParam3)
			{
				Global_101154.f_24643[iParam0 /*43*/].f_40 = 1;
				Global_101154.f_24643[iParam0 /*43*/] = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101154.f_24643[iParam0 /*43*/].f_3 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101154.f_24643[iParam0 /*43*/].f_4 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101154.f_24643[iParam0 /*43*/].f_5 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101154.f_24643[iParam0 /*43*/].f_6 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101154.f_24643[iParam0 /*43*/].f_10 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101154.f_24643[iParam0 /*43*/].f_16 = !Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101154.f_24643[iParam0 /*43*/].f_19 = {Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27};
				Global_101154.f_24643[iParam0 /*43*/].f_23 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101154.f_24643[iParam0 /*43*/].f_7 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101154.f_24643[iParam0 /*43*/].f_8 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101154.f_24643[iParam0 /*43*/].f_9 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101154.f_24643[iParam0 /*43*/].f_11 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101154.f_24643[iParam0 /*43*/].f_12 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101154.f_24643[iParam0 /*43*/].f_13 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101154.f_24643[iParam0 /*43*/].f_14 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101154.f_24643[iParam0 /*43*/].f_15 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101154.f_24643[iParam0 /*43*/].f_18 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101154.f_24643[iParam0 /*43*/].f_17 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101154.f_24643[iParam0 /*43*/].f_24 = get_num_vehicle_mods(*iParam1, 11) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_25 = get_num_vehicle_mods(*iParam1, 12) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_26 = get_num_vehicle_mods(*iParam1, 4) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_27 = get_num_vehicle_mods(*iParam1, 23) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_28 = get_num_vehicle_mods(*iParam1, 14) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_29 = get_num_vehicle_mods(*iParam1, 16) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_30 = get_num_vehicle_mods(*iParam1, 15) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_32 = _0xEEBFC7A7EFDC35B4(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = get_vehicle_default_horn(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[1] = get_vehicle_mod_modifier_value(*iParam1, 14, 0);
				Global_101154.f_24643[iParam0 /*43*/].f_33[2] = get_vehicle_mod_modifier_value(*iParam1, 14, 1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[3] = get_vehicle_mod_modifier_value(*iParam1, 14, 2);
				Global_101154.f_24643[iParam0 /*43*/].f_33[4] = get_vehicle_mod_modifier_value(*iParam1, 14, 3);
				Global_101154.f_24643[iParam0 /*43*/].f_39 = get_vehicle_mod_kit_type(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_31 = func_168(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = _0xACB5DCCA1EC76840(*iParam1);
				get_vehicle_mod_color_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_167(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101154.f_24643[iParam0 /*43*/].f_1));
				get_vehicle_mod_color_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_167(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101154.f_24643[iParam0 /*43*/].f_2));
			}
		}
	}
}

bool func_167(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_131(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!iParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return true;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return false;
}

float func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_vehicle_mod_kit(iParam0) >= 0) && get_vehicle_mod_kit(iParam0) < 255)
	{
		if (get_vehicle_mod_kit_type(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 0)
		{
			if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = to_float(iVar5) / to_float(iVar4);
	return fVar6;
}

bool func_169(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	if (!is_model_a_vehicle(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_170(iVar0, iParam1, uParam2))
	{
		return false;
	}
	if (is_big_vehicle(iParam0))
	{
		*uParam2 = 2;
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_58(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_170(int iParam0, int iParam1, auto uParam2)
{
	if (!iParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((!is_this_model_a_car(iParam0) && !is_this_model_a_bike(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return false;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_171(iParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_171(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return true;
			break;
	}
	return false;
}

int func_172()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0))
		{
			if (iVar0 == Global_68319.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_68319.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_68319.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_68319.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_68319.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_68319.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_68319.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_68319.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_68319.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_68319.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_68319.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_68319.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

int func_173()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_174(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && iParam0 == Global_69224)
	{
		Global_101154.f_18807.f_5588 = 0;
		Global_69224 = 0;
	}
}

bool func_175(int iParam0, struct<4> Param1, auto uParam2, auto uParam3, Vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;
	Vector3 vVar13;
	Vector3 fVar16;
	float fVar17;
	float fVar18;
	
	vVar0 = {Param1};
	vVar3 = {Param1.f_3};
	vVar6 = {vParam7};
	vVar9 = {Param1.f_3};
	if (iLocal_1033 == 0)
	{
		iVar12 = get_vehicle_ped_is_in(iParam0, 0);
		iLocal_1037 = iVar12;
		set_vehicle_doors_shut(iLocal_1037, 1);
		set_vehicle_doors_locked(iLocal_1037, 1);
		set_vehicle_on_ground_properly(iLocal_1037);
		set_vehicle_engine_on(iLocal_1037, true, 1, 0);
		if (is_ped_on_any_bike(iParam0))
		{
			give_ped_helmet(iParam0, 0, 0, -1);
			set_ped_helmet(iParam0, 1);
		}
		vVar13 = {ENTITY::GET_ENTITY_COORDS(iLocal_1037, 1)};
		fLocal_1038 = vVar13.z - vVar0.z;
		set_entity_coords(iLocal_1037, vVar0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (is_vehicle_driveable(iLocal_1037, 0))
		{
			set_vehicle_lights(iLocal_1037, 3);
		}
		iLocal_1039 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037) && is_vehicle_driveable(iLocal_1037, 0))
		{
			fVar16 = to_float(iLocal_1039);
			fVar17 = fVar16 + fParam10;
			fVar18 = func_182(to_float(GAMEPLAY::GET_GAME_TIMER()), fVar16, fVar17);
			fVar18 -= fVar16;
			fVar18 /= fParam10;
			if (iParam15 == 1)
			{
				fVar18 = func_181(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_180(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_178(fVar18);
			}
			fVar18 *= fParam10;
			fVar18 += fVar16;
			CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
			set_entity_coords_no_offset(iLocal_1037, func_176(vVar0 + Vector(fLocal_1038, 0f, 0f), vVar6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !is_ped_on_any_bike(iParam0))
			{
				set_entity_rotation(iLocal_1037, func_176(0f - vVar3.x, 0f - vVar3.y, vVar3.z + 180f, 0f - vVar9.x, 0f - vVar9.y, vVar9.z + 180f, fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (is_ped_on_any_bike(iParam0))
					{
						set_ped_reset_flag(iParam0, 236, true);
						set_ped_reset_flag(iParam0, 309, true);
					}
				}
				set_entity_rotation(iLocal_1037, func_176(vVar3, vVar9, fVar16, fVar17, fVar18), 2, 1);
			}
			set_entity_collision(iLocal_1037, false, 0);
			freeze_entity_position(iLocal_1037, true);
		}
		else
		{
			iLocal_1033 = 2;
			return false;
		}
		if (to_float(GAMEPLAY::GET_GAME_TIMER()) > to_float(iLocal_1039) + fParam10 && to_float(GAMEPLAY::GET_GAME_TIMER()) > to_float(iLocal_1039) + fParam10 + 2600f)
		{
			iLocal_1033 = 2;
			return false;
		}
	}
	if (iLocal_1033 == 2)
	{
		set_ped_reset_flag(iParam0, 236, false);
		set_ped_reset_flag(iParam0, 309, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1037))
		{
			if (!func_20(Param11, 0f, 0f, 0f, 0))
			{
				set_entity_coords(iLocal_1037, Param11, 1, false, 0, 1);
				set_entity_heading(iLocal_1037, Param11.f_3);
				set_vehicle_on_ground_properly(iLocal_1037);
			}
			set_entity_collision(iLocal_1037, true, 0);
			freeze_entity_position(iLocal_1037, false);
			iLocal_1037 = false;
		}
		if (is_ped_on_any_bike(iParam0))
		{
			remove_ped_helmet(iParam0, 0);
		}
		return true;
	}
	return false;
}

Vector3 func_176(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, float fParam3, float fParam4)
{
	return func_177(vParam0.x, vParam3.x, fParam6, fParam7, fParam8), func_177(vParam0.y, vParam3.y, fParam6, fParam7, fParam8), func_177(vParam0.z, vParam3.z, fParam6, fParam7, fParam8);
}

float func_177(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return fParam1 - fParam0 / fParam3 - fParam2 * fParam4 - fParam2 + fParam0;
}

auto func_178(float fParam0)
{
	Vector3 fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = sin(func_179(fParam0 * 3.141593f * 0.5f));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_179(float fParam0)
{
	return fParam0 * 57.29578f;
}

float func_180(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = 1f - cos(func_179(fParam0 * 3.141593f * 0.5f));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_181(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = 0.5f * 1f - cos(func_179(fParam0 * 3.141593f));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_182(Vector3 fParam0, Vector3 fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_183()
{
	Global_68319.f_553 = 1;
	Global_68319.f_554 = 0;
}

void func_184(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = 9 + iVar2 - 21;
		if (iVar0 > 0)
		{
			iVar2 += 2 + iVar0 * 3;
			iVar1 = 9 + iVar2 - 21 - 2;
		}
		iLocal_117[iVar2] = Global_101154.f_18807.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_48[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_117[iVar2]);
				GAMEPLAY::SET_BIT(&(uLocal_48[iVar2]), 2);
				func_375(iVar2);
			}
		}
		iVar0++;
	}
}

int func_185()
{
	return !Global_68319.f_553;
}

void func_186(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_57(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_187(iVar0);
			}
		}
		iVar0++;
	}
}

void func_187(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_139[iParam0], 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
				delete_vehicle(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_63(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_188(0, Global_68319.f_555[0 /*21*/].f_12) || !func_188(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_108(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_377(iParam0, 0);
		}
	}
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_37(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

auto func_189(auto uParam0)
{
	return *uParam0;
}

void func_190(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_191(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_31(iParam0, &Var0);
		if (func_20(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = get_hash_key(get_this_script_name());
			}
		}
		func_107(iParam5, &Var0, vParam1, fParam4, func_42(iParam0));
		func_29(iParam5, iParam0, 0);
	}
}

void func_191(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_109(iParam0);
	func_377(iParam0, 0);
}

bool func_192(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_36(*uParam0.f_66))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_69225))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return false;
			break;
	}
	if (!func_188(0, iParam1))
	{
		Global_101154.f_18807.f_5592[iVar0] = 0;
	}
	else if (!func_188(1, iParam1))
	{
		Global_101154.f_18807.f_5592[iVar0] = 1;
	}
	func_193(iParam1, get_display_name_from_vehicle_model(*uParam0.f_66));
	func_108(uParam0, &(Global_101154.f_18807.f_5038[iVar0 /*157*/][Global_101154.f_18807.f_5592[iVar0] /*78*/]));
	Global_101154.f_18807.f_5592[iVar0]++;
	if (Global_101154.f_18807.f_5592[iVar0] >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		Global_101154.f_18807.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90747[iVar0 /*98*/] == *uParam0.f_66 && are_strings_equal(&(Global_90747[iVar0 /*98*/].f_27), uParam0.f_1))
		{
			Global_90747[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return true;
}

void func_193(int iParam0, char* sParam1)
{
	if (!func_24(iParam0))
	{
		return;
	}
	if (!Global_101154.f_18807.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_194("IMPOUND_HELPM", sParam1, 2, get_random_int_in_range(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_194("IMPOUND_HELPF", sParam1, 2, get_random_int_in_range(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_194("IMPOUND_HELPT", sParam1, 2, get_random_int_in_range(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_101154.f_18807.f_5596[iParam0] = 1;
	}
}

void func_194(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_195(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_195(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_196();
	}
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_197(auto uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (!func_57(&(Global_68319.f_555[0 /*21*/]), iParam1))
	{
		return false;
	}
	else
	{
		func_108(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return true;
}

bool func_198(auto uParam0, auto uParam1, auto uParam2)
{
	if (does_cam_exist(*uParam1))
	{
		destroy_cam(*uParam1, 0);
	}
	if (does_cam_exist(*uParam2))
	{
		destroy_cam(*uParam2, 0);
	}
	*uParam1 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	if (does_cam_exist(*uParam1) && does_cam_exist(*uParam2))
	{
		set_cam_coord(*uParam1, *uParam0);
		set_cam_rot(*uParam1, *uParam0.f_3, 2);
		set_cam_fov(*uParam1, *uParam0.f_12);
		set_cam_coord(*uParam2, *uParam0.f_6);
		set_cam_rot(*uParam2, *uParam0.f_6.f_3, 2);
		set_cam_fov(*uParam2, *uParam0.f_12);
		shake_cam(*uParam1, "HAND_SHAKE", *uParam0.f_13);
		shake_cam(*uParam2, "HAND_SHAKE", *uParam0.f_13);
		if (*uParam0.f_14 > 0.1f)
		{
			set_cam_active_with_interp(*uParam2, *uParam1, round(*uParam0.f_14 * 1000f), 1, 1);
		}
		else
		{
			set_cam_active(*uParam1, true);
		}
		render_script_cams(true, false, 3000, 1, 0, 0);
		return true;
	}
	return false;
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_204(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_74())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_203(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_204(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_203(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_201(player_id())) && !func_86(player_id(), 0)) && !func_200())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_201(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_200()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_201(int iParam0)
{
	if (func_86(iParam0, 0))
	{
		return true;
	}
	if (func_202())
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

int func_202()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_203(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_204(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

int func_205(int iParam0)
{
	func_57(&(Global_68319.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(26))
			{
				return 26;
			}
			if (!func_206(29))
			{
				return 29;
			}
			if (!func_206(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(27))
			{
				return 27;
			}
			if (!func_206(30))
			{
				return 30;
			}
			if (!func_206(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(28))
			{
				return 28;
			}
			if (!func_206(31))
			{
				return 31;
			}
			if (!func_206(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	return func_63(iParam0, 0);
}

void func_207(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_209(iParam0, &iVar1);
	if (!are_strings_equal("NONE", sVar0) && iVar1 != 0)
	{
		if (iParam1)
		{
			if (is_interior_disabled(iVar1))
			{
				return;
			}
			if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_162(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!is_interior_disabled(iVar1))
			{
				return;
			}
			if (func_208(iParam0))
			{
				func_162(iParam0, 0);
			}
		}
		disable_interior(iVar1, iParam1);
		if (iParam1)
		{
		}
	}
}

bool func_208(int iParam0)
{
	struct<2> Var0;
	
	Var0 = {func_163(iParam0)};
	if (GAMEPLAY::IS_BIT_SET(Global_31492[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

auto func_209(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = {func_210(iParam0)};
	*iParam1 = get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_210(int iParam0)
{
	struct<5> Var0;
	Vector3 vVar5;
	
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
			vVar5 = {func_211(1)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = {func_211(2)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = {func_211(3)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = {func_211(4)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = {func_211(5)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = {func_211(6)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = {func_211(7)};
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
			vVar5 = {func_211(35)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = {func_211(36)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = {func_211(37)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = {func_211(38)};
			Var0 = {-20.1f, -580.8f, 91.3f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = {func_211(39)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = {func_211(40)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = {func_211(41)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = {func_211(42)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = {func_211(43)};
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
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = {func_211(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = {func_211(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = {func_211(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = {func_211(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_211(int iParam0)
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

void func_212(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_209(iParam0, &iVar1);
	if (!are_strings_equal("NONE", sVar0) && iVar1 != 0)
	{
		if (iParam1 && !is_interior_capped(iVar1))
		{
			if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_164(iParam0, 1);
				return;
			}
			cap_interior(iVar1, 1);
		}
		else if (!iParam1 && is_interior_capped(iVar1))
		{
			if (func_213(iParam0))
			{
				func_164(iParam0, 0);
			}
			cap_interior(iVar1, 0);
		}
		else if (!iParam1)
		{
			if (func_213(iParam0))
			{
				func_164(iParam0, 0);
			}
		}
	}
}

bool func_213(int iParam0)
{
	struct<2> Var0;
	
	Var0 = {func_163(iParam0)};
	if (GAMEPLAY::IS_BIT_SET(Global_31487[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

bool func_214()
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || func_205(Local_402) != -1)
	{
		return true;
	}
	return false;
}

bool func_215(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f)
	{
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f)
	{
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

bool func_217(int iParam0, auto uParam1)
{
	*(uParam1.f_73[1 /*4*/]) = {194.674f, -1026.984f, -100f};
	*(uParam1.f_73[1 /*4*/]).f_3 = 285f;
	*(uParam1[2 /*15*/]) = {198.9908f, -1025.956f, -98.8981f};
	*(uParam1[2 /*15*/].f_3) = {-4.5679f, -0.0266f, 110.7275f};
	*(uParam1[2 /*15*/].f_6) = {198.6016f, -1026.103f, -98.9313f};
	*(uParam1[2 /*15*/].f_6.f_3) = {-5.3499f, -0.0266f, 110.7275f};
	*(uParam1[2 /*15*/]).f_12 = 25.2218f;
	*(uParam1[2 /*15*/]).f_13 = 0.2f;
	*(uParam1[2 /*15*/]).f_14 = 3.5f;
	*uParam1.f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = {-84.4891f, 95.2463f, 72.7397f};
			*(uParam1[0 /*15*/].f_3) = {-1.0236f, 0.0007f, -126.7439f};
			*(uParam1[0 /*15*/].f_6) = {-84.1568f, 94.9229f, 72.7318f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-1.0236f, 0.0007f, -127.1499f};
			*(uParam1[0 /*15*/]).f_12 = 25.1687f;
			*(uParam1[0 /*15*/]).f_13 = 0.2f;
			*(uParam1[0 /*15*/]).f_14 = 3.5f;
			*uParam1.f_61[0] = 0f;
			*(uParam1.f_73[0 /*4*/]) = {-62.5434f, 80.2917f, 70.5644f};
			*(uParam1.f_73[0 /*4*/]).f_3 = 345f;
			*(uParam1[1 /*15*/]) = {-61.075f, 81.2555f, 84.5867f};
			*(uParam1[1 /*15*/].f_3) = {-69.9271f, 0f, 103.892f};
			*(uParam1[1 /*15*/].f_6) = {-60.6284f, 81.2036f, 84.5867f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-73.4239f, 0f, 108.7693f};
			*(uParam1[1 /*15*/]).f_12 = 29.9579f;
			*(uParam1[1 /*15*/]).f_13 = 0.2f;
			*(uParam1[1 /*15*/]).f_14 = 3f;
			*uParam1.f_61[1] = 1f;
			*(uParam1.f_66[0 /*3*/]) = {-60.3859f, 78.4352f, 70.5249f};
			*(uParam1.f_86[0 /*6*/]) = {-67.0129f, 81.9471f, 70.5249f};
			*(uParam1.f_86[0 /*6*/].f_3) = {0f, 0f, -117.9206f};
			*(uParam1[3 /*15*/]) = {-61.8119f, 77.3506f, 80.3259f};
			*(uParam1[3 /*15*/].f_3) = {-57.747f, 0f, 34.1968f};
			*(uParam1[3 /*15*/].f_6) = {-61.8119f, 77.3506f, 80.3259f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-48.0008f, 0f, 49.6137f};
			*(uParam1[3 /*15*/]).f_12 = 30.0324f;
			*(uParam1[3 /*15*/]).f_13 = 0.2f;
			*(uParam1[3 /*15*/]).f_14 = 3f;
			*uParam1.f_61[3] = 1f;
			*(uParam1.f_86[1 /*6*/]) = {-62.6272f, 79.7534f, 70.6161f};
			*(uParam1.f_86[1 /*6*/].f_3) = {0f, 0f, 65f};
			*(uParam1.f_66[1 /*3*/]) = {-79.1059f, 87.1091f, 70.5157f};
			*(uParam1.f_73[2 /*4*/]) = {-88.4f, 70.8f, 72f};
			*(uParam1.f_73[2 /*4*/]).f_3 = 150f;
			return true;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = {-66.6121f, -1842.122f, 26.6941f};
			*(uParam1[0 /*15*/].f_3) = {3.4131f, -0.0009f, 17.9566f};
			*(uParam1[0 /*15*/].f_6) = {-66.5137f, -1841.616f, 26.7211f};
			*(uParam1[0 /*15*/].f_6.f_3) = {3.1669f, -0.0009f, 18.0384f};
			*(uParam1[0 /*15*/]).f_12 = 25.1856f;
			*(uParam1[0 /*15*/]).f_13 = 0.2f;
			*(uParam1[0 /*15*/]).f_14 = 3.5f;
			*uParam1.f_61[0] = 0f;
			*(uParam1.f_73[0 /*4*/]) = {-72.5431f, -1820.447f, 25.9424f};
			*(uParam1.f_73[0 /*4*/]).f_3 = 140f;
			*(uParam1[1 /*15*/]) = {-72.7256f, -1823.283f, 41.0951f};
			*(uParam1[1 /*15*/].f_3) = {-81.9335f, 0f, -58.1415f};
			*(uParam1[1 /*15*/].f_6) = {-72.9027f, -1822.998f, 41.0951f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-80.6657f, 0f, -29.6554f};
			*(uParam1[1 /*15*/]).f_12 = 29.9864f;
			*(uParam1[1 /*15*/]).f_13 = 0.2f;
			*(uParam1[1 /*15*/]).f_14 = 3f;
			*uParam1.f_61[1] = 1f;
			*(uParam1.f_66[0 /*3*/]) = {-76.7939f, -1816.77f, 26.6473f};
			*(uParam1.f_86[0 /*6*/]) = {-69.2183f, -1823.258f, 25.9421f};
			*(uParam1.f_86[0 /*6*/].f_3) = {0f, 0f, 49.4214f};
			*(uParam1[3 /*15*/]) = {-70.9492f, -1820.936f, 45.3628f};
			*(uParam1[3 /*15*/].f_3) = {-85.5171f, 0f, 68.3257f};
			*(uParam1[3 /*15*/].f_6) = {-70.9836f, -1821.023f, 45.3628f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-89.4995f, 0f, 68.3257f};
			*(uParam1[3 /*15*/]).f_12 = 28.4803f;
			*(uParam1[3 /*15*/]).f_13 = 0.2f;
			*(uParam1[3 /*15*/]).f_14 = 4f;
			*uParam1.f_61[3] = 1f;
			*(uParam1.f_86[1 /*6*/]) = {-75.3386f, -1818.249f, 26.0241f};
			*(uParam1.f_86[1 /*6*/].f_3) = {0f, 0f, -132.7699f};
			*(uParam1.f_66[1 /*3*/]) = {-63.988f, -1829.39f, 26.423f};
			*(uParam1.f_73[2 /*4*/]) = {-49.738f, -1830.147f, 25.5591f};
			*(uParam1.f_73[2 /*4*/]).f_3 = 317.3589f;
			return true;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = {-237.074f, -1170.391f, 23.479f};
			*(uParam1[0 /*15*/].f_3) = {7.619f, 0f, -69.7398f};
			*(uParam1[0 /*15*/].f_6) = {-237.2166f, -1169.672f, 23.4931f};
			*(uParam1[0 /*15*/].f_6.f_3) = {7.619f, 0f, -71.3391f};
			*(uParam1[0 /*15*/]).f_12 = 40.0015f;
			*(uParam1[0 /*15*/]).f_13 = 0.2f;
			*(uParam1[0 /*15*/]).f_14 = 3.5f;
			*uParam1.f_61[0] = 0f;
			*(uParam1.f_73[0 /*4*/]) = {-218.0289f, -1162.392f, 22.0242f};
			*(uParam1.f_73[0 /*4*/]).f_3 = 15f;
			*(uParam1[1 /*15*/]) = {-219.5507f, -1159.951f, 36.8399f};
			*(uParam1[1 /*15*/].f_3) = {-81.7188f, 0f, 170.4291f};
			*(uParam1[1 /*15*/].f_6) = {-219.1442f, -1160.019f, 36.8399f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-80.5726f, 0f, -168.992f};
			*(uParam1[1 /*15*/]).f_12 = 30.0319f;
			*(uParam1[1 /*15*/]).f_13 = 0.2f;
			*(uParam1[1 /*15*/]).f_14 = 4f;
			*uParam1.f_61[1] = 1f;
			*(uParam1.f_66[0 /*3*/]) = {-211.6438f, -1162.407f, 22.0234f};
			*(uParam1.f_86[0 /*6*/]) = {-221.6438f, -1162.407f, 22.0234f};
			*(uParam1.f_86[0 /*6*/].f_3) = {0f, 0f, -90f};
			*(uParam1[3 /*15*/]) = {-218.5983f, -1159.061f, 31.4452f};
			*(uParam1[3 /*15*/].f_3) = {-62.4689f, 0f, -142.2907f};
			*(uParam1[3 /*15*/].f_6) = {-218.6533f, -1159.067f, 31.4471f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-62.4689f, 0f, -172.3491f};
			*(uParam1[3 /*15*/]).f_12 = 30f;
			*(uParam1[3 /*15*/]).f_13 = 0.2f;
			*(uParam1[3 /*15*/]).f_14 = 3f;
			*uParam1.f_61[3] = 1f;
			*(uParam1.f_86[1 /*6*/]) = {-214.5676f, -1162.658f, 21.9591f};
			*(uParam1.f_86[1 /*6*/].f_3) = {0f, 0f, 90f};
			*(uParam1.f_66[1 /*3*/]) = {-227.7619f, -1162.848f, 22.0085f};
			*(uParam1.f_73[2 /*4*/]) = {-221.6f, -1156.3f, 22.6f};
			*(uParam1.f_73[2 /*4*/]).f_3 = 0f;
			return true;
			break;
	}
	return false;
}

int func_218()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_219()
{
	int iVar0;
	struct<5> Var1;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	struct<4> Var26;
	Vector3 fVar30;
	int iVar31;
	Vector3 vVar32;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(14)) || !func_24(iLocal_672))
	{
		return;
	}
	if (!Global_68058)
	{
		if (Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_68319[Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_270(func_46(), Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_101154.f_18807.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_268(iVar0, iLocal_855, iLocal_672);
					func_57(&Var1, Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_377(Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_65(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			clear_help(1);
		}
		Local_402.f_7 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (iLocal_854)
		{
			if (is_help_message_being_displayed())
			{
				clear_help(1);
			}
			render_script_cams(false, false, 3000, 1, 0, 0);
			if (does_cam_exist(Local_402.f_110))
			{
				set_cam_active(Local_402.f_110, false);
				destroy_cam(Local_402.f_110, 0);
			}
			if (does_cam_exist(Local_402.f_111))
			{
				set_cam_active(Local_402.f_111, false);
				destroy_cam(Local_402.f_111, 0);
			}
			set_entity_visible(PLAYER::PLAYER_PED_ID(), true, 0);
			freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_player_control(player_id(), true, 0);
				set_everyone_ignore_player(player_id(), 0);
			}
			iVar22 = get_players_last_vehicle();
			if (ENTITY::DOES_ENTITY_EXIST(iVar22) && is_vehicle_driveable(iVar22, 0))
			{
				set_entity_visible(iVar22, true, 0);
				freeze_entity_position(iVar22, false);
				if (does_entity_belong_to_this_script(iVar22, 1))
				{
					set_vehicle_as_no_longer_needed(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = GAMEPLAY::GET_GAME_TIMER();
			while (!is_gameplay_cam_rendering() && GAMEPLAY::GET_GAME_TIMER() - iVar24 < iVar23)
			{
				wait(false);
			}
			if (is_valid_interior(Local_402.f_112))
			{
				unpin_interior(Local_402.f_112);
			}
			StringCopy(&Global_32434, "", 32);
			if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
			{
				func_212(47, 1);
				func_207(47, 1);
			}
			new_load_scene_stop();
			clear_focus();
			display_hud(true);
			display_radar(true);
			func_199(0, 1, 1, 0);
			iLocal_854 = false;
			Global_25373 = 0;
		}
	}
	iVar25 = false;
	if ((((((((((((!iLocal_854 && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0)) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) && !Local_402.f_29.f_69)) || (!is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))) || (!iLocal_854 && func_63(Local_402, 5))) || (!iLocal_854 && is_control_just_pressed(2, 199))) || (!iLocal_854 && is_pause_menu_active())) || !func_266(0)) || get_player_wanted_level(player_id()) > 0) || is_ped_climbing(PLAYER::PLAYER_PED_ID())) || is_ped_on_vehicle(PLAYER::PLAYER_PED_ID())) || Global_25270) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_ped_being_jacked(PLAYER::PLAYER_PED_ID())))
	{
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90)
		{
			iLocal_1014 = 1;
			Local_402.f_2 = 99;
		}
		iVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2)
	{
		case 0:
			if ((((Local_402 != -1 && func_63(Local_402, 0)) && !func_63(Local_402, 5)) && !iLocal_1015) && !iVar25)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, true, 0) && !is_help_message_being_displayed())
				{
					Var26 = {Local_402.f_29.f_63};
					StringConCat(&Var26, "_01", 16);
					func_151(&(Local_402.f_5), 3, &Var26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_146(Local_402.f_5, 1))
			{
				if (func_265(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
					func_65(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
					func_65(&(Local_402.f_5));
					Local_402.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_02", 16);
				func_151(&(Local_402.f_5), 3, &Var26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_146(Local_402.f_5, 1))
			{
				if (func_265(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
					Local_402.f_2 = 90;
				}
				else
				{
					play_sound_frontend(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					iLocal_854 = false;
					if ((Local_402 == 15 || Local_402 == 17) || Local_402 == 16)
					{
						Local_516.f_4 = 113;
						iLocal_854 = true;
					}
					else if (Local_402 == 18 || Local_402 == 19)
					{
						Local_516.f_4 = 115;
						iLocal_854 = true;
					}
					else if (Local_402 == 12 || Local_402 == 13)
					{
						Local_516.f_4 = 114;
						iLocal_854 = true;
					}
					else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						Local_516.f_4 = 116;
						iLocal_854 = true;
					}
					Local_516 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25373 = 1;
					if (iLocal_854)
					{
						if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
						{
							func_212(47, 0);
							func_207(47, 0);
							Local_402.f_112 = get_interior_at_coords_with_type(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (is_valid_interior(Local_402.f_112))
							{
								if (!is_interior_ready(Local_402.f_112))
								{
									_0x2CA429C029CCF247(Local_402.f_112);
								}
								StringCopy(&Global_32434, "v_garagem_sp", 32);
							}
						}
						set_player_invincible(player_id(), 1);
						new_load_scene_stop();
						Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_65(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			iVar35 = true;
			if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
			{
				Local_402.f_112 = get_interior_at_coords_with_type(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!is_valid_interior(Local_402.f_112) || is_interior_capped(Local_402.f_112)) || is_interior_disabled(Local_402.f_112))
				{
					func_212(47, 0);
					func_207(47, 0);
					iVar35 = false;
				}
			}
			if (iVar35)
			{
				if (Local_402 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_402 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				vVar32 = {cos(Local_402.f_29.f_14.f_3.f_2 + 90f), sin(Local_402.f_29.f_14.f_3.f_2 + 90f), 0f};
				if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
				{
					if (_new_load_scene_start_safe(200.4651f, -1020.631f, -100f, 50f, 0) || GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 > 3500)
					{
						Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
						Local_402.f_2 = 5;
					}
				}
				else if (new_load_scene_start(Local_402.f_29.f_14, vVar32, fVar30, iVar31) || GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 > 3500)
				{
					Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((is_new_load_scene_active() && is_new_load_scene_loaded()) && (!is_valid_interior(Local_402.f_112) || is_interior_ready(Local_402.f_112))) || GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 > 10000)
			{
				Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_entity_a_mission_entity(iLocal_1027)) && does_entity_belong_to_this_script(iLocal_1027, 1))
				{
					set_vehicle_as_no_longer_needed(&iLocal_1027);
				}
				iLocal_1027 = get_players_last_vehicle();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_vehicle_driveable(iLocal_1027, 0)) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iLocal_1027))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iLocal_1027))) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iLocal_1027)))
				{
					if (!is_entity_a_mission_entity(iLocal_1027))
					{
						set_entity_as_mission_entity(iLocal_1027, false, 0);
					}
				}
				else
				{
					iLocal_1027 = false;
				}
				set_entity_visible(PLAYER::PLAYER_PED_ID(), false, 0);
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					set_player_control(player_id(), false, 16);
					set_player_control(player_id(), false, 32);
					set_player_control(player_id(), false, 128);
					set_everyone_ignore_player(player_id(), 1);
				}
				func_199(1, 1, 1, 0);
				clear_prints();
				clear_help(1);
				vVar32 = {cos(Local_402.f_29.f_14.f_3.f_2 + 90f), sin(Local_402.f_29.f_14.f_3.f_2 + 90f), 0f};
				if (!Local_402.f_29.f_69)
				{
					_set_focus_area(Local_402.f_29.f_14, vVar32);
				}
				if (!does_cam_exist(Local_402.f_110))
				{
					Local_402.f_110 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (does_cam_exist(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_199(1, 1, 1, 0);
					func_198(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				render_script_cams(true, false, 3000, 1, 0, 0);
				display_hud(false);
				display_radar(false);
				new_load_scene_stop();
				Local_402.f_2 = 7;
				Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
				func_65(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 < 7000 && !func_263(1000))
			{
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_05", 16);
				func_149(&Var26, -1);
				if (!is_new_load_scene_active())
				{
					if (Local_402 == 12 || Local_402 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					vVar32 = {cos(Local_402.f_29.f_29.f_2 + 90f), sin(Local_402.f_29.f_29.f_2 + 90f), 0f};
					new_load_scene_start(Local_402.f_29.f_29, vVar32, fVar30, iVar31);
				}
			}
			else
			{
				if (does_cam_exist(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_199(1, 1, 1, 0);
					func_198(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				clear_focus();
				clear_help(1);
				Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 < 7000 && !func_263(1000))
			{
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_06", 16);
				if (!is_help_message_being_displayed())
				{
					func_149(&Var26, 7000);
				}
			}
			else
			{
				clear_help(1);
				Local_402.f_4 = GAMEPLAY::GET_GAME_TIMER();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 < 3500 && !func_263(1000))
			{
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_03", 16);
				if (has_scaleform_movie_loaded(Local_516))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							play_sound_frontend(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						draw_scaleform_movie_fullscreen(Local_516, 255, 255, 255, 255, 0);
					}
					else
					{
						_push_scaleform_movie_function(Local_516, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_84(&Var26);
						_pop_scaleform_movie_function();
						Local_516.f_1 = 1;
					}
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 < 4000 && !func_263(1000))
			{
				if (has_scaleform_movie_loaded(Local_516))
				{
					if (Local_516.f_2)
					{
						draw_scaleform_movie_fullscreen(Local_516, 255, 255, 255, 255, 0);
					}
					else
					{
						_push_scaleform_movie_function(Local_516, "SHARD_ANIM_OUT");
						_push_scaleform_movie_function_parameter_int(true);
						_push_scaleform_movie_function_parameter_float(0.33f);
						_pop_scaleform_movie_function_void();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (iLocal_854)
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
					if (does_cam_exist(Local_402.f_110))
					{
						set_cam_active(Local_402.f_110, false);
						destroy_cam(Local_402.f_110, 0);
					}
					if (does_cam_exist(Local_402.f_111))
					{
						set_cam_active(Local_402.f_111, false);
						destroy_cam(Local_402.f_111, 0);
					}
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					set_entity_visible(PLAYER::PLAYER_PED_ID(), true, 0);
					freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
					iVar36 = get_players_last_vehicle();
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						set_player_control(player_id(), true, 0);
						set_everyone_ignore_player(player_id(), 0);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar36) && is_vehicle_driveable(iVar36, 0)) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar36, 0))
						{
							set_entity_coords(iVar36, Local_402.f_29.f_44, 1, true, 0, 1);
							set_entity_heading(iVar36, Local_402.f_29.f_47);
							set_vehicle_on_ground_properly(iVar36);
						}
						else
						{
							set_entity_coords(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_44, 1, true, 0, 1);
							set_entity_heading(PLAYER::PLAYER_PED_ID(), Local_402.f_29.f_47);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && is_vehicle_driveable(iLocal_1027, 0))
					{
						iVar37 = func_45(24);
						if (func_197(&Local_776, 24))
						{
							func_192(&Local_776, func_371());
							if (ENTITY::DOES_ENTITY_EXIST(iVar37))
							{
								delete_vehicle(&iVar37);
							}
						}
						if (Local_402 == 21)
						{
							clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							set_entity_coords(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
							set_entity_heading(iLocal_1027, 154.4846f);
							func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402 == 22)
						{
							clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							set_entity_coords(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
							set_entity_heading(iLocal_1027, 319.6985f);
							func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402 == 23)
						{
							clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							set_entity_coords(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
							set_entity_heading(iLocal_1027, 270.8741f);
							func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						set_vehicle_on_ground_properly(iLocal_1027);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar36) && is_vehicle_driveable(iVar36, 0))
					{
						set_entity_visible(iVar36, true, 0);
						freeze_entity_position(iVar36, false);
						if (does_entity_belong_to_this_script(iVar36, 1))
						{
							set_vehicle_as_no_longer_needed(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = GAMEPLAY::GET_GAME_TIMER();
					while (!is_gameplay_cam_rendering() && GAMEPLAY::GET_GAME_TIMER() - iVar39 < iVar38)
					{
						wait(false);
					}
					if (is_valid_interior(Local_402.f_112))
					{
						unpin_interior(Local_402.f_112);
					}
					StringCopy(&Global_32434, "", 32);
					if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						func_212(47, 1);
						func_207(47, 1);
						Global_101154.f_18807.f_4800 = 1;
					}
					new_load_scene_stop();
					clear_focus();
					display_hud(true);
					display_radar(true);
					func_199(0, 1, 1, 0);
					iLocal_854 = false;
					Global_25373 = 0;
				}
				if (has_scaleform_movie_loaded(Local_516))
				{
					set_scaleform_movie_as_no_longer_needed(&Local_516);
				}
				func_236(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_235(Local_402, 5, 1);
				func_222(Local_402);
				if (does_blip_exist(Global_68319.f_208[Local_402]))
				{
					remove_blip(&(Global_68319.f_208[Local_402]));
				}
				iLocal_940 = Local_402;
				func_221();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if (GAMEPLAY::GET_GAME_TIMER() - Local_402.f_4 < 4000)
				{
					Var26 = {Local_402.f_29.f_63};
					StringConCat(&Var26, "_04", 16);
					func_220(&Var26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_220(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

bool func_221()
{
	if (func_159(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

void func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_234(iVar0, 0);
	iVar2 = func_233(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_232(iVar0);
		if (func_230(iVar0, iVar1, 1))
		{
			func_223(iVar0);
			func_232(iVar0);
		}
	}
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	auto uVar7;
	char* sVar8;
	
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/];
	iVar2 = Global_46152[iVar0 /*203*/].f_9 - 1;
	if (!Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		uVar7 = Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_228(Global_36852[uVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = {Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2};
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_224(1, Global_36852[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36852[iVar1 /*12*/].f_3)
		{
			case 0:
				func_224(0, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_224(1, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_224(2, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_224(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	if (is_cutscene_playing())
	{
		return;
	}
	iVar0 = func_371();
	iVar1 = false;
	StringCopy(&cVar2, func_227(iParam1, &iVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				_set_notification_text_entry("PROPR_INCEMAIL1");
				break;
			
			case 73:
				_set_notification_text_entry("PROPR_INCEMAIL3");
				break;
			
			case 74:
				_set_notification_text_entry("PROPR_INCEMAIL2");
				break;
			
			default:
				_set_notification_text_entry(sParam3);
				if (!is_string_null_or_empty(sParam4))
				{
					_add_text_component_item_string(sParam4);
				}
				if (!is_string_null_or_empty(sParam5))
				{
					_add_text_component_item_string(sParam5);
				}
				if (!is_string_null_or_empty(sParam6))
				{
					_add_text_component_item_string(sParam6);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					_add_text_component_item_string(sParam7);
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_add_text_component_item_string(sParam8);
				}
				if (!is_string_null_or_empty(sParam9))
				{
					_add_text_component_item_string(sParam9);
				}
				if (!is_string_null_or_empty(sParam10))
				{
					_add_text_component_item_string(sParam10);
				}
				if (!is_string_null_or_empty(sParam11))
				{
					_add_text_component_item_string(sParam11);
				}
				if (!is_string_null_or_empty(sParam12))
				{
					_add_text_component_item_string(sParam12);
				}
				if (!is_string_null_or_empty(sParam13))
				{
					_add_text_component_item_string(sParam13);
				}
				break;
		}
		if (iVar1)
		{
			func_225(_set_notification_message(&cVar2, &cVar2, 0, 2, _get_label_text(func_226(iParam1)), 0));
		}
		else
		{
			func_225(_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, _get_label_text(func_226(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36844++;
				if (Global_36844 > 16)
				{
					Global_36844 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36846++;
				if (Global_36846 > 16)
				{
					Global_36846 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36845++;
				if (Global_36845 > 16)
				{
					Global_36845 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		play_sound_frontend(-1, "Notification", &Global_14402, 1);
	}
}

void func_225(int iParam0)
{
	Global_36847[Global_36851] = iParam0;
	Global_16770 = 1;
	Global_16769 = iParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_227(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return _get_label_text(&(Global_101154.f_32575[0 /*29*/].f_7));
		
		case 1:
			return _get_label_text(&(Global_101154.f_32575[1 /*29*/].f_7));
		
		case 2:
			return _get_label_text(&(Global_101154.f_32575[2 /*29*/].f_7));
		
		case 7:
			return _get_label_text(&(Global_101154.f_32575[12 /*29*/].f_7));
		
		case 4:
			return _get_label_text(&(Global_101154.f_32575[60 /*29*/].f_7));
		
		case 6:
			return _get_label_text(&(Global_101154.f_32575[62 /*29*/].f_7));
		
		case 3:
			return _get_label_text(&(Global_101154.f_32575[14 /*29*/].f_7));
		
		case 16:
			return _get_label_text(&(Global_101154.f_32575[97 /*29*/].f_7));
		
		case 19:
			return _get_label_text(&(Global_101154.f_32575[99 /*29*/].f_7));
		
		case 15:
			return _get_label_text(&(Global_101154.f_32575[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return _get_label_text(&(Global_101154.f_32575[15 /*29*/].f_7));
		
		case 26:
			return _get_label_text(&(Global_101154.f_32575[30 /*29*/].f_7));
		
		case 27:
			return _get_label_text(&(Global_101154.f_32575[17 /*29*/].f_7));
		
		case 29:
			return _get_label_text(&(Global_101154.f_32575[20 /*29*/].f_7));
		
		case 30:
			return _get_label_text(&(Global_101154.f_32575[43 /*29*/].f_7));
		
		case 31:
			return _get_label_text(&(Global_101154.f_32575[44 /*29*/].f_7));
		
		case 32:
			return _get_label_text(&(Global_101154.f_32575[19 /*29*/].f_7));
		
		case 34:
			return _get_label_text(&(Global_101154.f_32575[40 /*29*/].f_7));
		
		case 36:
			return _get_label_text(&(Global_101154.f_32575[22 /*29*/].f_7));
		
		case 38:
			return _get_label_text(&(Global_101154.f_32575[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return _get_label_text(&(Global_101154.f_32575[122 /*29*/].f_7));
		
		case 40:
			return _get_label_text(&(Global_101154.f_32575[125 /*29*/].f_7));
		
		case 41:
			return _get_label_text(&(Global_101154.f_32575[113 /*29*/].f_7));
		
		case 42:
			return _get_label_text(&(Global_101154.f_32575[126 /*29*/].f_7));
		
		case 43:
			return _get_label_text(&(Global_101154.f_32575[127 /*29*/].f_7));
		
		case 44:
			return _get_label_text(&(Global_101154.f_32575[124 /*29*/].f_7));
		
		case 45:
			return _get_label_text(&(Global_101154.f_32575[114 /*29*/].f_7));
		
		case 46:
			return _get_label_text(&(Global_101154.f_32575[115 /*29*/].f_7));
		
		case 47:
			return _get_label_text(&(Global_101154.f_32575[116 /*29*/].f_7));
		
		case 48:
			return _get_label_text(&(Global_101154.f_32575[123 /*29*/].f_7));
		
		case 49:
			return _get_label_text(&(Global_101154.f_32575[117 /*29*/].f_7));
		
		case 50:
			return _get_label_text(&(Global_101154.f_32575[118 /*29*/].f_7));
		
		case 51:
			return _get_label_text(&(Global_101154.f_32575[119 /*29*/].f_7));
		
		case 52:
			return _get_label_text(&(Global_101154.f_32575[120 /*29*/].f_7));
		
		case 53:
			return _get_label_text(&(Global_101154.f_32575[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_228(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (iParam0 > -1)
	{
		StringCopy(&cVar0, "EMSTR_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		return cVar0;
	}
	StringCopy(&cVar16, "FAIL", 64);
	return cVar16;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46152[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46152[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

bool func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_234(iParam0, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 4)
	{
		return false;
	}
	Global_46152[iVar0 /*203*/].f_2 = iParam0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46152[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_3;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_2;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46152[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_231(Global_46152[iVar0 /*203*/].f_4[iVar1], Global_46152[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	auto uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	auto uVar25;
	auto uVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2)
	{
		iVar19 = Global_40177[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0)
		{
			return;
		}
		uVar20 = Global_40177[iParam1 /*46*/].f_32[iVar19];
		iVar2 = uVar20;
		Var3 = {func_228(Global_36852[uVar20 /*12*/].f_1)};
		if (Global_36852[uVar20 /*12*/].f_2 == iParam0 && !Global_36852[uVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36852[uVar20 /*12*/].f_2;
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar21 = true;
		}
		if (iVar21)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar22 = true;
		}
		if (iVar22)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46152[iVar24 /*203*/].f_1 == iParam1 && Global_46152[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = Global_46152[iVar23 /*203*/].f_1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = Global_46152[iVar23 /*203*/].f_9 - 1;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
		uVar25 = Global_45790[iParam0 /*120*/].f_1[iVar0];
		uVar26 = Global_46152[iVar23 /*203*/].f_10[uVar25 /*48*/];
		iVar2 = uVar26;
		iVar1 = Global_36852[uVar26 /*12*/].f_2;
		if (Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = {func_228(Global_36852[uVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !iParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_224(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_224(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_224(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_224(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_232(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_29511, 4 - 1))
		{
			return;
		}
	}
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46152[iVar0 /*203*/] = 0;
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47574 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_47575[iVar1 /*53*/].f_52 == 0)
		{
			Global_47575[iVar1 /*53*/].f_52 = iVar0;
			Global_47575[iVar1 /*53*/] = iParam0;
			Global_47575[iVar1 /*53*/].f_1 = iParam1;
			Global_47575[iVar1 /*53*/].f_2 = iParam2;
			Global_101154.f_25562.f_310++;
			if (Global_101154.f_25562.f_310 == 0)
			{
				Global_101154.f_25562.f_310 = 1;
			}
			Global_47575[iVar1 /*53*/].f_10 = 0;
			Global_47575[iVar1 /*53*/].f_3 = Global_101154.f_25562.f_310;
			Global_47575[iVar1 /*53*/].f_4 = 1;
			Global_47574++;
			return Global_47575[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
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
	
	iVar0 = func_229(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46152[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return -1;
	}
	iVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			if (iVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
				iVar3 = false;
			}
			else if (iVar5 > Global_46152[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46152[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46152[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45790[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45790[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45790[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45790[iVar6 /*120*/].f_18[iVar8] == Global_46152[iVar4 /*203*/].f_1)
							{
								if (Global_45790[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36844--;
											break;
										
										case 1:
											Global_36845--;
											break;
										
										case 2:
											Global_36846--;
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46152[iVar4 /*203*/].f_2 = iParam0;
	Global_46152[iVar4 /*203*/].f_3 = 0;
	if (!iParam1)
	{
		Global_46152[iVar4 /*203*/] = 1;
	}
	Global_101154.f_25562.f_310++;
	if (Global_101154.f_25562.f_310 == 0)
	{
		Global_101154.f_25562.f_310 = 1;
	}
	Global_46152[iVar4 /*203*/].f_1 = Global_101154.f_25562.f_310;
	Global_46152[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_235(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_101154.f_32575[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_262();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_261(99, 1);
					func_260(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_260(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_260(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_245(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_261(95, iParam3);
					break;
				
				case 1:
					func_261(97, iParam3);
					break;
				
				case 2:
					func_261(96, iParam3);
					break;
			}
			func_261(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_260(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_260(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_260(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35711 == 15)
	{
		func_238(0);
	}
	return true;
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_242() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_241(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_261(93, iParam0);
	func_261(29, iParam0);
	func_261(30, iParam0);
}

int func_244(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0);
}

bool func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_259(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_246(27, 1);
	return true;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_247(iParam0, iParam1);
}

bool func_247(int iParam0, int iParam1)
{
	if (func_26(14) && !func_258(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_257(&Global_2563627))
	{
		if (func_255(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_248(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_248(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_26(14) && !func_258(iParam1))
	{
		return false;
	}
	if (func_255(uParam0, iParam1))
	{
		return false;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	func_251(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_249(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_249(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_26(14) && !func_258(iParam1))
	{
		return false;
	}
	if (func_255(uParam0, iParam1))
	{
		return false;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_250(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_251(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	func_253(uParam0, Global_2563626 - 0.5f);
}

void func_252(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_253(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_254(auto uParam0)
{
	return *uParam0.f_72;
}

int func_255(auto uParam0, int iParam1)
{
	return func_256(uParam0, iParam1) != -1;
}

int func_256(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_257(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_258(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_262()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

bool func_263(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_264())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_264()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

int func_265(int iParam0)
{
	auto uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_266(int iParam0)
{
	return func_267(iParam0, Global_35711);
}

bool func_267(int iParam0, int iParam1)
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

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_371();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_123(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_230(iVar0, iVar1, 1))
	{
		func_269(iVar0, sVar3);
		func_223(iVar0);
		func_232(iVar0);
	}
}

void func_269(int iParam0, char* sParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 == 10)
	{
		return;
	}
	uVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6++;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[uVar1 /*4*/]), sParam1, 16);
}

bool func_270(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_275(iParam1) || !func_275(iParam0))
	{
		return true;
	}
	iVar0 = func_51(iParam0);
	iVar1 = func_51(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_53(iParam0);
	iVar1 = func_53(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_274(iParam0);
	iVar1 = func_274(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_273(iParam0);
	iVar1 = func_273(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_272(iParam0);
	iVar1 = func_272(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_271(iParam0);
	iVar1 = func_271(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_271(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_272(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_273(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_274(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

bool func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_271(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_272(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_273(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_51(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_53(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_274(iParam0);
	if (iVar5 < 1 || iVar5 > func_50(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_276()
{
	int iVar0;
	auto uVar1;
	char* sVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	Vector3 vVar15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	Vector3 vVar26;
	int iVar29;
	
	iVar0 = 0;
	if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) == 0)
	{
		if (Global_101154.f_18807.f_5588)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_69224))
			{
				func_192(&(Global_101154.f_18807.f_5510), Global_101154.f_18807.f_5590);
				Global_101154.f_18807.f_5588 = 0;
			}
			else if (!is_vehicle_driveable(Global_69224, 0) || func_43(Global_69224, Global_101154.f_18807.f_5590, 1))
			{
				Global_101154.f_18807.f_5588 = 0;
			}
			else
			{
				if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0) == Global_69224) && func_296(PLAYER::PLAYER_PED_ID()) != Global_101154.f_18807.f_5590)
				{
					Global_101154.f_18807.f_5590 = func_296(PLAYER::PLAYER_PED_ID());
				}
				if (Global_69224 != iLocal_671)
				{
					sVar2 = get_entity_script(Global_69224, &uVar1);
					if (!is_string_null_or_empty(sVar2))
					{
						if (get_hash_key(sVar2) == get_hash_key("vehicle_gen_controller"))
						{
							Global_101154.f_18807.f_5588 = 0;
							iLocal_1028 = Global_69224;
							if (Global_68319.f_139[24] == Global_69224 || (Global_69225 == Global_69224 && Global_69226 == 24))
							{
								func_295(458, 24, -1, 1);
							}
							else
							{
								func_295(458, 0, -1, 1);
							}
							Global_69224 = 0;
						}
					}
				}
				if (((Global_101154.f_18807.f_5590 != func_371() && Global_90747[Global_101154.f_18807.f_5590 /*98*/] == Global_101154.f_18807.f_5510.f_66) && are_strings_equal(&(Global_90747[Global_101154.f_18807.f_5590 /*98*/].f_27), &(Global_101154.f_18807.f_5510.f_1))) && !is_player_switch_in_progress())
				{
					func_108(&(Global_101154.f_18807.f_5510), &(Global_101154.f_18807.f_5600[Global_101154.f_18807.f_5590 /*78*/]));
					Global_101154.f_18807.f_5588 = 0;
					iLocal_1028 = 0;
					func_295(458, 0, -1, 1);
					Global_69224 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_69224) && is_vehicle_driveable(Global_69224, 0)) && !func_43(Global_69224, Global_101154.f_18807.f_5590, 1))
		{
			Global_101154.f_18807.f_5588 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1028) && is_vehicle_driveable(iLocal_1028, 0))
		{
			if (((!Global_101154.f_18807.f_5588 && iLocal_1028 != Global_69224) && iLocal_1028 != iLocal_1029) && !does_entity_belong_to_this_script(iLocal_1028, 1))
			{
				func_30(iLocal_1028, 145);
				iLocal_1028 = false;
				func_295(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = false;
			func_295(458, 0, -1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1029) && is_vehicle_driveable(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = false;
		}
	}
	if (Global_69228.f_66 != 0 && Global_69225 == 0)
	{
		func_192(&Global_69228, Global_69306);
		Global_69228.f_66 = 0;
	}
	vVar3 = {433.6721f, -1006.538f, 25.96351f};
	vVar6 = {433.6578f, -1017.5f, 32.09895f};
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vVar3, vVar6, fVar9, 0, true, 0)) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_294(iLocal_672))
	{
		if (!does_blip_exist(iLocal_857))
		{
			if (((func_26(15) || func_26(12)) && iLocal_667 != 3) && !is_player_wanted_level_greater(player_id(), 0))
			{
				iLocal_857 = func_292(428.37f, -1013.5f, 27.93f, 0);
				set_blip_sprite(iLocal_857, 225);
				set_blip_name_from_text_file(iLocal_857, "IMPOUND_BLIPNAME");
				set_blip_as_short_range(iLocal_857, true);
			}
		}
		else if ((!(func_26(15) || func_26(12)) || iLocal_667 == 3) || is_player_wanted_level_greater(player_id(), 0))
		{
			remove_blip(&iLocal_857);
		}
	}
	else if (does_blip_exist(iLocal_857))
	{
		remove_blip(&iLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((Local_402.f_2 == 0 && (func_26(15) || func_26(12))) && !is_player_wanted_level_greater(player_id(), 0))
				{
					if (func_294(iLocal_672))
					{
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vVar3, vVar6, fVar9, 0, true, 0))
						{
							if (func_265(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_188(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_151(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_151(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_149("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_147(0, -1, 0))
			{
				if (func_146(iLocal_668, 1))
				{
					func_65(&iLocal_668);
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_291();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_188(iVar13, iLocal_672))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_657 = 0;
						iLocal_658 = 0;
						iLocal_659 = 0;
						iLocal_662 = -1;
						iLocal_667++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_188(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									vVar15 = {431.4f, -997.33f, 24.76f};
								}
								else
								{
									vVar15 = {436.39f, -997.25f, 24.76f};
								}
								while (!func_282(&iLocal_671, iVar14, vVar15, 179.24f, 1))
								{
									wait(false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_281(18, 1, 0);
									}
									else
									{
										func_281(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										set_player_control(player_id(), true, 0);
									}
									func_236(iLocal_672, 118, 250);
									func_280(iVar14);
									func_30(iLocal_671, func_371());
									func_67(1, -1);
									iLocal_667 = 3;
									func_65(&iLocal_668);
									iLocal_668 = -1;
									iLocal_659 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_371())
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 1:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
			}
			func_291();
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 1, 0, 0, 0);
				func_142(1, 2, 1, 1, 1);
				func_141("IMPOUND_TITLE");
				iLocal_663 = false;
				iVar19 = -1;
				iVar21 = false;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_188(iVar20, iLocal_672))
					{
						func_126(iVar21, get_display_name_from_vehicle_model(Global_101154.f_18807.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						GAMEPLAY::SET_BIT(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_126(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_279(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = false;
				func_119(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (_is_input_just_disabled(2))
					{
						CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
						enable_control_action(0, 237, 1);
						enable_control_action(0, 238, 1);
						enable_control_action(0, 241, 1);
						enable_control_action(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_662)
							{
								play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_2562129;
								func_119(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (is_control_just_pressed(2, 188) || is_control_just_pressed(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = iLocal_662 - 1;
						while (iVar22 >= 0)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_663, iVar22))
							{
								iLocal_662 = iVar22;
								iVar23 = true;
								iVar22 = false;
							}
							iVar22 += -1;
						}
						if (!iVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_662 + 1)
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_663, iVar22))
								{
									iLocal_662 = iVar22;
									iVar23 = true;
									iVar22 = iLocal_662;
								}
								iVar22 += -1;
							}
						}
						if (iVar23)
						{
							func_119(iLocal_662, 1, 1);
						}
					}
				}
				else if (is_control_just_pressed(2, 187) || is_control_just_pressed(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_663, iVar24))
							{
								iLocal_662 = iVar24;
								iVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!iVar25)
						{
							iVar24 = false;
							while (iVar24 <= iLocal_662 - 1)
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_663, iVar24))
								{
									iLocal_662 = iVar24;
									iVar25 = true;
									iVar24 = iLocal_662;
								}
								iVar24++;
							}
						}
						if (iVar25)
						{
							func_119(iLocal_662, 1, 1);
						}
					}
				}
				else if (is_control_just_released(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_113("IMPOUND_CNF", 0, 0);
						func_112(-1);
						func_111(201, "ITEM_YES", -1);
						func_111(202, "ITEM_NO", -1);
						iLocal_659 = 1;
					}
					else
					{
						if (iLocal_662 == 0)
						{
							vVar26 = {431.4f, -997.33f, 24.76f};
						}
						else
						{
							vVar26 = {436.39f, -997.25f, 24.76f};
						}
						if (func_188(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_282(&iLocal_671, iLocal_664[iLocal_662], vVar26, 179.24f, 1))
							{
								wait(false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_281(18, 1, 0);
								}
								else
								{
									func_281(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									set_player_control(player_id(), true, 0);
								}
								func_236(iLocal_672, 118, 250);
								func_280(iLocal_664[iLocal_662]);
								func_30(iLocal_671, func_371());
								func_67(1, -1);
								iLocal_667++;
								func_65(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (is_control_just_released(2, 202) || is_control_just_released(2, 238))
				{
					play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_667 = 99;
					}
				}
			}
			hide_hud_and_radar_this_frame();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_147(0, -1, 0))
			{
				func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_278())
			{
				func_30(iLocal_671, func_371());
				iLocal_667 = 99;
			}
			else if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_671))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671, 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_671, 0) && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(iLocal_671, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 100f)
						{
							if (!is_entity_on_screen(iLocal_671))
							{
								func_277(iLocal_671, 1, 145);
								delete_vehicle(&iLocal_671);
								clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false);
								iLocal_667 = 99;
							}
						}
						else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_671, 0))
						{
							clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false);
							func_30(iLocal_671, func_371());
							iLocal_667 = 99;
						}
					}
					else
					{
						clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false);
						iLocal_667 = 99;
					}
				}
				else
				{
					clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_player_control(player_id(), true, 0);
			}
			func_65(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_281(18, 0, 0);
			func_281(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_671))
			{
				set_vehicle_as_no_longer_needed(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!iLocal_670)
			{
				func_281(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_281(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

bool func_277(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = get_entity_script(iParam0, &uVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (get_hash_key(sVar1) == get_hash_key("vehicle_gen_controller"))
			{
				return false;
			}
		}
	}
	func_30(iParam0, iParam2);
	return true;
}

bool func_278()
{
	if (is_position_occupied(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (is_position_occupied(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (is_position_occupied(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	else if (is_position_occupied(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, false, 0))
	{
		return true;
	}
	return false;
}

void func_279(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	auto uVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = iParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_122();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_101(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_121();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

void func_280(int iParam0)
{
	int iVar0;
	
	switch (func_371())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_34834[iParam0 /*31*/].f_1), 5);
		if (iParam2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_34834[iParam0 /*31*/].f_1, true))
			{
				Global_34834[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34834[iParam0 /*31*/].f_22 = 1f;
			}
			_set_door_ajar_angle(Global_34834[iParam0 /*31*/], Global_34834[iParam0 /*31*/].f_22, 0, 0);
			_set_door_acceleration_limit(Global_34834[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_34834[iParam0 /*31*/].f_1), 5);
		if (iParam2)
		{
			Global_34834[iParam0 /*31*/].f_22 = 0f;
			_set_door_ajar_angle(Global_34834[iParam0 /*31*/], Global_34834[iParam0 /*31*/].f_22, 0, 0);
			_set_door_acceleration_limit(Global_34834[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

bool func_282(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_188(iParam1, func_371()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	switch (func_371())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	STREAMING::REQUEST_MODEL(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (STREAMING::HAS_MODEL_LOADED(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = create_vehicle(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, vParam2, fParam5, 0, false);
		func_283(*iParam0, &(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		set_vehicle_on_ground_properly(*iParam0);
		_0xAB04325045427AAE(*iParam0, 0);
		set_vehicle_has_strong_axles(*iParam0, true);
		if (iParam6)
		{
			set_model_as_no_longer_needed(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return true;
	}
	return false;
}

void func_283(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_hash_key(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_32(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_32(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_32(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_32(iVar1 + 1));
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 15) || func_290(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_289())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_288(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_288(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_284(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_32(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 23))
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_284(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_287(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_286(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_286(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_285(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_289()
{
	return is_dlc_present(-1691188696);
}

int func_290(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return GAMEPLAY::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return false;
}

void func_291()
{
	disable_all_control_actions(0);
	enable_control_action(0, 188, 1);
	enable_control_action(0, 187, 1);
	enable_control_action(0, 201, 1);
	enable_control_action(0, 202, 1);
	enable_control_action(0, 1, 1);
	enable_control_action(0, 2, 1);
	enable_control_action(0, 239, 1);
	enable_control_action(0, 240, 1);
}

int func_292(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_293(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_293(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_188(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

auto func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_88();
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

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_297(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_297(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_298(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8706.pSasquatchFlags, 7))
	{
		if (!GAMEPLAY::IS_BIT_SET(*iParam0, 6))
		{
			if (func_26(13) && func_14(func_16()))
			{
				GAMEPLAY::SET_BIT(iParam0, 6);
				iVar0 = func_9();
				*iParam0.f_6 = {func_329(iVar0)};
				if (Global_25393 == iVar0 || Global_25393 == 0)
				{
					func_3(1);
					Var1 = {func_328("til_P_", "Exec_U", "xer_Scene", "B_Mi")};
					start_audio_scene(&Var1);
					iVar0 = Global_25393 + 1 % 8;
					func_326(iParam0, iVar0);
					*iParam0.f_2 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(8000, 12000);
					GAMEPLAY::SET_BIT(iParam0, 12);
					if (iVar0 == 7)
					{
						GAMEPLAY::SET_BIT(&(Global_101154.f_8706.pSasquatchFlags), 7);
						func_325(255, 0);
					}
				}
				else
				{
					func_326(iParam0, 0);
					GAMEPLAY::CLEAR_BIT(&(Global_101154.f_8706.pSasquatchFlags), 12);
				}
			}
		}
		else
		{
			func_324();
			if (!GAMEPLAY::IS_BIT_SET(*iParam0, 31))
			{
				if (!GAMEPLAY::IS_BIT_SET(*iParam0, 25))
				{
					func_323(iParam0);
				}
				else if (func_322())
				{
					func_306(iParam0);
					*iParam0.f_3 = GAMEPLAY::GET_GAME_TIMER() + 2000;
				}
				if (!func_305(0))
				{
					func_325(255, 0);
				}
			}
			else if (func_305(0))
			{
				if (GAMEPLAY::GET_GAME_TIMER() > *iParam0.f_3)
				{
					func_325(0, 800);
				}
			}
			if (!func_26(13) || !func_14(func_16()))
			{
				func_299(iParam0);
			}
		}
	}
}

void func_299(int iParam0)
{
	struct<8> Var0;
	
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 31))
	{
		func_304(iParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 25))
	{
		func_300(iParam0);
	}
	Var0 = {func_328("til_P_", "Exec_U", "xer_Scene", "B_Mi")};
	if (is_audio_scene_active(&Var0))
	{
		stop_audio_scene(&Var0);
	}
	GAMEPLAY::CLEAR_BIT(iParam0, 6);
	GAMEPLAY::CLEAR_BIT(iParam0, 30);
	GAMEPLAY::CLEAR_BIT(iParam0, 8);
}

void func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = getJoaatForId(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		set_model_as_no_longer_needed(iVar2);
	}
	if (iVar3 != 0)
	{
		set_model_as_no_longer_needed(iVar3);
	}
	GAMEPLAY::CLEAR_BIT(iParam0, 25);
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int getJoaatForId(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -541762431; // RAbbit
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_304(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_4))
	{
		remove_decals_in_range(ENTITY::GET_ENTITY_COORDS(*iParam0.f_4, 0), 10f);
		delete_vehicle(iParam0.f_4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_5))
	{
		remove_decals_in_range(ENTITY::GET_ENTITY_COORDS(*iParam0.f_5, 0), 10f);
		PED::DELETE_PED(iParam0.f_5);
	}
	GAMEPLAY::CLEAR_BIT(iParam0, 31);
}

int func_305(int iParam0)
{
	if (iParam0)
	{
		return Global_98114.f_2 > 0.5f;
	}
	return Global_98114.f_2 >= 255f;
}

void func_306(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	func_307(iVar1, iParam0.f_5, iParam0.f_4, func_321(iVar0), func_320(iVar0), 1);
	GAMEPLAY::SET_BIT(iParam0, 31);
}

void func_307(int iParam0, auto uParam1, auto uParam2, Vector3 vParam3, Vector3 fParam4, int iParam5)
{
	switch (iParam0)
	{
		case 12:
			func_319(uParam1, vParam3, fParam6, iParam7);
			break;
		
		case 109:
			func_318(uParam1, vParam3, fParam6, iParam7);
			break;
		
		case 43:
			func_317(uParam1, vParam3, fParam6, iParam7);
			break;
		
		case 35:
			func_316(uParam2, vParam3, fParam6, iParam7);
			break;
		
		case 28:
			func_315(uParam1, vParam3, fParam6, iParam7);
			break;
		
		case 17:
			func_314(uParam1, uParam2, vParam3, fParam6, iParam7);
			break;
		
		case 49:
			func_312(uParam1, uParam2, vParam3, fParam6);
			break;
		
		case 25:
			func_311(uParam1, vParam3, fParam6);
			break;
		
		case 14:
			func_310(uParam1, vParam3, fParam6);
			break;
		
		case 86:
			func_308(uParam1, vParam3, fParam6);
			break;
	}
}

void func_308(auto uParam0, Vector3 vParam1, Vector3 fParam2)
{
	int iVar0;
	
	iVar0 = getJoaatForId(86);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		add_decal(1110, vParam1.x + 0.1f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.03f, vParam1.y + 0.3f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.2f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.5f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.4f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.6f, vParam1.y - 0.35f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_309(int iParam0)
{
	apply_ped_blood_specific(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	apply_ped_blood_specific(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	apply_ped_blood_specific(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	apply_ped_blood_specific(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	apply_ped_blood_specific(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_310(auto uParam0, Vector3 vParam1, Vector3 fParam2)
{
	int iVar0;
	
	iVar0 = getJoaatForId(14);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		add_decal(1110, vParam1.x + 0.1f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.03f, vParam1.y + 0.3f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.2f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.5f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.4f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.6f, vParam1.y - 0.35f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_311(auto uParam0, Vector3 vParam1, Vector3 fParam2)
{
	int iVar0;
	
	iVar0 = getJoaatForId(25);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		add_decal(1110, vParam1.x + 0.02f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.23f, vParam1.y + 0.04f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.05f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x - 0.05f, vParam1.y - 0.11f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam1.x + 0.09f, vParam1.y - 0.06f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_312(auto uParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = getJoaatForId(49);
	iVar1 = func_301(49);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, vParam2, fParam5, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		add_decal(1110, vParam2.x + 0.12f - 0.3f, vParam2.y - 0.01f - 0.07f, vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam2.x - 0.03f - 0.3f, vParam2.y + 0.04f - 0.07f, vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam2.x - 0.2f - 0.3f, vParam2.y - 0.01f - 0.07f, vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam2.x - 0.05f - 0.3f, vParam2.y - 0.15f - 0.07f, vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		add_decal(1110, vParam2.x + 0.01f - 0.3f, vParam2.y - 0.06f - 0.07f, vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		vVar2 = {9.9929f, 4.6946f, -7.1469f};
		*uParam1 = create_vehicle(iVar1, vParam2 + vVar2, fParam5, 1, true);
		set_model_as_no_longer_needed(iVar1);
		set_vehicle_engine_health(*uParam1, 2f);
		set_vehicle_on_ground_properly(*uParam1);
		set_vehicle_body_health(*uParam1, 2f);
		unk_0xE4E2FD323574965C(*uParam1, 1f);
		set_vehicle_door_broken(*uParam1, false, func_313());
		set_vehicle_door_broken(*uParam1, true, func_313());
		set_vehicle_door_broken(*uParam1, 2, func_313());
		set_vehicle_door_broken(*uParam1, 3, func_313());
		set_vehicle_door_broken(*uParam1, 4, func_313());
		set_vehicle_door_broken(*uParam1, 5, func_313());
		set_vehicle_dirt_level(*uParam1, 15f);
		_0x1FD09E7390A74D54(*uParam1, 3);
		set_vehicle_lights(*uParam1, 2);
		set_vehicle_undriveable(*uParam1, true);
		activate_physics(*uParam1);
		return;
	}
}

bool func_313()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_314(auto uParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = getJoaatForId(17);
	iVar1 = func_301(17);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar1, vParam2, fParam5, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar1);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		vVar2 = {0.02f, -0.01f, 0f};
		add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = {0.23f, 0.04f, 0f};
		add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = {-0.05f, -0.01f, 0f};
		add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = {-0.05f, -0.11f, 0f};
		add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = {0.09f, -0.06f, 0f};
		add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (iParam6)
		{
			vVar2 = {0.5783f, 0.1357f, -0.0683f};
			add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = {1.0477f, 0.1103f, -0.1388f};
			add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = {1.5048f, 0.4595f, -0.1953f};
			add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		*uParam1 = create_vehicle(iVar0, vParam2.x - 0.4f, vParam2.y - 0.5f, vParam2.z, fParam5, 1, true);
		set_model_as_no_longer_needed(iVar0);
		set_entity_rotation(*uParam1, 0f, 85f, 0f, 2, 1);
		set_vehicle_body_health(*uParam1, 20.5f);
		set_vehicle_dirt_level(*uParam1, 15f);
		activate_physics(*uParam1);
		return;
	}
}

void func_315(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = getJoaatForId(28);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		vVar1 = {0.02f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.05f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {0.01f, -0.06f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (iParam5)
		{
			vVar1 = {0.5206f, 0f, 0.003f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {1.1258f, 0.0362f, -0.0837f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {1.6107f, 0.4678f, -0.0815f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_316(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = getJoaatForId(35);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = create_vehicle(iVar0, vParam1, fParam4, 1, true);
		set_model_as_no_longer_needed(iVar0);
		set_entity_rotation(*uParam0, 0f, 170f, 0f, 2, 1);
		set_vehicle_engine_health(*uParam0, 1f);
		set_vehicle_body_health(*uParam0, 1f);
		set_vehicle_dirt_level(*uParam0, 15f);
		set_vehicle_door_broken(*uParam0, false, func_313());
		set_vehicle_door_broken(*uParam0, true, func_313());
		set_vehicle_door_broken(*uParam0, 2, func_313());
		set_vehicle_door_broken(*uParam0, 3, func_313());
		set_vehicle_door_broken(*uParam0, 4, func_313());
		set_vehicle_door_broken(*uParam0, 5, func_313());
		_0x1FD09E7390A74D54(*uParam0, 3);
		set_vehicle_lights(*uParam0, 2);
		set_vehicle_undriveable(*uParam0, true);
		activate_physics(*uParam0);
		if (iParam5)
		{
			vVar1 = {0.4947f, 2.3632f, 0.1294f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			vVar1 = {0.9243f, 2.6606f, 0.1951f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			vVar1 = {1.5467f, 2.5044f, 0.2418f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			vVar1 = {1.357f, 3.8779f, 0.3259f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_317(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = getJoaatForId(43);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		vVar1 = {0.12f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.2f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.05f, -0.15f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (iParam5)
		{
			vVar1 = {0.4125f, -0.5815f, -0.2056f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = {0.6332f, -1.1758f, -0.7106f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_318(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = getJoaatForId(109);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		vVar1 = {0.12f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.2f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.05f, -0.15f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {0.01f, -0.06f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (iParam5)
		{
			vVar1 = {0.4936f, -0.1763f, -0.0522f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {1.0645f, 0.0483f, -0.0698f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {1.6011f, -0.1704f, -0.1473f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		return;
	}
}

void func_319(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = getJoaatForId(12);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam4, 1, true);
		disable_ped_pain_audio(*uParam0, 1);
		set_model_as_no_longer_needed(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, false);
		activate_physics(*uParam0);
		vVar1 = {0.04f, 0.02f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.01f, 0.05f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = {-0.03f, -0.01f, 0f};
		add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (iParam5)
		{
			vVar1 = {0.2417f, -0.3975f, -0.2282f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {0.0747f, -0.8188f, -0.2576f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = {0.4322f, -1.1548f, -0.4902f};
			add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		return;
	}
}

float func_320(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_321(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_SasquatchPeyoteLocations2[0 /*3*/];
		
		case 2:
			return Global_SasquatchPeyoteLocations2[1 /*3*/];
		
		case 3:
			return Global_SasquatchPeyoteLocations2[2 /*3*/];
		
		case 4:
			return Global_SasquatchPeyoteLocations2[3 /*3*/];
		
		case 5:
			return Global_SasquatchPeyoteLocations2[4 /*3*/];
		
		case 6:
			return Global_SasquatchPeyoteLocations2[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = getJoaatForId(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return false;
		}
	}
	if (iVar3 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			return false;
		}
	}
	return true;
}

void func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = getJoaatForId(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3);
	}
	GAMEPLAY::SET_BIT(iParam0, 25);
}

void func_324()
{
	if (Global_98114.f_3 == GAMEPLAY::GET_FRAME_COUNT())
	{
		return;
	}
	Global_98114.f_3 = GAMEPLAY::GET_FRAME_COUNT();
	if (Global_98114.f_2 == 0f && Global_98114.f_1 == 0f)
	{
		return;
	}
	if (Global_98114.f_2 != Global_98114.f_1)
	{
		Global_98114.f_2 += Global_98114;
		if (Global_98114 <= 0f)
		{
			if (Global_98114.f_2 < Global_98114.f_1)
			{
				Global_98114.f_2 = Global_98114.f_1;
			}
		}
		else if (Global_98114.f_2 > Global_98114.f_1)
		{
			Global_98114.f_2 = Global_98114.f_1;
		}
	}
	draw_rect(0.5f, 0.5f, 1f, 1f, 255, 255, 255, round(Global_98114.f_2), 0);
}

void func_325(int iParam0, int iParam1)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	if (iParam1 <= 0)
	{
		Global_98114 = 0f;
		Global_98114.f_1 = fVar0;
		Global_98114.f_2 = fVar0;
	}
	else
	{
		fVar1 = fVar0 - Global_98114.f_2;
		fVar2 = to_float(iParam1) / get_frame_time() * 1000f;
		Global_98114 = fVar1 / fVar2;
		Global_98114.f_1 = fVar0;
	}
}

void func_326(int iParam0, int iParam1)
{
	func_327(&(Global_101154.f_8706.pSasquatchFlags), iParam1, 14336, 11);
}

void func_327(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 -= (*uParam0 && iParam2);
	*uParam0 = (*uParam0 || shift_left(iParam1, iParam3));
}

struct<8> func_328(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, sParam1, 32);
	StringConCat(&cVar0, sParam0, 32);
	StringConCat(&cVar0, sParam3, 32);
	StringConCat(&cVar0, sParam2, 32);
	return cVar0;
}

Vector3 func_329(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_SasquatchPeyoteLocations[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_330()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (func_331(8))
					{
						iLocal_393[4] = create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, true, false);
						set_entity_coords(iLocal_393[4], 471.48f, fVar0, 30.33f, 1, false, 0, 1);
						set_entity_rotation(iLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_393[1] = create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, true, false);
						set_entity_coords(iLocal_393[1], 471.48f, fVar0, 30.15f, 1, false, 0, 1);
						set_entity_rotation(iLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_331(9))
					{
						iLocal_393[5] = create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, true, false);
						set_entity_coords(iLocal_393[5], 471.48f, fVar0, 29.98f, 1, false, 0, 1);
						set_entity_rotation(iLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_331(10))
					{
						iLocal_393[3] = create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, true, false);
						set_entity_coords(iLocal_393[3], 471.48f, fVar0, 29.82f, 1, false, 0, 1);
						set_entity_rotation(iLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = get_interior_at_coords_with_type(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[iVar2]))
						{
							set_entity_visible(iLocal_393[iVar2], true, 0);
							set_entity_always_prerender(iLocal_393[iVar2], 1);
							_0x82EBB79E258FA2B7(iLocal_393[iVar2], iVar1);
						}
						iVar2++;
					}
					set_model_as_no_longer_needed(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				set_model_as_no_longer_needed(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_374();
				iLocal_392 = 0;
			}
		}
	}
}

int func_331(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_332()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68319.f_553)
	{
		if (!iLocal_400)
		{
			Global_68319.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_68319.f_554 >= 68)
		{
			Global_68319.f_553 = 0;
			iLocal_400 = 0;
		}
	}
	else
	{
		iLocal_400 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_866)
	{
		iVar1 = iLocal_867[iVar0];
		if (func_57(&Local_674, iVar1))
		{
			func_370(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				fLocal_941[iVar1] = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_695.f_55, 0);
			}
			else
			{
				fLocal_941[iVar1] = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_674, 0);
			}
			if (func_369())
			{
				func_368(iVar1);
				func_366(iVar1);
				func_365(iVar1);
				func_364(iVar1);
				func_362(iVar1);
				func_361(iVar1);
				func_360(iVar1);
				func_334(iVar1);
				if (GAMEPLAY::IS_BIT_SET(uLocal_48[iVar1], 2))
				{
					if (Global_68319.f_553)
					{
						iLocal_400 = 0;
					}
					func_375(iVar1);
				}
			}
			else
			{
				func_333(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_866;
	iLocal_866 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_936)
	{
		iLocal_936[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_375(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_375(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_375(iLocal_47);
	if (iLocal_1014)
	{
		func_375(21);
		func_375(22);
		func_375(23);
		iLocal_1014 = 0;
		iLocal_1015 = true;
	}
	else if (iLocal_1015)
	{
		iLocal_1015 = false;
	}
	if (Global_68319.f_553)
	{
		Global_68319.f_554++;
	}
}

void func_333(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		set_model_as_no_longer_needed(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_334(int iParam0)
{
	float fVar0;
	float fVar1;
	Vector3 fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	Vector3 vVar8;
	struct<60> Var11;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	struct<6> Var94;
	struct<6> Var100;
	int iVar106;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], 2))
	{
		func_333(iParam0);
	}
	GAMEPLAY::CLEAR_BIT(&(uLocal_48[iParam0]), 2);
	if (GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true))
	{
		fVar2 = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 23))
	{
		if (Local_674.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((GAMEPLAY::IS_BIT_SET(Local_674.f_9, 19) || GAMEPLAY::IS_BIT_SET(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402 == 21) || (iLocal_672 == 0 && Local_402 == 22)) || (iLocal_672 == 0 && Local_402 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
	{
		if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iParam0 == 24)
				{
					iVar3 = get_ped_in_vehicle_seat(Global_68319.f_139[iParam0], -1);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar3 = get_last_ped_in_vehicle_seat(Global_68319.f_139[iParam0], -1);
					}
					iVar4 = func_296(iVar3);
					if (iVar4 != Global_101154.f_18807.f_5591)
					{
						if (func_24(iVar4))
						{
							func_359("Updating last character to use vehicle gen", iVar4);
							Global_101154.f_18807.f_5591 = iVar4;
						}
					}
				}
				if (!does_entity_belong_to_this_script(Global_68319.f_139[iParam0], 1))
				{
					func_358("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
					}
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (((GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], false) && !GAMEPLAY::IS_BIT_SET(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_358("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
					}
					set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if ((!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_68319.f_139[iParam0], PLAYER::PLAYER_PED_ID(), 1))
					{
						func_358("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
						{
							_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
						}
						set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
						Global_68319.f_139[iParam0] = 0;
						Global_68319[iParam0] = 1;
						func_357(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true) && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(Global_68319.f_139[iParam0], 1), vLocal_186[iParam0 /*3*/], 1) > fVar5) || (!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true) && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(Global_68319.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_358("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
					}
					set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (!func_63(iParam0, 0))
				{
					func_358("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
					}
					set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_43(Global_68319.f_139[iParam0], iLocal_672, 1) && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0]))
					{
						func_358("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
						{
							_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
						}
						Global_68319.f_139[iParam0] = 0;
						Global_68319[iParam0] = 1;
						func_357(iParam0);
						return;
					}
				}
				if (fLocal_941[iParam0] > fVar0 && (!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_46();
						iVar7 = Global_101154.f_18807.f_4801;
						func_355(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_270(iVar6, iVar7))
						{
							if ((!func_59(Global_68319.f_139[iParam0]) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
							{
								_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
							}
							func_30(Global_68319.f_139[iParam0], Global_101154.f_18807.f_5591);
							Global_68319[iParam0] = 1;
							func_357(iParam0);
						}
						else if (func_35(Global_68319.f_139[iParam0]))
						{
							func_31(Global_68319.f_139[iParam0], &Global_2444471);
							Global_2444470 = Global_101154.f_18807.f_5591;
							iLocal_1029 = Global_68319.f_139[iParam0];
						}
					}
					func_358("No longer needed: Player out for range");
					set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
					clear_area(Local_674, 3f, 0, 0, 0, false);
					clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, false);
					Global_68319.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_68319.f_584 = {Local_674};
						Global_68319.f_587 = {0f, 0f, 0f};
					}
					return;
				}
				if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 30))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_674.f_9, 31))
					{
						if (!has_entity_collided_with_anything(Global_68319.f_139[iParam0]) && !is_entity_attached(Global_68319.f_139[iParam0]))
						{
							vVar8 = {ENTITY::GET_ENTITY_COORDS(Global_68319.f_139[iParam0], 1)};
							if (vVar8.z >= func_354(iParam0))
							{
								set_boat_anchor(Global_68319.f_139[iParam0], true);
								GAMEPLAY::SET_BIT(&(Local_674.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_68319.f_139[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
	{
		func_358("No longer needed: Vehicle not driveable");
		set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
		Global_68319.f_139[iParam0] = 0;
		Global_68319[iParam0] = 1;
		func_357(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (Global_69226 == iParam0)
	{
		func_358("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_69225) && is_vehicle_driveable(Global_69225, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]) && is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
			{
				if (Global_68319.f_139[iParam0] == Global_69225)
				{
					func_358("Vehicle to be handed over is the same vehicle.");
					Global_69226 = -1;
					Global_69225 = 0;
					return;
				}
				else
				{
					func_358("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], true);
					}
					set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
				}
			}
			Global_68319.f_139[iParam0] = Global_69225;
			Global_68319[iParam0] = 1;
			GAMEPLAY::CLEAR_BIT(&(uLocal_48[iParam0]), false);
			GAMEPLAY::SET_BIT(&(uLocal_48[iParam0]), true);
			GAMEPLAY::CLEAR_BIT(&(uLocal_48[iParam0]), 3);
			vLocal_186[iParam0 /*3*/] = {ENTITY::GET_ENTITY_COORDS(Global_69225, 1)};
			Global_69226 = -1;
			if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_31(Global_69225, &Var11);
				if (Global_69227)
				{
					func_107(iParam0, &Var11, ENTITY::GET_ENTITY_COORDS(Global_69225, 1), get_entity_heading(Global_69225), func_42(Global_69225));
				}
				else
				{
					func_107(iParam0, &Var11, Global_101154.f_18807.f_1864[Local_674.f_14 /*3*/], Global_101154.f_18807.f_1934[Local_674.f_14], func_42(Global_69225));
				}
				Global_68319.f_139[iParam0] = Global_69225;
				Global_68319.f_484[iParam0] = Global_68319.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_371();
				if (func_24(iVar89))
				{
					func_358("Players stored switch vehicle cleared for prep getaway.");
					Global_91046[iVar89] = 0;
				}
			}
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			if (iParam0 == 24)
			{
				_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], false);
			}
			Global_69225 = 0;
			if (Global_2444471.f_66 != 0)
			{
				func_192(&Global_2444471, Global_2444470);
				Global_2444471.f_66 = 0;
			}
			return;
		}
		if (Global_2444471.f_66 != 0)
		{
			func_192(&Global_2444471, Global_2444470);
			Global_2444471.f_66 = 0;
		}
		func_358("Vehicle to be handed over doesn't exist.");
		Global_69226 = -1;
		Global_69225 = 0;
	}
	if (Global_68319[iParam0])
	{
		if (fLocal_941[iParam0] >= fVar0)
		{
			Global_68319[iParam0] = 0;
			func_358("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68319.f_584 = {0f, 0f, 0f};
			Global_68319.f_587 = {0f, 0f, 0f};
		}
		return;
	}
	iVar90 = false;
	if (fLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_101154.f_18807.f_1958[Local_674.f_14] != 0) && Global_101154.f_18807.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_63(iParam0, 0)) && func_37(Local_674.f_4, 0))
		{
			iVar91 = func_46();
			iVar92 = Global_101154.f_18807.f_4801;
			func_355(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_270(iVar91, iVar92))
			{
				func_192(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/]), Global_101154.f_18807.f_5591);
				func_357(iParam0);
				Global_68319[iParam0] = 1;
				func_358("Cannot be created: Vehicle ready for impound");
				Global_2444471.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			iVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_68319.f_584 = {0f, 0f, 0f};
		Global_68319.f_587 = {0f, 0f, 0f};
	}
	if (Local_674.f_4 == 0)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Dummy model");
		return;
	}
	if (!func_37(Local_674.f_4, 0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_63(iParam0, 0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen not available");
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 14) && !func_63(iParam0, 5))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_353() && func_352(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!iLocal_673)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Player character not valid");
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iParam0]))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_68319.f_484[iParam0] = 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 6))
	{
		if (func_351(Local_674.f_4, -1))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_350(Local_674.f_4, -1))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_349(iParam0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (is_player_switch_in_progress() && get_player_switch_type() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_101154.f_18807.f_1958[Local_674.f_14] > 0) && Global_101154.f_18807.f_1958[Local_674.f_14] <= 3)
	{
		if (is_this_model_a_bike(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = Global_101154.f_18807.f_1958[Local_674.f_14] - 1;
		}
		else if (is_this_model_a_car(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = Global_101154.f_18807.f_1958[Local_674.f_14] - 1;
		}
	}
	if (iVar93 != 0)
	{
		if (func_348(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_377(iParam0, 0);
			}
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 19) || GAMEPLAY::IS_BIT_SET(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_88990[Local_674.f_12 /*3*/][1] != -1 && GAMEPLAY::GET_GAME_TIMER() - Global_88990[Local_674.f_12 /*3*/][1] < get_milliseconds_per_game_minute() * 180)
				{
					Global_68319[iParam0] = 1;
					func_358("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, get_milliseconds_per_game_minute() * 180 - GAMEPLAY::GET_GAME_TIMER() - Global_88990[Local_674.f_12 /*3*/][1] / 1000, 24);
					StringConCat(&Var94, " seconds", 24);
					func_358(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_88990[Local_674.f_12 /*3*/][0] != -1 && GAMEPLAY::GET_GAME_TIMER() - Global_88990[Local_674.f_12 /*3*/][0] < get_milliseconds_per_game_minute() * 180)
				{
					Global_68319[iParam0] = 1;
					func_358("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, get_milliseconds_per_game_minute() * 180 - GAMEPLAY::GET_GAME_TIMER() - Global_88990[Local_674.f_12 /*3*/][1] / 1000, 24);
					StringConCat(&Var100, " seconds", 24);
					func_358(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_68319.f_584 = {Local_674};
	}
	if (iVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_22(Local_674.f_12, iVar93);
		STREAMING::REQUEST_MODEL(iLocal_117[iParam0]);
		GAMEPLAY::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_117[iParam0]))
		{
			func_358("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_347(iLocal_117[iParam0], Local_674, 1))
		{
			func_358("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		clear_area(Local_674, 3f, 0, 0, 0, false);
		clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, false);
		if (iVar93 == 2)
		{
			func_342(&(Global_68319.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_342(&(Global_68319.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		GAMEPLAY::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_674.f_4))
		{
			func_358("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_347(Local_674.f_4, Local_674, 1))
		{
			func_358("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		clear_area(Local_674, 3f, 0, 0, 0, false);
		clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, false);
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 23))
		{
			request_collision_at_coord(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_68319.f_139[iParam0] = create_vehicle(Local_674.f_4, Local_674, Local_674.f_3, 1, true);
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 10))
		{
			if (is_this_model_a_plane(Local_674.f_4))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_31(Global_68319.f_139[iParam0], &Local_776);
				func_341(Local_776.f_77, &(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_283(Global_68319.f_139[iParam0], &(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_68319.f_484[iParam0] = Global_68319.f_139[iParam0];
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 9))
			{
				set_vehicle_colours(Global_68319.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 8))
			{
				set_vehicle_doors_locked(Global_68319.f_139[iParam0], 2);
				set_vehicle_can_be_visibly_damaged(Global_68319.f_139[iParam0], false);
				set_vehicle_can_be_targetted(Global_68319.f_139[iParam0], 0);
				set_vehicle_can_break(Global_68319.f_139[iParam0], false);
				_0x51BB2D88D31A914B(Global_68319.f_139[iParam0], false);
				_0x192547247864DFDD(Global_68319.f_139[iParam0], false);
				set_vehicle_tyres_can_burst(Global_68319.f_139[iParam0], false);
				set_entity_invincible(Global_68319.f_139[iParam0], true);
				freeze_entity_position(Global_68319.f_139[iParam0], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
	{
		func_340("Created - Coords: ", Local_674);
		func_339("Created - Dist From Player:", fLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68319.f_584 = {0f, 0f, 0f};
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				set_vehicle_colours(Global_68319.f_139[iParam0], 121, 21);
				set_vehicle_extra_colours(Global_68319.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				set_vehicle_colours(Global_68319.f_139[iParam0], 122, 89);
				set_vehicle_extra_colours(Global_68319.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				set_vehicle_colours(Global_68319.f_139[iParam0], false, false);
				set_vehicle_extra_colours(Global_68319.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				set_vehicle_colours(Global_68319.f_139[iParam0], 131, 132);
				set_vehicle_extra_colours(Global_68319.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				set_vehicle_colours(Global_68319.f_139[iParam0], 159, false);
				set_vehicle_extra_colours(Global_68319.f_139[iParam0], 160, 156);
				break;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 22))
		{
			set_boat_anchor(Global_68319.f_139[iParam0], true);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 30))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_674.f_9), 31);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 26))
		{
			set_vehicle_doors_locked(Global_68319.f_139[iParam0], 7);
			set_vehicle_alarm(Global_68319.f_139[iParam0], 1);
		}
		func_338(Global_68319.f_139[iParam0], iParam0);
		if (!GAMEPLAY::IS_BIT_SET(Local_674.f_9, 29) && !GAMEPLAY::IS_BIT_SET(Local_674.f_9, 30))
		{
			set_vehicle_on_ground_properly(Global_68319.f_139[iParam0]);
		}
		set_vehicle_dirt_level(Global_68319.f_139[iParam0], 0f);
		_0x3910051CCECDB00C(Global_68319.f_139[iParam0], true);
		_0x428BACCDF5E26EAD(Global_68319.f_139[iParam0], GAMEPLAY::IS_BIT_SET(Local_674.f_9, 5));
	}
	GAMEPLAY::CLEAR_BIT(&(uLocal_48[iParam0]), false);
	GAMEPLAY::CLEAR_BIT(&(uLocal_48[iParam0]), true);
	Global_68319[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_68319.f_69[iParam0] = 1;
	}
	iVar106 = func_335(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_68319.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2444471.f_66 = 0;
	}
}

int func_335(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_88();
	}
	iVar0 = 0;
	iVar1 = func_337(iParam0, iParam1);
	iVar2 = func_336(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_336(int iParam0)
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

int func_337(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_88();
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

void func_338(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				set_vehicle_damage(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				set_vehicle_damage(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				set_vehicle_damage(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				set_vehicle_extra(iParam0, 6, false);
				set_vehicle_extra(iParam0, 1, true);
				break;
			}
	}
}

void func_339(char* sParam0, Vector3 fParam1)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_340(char* sParam0, float fParam1, auto uParam2, auto uParam3)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_341(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			GAMEPLAY::CLEAR_BIT(&iVar0, true);
			break;
		
		case joaat("kalahari"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			GAMEPLAY::CLEAR_BIT(&iVar0, true);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			GAMEPLAY::CLEAR_BIT(&iVar0, true);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			break;
		
		case joaat("stalion"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			GAMEPLAY::CLEAR_BIT(&iVar0, true);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("chino"):
			GAMEPLAY::CLEAR_BIT(&iVar0, false);
			GAMEPLAY::CLEAR_BIT(&iVar0, true);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			break;
	}
	iVar1 = 2147483647 - iVar0;
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

bool func_342(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	int iVar0;
	auto uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	int iVar105;
	char[16] cVar106;
	int iVar110;
	
	if (func_24(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_23(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return true;
		}
		if ((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131])
		{
			Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, false);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					set_vehicle_extra(*iParam0, iVar103 + 1, !Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_346(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_284(iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_343(*iParam0, iParam1);
				return true;
			}
		}
		else if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, false);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					set_vehicle_extra(*iParam0, iVar104 + 1, !Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_346(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_284(iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_343(*iParam0, iParam1);
				return true;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				iVar105 = true;
				*iParam0 = create_vehicle(Var5, vParam2, fParam5, 1, true);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				StringCopy(&cVar106, get_vehicle_number_plate_text(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Var5.f_5, Var5.f_6);
				set_vehicle_extra_colours(*iParam0, Var5.f_7, Var5.f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					set_vehicle_extra(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					set_convertible_roof(*iParam0, Var5.f_24);
				}
				if (func_346(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Var5.f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				set_vehicle_tyres_can_burst(*iParam0, Var5.f_88);
				set_vehicle_window_tint(*iParam0, Var5.f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Var5.f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Var5.f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Var5.f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Var5.f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Var5.f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Var5.f_90);
						}
					}
				}
				func_284(iParam0, &(Var5.f_31), &(Var5.f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_101154.f_7775.f_99.f_58[118])
					{
						set_vehicle_number_plate_text(*iParam0, &cVar106);
						iVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					set_vehicle_mod(*iParam0, 6, true, false);
					set_vehicle_mod(*iParam0, 14, 7, false);
					set_vehicle_mod(*iParam0, 11, 2, false);
					set_vehicle_mod(*iParam0, 2, 3, false);
					set_vehicle_mod(*iParam0, 7, 5, false);
					set_vehicle_mod(*iParam0, 0, false, false);
					set_vehicle_mod(*iParam0, 3, 3, false);
					set_vehicle_mod(*iParam0, 13, true, false);
					set_vehicle_mod(*iParam0, 4, 3, false);
					set_vehicle_mod(*iParam0, 12, 2, false);
					toggle_vehicle_mod(*iParam0, 22, true);
					set_vehicle_wheel_type(*iParam0, 2);
					set_vehicle_mod(*iParam0, 23, 11, false);
					set_vehicle_window_tint(*iParam0, 2);
					Global_101154.f_1826.f_539.f_3544 = 1;
					func_166(iParam1, iParam0, 0, 1);
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Var5);
				}
				if (iVar105)
				{
					func_343(*iParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = iParam1;
			Global_88962[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_344(auto uParam0)
{
	if (!func_345(*uParam0))
	{
		set_vehicle_extra(*uParam0, 5, !Global_101154.f_7775.f_99.f_58[119]);
	}
}

int func_345(int iParam0)
{
	return is_vehicle_extra_turned_on(iParam0, 5);
}

bool func_346(auto uParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = {Global_101154.f_24643.f_267};
		*iParam1 = Global_101154.f_24643.f_271;
		return true;
	}
	return false;
}

bool func_347(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	
	if ((iParam4 && is_screen_faded_out()) && _get_number_of_instances_of_streamed_script(joaat("startup_positioning")) > 0)
	{
		func_358("player is in vehicle bounds - \"startup_positioning\" is running.");
		return false;
	}
	get_model_dimensions(iParam0, &vVar0, &vVar3);
	fVar6 = get_distance_between_coords(vVar3, vVar0, 1);
	if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam1, 1) < fVar6 * 0.5f)
	{
		func_339("player is in vehicle bounds - fLength: ", fVar6);
		func_339("player is in vehicle bounds - fDistance: ", get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam1, 1));
		return true;
	}
	return false;
}

bool func_348(int iParam0, int iParam1, Vector3 vParam2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_24(iParam0))
	{
		return false;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_23(iParam0, &Var1, iParam1);
	iVar99 = Var1;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == iVar99 && Global_88952[iVar0] == iParam0)
				{
					if (fParam5 == -1f || get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(Global_88942[iVar0], 0), vParam2, 1) <= fParam5)
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_351(Local_674.f_4, -1) || func_350(Local_674.f_4, -1)) || _get_number_of_instances_of_streamed_script(joaat("exile2")) > 0) || !func_331(30))
			{
				return true;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_68319.f_484[20], 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
		{
			if (Local_674.f_4 == ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[20]))
			{
				get_vehicle_colours(Global_68319.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_187(20);
				}
			}
		}
	}
	return false;
}

bool func_350(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = get_closest_vehicle(Local_674, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && is_vehicle_driveable(iVar1, 0)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == -1 || get_vehicle_livery(iVar1) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_351(int iParam0, int iParam1)
{
	var[] uVar0 = new var[50];
	int iVar51;
	int iVar52;
	
	iVar52 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar51]) && is_vehicle_driveable(uVar0[iVar51], 0)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || get_vehicle_livery(uVar0[iVar51]) == iParam1)
			{
				return true;
			}
		}
		iVar51++;
	}
	return false;
}

bool func_352(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_266(iParam0))
	{
		return false;
	}
	return true;
}

auto func_353()
{
	return Global_68319.f_138;
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_355(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_53(*uParam0);
	iVar2 = func_274(*uParam0);
	iVar3 = func_273(*uParam0);
	iVar4 = func_272(*uParam0);
	iVar5 = func_271(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_50(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_50(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_356(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_356(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam1);
	func_55(uParam0, iParam2);
	func_54(uParam0, iParam3);
	func_48(uParam0, iParam5);
	func_49(uParam0, iParam4);
	func_47(uParam0, iParam6);
}

void func_357(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 13))
	{
		func_377(iParam0, 0);
	}
}

void func_358(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
	}
}

void func_359(char* sParam0, int iParam1)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_360(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	int iVar6;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar0 = false;
	iVar5 = -1;
	iVar6 = 1193854962;
	switch (iParam0)
	{
		case 12:
		case 13:
			iVar0 = !func_63(iParam0, 5);
			vVar1 = {-961.42f, -2794.47f, 12.96f};
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = 160628940;
			break;
		
		case 15:
		case 16:
		case 17:
			iVar0 = !func_63(iParam0, 5);
			vVar1 = {-827.93f, -1368.14f, 3.9982f};
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			iVar0 = !func_63(iParam0, 5);
			iVar0 = true;
			vVar1 = {-710.07f, -1414.31f, 4f};
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			iVar0 = !func_63(iParam0, 5);
			vVar1 = {-66.21f, 77.76f, 70.51f};
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			iVar0 = !func_63(iParam0, 5);
			vVar1 = {-76.02f, -1825.61f, 25.88f};
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			iVar0 = !func_63(iParam0, 5);
			vVar1 = {-218.68f, -1165.76f, 21.99f};
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (iVar0 && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar1, 1) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_858[iVar5]))
		{
			STREAMING::REQUEST_MODEL(iVar6);
			iLocal_865 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar6))
			{
				if (iLocal_865)
				{
					iLocal_858[iVar5] = create_object_no_offset(iVar6, vVar1, 0, 1, 0);
					set_entity_rotation(iLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					set_entity_can_be_damaged(iLocal_858[iVar5], 0);
					freeze_entity_position(iLocal_858[iVar5], true);
					set_model_as_no_longer_needed(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_858[iVar5]) && !is_entity_on_screen(iLocal_858[iVar5])) && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar1, 1) > 255f)
		{
			delete_object(&(iLocal_858[iVar5]));
			if (iLocal_865)
			{
				set_model_as_no_longer_needed(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_361(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (func_63(iParam0, 0) && (!GAMEPLAY::IS_BIT_SET(Local_674.f_9, 14) || func_63(iParam0, 5)))
	{
		iVar0 = true;
	}
	if (Global_68319.f_346[iParam0] != iVar0)
	{
		if (!func_20(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!iVar0)
			{
				if (Global_68319.f_346[iParam0])
				{
					remove_scenario_blocking_area(Global_68319.f_415[iParam0], 0);
				}
			}
			else if (!Global_68319.f_346[iParam0])
			{
				Global_68319.f_415[iParam0] = add_scenario_blocking_area(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_68319.f_346[iParam0] = iVar0;
	}
}

void func_362(int iParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 15))
	{
		if (func_63(iParam0, 0) && !func_63(iParam0, 5))
		{
			iVar0 = 145;
			if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 16))
			{
				iVar0 = func_363(9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 18))
			{
				iVar0 = func_363(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_235(iParam0, 5, 1);
			}
		}
	}
}

auto func_363(int iParam0)
{
	return Global_101154.f_29429[iParam0 /*4*/];
}

void func_364(int iParam0)
{
	if (func_63(iParam0, 0) && !func_63(iParam0, 3))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 4))
		{
			func_235(iParam0, 3, 1);
		}
		else
		{
			func_235(iParam0, 3, 1);
		}
	}
}

void func_365(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = true;
	if (func_63(iParam0, 0) && iLocal_673)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, false) || (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 2) && !func_63(iParam0, 2)))
		{
			if ((!GAMEPLAY::IS_BIT_SET(Local_674.f_9, 21) || (((((((!func_26(0) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(9)) && !func_26(10)) && !func_26(13)) && !func_26(14))) && ((get_player_wanted_level(player_id()) == 0 || func_63(iParam0, 5)) || !GAMEPLAY::IS_BIT_SET(Local_674.f_9, 28)))
			{
				iVar0 = false;
				if (!does_blip_exist(Global_68319.f_208[iParam0]))
				{
					if (func_331(0))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 14) && !func_63(iParam0, 5))
						{
							Global_68319.f_208[iParam0] = add_blip_for_coord(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								set_blip_sprite(Global_68319.f_208[iParam0], Local_695.f_58);
								if (!is_string_null_or_empty(&(Local_695.f_59)))
								{
									set_blip_name_from_text_file(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_63(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_68319.f_208[iParam0] = add_blip_for_coord(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								set_blip_sprite(Global_68319.f_208[iParam0], Local_674.f_13);
								if (!is_string_null_or_empty(&(Local_695.f_59)))
								{
									set_blip_name_from_text_file(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
								if (Local_674.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_674.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_674.f_12 == 2)
								{
									iVar1 = 44;
								}
								set_blip_colour(Global_68319.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_68319.f_208[iParam0] = add_blip_for_coord(Local_674);
							if (Local_674.f_13 != -1)
							{
								set_blip_sprite(Global_68319.f_208[iParam0], Local_674.f_13);
								if (!is_string_null_or_empty(&(Local_695.f_59)))
								{
									set_blip_name_from_text_file(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_674.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_674.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_674.f_12 == 2)
									{
										iVar2 = 44;
									}
									set_blip_colour(Global_68319.f_208[iParam0], iVar2);
								}
							}
						}
						set_blip_as_short_range(Global_68319.f_208[iParam0], !GAMEPLAY::IS_BIT_SET(Local_674.f_9, true));
						set_blip_flashes(Global_68319.f_208[iParam0], 0);
						set_blip_priority(Global_68319.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (iVar0)
	{
		if (does_blip_exist(Global_68319.f_208[iParam0]))
		{
			remove_blip(&(Global_68319.f_208[iParam0]));
		}
	}
}

void func_366(int iParam0)
{
	if (func_63(iParam0, 0) && !func_63(iParam0, 1))
	{
		if (func_63(iParam0, 4))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_674.f_9, 3))
			{
				func_367(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_235(iParam0, 1, 1);
			}
			else
			{
				func_235(iParam0, 1, 1);
			}
		}
	}
}

void func_367(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_195(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
	{
		iLocal_673 = true;
	}
	else
	{
		iLocal_673 = false;
	}
	if (func_26(14))
	{
		iLocal_673 = false;
	}
	if ((iLocal_673 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && GAMEPLAY::IS_BIT_SET(Local_674.f_9, 14))
	{
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0)
		{
			if (fLocal_941[iParam0] < Local_402.f_1 || Local_402 == iParam0)
			{
				if (Local_402 != iParam0)
				{
					Local_402.f_8 = {Local_674};
					Local_402.f_29 = {Local_695};
					Local_402 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_68319.f_592)
					{
						Global_68319.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_402.f_6 = -1;
					if ((Local_402 == 12 || Local_402 == 13) || Local_402 == 14)
					{
						Local_402.f_6 = 0;
					}
					else if ((Local_402 == 15 || Local_402 == 16) || Local_402 == 17)
					{
						Local_402.f_6 = 1;
					}
					else if ((Local_402 == 18 || Local_402 == 19) || Local_402 == 20)
					{
						Local_402.f_6 = 2;
					}
					else if ((Local_402 == 21 || Local_402 == 22) || Local_402 == 23)
					{
						Local_402.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_124(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_68319.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_61(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (is_this_model_a_heli(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((is_this_model_a_boat(iVar2) || _is_this_model_an_emergency_boat(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_62(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = fLocal_941[iParam0];
			}
		}
	}
	else if (Local_402 == iParam0)
	{
		Local_402 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_139[iParam0], 0))
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], true) || GAMEPLAY::IS_BIT_SET(uLocal_48[iParam0], 3))
						{
							GAMEPLAY::SET_BIT(&(uLocal_48[iParam0]), false);
							func_235(iParam0, 4, 1);
							func_235(iParam0, 2, 1);
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iParam0]) && is_vehicle_driveable(Global_68319.f_484[iParam0], 0)) && ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (is_entity_in_angled_area(Global_68319.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					_0x30D779DE7C4F6DD3(Global_68319.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!is_entity_in_angled_area(Global_68319.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				_0x30D779DE7C4F6DD3(Global_68319.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

bool func_369()
{
	return true;
}

auto func_370(auto uParam0, int iParam1)
{
	*uParam0.f_80 = 0;
	*uParam0.f_69 = 0;
	StringCopy(uParam0.f_59, "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = {-952.8823f, -2795.896f, 12.13233f};
			*uParam0.f_3 = {-966.7308f, -2787.975f, 16.13232f};
			*uParam0.f_6 = 17.5625f;
			*uParam0.f_44 = {-966.1285f, -2794.789f, 12.9648f};
			*uParam0.f_47 = 146.6324f;
			*uParam0.f_14 = {-1652.454f, -3059.149f, 24.932f};
			*uParam0.f_14.f_3 = {-2.5815f, 0f, -176.2374f};
			*uParam0.f_14.f_12 = 38.2303f;
			*uParam0.f_14.f_6 = {-1651.547f, -3060.478f, 23.8077f};
			*uParam0.f_14.f_6.f_3 = {-2.5815f, 0f, -176.2374f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-1650.431f, -3177.229f, 16.9898f};
			*uParam0.f_29.f_3 = {-4.9147f, 0f, -11.6415f};
			*uParam0.f_29.f_12 = 38.2303f;
			*uParam0.f_29.f_6 = {-1647.495f, -3173.728f, 16.6439f};
			*uParam0.f_29.f_6.f_3 = {-4.9147f, 0f, -11.6415f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_7 = {-1625.911f, -3167.556f, 11.11455f};
			*uParam0.f_10 = {-1688.58f, -3130.741f, 20.13538f};
			*uParam0.f_13 = 60.1875f;
			*uParam0.f_48 = {-1625.911f, -3167.556f, 11.11455f};
			*uParam0.f_51 = {-1688.58f, -3130.741f, 20.13538f};
			*uParam0.f_54 = 60.1875f;
			*uParam0.f_55 = {-966.084f, -2793.613f, 12.9648f};
			*uParam0.f_58 = 372;
			StringCopy(uParam0.f_59, "HANGAR_NAME", 16);
			*uParam0.f_67 = 1378600;
			StringCopy(uParam0.f_63, "HANGAR", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 13:
			*uParam0 = {-952.8823f, -2795.896f, 12.13233f};
			*uParam0.f_3 = {-966.7308f, -2787.975f, 16.13232f};
			*uParam0.f_6 = 17.5625f;
			*uParam0.f_44 = {-966.1285f, -2794.789f, 12.9648f};
			*uParam0.f_47 = 146.6324f;
			*uParam0.f_14 = {-1184.2f, -3345f, 17.5f};
			*uParam0.f_14.f_3 = {3.5f, 0f, 109f};
			*uParam0.f_14.f_12 = 30.3f;
			*uParam0.f_14.f_6 = {-1184.3f, -3345f, 16.6f};
			*uParam0.f_14.f_6.f_3 = {3.5f, 0f, 109f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-1272.6f, -3414.7f, 15.6f};
			*uParam0.f_29.f_3 = {-2.1f, 0f, -9.9f};
			*uParam0.f_29.f_12 = 37.8f;
			*uParam0.f_29.f_6 = {-1274f, -3414.4f, 15.6f};
			*uParam0.f_29.f_6.f_3 = {-2.1f, 0f, -9.9f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_7 = {-1247.688f, -3408.546f, 20.50418f};
			*uParam0.f_10 = {-1309.774f, -3372.294f, 11.36878f};
			*uParam0.f_13 = 66.1875f;
			*uParam0.f_48 = {-1247.688f, -3408.546f, 20.50418f};
			*uParam0.f_51 = {-1309.774f, -3372.294f, 11.36878f};
			*uParam0.f_54 = 66.1875f;
			*uParam0.f_55 = {-966.084f, -2793.613f, 12.9648f};
			*uParam0.f_58 = 372;
			StringCopy(uParam0.f_59, "HANGAR_NAME", 16);
			*uParam0.f_67 = 1378600;
			StringCopy(uParam0.f_63, "HANGAR", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 14:
			*uParam0 = {1727.302f, 3291.453f, 39.61911f};
			*uParam0.f_3 = {1744.108f, 3296.215f, 44.17199f};
			*uParam0.f_6 = 4.6875f;
			*uParam0.f_44 = {1737.53f, 3289.239f, 40.1448f};
			*uParam0.f_47 = 14.8763f;
			*uParam0.f_14 = {1739.749f, 3280.445f, 45.8124f};
			*uParam0.f_14.f_3 = {-12.3854f, 0f, 14.8379f};
			*uParam0.f_14.f_12 = 50f;
			*uParam0.f_14.f_6 = {1739.749f, 3280.445f, 45.8124f};
			*uParam0.f_14.f_6.f_3 = {-12.3854f, 0f, 14.8379f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {1739.749f, 3280.445f, 45.8124f};
			*uParam0.f_29.f_3 = {-12.3854f, 0f, 14.8379f};
			*uParam0.f_29.f_12 = 50f;
			*uParam0.f_29.f_6 = {1739.749f, 3280.445f, 45.8124f};
			*uParam0.f_29.f_6.f_3 = {-12.3854f, 0f, 14.8379f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_7 = {1718.056f, 3305.019f, 45.70922f};
			*uParam0.f_10 = {1745.706f, 3313.101f, 39.758f};
			*uParam0.f_13 = 28.125f;
			*uParam0.f_48 = {1718.056f, 3305.019f, 45.70922f};
			*uParam0.f_51 = {1745.706f, 3313.101f, 39.758f};
			*uParam0.f_54 = 28.125f;
			*uParam0.f_55 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_58 = 372;
			StringCopy(uParam0.f_59, "HANGAR_NAME2", 16);
			*uParam0.f_67 = 1378600;
			StringCopy(uParam0.f_63, "HANGAR", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 18:
			*uParam0 = {-709.095f, -1414.229f, 3.188014f};
			*uParam0.f_3 = {-712.123f, -1411.655f, 6.938014f};
			*uParam0.f_6 = 3.25f;
			*uParam0.f_7 = {-739.1531f, -1439.509f, 3.188024f};
			*uParam0.f_10 = {-753.7792f, -1426.756f, 7.188024f};
			*uParam0.f_13 = 17.5625f;
			*uParam0.f_44 = {-700.9434f, -1418.169f, 4.0005f};
			*uParam0.f_47 = 142.6382f;
			*uParam0.f_14 = {-738f, -1440f, 6.3f};
			*uParam0.f_14.f_3 = {-2.5f, 0f, 48.3f};
			*uParam0.f_14.f_12 = 45f;
			*uParam0.f_14.f_6 = {-738f, -1440f, 6f};
			*uParam0.f_14.f_6.f_3 = {-2.5f, 0f, 48.3f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-749.3f, -1425.7f, 5.9f};
			*uParam0.f_29.f_3 = {-9.9f, 0.2f, -152.8f};
			*uParam0.f_29.f_12 = 40f;
			*uParam0.f_29.f_6 = {-749.9f, -1426f, 5.9f};
			*uParam0.f_29.f_6.f_3 = {-9.9f, 0.2f, -152.8f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {-738.7791f, -1439.377f, 9.125515f};
			*uParam0.f_51 = {-755.9111f, -1425.006f, 1.688014f};
			*uParam0.f_54 = 18.0625f;
			*uParam0.f_55 = {-708.48f, -1414.66f, 4f};
			*uParam0.f_58 = 370;
			StringCopy(uParam0.f_59, "HELIPAD_NAME", 16);
			*uParam0.f_67 = 419850;
			StringCopy(uParam0.f_63, "HELIPAD", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 19:
			*uParam0 = {-709.095f, -1414.229f, 3.188014f};
			*uParam0.f_3 = {-712.123f, -1411.655f, 6.938014f};
			*uParam0.f_6 = 3.25f;
			*uParam0.f_7 = {-755.6812f, -1459.234f, 3.188023f};
			*uParam0.f_10 = {-770.7671f, -1446.867f, 7.188024f};
			*uParam0.f_13 = 17.5625f;
			*uParam0.f_44 = {-700.9434f, -1418.169f, 4.0005f};
			*uParam0.f_47 = 142.6382f;
			*uParam0.f_14 = {-754.6f, -1460.5f, 6.4f};
			*uParam0.f_14.f_3 = {-4.8f, 0f, 48.5f};
			*uParam0.f_14.f_12 = 45f;
			*uParam0.f_14.f_6 = {-754.6f, -1460.6f, 6.1f};
			*uParam0.f_14.f_6.f_3 = {-2.2f, 0f, 48.5f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-771.8f, -1452.6f, 5.7f};
			*uParam0.f_29.f_3 = {-4.1f, 0f, -98.6f};
			*uParam0.f_29.f_12 = 40f;
			*uParam0.f_29.f_6 = {-771.8f, -1452.1f, 5.7f};
			*uParam0.f_29.f_6.f_3 = {-4.1f, 0f, -98.6f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {-755.5715f, -1459.453f, 9.125514f};
			*uParam0.f_51 = {-771.4204f, -1446.235f, 1.688017f};
			*uParam0.f_54 = 18.0625f;
			*uParam0.f_55 = {-708.48f, -1414.66f, 4f};
			*uParam0.f_58 = 370;
			StringCopy(uParam0.f_59, "HELIPAD_NAME", 16);
			*uParam0.f_67 = 419850;
			StringCopy(uParam0.f_63, "HELIPAD", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 20:
			*uParam0 = {1763.424f, 3238.282f, 40.32022f};
			*uParam0.f_3 = {1786.589f, 3239.016f, 47.18534f};
			*uParam0.f_6 = 17.75f;
			*uParam0.f_7 = {1763.424f, 3238.282f, 40.32022f};
			*uParam0.f_10 = {1786.589f, 3239.016f, 47.18534f};
			*uParam0.f_13 = 17.75f;
			*uParam0.f_44 = {1761.122f, 3250.125f, 40.733f};
			*uParam0.f_47 = 236.5858f;
			*uParam0.f_14 = {1779.245f, 3222.477f, 48.5795f};
			*uParam0.f_14.f_3 = {-31.2473f, 0f, 7.2108f};
			*uParam0.f_14.f_12 = 40f;
			*uParam0.f_14.f_6 = {1779.245f, 3222.477f, 48.5795f};
			*uParam0.f_14.f_6.f_3 = {-31.2473f, 0f, 7.2108f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {1779.245f, 3222.477f, 48.5795f};
			*uParam0.f_29.f_3 = {-31.2473f, 0f, 7.2108f};
			*uParam0.f_29.f_12 = 40f;
			*uParam0.f_29.f_6 = {1779.245f, 3222.477f, 48.5795f};
			*uParam0.f_29.f_6.f_3 = {-31.2473f, 0f, 7.2108f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {1802.327f, 3245.165f, 46.95544f};
			*uParam0.f_51 = {1755.04f, 3237.17f, 38.6937f};
			*uParam0.f_54 = 28.125f;
			*uParam0.f_55 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_58 = 370;
			StringCopy(uParam0.f_59, "HELIPAD_NAME2", 16);
			*uParam0.f_67 = 0;
			StringCopy(uParam0.f_63, "HELIPAD", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 15:
			*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
			*uParam0.f_3 = {-827.868f, -1364.867f, 6.750514f};
			*uParam0.f_6 = 3.3125f;
			*uParam0.f_7 = {-845.2216f, -1356.04f, -0.212093f};
			*uParam0.f_10 = {-841.6451f, -1365.777f, 3.787907f};
			*uParam0.f_13 = 17.5625f;
			*uParam0.f_44 = {-835.86f, -1358.347f, 0.6102f};
			*uParam0.f_47 = 112.3787f;
			*uParam0.f_14 = {-859.6f, -1374f, 4.3f};
			*uParam0.f_14.f_3 = {-3f, 0f, -48.3f};
			*uParam0.f_14.f_12 = 32.9f;
			*uParam0.f_14.f_6 = {-859.7f, -1374f, 3f};
			*uParam0.f_14.f_6.f_3 = {-3f, 0f, -48.3f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-837.2f, -1350.3f, 2.4f};
			*uParam0.f_29.f_3 = {-7f, 0f, 156.1f};
			*uParam0.f_29.f_12 = 47.5f;
			*uParam0.f_29.f_6 = {-837.4f, -1350.8f, 2.3f};
			*uParam0.f_29.f_6.f_3 = {-7f, 0f, 156.1f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {-860.0693f, -1314.887f, -3.331177f};
			*uParam0.f_51 = {-826.6461f, -1410.447f, 4.787533f};
			*uParam0.f_54 = 19.625f;
			*uParam0.f_55 = {-827.912f, -1366.736f, 4.0005f};
			*uParam0.f_58 = 371;
			StringCopy(uParam0.f_59, "MARINA_NAME", 16);
			*uParam0.f_67 = 75000;
			StringCopy(uParam0.f_63, "MARINA", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 16:
			*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
			*uParam0.f_3 = {-827.868f, -1364.867f, 6.750514f};
			*uParam0.f_6 = 3.3125f;
			*uParam0.f_7 = {-848.8177f, -1347.786f, -0.212093f};
			*uParam0.f_10 = {-845.2482f, -1357.936f, 3.787908f};
			*uParam0.f_13 = 17.5625f;
			*uParam0.f_44 = {-839.2461f, -1349.525f, 0.6102f};
			*uParam0.f_47 = 110.6762f;
			*uParam0.f_14 = {-866.1f, -1365.6f, 4.3f};
			*uParam0.f_14.f_3 = {-3.6f, 0f, -54.6f};
			*uParam0.f_14.f_12 = 30f;
			*uParam0.f_14.f_6 = {-866.1f, -1365.6f, 3f};
			*uParam0.f_14.f_6.f_3 = {-3.6f, 0f, -54.6f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-838.7f, -1343.3f, 2.9f};
			*uParam0.f_29.f_3 = {-7.5f, 0f, 142.6f};
			*uParam0.f_29.f_12 = 47.5f;
			*uParam0.f_29.f_6 = {-838.8f, -1343.2f, 2.9f};
			*uParam0.f_29.f_6.f_3 = {-7.5f, 0f, 142.6f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {-860.0693f, -1314.887f, -3.331177f};
			*uParam0.f_51 = {-826.6461f, -1410.447f, 4.787533f};
			*uParam0.f_54 = 19.625f;
			*uParam0.f_55 = {-827.912f, -1366.736f, 4.0005f};
			*uParam0.f_58 = 371;
			StringCopy(uParam0.f_59, "MARINA_NAME", 16);
			*uParam0.f_67 = 75000;
			StringCopy(uParam0.f_63, "MARINA", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 17:
			*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
			*uParam0.f_3 = {-827.868f, -1364.867f, 6.750514f};
			*uParam0.f_6 = 3.3125f;
			*uParam0.f_7 = {-851.6987f, -1339.128f, -0.212129f};
			*uParam0.f_10 = {-848.128f, -1349.168f, 3.787905f};
			*uParam0.f_13 = 17.5625f;
			*uParam0.f_44 = {-842.0763f, -1341.401f, 0.6102f};
			*uParam0.f_47 = 109.8916f;
			*uParam0.f_14 = {-866.3f, -1357.9f, 4.3f};
			*uParam0.f_14.f_3 = {-4.4f, 0f, -46.6f};
			*uParam0.f_14.f_12 = 31.2f;
			*uParam0.f_14.f_6 = {-866.3f, -1357.9f, 3f};
			*uParam0.f_14.f_6.f_3 = {-4.4f, 0f, -46.6f};
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7f;
			*uParam0.f_29 = {-841.6f, -1336.3f, 2.5f};
			*uParam0.f_29.f_3 = {-3.6f, 0f, 137.7f};
			*uParam0.f_29.f_12 = 47.5f;
			*uParam0.f_29.f_6 = {-841.8f, -1336.1f, 2.5f};
			*uParam0.f_29.f_6.f_3 = {-3.6f, 0f, 137.7f};
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 11f;
			*uParam0.f_48 = {-860.0693f, -1314.887f, -3.331177f};
			*uParam0.f_51 = {-826.6461f, -1410.447f, 4.787533f};
			*uParam0.f_54 = 19.625f;
			*uParam0.f_55 = {-827.912f, -1366.736f, 4.0005f};
			*uParam0.f_58 = 371;
			StringCopy(uParam0.f_59, "MARINA_NAME", 16);
			*uParam0.f_67 = 75000;
			StringCopy(uParam0.f_63, "MARINA", 16);
			*uParam0.f_80 = 1;
			break;
		
		case 21:
			*uParam0 = {-63.38147f, 84.0594f, 70.52139f};
			*uParam0.f_3 = {-66.17774f, 77.95913f, 74.05372f};
			*uParam0.f_6 = 5.9375f;
			*uParam0.f_44 = {-65.2041f, 81.0524f, 70.5666f};
			*uParam0.f_47 = 243.8699f;
			*uParam0.f_7 = {189.7074f, -1017.569f, -105f};
			*uParam0.f_10 = {207.8325f, -1017.774f, -96.63576f};
			*uParam0.f_13 = 23f;
			*uParam0.f_14 = {191f, -1026.9f, -98.3f};
			*uParam0.f_14.f_3 = {-2.4f, 0f, -77f};
			*uParam0.f_14.f_6 = {190f, -1026.9f, -98.3f};
			*uParam0.f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
			*uParam0.f_14.f_12 = 37f;
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7.5f;
			*uParam0.f_29 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_3 = {-2.4f, 0f, 112.3f};
			*uParam0.f_29.f_6 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_6.f_3 = {-2.4f, 0f, 141f};
			*uParam0.f_29.f_12 = 37f;
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_29.f_14 = 11.5f;
			*uParam0.f_48 = {221.9979f, -981.6635f, -100.1874f};
			*uParam0.f_51 = {234.201f, -981.7582f, -97.62492f};
			*uParam0.f_54 = 6.25f;
			*uParam0.f_55 = {-62.62f, 80.03f, 70.62f};
			*uParam0.f_58 = 369;
			StringCopy(uParam0.f_59, "GARAGE_NAME1", 16);
			*uParam0.f_67 = 30000;
			StringCopy(uParam0.f_63, "CAR_GAR", 16);
			*uParam0.f_68 = 243.8699f;
			*uParam0.f_69 = 1;
			*(uParam0.f_70[0 /*3*/]) = {-67.9068f, 82.2664f, 70.5153f};
			*uParam0.f_77[0] = 66.202f;
			*(uParam0.f_70[1 /*3*/]) = {-65.1234f, 81.2517f, 70.5644f};
			*uParam0.f_77[1] = 71.6237f;
			*uParam0.f_80 = 1;
			break;
		
		case 22:
			*uParam0 = {-72.41166f, -1824.142f, 25.81704f};
			*uParam0.f_3 = {-68.70254f, -1819.642f, 29.37954f};
			*uParam0.f_6 = 5.9375f;
			*uParam0.f_44 = {-70.1992f, -1823.225f, 25.942f};
			*uParam0.f_47 = 46.1535f;
			*uParam0.f_7 = {189.7074f, -1017.569f, -105f};
			*uParam0.f_10 = {207.8325f, -1017.774f, -96.63576f};
			*uParam0.f_13 = 23f;
			*uParam0.f_14 = {191f, -1026.9f, -98.3f};
			*uParam0.f_14.f_3 = {-2.4f, 0f, -77f};
			*uParam0.f_14.f_6 = {190f, -1026.9f, -98.3f};
			*uParam0.f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
			*uParam0.f_14.f_12 = 37f;
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7.5f;
			*uParam0.f_29 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_3 = {-2.4f, 0f, 112.3f};
			*uParam0.f_29.f_6 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_6.f_3 = {-2.4f, 0f, 141f};
			*uParam0.f_29.f_12 = 37f;
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_29.f_14 = 11.5f;
			*uParam0.f_48 = {221.9979f, -981.6635f, -100.1874f};
			*uParam0.f_51 = {234.201f, -981.7582f, -97.62492f};
			*uParam0.f_54 = 6.25f;
			*uParam0.f_55 = {-71.29f, -1821.68f, 25.94f};
			*uParam0.f_58 = 369;
			StringCopy(uParam0.f_59, "GARAGE_NAME2", 16);
			*uParam0.f_67 = 30000;
			StringCopy(uParam0.f_63, "CAR_GAR", 16);
			*uParam0.f_68 = 53.0985f;
			*uParam0.f_69 = 1;
			*(uParam0.f_70[0 /*3*/]) = {-64.2268f, -1832.598f, 25.8666f};
			*uParam0.f_77[0] = 274.6339f;
			*(uParam0.f_70[1 /*3*/]) = {-68.5531f, -1824.377f, 25.9424f};
			*uParam0.f_77[1] = 215.8295f;
			*uParam0.f_80 = 1;
			break;
		
		case 23:
			*uParam0 = {-220.7794f, -1159.28f, 21.90302f};
			*uParam0.f_3 = {-220.7273f, -1165.265f, 25.45053f};
			*uParam0.f_6 = 5.9375f;
			*uParam0.f_44 = {-220.7592f, -1162.277f, 22.0242f};
			*uParam0.f_47 = 271.2097f;
			*uParam0.f_7 = {189.7074f, -1017.569f, -105f};
			*uParam0.f_10 = {207.8325f, -1017.774f, -96.63576f};
			*uParam0.f_13 = 23f;
			*uParam0.f_14 = {191f, -1026.9f, -98.3f};
			*uParam0.f_14.f_3 = {-2.4f, 0f, -77f};
			*uParam0.f_14.f_6 = {190f, -1026.9f, -98.3f};
			*uParam0.f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
			*uParam0.f_14.f_12 = 37f;
			*uParam0.f_14.f_13 = 0.2f;
			*uParam0.f_14.f_14 = 7.5f;
			*uParam0.f_29 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_3 = {-2.4f, 0f, 112.3f};
			*uParam0.f_29.f_6 = {207.3f, -1013f, -98.2f};
			*uParam0.f_29.f_6.f_3 = {-2.4f, 0f, 141f};
			*uParam0.f_29.f_12 = 37f;
			*uParam0.f_29.f_13 = 0.2f;
			*uParam0.f_29.f_14 = 11.5f;
			*uParam0.f_48 = {221.9979f, -981.6635f, -100.1874f};
			*uParam0.f_51 = {234.201f, -981.7582f, -97.62492f};
			*uParam0.f_54 = 6.25f;
			*uParam0.f_55 = {-218.35f, -1162.18f, 22.02f};
			*uParam0.f_58 = 369;
			StringCopy(uParam0.f_59, "GARAGE_NAME3", 16);
			*uParam0.f_67 = 30000;
			StringCopy(uParam0.f_63, "CAR_GAR", 16);
			*uParam0.f_68 = 271.2097f;
			*uParam0.f_69 = 1;
			*(uParam0.f_70[0 /*3*/]) = {-222.1935f, -1162.113f, 22.0204f};
			*uParam0.f_77[0] = 358.5703f;
			*(uParam0.f_70[1 /*3*/]) = {-220.8189f, -1162.302f, 22.0242f};
			*uParam0.f_77[1] = 70.2711f;
			*uParam0.f_80 = 1;
			break;
	}
	return *uParam0.f_80;
}

auto func_371()
{
	func_372();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_372()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_297(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_296(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_24(Global_101154.f_1826.f_539.f_3549))
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

void func_373()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_blip_exist(Global_68319.f_208[iVar0]))
		{
			remove_blip(&(Global_68319.f_208[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iVar0]))
		{
			if (is_vehicle_driveable(Global_68319.f_139[iVar0], 0))
			{
				set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iVar0]));
				Global_68319.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (does_cam_exist(Local_402.f_110))
	{
		set_cam_active(Local_402.f_110, false);
		destroy_cam(Local_402.f_110, 0);
	}
	if (does_cam_exist(Local_402.f_111))
	{
		set_cam_active(Local_402.f_111, false);
		destroy_cam(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_183();
		freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
	}
	if (does_blip_exist(Global_68319.f_583))
	{
		remove_blip(&(Global_68319.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_65(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_65(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_65(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_65(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_68319.f_577)
		{
			func_164(47, 1);
			func_162(47, 1);
			Global_68319.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_68319.f_553 = 0;
	terminate_this_thread();
}

void func_374()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[iVar0]))
		{
			delete_object(&(iLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_375(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	if (!GAMEPLAY::IS_BIT_SET(iLocal_936[iVar0], iVar1))
	{
		GAMEPLAY::SET_BIT(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_376()
{
	int iVar0;
	
	if (func_206(25))
	{
		if (Global_101154.f_18807.f_69[22 /*78*/].f_66 != 0 && !func_37(Global_101154.f_18807.f_69[22 /*78*/].f_66, 0))
		{
			Global_101154.f_18807.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_101154.f_18807.f_69[22 /*78*/].f_77 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_65 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_62 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_63 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_64 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_5 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_6 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_7 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_101154.f_18807.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_101154.f_18807.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_206(21) && Global_101154.f_18807.f_69[9 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[9 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_206(22) && Global_101154.f_18807.f_69[10 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[10 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_206(23) && Global_101154.f_18807.f_69[11 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[11 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_206(26) && !func_37(Global_101154.f_18807.f_69[12 /*78*/].f_66, 0))
	{
		func_377(26, 0);
	}
	if (func_206(27) && !func_37(Global_101154.f_18807.f_69[13 /*78*/].f_66, 0))
	{
		func_377(27, 0);
	}
	if (func_206(28) && !func_37(Global_101154.f_18807.f_69[14 /*78*/].f_66, 0))
	{
		func_377(28, 0);
	}
	if (func_206(29) && !func_37(Global_101154.f_18807.f_69[15 /*78*/].f_66, 0))
	{
		func_377(29, 0);
	}
	if (func_206(30) && !func_37(Global_101154.f_18807.f_69[16 /*78*/].f_66, 0))
	{
		func_377(30, 0);
	}
	if (func_206(31) && !func_37(Global_101154.f_18807.f_69[17 /*78*/].f_66, 0))
	{
		func_377(31, 0);
	}
	if (func_206(32) && !func_37(Global_101154.f_18807.f_69[18 /*78*/].f_66, 0))
	{
		func_377(32, 0);
	}
	if (func_206(33) && !func_37(Global_101154.f_18807.f_69[19 /*78*/].f_66, 0))
	{
		func_377(33, 0);
	}
	if (func_206(34) && !func_37(Global_101154.f_18807.f_69[20 /*78*/].f_66, 0))
	{
		func_377(34, 0);
	}
}

void func_377(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_63(iParam0, 0))
		{
			func_235(iParam0, 1, 0);
			func_235(iParam0, 2, 0);
			func_235(iParam0, 3, 0);
			func_235(iParam0, 4, 0);
			func_235(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_235(iParam0, 0, 0);
	}
}

bool func_378()
{
	return false;
}

bool func_379()
{
	return true;
}

bool func_380()
{
	return true;
}

bool isDLCPresent_B6DE61E2()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

void initializeSasquatchLocations(auto pSasquatchData)
{
	*pSasquatchData = 0;
	*pSasquatchData.f_1 = -1;
	*pSasquatchData.f_2 = -1;
	*pSasquatchData.f_9 = {stringConcat_1_0_3_2_c64("C_SF", "DL", "AST", "X1/BE")}; //DLC_SFX1/BEAST
	getSasquatchEventPeyoteLocations_X();
	getSasquatchBodyAndCPLocations_Y();
	getSasquatchPlaneGraveyardLocations_X();
}

void getSasquatchPlaneGraveyardLocations_X()
{
	Global_SasquatchPlaneGraveyardLocations1 = 2405.849f; //,3029.541f,48.1526f
	Global_SasquatchPlaneGraveyardLocations2 = 2408.22f; //,3031.5f,47.15
	Global_SasquatchPlaneGraveyardLocations3 = 2386.096f; //,3094.044f,58.0271f
	Global_SasquatchPlaneGraveyardLocations3Radius = 69.1875f; //,86.3125f,15.875f
	Global_SasquatchPlaneGraveyardLocations[0 /*3*/] = 2417.105f; //,3113.503f,47.1662f
	Global_SasquatchPlaneGraveyardLocations[1 /*3*/] = 2407.058f; //,3116.806f,47.2119f
	Global_SasquatchPlaneGraveyardLocations[2 /*3*/] = 2371.92f; //,3080.013f,47.153f
	Global_SasquatchPlaneGraveyardLocations[3 /*3*/] = 2399.583f; //,3091.844f,47.1531f
	Global_SasquatchPlaneGraveyardLocations[4 /*3*/] = 2416.519f; //,3045.795f,47.1523f
	Global_SasquatchPlaneGraveyardLocations[5 /*3*/] = 2430.345f; //,3103.746f,47.1531f
	Global_SasquatchPlaneGraveyardLocations[6 /*3*/] = 2385.819f; //,3031.438f,47.1529f
	Global_SasquatchPlaneGraveyardLocHeading[0] = 157.8636f; // Heading of the above locations
	Global_SasquatchPlaneGraveyardLocHeading[1] = 174.7226f;
	Global_SasquatchPlaneGraveyardLocHeading[2] = 270.7562f;
	Global_SasquatchPlaneGraveyardLocHeading[3] = 190.7495f;
	Global_SasquatchPlaneGraveyardLocHeading[4] = 27.6506f;
	Global_SasquatchPlaneGraveyardLocHeading[5] = 358.1218f;
	Global_SasquatchPlaneGraveyardLocHeading[6] = 339.4363f;
	Global_SasquatchPlaneGraveyardLocations5 = 2399.82f; //,3058.12f,53.42
	Global_SasquatchPlaneGraveyardLocations6 = 2414.7f; //,3052.8f,28.2
	setBits(&Global_SasquatchFlags, 64); // X Coords for Plane Graveyard Flag - 00000000 01000000
}

void setBits(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void getSasquatchBodyAndCPLocations_Y()
{
	Global_SasquatchBodyLocations[0 /*3*/].f_1 = 5141.01f;
	Global_SasquatchBodyLocations[1 /*3*/].f_1 = 6048.71f;
	Global_SasquatchBodyLocations[2 /*3*/].f_1 = 6185.32f;
	Global_SasquatchBodyLocations[3 /*3*/].f_1 = 5180.99f;
	Global_SasquatchBodyLocations[4 /*3*/].f_1 = 4582.72f;
	Global_SasquatchBodyLocations[5 /*3*/].f_1 = 4831.82f;
	Global_SasquatchBodyLocations[6 /*3*/].f_1 = 4322.66f;
	Global_SasquatchBodyLocations[7 /*3*/].f_1 = 3503.92f;
	Global_SasquatchBodyLocations[8 /*3*/].f_1 = 3777.54f;
	Global_SasquatchBodyLocations[9 /*3*/].f_1 = 3810.8f;
	Global_SasquatchBodyLocations[10 /*3*/].f_1 = 3095.88f;
	Global_SasquatchCheckpointLocations[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_SasquatchCheckpointLocations[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_SasquatchCheckpointLocations[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_SasquatchCheckpointLocations[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_SasquatchCheckpointLocations[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_SasquatchCheckpointLocations[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_SasquatchCheckpointLocations[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_SasquatchCheckpointLocations[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_SasquatchCheckpointLocations[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_SasquatchCheckpointLocations[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_SasquatchCheckpointLocations[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_SasquatchCheckpointLocations[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_SasquatchCheckpointLocations[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_SasquatchCheckpointLocations[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_SasquatchCheckpointLocations[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_SasquatchCheckpointLocations[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_SasquatchCheckpointLocations[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_SasquatchCheckpointLocations[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_SasquatchCheckpointLocations[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_SasquatchCheckpointLocations[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_SasquatchCheckpointLocations[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_SasquatchCheckpointLocations[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_SasquatchCheckpointLocations[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_SasquatchCheckpointLocations[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_SasquatchCheckpointLocations[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_SasquatchCheckpointLocations[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_SasquatchCheckpointLocations[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_SasquatchCheckpointLocations[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_SasquatchCheckpointLocations[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_SasquatchCheckpointLocations[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_SasquatchCheckpointLocations[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_SasquatchCheckpointLocations[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_SasquatchCheckpointLocations[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_SasquatchCheckpointLocations[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_SasquatchCheckpointLocations[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_SasquatchCheckpointLocations[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_SasquatchCheckpointLocations[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_SasquatchCheckpointLocations[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_SasquatchCheckpointLocations[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_SasquatchCheckpointLocations[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_SasquatchCheckpointLocations[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_SasquatchCheckpointLocations[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_SasquatchCheckpointLocations[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_SasquatchCheckpointLocations[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_SasquatchCheckpointLocations[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_SasquatchCheckpointLocations[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_SasquatchCheckpointLocations[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_SasquatchCheckpointLocations[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_SasquatchCheckpointLocations[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_SasquatchCheckpointLocations[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_SasquatchCheckpointLocations[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_SasquatchCheckpointLocations[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_SasquatchCheckpointLocations[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_SasquatchCheckpointLocations[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_SasquatchCheckpointLocations[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_SasquatchCheckpointLocations[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_SasquatchCheckpointLocations[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_SasquatchCheckpointLocations[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_SasquatchCheckpointLocations[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_SasquatchCheckpointLocations[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_SasquatchCheckpointLocations[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_SasquatchCheckpointLocations[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_SasquatchCheckpointLocations[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	setBits(&Global_SasquatchFlags, 16); // Y Coords for Body and Checkpoints Flag - 00000000 00010000
}

void getSasquatchEventPeyoteLocations_X()
{
	Global_SasquatchPeyoteLocations[0 /*3*/] = -1567.382f; // Peyote X Location
	Global_SasquatchPeyoteLocations[1 /*3*/] = -1436.305f;
	Global_SasquatchPeyoteLocations[2 /*3*/] = 31.2408f;
	Global_SasquatchPeyoteLocations[3 /*3*/] = 278.1924f;
	Global_SasquatchPeyoteLocations[4 /*3*/] = 1116.002f;
	Global_SasquatchPeyoteLocations[5 /*3*/] = 1676.193f;
	Global_SasquatchPeyoteLocations2[0 /*3*/] = -1592.642f;
	Global_SasquatchPeyoteLocations2[1 /*3*/] = -1573.501f;
	Global_SasquatchPeyoteLocations2[2 /*3*/] = -1459.359f;
	Global_SasquatchPeyoteLocations2[3 /*3*/] = 21.1005f;
	Global_SasquatchPeyoteLocations2[4 /*3*/] = 262.9409f;
	Global_SasquatchPeyoteLocations2[5 /*3*/] = 1091.07f;
	setBits(&Global_SasquatchFlags, 1); // X Coords for Peyotes Flag - 00000000 00000001
}

