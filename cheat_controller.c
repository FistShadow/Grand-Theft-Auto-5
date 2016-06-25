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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0;
	int iLocal_79 = 0;
	int[] iLocal_80 = new int[10];
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_111();
	}
	Global_25365 = 0;
	Global_25364 = 0;
	Global_25366 = 0;
	Global_25367 = 0;
	Global_25369 = 0;
	Global_25368 = 0;
	func_110();
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	func_86();
	func_66();
	func_20();
	func_2(iLocal_67);
}

void func_2(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (is_interior_scene())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_18(iParam0);
			}
			break;
		
		case 4:
			func_3(iParam0);
			break;
		
		default:
			break;
	}
}

void func_3(int iParam0)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	
	iVar4 = false;
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (is_player_playing(player_id()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68, 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_68, 0))
					{
						vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_68, 1)};
						fVar3 = get_entity_heading(iLocal_68);
						set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar0.x, vVar0.y, vVar0.z + 4f, 1, false, 0, 1);
						iVar4 = true;
					}
				}
				delete_vehicle(&iLocal_68);
			}
			if (!iVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f)};
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f)};
				}
				else
				{
					vVar0 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f)};
				}
				fVar3 = get_entity_heading(PLAYER::PLAYER_PED_ID()) + 90f;
			}
			if (func_16(iParam0, vVar0, fVar3))
			{
				iLocal_68 = create_vehicle(iParam0, vVar0, fVar3, 0, 1);
				set_vehicle_on_ground_properly(iLocal_68);
				set_model_as_no_longer_needed(iParam0);
				set_vehicle_as_no_longer_needed(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				set_model_as_no_longer_needed(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_4(int iParam0)
{
	if (!func_13(14) && !func_12(""))
	{
		GAMEPLAY::SET_BIT(&Global_25366, iParam0);
		Global_25369 = 1;
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = func_7();
	switch (iVar0)
	{
		case 0:
			func_6(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_6(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_6(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

auto func_7()
{
	func_8();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_8()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_13(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_9(Global_101154.f_1826.f_539.f_3549))
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

int func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_12(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_13(14) && is_screen_faded_in())
		{
			if (are_strings_equal(sParam0, "CHEAT_SUPER_JUMP") && is_interior_scene())
			{
				return false;
			}
			if ((are_strings_equal(sParam0, "CHEAT_GRAVITY_MOON") && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && is_entity_in_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_13(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		_set_notification_text_entry("CHEAT_ACTIVATED");
		_add_text_component_item_string(sParam0);
		func_15(_draw_notification(0, 1));
		playstats_cheat_applied(sParam0);
	}
}

void func_15(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

bool func_16(int iParam0, Vector3 vParam1, Vector3 fParam2)
{
	Vector3[] vVar0 = new Vector3[9];
	Vector3 vVar28;
	Vector3 vVar31;
	Vector3 vVar34;
	auto uVar37;
	auto uVar40;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	auto uVar51;
	
	get_model_dimensions(iParam0, &vVar28, &vVar31);
	vVar34.x = absf(vVar31.x - vVar28.x) / 2f;
	vVar34.y = absf(vVar31.y - vVar28.y) / 2f;
	vVar34.z = absf(vVar31.z - vVar28.z) / 2f;
	vVar0[0 /*3*/] = {vParam1};
	vVar0[1 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, -vVar34.y, -vVar34.z)};
	vVar0[2 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, -vVar34.y, -vVar34.z)};
	vVar0[3 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, vVar34.y, -vVar34.z)};
	vVar0[4 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, vVar34.y, -vVar34.z)};
	vVar0[5 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, -vVar34.y, vVar34.z)};
	vVar0[6 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, -vVar34.y, vVar34.z)};
	vVar0[7 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, vVar34.y, vVar34.z)};
	vVar0[8 /*3*/] = {_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, vVar34.y, vVar34.z)};
	if (!_are_coords_colliding_with_exterior(vParam1))
	{
		return false;
	}
	iVar50 = _cast_ray_point_to_point(func_17(player_id()) + Vector(1f, 0f, 0f), vParam1, 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar44 = _cast_ray_point_to_point(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar45 = _cast_ray_point_to_point(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar46 = _cast_ray_point_to_point(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar47 = _cast_ray_point_to_point(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar48 = _cast_ray_point_to_point(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	iVar49 = _cast_ray_point_to_point(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	_get_raycast_result(iVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return false;
	}
	return true;
}

Vector3 func_17(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_18(int iParam0)
{
	if (is_model_in_cdimage(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		_set_notification_text_entry("CHEAT_DENIED");
		_add_text_component_item_string(sParam0);
		func_15(_draw_notification(0, 1));
	}
}

void func_20()
{
	func_63();
	func_62();
	func_43();
	func_42();
	func_41();
	func_37();
	func_34();
	func_30();
	func_21();
}

void func_21()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!is_player_playing(player_id()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			set_time_scale(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_22(char* sParam0)
{
	if (func_12(sParam0))
	{
	}
	else
	{
		_set_notification_text_entry("CHEAT_DEACTIVATED");
		_add_text_component_item_string(sParam0);
		func_15(_draw_notification(0, 1));
	}
}

void func_23()
{
	if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
	{
		if (is_control_pressed(2, 25))
		{
			if (func_24(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && func_24(PLAYER::PLAYER_PED_ID()) != joaat("object"))
			{
				set_time_scale(fLocal_78);
			}
			else
			{
				set_time_scale(1f);
			}
		}
		else
		{
			set_time_scale(1f);
		}
	}
}

auto func_24(int iParam0)
{
	auto uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25364, iParam0))
	{
		return true;
	}
	return false;
}

bool func_26()
{
	if (((((((func_13(0) || func_13(11)) || func_13(4)) || func_13(9)) || func_13(10)) || func_13(3)) || func_13(2)) || func_27(35))
	{
		return true;
	}
	return false;
}

int func_27(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_28()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_29(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&Global_25365, iParam0);
		func_4(iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_25365, iParam0);
	}
}

void func_30()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			CONTROLS::DISABLE_CONTROL_ACTION(2, 37, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
			if ((((((((!is_player_playing(player_id()) || func_26()) || func_32()) || func_31(1)) || is_disabled_control_just_pressed(2, 37)) || is_disabled_control_just_pressed(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			CONTROLS::DISABLE_CONTROL_ACTION(2, 37, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			set_time_scale(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

int func_31(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_32()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_33()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			set_time_scale(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			set_time_scale(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			set_time_scale(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_34()
{
	Vector3 vVar0;
	Vector3 fVar3;
	float fVar4;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
			set_player_invincible(player_id(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
			give_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), true, false, true);
			vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			fVar3 = get_entity_heading(PLAYER::PLAYER_PED_ID());
			get_ground_z_for_3d_coord(vVar0, &fVar4, 0);
			fVar4 += 500f;
			set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar0.x, vVar0.y, fVar4, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), fVar3);
			iLocal_72 = GAMEPLAY::GET_GAME_TIMER();
			do_screen_fade_out(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
				set_player_control(player_id(), true, 0);
				iLocal_72 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 144, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 149, 1);
				if (func_7() == 0)
				{
					set_ped_component_variation(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				}
				else
				{
					set_ped_component_variation(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				}
				do_screen_fade_in(250);
				iLocal_72 = GAMEPLAY::GET_GAME_TIMER();
				func_14("CHEAT_SKYFALL");
				_set_unk_map_flag(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!is_player_playing(player_id()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 144, 1);
			hide_hud_component_this_frame(2);
			if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (has_entity_collided_with_anything(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		set_player_invincible(player_id(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
	}
	_set_unk_map_flag(0);
}

bool func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	iVar1 = iVar0 - iParam0;
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

void func_37()
{
	Vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_62 = 5;
			iLocal_74 = GAMEPLAY::GET_GAME_TIMER();
			set_player_invincible(player_id(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
			break;
		
		case 5:
			if (!is_player_playing(player_id()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = {func_17(player_id())};
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = GAMEPLAY::GET_GAME_TIMER() - iLocal_74;
			if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) == 0)
			{
				func_38(iLocal_73 - iLocal_75, "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= iLocal_73 - 1000)
			{
				iLocal_62 = 9;
				return;
			}
			set_player_invincible(player_id(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
			_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_player_invincible(player_id(), 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_40(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_39(7, iVar0);
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

void func_39(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_40(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

void func_41()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!is_player_playing(player_id()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			set_fire_ammo_this_frame(player_id());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!is_player_playing(player_id()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			set_explosive_melee_this_frame(player_id());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			func_58(PLAYER::PLAYER_PED_ID());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !is_player_playing(player_id())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(PLAYER::PLAYER_PED_ID());
			func_46(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_44(1);
			func_29(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_44(int iParam0)
{
	_0x487A82C650EB7799(0f);
	_0x0225778816FDC28C(0f);
	set_gameplay_cam_shake_amplitude(0f);
	stop_gameplay_cam_shaking(true);
	set_cinematic_cam_shake_amplitude(0f);
	stop_cinematic_cam_shaking(1);
	_0x12561FCBB62D5B9C(0);
	if (is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL"))
	{
		stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!is_string_null_or_empty(&Global_36817))
	{
		if (is_audio_scene_active(&Global_36817))
		{
			stop_audio_scene(&Global_36817);
		}
	}
	if (does_cam_exist(Global_36806))
	{
		if (is_cam_shaking(Global_36806))
		{
			set_cam_shake_amplitude(Global_36806, 0f);
			stop_cam_shaking(Global_36806, 1);
		}
	}
	if (_0xC912AF078AF19212())
	{
		_0x1C9D7949FA533490(0);
	}
	if (iParam0)
	{
		if (get_timecycle_modifier_index() != -1 || _0x459FD2C8D0AB78BC() != -1)
		{
			clear_timecycle_modifier();
		}
		else if (is_player_switch_in_progress())
		{
			clear_timecycle_modifier();
		}
	}
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
	StringCopy(&Global_36817, "", 64);
	StringCopy(&Global_36833, "", 16);
	func_45();
}

void func_45()
{
	Global_36805 = 0;
	Global_36806 = 0;
	Global_36807 = 0;
	Global_36808 = 30000;
	Global_36809 = 0f;
	Global_36811 = 0f;
	Global_36810 = 0f;
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36805)
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	Global_36807 = iVar0 + iParam0;
	Global_36808 = iParam0;
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_50(1, iVar1, 1);
		return;
	}
	iVar2 = func_49(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_48(iVar2);
}

void func_48(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615--;
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	func_51(iParam0, iParam1, iParam2, 0, 0);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_53(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_52();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	if (func_54(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_56(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_57(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_57(int iParam0, auto uParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_36805)
	{
		return;
	}
	if (!iParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!is_gameplay_cam_shaking())
	{
		shake_gameplay_cam("DRUNK_SHAKE", fParam3);
	}
	if (!is_cinematic_cam_shaking())
	{
		shake_cinematic_cam("DRUNK_SHAKE", fParam3 * Global_36804);
	}
	if (does_cam_exist(iParam4))
	{
		shake_cam(iParam4, "DRUNK_SHAKE", fParam3);
		Global_36806 = iParam4;
	}
	else
	{
		Global_36806 = 0;
	}
	Global_36805 = 1;
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	Global_36807 = iVar0 + iParam0;
	if (iParam5)
	{
		if (iParam0 == -1)
		{
			Global_36807 = -1;
		}
	}
	Global_36808 = uParam1;
	Global_36809 = fParam2;
	Global_36811 = fParam3;
	Global_36810 = fParam3;
}

int func_58(int iParam0)
{
	return func_59(iParam0, -1, 1);
}

bool func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	if (!iVar0 == -1)
	{
		return true;
	}
	iVar1 = func_49(iParam0);
	if (!iVar1 == -1)
	{
		return true;
	}
	if (!iParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return false;
		}
	}
	iVar2 = func_60();
	if (iVar2 == -1)
	{
		return false;
	}
	Global_36616[iVar2 /*5*/] = 0;
	Global_36616[iVar2 /*5*/].f_1 = iParam0;
	Global_36616[iVar2 /*5*/].f_2 = iParam1;
	Global_36616[iVar2 /*5*/].f_3 = iParam1;
	Global_36616[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_36837 = 1;
	}
	Global_36615++;
	return true;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_62()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!is_player_playing(player_id()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			set_explosive_ammo_this_frame(player_id());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((!is_player_playing(player_id()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || is_entity_in_water(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			set_gravity_level(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

bool func_64(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25365, iParam0))
	{
		return true;
	}
	return false;
}

void func_65()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			set_gravity_level(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_66()
{
	func_85();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_72();
	func_71();
	func_70();
	func_67();
}

void func_67()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_25(23) || func_25(22)) || func_25(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (is_player_playing(player_id()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			give_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), true, true, true);
			func_4(10);
		}
	}
}

bool func_68()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return false;
	}
	if (func_69(0))
	{
		return true;
	}
	return false;
}

bool func_69(int iParam0)
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

void func_70()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_25(23) || func_25(22)) || func_25(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (is_player_playing(player_id()))
		{
			if (get_max_wanted_level() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = get_player_wanted_level(player_id());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				set_player_wanted_level(player_id(), iVar0 - 1, 0);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_71()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_25(23) || func_25(22)) || func_25(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (is_player_playing(player_id()))
		{
			if (get_max_wanted_level() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = get_player_wanted_level(player_id());
			if (iVar0 < get_max_wanted_level())
			{
				set_player_wanted_level(player_id(), iVar0 + 1, 0);
				set_player_wanted_level_now(player_id(), 0);
				func_14("CHEAT_WANTED_UP");
				func_4(8);
			}
			else
			{
				func_19("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_72()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !is_special_ability_unlocked(func_73())) || !is_special_ability_enabled(player_id()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (is_player_playing(player_id()))
		{
			special_ability_fill_meter(player_id(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_74()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_25(23) || func_25(22)) || func_25(6)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (is_player_playing(player_id()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), get_entity_max_health(PLAYER::PLAYER_PED_ID()));
			add_armour_to_ped(PLAYER::PLAYER_PED_ID(), get_player_max_armour(player_id()) - get_ped_armour(PLAYER::PLAYER_PED_ID()));
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						set_vehicle_fixed(iVar0);
					}
				}
			}
		}
	}
}

void func_75()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_25(23) || func_25(22)) || func_25(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_4(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				set_weather_type_now_persist("EXTRASUNNY");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				set_weather_type_now_persist("CLEAR");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				set_weather_type_now_persist("CLOUDS");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				set_weather_type_now_persist("SMOG");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				set_weather_type_now_persist("OVERCAST");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				set_weather_type_now_persist("RAIN");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				set_weather_type_now_persist("THUNDER");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				set_weather_type_now_persist("CLEARING");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				set_weather_type_now_persist("XMAS");
				clear_weather_type_persist();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_76()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_25(23) || func_25(22)) || func_25(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (is_player_playing(player_id()))
		{
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_knife"), -1, 0);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 300, 0);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 300, 1);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 150, 0);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 30, 0);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 5, 0);
			give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_77()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!is_player_playing(player_id()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				set_swim_multiplier_for_player(player_id(), 1.49f);
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			set_swim_multiplier_for_player(player_id(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!is_player_playing(player_id()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (is_ped_running(PLAYER::PLAYER_PED_ID()) || (is_ped_sprinting(PLAYER::PLAYER_PED_ID()) && !is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())))
				{
					set_run_sprint_multiplier_for_player(player_id(), 1.49f);
				}
				else
				{
					set_run_sprint_multiplier_for_player(player_id(), 1f);
				}
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			set_run_sprint_multiplier_for_player(player_id(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!is_player_playing(player_id()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
							{
								if (func_80(1))
								{
									set_vehicle_reduce_grip(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = false;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
							{
								set_vehicle_reduce_grip(iLocal_69, 0);
							}
							iLocal_69 = false;
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
			{
				set_vehicle_reduce_grip(iLocal_69, 0);
				iLocal_69 = false;
			}
			func_29(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

bool func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	char* sVar4;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = get_players_last_vehicle();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_vehicle_driveable(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!is_this_model_a_car(iVar1))
					{
						return false;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!is_this_model_a_bike(iVar1))
					{
						return false;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!is_this_model_a_heli(iVar1))
					{
						return false;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!is_this_model_a_boat(iVar1))
					{
						return false;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (get_entity_bone_index_by_name(iVar0, "door_dside_r") != -1 || get_entity_bone_index_by_name(iVar0, "door_pside_r") != -1)
					{
						return false;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (get_entity_bone_index_by_name(iVar0, "door_dside_r") == -1 || get_entity_bone_index_by_name(iVar0, "door_pside_r") == -1)
					{
						return false;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (is_this_model_a_bike(iVar1))
					{
						if (get_entity_bone_index_by_name(iVar0, "seat_r") == -1)
						{
							return false;
						}
					}
					else if (get_entity_bone_index_by_name(iVar0, "seat_dside_r") != -1 || get_entity_bone_index_by_name(iVar0, "seat_pside_r") != -1)
					{
						return false;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (get_entity_bone_index_by_name(iVar0, "seat_dside_r") == -1 || get_entity_bone_index_by_name(iVar0, "seat_pside_r") == -1)
					{
						return false;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_9(iVar2))
					{
						return false;
					}
					if (func_83(iVar2, 0) != iVar1)
					{
						return false;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!is_this_model_a_car(iVar1) && !is_this_model_a_bike(iVar1))
					{
						return false;
					}
					if (is_big_vehicle(iVar0))
					{
						return false;
					}
					sVar4 = get_entity_script(iVar0, &uVar3);
					if (!is_string_null_or_empty(sVar4))
					{
						if (get_hash_key(sVar4) == get_hash_key("taxiService"))
						{
							return false;
						}
					}
					if (func_81(iVar0, iVar2, 0))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_82(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

int func_83(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_84(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_84(int iParam0, auto uParam1, int iParam2)
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

void func_85()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!is_player_playing(player_id()) || func_25(23)) || func_25(22)) || func_25(0)) || is_interior_scene())
			{
				iLocal_47 = 9;
				return;
			}
			set_super_jump_this_frame(player_id());
			set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 217, true);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if ((func_109() || iLocal_94 != 0) || func_13(14))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 243, 1);
	}
	func_108();
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (is_ped_being_arrested(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!is_player_playing(player_id()))
	{
		return;
	}
	if (!is_player_control_on(player_id()))
	{
		return;
	}
	if (func_32() || is_player_switch_in_progress())
	{
		return;
	}
	if (func_107())
	{
		if (!iLocal_92)
		{
			func_106();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_105(988027572, 12) || _0x557E43C447E700A8(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || _0x557E43C447E700A8(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || _0x557E43C447E700A8(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || _0x557E43C447E700A8(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || _0x557E43C447E700A8(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || _0x557E43C447E700A8(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || _0x557E43C447E700A8(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || _0x557E43C447E700A8(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || _0x557E43C447E700A8(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || _0x557E43C447E700A8(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || _0x557E43C447E700A8(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || _0x557E43C447E700A8(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || _0x557E43C447E700A8(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || _0x557E43C447E700A8(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || _0x557E43C447E700A8(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || _0x557E43C447E700A8(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || _0x557E43C447E700A8(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || _0x557E43C447E700A8(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || _0x557E43C447E700A8(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || _0x557E43C447E700A8(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || _0x557E43C447E700A8(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || _0x557E43C447E700A8(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || _0x557E43C447E700A8(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || _0x557E43C447E700A8(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || _0x557E43C447E700A8(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || _0x557E43C447E700A8(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || _0x557E43C447E700A8(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || _0x557E43C447E700A8(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || _0x557E43C447E700A8(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || _0x557E43C447E700A8(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || _0x557E43C447E700A8(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || _0x557E43C447E700A8(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || _0x557E43C447E700A8(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || _0x557E43C447E700A8(joaat("deadeye"))) || func_104(19, 0))
	{
		func_87();
	}
}

void func_87()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_88()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_89()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (is_interior_scene())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) || !is_gameplay_cam_rendering())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || is_player_being_arrested(player_id(), 0)) || _get_number_of_instances_of_streamed_script(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_90()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_91()
{
	Vector3 vVar0;
	
	vVar0 = {func_17(player_id())};
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_25(23) || func_25(21)) || func_25(15)) || vVar0.z <= -170f)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_92()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || is_entity_in_water(PLAYER::PLAYER_PED_ID()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_93()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(13))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_94()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(12))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_95()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_96()
{
	if ((((func_25(23) || func_25(22)) || func_25(3)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_97()
{
	if ((((func_25(23) || func_25(22)) || func_25(2)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_98()
{
	if ((func_25(23) || func_25(22)) || func_25(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_99()
{
	if (((func_25(23) || func_25(22)) || func_25(0)) || is_interior_scene())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

bool func_100()
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

void func_101(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_13(9) || _get_number_of_instances_of_streamed_script(joaat("barry1")) > 0) || _get_number_of_instances_of_streamed_script(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_102(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

bool func_102(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_103(66, 0) == 0)
			{
				return false;
			}
			break;
		
		case joaat("dukes2"):
			if (func_103(64, 0) == 0)
			{
				return false;
			}
			break;
		
		case joaat("submersible2"):
			if (func_103(63, 0) == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

bool func_104(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25367, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25368)
			{
				GAMEPLAY::CLEAR_BIT(&Global_25367, iParam0);
				iLocal_93 = 1;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&Global_25367, iParam0);
			iLocal_93 = 1;
			return true;
		}
	}
	return false;
}

int func_105(int iParam0, int iParam1)
{
	if (!func_13(14))
	{
		return int_scores_sorted(iParam0, iParam1);
	}
	return 0;
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			_remove_notification(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_107()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_108()
{
	if (func_13(14) || (!is_screen_faded_in() && iLocal_94 != 0))
	{
		iLocal_94 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if (GAMEPLAY::GET_GAME_TIMER() - iLocal_94 > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

bool func_109()
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

void func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_111()
{
	_0x2587A48BC88DFADF(0);
	if (iLocal_64 == 5)
	{
		func_35();
	}
	if (iLocal_65 == 5)
	{
		func_44(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		set_time_scale(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_62 == 5)
		{
			set_player_invincible(player_id(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
		}
		set_run_sprint_multiplier_for_player(player_id(), 1f);
		set_swim_multiplier_for_player(player_id(), 1f);
	}
	set_gravity_level(0);
	Global_25365 = 0;
	Global_25364 = 0;
	Global_25366 = 0;
	Global_25367 = 0;
	Global_25369 = 0;
	Global_25368 = 0;
	terminate_this_thread();
}

