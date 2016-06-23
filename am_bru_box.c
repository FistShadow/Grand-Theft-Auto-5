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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<10> Local_56 = 0;
	var uLocal_66 = 0;
	vector3[] vLocal_67 = new vector3[32];
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	struct<20> Local_170 = 0;
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
	if (network_is_game_in_progress())
	{
		if (!func_207(Local_170))
		{
			func_201();
		}
		if (Local_170.f_16 >= 32)
		{
			if (func_200(player_id()) != 1 && !is_bit_set(Global_2460486.f_791.f_7, false))
			{
				func_201();
			}
		}
	}
	uLocal_165 = Local_170.f_19;
	while (true)
	{
		func_199();
		if (func_189())
		{
			func_201();
		}
		if (Local_170.f_16 >= 32)
		{
			if (func_200(player_id()) != 1 && Global_1609015 == 0)
			{
				func_201();
			}
		}
		if (network_is_in_tutorial_session() != iLocal_169)
		{
			func_201();
		}
		_0x2302C0264EA58D31();
		switch (func_188(participant_id_to_int()))
		{
			case 0:
				if (func_187())
				{
					if (func_186() == 1)
					{
						vLocal_67[participant_id_to_int() /*3*/] = 1;
					}
					else if (func_186() == 4)
					{
						vLocal_67[participant_id_to_int() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_186() == 1)
				{
					func_151();
				}
				else if (func_186() == 4)
				{
					vLocal_67[participant_id_to_int() /*3*/] = 3;
				}
				if (vLocal_67[participant_id_to_int() /*3*/].f_2 == 0)
				{
					if ((!is_entity_at_coord(player_ped_id(), Local_56.f_3, 500f, 500f, 500f, false, true, 0) && func_200(player_id()) != 1) && !is_bit_set(Global_2460486.f_791.f_7, false))
					{
						vLocal_67[participant_id_to_int() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_149(&(Local_56.f_9));
				if (func_148(&(Local_56.f_9)))
				{
					vLocal_67[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_67[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_201();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_186())
			{
				case 0:
					if (func_6())
					{
						Local_56 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_56 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (Local_56.f_7 >= 32 && func_200(player_id()) == 1)
	{
		if (func_3(Global_2460486.f_791.f_1))
		{
			return true;
		}
	}
	if (Local_56.f_8 == 2)
	{
		return true;
	}
	return false;
}

bool func_3(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_4()
{
	switch (Local_56.f_8)
	{
		case 0:
			if (!network_does_network_id_exist(Local_56.f_2) || Local_56.f_6 != -1)
			{
				Local_56.f_8 = 1;
			}
			break;
		
		case 1:
			Local_56.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (Local_56.f_6 == -1)
			{
				if (is_bit_set(vLocal_67[iVar0 /*3*/].f_1, false))
				{
					Local_56.f_6 = iVar0;
				}
			}
			if (!is_bit_set(Local_56.f_1, 7))
			{
				if (is_bit_set(vLocal_67[iVar0 /*3*/].f_1, true))
				{
					set_bit(&(Local_56.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

bool func_6()
{
	vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	struct<25> Var13;
	
	if (!network_does_network_id_exist(Local_56.f_2))
	{
		if (func_187())
		{
			if (can_register_mission_objects(1))
			{
				fVar5 = 250f;
				vVar6 = {Local_56.f_3};
				if (is_bit_set(Local_56.f_1, 8))
				{
					vVar0 = {Global_2460486.f_791.f_1};
					fVar3 = Global_2460486.f_791.f_4;
				}
				if (func_200(player_id()) == 7)
				{
					iVar12 = get_player_team(player_id());
					if (Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_10 > 0f)
					{
						vVar6 = {Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_3};
						vVar9 = {Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_6};
						fVar5 = Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_9 > 0f)
					{
						vVar6 = {Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/]};
						fVar5 = Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (is_bit_set(Local_56.f_1, 8) || func_147(vVar6, fVar5, &vVar0, &fVar3, Var13))
					{
						if (Local_56.f_7 >= 32 || func_200(player_id()) == 1)
						{
							Local_56.f_2 = obj_to_net(create_portable_pickup(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_56.f_2 = obj_to_net(_create_portable_pickup_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						set_entity_heading(net_to_obj(Local_56.f_2), fVar3);
					}
				}
				else if (is_bit_set(Local_56.f_1, 8) || func_7(vVar6, vVar9, fVar5, &vVar0, &fVar3, Var13))
				{
					if (Local_56.f_7 >= 32 || func_200(player_id()) == 1)
					{
						Local_56.f_2 = obj_to_net(create_portable_pickup(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_56.f_2 = obj_to_net(_create_portable_pickup_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					set_entity_heading(net_to_obj(Local_56.f_2), fVar3);
				}
			}
		}
	}
	if (network_does_network_id_exist(Local_56.f_2))
	{
		return true;
	}
	return false;
}

bool func_7(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, Vector3 fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)
{
	struct<11> Var0;
	struct<25> Var18;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 2;
	Var18.f_8 = {vParam0};
	Var18.f_11 = {vParam3};
	Var18.f_14 = fParam6;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	Param9.f_7 = 0;
	if (func_8(&Var18, &Param9, &Var0))
	{
		*uParam7 = {Var0[0 /*3*/]};
		*fParam8 = Var0.f_10[0];
		return true;
	}
	return false;
}

bool func_8(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	int iVar25;
	struct<56> Var26;
	int iVar83;
	
	iVar25 = false;
	switch (*uParam0.f_7)
	{
		case 0:
			if (((!Global_2404956.f_1484 == *uParam0 || !Global_2404956.f_1484.f_1 == *uParam0.f_1) || !Global_2404956.f_1484.f_2 == *uParam0.f_2) || !Global_2404956.f_1487 == *uParam0.f_4)
			{
				iVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2)
			{
				iVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2) || !Global_2404956.f_1504 == *uParam0.f_14)
			{
				iVar25 = true;
			}
			break;
	}
	if (iVar25)
	{
		if (Global_2404956.f_1482 == 1)
		{
			if (is_thread_active(Global_2404956.f_1491))
			{
				if (Global_2404956.f_1491 == get_id_of_this_thread())
				{
					if (get_time_difference(get_network_time(), Global_2404956.f_1488) < func_146(0))
					{
						return false;
					}
				}
				else if (get_time_difference(get_network_time(), Global_2404956.f_1488) < func_146(0))
				{
					return false;
				}
			}
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_145();
		}
		Global_2404956.f_1482 = 0;
	}
	else if (get_time_difference(get_network_time(), Global_2404956.f_1488) > func_146(0))
	{
		Global_2404956.f_1489 = get_network_time();
	}
	switch (*uParam0.f_7)
	{
		case 0:
			fVar4 = *uParam0 - *uParam0.f_4;
			fVar5 = *uParam0.f_1 - *uParam0.f_4;
			fVar6 = *uParam0 + *uParam0.f_4;
			fVar7 = *uParam0.f_1 + *uParam0.f_4;
			break;
		
		case 1:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8;
				fVar6 = *uParam0.f_11;
			}
			else
			{
				fVar4 = *uParam0.f_11;
				fVar6 = *uParam0.f_8;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1;
				fVar7 = *uParam0.f_11.f_1;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1;
				fVar7 = *uParam0.f_8.f_1;
			}
			break;
		
		case 2:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_11 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar4 = *uParam0.f_11 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_8 + 0.5f * *uParam0.f_14;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_11.f_1 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_8.f_1 + 0.5f * *uParam0.f_14;
			}
			break;
	}
	_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (*uParam0.f_7 == 0)
	{
		vVar8 = {*uParam0};
	}
	else
	{
		vVar8 = {*uParam0.f_8 + *uParam0.f_11 * Vector(0.5f, 0.5f, 0.5f)};
	}
	vVar11 = {vVar8 + Vector(-0.1f, -0.1f, -0.1f)};
	vVar14 = {vVar8 + Vector(0.1f, 0.1f, 0.1f)};
	if (!Global_2404956.f_1482)
	{
		_0xFB8F2A6F3DF08CBE();
		_0xFEE4A5459472A9F8();
		func_145();
		if (*uParam1.f_7 && *uParam0.f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_144(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, *uParam1.f_5, *uParam0.f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = {*uParam0};
					*uParam2.f_10[0] = *uParam0.f_3;
					return true;
				}
			}
		}
		if (!_0x3C67506996001F5E())
		{
			Global_2404956.f_1505 = *uParam0.f_7;
			switch (*uParam0.f_7)
			{
				case 0:
					Global_2404956.f_1484 = {*uParam0};
					Global_2404956.f_1487 = *uParam0.f_4;
					break;
				
				case 1:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = 0f;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
				
				case 2:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = *uParam0.f_14;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
			}
			if (!*uParam1.f_8 && !*uParam1.f_9)
			{
				func_143(vVar8.x, vVar8.y);
			}
			Global_2404956.f_1483 = 1;
			Global_2404956.f_1482 = 1;
			Global_2404956.f_1489 = get_network_time();
			Global_2404956.f_1488 = get_network_time();
			Global_2404956.f_1491 = get_id_of_this_thread();
		}
		else
		{
			return false;
		}
	}
	if (Global_2404956.f_1482)
	{
		if (Global_2404956.f_1483 == 1)
		{
			if (_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || get_time_difference(get_network_time(), Global_2404956.f_1489) > 5000)
			{
				Global_2404956.f_1489 = get_network_time();
				if (*uParam1.f_8 || *uParam1.f_9)
				{
					if (*uParam0.f_21)
					{
						*(uParam2[0 /*3*/]) = {*uParam0.f_18};
					}
					else
					{
						*(uParam2[0 /*3*/]) = {vVar8};
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26 = {*uParam1};
					Var26.f_3 = *uParam1.f_5;
					Var26.f_11 = *uParam1.f_9;
					Var26.f_18 = 1;
					switch (*uParam0.f_7)
					{
						case 0:
							Var26.f_19 = {*uParam0};
							Var26.f_25 = *uParam0.f_4;
							break;
						
						case 1:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = *uParam0.f_14;
							break;
					}
					Var26.f_26 = *uParam0.f_7;
					Var26.f_12 = *uParam0.f_15;
					if (*uParam0.f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = {*(uParam1.f_13[iVar17 /*3*/])};
						Var26.f_45[iVar17] = *uParam1.f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = *uParam1.f_23;
					Var26.f_55 = *uParam0.f_16;
					func_124(uParam2[0 /*3*/], uParam2.f_10[0], &Var26);
					if ((*uParam1.f_7 && *uParam1.f_9) && *uParam0.f_7 == 0)
					{
						if (!func_123(*(uParam2[0 /*3*/]), *uParam0, *uParam0.f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = {*uParam0};
							*uParam2.f_10[0] = *uParam0.f_3;
						}
					}
					Global_2404956.f_1483 = 9;
				}
				else
				{
					Global_2404956.f_1483 = 2;
				}
			}
		}
		if (Global_2404956.f_1483 == 2)
		{
			if ((is_navmesh_loaded_in_area(vVar11, vVar14) || get_time_difference(get_network_time(), Global_2404956.f_1489) > 15000) || _0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2404956.f_1489 = get_network_time();
				if (*uParam0.f_5 && !func_120(player_id(), 0))
				{
					Global_2404956.f_1483 = 3;
				}
				else
				{
					Global_2404956.f_1483 = 4;
				}
			}
			else if (get_time_difference(get_network_time(), Global_2404956.f_1493) > 7000)
			{
				func_119(vVar8.x, vVar8.y);
			}
		}
		if (Global_2404956.f_1483 == 3)
		{
			if (func_118() || get_time_difference(get_network_time(), Global_2404956.f_1489) > 10000)
			{
				Global_2404956.f_1489 = get_network_time();
				Global_2404956.f_1483 = 4;
			}
		}
		if (Global_2404956.f_1483 == 4)
		{
			if (_0x3C67506996001F5E())
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_113();
				if (*uParam0.f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (*uParam1.f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!get_player_team(player_id()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (*uParam0.f_7)
					{
						case 0:
							if (_0x5A6FFA2433E2F14C(player_id(), *uParam0, *uParam0.f_4, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = get_network_time();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 1:
							func_112(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							if (_0x4BA92A18502BCA61(player_id(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = get_network_time();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 2:
							if (_0x4BA92A18502BCA61(player_id(), *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = get_network_time();
								Global_2404956.f_1483 = 5;
							}
							break;
					}
				}
				else
				{
					if (*uParam1.f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (*uParam1.f_10)
					{
						iVar0 += 32;
					}
					Global_2404956.f_1489 = get_network_time();
					Global_2404956.f_1483 = 5;
					switch (*uParam0.f_7)
					{
						case 0:
							_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_112(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404956.f_1483 == 5)
		{
			if (func_50(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404956.f_1509.f_5)
				{
					Global_2404956.f_1489 = get_network_time();
					Global_2404956.f_1483 = 6;
				}
				else
				{
					Global_2404956.f_1489 = get_network_time();
					if (!*uParam0.f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = {*uParam1 - *(uParam2[0 /*3*/])};
							*uParam2.f_10[0] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						}
					}
					Global_2404956.f_1483 = 9;
				}
			}
			else if (get_time_difference(get_network_time(), Global_2404956.f_1489) > 20000)
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
				Global_2404956.f_1489 = get_network_time();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 6)
		{
			iVar0 = 0;
			Global_2404956.f_1509.f_1 = 0;
			if (*uParam1.f_3)
			{
				iVar0++;
			}
			else if (*uParam0.f_7 == 0)
			{
				if (!func_49(*uParam0.f_4))
				{
					if (is_valid_interior(get_interior_at_coords(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_48(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14))
			{
				if (is_valid_interior(get_interior_at_coords(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (*uParam1.f_10)
			{
				iVar0 += 32;
			}
			if (*uParam0.f_15)
			{
				iVar0 += 16;
			}
			Global_2404956.f_1489 = get_network_time();
			Global_2404956.f_1483 = 7;
			switch (*uParam0.f_7)
			{
				case 0:
					_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_112(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
					_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404956.f_1483 == 7)
		{
			if (func_50(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2404956.f_1617[iVar17 /*3*/]) == 0f)
							{
								switch (*uParam0.f_7)
								{
									case 0:
										if (func_123(Global_2404956.f_1617[iVar17 /*3*/], *uParam0, *uParam0.f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 1:
										if (func_46(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 2:
										if (is_point_in_angled_area(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (*uParam0.f_7)
						{
							case 0:
								vVar1 = {*uParam0};
								break;
							
							case 1:
							case 2:
								vVar1 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
								break;
						}
						func_11(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = {vVar1};
					}
				}
				Global_2404956.f_1489 = get_network_time();
				if (!vmag(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						vVar1 = {*uParam1 - *(uParam2[iVar17 /*3*/])};
						*uParam2.f_10[iVar17] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2404956.f_1483 = 9;
			}
			else if (get_time_difference(get_network_time(), Global_2404956.f_1489) > 20000)
			{
				Global_2404956.f_1489 = get_network_time();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 8)
		{
			if (*uParam0.f_5)
			{
				if (func_10(Global_2404956.f_468))
				{
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_9(uParam2, &(Global_2404956.f_1509.f_6));
			}
			else
			{
				if (*uParam0.f_15)
				{
					iVar83 = false;
				}
				else
				{
					iVar83 = true;
				}
				*(uParam2[0 /*3*/]) = {Global_2404956.f_1484};
				func_11(uParam2[0 /*3*/], 0, iVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404956.f_1489 = get_network_time();
			Global_2404956.f_1483 = 9;
		}
		if (Global_2404956.f_1483 == 9)
		{
			Global_2404956.f_1482 = 0;
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_145();
			return true;
		}
		Global_2404956.f_1488 = get_network_time();
	}
	return false;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = {*(uParam1[iVar0 /*8*/].f_4)};
		*uParam0.f_10[iVar0] = *(uParam1[iVar0 /*8*/]).f_7;
		*uParam0.f_14[iVar0] = *uParam1[iVar0 /*8*/];
		iVar0++;
	}
}

bool func_10(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	vector3 vVar65;
	vector3 vVar68;
	vector3 vVar71;
	float fVar74;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	if (iParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!*uParam6.f_3)
	{
		if (*uParam5.f_5)
		{
			if (!*uParam5.f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (*uParam5.f_7)
				{
					case 0:
						vVar65 = {*uParam5};
						if (func_49(*uParam5.f_4) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_48(*uParam5.f_8, *uParam5.f_11, 0f) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_48(*uParam5.f_8, *uParam5.f_11, *uParam5.f_14) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_13(*uParam0, &vVar0, iVar64, iParam3, 1))
	{
	}
	else
	{
		iVar63 = true;
	}
	if (iVar63)
	{
		vVar0 = {*uParam0};
		Var4 = {*uParam6};
		Var4.f_8 = 1;
		Var4.f_3 = *uParam6.f_5;
		if (iParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = *uParam5.f_15;
		Var4.f_15 = iParam3;
		if (iParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = *uParam5.f_7;
			switch (*uParam5.f_7)
			{
				case 0:
					Var4.f_19 = {*uParam5};
					Var4.f_25 = *uParam5.f_4;
					break;
				
				case 1:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = *uParam5.f_14;
					break;
				}
		}
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = {*(uParam6.f_13[iVar62 /*3*/])};
			Var4.f_45[iVar62] = *uParam6.f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = *uParam6.f_23;
		Var4.f_55 = *uParam5.f_16;
		func_124(&vVar0, &uVar3, &Var4);
	}
	if (iParam4)
	{
		switch (*uParam5.f_7)
		{
			case 0:
				vVar68 = {*uParam5};
				fVar74 = *uParam5.f_4;
				break;
			
			case 1:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				break;
			
			case 2:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				fVar74 = *uParam5.f_14;
				break;
		}
		if (!func_12(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
		{
			if (func_13(*uParam0, &vVar0, iVar64, iParam3, 0))
			{
				if (!func_12(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
				{
					if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
					{
						vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
					}
					else
					{
						vVar0 = {vVar68};
					}
					if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
					{
						vVar0.z = uVar61;
					}
				}
			}
			else
			{
				if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
				{
					vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
				}
				else
				{
					vVar0 = {vVar68};
				}
				if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
				{
					vVar0.z = uVar61;
				}
			}
		}
	}
	*uParam0 = {vVar0};
	Global_2404956.f_603 = 1;
}

int func_12(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam3)
	{
		case 0:
			if (vdist(vParam0, vParam4) <= fParam10)
			{
				return true;
			}
			break;
		
		case 1:
			return func_46(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return false;
}

bool func_13(vector3 vParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_45(vParam0, uParam3))
	{
		if (func_14(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (get_safe_coord_for_ped(vParam0, 0, uParam3, iParam4))
	{
		if (func_14(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_14(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = vdist(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_23(Global_2404956.f_481, uParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_15(*uParam3, 1056964608))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_15(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_20(player_id(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_16(vParam0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
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
					if (func_16(vParam0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
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
					if (func_16(vParam0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
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

bool func_16(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	
	if (vdist(vParam0, vParam3) < func_19(iParam7, 1008981770))
	{
		vVar0 = {0f, 1f, 0f};
		func_18(&vVar0, 0f, 0f, fParam6);
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
		func_17(iParam7, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
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

void func_17(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

void func_18(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
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

float func_19(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_17(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = {vVar3 - vVar0};
	fVar9 = sqrt(vVar6.x * 0.5f * vVar6.x * 0.5f + vVar6.y * 0.5f * vVar6.y * 0.5f + vVar6.z * 0.5f * vVar6.z * 0.5f) + fParam1;
	return fVar9;
}

bool func_20(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_21(iParam0))
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

int func_21(var uParam0)
{
	return func_22(uParam0);
}

int func_22(var uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_23(vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (func_38(vParam0))
	{
		if (func_37(uParam3, iParam6, 0, 1))
		{
			if (iParam6)
			{
			}
			return true;
		}
	}
	if (func_26(uParam3, iParam6, 1))
	{
		if (iParam6)
		{
		}
		return true;
	}
	if (iParam7)
	{
		if (func_25(*uParam3, 1056964608))
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
				func_24(uParam3, *(uParam4[iVar0 /*3*/]), *uParam5[iVar0], 1036831949, 0);
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

void func_24(var uParam0, vector3 vParam1, float fParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = {*uParam0 - vParam1};
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	}
	else
	{
		vVar0 = {0f, 1f, 0f};
		func_18(&vVar0, 0f, 0f, get_random_float_in_range(0f, 360f));
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

bool func_25(vector3 vParam0, float fParam1)
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

bool func_26(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_34(*uParam0, &uVar0))
	{
		if (iParam1)
		{
			vVar2 = {*uParam0};
			func_28(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 0, iParam2);
			if (func_34(vVar2, &uVar1) || func_27(vVar2))
			{
				vVar2 = {*uParam0};
				func_28(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 1, iParam2);
			}
			*uParam0 = {vVar2};
		}
		return true;
	}
	return false;
}

bool func_27(vector3 vParam0)
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

void func_28(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam4)
	{
		switch (*uParam1.f_10)
		{
			case 0:
				*uParam0 = {func_33(*uParam0, *uParam1, 0f, 0f, 0f, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, 0, fParam2, iParam3)};
				break;
			
			case 1:
				*uParam0 = {func_33(*uParam0, *uParam1, *uParam1.f_3, 0f, 1, fParam2, iParam3)};
				break;
			
			case 2:
				*uParam0 = {func_33(*uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, 2, fParam2, iParam3)};
				break;
		}
	}
	else
	{
		switch (*uParam1.f_10)
		{
			case 0:
				func_24(uParam0, *uParam1, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, fParam2, iParam3);
				break;
			
			case 1:
				func_32(uParam0, *uParam1, *uParam1.f_3, fParam2, iParam3);
				break;
			
			case 2:
				func_29(uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, fParam2, iParam3);
				break;
			}
	}
}

void func_29(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	
	vVar0 = {vParam4 - vParam1};
	vVar0.z = 0f;
	vVar3 = {*uParam0 - vParam1};
	vVar3.z = 0f;
	vVar6 = {func_31(0f, 0f, 1f, vVar0)};
	vVar6 = {vVar6 / FtoV(vmag(vVar6))};
	fVar9 = vmag(vVar3) * sin(get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y));
	if (fVar9 < fParam7 * 0.5f)
	{
		if (!iParam9)
		{
			if (func_30(vVar6, vVar3) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_30(vVar6, vVar3) >= 0f)
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
		vVar6 = {func_31(0f, 0f, 1f, vVar0)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		vVar6 = {vVar6 * Vector(fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f)};
		vVar20 = {vVar17 - vVar6};
		vVar23 = {vVar17 + vVar6};
		vVar26 = {vVar23 - vVar20};
		vVar26.z = 0f;
		vVar29 = {*uParam0 - vVar20};
		vVar29.z = 0f;
		vVar6 = {func_31(0f, 0f, 1f, vVar26)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		fVar9 = vmag(vVar29) * sin(get_angle_between_2d_vectors(vVar26.x, vVar26.y, vVar29.x, vVar29.y));
		if (!iParam9)
		{
			if (func_30(vVar6, vVar29) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_30(vVar6, vVar29) >= 0f)
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

float func_30(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_31(vector3 vParam0, vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

void func_32(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, int iParam6)
{
	vector3 vVar0;
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

Vector3 func_33(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_24(&vParam0, vParam3, fParam9, fParam11, iParam12);
			break;
		
		case 1:
			func_32(&vParam0, vParam3, vParam6, fParam11, iParam12);
			break;
		
		case 2:
			func_29(&vParam0, vParam3, vParam6, fParam9, fParam11, iParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		get_nth_closest_vehicle_node(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_123(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_46(vVar1, vParam3, vParam6, 0, 0))
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

bool func_34(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_36();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_35(vParam0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_35(vector3 vParam0, var uParam1, float fParam2, int iParam3, int iParam4)
{
	switch (*uParam3.f_10)
	{
		case 0:
			return func_123(vParam0, *uParam3, *uParam3.f_6 + fParam4 + IntToFloat(Global_2404956.f_1714) * *uParam3.f_8, iParam5, iParam6);
			break;
		
		case 1:
			return func_46(vParam0, *uParam3 + Vector(fParam4 * -1f, fParam4 * -1f, fParam4 * -1f), *uParam3.f_3 + Vector(fParam4, fParam4, fParam4), iParam5, iParam6);
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

int func_36()
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

bool func_37(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!iParam2 || (iParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_35(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
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
							func_28(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, iParam3);
							if (func_37(&vVar1, 0, 0, 0))
							{
								vVar1 = {*uParam0};
								func_28(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
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

bool func_38(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_42(player_id(), 1))
		{
			return true;
		}
		if (!func_41(vParam0, 1008981770))
		{
			if (!func_37(&vParam0, 0, 0, 0))
			{
				return true;
			}
			else if (func_37(&vParam0, 0, 1, 0))
			{
				return true;
			}
		}
		else
		{
			iVar0 = func_40(vParam0, 1008981770);
			if (iVar0 > -1)
			{
				vVar1 = {func_39(&(Global_2404956.f_39[iVar0 /*12*/]))};
				if (!func_37(&vVar1, 0, 0, 0))
				{
					if (!func_37(&vParam0, 0, 0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_39(var uParam0)
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

int func_40(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_41(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_42(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_43(iParam0) != 0;
	}
	return func_20(iParam0, iParam1);
}

int func_43(int iParam0)
{
	if (func_44(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
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

bool func_45(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			fVar3 = vdist(Global_2404956.f_1281[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = {Global_2404956.f_1281[iVar1 /*4*/]};
			return true;
		}
	}
	return false;
}

bool func_46(vector3 vParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4)
{
	func_47(&vParam3, &vParam6);
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

void func_47(var uParam0, var uParam1)
{
	var uVar0;
	
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

bool func_48(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_49(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_50(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_2404956.f_1509.f_1 == 0 && Global_2404956.f_1509 == 0)
	{
		if (*uParam1.f_5 && !iParam3)
		{
			switch (_0x3C891A251567DFCE(&(Global_2404956.f_1509.f_1)))
			{
				case 0:
					func_110(uParam1, uParam2);
					if (!Global_2404956.f_1509.f_2)
					{
						if (*uParam2.f_7 && Global_2404956.f_512.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = {*uParam1};
							*uParam0.f_10[0] = *uParam1.f_3;
							return true;
						}
						else
						{
							if (*uParam1.f_21)
							{
								*(uParam0[0 /*3*/]) = {*uParam1.f_18};
							}
							else
							{
								*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
							}
							if (*uParam1.f_5 && func_10(Global_2404956.f_468))
							{
								if (!Global_2404956.f_1509.f_5)
								{
									Global_2404956.f_1509.f_5 = 1;
								}
								else
								{
									func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
							return true;
						}
					}
					break;
				
				case 1:
					func_110(uParam1, uParam2);
					break;
				
				case 2:
					return false;
					break;
				
				case 3:
					return false;
					break;
			}
		}
		else if (_0x3C67506996001F5E())
		{
			if (!_0xF445DE8DA80A1792())
			{
				if (_0xA586FBEB32A53DBB())
				{
					func_110(uParam1, uParam2);
					Global_2404956.f_1509.f_1 = _0xA635C11B8C44AFC2();
				}
				else
				{
					return false;
				}
			}
			else
			{
				_0xFEE4A5459472A9F8();
				func_110(uParam1, uParam2);
				if (!Global_2404956.f_1509.f_2)
				{
					Global_2404956.f_1509.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (*uParam1.f_5)
	{
		func_107(Global_2404956.f_512, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64));
	}
	if (*uParam2.f_7 && !Global_2404956.f_1509.f_4)
	{
		Global_2404956.f_1509.f_4 = 1;
		func_55(*uParam1, *uParam1.f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (*uParam1.f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404956.f_1509.f_1 > 0 || Global_2404956.f_1509 > 0)
	{
		if (*uParam1.f_5 || _0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404956.f_1509.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404956.f_1509.f_3)
					{
						iVar4 = Global_2404956.f_1509.f_3 + 1;
					}
					if (iVar4 > Global_2404956.f_1509.f_1 - 1)
					{
						iVar4 = Global_2404956.f_1509.f_1 - 1;
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (*uParam1.f_5 && !iParam3)
					{
						network_get_respawn_result(iVar4, &vVar0, &fVar3);
						fVar3 *= 57.29578f;
					}
					else
					{
						_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (*uParam1.f_5 && !iParam3)
					{
						iVar5 = _0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_55(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404956.f_1509.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404956.f_1509.f_1;
		}
		if (Global_2404956.f_1509.f_1 == iVar4)
		{
			if (*uParam1.f_5 && func_10(Global_2404956.f_468))
			{
				if (Global_2404956.f_1509.f_2)
				{
					func_9(uParam0, &(Global_2404956.f_1509.f_6));
					func_54(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_9(uParam0, &(Global_2404956.f_1509.f_6));
				func_54(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (*uParam1.f_5)
			{
				iVar4 = get_random_int_in_range(0, Global_2404956.f_1509.f_1);
				network_get_respawn_result(iVar4, uParam0[0 /*3*/], uParam0.f_10[0]);
				if (!func_51(uParam0[0 /*3*/], 0))
				{
					*uParam0.f_10[0] *= 57.29578f;
					func_54(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
				func_54(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
		if (*uParam1.f_5 && func_10(Global_2404956.f_468))
		{
			if (!Global_2404956.f_1509.f_5)
			{
				Global_2404956.f_1509.f_5 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (*uParam1.f_15)
			{
				iVar8 = false;
			}
			else
			{
				iVar8 = true;
			}
			func_11(uParam0[0 /*3*/], 0, iVar8, 0, 0, uParam1, uParam2);
		}
		*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
		func_54(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

bool func_51(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	
	vVar1 = {*uParam0};
	uVar4 = func_53(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2408374[uVar4])
	{
		if (func_52(vVar1, &(Global_2407545[uVar4 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_29(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408374[8])
	{
		if (func_52(vVar1, &(Global_2407545[8 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_29(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_52(vector3 vParam0, var uParam1)
{
	return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
}

int func_53(struct<2> Param0, var uParam1)
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

void func_54(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404956.f_1617[3 - iVar0 /*3*/] = {Global_2404956.f_1617[3 - iVar0 + 1 /*3*/]};
		}
		iVar0++;
	}
	Global_2404956.f_1617[0 /*3*/] = {vParam0};
}

void func_55(vector3 vParam0, Vector3 fParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	int iVar24;
	int iVar25;
	
	iVar9 = false;
	iVar7 = 0;
	iVar8 = false;
	if (*uParam4.f_5)
	{
		if (Global_2404956.f_468 == 1)
		{
			if (absf(Global_2404956.f_481.f_2 - vParam0.z) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (*uParam4.f_5)
	{
		if (func_104(player_id()))
		{
			if (iParam7 == -1)
			{
				iVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				iVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (*uParam4.f_5 && *uParam4.f_6)
	{
		if (!func_103(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (*uParam4.f_5)
	{
		if (!_0x68772DB2B2526F9F(player_ped_id(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!_0x68772DB2B2526F9F(player_ped_id(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (*uParam4.f_5)
	{
		if (!func_102(vParam0, *uParam5.f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	iVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (vmag(*(uParam5.f_13[iVar10 /*3*/])) > 0f)
		{
			if (!vdist(vParam0, *(uParam5.f_13[iVar10 /*3*/])) > *uParam5.f_20[iVar10])
			{
				iVar14 = false;
			}
		}
		iVar10++;
	}
	if (iVar14)
	{
		iVar7 += 256;
	}
	if (*uParam4.f_5)
	{
		if (func_96(vParam0, fParam3, *uParam4.f_15, func_101(1), *uParam4.f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404956.f_1;
		}
	}
	else if (!func_93(vParam0, 25f, player_id(), 1, 1))
	{
		if (*uParam4.f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_92(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_92(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (*uParam4.f_5)
	{
		if (!Global_2404956.f_625)
		{
			vVar11 = {Global_2404956.f_481};
			if (Global_2404956.f_468 == 26)
			{
				vVar11 = {Global_2404956.f_512.f_18};
			}
			if (func_38(vVar11))
			{
				if ((!func_37(&vParam0, 0, 0, 0) && !func_26(&vParam0, 0, 0)) && !func_91(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_26(&vParam0, 0, 0) && !func_91(&vParam0, 0)) && !func_25(vParam0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_90(vParam0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (*uParam4.f_5)
	{
		if (!(func_89(player_id()) && func_87(player_id())))
		{
			if (!func_86(&vParam0, &(Global_2404956.f_1509.f_64), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (*uParam4.f_5)
	{
		if (!func_87(player_id()))
		{
			if (!func_85(vParam0, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_84(vParam0))
	{
		if (*uParam4.f_5)
		{
			if (func_84(vParam0))
			{
				if (func_10(Global_2404956.f_468))
				{
					if (func_41(vParam0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (*uParam4.f_5)
	{
		if (func_83(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404956.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (*uParam4.f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (is_valid_interior(get_interior_at_coords(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (is_valid_interior(get_interior_at_coords(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_51(&vParam0, 0))
	{
		iVar7 += 32768;
	}
	else
	{
		iVar7 = -1;
	}
	if (func_15(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (*uParam4.f_5)
	{
	}
	else if (func_82(vParam0, 1, 0, *uParam4.f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	iVar24 = false;
	iVar25 = false;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (iVar7 >= Global_2404956.f_1509.f_6[iVar15 /*8*/])
		{
			if (*uParam4.f_5)
			{
				if (!iVar24)
				{
					if (iParam6)
					{
						*uParam5.f_4 = 0;
						iVar4 = false;
					}
					else
					{
						iVar4 = true;
					}
					if (*uParam4.f_21)
					{
						fVar0 = func_74(vParam0, *uParam4.f_18, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					else
					{
						fVar0 = func_74(vParam0, Global_2404956.f_1484, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					if (iVar8)
					{
						fVar0 *= 3f;
					}
					iVar24 = true;
				}
				if ((func_10(Global_2404956.f_468) && iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!iVar25)
					{
						fVar2 = func_72(vParam0);
						iVar25 = true;
					}
					if (fVar2 < Global_2404956.f_1509.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = {vParam0};
						Var16.f_7 = fParam3;
						Var16 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_71(Var16, iVar15);
						Global_2404956.f_1509.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar0 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_1 = fVar0;
					func_71(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
			else
			{
				if (!iVar24)
				{
					if (*uParam4.f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_70(vParam0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_57(vParam0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_56(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_56(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					iVar24 = true;
				}
				if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar3 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_3 = fVar3;
					func_71(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
		}
		iVar15++;
	}
}

float func_56(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = fParam3 * 0.5f;
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = fParam4 + 1f - fParam4 - 1f - fParam4 * fParam2 - fParam0 / fParam2 - fParam1;
		}
		else
		{
			fVar0 = fParam5 + 1f - fParam5 - 1f - fParam5 * fParam0 - fParam2 / fParam3 - fParam2;
		}
	}
	else
	{
		fVar0 = fParam4 + fParam0 - fParam1 / fParam3 - fParam1 * fParam5 - fParam4;
	}
	return fVar0;
}

float func_57(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	iVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_44(iVar11, 1, 1))
		{
			if (!iVar11 == player_id() || iParam5 == 1)
			{
				iVar4 = false;
				if (iParam3)
				{
					if (func_60(iVar11))
					{
						iVar4 = true;
					}
				}
				if (iParam4)
				{
					if (get_player_team(iVar11) == get_player_team(player_id()))
					{
						if (!get_player_team(iVar11) == -1 || !func_42(player_id(), 1))
						{
							iVar4 = true;
						}
					}
				}
				if (iVar4)
				{
					if (_0x9DE986FC9A87C474(player_id(), iVar11) || !iParam6)
					{
						if (func_59(iVar11))
						{
							vVar5 = {func_58(iVar11)};
							if (!iVar11 == player_id())
							{
								vVar8 = {unk_0x64D779659BC37B19(get_player_ped(iVar11))};
							}
							else
							{
								vVar8 = {vVar5};
							}
							if (!iParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = get_distance_between_coords(vParam0, vVar5, 1);
							fVar2 = get_distance_between_coords(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_58(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_59(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_60(int iParam0)
{
	if (func_44(iParam0, 0, 1))
	{
		if (!func_68(iParam0))
		{
			if (_0x9DE986FC9A87C474(player_id(), iParam0))
			{
				if (!get_player_team(iParam0) == get_player_team(player_id()))
				{
					if (func_20(player_id(), 1))
					{
						if (!func_67(get_player_team(iParam0), get_player_team(player_id()), 0))
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
					if (!func_20(player_id(), 1))
					{
						if (!func_61(iParam0))
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

bool func_61(int iParam0)
{
	if (func_66(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_65(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_62(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_63()
{
	return -1;
}

int func_64(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_63();
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_66(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_65(iParam0)};
		Global_2459453 = {func_65(iParam1)};
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

int func_67(int iParam0, int iParam1, int iParam2)
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

bool func_68(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return true;
	}
	if (func_69())
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

int func_69()
{
	return is_bit_set(Global_2359301, 3);
}

float func_70(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !iParam6)
	{
		if (func_44(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				if (is_sphere_visible(vParam0, fParam3))
				{
					fVar4 = vdist2(vParam0, get_entity_coords(player_ped_id(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						iVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_44(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if (func_59(iVar1) || !iParam8)
					{
						if (!iParam6)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										iVar2 = true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam7 || get_player_team(iVar1) == -1)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									iVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_71(struct<8> Param0, int iParam1)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = {Global_2404956.f_1509.f_6[iParam8 /*8*/]};
	Global_2404956.f_1509.f_6[iParam8 /*8*/] = {Param0};
	if (iParam8 < 2)
	{
		func_71(Var0, iParam8 + 1);
	}
}

float func_72(vector3 vParam0)
{
	var uVar0;
	
	return func_73(vParam0, &(Global_2404956.f_39), &uVar0);
}

float func_73(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (*(uParam3[iVar0 /*12*/]).f_9)
		{
			fVar1 = 0f;
			switch (*(uParam3[iVar0 /*12*/]).f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 -= *(uParam3[iVar0 /*12*/]).f_6 + IntToFloat(Global_2404956.f_1714) * *(uParam3[iVar0 /*12*/]).f_8;
					break;
				
				case 1:
				case 2:
					if (vParam0.x < *uParam3[iVar0 /*12*/])
					{
						fVar1 += *uParam3[iVar0 /*12*/] - vParam0.x;
					}
					else if (vParam0.x > *(uParam3[iVar0 /*12*/]).f_3)
					{
						fVar1 += vParam0.x - *(uParam3[iVar0 /*12*/]).f_3;
					}
					if (vParam0.y < *(uParam3[iVar0 /*12*/]).f_1)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_1 - vParam0.y;
					}
					else if (vParam0.y > *(uParam3[iVar0 /*12*/].f_3).f_1)
					{
						fVar1 += vParam0.y - *(uParam3[iVar0 /*12*/].f_3).f_1;
					}
					if (vParam0.z < *(uParam3[iVar0 /*12*/]).f_2)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_2 - vParam0.z;
					}
					else if (vParam0.z > *(uParam3[iVar0 /*12*/].f_3).f_2)
					{
						fVar1 += vParam0.z - *(uParam3[iVar0 /*12*/].f_3).f_2;
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_74(vector3 vParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = to_float(iParam9) / to_float(8);
	}
	if (iParam6)
	{
		fVar0 = func_56(vdist(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 *= fVar0 * 0.95f;
	}
	fVar0 = func_56(func_57(vParam0, 1, 0, 0, 1), 0f, func_81(), func_79(), 0f, 0.3f);
	fVar1 *= fVar0 * 0.95f;
	fVar0 = func_56(func_77(vParam0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 *= fVar0 * 0.95f;
	fVar4 = 100f;
	if (get_player_team(player_id()) == -1 && !func_42(player_id(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_56(func_76(vParam0, player_id(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 *= fVar0 * 0.95f;
	if (iParam7)
	{
		if (func_75(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_56(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 += func_56(fVar3, 0f, 0f, 6f, 1f, 0.5f);
			fVar0 *= 0.5f;
			fVar1 *= fVar0 * 0.85f;
		}
	}
	if (iParam8)
	{
		fVar0 = func_56(vdist(Global_2404956.f_481, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 *= fVar0 * 0.9f;
	}
	return fVar1;
}

bool func_75(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar3 = get_nth_closest_vehicle_node_id_with_heading(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (is_vehicle_node_id_valid(iVar3))
	{
		get_vehicle_node_position(iVar3, &vVar0);
		*uParam3 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = absf(vParam0.z - vVar0.z);
		return true;
	}
	return false;
}

float func_76(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_44(iVar3, 0, 1))
			{
				if (get_player_team(iVar3) != get_player_team(iParam3) || (get_player_team(iVar3) == -1 && get_player_team(iParam3) == -1))
				{
					if (Global_2413760.f_260[iVar2])
					{
						fVar1 = vdist(Global_2413760.f_130[iVar2 /*3*/], vParam0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_77(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var[] uVar6 = new var[32];
	int iVar39;
	
	iVar39 = get_ped_nearby_peds(player_ped_id(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (does_entity_exist(uVar6[iVar2]))
		{
			if (!is_entity_dead(uVar6[iVar2], 0))
			{
				if (func_78(uVar6[iVar2]))
				{
					vVar3 = {get_entity_coords(uVar6[iVar2], 1)};
					fVar1 = get_distance_between_coords(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

bool func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_ped_relationship_group_hash(iParam0);
	switch (get_relationship_between_groups(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	switch (get_relationship_between_groups(iVar0, Global_1574198[player_id()]))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	if (Global_1587523[player_id() /*444*/] == 0)
	{
		iVar1 = get_player_team(player_id());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (get_relationship_between_groups(iVar0, Global_1573909[iVar1]))
			{
				case 3:
				case 5:
					return true;
					break;
				}
			}
	}
	return false;
}

float func_79()
{
	if (func_80())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_80()
{
	if (Global_2404956.f_39.f_65 && !Global_2404956.f_39.f_295)
	{
		if (!func_68(player_id()))
		{
			return true;
		}
	}
	return false;
}

float func_81()
{
	if (func_80())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_82(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (iParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && is_any_vehicle_near_point(vParam0, fParam7)) || (fVar0 > 0f && is_any_ped_near_point(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && is_any_object_near_point(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && is_any_object_near_point(vParam0, fParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_83(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2404956.f_39.f_55)
	{
		if (is_valid_interior(Global_2404956.f_39.f_56))
		{
			if (!_are_coords_colliding_with_exterior(vParam0))
			{
				iVar0 = get_interior_at_coords(vParam0);
				if (is_valid_interior(iVar0))
				{
					iVar1 = get_interior_group_id(iVar0);
					if (!iVar1 == Global_2404956.f_39.f_57)
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
		}
	}
	return true;
}

int func_84(vector3 vParam0)
{
	switch (Global_2404956.f_1505)
	{
		case 0:
			return func_123(vParam0, Global_2404956.f_1484, Global_2404956.f_1487, 0, 0);
			break;
		
		case 1:
			return func_46(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, Global_2404956.f_1504, 0, true);
			break;
	}
	return false;
}

bool func_85(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = *(uParam3[iVar1 /*4*/]).f_3 + fParam5;
		if (vdist(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = {0f, 0f, 0f};
	vVar5 = {0f, 0f, 0f};
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = {*(uParam4[iVar1 /*10*/])};
		vVar5 = {*(uParam4[iVar1 /*10*/].f_3)};
		fVar8 = *(uParam4[iVar1 /*10*/]).f_6;
		if (is_point_in_angled_area(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_86(var uParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist(*(uParam1[iVar0 /*10*/].f_7), *uParam0) < 80f * fParam3)
		{
			if (iParam2)
			{
				vVar1 = {*uParam0};
				func_24(&vVar1, *(uParam1[iVar0 /*10*/].f_7), 80f, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_87(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_88(iParam0))
			{
				if (Global_1587523[iParam0 /*444*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_88(var uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180 != 0;
}

bool func_89(int iParam0)
{
	if (func_20(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_90(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (vdist2(Global_2404956.f_1617[iVar0 /*3*/], vParam0) < fParam3 * fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_91(var uParam0, int iParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if (func_27(*uParam0))
	{
		if (iParam1)
		{
			vVar1 = {*uParam0};
			func_24(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_34(vVar1, &uVar0) || func_27(vVar1))
			{
				vVar1 = {*uParam0};
				func_24(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = {vVar1};
		}
	}
	return false;
}

bool func_92(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_44(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_58(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_44(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_59(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_58(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (get_distance_between_coords(func_58(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_93(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_95(vParam0, fParam3, iParam4, iParam5, 0) || func_94(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

bool func_94(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_16(vParam0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_44(iVar1, 0, 1) && func_44(iParam3, 0, 1))
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

bool func_95(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_44(iVar1, 0, 1) && func_44(iParam4, 0, 1))
				{
					if (get_player_team(iVar1) == get_player_team(iParam4))
					{
						return false;
					}
				}
			}
			if (func_44(iVar1, 0, 1) && func_44(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
					{
						return true;
					}
				}
				else if (vdist(func_58(iVar1), vParam0) < fParam3)
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
			else if (func_44(iVar1, 0, 1))
			{
				if (vdist(func_58(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_96(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, int iParam12)
{
	Global_2404956.f_1 = 0;
	if (!func_93(vParam0, 0.5f, player_id(), 0, 0))
	{
		Global_2404956.f_1++;
		if (iParam5)
		{
			if (func_144(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_100(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_15(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (!iParam4)
		{
			if (func_144(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_100(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_97(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404956.f_1++;
						if (!func_15(vParam0, 1056964608))
						{
							Global_2404956.f_1++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (func_144(vParam0, 6f, 5f, 5f, 5f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
		{
			Global_2404956.f_1 += Global_2404956;
			if (!func_100(vParam0, fParam12))
			{
				Global_2404956.f_1++;
				if (!func_97(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404956.f_1++;
					if (!func_15(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2404956.f_1 += Global_2404956;
		}
	}
	return false;
}

bool func_97(vector3 vParam0, Vector3 fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!player_id() == iVar1)
		{
			if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (!func_99(player_id(), iVar1, -2, 0))
				{
					if (func_98(func_58(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
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

int func_98(vector3 vParam0, vector3 vParam1, Vector3 fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	
	fParam6 *= -1f;
	fParam6 += 360f;
	vVar0.x = sin(fParam6);
	vVar0.y = cos(fParam6);
	vVar0.z = 0f;
	vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	vVar0 = {vVar0 * Vector(fParam7, fParam7, fParam7)};
	vVar3 = {vParam3 + vVar0};
	vVar3.z = vParam3.z;
	vVar3.z += fParam9;
	vParam3.z += fParam9;
	return is_point_in_angled_area(vParam0, vParam3, vVar3, fParam8, 0, true);
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

bool func_100(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
		{
			if ((get_player_team(player_id()) == -1 && get_player_team(iVar1) == -1) && !func_42(player_id(), 1))
			{
				return false;
			}
			else if ((get_player_team(player_id()) == -1 && !player_id() == iVar1) || !func_99(player_id(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_58(iVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_101(int iParam0)
{
	if ((Global_2404956.f_468 == 9 || Global_2404956.f_468 == 9) || (Global_2404956.f_468 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_102(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_44(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_59(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam9) && iParam6) && func_61(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_58(iVar1), vParam0, 1) < fParam3)
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

bool func_103(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = get_player_team(player_id());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_44(iVar1, 1, 1))
			{
				if ((!func_120(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1)) && iVar1 != player_id())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!get_player_team(iVar1) == -1)
						{
							if (get_player_team(iVar1) == get_player_team(player_id()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (get_player_team(iVar1) == iVar3)
					{
						if (get_distance_between_coords(func_58(iVar1), vParam0, 1) <= fVar2 + fParam3)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_104(int iParam0)
{
	if ((func_42(iParam0, 1) || func_106(iParam0)) || func_105(iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_105(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

void func_107(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	vector3 vVar16;
	vector3 vVar19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = {Var2};
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = {Var6};
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!is_bit_set(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam3[iVar0 /*4*/])) == 0f || vdist(Global_2359718[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var2 = {Global_2359718[iVar1 /*26*/].f_3};
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_109(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar16 = {Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f)};
			vVar19 = {*(uParam4[iVar0 /*10*/]) + *(uParam4[iVar0 /*10*/].f_3) * Vector(0.5f, 0.5f, 0.5f)};
			if (vmag(*(uParam4[iVar0 /*10*/])) == 0f || vdist(vVar16, vParam0) < vdist(vVar19, vParam0))
			{
				Var6 = {Global_1311025[iVar1 /*8*/].f_1};
				Var6.f_3 = {Global_1311025[iVar1 /*8*/].f_4};
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = {Global_2359394[iVar1 /*3*/]};
				func_108(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_108(var uParam0, var uParam1, int iParam2)
{
	Global_2409351 = {*(uParam1[iParam2 /*10*/])};
	*(uParam1[iParam2 /*10*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_108(&Global_2409351, uParam1, iParam2 + 1);
	}
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	Global_2409347 = {*(uParam1[iParam2 /*4*/])};
	*(uParam1[iParam2 /*4*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_109(&Global_2409347, uParam1, iParam2 + 1);
	}
}

void func_110(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	Vector3 fVar4;
	
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			if (func_111(Global_2404956.f_1281[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404956.f_1281[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = {*uParam1 - Global_2404956.f_1281[iVar0 /*4*/]};
					fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
				}
				func_55(Global_2404956.f_1281[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404956.f_1509++;
			}
			iVar0++;
		}
	}
}

int func_111(vector3 vParam0, var uParam1)
{
	switch (*uParam3.f_7)
	{
		case 0:
			return func_12(vParam0, *uParam3.f_7, *uParam3, 0f, 0f, 0f, *uParam3.f_4);
		
		case 1:
		case 2:
			return func_12(vParam0, *uParam3.f_7, *uParam3.f_8, *uParam3.f_11, *uParam3.f_14);
		
		default:
	}
	return false;
}

void func_112(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_47(&vParam0, &vParam3);
	fVar0 = vParam3.x - vParam0.x;
	*uParam6 = vParam0.x + fVar0 * 0.5f;
	*uParam6.f_1 = vParam0.y;
	*uParam6.f_2 = vParam0.z;
	*uParam7 = *uParam6;
	*uParam7.f_1 = vParam3.y;
	*uParam7.f_2 = vParam3.z;
	*uParam8 = fVar0 * 0.5f;
}

void func_113()
{
	func_117();
	func_116();
	func_115();
	func_114();
}

void func_114()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404956.f_1509.f_64[iVar10 /*10*/] = {Var0};
		iVar10++;
	}
}

void func_115()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404956.f_1509.f_31[iVar4 /*4*/] = {Var0};
		iVar4++;
	}
}

void func_116()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404956.f_1509.f_6[iVar8 /*8*/] = {Var0};
		iVar8++;
	}
}

void func_117()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404956.f_1509 = {Var0};
}

var func_118()
{
	return Global_1310987.f_4;
}

void func_119(float fParam0, float fParam1)
{
	func_145();
	func_143(fParam0, fParam1);
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_121(-1, 0) == 8;
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

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_122();
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

var func_122()
{
	return Global_1312747;
}

int func_123(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
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

void func_124(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_142(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_125(uParam0, uParam1, uParam2);
	}
}

void func_125(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
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
	vector3 vVar25;
	var uVar28;
	vector3 vVar29;
	float fVar32;
	int iVar33;
	
	iVar0 = 0;
	if (!vmag(*uParam2.f_35) > 0f)
	{
		*uParam2.f_35 = {*uParam0};
	}
	if (*uParam2.f_15)
	{
		if (func_23(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
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
		if (func_141(uParam0, 1))
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
					if (!func_91(&vVar1, 0))
					{
						if ((*uParam2.f_13 || uVar7 & 64 == 0) || *uParam2.f_33 == 1)
						{
							if (*uParam2.f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_140(vVar1))
									{
										if (!func_15(vVar1, 5f))
										{
											if (vVar1.z >= *uParam2.f_35.f_2 - *uParam2.f_7 || *uParam2.f_33 >= 2)
											{
												if (vVar1.z <= *uParam2.f_35.f_2 + *uParam2.f_6 || *uParam2.f_33 >= 2)
												{
													if (func_139(vVar1, uParam2) || *uParam2.f_33 >= 2)
													{
														if ((*uParam2.f_48 && !func_141(&vVar1, 0)) || *uParam2.f_48 == 0)
														{
															vVar1 = {func_137(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, iVar12, 1, *uParam2.f_51)};
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
																	if ((*uParam2.f_12 && !func_132(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
																	{
																		if (!*uParam2.f_15 || !func_23(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
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
																					if (func_144(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_144(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_130(vVar1, *uParam2.f_54, &fVar23);
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
																												func_129(vVar1, fVar4, iVar16);
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
																								if (func_139(vVar1, uParam2))
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
							func_127(0, uParam2);
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
						func_125(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = get_random_int_in_range(1 + iVar15, 40 + iVar15);
						get_nth_closest_vehicle_node_with_heading(*uParam0, iVar0, &vVar1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						vVar1 = {func_137(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, 0, 0, *uParam2.f_51)};
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
						if (func_23(*uParam2.f_35, &vVar29, uParam2.f_38, uParam2.f_45, iVar33, 1) || func_141(&vVar29, iVar33))
						{
							if (!*uParam2.f_50)
							{
								*uParam2.f_33 = 0;
								*uParam2.f_50 = 1;
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								*uParam2.f_6 = 9999.9f;
								*uParam2.f_7 = 9999.9f;
								func_125(uParam0, uParam1, uParam2);
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
				func_125(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_126(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_126(var uParam0, var uParam1, var uParam2, vector3 vParam3)
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
			if (!func_93(*(uParam0[iVar2 /*4*/]), 5f, player_id(), 0, 0))
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

void func_127(int iParam0, var uParam1)
{
	if (!func_139(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162--;
		func_128(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_127(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_127(iParam0 + 1, uParam1);
	}
}

void func_128(int iParam0)
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

void func_129(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = {Global_2409361[iParam4 /*3*/]};
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = {vParam0};
	Global_2409361.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_129(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_130(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_60(iVar5))
		{
			vVar1 = {func_58(iVar5)};
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

bool func_131(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && player_id() != iVar1) || iParam9 == 0)
		{
			if (func_44(iVar1, iParam5, iParam6))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam8 || (!is_ped_injured(get_player_ped(iVar1)) && func_59(iVar1)))
					{
						if ((!iParam7 || (iParam7 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam10) && iParam7) && func_61(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (func_16(func_58(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

bool func_132(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_136(vParam0, fParam3, iParam4, iParam5, iParam6) || func_133(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

bool func_133(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_135(vParam0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_134(vParam0, fParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_44(iVar1, 0, 1) && func_44(iParam5, 0, 1))
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

bool func_134(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5)
{
	int iVar0;
	vector3[] vVar1 = new vector3[4];
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_16(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return true;
	}
	func_17(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	fVar20 = absf(vVar17.y - vVar14.y);
	fVar21 = absf(vVar17.x - vVar14.x);
	fVar22 = absf(vVar17.z - vVar14.z);
	vVar23 = {0f, fVar20 * 0.5f, 0f};
	func_18(&vVar23, 0f, 0f, fParam3);
	vVar26 = {fVar21 * 0.5f, 0f, 0f};
	func_18(&vVar26, 0f, 0f, fParam3);
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
		if (func_16(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_135(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_19(iParam3, 1008981770);
	fVar1 = func_19(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < fVar0 + fVar1)
	{
		return true;
	}
	return false;
}

bool func_136(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_44(iVar1, 0, 1) && func_44(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_16(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
				else if (func_16(func_58(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_16(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (func_44(iVar1, 0, 0))
			{
				if (does_entity_exist(get_player_ped(iVar1)))
				{
					if (func_16(func_58(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

Vector3 func_137(vector3 vParam0, float fParam1, int iParam2, int iParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	
	if (iParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_138(vParam0, *fParam3, vParam6))
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
				func_17(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_138(vParam0, *fParam3, vParam6))
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
				func_17(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

bool func_138(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = {0f, 1f, 0f};
	func_18(&vVar0, 0f, 0f, fParam3);
	vVar3 = {vParam4 - vParam0};
	if (func_30(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_139(vector3 vParam0, var uParam1)
{
	if (*uParam3.f_18)
	{
		switch (*uParam3.f_26)
		{
			case 0:
				if (func_123(vParam0, *uParam3.f_19, *uParam3.f_25, 0, 0))
				{
					return true;
				}
				break;
			
			case 1:
				if (func_46(vParam0, *uParam3.f_19, *uParam3.f_22, 0, 0))
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

bool func_140(vector3 vParam0)
{
	int iVar0;
	var uVar1;
	
	uVar1 = func_53(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[uVar1])
	{
		if (func_52(vParam0, &(Global_2408393[uVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_52(vParam0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_141(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_123(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 1:
				if (func_46(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
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
				*uParam0 = {func_33(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0)};
			}
		}
	}
	return iVar0;
}

int func_142(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
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
	vector3 vVar14;
	var uVar17;
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!vmag(*uParam2.f_35) > 0f)
		{
			*uParam2.f_35 = {*uParam0};
		}
		if (*uParam2.f_15)
		{
			if (func_23(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		if (*uParam2.f_48)
		{
			if (func_141(uParam0, 1))
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
					if ((*uParam2.f_12 && !func_132(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
					{
						if (!*uParam2.f_15 || !func_23(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
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
									if (func_144(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
									{
										iVar10 = true;
									}
								}
								else if (func_144(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_130(vVar1, *uParam2.f_54, &fVar12);
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
																func_129(vVar1, fVar4, iVar5);
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
					func_127(0, uParam2);
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
				return func_142(uParam0, uParam1, uParam2);
			}
			else
			{
				*uParam2.f_33 = 0;
				func_125(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_143(float fParam0, float fParam1)
{
	add_navmesh_required_region(fParam0, fParam1, 0.1f);
	Global_2404956.f_1492 = get_id_of_this_thread();
	Global_2404956.f_1490 = 1;
	Global_2404956.f_1493 = get_network_time();
}

bool func_144(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_102(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_92(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

void func_145()
{
	if (Global_2404956.f_1490)
	{
		if (get_id_of_this_thread() == Global_2404956.f_1492)
		{
			remove_navmesh_required_regions();
		}
		else
		{
			remove_navmesh_required_regions();
		}
		Global_2404956.f_1490 = 0;
	}
}

int func_146(int iParam0)
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

bool func_147(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	struct<11> Var0;
	struct<18> Var18;
	vector3 vVar44;
	
	if (Param6.f_5 > fParam3 - 20f)
	{
		Param6.f_5 = fParam3 - 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = {vParam0};
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_8(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			vVar44 = {vParam0 - Var0[0 /*3*/]};
			if (vVar44.z > Param6.f_12)
			{
				Var0[0 /*3*/] = {vParam0};
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = {Var0[0 /*3*/]};
		*uParam5 = Var0.f_10[0];
		return true;
	}
	return false;
}

bool func_148(var uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_149(var uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_150(uParam0, 0, 0);
		}
	}
}

void func_150(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = _0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

void func_151()
{
	switch (vLocal_67[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_185();
			func_184();
			if (func_173())
			{
				func_171();
				func_170();
				func_152(35);
				vLocal_67[participant_id_to_int() /*3*/].f_2 = 1;
			}
			else if (Local_56.f_8 >= 1)
			{
				func_170();
				vLocal_67[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_56.f_8 >= 2)
			{
				vLocal_67[participant_id_to_int() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6904)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar2 /*3*/].f_1)
			{
				func_165(iVar2, 1);
				set_bit(&Global_2459552, 8 + iVar2);
				func_160(2102, -1);
				func_156(67, -1);
				func_160(2559, -1);
				func_156(69, -1);
				_0xA071E0ED98F91286(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!is_bit_set(Global_2459552, 12))
					{
						func_153(7, 0);
					}
					else
					{
						func_153(15, 0);
					}
				}
			}
		}
	}
}

void func_153(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_155(iParam0, iParam1))
	{
		uVar0 = func_154();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_155(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_158(iParam0, func_159(iParam1));
	iVar0++;
	func_157(iParam0, iVar0, iParam1);
}

void func_157(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_159(uParam2)];
	stat_set_int(iVar0, iParam1, 1);
}

int func_158(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_159(uParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_122();
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

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_164(iParam0, func_159(iParam1), 0);
	iVar0++;
	if (!func_163(iParam0))
	{
		func_162(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_161(iParam0, iVar0, iParam1, 1);
	}
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_159(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_159(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_159(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_159(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_159(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_159(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_159(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_159(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_159(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_159(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_159(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_159(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_159(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_159(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_159(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_159(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_159(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_159(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_159(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_159(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_159(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_159(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_159(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_159(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_159(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_159(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_159(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_159(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_159(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_159(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_159(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

bool func_163(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

int func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_169() /*10375*/].f_7704.f_2158[iParam0 /*3*/].f_1 = iParam1;
		func_166(func_168(iParam0), iParam1, -1, 1);
	}
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_167())
	{
		iVar0 = Global_2490231[uParam0 /*5*/][func_159(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_167()
{
	return true;
	return false;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_169()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_170()
{
	if (does_blip_exist(iLocal_166))
	{
		remove_blip(&iLocal_166);
	}
}

void func_171()
{
	if (!is_bit_set(Global_2428492.f_3317, false))
	{
		set_bit(&(Global_2428492.f_3317), false);
		func_172();
	}
	else
	{
		set_bit(&(Global_2428492.f_3317), true);
	}
}

void func_172()
{
	func_160(1181, -1);
}

bool func_173()
{
	struct<14> Var0;
	
	if (network_does_network_id_exist(Local_56.f_2))
	{
		if (is_entity_attached_to_entity(net_to_obj(Local_56.f_2), player_ped_id()) && func_183(Local_56.f_2))
		{
			func_182(&(Local_56.f_2));
			if (does_blip_exist(iLocal_166))
			{
				remove_blip(&iLocal_166);
			}
			if (!func_181(1))
			{
				func_176("ABB_BOXCT", 1);
			}
			Var0.f_2 = 108;
			Var0.f_10 = player_id();
			Var0.f_3 = uLocal_165;
			func_174(Var0, func_175(1));
			set_bit(&(vLocal_67[participant_id_to_int() /*3*/].f_1), false);
			return true;
		}
	}
	return false;
}

void func_174(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

var func_175(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_44(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					set_bit(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_176(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_177(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_177(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_180() || !network_is_activity_session()) || !func_120(player_id(), 0))
	{
		return;
	}
	iVar0 = func_178(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_179(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_180()
{
	return is_dlc_present(-1762644250);
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1609015 > 0;
		
		case 2:
			return Global_1609015.f_1 > 0;
		
		case 3:
			return Global_1609015.f_2 > 0;
		
		case 4:
			return Global_1609015.f_3 > 0;
		
		default:
	}
	return false;
}

void func_182(var uParam0)
{
	int iVar0;
	
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
		}
	}
	if (network_does_entity_exist_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		delete_entity(&iVar0);
	}
}

int func_183(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

void func_184()
{
	if (!does_blip_exist(iLocal_166))
	{
		if (network_does_network_id_exist(Local_56.f_2))
		{
			iLocal_166 = add_blip_for_entity(net_to_obj(Local_56.f_2));
			set_blip_scale(iLocal_166, 1.2f);
			set_blip_sprite(iLocal_166, 403);
			set_blip_colour(iLocal_166, 2);
			set_blip_name_from_text_file(iLocal_166, "ABB_BLIPN");
		}
	}
}

void func_185()
{
	int iVar0;
	
	if (!is_help_message_being_displayed())
	{
		iVar0 = func_164(1183, -1, 0);
		if (!is_bit_set(iVar0, 14))
		{
			set_bit(&iVar0, 14);
			func_162(1183, iVar0, -1, 1);
		}
	}
}

int func_186()
{
	return Local_56;
}

bool func_187()
{
	request_model(joaat("prop_drug_package_02"));
	if (has_model_loaded(joaat("prop_drug_package_02")))
	{
		return true;
	}
	return false;
}

var func_188(int iParam0)
{
	return vLocal_67[iParam0 /*3*/];
}

bool func_189()
{
	int iVar0;
	
	func_196(&iVar0);
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
	if (func_195())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_194())
	{
		return true;
	}
	if (func_193(157))
	{
		if (!func_192())
		{
			return true;
		}
	}
	if (func_193(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_190() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_190()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_190()
{
	switch (func_191())
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

var func_191()
{
	return Global_25120;
}

var func_192()
{
	return Global_2434762.f_574;
}

bool func_193(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

var func_194()
{
	return Global_2443085;
}

var func_195()
{
	return Global_2434762.f_569;
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
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
					func_197(iVar0);
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

void func_197(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_198(iVar4, &iVar5))
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

bool func_198(int iParam0, var uParam1)
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

void func_199()
{
	wait(0);
}

var func_200(int iParam0)
{
	return Global_1587523[iParam0 /*444*/];
}

void func_201()
{
	Global_1347852 = -1;
	if (does_blip_exist(iLocal_166))
	{
		remove_blip(&iLocal_166);
	}
	func_204();
	if (network_is_game_in_progress())
	{
		if (network_is_host_of_this_script())
		{
			if (network_does_network_id_exist(Local_56.f_2) && network_has_control_of_network_id(Local_56.f_2))
			{
				func_182(&(Local_56.f_2));
			}
			Local_56 = 4;
		}
	}
	if (is_bit_set(Local_56.f_1, 8))
	{
		func_203();
	}
	func_202();
}

void func_202()
{
	terminate_this_thread();
}

void func_203()
{
	Global_2460486.f_791 = 0;
	Global_2460486.f_791.f_1 = {0f, 0f, 0f};
	Global_2460486.f_791.f_4 = 0f;
	Global_2460486.f_791.f_8 = 0;
	clear_bit(&(Global_2460486.f_791.f_7), false);
}

void func_204()
{
	if (is_bit_set(iLocal_164, 4))
	{
		set_player_weapon_damage_modifier(player_id(), 0.72f);
		set_player_melee_weapon_damage_modifier(player_id(), 1f);
		set_player_weapon_defense_modifier(player_id(), 1f);
		set_player_melee_weapon_defense_modifier(player_id(), 1f);
		func_205(1);
		clear_bit(&iLocal_164, 5);
		clear_bit(&iLocal_164, 7);
		clear_bit(&iLocal_164, 4);
	}
}

void func_205(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_206(iParam0, 0);
	_stop_screen_effect(sVar0);
}

char* func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (iParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (iParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (iParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
	}
	return "";
}

bool func_207(struct<20> Param0)
{
	func_211(func_212(Param0), Param0);
	reserve_network_mission_objects(1);
	func_209(0, -1, 0);
	network_register_host_broadcast_variables(&Local_56, 11);
	network_register_player_broadcast_variables(&vLocal_67, 97);
	if (!func_208())
	{
		return false;
	}
	set_this_script_can_be_paused(0);
	if (network_is_host_of_this_script())
	{
		Local_56.f_7 = Param0.f_16;
		Global_1347852 = Local_56.f_7;
		Local_56.f_3 = {get_entity_coords(player_ped_id(), 0)};
		if (!func_3(Global_2460486.f_791.f_1))
		{
			set_bit(&(Local_56.f_1), 8);
		}
	}
	iLocal_169 = network_is_in_tutorial_session();
	vLocal_67[participant_id_to_int() /*3*/] = 0;
	return true;
}

bool func_208()
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
		if (func_195())
		{
			return false;
		}
		if (func_193(155))
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

bool func_209(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_202();
			}
			else
			{
				return false;
			}
		}
		if (!func_210())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_202();
					}
					else
					{
						return false;
					}
				}
				if (func_195())
				{
					if (!iParam2)
					{
						func_202();
					}
					else
					{
						return false;
					}
				}
				if (func_193(155))
				{
					if (!iParam2)
					{
						func_202();
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
					func_202();
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
				func_202();
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
			func_202();
		}
		else
		{
			return false;
		}
	}
	return true;
}

var func_210()
{
	return Global_1315888;
}

void func_211(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_202();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

