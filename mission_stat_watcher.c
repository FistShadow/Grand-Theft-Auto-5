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
	struct<563> Local_45 = 0;
	auto uLocal_608 = 0;
	auto uLocal_609 = 0;
	auto uLocal_610 = 0;
	auto uLocal_611 = 0;
	auto uLocal_612 = 0;
	auto uLocal_613 = 0;
	auto uLocal_614 = 0;
	auto uLocal_615 = 0;
	auto uLocal_616 = 0;
	auto uLocal_617 = 0;
	auto uLocal_618 = 0;
	auto uLocal_619 = 0;
	auto uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	Vector3 fLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	auto uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
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
	iLocal_623 = iLocal_622;
	iLocal_624 = iLocal_623;
	fLocal_629 = 100f;
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 1)
	{
		terminate_this_thread();
	}
	Global_55743 = 0;
	Global_55750 = 0;
	iVar0 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_108();
		Global_67844 = 0;
		Global_55744 = 0;
		Global_55770 = 0;
		terminate_this_thread();
	}
	iVar1 = 0;
	wait(0);
	func_106();
	while (!Global_55742)
	{
		wait(200);
		if (Global_55750)
		{
			func_108();
			terminate_this_thread();
		}
	}
	Global_55757 = 0;
	Global_55744 = 1;
	while (!Global_55743)
	{
		if (Global_67844 > 0)
		{
			func_100();
			if (Global_55777 == -1)
			{
				Global_55777 = GAMEPLAY::GET_GAME_TIMER();
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - Global_55777 > 1000)
			{
				func_99();
			}
		}
		if (Global_55750)
		{
			func_108();
			Global_55744 = 0;
			terminate_this_thread();
		}
		wait(0);
	}
	Global_55744 = 0;
	if (func_98())
	{
		while (func_98())
		{
			wait(0);
		}
	}
	iVar2 = false;
	while (!iVar2)
	{
		if (!Global_55745 == iLocal_631)
		{
			if (Global_55745)
			{
				settimerb(0);
				iLocal_621 = 0;
				Global_55760 = 0;
			}
			iLocal_631 = Global_55745;
		}
		while (Global_55749)
		{
			wait(1000);
		}
		if (Global_55743 && !Global_55750)
		{
			if (Global_55742 || iLocal_633)
			{
				Global_55747 = 0;
				if (iLocal_632)
				{
				}
				if (Global_55743)
				{
				}
				if (!iLocal_632 == Global_55743)
				{
					func_97(&Local_45);
					Local_45.f_562 = 1;
					func_96();
					func_95();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_67844)
					{
						if (Global_67845[iVar3 /*9*/] > 0)
						{
							if (Global_55974[Global_67845[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_55974[Global_67845[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_55974[Global_67845[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_67845[iVar3 /*9*/].f_1 == 0)
										{
											Global_67845[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					iVar4 = false;
					if ((Global_69749 && !Global_55739) || Global_55751)
					{
						iVar4 = true;
					}
					iVar5 = false;
					if (is_screen_faded_in() || is_screen_fading_in())
					{
						iVar5 = true;
					}
					else
					{
						if (Global_91317.f_8)
						{
							iVar5 = true;
						}
						if (Global_55769)
						{
							iVar5 = true;
						}
					}
					if (func_94(0))
					{
						iVar5 = true;
						Global_55769 = 1;
					}
					iVar6 = Global_67995;
					if (Global_55752)
					{
						func_91(Global_55753);
						iVar0 = 2;
						func_90(&Local_45, "HISHPA", &Global_55764, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_89(&Local_45, 3, "ACTATAKE_AG", "", Global_101154.f_1.f_126[Global_55753 /*23*/], 0, 0, 0);
						}
						else
						{
							func_89(&Local_45, 3, "POTATAKE", "", Global_101154.f_1.f_126[Global_55753 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_87841[Global_55753 /*38*/].f_37)
						{
							if (Global_87841[Global_55753 /*38*/].f_31[iVar7] > 0)
							{
								func_89(&Local_45, 3, func_88(Global_87841[Global_55753 /*38*/].f_25[iVar7]), "", -1 * Global_87841[Global_55753 /*38*/].f_31[iVar7], 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_89(&Local_45, 3, "ACTATAKE_M", "", Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_45, 3, "ACTATAKE_F", "", Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_45, 3, "ACTATAKE_T", "", Global_101154.f_1.f_126[Global_55753 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_87831.f_7 > 0)
						{
							func_89(&Local_45, 3, "ACTATAKE_L", "", Global_87831.f_7, 0, 0, 0);
						}
						uVar8 = func_86(func_87(Global_55753));
						iVar9 = 0;
						iVar10 = false;
						iVar7 = 0;
						while (iVar7 < Global_87640[uVar8 /*19*/])
						{
							if (!func_85(Global_101154.f_1.f_12[uVar8 /*6*/][iVar7]))
							{
								iVar9 += Global_101154.f_1.f_126[Global_55753 /*23*/].f_17[iVar7];
							}
							else
							{
								iVar10 += Global_101154.f_1.f_126[Global_55753 /*23*/].f_17[iVar7];
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_89(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_89(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_94(0))
							{
								switch (iVar6)
								{
									case 90:
										STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										STATS::STAT_SET_INT(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_89(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_90(&Local_45, "MISHPA", &Global_55764, 0);
					}
					if (Global_67844 > 0)
					{
						func_70(&Local_45);
					}
					if (!Global_55739)
					{
						func_63();
					}
					while (!iVar5)
					{
						if (is_screen_faded_in() || is_screen_fading_in())
						{
							iVar5 = true;
						}
						wait(0);
					}
					if ((iVar5 || Global_55769) && !iVar4)
					{
						if (!Global_55751)
						{
							func_59(&Local_45, 0, 0);
						}
						iVar11 = false;
						if (!Global_67994)
						{
							switch (Global_67995)
							{
								case 50:
								case 51:
								case 52:
									set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
									func_55(1);
									iVar11 = true;
									break;
								
								default:
									set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
									func_55(0);
									iVar11 = true;
									break;
							}
						}
						else
						{
							set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
							func_55(1);
							iVar11 = true;
						}
						iVar1 = func_54();
						request_additional_text("MISHSTA", 3);
						while (!has_additional_text_loaded(3))
						{
							wait(0);
						}
						iLocal_634 = true;
						while (is_cutscene_playing())
						{
							wait(0);
						}
						while (is_player_dead(get_player_index()))
						{
							wait(0);
						}
						func_59(&Local_45, 1, 0);
						set_audio_flag("HoldMissionCompleteWhenPrepared", 0);
						if (iVar11)
						{
							while (!_0x6F259F82D873B8B8())
							{
								wait(0);
							}
						}
						unregister_script_with_audio();
					}
					if (Global_55742)
					{
						iLocal_633 = 1;
						Global_55742 = 0;
					}
					settimera(0);
				}
				if (iLocal_634 && !Global_55750)
				{
					if (_get_number_of_instances_of_streamed_script(joaat("appcamera")) > 0)
					{
						func_51(0);
					}
					if (Global_67844 > 0 || Global_55739)
					{
						if (Global_55769)
						{
							_set_2d_layer(7);
						}
						if (iVar1 && !Global_55739)
						{
							Global_36611 = 1;
						}
						if (!Global_55751)
						{
							if (func_21(&Local_45, 0, to_float(iVar0), 0, 0, 0))
							{
								Global_55750 = 1;
							}
							func_20();
						}
						if (Global_55769)
						{
							_set_2d_layer(7);
						}
					}
					func_19(1);
					if (!is_screen_faded_in())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				iLocal_632 = Global_55743;
				if (Global_55740)
				{
				}
				else
				{
					is_player_dead(get_player_index());
					if (get_entity_health(get_player_ped(get_player_index())) < 1)
					{
						Global_55751 = 1;
					}
					if (((((func_98() || func_9()) || Global_55750) || Global_69758) || Global_55751) || !iLocal_634)
					{
						Global_55739 = 0;
						Global_55743 = 0;
						iLocal_633 = 0;
						Global_55746 = 0;
						Global_55747 = 0;
						Global_55757 = 0;
						Global_55760 = 0;
						func_19(0);
						func_2();
						Global_55750 = 0;
						iVar2 = true;
					}
				}
			}
		}
		wait(0);
	}
	func_1(&Local_45);
	Global_25369 = 0;
	Global_55754 = 0;
	terminate_this_thread();
}

void func_1(auto uParam0)
{
	if (*uParam0.f_1 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(uParam0.f_1);
		*uParam0.f_1 = 0;
	}
	if (*uParam0.f_562 && *uParam0.f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
			_push_scaleform_movie_function_parameter_bool(false);
			_pop_scaleform_movie_function_void();
		}
		set_scaleform_movie_as_no_longer_needed(uParam0.f_4);
		*uParam0.f_4 = 0;
	}
	if (*uParam0.f_564)
	{
		set_no_loading_screen(0);
		*uParam0.f_564 = 0;
	}
	if (!Global_69757)
	{
		if (!is_player_dead(get_player_index()))
		{
			if (!Global_69758)
			{
				if (is_screen_faded_out() && !func_94(0))
				{
					do_screen_fade_in(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_55749)
	{
		return;
	}
	Global_55758 = 0;
	Global_67844 = 0;
	Global_55760 = 0;
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	func_19(0);
	func_8();
	Global_67996 = 0;
	Global_55748 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_55739 = 0;
	Global_55769 = 0;
	Global_55777 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68031[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68040 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67997[iVar0 /*2*/] = 0;
		Global_67997[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68030 = 0;
}

void func_5()
{
	Global_55908 = 0;
}

void func_6()
{
	Global_55768 = 0;
	Global_55772 = func_7(joaat("sp0_shots"));
	Global_55771 = func_7(joaat("sp0_hits"));
	Global_55774 = func_7(joaat("sp1_shots"));
	Global_55773 = func_7(joaat("sp1_hits"));
	Global_55776 = func_7(joaat("sp2_shots"));
	Global_55775 = func_7(joaat("sp2_hits"));
}

auto func_7(int iParam0)
{
	auto uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_55778 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55779[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

auto func_9()
{
	return Global_1315913;
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_13();
	}
}

void func_13()
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

int func_14(char* sParam0)
{
	if (are_strings_equal(sParam0, &Global_99799))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

bool func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_17()
{
	_0xEB2D525B57F42B40();
	func_18();
}

void func_18()
{
	Global_17118.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_20()
{
	Global_17118.f_6 = 1;
}

int func_21(auto uParam0, int iParam1, Vector3 fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (GAMEPLAY::GET_FRAME_COUNT() == *uParam0.f_574)
	{
		return *uParam0.f_575;
	}
	*uParam0.f_574 = GAMEPLAY::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(get_player_ped(get_player_index()), 1))
		{
			*uParam0.f_575 = 1;
			return true;
		}
		if (is_ped_being_arrested(get_player_ped(get_player_index())))
		{
			*uParam0.f_575 = 1;
			return true;
		}
	}
	if (!*uParam0.f_564)
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			set_no_loading_screen(1);
			*uParam0.f_564 = 1;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (is_special_ability_active(player_id()))
			{
				special_ability_deactivate(player_id());
			}
		}
	}
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(19);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 29, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_49();
	if (_is_input_disabled(2))
	{
		if (_is_player_cam_control_disabled() || (is_screen_faded_out() && !is_screen_fading_in()))
		{
			_show_cursor_this_frame();
		}
	}
	Global_36261 = 1;
	if (!*uParam0.f_563)
	{
		switch (func_46(get_player_ped(get_player_index())))
		{
			case 1:
				_start_screen_effect("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				_start_screen_effect("SuccessTrevor", 1000, 0);
				break;
			
			default:
				_start_screen_effect("SuccessMichael", 1000, 0);
				break;
		}
		*uParam0.f_563 = 1;
	}
	if (*uParam0.f_558 == 0)
	{
		*uParam0.f_558 = *uParam0.f_572 + floor(15000f * fParam2);
	}
	if (iParam4 && *uParam0.f_572 >= *uParam0.f_558 - 1500)
	{
		*uParam0.f_558 = *uParam0.f_572 + 3000;
	}
	if (*uParam0.f_560 == 0f)
	{
		*uParam0.f_560 += func_45(30f);
		*uParam0.f_560 += IntToFloat(*uParam0.f_56) * func_45(25f);
		if (*uParam0.f_56 > 0)
		{
			*uParam0.f_560 += func_45(25f * 0.5f);
		}
		if (*uParam0.f_549)
		{
			*uParam0.f_560 += func_45(30f) - func_45(2f);
		}
	}
	iVar0 = true;
	while (iVar0)
	{
		func_19(1);
		*uParam0.f_572 += round(0f + 1000f * timestep());
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 666) - 15000f * fParam2)
		{
			if (*uParam0.f_30 < 1f)
			{
				*uParam0.f_30 += 0f + 1f / 0.225f * timestep();
			}
		}
		*uParam0.f_30 = func_25(*uParam0.f_30, 0f, 1f);
		if (*uParam0.f_572 > *uParam0.f_558 - 333)
		{
			if (!*uParam0.f_561)
			{
				if (*uParam0.f_565)
				{
					*uParam0.f_565 = 0;
					*uParam0.f_566 = 0;
					*uParam0.f_573 = 0.75f;
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_UP_BACKGROUND");
					_pop_scaleform_movie_function_void();
				}
				*uParam0.f_547 -= 0f + 1f / 1.215f * timestep();
			}
		}
		*uParam0.f_547 = func_25(*uParam0.f_547, 0f, 1f);
		if ((*uParam0.f_547 <= 0.7f && !*uParam0.f_545) && *uParam0.f_1 != 0)
		{
			_push_scaleform_movie_function(*uParam0.f_1, "TRANSITION_OUT");
			_pop_scaleform_movie_function_void();
			*uParam0.f_546 = *uParam0.f_572;
			*uParam0.f_545 = 1;
		}
		if (*uParam0.f_572 > *uParam0.f_558 - 333)
		{
			if (!*uParam0.f_561)
			{
				if (*uParam0.f_548 < 1f)
				{
					*uParam0.f_548 += 0f + 1f / 0.3f * timestep();
				}
			}
		}
		*uParam0.f_548 = func_25(*uParam0.f_548, 0f, 1f);
		if (*uParam0.f_562)
		{
			if (_0x6CD79468A1E595C6(2))
			{
				if (has_scaleform_movie_loaded(*uParam0.f_4))
				{
					if (!*uParam0.f_567)
					{
						func_22(uParam0, (!*uParam0.f_565 && *uParam0.f_56 > 0));
					}
				}
			}
		}
		if (is_control_just_pressed(2, 216) && *uParam0.f_558 > *uParam0.f_572 + 333)
		{
			if (((!*uParam0.f_566 && *uParam0.f_56 != 0) && has_scaleform_movie_loaded(*uParam0.f_4)) && IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 1165) - 15000f * fParam2)
			{
				if (!*uParam0.f_565)
				{
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_DOWN_BACKGROUND");
					_pop_scaleform_movie_function_void();
					*uParam0.f_565 = 1;
					*uParam0.f_573 = 0.75f;
					if (*uParam0.f_572 > *uParam0.f_558 - 5000)
					{
						*uParam0.f_558 = *uParam0.f_572 + 5000;
					}
				}
				else if (iParam5)
				{
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_UP_BACKGROUND");
					_pop_scaleform_movie_function_void();
					*uParam0.f_565 = 0;
					*uParam0.f_573 = 0.75f;
				}
				func_22(uParam0, (!*uParam0.f_565 && *uParam0.f_56 > 0));
			}
		}
		if ((*uParam0.f_565 || *uParam0.f_566) && *uParam0.f_56 != 0)
		{
			if (IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 1165) - 15000f * fParam2)
			{
				if (*uParam0.f_566 && !*uParam0.f_565)
				{
					*uParam0.f_565 = 1;
					*uParam0.f_573 = 0.75f;
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_DOWN_BACKGROUND");
					_pop_scaleform_movie_function_void();
				}
				*uParam0.f_559 = func_25(*uParam0.f_559 + 1f / 0.3f * *uParam0.f_573 * timestep(), 0f, 1f);
				*uParam0.f_573 = func_25(*uParam0.f_573 + 0.07f, 0.75f, 1.15f);
			}
		}
		else
		{
			*uParam0.f_559 = func_25(*uParam0.f_559 - 1f / 0.3f * *uParam0.f_573 * 0.01f * timestep(), 0f, 1f);
			*uParam0.f_573 = func_25(*uParam0.f_573 + 0.07f, 0.75f, 1.15f);
		}
		if (*uParam0.f_572 > *uParam0.f_558)
		{
			if (*uParam0.f_561)
			{
				if (!*uParam0.f_567)
				{
					if (is_control_just_pressed(2, 215))
					{
						*uParam0.f_561 = 0;
					}
				}
			}
			else if (*uParam0.f_572 - *uParam0.f_546 > 1000 && *uParam0.f_545)
			{
				iVar0 = false;
			}
		}
		*uParam0.f_575 = !iVar0;
		if (iParam1)
		{
			wait(0);
		}
		else
		{
			if (!iVar0)
			{
				func_19(0);
			}
			return !iVar0;
		}
	}
	func_19(0);
	return true;
}

void func_22(auto uParam0, int iParam1)
{
	_push_scaleform_movie_function(*uParam0.f_4, "CLEAR_ALL");
	_pop_scaleform_movie_function_void();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(false);
	func_24(_get_control_action_name(2, 215, true));
	func_23("ES_HELP");
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_int(215);
	}
	_pop_scaleform_movie_function_void();
	if (iParam1)
	{
		_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
		_push_scaleform_movie_function_parameter_int(true);
		func_24(_get_control_action_name(2, 216, true));
		func_23("ES_XPAND");
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function_parameter_bool(true);
			_push_scaleform_movie_function_parameter_int(216);
		}
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	_pop_scaleform_movie_function_void();
}

void func_23(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_24(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
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

void func_26(auto uParam0, float fParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char[16] cVar23;
	char[32] cVar27;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = round(*uParam0.f_547 * 255f);
	fVar1 = func_44() * 0.25f;
	if (has_scaleform_movie_loaded(*uParam0.f_1))
	{
		if (*uParam0.f_30 >= 0f)
		{
			if (!*uParam0.f_2)
			{
				_push_scaleform_movie_function(*uParam0.f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(uParam0.f_5);
				func_23(uParam0.f_13);
				_push_scaleform_movie_function_parameter_int(100);
				_push_scaleform_movie_function_parameter_bool(true);
				_push_scaleform_movie_function_parameter_int(*uParam0.f_56);
				_push_scaleform_movie_function_parameter_bool(iParam2);
				_push_scaleform_movie_function_parameter_int(69);
				_pop_scaleform_movie_function_void();
				*uParam0.f_2 = 1;
			}
			if ((*uParam0.f_56 > 0 && !*uParam0.f_3) && *uParam0.f_572 > 600)
			{
				_push_scaleform_movie_function(*uParam0.f_1, "TRANSITION_UP");
				_push_scaleform_movie_function_parameter_float(0.15f);
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
				*uParam0.f_3 = 1;
			}
		}
		func_43();
		draw_scaleform_movie_fullscreen(*uParam0.f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = *uParam0.f_560 * *uParam0.f_559 * 1f - *uParam0.f_548;
	fVar3 = 0f;
	if (*uParam0.f_567)
	{
		fVar3 = 0.1388889f + func_45(2f * 2f) * *uParam0.f_568 * 1f - *uParam0.f_548;
		fVar2 += 3f * fVar3;
	}
	if (*uParam0.f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (*uParam0.f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = 0.3f * func_44();
	if (*uParam0.f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = *uParam0 * 2f;
	fVar7 = func_42(uParam0.f_13);
	if (fVar6 < fVar7)
	{
		fVar6 = fVar7 + 3f * 0.006f;
	}
	if (_get_screen_aspect_ratio(0) < 1.4f)
	{
		fVar6 *= 1.3f;
	}
	fVar7 = func_42(uParam0.f_550);
	fVar8 = 0.119f + 0.05f / func_44() / 2.5f;
	if ((*uParam0.f_556 == 1 || *uParam0.f_556 == 0) && *uParam0.f_557 != 0)
	{
		if (fVar6 < fVar7 + 2.6f * fVar8)
		{
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (fVar6 < fVar7 + 1.9f * fVar8)
	{
		fVar6 = fVar7 + 2f * fVar8;
	}
	fVar9 = 0.499f - fVar6 / 2f + 0.006f;
	fVar10 = 0.499f + fVar6 / 2f - 0.006f;
	set_input_exclusive(2, 215);
	set_input_exclusive(2, 216);
	set_input_exclusive(2, 200);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (*uParam0.f_562 || *uParam0.f_567)
	{
		if (IntToFloat(*uParam0.f_558) - 14000f * fParam1 < IntToFloat(*uParam0.f_572) || ((*uParam0.f_567 && *uParam0.f_559 > 0.95f) && *uParam0.f_558 - 10000 < *uParam0.f_572))
		{
			if (*uParam0.f_567)
			{
				if (*uParam0.f_570 < 0)
				{
					*uParam0.f_570 *= -1;
					*uParam0.f_570 = *uParam0.f_572 + *uParam0.f_570;
				}
				if (*uParam0.f_570 > 0)
				{
					if (*uParam0.f_570 - *uParam0.f_572 > 0)
					{
						func_39(*uParam0.f_570 - *uParam0.f_572, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						*uParam0.f_570 = 0;
						*uParam0.f_569 = 1;
						*uParam0.f_567 = 0;
						*uParam0.f_561 = 0;
						*uParam0.f_562 = 0;
						*uParam0.f_558 = *uParam0.f_572 + 500;
						*uParam0.f_570 = 0;
					}
				}
				if (*uParam0.f_568 < 1f)
				{
					*uParam0.f_568 += 0f + 1f / 0.166f * timestep();
					if (*uParam0.f_568 > 1f)
					{
						*uParam0.f_568 = 1f;
					}
				}
			}
			if (is_screen_faded_out())
			{
				hide_loading_on_fade_this_frame();
			}
			if ((*uParam0.f_4 != 0 && *uParam0.f_548 < 0.1f) && *uParam0.f_572 <= *uParam0.f_558)
			{
				hide_hud_component_this_frame(7);
				hide_hud_component_this_frame(8);
				hide_hud_component_this_frame(9);
				hide_hud_component_this_frame(6);
				draw_scaleform_movie_fullscreen(*uParam0.f_4, 255, 255, 255, iVar0, 0);
			}
			if (*uParam0.f_567)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (is_disabled_control_just_pressed(2, 188))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 3;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (is_disabled_control_just_pressed(2, 187))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 4;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (is_disabled_control_just_pressed(2, 202))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 2;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (*uParam0.f_562)
			{
				hide_hud_component_this_frame(7);
				hide_hud_component_this_frame(8);
				hide_hud_component_this_frame(9);
				hide_hud_component_this_frame(6);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (is_control_just_pressed(2, 215) || is_disabled_control_just_pressed(2, 200))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_562 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	get_hud_colour(1, &iVar13, &iVar14, &iVar15, &iVar16);
	set_text_colour(iVar13, iVar14, iVar15, iVar0);
	set_text_wrap(fVar9, fVar10);
	set_text_justification(0);
	set_text_scale(1f, 0.4f);
	fVar1 -= func_45(6f);
	fVar1 += func_45(30f) - func_45(2f * 2f);
	fVar11 = fVar2 - func_45(2f * 14f);
	if (fVar11 >= 0f)
	{
		fVar12 = func_25(fVar11 / 0.6f * func_45(25f), 0f, 1f);
		func_43();
		draw_rect(0.5f, fVar1 - func_45(2f - 0.5f) - 0.001388889f, fVar6, func_38(1f), iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar16)), 0);
	}
	else
	{
		return;
	}
	fVar1 += func_45(2f * 0.3f);
	if (*uParam0.f_56 > 0)
	{
		fVar1 += func_45(25f * 0.2f);
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < *uParam0.f_56)
	{
		fVar11 = fVar2 - fVar1 - 0.3f * func_44();
		if (fVar11 >= 0f)
		{
			fVar12 = func_25(fVar11 / 0.8f * func_45(25f), 0f, 1f);
			func_35(uParam0, iVar17, fVar1 + func_45(2f), fVar9, fVar10, round(IntToFloat(iVar0) * fVar12));
		}
		else
		{
			return;
		}
		fVar1 += func_45(25f);
		iVar17++;
	}
	if (*uParam0.f_56 > 0)
	{
		fVar1 += func_45(25f * 0.2f);
		fVar11 = fVar2 - fVar1 - 0.3f * func_44();
		if (fVar11 >= 0f)
		{
			fVar1 += func_45(2f);
			fVar12 = func_25(fVar11 / 0.6f * func_45(25f), 0f, 1f);
			func_43();
			draw_rect(0.5f, fVar1 + func_45(2f * 0.5f), fVar6, func_38(1f), iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar16)), 0);
		}
	}
	if (*uParam0.f_549)
	{
		fVar1 += func_45(25f * 0.2f);
		fVar11 = fVar2 - fVar1 - 0.3f * func_44();
		if (fVar11 >= 0f)
		{
			fVar12 = func_25(fVar11 / 0.8f * func_45(25f), 0f, 1f);
			set_text_colour(iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar0)));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (_get_ui_language_id() == 0)
			{
				fVar20 = fVar9 + 0.119f / func_44() / 2.5f;
				fVar21 = fVar10 - 0.119f / func_44() / 2.5f;
				if (*uParam0.f_556 == 1)
				{
					fVar20 = fVar9 + 0.119f + 0.05f / func_44() / 2.5f;
					fVar21 = fVar10 - 0.119f + 0.05f / func_44() / 2.5f;
				}
			}
			if (*uParam0.f_557 == 0)
			{
				fVar20 += fVar18 * 0.28f + 0.006f / 2f;
				fVar21 += fVar18 * 0.28f + 0.006f / 2f;
			}
			set_text_wrap(fVar20, fVar21);
			set_text_justification(1);
			set_text_scale(1f, 0.4f);
			func_28(uParam0.f_550, fVar20, fVar1 + func_45(2f * 2f), 0, 0, 0);
			set_text_wrap(fVar20, fVar21);
			set_text_justification(2);
			set_text_scale(1f, 0.4f);
			set_text_centre(0);
			func_43();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 -= fVar18 * 0.28f + 0.006f;
			set_text_wrap(fVar20, fVar22);
			set_text_colour(iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar0)));
			switch (*uParam0.f_556)
			{
				case 0:
					_set_text_entry("PERCENTAGE");
					add_text_component_integer(*uParam0.f_554);
					_draw_text(fVar20, fVar1 + func_45(2f * 2f), 0);
					break;
				
				case 1:
					_set_text_entry("FO_TWO_NUM");
					add_text_component_integer(*uParam0.f_554);
					add_text_component_integer(*uParam0.f_555);
					_draw_text(fVar20, fVar1 + func_45(2f * 2f), 0);
					break;
				
				case 2:
					_set_text_entry("MTPHPER_XPNO");
					add_text_component_integer(*uParam0.f_554);
					_draw_text(fVar20, fVar1 + func_45(2f * 2f), 0);
					break;
			}
			if (*uParam0.f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (*uParam0.f_557)
				{
					case 1:
						get_hud_colour(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						get_hud_colour(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						get_hud_colour(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = 0.001388889f * 5f;
				fVar40 = 0.00078125f * 16f * 2f;
				fVar41 = 0.001388889f * 16f * 2f;
				fVar42 = fVar21 + func_27(4f) - 0.006f;
				fVar43 = fVar1 + func_45(10f) + fVar39;
				if (*uParam0.f_556 == -1)
				{
					fVar42 -= 0.006f * 6f;
				}
				fVar40 *= 0.65f;
				fVar41 *= 0.65f;
				draw_sprite(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, round(fVar12 * IntToFloat(iVar0)), 0);
			}
			fVar1 += func_45(30f) - 2f;
		}
	}
}

float func_27(float fParam0)
{
	return fParam0 * 0.00078125f;
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	set_text_centre(iParam3);
	set_text_font(iParam5);
	func_43();
	if (iParam4)
	{
		_set_text_entry("STRING");
		add_text_component_substring_player_name(sParam0);
	}
	else
	{
		_set_text_entry(sParam0);
	}
	_draw_text(fParam1, fParam2, 0);
}

bool func_29(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_34(iParam0);
	sVar1 = func_32(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_31())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_31())
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
		vVar7.x *= func_30(iParam0) / fVar4;
		vVar7.y *= func_30(iParam0) / fVar4;
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

float func_30(int iParam0)
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

bool func_31()
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

auto func_32(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_33(&(Global_17257.f_6687[iParam0 /*16*/]));
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

auto func_33(auto uParam0)
{
	return uParam0;
}

char* func_34(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_33(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_35(auto uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &uVar3);
	set_text_colour(iVar0, iVar1, iVar2, iParam5);
	set_text_wrap(fParam3, fParam4);
	set_text_justification(1);
	set_text_scale(1f, func_37(14f));
	set_text_centre(0);
	set_text_font(0);
	func_43();
	if (*uParam0.f_531[iParam1])
	{
		_set_text_entry("STRING");
		add_text_component_substring_player_name(uParam0.f_71[iParam1 /*16*/]);
	}
	else
	{
		_set_text_entry(uParam0.f_71[iParam1 /*16*/]);
		if (*uParam0.f_57[iParam1] == 16 || *uParam0.f_57[iParam1] == 17)
		{
			add_text_component_integer(*uParam0.f_489[iParam1]);
		}
	}
	_draw_text(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (*uParam0.f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_32(7, 0), fParam4 - 0.006f, fParam2 + func_45(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_32(5, 0), fParam4 - 0.006f, fParam2 + func_45(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_32(6, 0), fParam4 - 0.006f, fParam2 + func_45(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
	}
	if (*uParam0.f_57[iParam1] == 0)
	{
		return;
	}
	if (*uParam0.f_57[iParam1] == 15)
	{
		set_text_justification(1);
	}
	else
	{
		set_text_justification(2);
	}
	set_text_scale(1f, func_37(14f));
	if (*uParam0.f_57[iParam1] == 5 || *uParam0.f_57[iParam1] == 4)
	{
		set_text_wrap(fParam3, fVar4 - 0.00078125f * 3f);
	}
	else
	{
		set_text_wrap(fParam3, fVar4 + 0.00078125f * 2f);
	}
	set_text_colour(iVar0, iVar1, iVar2, iParam5);
	func_36(*uParam0.f_489[iParam1], *uParam0.f_503[iParam1], fParam4, fParam2, uParam0.f_280[iParam1 /*16*/], *uParam0.f_57[iParam1]);
}

void func_36(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	set_text_centre(0);
	set_text_font(0);
	func_43();
	fVar1 = 0f;
	fVar2 = 8f * 0.00078125f;
	fVar3 = 16f * 0.001388889f;
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			set_text_scale(1f, func_37(18f));
			set_text_font(4);
			if (iParam0 < 0)
			{
				_set_text_entry_for_width("ESMINDOLLA");
				_add_text_component_substring_cash(-1 * iParam0, 1);
				fVar1 = _get_text_screen_width(0);
			}
			else
			{
				_set_text_entry_for_width("ESDOLLA");
				_add_text_component_substring_cash(iParam0, 1);
				fVar1 = _get_text_screen_width(0);
			}
			fVar1 -= fVar1 % 0.00078125f;
			draw_sprite("CommonMenu", "BettingBox_Left", fParam2 - fVar1, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			draw_sprite("CommonMenu", "BettingBox_Centre", fParam2 - fVar1 * 0.5f - 0.00078125f * 2f, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar1 - fVar2 * 0.5f, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			draw_sprite("CommonMenu", "BettingBox_Right", fParam2 - 0.00078125f * 4f, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			set_text_scale(1f, func_37(14f));
			break;
	}
	_0x39BBF623FC803EAC(iVar0);
	switch (iParam5)
	{
		case 11:
			_set_text_entry("PERCENTAGE");
			add_text_component_integer(iParam0);
			break;
		
		case 1:
			set_text_font(5);
			_set_text_entry("FO_NUM");
			add_text_component_integer(iParam0);
			break;
		
		case 2:
			set_text_font(5);
			_set_text_entry("FO_TWO_NUM");
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 4:
		case 5:
			set_text_scale(1f, func_37(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				_set_text_entry("ESMINDOLLA");
				_add_text_component_substring_cash(-1 * iParam0, 1);
			}
			else
			{
				_set_text_entry("ESDOLLA");
				_add_text_component_substring_cash(iParam0, 1);
			}
			break;
		
		case 6:
			_set_text_entry(sParam4);
			break;
		
		case 7:
			_set_text_entry("STRING");
			add_text_component_substring_player_name(sParam4);
			break;
		
		case 8:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 14);
			break;
		
		case 9:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 6);
			break;
		
		case 10:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 2055);
			break;
		
		case 18:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 2055);
			break;
		
		case 12:
			_set_text_entry("AHD_DIST");
			add_text_component_integer(iParam0);
			break;
		
		case 13:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 15:
		case 14:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 16:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			_draw_text(fParam2 - 0.00078125f * 4f, fParam3, 0);
			set_text_scale(1f, func_37(14f));
		}
		else
		{
			_draw_text(fParam2, fParam3, 0);
		}
	}
}

float func_37(float fParam0)
{
	return fParam0 * 0.025f;
}

float func_38(float fParam0)
{
	return fParam0 * 0.0009259259f;
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_40(7, iVar0);
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

void func_40(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_41(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

float func_42(char* sParam0)
{
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1) / 2f;
}

void func_43()
{
	_set_2d_layer(1);
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		_set_2d_layer(7);
	}
	_0xC6372ECD45D73BCD(0);
}

float func_44()
{
	float fVar0;
	
	fVar0 = 1f;
	if (GAMEPLAY::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_45(float fParam0)
{
	return fParam0 * 0.001388889f;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_48(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48(int iParam0)
{
	return iParam0 < 3;
}

void func_49()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_50(0))
		{
			func_51(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

bool func_50(int iParam0)
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

void func_51(int iParam0)
{
	if (Global_14571)
	{
		func_53(0, 0);
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
	if (!func_52())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_52()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_50(0))
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

bool func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] > 0)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_55(int iParam0)
{
	char* sVar0;
	
	register_script_with_audio(0);
	switch (func_56())
	{
		case 0:
			if (iParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (iParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (iParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	play_mission_complete_audio(sVar0);
}

auto func_56()
{
	func_57();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_48(iVar0) && (!func_58(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_48(Global_101154.f_1826.f_539.f_3549))
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

int func_58(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_59(auto uParam0, int iParam1, int iParam2)
{
	*uParam0.f_12 = iParam2;
	func_62(uParam0);
	func_61(uParam0);
	if (are_strings_equal(uParam0.f_550, "SPR_RESULT") || (are_strings_equal(uParam0.f_550, "") && *uParam0.f_56 > 0))
	{
		*uParam0.f_566 = 1;
	}
	if (*uParam0.f_1 == 0)
	{
		request_streamed_texture_dict("CommonMenu", false);
		request_streamed_texture_dict("MPLeaderboard", false);
		request_streamed_texture_dict("MPHud", false);
		*uParam0.f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		*uParam0.f_2 = 0;
		*uParam0.f_3 = 0;
	}
	*uParam0.f_4 = request_scaleform_movie_instance("INSTRUCTIONAL_BUTTONS");
	if (iParam1)
	{
		while (((!has_scaleform_movie_loaded(*uParam0.f_1) || !has_streamed_texture_dict_loaded("CommonMenu")) || !has_streamed_texture_dict_loaded("MPLeaderboard")) || !has_streamed_texture_dict_loaded("MPHud"))
		{
			wait(0);
		}
		if (*uParam0.f_562 || *uParam0.f_567)
		{
			while (!has_scaleform_movie_loaded(*uParam0.f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!has_scaleform_movie_loaded(*uParam0.f_1) || !has_streamed_texture_dict_loaded("CommonMenu")) || !has_streamed_texture_dict_loaded("MPLeaderboard")) || !has_streamed_texture_dict_loaded("MPHud"))
		{
			return false;
		}
		if (*uParam0.f_562)
		{
			if (!has_scaleform_movie_loaded(*uParam0.f_4))
			{
				return false;
			}
		}
	}
	if (*uParam0.f_562)
	{
		if (*uParam0.f_567)
		{
			func_60(uParam0);
		}
		else if (*uParam0.f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_69750 = 1;
	return true;
}

void func_60(auto uParam0)
{
	_push_scaleform_movie_function(*uParam0.f_4, "CLEAR_ALL");
	_pop_scaleform_movie_function_void();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(2);
	func_24(_get_control_action_name(2, 188, true));
	func_23("ES_HELP_TU");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(true);
	func_24(_get_control_action_name(2, 187, true));
	func_23("ES_HELP_TD");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(false);
	func_24(_get_control_action_name(2, 202, true));
	func_23("ES_HELP_AB");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	_pop_scaleform_movie_function_void();
}

void func_61(auto uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	set_text_justification(0);
	set_text_scale(1f, func_37(16f));
	if (*uParam0.f_31 == 0)
	{
		if (*uParam0.f_29)
		{
			_set_text_entry_for_width("STRING");
			add_text_component_substring_player_name(uParam0.f_13);
			fVar0 = _get_text_screen_width(1);
		}
		else
		{
			_set_text_entry_for_width(uParam0.f_13);
			fVar0 = _get_text_screen_width(1);
		}
	}
	else
	{
		_set_text_entry_for_width("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < *uParam0.f_31)
		{
			switch (*uParam0.f_32[iVar3])
			{
				case 0:
					add_text_component_integer(*uParam0.f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					_add_text_component_item_string(uParam0.f_36[iVar2 /*16*/]);
					iVar2++;
					break;
				
				case 2:
					add_text_component_substring_player_name(uParam0.f_36[iVar2 /*16*/]);
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = _get_text_screen_width(1);
	}
	if (fVar0 > 0.1125f * 2f - 0.006f * 2f)
	{
		*uParam0 = fVar0 / 2f + 0.006f * 2f;
	}
}

void func_62(auto uParam0)
{
	*uParam0.f_547 = 1f;
	*uParam0.f_546 = 0;
	*uParam0.f_568 = 0f;
	*uParam0.f_558 = 0;
	*uParam0.f_30 = 0f;
	*uParam0.f_548 = 0f;
	*uParam0.f_559 = 0f;
	*uParam0.f_560 = 0f;
	*uParam0.f_545 = 0;
	*uParam0.f_563 = 0;
	*uParam0.f_572 = 0;
	*uParam0.f_564 = 0;
	*uParam0.f_565 = 0;
	*uParam0.f_566 = 0;
	*uParam0 = 0.1125f;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_574 = 0;
	*uParam0.f_575 = 0;
	*uParam0.f_573 = 1f;
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	Vector3 vVar12;
	Vector3 vVar80;
	
	if (Global_67844 == 0)
	{
		return;
	}
	if (Global_67995 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		iVar3 = Global_67845[iVar0 /*9*/];
		iVar4 = !Global_55974[iVar3 /*13*/].f_7;
		iVar5 = Global_55974[iVar3 /*13*/].f_8;
		uVar6 = Global_55974[iVar3 /*13*/].f_12;
		fVar7 = Global_55974[iVar3 /*13*/].f_9;
		iVar8 = false;
		iVar8 = false;
		if (func_69(iVar3, Global_67845[iVar0 /*9*/].f_1))
		{
			iVar8 = true;
		}
		if (iVar4)
		{
			if (iVar8)
			{
				iVar1 += 100000000;
			}
		}
		if (iVar5)
		{
			iVar9 = Global_67845[iVar0 /*9*/].f_1;
			iVar10 = floor(IntToFloat(iVar9) * fVar7);
			iVar2 += iVar10;
			iVar1 += iVar10;
		}
		iVar0++;
	}
	Global_67990 = iVar1;
	Global_67991 = iVar2;
	if (network_is_signed_online())
	{
		if (Global_67994 == 0)
		{
			iVar11 = Global_67995;
			if (iVar11 == 90)
			{
				if (Global_101154.f_7775.f_99.f_205[func_68(0)] == 2)
				{
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					leaderboards2_write_data(&vVar12);
					_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
					_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
					_0x0BCA1D2C47B0D269(126, true, 0f);
					_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
					_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
					_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
					_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
					_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
					_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
					_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
					_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
					_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
					_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
					_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
					vVar12.x = 717;
					leaderboards2_write_data(&vVar12);
					_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
					_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
					_0x0BCA1D2C47B0D269(126, true, 0f);
					_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
					_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
					_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
					_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
					_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
					_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
					_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
					_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
					_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
					_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
					_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
				}
				else
				{
					func_65(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				vVar80.f_2.f_1 = 4;
				vVar80.x = 673;
				leaderboards2_write_data(&vVar80);
				_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
				_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
				_0x0BCA1D2C47B0D269(126, true, 0f);
				_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
				_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
				_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
				_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
				_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
				_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
				_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
				_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
				_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
				_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
				_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
				_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
				_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
				_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
				_0x0BCA1D2C47B0D269(137, func_67(426), 0f);
				_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
				_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
				_0x0BCA1D2C47B0D269(140, false, 0f);
				vVar80.x = 672;
				leaderboards2_write_data(&vVar80);
				_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
				_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
				_0x0BCA1D2C47B0D269(126, true, 0f);
				_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
				_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
				_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
				_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
				_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
				_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
				_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
				_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
				_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
				_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
				_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
				_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
				_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
				_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
				_0x0BCA1D2C47B0D269(135, func_67(426), 0f);
				_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
				_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
				_0x0BCA1D2C47B0D269(140, false, 0f);
			}
			else
			{
				func_65(iVar11);
			}
			Global_101154.f_7775.f_330[iVar11 /*6*/].f_4 = Global_67990;
		}
		else
		{
			func_64(Global_67995);
		}
	}
}

void func_64(auto uParam0)
{
	auto uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_65(int iParam0)
{
	Vector3 vVar0;
	struct<13> Var68;
	auto uVar81;
	
	vVar0.f_2.f_1 = 4;
	if (!network_is_signed_online())
	{
		return;
	}
	if (_network_player_is_in_clan())
	{
		Var68 = {func_66(player_id())};
		if (network_clan_player_is_active(&Var68))
		{
			if (network_clan_player_get_desc(&uVar81, 35, &Var68))
			{
				vVar0.y = uVar81;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			vVar0.x = 577;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(0), 0f);
			_0x0BCA1D2C47B0D269(148, func_67(1), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(2), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(3), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(4), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(5), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(6), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(7), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(8), 0f);
			vVar0.x = 913;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(0), 0f);
			_0x0BCA1D2C47B0D269(148, func_67(1), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(2), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(3), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(4), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(5), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(6), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(7), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(8), 0f);
			return;
		
		case 1:
			vVar0.x = 576;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(9), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(10), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(11), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(12), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(13), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(14), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(15), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(16), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(17), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(18), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(19), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(20), 0f);
			vVar0.x = 575;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(9), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(10), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(11), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(12), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(13), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(14), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(15), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(16), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(17), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(18), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(19), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(20), 0f);
			return;
		
		case 2:
			vVar0.x = 579;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(21), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(22), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(23), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(24), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(25), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(26), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(27), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(28), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(29), 0f);
			vVar0.x = 578;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(21), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(22), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(23), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(24), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(25), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(26), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(27), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(28), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(29), 0f);
			return;
		
		case 3:
			vVar0.x = 797;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(30), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(31), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(32), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(33), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(34), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(35), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(36), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(37), 0f);
			vVar0.x = 796;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(30), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(31), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(32), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(33), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(34), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(35), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(36), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(37), 0f);
			return;
		
		case 4:
			vVar0.x = 799;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(43), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(44), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(45), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(46), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(47), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(48), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(49), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(50), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(51), 0f);
			vVar0.x = 798;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(43), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(44), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(45), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(46), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(47), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(48), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(49), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(50), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(51), 0f);
			return;
		
		case 5:
			vVar0.x = 801;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(57), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(58), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(59), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(60), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(61), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(62), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(63), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(64), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(65), 0f);
			vVar0.x = 800;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(57), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(58), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(59), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(60), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(61), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(62), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(63), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(64), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(65), 0f);
			return;
		
		case 6:
			vVar0.x = 803;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(71), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(72), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(73), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(74), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(75), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(76), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(77), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(78), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(79), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(80), 0f);
			vVar0.x = 802;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(71), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(72), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(73), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(74), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(75), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(76), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(77), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(78), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(79), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(80), 0f);
			return;
		
		case 7:
			vVar0.x = 805;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(86), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(87), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(88), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(89), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(90), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(91), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(92), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(93), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(94), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(95), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(96), 0f);
			vVar0.x = 804;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(86), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(87), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(88), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(89), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(90), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(91), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(92), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(93), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(94), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(95), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(96), 0f);
			return;
		
		case 9:
			vVar0.x = 639;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(102), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(103), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(104), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(105), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(106), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(107), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(108), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(109), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(110), 0f);
			vVar0.x = 638;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(102), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(103), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(104), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(105), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(106), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(107), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(108), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(109), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(110), 0f);
			return;
		
		case 8:
			vVar0.x = 641;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(134, func_67(111), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(112), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(113), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(114), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(115), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(116), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(117), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(118), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(119), 0f);
			vVar0.x = 640;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(134, func_67(111), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(112), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(113), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(114), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(115), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(116), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(117), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(118), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(119), 0f);
			return;
		
		case 10:
			vVar0.x = 646;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(120), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(121), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(122), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(123), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(124), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(125), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(126), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(127), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(128), 0f);
			vVar0.x = 645;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(120), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(121), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(122), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(123), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(124), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(125), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(126), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(127), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(128), 0f);
			return;
		
		case 11:
			vVar0.x = 671;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(129), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(130), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(131), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(132), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(133), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(134), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(135), 0f);
			vVar0.x = 670;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(129), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(130), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(131), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(132), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(133), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(134), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(135), 0f);
			return;
		
		case 12:
			vVar0.x = 603;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(136), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(137), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(138), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(139), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(140), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(141), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(142), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(143), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(144), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(145), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(146), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(147), 0f);
			vVar0.x = 602;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(136), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(137), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(138), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(139), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(140), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(141), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(142), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(143), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(144), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(145), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(146), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(147), 0f);
			return;
		
		case 13:
			vVar0.x = 605;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(148), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(149), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(150), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(151), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(152), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(153), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(154), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(155), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(156), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(157), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(158), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(159), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(160), 0f);
			vVar0.x = 604;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(148), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(149), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(150), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(151), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(152), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(153), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(154), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(155), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(156), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(157), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(158), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(159), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(160), 0f);
			return;
		
		case 14:
			vVar0.x = 648;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(161), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(162), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(163), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(164), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(165), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(166), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(167), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(168), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(169), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(170), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(171), 0f);
			vVar0.x = 647;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(161), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(162), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(163), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(164), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(165), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(166), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(167), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(168), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(169), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(170), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(171), 0f);
			return;
		
		case 15:
			vVar0.x = 650;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(172), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(173), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(174), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(175), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(176), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(177), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(178), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(179), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(180), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(181), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(182), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(183), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(184), 0f);
			vVar0.x = 649;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(172), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(173), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(174), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(175), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(176), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(177), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(178), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(179), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(180), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(181), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(182), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(183), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(184), 0f);
			return;
		
		case 16:
			vVar0.x = 656;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(185), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(186), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(187), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(188), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(189), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(190), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(191), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(192), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(193), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(194), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(195), 0f);
			vVar0.x = 655;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(185), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(186), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(187), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(188), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(189), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(190), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(191), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(192), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(193), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(194), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(195), 0f);
			return;
		
		case 17:
			vVar0.x = 583;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(196), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(197), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(198), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(199), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(200), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(201), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(202), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(203), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(204), 0f);
			vVar0.x = 582;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(196), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(197), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(198), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(199), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(200), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(201), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(202), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(203), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(204), 0f);
			return;
		
		case 18:
			vVar0.x = 585;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(205), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(206), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(207), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(208), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(209), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(210), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(211), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(212), 0f);
			_0x0BCA1D2C47B0D269(140, func_67(213), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(214), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(215), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(216), 0f);
			vVar0.x = 584;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(205), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(206), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(207), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(208), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(209), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(210), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(211), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(212), 0f);
			_0x0BCA1D2C47B0D269(140, func_67(213), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(214), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(215), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(216), 0f);
			return;
		
		case 19:
			vVar0.x = 587;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(217), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(218), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(219), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(220), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(221), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(222), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(223), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(224), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(225), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(226), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(227), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(228), 0f);
			vVar0.x = 586;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(217), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(218), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(219), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(220), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(221), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(222), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(223), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(224), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(225), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(226), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(227), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(228), 0f);
			return;
		
		case 20:
			vVar0.x = 609;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(229), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(230), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(231), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(232), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(233), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(234), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(235), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(236), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(237), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(238), 0f);
			vVar0.x = 608;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(229), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(230), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(231), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(232), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(233), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(234), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(235), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(236), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(237), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(238), 0f);
			return;
		
		case 21:
			vVar0.x = 621;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(239), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(240), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(241), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(242), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(243), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(244), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(245), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(246), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(247), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(248), 0f);
			vVar0.x = 620;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(239), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(240), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(241), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(242), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(243), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(244), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(245), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(246), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(247), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(248), 0f);
			return;
		
		case 22:
			vVar0.x = 675;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(249), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(250), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(251), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(252), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(253), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(254), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(255), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(256), 0f);
			vVar0.x = 674;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(249), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(250), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(251), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(252), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(253), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(254), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(255), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(256), 0f);
			return;
		
		case 26:
			vVar0.x = 712;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(257), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(258), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(259), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(260), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(261), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(262), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(263), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(264), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(265), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(266), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(267), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(268), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(269), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(270), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(271), 0f);
			_0x0BCA1D2C47B0D269(103, func_67(272), 0f);
			vVar0.x = 711;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(257), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(258), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(259), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(260), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(261), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(262), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(263), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(264), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(265), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(266), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(267), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(268), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(269), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(270), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(271), 0f);
			_0x0BCA1D2C47B0D269(103, func_67(272), 0f);
			return;
		
		case 29:
			vVar0.x = 611;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(273), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(274), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(275), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(276), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(277), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(278), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(279), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(280), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(281), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(282), 0f);
			vVar0.x = 610;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(273), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(274), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(275), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(276), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(277), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(278), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(279), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(280), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(281), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			vVar0.x = 615;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(283), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(284), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(285), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(286), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(287), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(288), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(289), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(290), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(291), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(292), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(293), 0f);
			vVar0.x = 614;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(283), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(284), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(285), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(286), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(287), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(288), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(289), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(290), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(291), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(292), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(293), 0f);
			return;
		
		case 31:
			vVar0.x = 623;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(294), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(295), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(296), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(297), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(298), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(299), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(300), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(301), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(302), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(303), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(304), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(305), 0f);
			vVar0.x = 622;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(294), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(295), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(296), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(297), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(298), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(299), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(300), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(301), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(302), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(303), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(304), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(305), 0f);
			return;
		
		case 38:
			vVar0.x = 627;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(306), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(307), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(308), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(309), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(310), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(311), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(312), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(313), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(314), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(315), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(316), 0f);
			vVar0.x = 626;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(306), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(307), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(308), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(309), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(310), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(311), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(312), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(313), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(314), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(315), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(316), 0f);
			return;
		
		case 33:
			vVar0.x = 741;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(317), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(318), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(319), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(320), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(321), 0f);
			vVar0.x = 740;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(317), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(318), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(319), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(320), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(321), 0f);
			return;
		
		case 34:
			vVar0.x = 745;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(322), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(323), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(324), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(325), 0f);
			vVar0.x = 742;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(322), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(323), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(324), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(325), 0f);
			return;
		
		case 39:
			vVar0.x = 658;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(326), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(327), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(328), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(329), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(330), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(331), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(332), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(333), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(334), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(335), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(336), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(337), 0f);
			vVar0.x = 657;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(326), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(327), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(328), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(329), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(330), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(331), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(332), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(333), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(334), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(335), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(336), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(337), 0f);
			return;
		
		case 40:
			vVar0.x = 581;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(338), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(339), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(340), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(341), 0f);
			_0x0BCA1D2C47B0D269(140, func_67(342), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(343), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(344), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(345), 0f);
			vVar0.x = 580;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(338), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(339), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(340), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(341), 0f);
			_0x0BCA1D2C47B0D269(140, func_67(342), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(343), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(344), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(345), 0f);
			return;
		
		case 41:
			vVar0.x = 619;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(346), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(347), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(348), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(349), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(350), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(351), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(352), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(353), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(354), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(355), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(356), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(357), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(358), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(359), 0f);
			vVar0.x = 618;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(346), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(347), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(348), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(349), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(350), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(351), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(352), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(353), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(354), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(355), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(356), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(357), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(358), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(359), 0f);
			return;
		
		case 42:
			vVar0.x = 704;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(360), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(361), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(362), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(363), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(364), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(365), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(366), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(367), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(368), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(369), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(370), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(371), 0f);
			vVar0.x = 703;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(360), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(361), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(362), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(363), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(364), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(365), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(366), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(367), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(368), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(369), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(370), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(371), 0f);
			return;
		
		case 43:
			vVar0.x = 593;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(372), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(373), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(374), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(375), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(376), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(377), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(378), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(379), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(380), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(381), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(382), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(383), 0f);
			vVar0.x = 592;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(1, func_67(372), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(373), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(374), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(375), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(376), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(377), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(378), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(379), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(380), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(381), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(382), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(383), 0f);
			return;
		
		case 44:
			vVar0.x = 589;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(384), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(385), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(386), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(387), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(388), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(389), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(390), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(391), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(392), 0f);
			vVar0.x = 588;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(384), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(385), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(386), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(387), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(388), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(389), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(390), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(391), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(392), 0f);
			return;
		
		case 45:
			vVar0.x = 635;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(393), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(394), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(395), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(396), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(397), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(398), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(399), 0f);
			vVar0.x = 634;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(393), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(394), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(395), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(396), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(397), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(398), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(399), 0f);
			return;
		
		case 46:
			vVar0.x = 669;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(400), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(401), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(402), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(403), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(404), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(405), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(406), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(407), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(408), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(409), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(410), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(411), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(412), 0f);
			vVar0.x = 668;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(400), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(401), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(402), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(403), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(404), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(405), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(406), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(407), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(408), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(409), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(410), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(411), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(412), 0f);
			return;
		
		case 47:
			vVar0.x = 673;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
			_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(426), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
			vVar0.x = 672;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
			_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(426), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
			return;
		
		case 48:
			vVar0.x = 694;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(429), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(430), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(431), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(432), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(433), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(434), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(435), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(436), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(437), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(438), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(439), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(440), 0f);
			vVar0.x = 693;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(429), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(430), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(431), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(432), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(433), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(434), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(435), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(436), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(437), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(438), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(439), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(440), 0f);
			return;
		
		case 49:
			vVar0.x = 702;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(441), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(442), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(443), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(444), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(445), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(446), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(447), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(448), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(449), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(450), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(451), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(452), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(453), 0f);
			vVar0.x = 701;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(441), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(442), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(443), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(444), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(445), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(446), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(447), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(448), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(449), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(450), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(451), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(452), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(453), 0f);
			return;
		
		case 53:
			vVar0.x = 714;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(454), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(455), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(456), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(457), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(458), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(459), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(460), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(461), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(462), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(463), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(464), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(465), 0f);
			vVar0.x = 713;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(454), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(455), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(456), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(457), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(458), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(459), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(460), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(461), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(462), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(463), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(464), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(465), 0f);
			return;
		
		case 60:
			vVar0.x = 809;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(466), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(467), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(468), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(469), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(470), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(471), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(472), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(473), 0f);
			vVar0.x = 808;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(466), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(467), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(468), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(469), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(470), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(471), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(472), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(473), 0f);
			return;
		
		case 61:
			vVar0.x = 637;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(474), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(475), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(476), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(477), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(478), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(479), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(480), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(481), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(482), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(483), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(484), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(485), 0f);
			vVar0.x = 636;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(474), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(475), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(476), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(477), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(478), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(479), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(480), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(481), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(482), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(483), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(484), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(485), 0f);
			return;
		
		case 62:
			vVar0.x = 599;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(136, func_67(486), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(487), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(488), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(489), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(490), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(491), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(492), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(493), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(494), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(495), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(496), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(497), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(498), 0f);
			vVar0.x = 598;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(136, func_67(486), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(487), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(488), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(489), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(490), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(491), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(492), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(493), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(494), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(495), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(496), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(497), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(498), 0f);
			return;
		
		case 63:
			vVar0.x = 601;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(499), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(500), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(501), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(502), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(503), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(504), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(505), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(506), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(507), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(508), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(509), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(510), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(511), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(512), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(513), 0f);
			_0x0BCA1D2C47B0D269(9, func_67(514), 0f);
			vVar0.x = 600;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(499), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(500), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(501), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(502), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(503), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(504), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(505), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(506), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(507), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(508), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(509), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(510), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(511), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(512), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(513), 0f);
			_0x0BCA1D2C47B0D269(9, func_67(514), 0f);
			return;
		
		case 64:
			vVar0.x = 607;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(515), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(516), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(517), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(518), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(519), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(520), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(521), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(522), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(523), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(524), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(525), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(526), 0f);
			vVar0.x = 606;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(515), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(516), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(517), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(518), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(519), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(520), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(521), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(522), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(523), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(524), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(525), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(526), 0f);
			return;
		
		case 66:
			vVar0.x = 680;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(527), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(528), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(529), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(530), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(531), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(532), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(533), 0f);
			vVar0.x = 676;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(527), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(528), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(529), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(530), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(531), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(532), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(533), 0f);
			return;
		
		case 67:
			vVar0.x = 679;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(139, func_67(534), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(535), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(536), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(537), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(538), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(539), 0f);
			vVar0.x = 678;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(139, func_67(534), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(535), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(536), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(537), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(538), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(539), 0f);
			return;
		
		case 68:
			vVar0.x = 725;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(540), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(541), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(542), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(543), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(544), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(545), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(546), 0f);
			vVar0.x = 724;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(540), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(541), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(542), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(543), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(544), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(545), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			vVar0.x = 686;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(547), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(548), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(549), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(550), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(551), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(552), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(553), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(554), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(555), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(556), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(557), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(558), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(559), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(560), 0f);
			vVar0.x = 681;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(547), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(548), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(549), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(550), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(551), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(552), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(553), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(554), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(555), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(556), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(557), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(558), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(559), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(560), 0f);
			return;
		
		case 70:
			vVar0.x = 721;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(142, func_67(561), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(562), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(563), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(564), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(565), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(566), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(567), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(568), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(569), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(570), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(571), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(572), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(573), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(574), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(575), 0f);
			vVar0.x = 720;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(142, func_67(561), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(562), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(563), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(564), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(565), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(566), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(567), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(568), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(569), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(570), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(571), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(572), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(573), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(574), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(575), 0f);
			return;
		
		case 71:
			vVar0.x = 617;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(576), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(577), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(578), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(579), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(580), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(581), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(582), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(583), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(584), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(585), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(586), 0f);
			vVar0.x = 616;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(576), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(577), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(578), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(579), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(580), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(581), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(582), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(583), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(584), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(585), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(586), 0f);
			return;
		
		case 72:
			vVar0.x = 727;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(587), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(588), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(589), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(590), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(591), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(592), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(593), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(594), 0f);
			vVar0.x = 726;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(587), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(588), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(589), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(590), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(591), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(592), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(593), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(594), 0f);
			return;
		
		case 73:
			vVar0.x = 729;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(595), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(596), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(597), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(598), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(599), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(600), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(601), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(602), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(603), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(604), 0f);
			vVar0.x = 728;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(92, func_67(595), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(596), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(597), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(598), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(599), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(600), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(601), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(602), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(603), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(604), 0f);
			return;
		
		case 74:
			vVar0.x = 625;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(605), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(606), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(607), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(608), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(609), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(610), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(611), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(612), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(613), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(614), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(615), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(616), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(617), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(618), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(619), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(620), 0f);
			vVar0.x = 624;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(87, func_67(605), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(606), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(607), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(608), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(609), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(610), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(611), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(612), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(613), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(614), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(615), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(616), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(617), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(618), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(619), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(620), 0f);
			return;
		
		case 75:
			vVar0.x = 719;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(621), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(622), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(623), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(624), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(625), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(626), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(627), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(628), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(629), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(630), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(631), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(632), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(633), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(634), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(635), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(636), 0f);
			vVar0.x = 718;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(127, func_67(621), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(622), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(623), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(624), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(625), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(626), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(627), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(628), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(629), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(630), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(631), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(632), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(633), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(634), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(635), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(636), 0f);
			return;
		
		case 76:
			vVar0.x = 667;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(637), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(638), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(639), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(640), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(641), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(642), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(643), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(644), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(645), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(646), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(647), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(648), 0f);
			vVar0.x = 666;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(637), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(638), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(639), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(640), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(641), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(642), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(643), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(644), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(645), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(646), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(647), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(648), 0f);
			return;
		
		case 78:
			vVar0.x = 735;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(649), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(650), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(651), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(652), 0f);
			vVar0.x = 734;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(649), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(650), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(651), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(652), 0f);
			return;
		
		case 79:
			vVar0.x = 737;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(653), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(654), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(655), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(656), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(657), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(658), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(659), 0f);
			vVar0.x = 736;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(653), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(654), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(655), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(656), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(657), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(658), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(659), 0f);
			return;
		
		case 84:
			vVar0.x = 706;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(660), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(661), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(662), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(663), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(664), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(665), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(666), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(667), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(668), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(669), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(670), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(671), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(672), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(673), 0f);
			vVar0.x = 705;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(660), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(661), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(662), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(663), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(664), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(665), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(666), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(667), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(668), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(669), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(670), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(671), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(672), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(673), 0f);
			return;
		
		case 85:
			vVar0.x = 723;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(674), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(675), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(676), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(677), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(678), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(679), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(680), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(681), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(682), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(683), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(684), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(685), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(686), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(687), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(688), 0f);
			vVar0.x = 722;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(674), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(675), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(676), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(677), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(678), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(679), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(680), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(681), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(682), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(683), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(684), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(685), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(686), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(687), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(688), 0f);
			return;
		
		case 86:
			vVar0.x = 595;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(689), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(690), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(691), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(692), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(693), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(694), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(695), 0f);
			vVar0.x = 594;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(689), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(690), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(691), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(692), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(693), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(694), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(695), 0f);
			return;
		
		case 87:
			vVar0.x = 731;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(90, func_67(696), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(697), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(698), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(699), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(700), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(701), 0f);
			vVar0.x = 730;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(90, func_67(696), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(697), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(698), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(699), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(700), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(701), 0f);
			return;
		
		case 88:
			vVar0.x = 733;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(702), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(703), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(704), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(705), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(706), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(707), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(708), 0f);
			vVar0.x = 732;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(702), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(703), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(704), 0f);
			_0x0BCA1D2C47B0D269(139, func_67(705), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(706), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(707), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(708), 0f);
			return;
		
		case 91:
			vVar0.x = 652;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(709), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(710), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(711), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(712), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(713), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(714), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(715), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(716), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(717), 0f);
			vVar0.x = 651;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(709), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(710), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(711), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(712), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(713), 0f);
			_0x0BCA1D2C47B0D269(142, func_67(714), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(715), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(716), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(717), 0f);
			return;
		
		case 92:
			vVar0.x = 739;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(718), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(719), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(720), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(721), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(722), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(723), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(724), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(725), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(726), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(727), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(728), 0f);
			vVar0.x = 738;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(95, func_67(718), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(719), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(720), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(721), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(722), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(723), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(724), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(725), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(726), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(727), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(728), 0f);
			return;
		
		case 93:
			vVar0.x = 654;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(729), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(730), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(731), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(732), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(733), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(734), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(735), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(736), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(737), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(738), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(739), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(740), 0f);
			vVar0.x = 653;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(7, func_67(729), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(730), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(731), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(732), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(733), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(734), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(735), 0f);
			_0x0BCA1D2C47B0D269(87, func_67(736), 0f);
			_0x0BCA1D2C47B0D269(1, func_67(737), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(738), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(739), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(740), 0f);
			return;
		
		case 90:
			vVar0.x = 597;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
			_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
			vVar0.x = 596;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
			_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
			return;
		
		case 36:
			vVar0.x = 831;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(820), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(821), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(822), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(823), 0f);
			vVar0.x = 832;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(820), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(821), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(822), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(823), 0f);
			return;
		
		case 37:
			vVar0.x = 833;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(824), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(825), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(826), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(827), 0f);
			vVar0.x = 834;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(824), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(825), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(826), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(827), 0f);
			return;
		
		case 24:
			vVar0.x = 848;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(846), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(847), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(848), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(849), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(850), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(851), 0f);
			vVar0.x = 847;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(846), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(847), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(848), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(849), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(850), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(851), 0f);
			return;
		
		case 25:
			vVar0.x = 846;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(852), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(853), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(854), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(855), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(856), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(857), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(858), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(859), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(860), 0f);
			vVar0.x = 845;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(852), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(853), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(854), 0f);
			_0x0BCA1D2C47B0D269(5, func_67(855), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(856), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(857), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(858), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(859), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(860), 0f);
			return;
		
		case 59:
			vVar0.x = 807;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(861), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(862), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(863), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(864), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(865), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(866), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(867), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(868), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(869), 0f);
			vVar0.x = 806;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(861), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(862), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(863), 0f);
			_0x0BCA1D2C47B0D269(135, func_67(864), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(865), 0f);
			_0x0BCA1D2C47B0D269(136, func_67(866), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(867), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(868), 0f);
			_0x0BCA1D2C47B0D269(137, func_67(869), 0f);
			return;
		
		case 65:
			vVar0.x = 838;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(870), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(871), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(872), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(873), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(874), 0f);
			vVar0.x = 837;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(870), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(871), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(872), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(873), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			vVar0.x = 917;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(875), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(876), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(877), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(878), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(879), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(880), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(881), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(882), 0f);
			vVar0.x = 916;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(875), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(876), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(877), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(878), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(879), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(880), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(881), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(882), 0f);
			return;
		
		case 81:
			vVar0.x = 919;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(883), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(884), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(885), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(886), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(887), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(888), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(889), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(890), 0f);
			vVar0.x = 918;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(883), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(884), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(885), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(886), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(887), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(888), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(889), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(890), 0f);
			return;
		
		case 82:
			vVar0.x = 921;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(891), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(892), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(893), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(894), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(895), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(896), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(897), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(898), 0f);
			vVar0.x = 920;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(133, func_67(891), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(892), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(893), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(894), 0f);
			_0x0BCA1D2C47B0D269(138, func_67(895), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(896), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(897), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(898), 0f);
			return;
		
		case 83:
			vVar0.x = 923;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(899), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(900), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(901), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(902), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(903), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(904), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(905), 0f);
			vVar0.x = 922;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(2, func_67(899), 0f);
			_0x0BCA1D2C47B0D269(134, func_67(900), 0f);
			_0x0BCA1D2C47B0D269(92, func_67(901), 0f);
			_0x0BCA1D2C47B0D269(133, func_67(902), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(903), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(904), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(905), 0f);
			return;
		
		case 89:
			vVar0.x = 925;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(906), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(907), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(908), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(909), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(910), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(911), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(912), 0f);
			vVar0.x = 924;
			leaderboards2_write_data(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_67990, 0f);
			_0x0BCA1D2C47B0D269(162, Global_67991, 0f);
			_0x0BCA1D2C47B0D269(126, true, 0f);
			_0x0BCA1D2C47B0D269(161, Global_67993, 0f);
			_0x0BCA1D2C47B0D269(138, func_67(906), 0f);
			_0x0BCA1D2C47B0D269(2, func_67(907), 0f);
			_0x0BCA1D2C47B0D269(7, func_67(908), 0f);
			_0x0BCA1D2C47B0D269(127, func_67(909), 0f);
			_0x0BCA1D2C47B0D269(95, func_67(910), 0f);
			_0x0BCA1D2C47B0D269(90, func_67(911), 0f);
			_0x0BCA1D2C47B0D269(132, func_67(912), 0f);
			return;
		
		default:
	}
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_101154.f_1.f_126[Global_55753 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 += Global_101154.f_1.f_126[Global_55753 /*23*/].f_17[iVar0];
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] == iParam0)
		{
			return Global_67845[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

bool func_69(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (Global_55974[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return false;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return false;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_101154.f_29429[4 /*4*/] == func_56())
	{
		Global_55974[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_55974[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_55974[iParam0 /*13*/].f_2)
		{
			return true;
		}
	}
	else if (iParam1 >= Global_55974[iParam0 /*13*/].f_2)
	{
		return true;
	}
	return false;
}

void func_70(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (Global_55739)
	{
		Global_55754 = 0;
		return;
	}
	iLocal_622 = false;
	iLocal_623 = false;
	iVar0 = 0;
	if (func_94(0))
	{
		clear_replay_stats();
		Global_55741 = 1;
		begin_replay_stats(33, 33);
	}
	iVar1 = -1;
	iLocal_627 = 0;
	iVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		switch (Global_67845[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_67845[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_81(uParam0, iVar0))
		{
		}
		if (Global_67845[iVar0 /*9*/] >= 0)
		{
			if (!Global_55974[Global_67845[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_623++;
				if (Global_67845[iVar0 /*9*/].f_3 == 2)
				{
					iVar2 = true;
				}
			}
		}
		switch (Global_67845[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_67845[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_67993 = iLocal_622;
	fVar3 = func_76(uParam0, iLocal_622, iLocal_623, iVar2);
	if (func_94(0))
	{
		_0x69FE6DC87BD2A5E9(Global_67995);
		_0x69FE6DC87BD2A5E9(round(fVar3));
		if (iVar2)
		{
			_0x69FE6DC87BD2A5E9(true);
		}
		else
		{
			_0x69FE6DC87BD2A5E9(false);
		}
		if (Global_67994)
		{
			_0x69FE6DC87BD2A5E9(true);
		}
		else
		{
			_0x69FE6DC87BD2A5E9(false);
		}
		end_replay_stats();
		Global_55741 = 0;
	}
	Global_55754 = 0;
	if (iVar1 > -1)
	{
		fVar3 = to_float(iVar1);
	}
	func_71(fVar3, iVar2);
}

void func_71(Vector3 fParam0, int iParam1)
{
	float fVar0;
	auto uVar1;
	auto uVar2;
	
	if (Global_67994)
	{
		uVar1 = Global_67995;
		fVar0 = func_75(uVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_101154.f_8706.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_74(uVar1, fParam0, iParam1);
		}
	}
	else if (Global_67995 == -1)
	{
	}
	else
	{
		uVar2 = Global_67995;
		fVar0 = func_73(uVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_101154.f_8706.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_72(uVar2, fParam0, iParam1);
		}
	}
}

void func_72(auto uParam0, float fParam1, int iParam2)
{
	if (iParam2)
	{
		Global_101154.f_7775.f_330[uParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_101154.f_7775.f_330[uParam0 /*6*/].f_5 = fParam1;
	}
	Global_25129 = 1;
}

auto func_73(auto uParam0)
{
	return Global_101154.f_7775.f_330[uParam0 /*6*/].f_5;
}

void func_74(auto uParam0, float fParam1, int iParam2)
{
	if (iParam2)
	{
		Global_101154.f_17264[uParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_101154.f_17264[uParam0 /*6*/].f_5 = fParam1;
	}
	Global_25129 = 1;
}

auto func_75(auto uParam0)
{
	return Global_101154.f_17264[uParam0 /*6*/].f_5;
}

auto func_76(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_80(iParam1, iParam2, 0);
	iVar1 = func_79(fVar0);
	if (iParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_78(uParam0, 1, "MTPHPER", 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_77(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_77(iVar1))
	{
		case 109:
			func_78(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2);
			break;
		
		case 108:
			func_78(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2);
			break;
		
		case 107:
			func_78(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2);
			break;
	}
	return fVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_78(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0.f_549 = iParam1;
	StringCopy(uParam0.f_550, sParam2, 16);
	*uParam0.f_554 = iParam3;
	*uParam0.f_555 = iParam4;
	*uParam0.f_556 = iParam5;
	*uParam0.f_557 = iParam6;
}

int func_79(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_80(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	Vector3 fVar1;
	
	if (iParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = to_float(iParam0) / to_float(iParam1);
	fVar1 = 50f * fVar0 + 50f;
	fVar1 = to_float(ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

bool func_81(auto uParam0, int iParam1)
{
	float fVar0;
	Vector3 fVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	char* sVar20;
	int iVar21;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_67845[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return false;
	}
	Var2 = {Global_55974[Global_67845[iParam1 /*9*/] /*13*/]};
	if (Var2 == 15)
	{
		Global_67845[iParam1 /*9*/].f_1 = iLocal_630;
	}
	if (Var2 == 9)
	{
		Global_67845[iParam1 /*9*/].f_2 = fLocal_629;
	}
	if (Var2 == 14)
	{
		Global_67845[iParam1 /*9*/].f_1 = floor(Global_67845[iParam1 /*9*/].f_2);
	}
	if (func_69(Global_67845[iParam1 /*9*/], Global_67845[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_67845[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = to_float(floor(to_float(Global_67845[iParam1 /*9*/].f_1) / to_float(Var2.f_2) * 100f));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar15 = func_84(Var2.f_4);
	iVar16 = 0;
	switch (Global_67845[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar16 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar16 = 1;
			break;
	}
	if (Global_67845[iParam1 /*9*/].f_3 == 0 || iVar16)
	{
		if (Var2.f_3)
		{
			if ((iVar15 > Global_67845[iParam1 /*9*/].f_1 || iVar15 < 0) || iVar15 == -1)
			{
				func_83(Global_67845[iParam1 /*9*/].f_1, Global_67845[iParam1 /*9*/]);
			}
		}
		else if ((Global_67845[iParam1 /*9*/].f_1 > iVar15 || iVar15 < 0) || iVar15 == -1)
		{
			func_83(Global_67845[iParam1 /*9*/].f_1, Global_67845[iParam1 /*9*/]);
		}
	}
	iVar17 = Global_67845[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return true;
	}
	iVar18 = 1;
	if (fVar0 == 1f)
	{
		iLocal_622++;
		iVar18 = 2;
	}
	sVar19 = func_82(Global_67845[iParam1 /*9*/]);
	if (Global_67845[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_94(0))
		{
			func_83(-1, Global_67845[iParam1 /*9*/]);
		}
		sVar20 = "MTPHPERRET";
		switch (Global_67845[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar20 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar20 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar20 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar20 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_627 == Global_67845[iParam1 /*9*/].f_3)
		{
			sVar20 = "";
		}
		iLocal_627 = Global_67845[iParam1 /*9*/].f_3;
		func_89(uParam0, 6, sVar19, sVar20, Global_67845[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_627 = 0;
		switch (Var2)
		{
			case 1:
				func_89(uParam0, 8, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 2:
				func_89(uParam0, 9, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 3:
				func_89(uParam0, 0, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 4:
			case 17:
				func_89(uParam0, 9, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 5:
				func_89(uParam0, 11, sVar19, "", ceil(to_float(Global_67845[iParam1 /*9*/].f_1) / to_float(Var2.f_2) * 100f), 0, iVar18, 0);
				break;
			
			case 6:
				func_89(uParam0, 0, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 7:
				if (iVar17 > Var2.f_2)
				{
					iVar17 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar17, Var2.f_2, iVar18, 0);
				break;
			
			case 8:
				iVar21 = Global_67845[iParam1 /*9*/].f_1;
				if (iVar21 > Var2.f_2)
				{
					iVar21 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar21, Var2.f_2, iVar18, 0);
				break;
			
			case 9:
				func_89(uParam0, 11, sVar19, "", round(Global_67845[iParam1 /*9*/].f_2), 0, iVar18, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_89(uParam0, 1, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 11:
				func_89(uParam0, 11, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 14:
				func_89(uParam0, 12, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 12:
			case 13:
				func_89(uParam0, 3, sVar19, "", Global_67845[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			default:
				break;
			}
	}
	return false;
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_55974[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_55974[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	STATS::STAT_SET_INT(iVar0, iVar1, 1);
	if (func_94(0) && Global_55741)
	{
		_0x69FE6DC87BD2A5E9(iVar0);
		_0x69FE6DC87BD2A5E9(iParam0);
		_0x69FE6DC87BD2A5E9(iParam1);
	}
}

int func_84(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return iVar0 - 1;
	}
	return -1;
}

int func_85(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_118, iParam0);
}

int func_86(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_205[iParam0];
}

int func_87(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_89(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	if (*uParam0.f_56 == 13)
	{
		return;
	}
	uVar0 = *uParam0.f_56;
	*uParam0.f_57[uVar0] = iParam1;
	StringCopy(uParam0.f_71[uVar0 /*16*/], sParam2, 64);
	StringCopy(uParam0.f_280[uVar0 /*16*/], sParam3, 64);
	*uParam0.f_489[uVar0] = iParam4;
	*uParam0.f_503[uVar0] = iParam5;
	*uParam0.f_517[uVar0] = iParam6;
	*uParam0.f_531[uVar0] = iParam7;
	*uParam0.f_56++;
}

void func_90(auto uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(uParam0.f_5, sParam1, 16);
	StringCopy(uParam0.f_13, sParam2, 64);
	*uParam0.f_29 = iParam3;
	*uParam0.f_11 = 0;
}

void func_91(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_87831.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_101154.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_101154.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_101154.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_101154.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_101154.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_101154.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	uVar0 = func_86(func_68(iParam0));
	iVar1 = Global_101154.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_93(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_93(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_101154.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_87841[iParam0 /*38*/].f_37)
	{
		if (Global_87841[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 += Global_87841[iParam0 /*38*/].f_31[iVar2];
			Global_101154.f_1.f_126[iParam0 /*23*/].f_1 -= Global_87841[iParam0 /*38*/].f_31[iVar2];
		}
		iVar2++;
	}
	iVar1 -= iVar3;
	if (iParam0 == 2)
	{
		iVar4 = floor(to_float(Global_101154.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f);
		func_93(iParam0, 3, iVar4);
		Global_101154.f_1.f_126[iParam0 /*23*/].f_1 -= iVar4;
		iVar1 -= iVar4;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		uVar5 = Global_101154.f_1.f_12[uVar0 /*6*/][iVar2];
		switch (Global_101154.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_101154.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(to_float(Global_87486[uVar5 /*5*/].f_1) * 0.01f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
				break;
			
			case 3:
				Global_101154.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(to_float(Global_87486[uVar5 /*5*/].f_1) * 0.015f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_87640[uVar0 /*19*/])
	{
		iVar1 -= Global_101154.f_1.f_126[iParam0 /*23*/].f_17[iVar2];
		iVar2++;
	}
	Global_101154.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_101154.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_101154.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_87831.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_101154.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_101154.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_101154.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_101154.f_1.f_126[0 /*23*/].f_2[1] = ceil(0.12f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
			iVar1 -= Global_101154.f_1.f_126[0 /*23*/].f_2[1];
			Global_87831.f_7 = ceil(0.14f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
			iVar1 -= Global_87831.f_7;
			Global_87831.f_6 = 14f;
			Global_101154.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_101154.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_101154.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_101154.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_101154.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_101154.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_101154.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_87831.f_6 = -1f;
			break;
		
		case 2:
			Global_101154.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_101154.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_101154.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_87831.f_7 = ceil(0.12f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
			iVar1 -= Global_87831.f_7;
			Global_87831.f_6 = 12f;
			Global_101154.f_1.f_126[2 /*23*/].f_2[0] = iVar1 / 3;
			Global_101154.f_1.f_126[2 /*23*/].f_2[1] = iVar1 / 3;
			Global_101154.f_1.f_126[2 /*23*/].f_2[2] = iVar1 / 3;
			Global_87831.f_6 = 0f;
			break;
		
		case 3:
			Global_101154.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_101154.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_101154.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_87831.f_7 = ceil(0.12f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
			iVar1 -= Global_87831.f_7;
			Global_87831.f_6 = 12f;
			Global_101154.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_101154.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_101154.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_101154.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_87831.f_7 = ceil(0.12f * IntToFloat(Global_101154.f_1.f_126[iParam0 /*23*/].f_1));
			iVar1 -= Global_87831.f_7;
			Global_87831.f_6 = 12f;
			Global_101154.f_1.f_126[4 /*23*/].f_2[0] = iVar1 / 3;
			Global_101154.f_1.f_126[4 /*23*/].f_2[1] = iVar1 / 3;
			Global_101154.f_1.f_126[4 /*23*/].f_2[2] = iVar1 / 3;
			Global_87831.f_6 = 0f;
			break;
	}
	iVar6 = Global_101154.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_101154.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_101154.f_1.f_126[iParam0 /*23*/].f_6[0] = to_float(Global_101154.f_1.f_126[iParam0 /*23*/].f_2[0]) / to_float(iVar6) * 100f;
	}
	if (Global_101154.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_101154.f_1.f_126[iParam0 /*23*/].f_6[1] = to_float(Global_101154.f_1.f_126[iParam0 /*23*/].f_2[1]) / to_float(iVar6) * 100f;
	}
	if (Global_101154.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_101154.f_1.f_126[iParam0 /*23*/].f_6[2] = to_float(Global_101154.f_1.f_126[iParam0 /*23*/].f_2[2]) / to_float(iVar6) * 100f;
	}
	if (Global_87831.f_6 != -1f)
	{
		Global_87831.f_6 = to_float(Global_87831.f_7) / to_float(iVar6) * 100f;
	}
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("jewel_heist_raw_take"), Global_101154.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 += Global_101154.f_1.f_126[iParam0 /*23*/].f_2[iVar8];
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_92(810, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_86(8))
			{
				case 3:
					func_92(610, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(611, iVar7, 1);
					break;
				
				case 4:
					func_92(622, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_92(734, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_86(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_86(11))
			{
				case 8:
					func_92(664, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(671, iVar7, 1);
					break;
				
				case 9:
					func_92(674, Global_101154.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_87831.f_3 = 1;
	Global_55749 = 0;
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] == iParam0)
		{
			if (iParam2)
			{
				Global_67845[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67845[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67845[iVar0 /*9*/] != -1)
	{
		if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67845[iVar0 /*9*/].f_1 > 1)
			{
				Global_67845[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67845[iVar0 /*9*/].f_1 < 0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 *= -1;
	}
	iVar1 = false;
	if (Global_87841[iParam0 /*38*/].f_37 == 5)
	{
		iVar1 = true;
	}
	iVar2 = Global_87841[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_87841[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_87841[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_87841[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (iVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			STATS::STAT_SET_INT(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_87841[iParam0 /*38*/].f_25[Global_87841[iParam0 /*38*/].f_37] = iParam1;
	Global_87841[iParam0 /*38*/].f_31[Global_87841[iParam0 /*38*/].f_37] = iVar0;
	Global_87841[iParam0 /*38*/].f_37++;
}

int func_94(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	if (Global_67844 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_67845[iVar0 /*9*/].f_2 != 0f)
			{
				Global_67845[iVar0 /*9*/].f_1 = floor(Global_67845[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_67845[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_55974[iVar1 /*13*/] == 9)
			{
				Global_67845[iVar0 /*9*/].f_1 = round(fLocal_629);
			}
			if (Global_55974[iVar1 /*13*/] == 15)
			{
				Global_67845[iVar0 /*9*/].f_1 = iLocal_630;
			}
		}
		iVar0++;
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	Vector3 fVar2;
	Vector3 fVar3;
	Vector3 fVar4;
	
	if (Global_55768)
	{
		return;
	}
	Global_55768 = 1;
	iVar0 = false;
	iVar1 = false;
	iVar0 = func_7(joaat("sp0_shots")) - Global_55772;
	iVar1 = func_7(joaat("sp0_hits")) - Global_55771;
	iVar0 += func_7(joaat("sp1_shots")) - Global_55774;
	iVar1 += func_7(joaat("sp1_hits")) - Global_55773;
	iVar0 += func_7(joaat("sp2_shots")) - Global_55776;
	iVar1 += func_7(joaat("sp2_hits")) - Global_55775;
	wait(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = to_float(iVar0);
		fVar4 = to_float(iVar1);
		fVar2 = to_float(floor(fVar4 / fVar3 * 100f));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_629 = fVar2;
	iLocal_630 = iVar0;
}

void func_97(auto uParam0)
{
	func_62(uParam0);
	*uParam0.f_570 = 0;
	*uParam0.f_31 = 0;
	*uParam0.f_56 = 0;
	*uParam0.f_567 = 0;
	*uParam0.f_569 = 0;
}

int func_98()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_99()
{
	int iVar0;
	
	if (Global_25365 == 0 && !Global_25369)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		Global_67845[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_101();
	if (((Global_55755 && is_player_playing(get_player_index())) && !is_cutscene_active()) && !is_pause_menu_active())
	{
		Global_55755 = 0;
	}
	if (Global_55748)
	{
		Global_55748 = 0;
		iLocal_621 = 0;
	}
	iVar0 = true;
	iVar1 = true;
	if (is_pause_menu_active())
	{
		iVar0 = false;
	}
	if (!has_cutscene_finished())
	{
		iVar0 = false;
		iVar1 = false;
	}
	if (Global_55755)
	{
		iVar0 = false;
		iVar1 = false;
	}
	if (!is_player_control_on(get_player_index()))
	{
		iVar0 = false;
		iVar1 = false;
	}
	if (iVar0)
	{
		iLocal_621 = round(get_frame_time() * 1000f);
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_67844)
	{
		if (Global_67845[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_55974[Global_67845[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_67845[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_67845[iVar2 /*9*/].f_7 == 1)
						{
							Global_67845[iVar2 /*9*/].f_8 = 0;
							Global_67845[iVar2 /*9*/].f_1 = 0;
							Global_67845[iVar2 /*9*/].f_7 = 0;
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Global_67845[iVar2 /*9*/].f_6))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_67845[iVar2 /*9*/].f_6, 0))
							{
								iLocal_625 = Global_67845[iVar2 /*9*/].f_8;
								iLocal_624 = get_entity_health(Global_67845[iVar2 /*9*/].f_6);
								iLocal_626 = iLocal_625 - iLocal_624;
								if (iLocal_626 > 0)
								{
									Global_67845[iVar2 /*9*/].f_1 += iLocal_626;
									if (Global_67845[iVar2 /*9*/].f_1 < 0)
									{
										Global_67845[iVar2 /*9*/].f_1 *= -1;
									}
								}
								Global_67845[iVar2 /*9*/].f_8 = iLocal_624;
							}
						}
						else
						{
							Global_67845[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_67845[iVar2 /*9*/].f_1 += iLocal_621;
					break;
				
				case 2:
					if (Global_55756)
					{
						Global_67845[iVar2 /*9*/].f_1 += iLocal_621;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_55757)
					{
						if (Global_55759 == -1 || Global_67845[iVar2 /*9*/] == Global_55759)
						{
							if (((Global_67845[iVar2 /*9*/] == 339 || Global_67845[iVar2 /*9*/] == 179) || Global_67845[iVar2 /*9*/] == 342) || Global_67845[iVar2 /*9*/] == 234)
							{
								Global_67845[iVar2 /*9*/].f_1 += round(get_frame_time() * 1000f);
							}
							else
							{
								Global_67845[iVar2 /*9*/].f_1 += iLocal_621;
							}
						}
					}
					break;
				
				case 5:
					if (iVar1)
					{
						if (Global_55761 == -1 || Global_55761 == Global_67845[iVar2 /*9*/])
						{
							if (!Global_55760 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Global_55760))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Global_55760, 0))
									{
										if (is_entity_a_vehicle(Global_55760))
										{
											fVar3 = get_entity_speed(Global_55760);
											if (fVar3 > Global_67845[iVar2 /*9*/].f_2)
											{
												Global_67845[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_48(func_56()))
					{
						if (is_special_ability_active(get_player_index()) && is_special_ability_enabled(get_player_index()))
						{
							Global_67845[iVar2 /*9*/].f_1 += iLocal_621;
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_101()
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
	
	if ((((Global_68040 == 0 && Global_68030 == 0) && Global_55908 == 0) && Global_55778 == 0) && !Global_67996)
	{
		return;
	}
	iVar10 = 0;
	if (Global_55778 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55779[iVar0 /*2*/] != 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_55779[iVar0 /*2*/]))
				{
					Global_55779[iVar0 /*2*/] = 0;
					Global_55778--;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		iVar3 = get_event_at_index(0, iVar0);
		switch (iVar3)
		{
			case 140:
				get_event_data(0, iVar0, &iVar4, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					ENTITY::IS_ENTITY_DEAD(iVar4, 0);
					if (Global_55908 > 0)
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_55908)
						{
							if (Global_55909[iVar1 /*2*/] == iVar7)
							{
								iVar10 += Global_55909[iVar1 /*2*/].f_1;
							}
							iVar1++;
						}
					}
					if (is_entity_a_ped(iVar4) && get_ped_index_from_entity_index(iVar4) != PLAYER::PLAYER_PED_ID())
					{
						iVar5 = _get_ped_killer(get_ped_index_from_entity_index(iVar4));
						iVar14 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (is_entity_a_vehicle(iVar5))
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar15 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
								}
								else
								{
									iVar15 = get_players_last_vehicle();
								}
								if (ENTITY::DOES_ENTITY_EXIST(iVar15) && get_vehicle_index_from_entity_index(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((is_entity_a_ped(iVar5) && get_player_ped(get_player_index()) == get_ped_index_from_entity_index(iVar5)) || iVar14)
						{
							if (is_entity_a_ped(iVar5))
							{
								iVar6 = get_ped_cause_of_death(get_ped_index_from_entity_index(iVar4));
								if (Global_55778 > 0)
								{
									iVar11 = func_105(iVar4);
									if (iVar11 != -1)
									{
										get_ped_last_damage_bone(get_ped_index_from_entity_index(Global_55779[iVar11 /*2*/]), &iLocal_628);
										if (iLocal_628 == 31086 || iLocal_628 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_104();
												Global_55779[iVar11 /*2*/] = 0;
												Global_55778--;
											}
										}
									}
								}
								if (Global_68040 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_68040)
									{
										if (Global_68031[iVar1 /*2*/] == iVar6)
										{
											func_92(Global_68031[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_67996)
							{
								iVar12 = get_ped_index_from_entity_index(iVar4);
								iVar13 = get_ped_type(iVar12);
								if (!is_entity_a_mission_entity(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = get_relationship_between_peds(get_player_ped(get_player_index()), get_ped_index_from_entity_index(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (is_ped_human(get_ped_index_from_entity_index(iVar4)))
											{
												func_103();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_68030 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_68030;
								iVar8 = false;
								while (!iVar8)
								{
									if (Global_67997[iVar1 /*2*/] != 0)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Global_67997[iVar1 /*2*/]))
										{
											if (ENTITY::IS_ENTITY_DEAD(Global_67997[iVar1 /*2*/], 0))
											{
												if (Global_67997[iVar1 /*2*/] == iVar4)
												{
													func_92(Global_67997[iVar1 /*2*/].f_1, 1, 0);
													Global_67997[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_67997[iVar1 /*2*/] = 0;
										}
										iVar2--;
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										iVar8 = true;
									}
								}
								if (Global_68030 > 0)
								{
									while (Global_67997[Global_68030 - 1 /*2*/] == 0 && Global_68030 > 1)
									{
										if (Global_68030 > 1)
										{
											Global_68030--;
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_102(iVar10);
	}
}

void func_102(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		uVar1 = Global_67845[iVar0 /*9*/];
		if (Global_55974[uVar1 /*13*/] == 13)
		{
			Global_67845[iVar0 /*9*/].f_1 += iParam0;
		}
		iVar0++;
	}
}

void func_103()
{
	int iVar0;
	auto uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		uVar1 = Global_67845[iVar0 /*9*/];
		if (Global_55974[uVar1 /*13*/] == 16)
		{
			Global_67845[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_104()
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (Global_55778 == 0)
	{
		return;
	}
	iVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		uVar2 = Global_67845[iVar1 /*9*/];
		if (Global_55974[uVar2 /*13*/] == 7)
		{
			Global_67845[iVar1 /*9*/].f_1++;
			iVar0 = true;
		}
		iVar1++;
	}
	if (!iVar0)
	{
	}
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (Global_55778 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_55779[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106()
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
	
	if (_0xD642319C54AADEB6())
	{
		if (_0x5B1F2E327B6B6FE1() == 33)
		{
			if (_0x2B626A0150E4D449() == 33)
			{
				iVar0 = _0xDC9274A7EF6B2867();
				iVar1 = -1;
				iVar2 = iVar0 - 4;
				if (iVar0 - 4 % 3 == 0)
				{
					iVar0 -= 4 / 3;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = _0x8098C8D6597AAE18(iVar3 * 3 + 1);
						iVar5 = _0x8098C8D6597AAE18(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_83(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = _0x8098C8D6597AAE18(iVar2);
					iVar7 = _0x8098C8D6597AAE18(iVar2 + 1);
					iVar8 = false;
					if (_0x8098C8D6597AAE18(iVar2 + 2) > 0)
					{
						iVar8 = true;
					}
					iVar9 = 0;
					if (_0x8098C8D6597AAE18(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_67994 = iVar9;
					Global_67995 = iVar6;
					if (iVar1 == -1)
					{
						func_71(to_float(iVar7), iVar8);
					}
					else
					{
						func_71(to_float(iVar1), iVar8);
					}
				}
				func_107();
			}
		}
		if (_0x5B1F2E327B6B6FE1() == 13)
		{
			if (_0x2B626A0150E4D449() == 37)
			{
				iVar10 = _0xDC9274A7EF6B2867();
				if (iVar10 == 3)
				{
					iVar11 = _0x8098C8D6597AAE18(0);
					iVar12 = _0x8098C8D6597AAE18(1);
					iVar13 = _0x8098C8D6597AAE18(2);
					Global_101154.f_1815[iVar11 /*2*/] = iVar12;
					Global_101154.f_1815[iVar11 /*2*/].f_1 = iVar13;
					func_107();
				}
			}
		}
	}
}

bool func_107()
{
	if (func_94(0))
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

void func_108()
{
	Global_69749 = 0;
	Global_69750 = 0;
	Global_55749 = 0;
	settimera(0);
	settimerb(0);
	_0xE1CD1E48E025E661();
	iLocal_621 = 0;
	Global_55745 = 0;
	Global_55759 = -1;
	iLocal_631 = 0;
	Global_55743 = 0;
	Global_55742 = 0;
	iLocal_633 = 0;
	Global_55760 = 0;
	Global_55758 = 0;
	Global_55739 = 0;
	Global_68040 = 0;
	Global_68030 = 0;
	func_4();
	func_3();
	if (iLocal_634)
	{
		func_1(&Local_45);
		iLocal_634 = false;
	}
	if (Global_3)
	{
		terminate_this_thread();
	}
	Global_55754 = 0;
	Global_55750 = 0;
}

