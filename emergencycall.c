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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	Vector3 vLocal_45 = 0;
	int iLocal_48 = 0;
	auto uLocal_49 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (is_player_playing(player_id()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_5();
					break;
				
				case 1:
					break;
				
				case 2:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (create_incident_with_entity(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (create_incident(7, vLocal_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (create_incident_with_entity(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (create_incident(5, vLocal_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (create_incident_with_entity(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &uLocal_49))
						{
							iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (create_incident(3, vLocal_45, 4, 3f, &uLocal_49))
					{
						if (Global_88108.f_358 == GAMEPLAY::GET_HASH_KEY("AGENCY_PREP_1") || (_get_number_of_instances_of_streamed_script(GAMEPLAY::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_88108.f_358 = GAMEPLAY::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_88038 = 1;
						}
						iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_48 + 60000 || !is_incident_valid(uLocal_49))
					{
						func_1();
					}
					else if (is_player_playing(player_id()))
					{
						if (!is_player_control_on(player_id()))
						{
							if (is_incident_valid(uLocal_49))
							{
								delete_incident(uLocal_49);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	terminate_this_thread();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

int func_3(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_4()
{
	if (GAMEPLAY::GET_GAME_TIMER() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_5()
{
	auto uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_13())
			{
				wait(0);
				if (func_12() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_12() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_12() == 5)
				{
					iLocal_43 = 2;
				}
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_48 + 30000)
				{
					iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
					func_8(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_6(PLAYER::PLAYER_PED_ID(), &vLocal_45, &uVar0);
			}
			iLocal_48 = GAMEPLAY::GET_GAME_TIMER();
			break;
	}
}

void func_6(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	auto uVar4;
	auto uVar7;
	Vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	auto uVar22;
	Vector3 vVar25;
	auto uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				get_nth_closest_vehicle_node_with_heading(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
				get_closest_road(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = {-3031.38f, 605.32f, 6.86f};
				}
				vVar10 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
				fVar14 = get_heading_from_vector_2d(vVar10.x, vVar10.y);
				fVar15 = fVar16 + 180f;
				if (fVar15 > 360f)
				{
					fVar15 -= 360f;
				}
				if (func_7(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (_get_is_slow_road_flag(get_nth_closest_vehicle_node_id(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = fVar18 * to_float(iVar1 / 2);
					if (fVar17 == 0f)
					{
						fVar17 += fVar18;
					}
					if (iVar1 == 5)
					{
						fVar17 += fVar18;
					}
					if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 += 5f;
					}
					else
					{
						fVar17 += 3.75f;
					}
					fVar17 += fVar13 / 2f;
				}
				if (vdist(_get_object_offset_from_coords(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > vdist(_get_object_offset_from_coords(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = {_get_object_offset_from_coords(*uParam1, *uParam2, fVar17, 0f, 0f)};
				iVar20 = _cast_3d_ray_point_to_point(*uParam1 + Vector(*uParam1.f_2 + 4.5f, *uParam1.f_2 + 4.5f, *uParam1.f_2 + 4.5f), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, false, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (_get_raycast_result(iVar20, &iVar21, &vVar25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (vVar25.z > *uParam1.f_2 + 8.5f)
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

bool func_7(float fParam0, float fParam1, float fParam2)
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

void func_8(int iParam0)
{
	if (Global_14571)
	{
		func_10(0, 0);
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
	if (!func_9())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_9()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_10(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_11(0))
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

bool func_11(int iParam0)
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

auto func_12()
{
	return Global_16729;
}

bool func_13()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

