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
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<8> Local_42 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11>[] Local_55 = new struct<11>[30];
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int[] iLocal_393 = new int[4];
	float[] fLocal_398 = new float[4];
	float fLocal_403 = 0;
	float fLocal_404 = 0;
	float fLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_40 = true;
	iLocal_41 = true;
	iLocal_388 = -1;
	iLocal_406 = 1;
	iLocal_408 = get_sound_id();
	if (has_force_cleanup_occurred(210))
	{
		func_77(1);
	}
	if (_get_number_of_instances_of_streamed_script(joaat("ambient_diving")) > 1)
	{
		terminate_this_thread();
	}
	func_76(27);
	while (true)
	{
		wait(0);
		if (func_73(0))
		{
			if (!iLocal_412)
			{
				func_77(0);
				iLocal_412 = 1;
			}
		}
		else
		{
			iLocal_412 = 0;
			func_72(player_ped_id());
			switch (iLocal_386)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_42, &Local_55) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!iLocal_407)
			{
				iLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_386 = iParam0;
}

bool func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_7(0))
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
		Var0.f_3 = func_6(iParam1);
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
				func_4(iVar15);
			}
			iVar15++;
		}
		return true;
	}
	return false;
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
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

int func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
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

int func_7(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_9();
	}
}

void func_9()
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
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_12(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_11() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_10();
				}
			}
		}
	}
}

bool func_10()
{
	if (func_7(0))
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

var func_11()
{
	return Global_25120;
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

var func_14()
{
	return Global_1312747;
}

void func_15(int iParam0)
{
	if (iParam0)
	{
		Global_101154.f_12741.f_89 = 1;
	}
	else
	{
		Global_101154.f_12741.f_89 = 0;
	}
}

bool func_16()
{
	if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) > 0)
	{
		return true;
	}
	return false;
}

int func_17(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	
	is_ped_injured(player_ped_id());
	vVar2 = {get_entity_coords(player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_54(uParam0.f_1, *uParam0.f_10);
		if (!*(iParam1[*uParam0.f_10 /*11*/]).f_10)
		{
			if (!iVar1)
			{
				if (!func_53(*(iParam1[*uParam0.f_10 /*11*/].f_6), 0f, 0f, 0f, 0))
				{
					func_51(iParam1[*uParam0.f_10 /*11*/], *uParam0.f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[*uParam0.f_10 /*11*/], *uParam0.f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!iVar1)
		{
			func_36(uParam0, iParam1, vVar2);
		}
		*uParam0.f_10++;
		if (*uParam0.f_10 >= *iParam1)
		{
			*uParam0.f_10 = 0;
		}
		iVar0++;
	}
	if (*uParam0.f_11)
	{
		if (!Global_69749)
		{
			func_26(uParam0.f_11, uParam0.f_12, uParam0.f_9, 5, &iLocal_389, &uLocal_387, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			vVar5 = {get_entity_coords(player_ped_id(), 1)};
			if (func_24(&Local_42, &Local_55, vVar5, &iVar8))
			{
				if (get_distance_between_coords(func_23(iVar8), vVar5, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!iLocal_407)
	{
		if (*uParam0.f_1.f_4 >= *uParam0.f_1.f_3)
		{
			iLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!*uParam0.f_12 && !*uParam0.f_11)
	{
		return *uParam0.f_1.f_4 >= *uParam0.f_1.f_3;
	}
	return false;
}

void func_19(int iParam0)
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
		set_bit(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = get_game_timer() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = get_game_timer() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_22();
	}
}

void func_22()
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
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_24(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = false;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = false;
	while (iVar0 < *iParam1)
	{
		if (!func_54(uParam0.f_1, iVar0))
		{
			fVar1 = vdist2(vParam2, *(iParam1[iVar0 /*11*/].f_3));
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

int func_25(int iParam0)
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
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_35(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				if (has_scaleform_movie_loaded(*uParam5))
				{
					iVar0 = get_sound_id();
					if (iParam3 == 6)
					{
						play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				_push_scaleform_movie_function(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				_begin_text_component(sParam6);
				_end_text_component();
				_begin_text_component(sParam7);
				add_text_component_integer(func_28(iParam3));
				_end_text_component();
				_pop_scaleform_movie_function_void();
				*uParam2 = get_game_timer();
				*iParam4++;
				break;
			
			case 2:
				if (get_game_timer() - *uParam2 > 7000)
				{
					_push_scaleform_movie_function(*uParam5, "SHARD_ANIM_OUT");
					_push_scaleform_movie_function_parameter_int(true);
					_push_scaleform_movie_function_parameter_float(0.33f);
					_pop_scaleform_movie_function_void();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (has_scaleform_movie_loaded(*uParam5))
					{
						func_35(1);
						draw_scaleform_movie_fullscreen(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if (get_game_timer() - *uParam2 > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (has_scaleform_movie_loaded(*uParam5))
					{
						func_35(1);
						draw_scaleform_movie_fullscreen(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (has_scaleform_movie_loaded(*uParam5))
				{
					set_scaleform_movie_as_no_longer_needed(uParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

bool func_27()
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (is_bit_set(Global_101154.f_8739.f_108, func_33(func_34(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = func_32(iParam0) + iVar1;
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_32(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return iParam0 - iParam1;
}

int func_34(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_35(int iParam0)
{
	if (Global_69756 != iParam0)
	{
		Global_69756 = iParam0;
	}
}

bool func_36(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	
	iVar0 = *uParam0.f_10;
	if (*(uParam1[iVar0 /*11*/]).f_10)
	{
		if (*(uParam1[iVar0 /*11*/]).f_1 != 0)
		{
			if (has_pickup_been_collected(*(uParam1[iVar0 /*11*/]).f_1) || func_49(*(uParam1[iVar0 /*11*/]).f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return true;
			}
		}
	}
	if (does_pickup_exist(*(uParam1[iVar0 /*11*/]).f_1))
	{
		if ((vdist2(vParam2, get_pickup_coords(*(uParam1[iVar0 /*11*/]).f_1)) > 60f * 60f || func_38(13)) || func_38(14))
		{
			func_37(uParam1[iVar0 /*11*/].f_1);
			*(uParam1[iVar0 /*11*/]).f_1 = 0;
			*(uParam1[iVar0 /*11*/]).f_10 = 0;
		}
	}
	return false;
}

void func_37(var uParam0)
{
	if (does_pickup_exist(*uParam0))
	{
		remove_pickup(*uParam0);
	}
}

int func_38(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_32(*uParam0) + iParam2;
	func_37(uParam1[iParam2 /*11*/].f_1);
	func_48(uParam1[iParam2 /*11*/].f_2);
	*(uParam1[iParam2 /*11*/]).f_1 = 0;
	*(uParam1[iParam2 /*11*/]).f_10 = 0;
	func_47(uParam0.f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	set_pad_shake(0, 200, 250);
	stat_increment(*uParam0.f_6, 1f);
	if (iLocal_41)
	{
		func_45(uParam0.f_1, iParam2);
	}
	else
	{
		func_43(uParam0.f_1);
	}
	func_41();
	_0x79AB33F0FBFAC40C(iVar0);
	func_40(1, 0);
	func_10();
	*uParam0.f_11 = 1;
}

void func_40(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = false;
	stat_get_int(func_42(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	stat_get_int(func_42(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	stat_get_int(func_42(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = func_34(0) + func_34(1) + func_34(3);
	if (iVar2 > 0)
	{
		iVar3 = iVar1 * 100 / iVar2;
	}
	stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_42(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (*uParam0.f_3 <= 0)
	{
	}
	if (*uParam0.f_2 <= 0)
	{
	}
	if (iLocal_40)
	{
	}
	iVar0 = false;
	while (iVar0 < *uParam0.f_3)
	{
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13(*uParam0.f_2 + iVar0, 1, -1, 1);
			if (iLocal_40)
			{
			}
		}
		iVar0++;
	}
	*uParam0.f_4 = iVar1;
	if (iLocal_40)
	{
	}
	if (iVar1 == *uParam0.f_3 && *uParam0.f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = get_game_timer() + iParam1;
}

void func_45(var uParam0, int iParam1)
{
	if (*uParam0.f_3 <= 0)
	{
	}
	if (*uParam0.f_2 <= 0)
	{
	}
	if (iLocal_40)
	{
	}
	if (iParam1 >= *uParam0.f_3)
	{
	}
	if (func_54(uParam0, iParam1))
	{
		*uParam0.f_4++;
		func_13(*uParam0.f_2 + iParam1, 1, -1, 1);
		if (iLocal_40)
		{
		}
	}
	if (iLocal_40)
	{
	}
	if (*uParam0.f_4 == *uParam0.f_3 && *uParam0.f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (iParam2)
			{
				set_bit(&(Global_101154.f_8739.f_122), iParam1);
			}
			else
			{
				clear_bit(&(Global_101154.f_8739.f_122), iParam1);
			}
			return;
		}
		if (iParam2)
		{
			set_bit(&(Global_101154.f_8739.f_122.f_1), iParam1 - 32);
		}
		else
		{
			clear_bit(&(Global_101154.f_8739.f_122.f_1), iParam1 - 32);
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (iParam2)
			{
				set_bit(&(Global_101154.f_8739.f_125), iParam1);
			}
			else
			{
				clear_bit(&(Global_101154.f_8739.f_125), iParam1);
			}
			return;
		}
		if (iParam2)
		{
			set_bit(&(Global_101154.f_8739.f_125.f_1), iParam1 - 32);
		}
		else
		{
			clear_bit(&(Global_101154.f_8739.f_125.f_1), iParam1 - 32);
		}
	}
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (iParam2)
		{
			set_bit(iParam0, iParam1);
		}
		else
		{
			clear_bit(iParam0, iParam1);
		}
		return;
	}
	if (iParam2)
	{
		set_bit(iParam0.f_1, iParam1 - 32);
	}
	else
	{
		clear_bit(iParam0.f_1, iParam1 - 32);
	}
}

void func_48(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

bool func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!does_pickup_exist(uParam0))
	{
		return false;
	}
	if (func_50(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			iVar1 = get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_pickup_coords(uParam0)) < 5f * 5f || is_entity_touching_entity(player_ped_id(), get_pickup_object(uParam0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_50(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!*uParam0.f_10)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!func_38(13) && !func_38(14))
			{
				if (!does_pickup_exist(*uParam0.f_1))
				{
					if (vdist2(get_entity_coords(player_ped_id(), 1), *uParam0.f_3) <= 50f * 50f)
					{
						request_model(iParam1);
						while (!has_model_loaded(iParam1))
						{
							request_model(iParam1);
							wait(0);
						}
						if (iParam3)
						{
							func_52(*uParam0.f_3);
						}
						clear_area(*uParam0.f_3, 2.5f, 0, 0, 0, false);
						if (iParam4)
						{
							set_bit(&iVar0, true);
							*uParam0.f_1 = create_pickup_rotate(joaat("pickup_custom_script"), *uParam0.f_3, *uParam0.f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							set_bit(&iVar0, 3);
							set_bit(&iVar0, 4);
							set_bit(&iVar0, 8);
							set_bit(&iVar0, true);
							*uParam0.f_1 = create_pickup(iParam2, *uParam0.f_3, iVar0, -1, 1, iParam1);
						}
						set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (does_pickup_exist(*uParam0.f_1))
			{
				*uParam0.f_10 = 1;
			}
		}
	}
}

void func_52(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = get_interior_at_coords(vParam0);
	if (is_valid_interior(iVar0))
	{
		_0x2CA429C029CCF247(iVar0);
		while (!is_interior_ready(iVar0))
		{
			wait(0);
		}
		wait(0);
		unpin_interior(iVar0);
	}
}

int func_53(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return false;
	}
	if (iParam1 <= 31)
	{
		return is_bit_set(*uParam0, iParam1);
	}
	return is_bit_set(*uParam0.f_1, iParam1 - 32);
}

void func_55()
{
	float fVar0;
	
	switch (iLocal_411)
	{
		case 0:
			if (func_62())
			{
				if (func_50(iLocal_409))
				{
					func_61();
					set_boat_anchor(iLocal_409, false);
					iLocal_411 = 1;
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(iLocal_409) && func_50(player_ped_id()))
			{
				if (is_entity_in_water(player_ped_id()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(player_ped_id(), iLocal_409, 0) > fVar0)
				{
					func_59();
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_386 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_386 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(iLocal_409))
				{
					if (!does_blip_exist(iLocal_410))
					{
						iLocal_410 = func_56(iLocal_409, 0, 0);
					}
					set_vehicle_engine_on(iLocal_409, false, 1, 0);
					if (is_this_model_a_boat(get_entity_model(iLocal_409)))
					{
						if (!has_entity_collided_with_anything(iLocal_409))
						{
							set_boat_anchor(iLocal_409, true);
						}
					}
					iLocal_411 = 0;
				}
			}
			break;
	}
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	return func_57(iParam0, !iParam1, iParam2);
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_58(network_is_game_in_progress(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_58(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_58(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_58(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(iLocal_409))
	{
		if (is_this_model_a_boat(get_entity_model(iLocal_409)))
		{
			set_boat_anchor(iLocal_409, false);
		}
		set_entity_records_collisions(iLocal_409, 0);
		if (is_entity_a_mission_entity(iLocal_409))
		{
			set_vehicle_as_no_longer_needed(&iLocal_409);
		}
	}
}

float func_60(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

void func_61()
{
	if (does_blip_exist(iLocal_410))
	{
		remove_blip(&iLocal_410);
	}
}

bool func_62()
{
	if (func_50(player_ped_id()))
	{
		if (func_50(iLocal_409))
		{
			if (is_ped_in_vehicle(player_ped_id(), iLocal_409, 0))
			{
				return true;
			}
		}
		else if (func_63())
		{
			iLocal_409 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (does_entity_exist(iLocal_409))
			{
				set_entity_as_mission_entity(iLocal_409, true, 1);
				set_entity_records_collisions(iLocal_409, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_63()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (does_entity_exist(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("dinghy") || get_entity_model(iVar0) == joaat("dinghy2"))
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

void func_64()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	
	vVar0 = {get_entity_coords(player_ped_id(), 1)};
	if (func_24(&Local_42, &Local_55, vVar0, &iLocal_388))
	{
		vVar3 = {func_23(iLocal_388)};
		fVar6 = get_distance_between_coords(vVar3, vVar0, 0);
		if (fVar6 > 200f)
		{
			func_66();
			if (!iLocal_406)
			{
				iLocal_406 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_388 != iLocal_391)
				{
					if (does_blip_exist(iLocal_390))
					{
						remove_blip(&iLocal_390);
					}
				}
				if (!does_blip_exist(iLocal_390))
				{
					iLocal_390 = add_blip_for_radius(vVar3, 200f);
					set_blip_alpha(iLocal_390, 128);
					set_blip_colour(iLocal_390, 2);
					_0x54318C915D27E4CE(iLocal_390, 0);
					set_blip_name_from_text_file(iLocal_390, "B_WRE");
					_0x75A16C3DA34F1245(iLocal_390, false);
					iLocal_391 = iLocal_388;
				}
			}
			else if (does_blip_exist(iLocal_390))
			{
				remove_blip(&iLocal_390);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (is_entity_in_water(player_ped_id()) && !is_ped_swimming_under_water(player_ped_id()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (does_blip_exist(iLocal_390))
			{
				remove_blip(&iLocal_390);
			}
			if (iLocal_388 != iLocal_391)
			{
				func_66();
				iLocal_391 = iLocal_388;
				iLocal_406 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_406)
				{
					fLocal_403 = 0f;
					fLocal_404 = fVar6;
					if (func_63())
					{
						fLocal_404 = func_65(fLocal_404, 20f, 200f);
					}
					else
					{
						fLocal_404 = func_65(fLocal_404, 10f, 200f);
					}
					fLocal_405 = fLocal_404 * 0.025f;
					iLocal_406 = 0;
					if (func_63())
					{
						play_sound_from_coord(iLocal_408, "SINGLE_BLIP_FROM_BOAT", vVar3, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						play_sound_from_coord(iLocal_408, "SCRIPT_TRIGGERED_FROM_PROP", vVar0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_403 += fLocal_405;
					fLocal_403 = func_65(fLocal_403, 0f, fLocal_404);
					if (!does_blip_exist(iLocal_392))
					{
						iLocal_392 = add_blip_for_radius(vVar3, fLocal_403);
						set_blip_alpha(iLocal_392, 255);
						set_blip_colour(iLocal_392, 4);
						set_blip_as_short_range(iLocal_392, true);
						_0x25615540D894B814(iLocal_392, 1);
						_0x75A16C3DA34F1245(iLocal_392, false);
					}
					else
					{
						set_blip_scale(iLocal_392, fLocal_403);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!does_blip_exist(iLocal_393[iVar7]))
							{
								iLocal_393[iVar7] = add_blip_for_radius(vVar3, fLocal_403 + fLocal_398[iVar7]);
								set_blip_alpha(iLocal_393[iVar7], 255);
								set_blip_colour(iLocal_393[iVar7], 4);
								set_blip_as_short_range(iLocal_393[iVar7], true);
								_0x25615540D894B814(iLocal_393[iVar7], 1);
								_0x75A16C3DA34F1245(iLocal_393[iVar7], false);
							}
							else
							{
								set_blip_scale(iLocal_393[iVar7], fLocal_403 + fLocal_398[iVar7]);
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (does_blip_exist(iLocal_393[iVar7]))
							{
								set_blip_scale(iLocal_393[iVar7], fLocal_403);
							}
							iVar7++;
						}
					}
					if (fLocal_403 >= fLocal_404)
					{
						iLocal_406 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)
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

void func_66()
{
	int iVar0;
	
	if (does_blip_exist(iLocal_392))
	{
		remove_blip(&iLocal_392);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_blip_exist(iLocal_393[iVar0]))
		{
			remove_blip(&(iLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_389 = 0;
	if (func_62())
	{
		iLocal_411 = 1;
	}
	else
	{
		iLocal_411 = 0;
	}
	func_71();
	func_70(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_398[0] = 0.25f;
	fLocal_398[1] = 0.5f;
	fLocal_398[2] = 0.75f;
	fLocal_398[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0.f_6 = iParam1;
	func_69(uParam0.f_1, iParam2, iParam3);
}

void func_69(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	*iParam0.f_1 = 0;
	*iParam0.f_2 = uParam1;
	*iParam0.f_3 = uParam2;
	if (iLocal_40)
	{
	}
	iVar0 = false;
	while (iVar0 < *iParam0.f_3)
	{
		if (func_29(*iParam0.f_2 + iVar0, -1, -1))
		{
			iVar1++;
			func_47(iParam0, iVar0, 1);
			if (iLocal_40)
			{
			}
		}
		iVar0++;
	}
	*iParam0.f_4 = iVar1;
	if (iLocal_40)
	{
	}
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	*uParam0.f_7 = iParam2;
	*uParam0.f_8 = sParam3;
	*uParam0.f_10 = 0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_55[iVar0 /*11*/].f_3 = {func_23(iVar0)};
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_6 = {-16.4f, 78.53f, -146.67f};
	Local_55[1 /*11*/].f_6 = {0f, 45f, 10f};
	Local_55[2 /*11*/].f_6 = {0.72f, 65.2f, -50.26f};
	Local_55[3 /*11*/].f_6 = {0f, 15f, -132.16f};
	Local_55[4 /*11*/].f_6 = {166.37f, -40f, 168.81f};
	Local_55[5 /*11*/].f_6 = {90f, 56.2f, 90f};
	Local_55[6 /*11*/].f_6 = {-20f, 0f, 89.95f};
	Local_55[7 /*11*/].f_6 = {4.08f, 54.9f, -65.35f};
	Local_55[8 /*11*/].f_6 = {174.15f, -58.2f, -144.66f};
	Local_55[9 /*11*/].f_6 = {-28.22f, 36.11f, -90.22f};
	Local_55[10 /*11*/].f_6 = {-5f, 44f, 65f};
	Local_55[11 /*11*/].f_6 = {0f, -108f, 45.36f};
	Local_55[12 /*11*/].f_6 = {-10.9f, 43.12f, 131.52f};
	Local_55[13 /*11*/].f_6 = {12.37f, 49.66f, 126.88f};
	Local_55[14 /*11*/].f_6 = {4.35f, 10.22f, 27.51f};
	Local_55[15 /*11*/].f_6 = {0f, 10f, 60.73f};
	Local_55[16 /*11*/].f_6 = {150.56f, -78.67f, -174.35f};
	Local_55[17 /*11*/].f_6 = {0f, 50f, 46.41f};
	Local_55[18 /*11*/].f_6 = {6.26f, 44.65f, 8.88f};
	Local_55[19 /*11*/].f_6 = {90f, 78.5f, 16.04f};
	Local_55[20 /*11*/].f_6 = {-1.36f, 6.53f, -70.94f};
	Local_55[21 /*11*/].f_6 = {-61.86f, 78.61f, 126.5f};
	Local_55[22 /*11*/].f_6 = {-10f, -80.71f, 69.7f};
	Local_55[23 /*11*/].f_6 = {-76.43f, -70.02f, 29.74f};
	Local_55[24 /*11*/].f_6 = {-28f, -70f, 107.53f};
	Local_55[25 /*11*/].f_6 = {4.19f, 6.46f, 110.43f};
	Local_55[26 /*11*/].f_6 = {-3.19f, 60.6f, 25f};
	Local_55[27 /*11*/].f_6 = {0f, -81.68f, -20.16f};
	Local_55[28 /*11*/].f_6 = {7.39f, 44.52f, 19.65f};
	Local_55[29 /*11*/].f_6 = {89.74f, 80.95f, 151.74f};
}

int func_72(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

bool func_73(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_74(iParam0))
	{
		return false;
	}
	return true;
}

int func_74(int iParam0)
{
	return func_75(iParam0, Global_35711);
}

bool func_75(int iParam0, int iParam1)
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

bool func_76(int iParam0)
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

void func_77(int iParam0)
{
	int iVar0;
	
	if (does_blip_exist(iLocal_390))
	{
		remove_blip(&iLocal_390);
	}
	func_66();
	if (!has_sound_finished(iLocal_408))
	{
		stop_sound(iLocal_408);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		func_48(&(Local_55[iVar0 /*11*/].f_2));
		func_37(&(Local_55[iVar0 /*11*/].f_1));
		Local_55[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (iParam0)
	{
		if (func_79(&(Local_42.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		set_model_as_no_longer_needed(Local_42.f_7);
		terminate_this_thread();
	}
	else
	{
		iLocal_386 = 0;
	}
}

bool func_78(int iParam0)
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

int func_79(var uParam0)
{
	if (*uParam0.f_3 <= 0)
	{
	}
	return *uParam0.f_4 >= *uParam0.f_3;
}

