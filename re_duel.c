#region Local Var
	int iLocal_0 = 0;
	auto uLocal_1 = 0;
	auto uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	auto uLocal_13 = 0;
	auto uLocal_14 = 0;
	float fLocal_15 = 0;
	auto uLocal_16 = 0;
	auto uLocal_17 = 0;
	int iLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
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
	Vector3 vLocal_43 = 0;
	auto uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<5>[] Local_49 = new struct<5>[8];
	struct<4>[] Local_90 = new struct<4>[8];
	Vector3 vLocal_123 = 0;
	Vector3 vLocal_126 = 0;
	Vector3 vLocal_129 = 0;
	Vector3 vLocal_132 = 0;
	Vector3 vLocal_135 = 0;
	Vector3 vLocal_138 = 0;
	Vector3 vLocal_141 = 0;
	Vector3 fLocal_144 = 0;
	Vector3 vLocal_145 = 0;
	Vector3 fLocal_148 = 0;
	int iLocal_149 = 0;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	struct<2> Local_174 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	auto uLocal_186 = 0;
	auto uLocal_187 = 0;
	auto uLocal_188 = 0;
	auto uLocal_189 = 0;
	auto uLocal_190 = 0;
	auto uLocal_191 = 5;
	auto uLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 0;
	auto uLocal_195 = 0;
	auto uLocal_196 = 0;
#endregion

void main()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_123 = {0f, 0f, 0f};
	vLocal_129 = {1064.871f, 2670.857f, 38.5511f};
	vLocal_132 = {926.3422f, 2708.926f, 39.5394f};
	vLocal_135 = {1140.03f, 2698.027f, 37.1568f};
	vLocal_138 = {vLocal_123};
	fLocal_164 = 0f;
	iLocal_165 = joaat("dukes2");
	iLocal_166 = joaat("phantom");
	iLocal_167 = joaat("trailers2");
	iLocal_168 = joaat("rancherxl");
	iLocal_169 = joaat("a_m_m_hillbilly_01");
	iLocal_170 = joaat("a_m_m_hillbilly_02");
	iLocal_173 = 3;
	vLocal_126 = {Local_174.f_1[0 /*3*/]};
	if (has_force_cleanup_occurred(11))
	{
		if (func_221(Local_90[0 /*4*/]))
		{
			set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
		}
		func_194(1, 0);
	}
	if (func_152(vLocal_126, 31, 0, 0, 0))
	{
		func_149(31);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		if ((is_world_point_within_brain_activation_range() || func_148(1)) || iLocal_155 > 2)
		{
			if (func_148(13))
			{
				func_117();
			}
			switch (iLocal_47)
			{
				case 0:
					func_55();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_221(Local_90[0 /*4*/]))
			{
				set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
			}
			func_194(1, 0);
		}
		wait(false);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_155)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_52(64, 1);
	func_52(65, 1);
	func_31(Local_90[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_194(1, 0);
}

void func_3()
{
	func_4();
}

bool func_4()
{
	if (func_5(0))
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

int func_5(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_7(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_101140 = iParam0;
}

void func_8(int iParam0, auto uParam1, auto uParam2)
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
		func_12(891 + iParam0, 1, -1, 1);
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
		Global_101154.f_8884[iParam0 /*12*/].f_10 = uParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = uParam2;
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
	Vector3 fVar8;
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
		func_11(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_10() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_4();
				}
			}
		}
	}
}

auto func_10()
{
	return Global_25120;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

auto func_13()
{
	return Global_1312747;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
			break;
	}
	return true;
}

void func_16(int iParam0)
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_19();
	}
}

void func_19()
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

int func_20()
{
	func_21();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_21()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_25(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_24(player_ped_id());
			if (func_23(iVar0) && (!func_22(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_23(Global_101154.f_1826.f_539.f_3549))
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

int func_22(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1)
{
	set_bit(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

auto func_29()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_30(cVar0);
	return uVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_36(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
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
			if (get_entity_model(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
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
		if (get_entity_model(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
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
	func_32(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_32(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_35(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
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
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
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
						clear_bit(uParam1.f_77, 23);
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_34(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_33(int iParam0)
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

bool func_34(int iParam0, auto uParam1, auto uParam2)
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

void func_35(auto uParam0)
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

bool func_36(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_50(iParam0, 0, 0)) || func_50(iParam0, 1, 0)) || func_50(iParam0, 2, 0)) || func_49(iParam0) != 145) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || !func_37(get_entity_model(iParam0)))
	{
		if (func_47(iParam0))
		{
		}
		if (func_47(iParam0))
		{
		}
		if (func_50(iParam0, 0, 0))
		{
		}
		if (func_50(iParam0, 1, 0))
		{
		}
		if (func_50(iParam0, 2, 0))
		{
		}
		if (func_49(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_38(iParam0, 0))
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

bool func_38(int iParam0, int iParam1)
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
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_44())
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
		if ((((!func_43() && !func_42()) && !func_41()) && !func_40()) && !func_44())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_41())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_39(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_39(int iParam0)
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

bool func_40()
{
	return false;
}

bool func_41()
{
	return true;
}

bool func_42()
{
	return true;
}

bool func_43()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_44()
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

bool func_45(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_38(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_88972[iVar0]))
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

bool func_47(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_48(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
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

int func_49(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
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

bool func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_51(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
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

bool func_51(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

void func_52(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_54(iParam0, 0))
		{
			func_53(iParam0, 1, 0);
			func_53(iParam0, 2, 0);
			func_53(iParam0, 3, 0);
			func_53(iParam0, 4, 0);
			func_53(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_53(iParam0, 0, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		set_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		clear_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_54(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_55()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	int iVar15;
	Vector3 fVar16;
	auto uVar17;
	auto uVar18;
	int iVar19;
	
	switch (iLocal_48)
	{
		case 0:
			func_106();
			func_105(13);
			request_model(iLocal_165);
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_155)
			{
				case 0:
					if (has_model_loaded(iLocal_165))
					{
						func_101(0, vLocal_123, -1f, 1);
						set_model_as_no_longer_needed(iLocal_165);
						request_model(iLocal_166);
						request_model(iLocal_169);
						request_model(iLocal_167);
						func_91(1);
						iLocal_155++;
					}
					break;
				
				case 1:
					if ((has_model_loaded(iLocal_166) && has_model_loaded(iLocal_169)) && has_model_loaded(iLocal_167))
					{
						func_105(9);
						iLocal_155++;
					}
					break;
				
				case 2:
					if ((func_221(Local_90[3 /*4*/]) && func_221(Local_49[0 /*5*/])) && func_90())
					{
						vVar0 = {get_offset_from_entity_given_world_coords(Local_90[3 /*4*/], get_entity_coords(player_ped_id(), 1))};
						if (vVar0.x <= 0f && is_entity_in_angled_area(player_ped_id(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, 0, true, 0))
						{
							if ((((func_89(get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_89(get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_84(3, 0, 4, 1);
								iLocal_155 = 4;
							}
						}
					}
					if (((!func_148(8) && func_221(Local_90[4 /*4*/])) && func_221(Local_49[1 /*5*/])) && func_90())
					{
						vVar0 = {get_offset_from_entity_given_world_coords(Local_90[4 /*4*/], get_entity_coords(player_ped_id(), 1))};
						if (vVar0.x >= 0f && is_entity_in_angled_area(player_ped_id(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, 0, true, 0))
						{
							if ((((func_89(get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_89(get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 15f, 0f), 2f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_89(get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_84(4, 1, 3, 0);
								iLocal_155 = 4;
							}
						}
					}
					if (!func_148(8) && func_82())
					{
						func_105(6);
						if (func_221(Local_49[0 /*5*/]))
						{
							set_blocking_of_non_temporary_events(Local_49[0 /*5*/], false);
							task_combat_ped(Local_49[0 /*5*/], player_ped_id(), 0, 16);
							Local_49[0 /*5*/].f_3 = 3;
						}
						if (func_221(Local_49[1 /*5*/]))
						{
							set_blocking_of_non_temporary_events(Local_49[1 /*5*/], false);
							task_combat_ped(Local_49[1 /*5*/], player_ped_id(), 0, 16);
							Local_49[1 /*5*/].f_3 = 3;
						}
						if (func_221(Local_90[3 /*4*/]))
						{
							set_vehicle_doors_locked(Local_90[3 /*4*/], 1);
						}
						if (func_221(Local_90[4 /*4*/]))
						{
							set_vehicle_doors_locked(Local_90[4 /*4*/], 1);
						}
						iLocal_155++;
					}
					break;
				
				case 3:
					if ((!func_221(Local_49[0 /*5*/]) || does_blip_exist(Local_49[0 /*5*/].f_1)) && (!func_221(Local_49[1 /*5*/]) || does_blip_exist(Local_49[1 /*5*/].f_1)))
					{
						iLocal_155++;
					}
					break;
				
				case 4:
					set_relationship_between_groups(5, 1862763509, iLocal_171);
					set_relationship_between_groups(5, iLocal_171, 1862763509);
					if (func_221(Local_90[3 /*4*/]))
					{
						set_vehicle_doors_locked(Local_90[3 /*4*/], 1);
					}
					if (func_221(Local_90[4 /*4*/]))
					{
						set_vehicle_doors_locked(Local_90[4 /*4*/], 1);
					}
					request_model(iLocal_168);
					settimera(false);
					iLocal_155++;
					break;
				
				case 5:
					if (has_model_loaded(iLocal_168))
					{
						request_model(iLocal_169);
						iLocal_155++;
					}
					break;
				
				case 6:
					if (has_model_loaded(iLocal_169))
					{
						request_model(iLocal_170);
						iLocal_155++;
					}
					break;
				
				case 7:
					if ((has_model_loaded(iLocal_168) && has_model_loaded(iLocal_169)) && has_model_loaded(iLocal_170))
					{
						func_101(5, vLocal_123, -1082130432, 0);
						func_101(6, vLocal_123, -1082130432, 0);
						func_101(7, vLocal_123, -1082130432, 0);
						set_model_as_no_longer_needed(iLocal_168);
						func_77(2, 0, vLocal_123, -1082130432);
						func_77(3, 0, vLocal_123, -1082130432);
						func_77(4, 0, vLocal_123, -1082130432);
						func_77(5, 0, vLocal_123, -1082130432);
						func_77(6, 0, vLocal_123, -1082130432);
						func_77(7, 0, vLocal_123, -1082130432);
						if (func_148(10) && func_148(11))
						{
							set_model_as_no_longer_needed(iLocal_169);
						}
						set_model_as_no_longer_needed(iLocal_170);
						iLocal_155++;
					}
					break;
				
				case 8:
					if (!func_221(Local_49[0 /*5*/]) && !func_221(Local_49[1 /*5*/]))
					{
						if (timera() < 16000)
						{
							settimera(16000);
						}
					}
					if (timera() > 20000 && func_76(player_ped_id(), vLocal_129, 1) >= 150f)
					{
						iLocal_155++;
					}
					break;
				
				case 9:
					if (func_90() || (func_221(Local_90[0 /*4*/]) && func_75(player_ped_id(), Local_90[0 /*4*/], 1) <= 35f))
					{
						vVar3 = {get_entity_coords(player_ped_id(), 1)};
						iVar15 = get_random_int_in_range(6, 10);
						if (get_nth_closest_vehicle_node(vVar3, iVar15, &vVar6, 1, 5f, 0f))
						{
							get_vehicle_node_properties(vVar6, &uVar17, &uVar18);
							if (((uVar18 & 4 == 0 && (!func_74() || uVar18 & 8 == 0)) && (func_73() || uVar18 & 1 == 0)) && !func_72(vVar6, 1084227584))
							{
								fVar16 = func_71(vVar6, get_entity_coords(player_ped_id(), 1));
								vVar9 = {_get_object_offset_from_coords(vVar6, fVar16, 6f, -6f, 0f)};
								vVar12 = {_get_object_offset_from_coords(vVar6, fVar16, -6f, -6f, 0f)};
								if ((((!is_sphere_visible(vVar6, 7f) && !is_sphere_visible(vVar9, 7f)) && !is_sphere_visible(vVar12, 7f)) && !func_72(vVar9, 1084227584)) && !func_72(vVar12, 1084227584))
								{
									func_70(Local_90[5 /*4*/], vVar6);
									func_70(Local_90[6 /*4*/], vVar9);
									func_70(Local_90[7 /*4*/], vVar12);
									iLocal_149 = get_game_timer();
									iVar19 = 2;
									while (iVar19 <= 7)
									{
										if (func_221(Local_49[iVar19 /*5*/]))
										{
											Local_49[iVar19 /*5*/].f_1 = func_67(Local_49[iVar19 /*5*/], 1, 145);
											if (is_ped_in_any_vehicle(Local_49[iVar19 /*5*/], 0))
											{
												if (func_66(Local_49[iVar19 /*5*/], 0) == -1)
												{
													set_blip_scale(Local_49[iVar19 /*5*/].f_1, 1f);
												}
												else
												{
													set_blip_alpha(Local_49[iVar19 /*5*/].f_1, 0);
													_0x54318C915D27E4CE(Local_49[iVar19 /*5*/].f_1, 1);
												}
											}
										}
										iVar19++;
									}
									func_105(2);
									func_105(7);
									iLocal_159 = get_game_timer() + 60000;
									func_65(6);
									iLocal_155++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((func_221(Local_49[2 /*5*/]) || func_221(Local_49[3 /*5*/])) || func_221(Local_49[4 /*5*/])) || func_221(Local_49[5 /*5*/])) || func_221(Local_49[6 /*5*/])) || func_221(Local_49[7 /*5*/]))
					{
						if (func_148(7))
						{
							if (func_221(Local_90[5 /*4*/]))
							{
								func_58(5, get_vehicle_ped_is_using(player_ped_id()), &uLocal_150);
							}
							if (func_221(Local_90[6 /*4*/]))
							{
								func_58(6, get_vehicle_ped_is_using(player_ped_id()), &uLocal_151);
							}
							if (func_221(Local_90[7 /*4*/]))
							{
								func_58(7, get_vehicle_ped_is_using(player_ped_id()), &uLocal_152);
							}
						}
					}
					else if (!func_221(Local_49[0 /*5*/]) && !func_221(Local_49[1 /*5*/]))
					{
						if (func_221(Local_90[0 /*4*/]))
						{
							iLocal_48 = 2;
						}
						else
						{
							func_57();
						}
					}
					break;
			}
			break;
		
		case 2:
			func_56(1);
			break;
	}
}

void func_56(int iParam0)
{
	iLocal_155 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_57()
{
	if (func_221(Local_90[0 /*4*/]))
	{
		set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
	}
	func_194(1, 0);
}

void func_58(int iParam0, int iParam1, auto uParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
	{
		if ((((((does_entity_exist(iParam1) && Local_90[iParam0 /*4*/] != iParam1) && !is_this_model_a_boat(get_entity_model(iParam1))) && !is_this_model_a_plane(get_entity_model(iParam1))) && !is_this_model_a_heli(get_entity_model(iParam1))) && !is_this_model_a_train(get_entity_model(iParam1))) && func_64(Local_90[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_76(iParam1, vLocal_141, 1) >= fVar0 && is_vehicle_on_all_wheels(iParam1))
			{
				vLocal_145 = {vLocal_141};
				fLocal_148 = fLocal_144;
				vLocal_141 = {get_entity_coords(iParam1, 1)};
				fLocal_144 = get_entity_heading(iParam1);
			}
			if (!is_entity_occluded(Local_90[iParam0 /*4*/]))
			{
				*uParam2 = get_game_timer();
			}
			else if ((((((((((get_game_timer() - *uParam2 > iVar2 && get_game_timer() - iLocal_149 > 1500) && func_75(Local_90[iParam0 /*4*/], iParam1, 1) > func_76(iParam1, vLocal_145, 1)) && func_63(iParam0)) && func_76(iParam1, vLocal_145, 1) >= fVar0) && func_75(Local_90[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_62(Local_90[iParam0 /*4*/], vLocal_145, 1153138688)) && func_61(Local_90[iParam0 /*4*/], iParam1, vLocal_145)) && !func_60(vLocal_145)) && !is_sphere_visible(vLocal_145, 4f)) && !func_72(vLocal_145, 1084227584))
			{
				clear_area_of_peds(vLocal_145, 1.5f, 0);
				clear_area_of_vehicles(vLocal_145, 5f, 0, 0, 0, 0, false);
				if (iParam0 == 3 || iParam0 == 4)
				{
					detach_vehicle_from_trailer(Local_90[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_59(0, 3);
					}
					else
					{
						func_59(1, 3);
					}
				}
				set_entity_coords(Local_90[iParam0 /*4*/], vLocal_145, 1, false, 0, 1);
				set_vehicle_on_ground_properly(Local_90[iParam0 /*4*/]);
				set_entity_heading(Local_90[iParam0 /*4*/], fLocal_148);
				set_vehicle_engine_on(Local_90[iParam0 /*4*/], true, 1, 0);
				set_vehicle_forward_speed(Local_90[iParam0 /*4*/], get_entity_speed(iParam1) * 1.2f);
				*uParam2 = get_game_timer();
				Local_90[iParam0 /*4*/].f_2 = get_game_timer();
				iLocal_149 = get_game_timer();
			}
		}
		else
		{
			*uParam2 = get_game_timer();
		}
	}
}

void func_59(int iParam0, int iParam1)
{
	set_bit(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

bool func_60(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_offset_from_entity_given_world_coords(iParam1, get_entity_coords(iParam0, 1))};
	vVar3 = {get_offset_from_entity_given_world_coords(iParam1, vParam2)};
	if ((vVar0.y > 0f && vVar3.y > 0f) || (vVar0.y < 0f && vVar3.y < 0f))
	{
		return true;
	}
	if (iParam0 == Local_90[3 /*4*/] && !does_blip_exist(Local_49[0 /*5*/].f_1))
	{
		return true;
	}
	if (iParam0 == Local_90[4 /*4*/] && !does_blip_exist(Local_49[1 /*5*/].f_1))
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, Vector3 vParam1, float fParam2)
{
	if (func_76(iParam0, vParam1, 1) <= fParam4)
	{
		return true;
	}
	if (iParam0 == Local_90[3 /*4*/] && !does_blip_exist(Local_49[0 /*5*/].f_1))
	{
		return true;
	}
	if (iParam0 == Local_90[4 /*4*/] && !does_blip_exist(Local_49[1 /*5*/].f_1))
	{
		return true;
	}
	return false;
}

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_148(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_148(7))
	{
		iVar1 = 7;
	}
	else if (func_148(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_221(Local_90[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || get_game_timer() - Local_90[iVar2 /*4*/].f_2 > iVar3)
			{
				iVar3 = get_game_timer() - Local_90[iVar2 /*4*/].f_2;
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_75(Local_90[iVar2 /*4*/], player_ped_id(), 1) > fVar5)
			{
				fVar5 = func_75(Local_90[iVar2 /*4*/], player_ped_id(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0)
{
	int iVar0;
	
	if (func_221(iParam0) && !is_vehicle_seat_free(iParam0, -1))
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (func_221(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_65(int iParam0)
{
	clear_bit(&iLocal_156, iParam0);
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, iParam1);
			if (does_entity_exist(iVar0))
			{
				if (!is_entity_dead(iVar0, 0))
				{
					iVar1 = _get_vehicle_model_max_number_of_passengers(get_entity_model(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = iVar2 - 1;
						if (!is_vehicle_seat_free(iVar0, iVar3))
						{
							if (get_ped_in_vehicle_seat(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_69(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_70(int iParam0, Vector3 vParam1)
{
	if (func_221(iParam0))
	{
		freeze_entity_position(iParam0, false);
		clear_area_of_peds(vParam1, 1.5f, 0);
		clear_area_of_vehicles(vParam1, 3f, 0, 0, 0, 0, false);
		set_entity_coords(iParam0, vParam1, 1, false, 0, 1);
		set_vehicle_on_ground_properly(iParam0);
		set_entity_heading(iParam0, func_71(get_entity_coords(iParam0, 1), get_entity_coords(player_ped_id(), 1)));
		if (func_221(get_ped_in_vehicle_seat(iParam0, -1)))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				task_vehicle_chase(get_ped_in_vehicle_seat(iParam0, -1), player_ped_id());
			}
			else
			{
				task_vehicle_mission_ped_target(get_ped_in_vehicle_seat(iParam0, -1), iParam0, player_ped_id(), 2, 100f, 786469, -1f, -1f, 1);
			}
		}
		set_vehicle_forward_speed(iParam0, get_entity_speed(player_ped_id()) * 1.2f);
	}
}

float func_71(struct<2> Param0, Vector3 fParam1, struct<2> Param2, Vector3 fParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

int func_72(Vector3 vParam0, Vector3 fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (does_entity_exist(Local_90[iVar1 /*4*/]) && is_entity_at_coord(Local_90[iVar1 /*4*/], vParam0, fParam3, fParam3, fParam3, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_73()
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	
	if (get_closest_vehicle_node(get_entity_coords(player_ped_id(), 1), &vVar0, 1, 3f, 0f))
	{
		if (get_vehicle_node_properties(vVar0, &uVar4, &uVar3))
		{
			return uVar3 & 1 == 1;
		}
	}
	return false;
}

int func_74()
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	
	if (get_closest_vehicle_node(get_entity_coords(player_ped_id(), 1), &vVar0, 1, 3f, 0f))
	{
		if (get_vehicle_node_properties(vVar0, &uVar4, &uVar3))
		{
			return uVar3 & 8 == 0;
		}
	}
	return false;
}

auto func_75(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
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

auto func_76(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

bool func_77(int iParam0, int iParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	Vector3 vVar9;
	Vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	char* sVar71;
	
	if (!does_entity_exist(Local_49[iParam0 /*5*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = false;
		iVar7 = -1;
		vVar9 = {vLocal_123};
		vVar12 = {vLocal_123};
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = false;
		iVar18 = false;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_171;
		iVar28 = true;
		iVar29 = true;
		iVar30 = false;
		iVar31 = true;
		iVar32 = true;
		iVar33 = true;
		iVar34 = false;
		iVar35 = true;
		iVar36 = false;
		iVar37 = true;
		iVar38 = true;
		iVar39 = false;
		iVar40 = false;
		iVar41 = true;
		iVar42 = false;
		iVar43 = true;
		iVar44 = true;
		iVar45 = false;
		iVar46 = 1;
		iVar47 = true;
		iVar48 = true;
		iVar49 = false;
		iVar50 = false;
		iVar51 = false;
		iVar52 = false;
		iVar53 = false;
		iVar54 = false;
		iVar55 = true;
		iVar56 = 0;
		iVar57 = false;
		iVar58 = 0;
		iVar59 = 1;
		iVar60 = true;
		iVar61 = 0;
		iVar62 = false;
		iVar63 = 0;
		iVar64 = false;
		iVar65 = false;
		iVar66 = false;
		iVar67 = false;
		iVar68 = true;
		iVar69 = true;
		iVar70 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_169;
				iVar6 = Local_90[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				iVar34 = true;
				iVar70 = true;
				break;
			
			case 1:
				iVar4 = iLocal_169;
				iVar6 = Local_90[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				iVar34 = true;
				iVar70 = true;
				break;
			
			case 2:
				iVar4 = iLocal_170;
				iVar6 = Local_90[5 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			case 3:
				iVar4 = iLocal_169;
				iVar6 = Local_90[5 /*4*/];
				iVar7 = false;
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			case 4:
				iVar4 = iLocal_169;
				iVar6 = Local_90[6 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			case 5:
				iVar4 = iLocal_170;
				iVar6 = Local_90[6 /*4*/];
				iVar7 = false;
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			case 6:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			case 7:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar7 = false;
				iVar5 = joaat("weapon_pistol");
				iVar36 = true;
				iVar33 = false;
				break;
			
			default:
				break;
		}
		if (!has_model_loaded(iVar4))
		{
			return false;
		}
		if (!func_81(vParam2, vLocal_123, 0))
		{
			if (!does_entity_exist(iVar8))
			{
				vVar0 = {vParam2};
			}
			else
			{
				vVar9 = {vParam2};
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_221(iVar6))
		{
			Local_49[iParam0 /*5*/] = create_ped_inside_vehicle(iVar6, 26, iVar4, iVar7, 1, true);
		}
		else
		{
			Local_49[iParam0 /*5*/] = create_ped(26, iVar4, vVar0, fVar3, 1, true);
			set_entity_collision(Local_49[iParam0 /*5*/], iVar41, 0);
			_0x9EBC85ED0FFFE51C(Local_49[iParam0 /*5*/], !iVar65, 0);
		}
		if (iVar40)
		{
			set_entity_coords_no_offset(Local_49[iParam0 /*5*/], vVar0, 0, 0, 1);
		}
		if (iParam1)
		{
			if (iVar27 == iLocal_171)
			{
				Local_49[iParam0 /*5*/].f_1 = func_67(Local_49[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*5*/].f_1 = func_67(Local_49[iParam0 /*5*/], 0, 145);
			}
		}
		set_ped_drops_weapons_when_dead(Local_49[iParam0 /*5*/], iVar59);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 213, iVar28);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 212, iVar29);
		set_blocking_of_non_temporary_events(Local_49[iParam0 /*5*/], iVar30);
		set_ped_keep_task(Local_49[iParam0 /*5*/], iVar31);
		set_ped_dies_when_injured(Local_49[iParam0 /*5*/], iVar32);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 188, iVar55);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 42, !iVar33);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 9, iVar35);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 3, iVar37);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 342, iVar57);
		set_entity_load_collision_flag(Local_49[iParam0 /*5*/], iVar36);
		set_ped_armour(Local_49[iParam0 /*5*/], iVar18);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 8, iVar39);
		set_entity_visible(Local_49[iParam0 /*5*/], iVar38, 0);
		set_entity_invincible(Local_49[iParam0 /*5*/], iVar42);
		give_weapon_to_ped(Local_49[iParam0 /*5*/], iVar5, -1, iVar34, iVar34);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 2, iVar43);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 1, iVar44);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 52, iVar45);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 13, iVar68);
		set_ped_suffers_critical_hits(Local_49[iParam0 /*5*/], iVar46);
		set_ped_can_be_targetted(Local_49[iParam0 /*5*/], iVar47);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 118, iVar48);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 115, iVar49);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 12, iVar50);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 36, iVar51);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 35, iVar52);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 29, iVar53);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 185, iVar54);
		set_ped_to_load_cover(Local_49[iParam0 /*5*/], iVar56);
		set_ped_combat_attributes(Local_49[iParam0 /*5*/], 17, iVar62);
		disable_ped_pain_audio(Local_49[iParam0 /*5*/], iVar63);
		stop_ped_speaking(Local_49[iParam0 /*5*/], iVar58);
		func_80(Local_49[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		freeze_entity_position(Local_49[iParam0 /*5*/], iVar66);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 203, iVar67);
		_0xA9B61A329BFDCBEA(Local_49[iParam0 /*5*/], !iVar67);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 366, iVar69);
		set_ped_config_flag(Local_49[iParam0 /*5*/], 134, iVar70);
		if (!iVar60)
		{
			func_59(iParam0, 2);
		}
		if (!is_string_null_or_empty(sVar71))
		{
			task_start_scenario_in_place(Local_49[iParam0 /*5*/], sVar71, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > get_entity_max_health(Local_49[iParam0 /*5*/]) || iVar61)
			{
				set_entity_max_health(Local_49[iParam0 /*5*/], iVar17);
			}
			set_entity_health(Local_49[iParam0 /*5*/], iVar17);
		}
		if (iVar19 > 0)
		{
			set_ped_accuracy(Local_49[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			set_ped_chance_of_firing_blanks(Local_49[iParam0 /*5*/], fVar20, fVar21);
		}
		set_ped_relationship_group_hash(Local_49[iParam0 /*5*/], iVar27);
		if (does_entity_exist(iVar8))
		{
			attach_entity_to_entity(Local_49[iParam0 /*5*/], iVar8, -1, vVar9, vVar12, 1, 1, 1, 0, 2, 1);
			set_ped_can_ragdoll(Local_49[iParam0 /*5*/], 0);
			func_59(iParam0, 1);
		}
		func_79(iParam0);
		func_78(iParam0);
		if (iVar15 != 0)
		{
			give_weapon_component_to_ped(Local_49[iParam0 /*5*/], iVar5, iVar15);
			set_current_ped_weapon(Local_49[iParam0 /*5*/], iVar5, true);
		}
		set_ped_combat_ability(Local_49[iParam0 /*5*/], iVar16);
		if (iVar64)
		{
			set_ped_stealth_movement(Local_49[iParam0 /*5*/], 1, "DEFAULT_ACTION");
		}
		return true;
	}
	return false;
}

void func_78(int iParam0)
{
	if (func_221(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_79(int iParam0)
{
	if (func_221(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, false, 0);
				break;
			
			case 1:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, true, true, 0);
				break;
			
			case 2:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, false, 0);
				break;
			
			case 3:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, true, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, 2, 0);
				break;
			
			case 4:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, false, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, 2, 0);
				break;
			
			case 5:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, true, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, true, 0);
				break;
			
			case 6:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 2, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 2, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, true, 0);
				break;
			
			case 7:
				set_ped_component_variation(Local_49[iParam0 /*5*/], false, false, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 2, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 3, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*5*/], 4, false, false, 0);
				break;
			}
	}
}

void func_80(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

int func_81(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_221(Local_49[0 /*5*/]) && func_75(player_ped_id(), Local_49[0 /*5*/], 1) >= 200f) && (func_221(Local_49[1 /*5*/]) && func_75(player_ped_id(), Local_49[1 /*5*/], 1) >= 200f))
	{
		return true;
	}
	if ((func_148(10) && !func_221(Local_49[0 /*5*/])) || (func_148(11) && !func_221(Local_49[1 /*5*/])))
	{
		return true;
	}
	if ((func_221(Local_49[0 /*5*/]) && (is_ped_in_combat(Local_49[0 /*5*/], player_ped_id()) || !is_ped_in_any_vehicle(Local_49[0 /*5*/], 0))) || (func_221(Local_49[1 /*5*/]) && (is_ped_in_combat(Local_49[1 /*5*/], player_ped_id()) || !is_ped_in_any_vehicle(Local_49[1 /*5*/], 0))))
	{
		return true;
	}
	if ((func_221(Local_90[1 /*4*/]) && has_entity_been_damaged_by_entity(Local_90[1 /*4*/], player_ped_id(), 1)) || (func_221(Local_90[2 /*4*/]) && has_entity_been_damaged_by_entity(Local_90[2 /*4*/], player_ped_id(), 1)))
	{
		return true;
	}
	if (func_83(Local_90[3 /*4*/]) || func_83(Local_90[4 /*4*/]))
	{
		return true;
	}
	iVar0 = get_players_last_vehicle();
	if (func_221(iVar0))
	{
		fLocal_164 = get_entity_speed(iVar0);
	}
	else
	{
		fLocal_164 = 0f;
	}
	if (is_ped_trying_to_enter_a_locked_vehicle(player_ped_id()))
	{
		iVar2 = get_vehicle_ped_is_trying_to_enter(player_ped_id());
		iVar1 = iVar2;
		if ((iVar1 == Local_90[3 /*4*/] && func_221(Local_49[0 /*5*/])) || (iVar1 == Local_90[4 /*4*/] && func_221(Local_49[1 /*5*/])))
		{
			return true;
		}
	}
	return false;
}

bool func_83(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = get_players_last_vehicle();
	if (((func_221(iParam0) && func_221(iVar0)) && fLocal_164 != 0f) && fLocal_164 >= 9f)
	{
		fVar1 = get_entity_speed(iVar0);
		if (is_entity_touching_entity(iParam0, iVar0) && fVar1 <= fLocal_164 * 0.5f)
		{
			return true;
		}
	}
	return false;
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_105(8);
	set_vehicle_forward_speed(Local_90[iParam0 /*4*/], 5f);
	Local_49[iParam1 /*5*/].f_1 = func_67(Local_49[iParam1 /*5*/], 1, 145);
	set_blocking_of_non_temporary_events(Local_49[iParam1 /*5*/], true);
	func_88();
	task_vehicle_drive_to_coord(false, Local_90[iParam0 /*4*/], get_offset_from_entity_in_world_coords(Local_90[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, false, 262144, 4f, -1f);
	task_set_blocking_of_non_temporary_events(false, 0);
	task_combat_ped(false, player_ped_id(), 0, 16);
	func_87(Local_49[iParam1 /*5*/]);
	func_85(Local_49[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_49[iParam1 /*5*/].f_3 = 3;
	if (func_221(Local_90[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			vLocal_138 = {1031.986f, 2693.441f, 38.6861f};
		}
		else
		{
			vLocal_138 = {1027.001f, 2686.89f, 37.8987f};
		}
		iLocal_161 = get_game_timer() + 1000;
		if (func_221(Local_49[iParam3 /*5*/]))
		{
			set_blocking_of_non_temporary_events(Local_49[iParam3 /*5*/], true);
			task_vehicle_mission(Local_49[iParam3 /*5*/], Local_90[iParam2 /*4*/], Local_90[0 /*4*/], 2, 30f, 262144, -1f, -1f, 1);
		}
		Local_49[iParam3 /*5*/].f_3++;
	}
	set_relationship_between_groups(5, 1862763509, iLocal_171);
	set_relationship_between_groups(5, iLocal_171, 1862763509);
}

void func_85(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_86(iParam2), 1);
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_87(int iParam0)
{
	if (func_148(0))
	{
		close_sequence_task(iLocal_172);
		func_65(0);
	}
	task_perform_sequence(iParam0, iLocal_172);
	clear_sequence_task(&iLocal_172);
}

void func_88()
{
	if (!func_148(0))
	{
		clear_sequence_task(&iLocal_172);
		open_sequence_task(&iLocal_172);
		func_105(0);
	}
}

bool func_89(Vector3 vParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	
	fVar0 = get_entity_speed(player_ped_id());
	fVar1 = func_76(player_ped_id(), vParam0, 1);
	vVar2 = {get_entity_coords(player_ped_id(), 1)};
	vVar5 = {vVar2 + get_entity_velocity(player_ped_id())};
	if (fVar1 / fVar0 <= fParam3 && get_distance_between_coords(vVar5, vParam0, 1) < get_distance_between_coords(vVar2, vParam0, 1))
	{
		return true;
	}
	return false;
}

int func_90()
{
	return (func_221(Local_90[0 /*4*/]) && is_ped_in_vehicle(player_ped_id(), Local_90[0 /*4*/], 0));
}

bool func_91(int iParam0)
{
	if (func_95())
	{
		Global_101144 = 1;
		Global_101141 = get_game_timer();
		if (func_15(Global_101143))
		{
			func_92(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_15(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_93(func_94(iParam0), -1);
					Global_101154.f_29520.f_2++;
					set_bit(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(Global_101150, true))
			{
				if (!is_help_message_on_screen())
				{
					func_93(func_94(iParam0), -1);
					Global_101154.f_29520.f_3++;
					set_bit(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(Global_101150, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_93(func_94(iParam0), -1);
					Global_101154.f_29520.f_4++;
					set_bit(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_93(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_94(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_95()
{
	switch (func_96(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return true;
			break;
		
		case 0:
			return true;
			break;
	}
	return false;
}

int func_96(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_100(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_98(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(auto uParam0, int iParam1)
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

int func_98(int iParam0)
{
	return func_99(iParam0, Global_35711);
}

bool func_99(int iParam0, int iParam1)
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

bool func_100(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_98(iParam0))
	{
		return false;
	}
	return true;
}

bool func_101(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
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
	Vector3 fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	Vector3 vVar27;
	Vector3 vVar30;
	char* sVar33;
	
	if (!does_entity_exist(Local_90[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = true;
		iVar7 = true;
		iVar8 = false;
		iVar9 = false;
		iVar10 = false;
		iVar11 = false;
		iVar12 = true;
		iVar13 = false;
		iVar14 = false;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = true;
		iVar19 = false;
		iVar20 = true;
		iVar21 = 0;
		iVar22 = false;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = {vLocal_129};
				fVar3 = 89.7263f;
				iVar4 = iLocal_165;
				iVar12 = false;
				iVar17 = 1;
				iVar18 = false;
				iVar21 = 1;
				iVar8 = true;
				iVar20 = false;
				iVar5 = 7;
				break;
			
			case 3:
				vVar0 = {vLocal_132};
				fVar3 = 175.3714f;
				iVar4 = iLocal_166;
				iVar10 = true;
				iVar17 = 1;
				iVar18 = false;
				sVar33 = "96NWO218";
				iVar5 = 2;
				break;
			
			case 4:
				vVar0 = {vLocal_135};
				fVar3 = 171f;
				iVar4 = iLocal_166;
				iVar10 = true;
				iVar17 = 1;
				iVar18 = false;
				sVar33 = "01DTS039";
				iVar5 = 2;
				break;
			
			case 1:
				vVar0 = {930.46f, 2719.65f, 42.41f};
				fVar3 = 180.53f;
				iVar4 = iLocal_167;
				break;
			
			case 2:
				vVar0 = {1141.17f, 2711.97f, 40.04f};
				fVar3 = 176.67f;
				iVar4 = iLocal_167;
				break;
			
			case 5:
				vVar0 = {514.5844f, -649.9937f, 23.7512f};
				fVar3 = 182.0097f;
				iVar4 = iLocal_168;
				iVar9 = true;
				iVar10 = true;
				iVar20 = false;
				sVar33 = "18NJM316";
				break;
			
			case 6:
				vVar0 = {507.3959f, -653.6174f, 23.7512f};
				fVar3 = 177.8055f;
				iVar4 = iLocal_168;
				iVar9 = true;
				iVar10 = true;
				iVar20 = false;
				sVar33 = "28HDT291";
				break;
			
			case 7:
				vVar0 = {1200.547f, -1553.607f, 38.4019f};
				fVar3 = 0.0001f;
				iVar4 = iLocal_168;
				iVar9 = true;
				iVar10 = true;
				iVar20 = false;
				sVar33 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!has_model_loaded(iVar4))
		{
			return false;
		}
		if (!func_81(vParam1, vLocal_123, 0))
		{
			vVar0 = {vParam1};
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_90[iParam0 /*4*/] = create_vehicle(iVar4, vVar0, fVar3, 1, true);
		func_104(iParam0);
		func_103(iParam0);
		set_entity_visible(Local_90[iParam0 /*4*/], iVar7, 0);
		if (does_entity_exist(iVar26))
		{
			attach_entity_to_entity(Local_90[iParam0 /*4*/], iVar26, -1, vVar27, vVar30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			set_entity_collision(Local_90[iParam0 /*4*/], iVar6, 0);
		}
		set_vehicle_strong(Local_90[iParam0 /*4*/], iVar8);
		freeze_entity_position(Local_90[iParam0 /*4*/], iVar9);
		set_vehicle_engine_on(Local_90[iParam0 /*4*/], iVar10, 1, 0);
		set_entity_invincible(Local_90[iParam0 /*4*/], iVar13);
		set_entity_load_collision_flag(Local_90[iParam0 /*4*/], iVar14);
		set_vehicle_can_be_targetted(Local_90[iParam0 /*4*/], iVar15);
		_0x4D9D109F63FEE1D4(Local_90[iParam0 /*4*/], iVar16);
		set_vehicle_automatically_attaches(Local_90[iParam0 /*4*/], iVar18, 0);
		_0x2B6747FAA9DB9D6B(Local_90[iParam0 /*4*/], iVar17);
		set_entity_only_damaged_by_player(Local_90[iParam0 /*4*/], iVar19);
		set_vehicle_tyres_can_burst(Local_90[iParam0 /*4*/], iVar20);
		set_vehicle_needs_to_be_hotwired(Local_90[iParam0 /*4*/], iVar21);
		_0x9EBC85ED0FFFE51C(Local_90[iParam0 /*4*/], !iVar22, 0);
		if (!is_string_null_or_empty(sVar33))
		{
			set_vehicle_number_plate_text(Local_90[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			set_vehicle_forward_speed(Local_90[iParam0 /*4*/], fVar23);
		}
		if (iVar11)
		{
			set_heli_blades_full_speed(Local_90[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			_0xAD2D28A1AFDFF131(Local_90[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			_0xE6F13851780394DA(Local_90[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0)
		{
			set_vehicle_doors_locked(Local_90[iParam0 /*4*/], iVar5);
		}
		if (iParam5)
		{
			Local_90[iParam0 /*4*/].f_1 = func_102(Local_90[iParam0 /*4*/], iVar12, 0);
		}
	}
	return true;
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	return func_68(iParam0, !iParam1, iParam2);
}

void func_103(int iParam0)
{
	if (func_221(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				set_vehicle_dirt_level(Local_90[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_104(int iParam0)
{
	if (func_221(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				set_vehicle_colours(Local_90[iParam0 /*4*/], 48, 48);
				set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				set_vehicle_colours(Local_90[iParam0 /*4*/], 58, 58);
				set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				set_vehicle_colours(Local_90[iParam0 /*4*/], 94, 94);
				set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				set_vehicle_colours(Local_90[iParam0 /*4*/], false, false);
				set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_105(int iParam0)
{
	set_bit(&iLocal_156, iParam0);
}

void func_106()
{
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	func_116(1);
	register_script_with_audio(1);
	add_relationship_group("ENEMIES", &iLocal_171);
	set_relationship_between_groups(1, 1862763509, 1862763509);
	set_relationship_between_groups(255, 1862763509, iLocal_171);
	set_relationship_between_groups(1, iLocal_171, iLocal_171);
	set_relationship_between_groups(255, iLocal_171, 1862763509);
	set_ped_relationship_group_hash(player_ped_id(), 1862763509);
	func_107(1);
}

void func_107(int iParam0)
{
	func_108(39, iParam0);
	func_108(40, iParam0);
	func_108(41, iParam0);
	func_108(42, iParam0);
	func_108(43, iParam0);
	func_108(44, iParam0);
}

void func_108(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_115(iParam0, 2, 1))
		{
			func_114(iParam0, 2, 1);
		}
	}
	else if (func_115(iParam0, 2, 1))
	{
		func_109(iParam0, 2, 1);
	}
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_10() == 0)
		{
			iVar0 = func_112(func_113(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_110(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_110(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_111(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_111(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_112(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_111(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113(int iParam0)
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

void func_114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_10() == 0)
		{
			iVar0 = func_112(func_113(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_110(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_10() == 0)
		{
			return is_bit_set(func_112(func_113(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_116(int iParam0)
{
	set_vehicle_model_is_suppressed(iLocal_168, iParam0);
	set_vehicle_model_is_suppressed(iLocal_166, iParam0);
}

void func_117()
{
	if (!func_147())
	{
		if (func_134())
		{
			func_194(1, 0);
		}
	}
	_0x208784099002BC30("RE_DUEL", 0);
	func_132();
	func_127();
	func_123();
	func_118();
	if ((func_148(5) && func_221(Local_90[iLocal_173 /*4*/])) && get_game_timer() < iLocal_157)
	{
		_0x9C11908013EA4715(Local_90[iLocal_173 /*4*/]);
	}
	if (func_148(6))
	{
		if (iLocal_158 == 0)
		{
			if (func_76(player_ped_id(), vLocal_129, 1) >= 150f)
			{
				iLocal_158 = get_game_timer() + 30000;
			}
		}
		else if (get_game_timer() >= iLocal_158)
		{
			func_65(6);
		}
	}
	if (func_148(7))
	{
		if (get_game_timer() >= iLocal_159)
		{
			func_65(7);
		}
	}
	if ((func_148(9) && func_221(Local_90[0 /*4*/])) && func_75(player_ped_id(), Local_90[0 /*4*/], 1) <= 35f)
	{
		if (!func_148(10))
		{
			if (!is_sphere_visible(vLocal_132, 7f))
			{
				if ((get_game_timer() - iLocal_162 >= 1000 && !func_72(vLocal_132, 7f)) && func_76(player_ped_id(), vLocal_132, 1) >= 50f)
				{
					clear_area(vLocal_132, 7f, 1, 0, 0, false);
					func_101(3, vLocal_123, -1082130432, 0);
					func_101(1, vLocal_123, -1082130432, 0);
					attach_vehicle_to_trailer(Local_90[3 /*4*/], Local_90[1 /*4*/], 1f);
					func_77(0, 0, vLocal_123, -1082130432);
					func_105(10);
					if (iLocal_155 > 2)
					{
						set_blocking_of_non_temporary_events(Local_49[0 /*5*/], false);
						task_combat_ped(Local_49[0 /*5*/], player_ped_id(), 0, 16);
						Local_49[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_162 = get_game_timer();
			}
		}
		if (!func_148(11))
		{
			if (!is_sphere_visible(vLocal_135, 7f))
			{
				if ((get_game_timer() - iLocal_163 >= 1000 && !func_72(vLocal_135, 7f)) && func_76(player_ped_id(), vLocal_135, 1) >= 50f)
				{
					clear_area(vLocal_135, 7f, 1, 0, 0, false);
					func_101(4, vLocal_123, -1082130432, 0);
					func_101(2, vLocal_123, -1082130432, 0);
					attach_vehicle_to_trailer(Local_90[4 /*4*/], Local_90[2 /*4*/], 1f);
					func_77(1, 0, vLocal_123, -1082130432);
					func_105(11);
					if (iLocal_155 > 2)
					{
						set_blocking_of_non_temporary_events(Local_49[1 /*5*/], false);
						task_combat_ped(Local_49[1 /*5*/], player_ped_id(), 0, 16);
						Local_49[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_163 = get_game_timer();
			}
		}
		if (func_148(10) && func_148(11))
		{
			func_65(9);
			set_model_as_no_longer_needed(iLocal_166);
			set_model_as_no_longer_needed(iLocal_167);
			set_model_as_no_longer_needed(iLocal_169);
		}
	}
	if (func_148(8))
	{
		if (iLocal_160 == 0)
		{
			iLocal_160 = get_game_timer() + 3500;
		}
		else if (get_game_timer() >= iLocal_160)
		{
			func_65(8);
			func_105(6);
		}
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (does_entity_exist(Local_49[iVar0 /*5*/]) && does_blip_exist(Local_49[iVar0 /*5*/].f_1))
		{
			if (is_ped_in_any_vehicle(Local_49[iVar0 /*5*/], 0))
			{
				if (!func_122(iVar0, 0))
				{
					set_blip_scale(Local_49[iVar0 /*5*/].f_1, 1f);
					func_59(iVar0, 0);
				}
				if (func_66(Local_49[iVar0 /*5*/], 0) != -1)
				{
					if (func_121(iVar0))
					{
						if (get_blip_alpha(Local_49[iVar0 /*5*/].f_1) > 0)
						{
							set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 0);
							_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 1);
						}
					}
					else if (get_blip_alpha(Local_49[iVar0 /*5*/].f_1) == 0)
					{
						set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 255);
						_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 0);
					}
				}
			}
			else if (func_122(iVar0, 0))
			{
				set_blip_scale(Local_49[iVar0 /*5*/].f_1, 0.7f);
				func_120(iVar0, 0);
				if (get_blip_alpha(Local_49[iVar0 /*5*/].f_1) == 0)
				{
					set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 255);
					_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 0);
				}
			}
			if (is_ped_injured(Local_49[iVar0 /*5*/]))
			{
				func_119(&(Local_49[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (does_entity_exist(Local_90[iVar0 /*4*/]) && does_blip_exist(Local_90[iVar0 /*4*/].f_1))
		{
			if (!is_vehicle_driveable(Local_90[iVar0 /*4*/], 0))
			{
				func_119(&(Local_90[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_120(int iParam0, int iParam1)
{
	clear_bit(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

bool func_121(int iParam0)
{
	if (iParam0 == 3)
	{
		if (!func_221(Local_49[2 /*5*/]))
		{
			return false;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_221(Local_49[4 /*5*/]))
		{
			return false;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_221(Local_49[6 /*5*/]))
		{
			return false;
		}
	}
	return true;
}

int func_122(int iParam0, int iParam1)
{
	return is_bit_set(Local_49[iParam0 /*5*/].f_2, iParam1);
}

void func_123()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (does_entity_exist(Local_90[iVar0 /*4*/]))
		{
			func_124(iVar0);
		}
		iVar0++;
	}
}

void func_124(int iParam0)
{
	if (func_221(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_221(Local_49[2 /*5*/]) && !func_221(Local_49[3 /*5*/])) || !is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
				{
					func_125(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!func_221(Local_49[4 /*5*/]) && !func_221(Local_49[5 /*5*/])) || !is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
				{
					func_125(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!func_221(Local_49[6 /*5*/]) && !func_221(Local_49[7 /*5*/])) || !is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
				{
					func_125(iParam0, 0);
				}
				break;
			
			case 3:
				if (!func_221(Local_49[0 /*5*/]) || !is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
				{
					if (func_75(player_ped_id(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_125(iParam0, 0);
					}
				}
				if (func_148(6))
				{
					func_58(iParam0, get_vehicle_ped_is_using(player_ped_id()), &uLocal_153);
				}
				break;
			
			case 4:
				if (!func_221(Local_49[1 /*5*/]) || !is_vehicle_driveable(Local_90[iParam0 /*4*/], 0))
				{
					if (func_75(player_ped_id(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_125(iParam0, 0);
					}
				}
				if (func_148(6))
				{
					func_58(iParam0, get_vehicle_ped_is_using(player_ped_id()), &uLocal_154);
				}
				break;
			
			case 1:
				if (!func_221(Local_90[3 /*4*/]) || func_75(Local_90[3 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_125(iParam0, 0);
				}
				break;
			
			case 2:
				if (!func_221(Local_90[4 /*4*/]) || func_75(Local_90[4 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_125(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_90[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_90())
						{
							func_105(1);
							func_119(&(Local_90[iParam0 /*4*/].f_1));
							Local_90[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (is_entity_visible(Local_90[iParam0 /*4*/]))
	{
		func_125(iParam0, 0);
	}
	else
	{
		func_125(iParam0, 1);
	}
}

void func_125(int iParam0, int iParam1)
{
	if (does_entity_exist(Local_90[iParam0 /*4*/]))
	{
		func_119(&(Local_90[iParam0 /*4*/].f_1));
		if (is_playback_going_on_for_vehicle(Local_90[iParam0 /*4*/]))
		{
			stop_playback_recorded_vehicle(Local_90[iParam0 /*4*/]);
		}
		if (func_126(&(Local_90[iParam0 /*4*/])))
		{
			if (iParam1)
			{
				delete_vehicle(&(Local_90[iParam0 /*4*/]));
			}
			else
			{
				set_vehicle_as_no_longer_needed(&(Local_90[iParam0 /*4*/]));
			}
		}
		Local_90[iParam0 /*4*/] = 0;
		Local_90[iParam0 /*4*/].f_2 = 0;
		Local_90[iParam0 /*4*/].f_3 = 0;
	}
}

bool func_126(auto uParam0)
{
	if (is_ped_in_vehicle(player_ped_id(), *uParam0, 0))
	{
		return false;
	}
	return true;
}

void func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (does_entity_exist(Local_49[iVar0 /*5*/]))
		{
			func_128(iVar0);
		}
		iVar0++;
	}
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 fVar5;
	Vector3 fVar6;
	
	if (func_221(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_49[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_49[iParam0 /*5*/].f_4 = get_game_timer();
						if (func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) <= 15f)
						{
							set_ik_target(Local_49[iParam0 /*5*/], 1, player_ped_id(), 31086, vLocal_123, 0, -1, -1);
						}
						break;
					
					case 1:
						if (func_221(Local_90[iVar0 /*4*/]))
						{
							_0x88BC673CA9E0AE99(Local_90[iVar0 /*4*/], 1);
							if (func_221(Local_90[0 /*4*/]) && !is_entity_touching_entity(Local_90[iVar0 /*4*/], Local_90[0 /*4*/]))
							{
								if ((((((get_game_timer() >= iLocal_161 && !func_148(12)) && !is_entity_at_coord(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0)) && func_76(player_ped_id(), vLocal_138, 1) < func_75(Local_90[iVar0 /*4*/], player_ped_id(), 1)) && !is_sphere_visible(vLocal_138, 7f)) && !is_sphere_visible(get_entity_coords(Local_90[iVar0 /*4*/], 1), 7f)) && !func_72(vLocal_138, 8f))
								{
									fVar5 = func_71(vLocal_138, get_entity_coords(player_ped_id(), 1));
									clear_area_of_vehicles(vLocal_138, 8f, 0, 0, 0, 0, false);
									clear_area_of_vehicles(_get_object_offset_from_coords(vLocal_138, fVar5, 0f, -8f, 0f), 8f, 0, 0, 0, 0, false);
									set_entity_coords(Local_90[iVar0 /*4*/], vLocal_138, 1, false, 0, 1);
									set_vehicle_on_ground_properly(Local_90[iVar0 /*4*/]);
									set_entity_heading(Local_90[iVar0 /*4*/], fVar5);
									set_vehicle_engine_on(Local_90[iVar0 /*4*/], true, 1, 0);
									set_vehicle_forward_speed(Local_90[iVar0 /*4*/], 30f);
									func_105(5);
									iLocal_173 = iVar0;
									iLocal_157 = get_game_timer() + 5000;
								}
								if (!func_148(12) && is_entity_at_coord(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0))
								{
									func_105(12);
								}
								if (((get_game_timer() >= iLocal_161 && is_entity_occluded(Local_90[iVar0 /*4*/])) && func_221(Local_90[iVar1 /*4*/])) && func_75(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) >= 20f)
								{
									vVar2 = {get_offset_from_entity_given_world_coords(Local_90[iVar0 /*4*/], get_entity_coords(player_ped_id(), 1))};
									if (vVar2.x < -3.5f || vVar2.x > 3.5f)
									{
										fVar6 = get_entity_speed(Local_90[iVar0 /*4*/]);
										fVar6 = func_131(fVar6, 20f, 50f);
										set_entity_heading(Local_90[iVar0 /*4*/], func_71(get_entity_coords(Local_90[iVar0 /*4*/], 1), get_entity_coords(player_ped_id(), 1)));
										set_vehicle_forward_speed(Local_90[iVar0 /*4*/], fVar6);
									}
								}
								if ((func_122(iParam0, 3) || func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) <= 15f) || (func_221(Local_90[iVar1 /*4*/]) && func_75(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) <= 15f))
								{
									if (func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) <= 15f)
									{
										if (!does_blip_exist(Local_49[iParam0 /*5*/].f_1))
										{
											Local_49[iParam0 /*5*/].f_1 = func_67(Local_49[iParam0 /*5*/], 1, 145);
											func_85(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_49[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!does_blip_exist(Local_49[iParam0 /*5*/].f_1))
								{
									Local_49[iParam0 /*5*/].f_1 = func_67(Local_49[iParam0 /*5*/], 1, 145);
									func_85(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_49[iParam0 /*5*/].f_3++;
							}
						}
						break;
					
					case 2:
						if (func_221(Local_90[iVar0 /*4*/]))
						{
							set_blocking_of_non_temporary_events(Local_49[iParam0 /*5*/], false);
							task_combat_ped(Local_49[iParam0 /*5*/], player_ped_id(), 0, 16);
							Local_49[iParam0 /*5*/].f_3++;
						}
						break;
					
					case 3:
						if (!does_blip_exist(Local_49[iParam0 /*5*/].f_1))
						{
							if (func_75(player_ped_id(), Local_49[iParam0 /*5*/], 1) <= 85f)
							{
								Local_49[iParam0 /*5*/].f_1 = func_67(Local_49[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_148(6) || func_148(8))
						{
							if (!is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 0) && func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) >= 250f)
							{
								func_130(iParam0, 0);
							}
						}
						else if (func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) >= 250f)
						{
							func_130(iParam0, 0);
						}
						break;
				}
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_148(7))
				{
					if (!is_ped_in_combat(Local_49[iParam0 /*5*/], player_ped_id()) && !func_129(Local_49[iParam0 /*5*/], 579380604, 1))
					{
						task_combat_ped(Local_49[iParam0 /*5*/], player_ped_id(), 0, 16);
					}
				}
				if (func_148(7))
				{
					if (!is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 0) && func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) >= 250f)
					{
						func_130(iParam0, 0);
					}
				}
				else if (func_148(2) && func_75(Local_49[iParam0 /*5*/], player_ped_id(), 1) >= 250f)
				{
					func_130(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_122(iParam0, 1))
		{
			set_ped_can_ragdoll(Local_49[iParam0 /*5*/], 1);
			detach_entity(Local_49[iParam0 /*5*/], 1, false);
			func_120(iParam0, 1);
		}
		if (!func_122(iParam0, 2))
		{
			if (is_entity_visible(Local_49[iParam0 /*5*/]))
			{
				func_130(iParam0, 0);
			}
			else
			{
				func_130(iParam0, 1);
			}
		}
	}
}

bool func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!iParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_130(int iParam0, int iParam1)
{
	if (does_entity_exist(Local_49[iParam0 /*5*/]))
	{
		func_119(&(Local_49[iParam0 /*5*/].f_1));
		if ((((func_221(Local_49[iParam0 /*5*/]) && is_entity_attached(Local_49[iParam0 /*5*/])) && !is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 1)) && !is_ped_sitting_in_any_vehicle(Local_49[iParam0 /*5*/])) && !is_ped_getting_into_a_vehicle(Local_49[iParam0 /*5*/]))
		{
			detach_entity(Local_49[iParam0 /*5*/], 1, true);
		}
		if (iParam1)
		{
			delete_ped(&(Local_49[iParam0 /*5*/]));
		}
		else
		{
			set_ped_as_no_longer_needed(&(Local_49[iParam0 /*5*/]));
		}
		Local_49[iParam0 /*5*/].f_2 = 0;
	}
}

float func_131(float fParam0, float fParam1, float fParam2)
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

void func_132()
{
	if ((func_148(1) || iLocal_155 > 2) && func_133())
	{
		if (func_221(Local_90[0 /*4*/]) && func_75(player_ped_id(), Local_90[0 /*4*/], 1) >= 250f)
		{
			func_57();
		}
	}
	if (func_133())
	{
		if (does_entity_exist(Local_90[0 /*4*/]) && !func_221(Local_90[0 /*4*/]))
		{
			func_57();
		}
	}
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_221(Local_49[iVar1 /*5*/]) && does_blip_exist(Local_49[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_134()
{
	if (!func_98(5))
	{
		return true;
	}
	if (func_143())
	{
		return true;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_142())
		{
			return false;
		}
	}
	if (func_135(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_135(float fParam0, int iParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	Vector3 fVar34;
	Vector3 fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_23(func_141()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_136(iVar32, &Var0);
					fVar35 = get_distance_between_coords(get_entity_coords(player_ped_id(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						iVar38 = true;
						if (iParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								iVar38 = false;
							}
						}
						if (iVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_136(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_139(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_140(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_140(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

auto func_141()
{
	func_21();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_142()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_143()
{
	if (func_146() && !func_142())
	{
		return true;
	}
	if (func_145() && func_144())
	{
		return true;
	}
	return false;
}

int func_144()
{
	return Global_100872 > 0;
}

bool func_145()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_146()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_147()
{
	if ((Global_101143 == func_29() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

int func_148(int iParam0)
{
	return is_bit_set(iLocal_156, iParam0);
}

void func_149(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_151(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_150();
}

void func_150()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			set_vehicle_model_is_suppressed(get_entity_model(get_vehicle_ped_is_in(player_ped_id(), 0)), true);
		}
		set_ped_config_flag(player_ped_id(), 32, false);
	}
}

void func_151(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_152(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	
	if (!Global_138022)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_44())
		{
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			vVar1 = {get_entity_coords(player_ped_id(), 1)};
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_142())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_5(0))
		{
			return false;
		}
		if (func_143())
		{
			return false;
		}
		if (func_193())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_23(func_141()))
		{
			if (func_135(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_43.z > 50f)
			{
				return false;
			}
		}
		if (!func_192(iParam3))
		{
			return false;
		}
		if (func_23(func_141()))
		{
			if (func_191(func_141()) == 4 || func_191(func_141()) == 5)
			{
				return false;
			}
		}
		if (func_23(func_141()))
		{
			if (!func_190(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_189(Global_101154.f_29520.f_43[iParam3]))
		{
			return false;
		}
		if (get_game_timer() - Global_101145 < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_187())
		{
			return false;
		}
		if (get_mission_flag())
		{
			return false;
		}
		if (get_random_event_flag())
		{
			return false;
		}
		if (!func_177(4))
		{
			return false;
		}
		if (!func_98(5))
		{
			return false;
		}
		if (func_176(iParam3, iParam4) && !iParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (is_valid_interior(get_interior_from_entity(player_ped_id())))
		{
			if ((get_interior_from_entity(player_ped_id()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_176(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_192(30) && !func_176(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_23(func_141()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_175(iVar8))
				{
					if (func_153(iVar4))
					{
						if (!func_81(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vVar5) < 210f * 210f)
							{
								if (func_141() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_154(iVar0);
}

int func_154(int iParam0)
{
	return func_155(iParam0, 1);
}

bool func_155(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_175(iParam0))
	{
		return false;
	}
	func_156(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_156(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_157(func_168(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_157(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_167(iParam0, iParam1))
	{
		iVar0 = func_166(iParam1);
		iVar1 = func_164(iParam0);
		iVar2 = func_164(iParam0) - func_164(iParam1);
		iVar3 = func_166(iParam0) - func_166(iParam1);
		iVar4 = func_163(iParam0) - func_163(iParam1);
		iVar5 = func_162(iParam0) - func_162(iParam1);
		iVar6 = func_161(iParam0) - func_161(iParam1);
		iVar7 = func_160(iParam0) - func_160(iParam1);
	}
	else
	{
		iVar0 = func_166(iParam0);
		iVar1 = func_164(iParam1);
		iVar2 = func_164(iParam1) - func_164(iParam0);
		iVar3 = func_166(iParam1) - func_166(iParam0);
		iVar4 = func_163(iParam1) - func_163(iParam0);
		iVar5 = func_162(iParam1) - func_162(iParam0);
		iVar6 = func_161(iParam1) - func_161(iParam0);
		iVar7 = func_160(iParam1) - func_160(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_159(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_158(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_158(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_159(int iParam0, int iParam1)
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

int func_160(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_161(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_162(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_163(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_164(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_165(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_166(int iParam0)
{
	return (iParam0 && 15);
}

bool func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_175(iParam1) || !func_175(iParam0))
	{
		return true;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_162(iParam0);
	iVar1 = func_162(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_161(iParam0);
	iVar1 = func_161(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_160(iParam0);
	iVar1 = func_160(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_168()
{
	auto uVar0;
	
	func_174(&uVar0, get_clock_seconds());
	func_173(&uVar0, get_clock_minutes());
	func_172(&uVar0, get_clock_hours());
	func_171(&uVar0, get_clock_day_of_month());
	func_170(&uVar0, get_clock_month());
	func_169(&uVar0, get_clock_year());
	return uVar0;
}

void func_169(auto uParam0, int iParam1)
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

void func_170(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_171(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_166(*uParam0);
	iVar1 = func_164(*uParam0);
	if (iParam1 < 1 || iParam1 > func_159(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_172(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_173(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_174(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_175(int iParam0)
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
	iVar0 = func_160(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_161(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_162(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_164(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_166(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_163(iParam0);
	if (iVar5 < 1 || iVar5 > func_159(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_141();
				if (!func_23(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_186()) || Global_100201) || Global_25122) || func_185()) || func_184(8, -1)) || func_183()) || func_182()) || func_181()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_186()) || Global_25122) || func_185()) || func_184(8, -1)) || func_181()) || func_183()) || func_182()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_186()) || Global_100201) || Global_25122) || func_185()) || func_184(8, -1)) || func_181()) || func_183()) || func_182()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_186()) || Global_100201) || Global_25122) || func_185()) || func_184(8, -1)) || func_183()) || func_182()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_186() || get_player_wanted_level(player_id()) > 0) || func_184(8, -1)) || func_180()) || func_179()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_184(8, -1) || func_183()) || func_182()) || func_179()) || func_178())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (does_entity_exist(player_ped_id()))
						{
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_186()) || Global_25122) || func_185()) || func_184(8, -1)) || func_182()) || func_181()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_186()) || func_182()) || Global_100201) || Global_25122) || func_185()) || Global_36839) || func_184(8, -1)) || func_181()) || func_179()) || func_180()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_186()) || Global_100201) || Global_25122) || func_185()) || func_184(8, -1)) || func_181()) || func_179()) || func_183()) || func_182()) || func_180())
						{
							return false;
						}
						break;
				}
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
	else
	{
		return false;
	}
	return true;
}

auto func_178()
{
	return Global_91317.f_1;
}

int func_179()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_180()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_181()
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

int func_182()
{
	return Global_91330.f_297 > 0;
}

int func_183()
{
	return Global_91330.f_296 > 0;
}

int func_184(int iParam0, int iParam1)
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

auto func_185()
{
	return Global_1315913;
}

int func_186()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_187()
{
	func_188();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

void func_188()
{
	if (func_22(14))
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
		Global_14413 = func_141();
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

int func_189(int iParam0)
{
	return func_167(func_168(), iParam0);
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_141();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_191(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_44())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = is_bit_set(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 -= 31;
		iVar1 = is_bit_set(Global_101154.f_29520.f_1, iVar0);
	}
	return iVar1;
}

bool func_193()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(get_ped_in_vehicle_seat(iVar0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_194(int iParam0, int iParam1)
{
	func_220();
	func_219();
	func_116(0);
	func_217(1, 1, 1, 0);
	func_215(0);
	clear_timecycle_modifier();
	display_radar(true);
	set_ignore_no_gps_flag(0);
	func_214();
	func_213();
	func_212();
	if (func_221(Local_90[0 /*4*/]))
	{
		set_vehicle_tyres_can_burst(Local_90[0 /*4*/], true);
	}
	func_211(iParam1);
	func_210(iParam1);
	remove_relationship_group(iLocal_171);
	func_208();
	func_206();
	func_107(0);
	destroy_all_cams(0);
	render_script_cams(false, false, 3000, 1, 0, 0);
	set_random_trains(1);
	if (iParam0)
	{
		func_195(-1);
		terminate_this_thread();
	}
}

void func_195(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_147())
	{
		func_199(iParam0);
		set_mission_name(0, 0);
		Global_101145 = get_game_timer();
		func_198(30000);
		StringCopy(&cVar0, func_197(Global_101143, 1), 64);
		if (func_28(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_101140, get_game_timer() - Global_101141, 0);
	}
	else if (is_bit_set(Global_101150, false) && Global_101154.f_29520.f_2 < 3)
	{
		clear_bit(&Global_101150, false);
	}
	func_196(&Global_25179);
	Global_101144 = 0;
	func_151(-1);
}

void func_196(auto uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

char* func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!iParam1)
	{
	}
	return "UNKNOWN";
}

void func_198(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_199(int iParam0)
{
	func_200(iParam0, 0, func_205(iParam0));
}

void func_200(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_168();
	func_203(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_202(uParam0, &uVar0);
	Var1 = {func_201(&uVar0)};
}

struct<16> func_201(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_162(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_161(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_160(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_163(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_166(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_164(*uParam0), 64);
	return cVar0;
}

void func_202(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_203(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_164(*uParam0);
	iVar1 = func_166(*uParam0);
	iVar2 = func_163(*uParam0);
	iVar3 = func_162(*uParam0);
	iVar4 = func_161(*uParam0);
	iVar5 = func_160(*uParam0);
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
	iVar6 = func_159(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_159(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_204(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_204(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_174(uParam0, iParam1);
	func_173(uParam0, iParam2);
	func_172(uParam0, iParam3);
	func_170(uParam0, iParam5);
	func_171(uParam0, iParam4);
	func_169(uParam0, iParam6);
}

int func_205(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_206()
{
	Global_14578 = 0;
	func_207();
}

void func_207()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_208()
{
	Global_14578 = 0;
	func_209();
}

void func_209()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_125(iVar0, iParam0);
		iVar0++;
	}
}

void func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_130(iVar0, iParam0);
		iVar0++;
	}
}

void func_212()
{
}

void func_213()
{
}

void func_214()
{
}

void func_215(int iParam0)
{
	if (iParam0)
	{
		set_player_wanted_level(player_id(), false, 0);
		set_max_wanted_level(false);
		set_player_wanted_level_now(player_id(), 0);
		set_wanted_level_multiplier(0f);
		set_dispatch_cops_for_player(player_id(), 0);
		set_create_random_cops(false);
		_0xDC0F817884CDD856(3, false);
		_0xDC0F817884CDD856(1, false);
		_0xDC0F817884CDD856(8, false);
		_0xDC0F817884CDD856(2, false);
		_0xDC0F817884CDD856(6, false);
		_0xDC0F817884CDD856(4, false);
		_0xDC0F817884CDD856(12, false);
		_0xDC0F817884CDD856(5, false);
		func_216(9, 1);
		func_216(8, 1);
	}
	else
	{
		set_max_wanted_level(5);
		set_wanted_level_multiplier(1f);
		set_dispatch_cops_for_player(player_id(), 1);
		set_create_random_cops(true);
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(1, true);
		_0xDC0F817884CDD856(8, true);
		_0xDC0F817884CDD856(2, true);
		_0xDC0F817884CDD856(6, true);
		_0xDC0F817884CDD856(4, true);
		_0xDC0F817884CDD856(12, true);
		_0xDC0F817884CDD856(5, true);
		func_216(9, 0);
		func_216(8, 0);
	}
}

void func_216(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_25364, iParam0);
	}
	else
	{
		clear_bit(&Global_25364, iParam0);
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		func_206();
	}
	if (iParam1)
	{
		if (!func_218() || (iParam0 && !iParam3))
		{
			clear_prints();
		}
		_0xB57D8DD645CFA2CF();
	}
	if (iParam2)
	{
		clear_help(1);
	}
}

bool func_218()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_219()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_119(&(Local_49[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_119(&(Local_90[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_220()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_155 = 0;
	iLocal_156 = false;
}

bool func_221(int iParam0)
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

