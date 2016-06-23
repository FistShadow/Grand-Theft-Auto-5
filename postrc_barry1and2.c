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
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = 0;
	char* sLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	Vector3 vLocal_49 = 0;
	Vector3 vLocal_52 = 0;
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
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = {189.5964f, -956.0344f, 29.5771f};
	vLocal_52 = {190.2424f, -956.379f, 28.63f};
	CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
	if (func_24(PLAYER::PLAYER_PED_ID()))
	{
		if (get_player_wanted_level(player_id()) != 0)
		{
			set_player_wanted_level(player_id(), false, 0);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_21(0);
	}
	request_anim_dict(sLocal_44);
	request_additional_text("BARY1", 7);
	while (!has_anim_dict_loaded(sLocal_44) || !has_additional_text_loaded(7))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
		wait(0);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_24(PLAYER::PLAYER_PED_ID());
	iLocal_46 = GAMEPLAY::GET_GAME_TIMER() + 13000;
	iLocal_47 = get_random_int_in_range(false, 5);
	func_18();
	while (!func_13(&iLocal_43, 49, vLocal_52, func_17(1.12f), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
		wait(0);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_12();
	iLocal_48 = GAMEPLAY::GET_GAME_TIMER() + 1000;
	CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
	while (true)
	{
		func_24(PLAYER::PLAYER_PED_ID());
		if (GAMEPLAY::GET_GAME_TIMER() < iLocal_48)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
		}
		func_11();
		if (!func_24(iLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(PLAYER::PLAYER_PED_ID(), vLocal_52, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_21(0);
		}
		wait(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (!iParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

auto func_2(int iParam0, Vector3 vParam1, int iParam2)
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

bool func_3()
{
	auto uVar0;
	
	if (((((func_10(PLAYER::PLAYER_PED_ID()) && func_10(iLocal_43)) && !func_9()) && GAMEPLAY::GET_GAME_TIMER() > iLocal_46) && func_8(PLAYER::PLAYER_PED_ID(), iLocal_43, 1) < 20f) && !get_mission_flag())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(12000, 18000);
		return true;
	}
	return false;
}

void func_4(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_14578, false);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_5(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

auto func_8(int iParam0, int iParam1, int iParam2)
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

bool func_9()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_11()
{
	if (is_explosion_in_sphere(-1, vLocal_52, 5f))
	{
		if (func_10(iLocal_43))
		{
			freeze_entity_position(iLocal_43, false);
			apply_damage_to_ped(iLocal_43, 1000, 1);
		}
		if (func_10(iLocal_41))
		{
			freeze_entity_position(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			freeze_entity_position(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!is_entity_a_mission_entity(iLocal_43))
		{
			set_entity_as_mission_entity(iLocal_43, true, 0);
		}
		set_ped_prop_index(iLocal_43, true, 0, 0, false);
		set_blocking_of_non_temporary_events(iLocal_43, true);
		set_ped_money(iLocal_43, false);
		set_ped_can_be_targetted(iLocal_43, false);
		set_ped_name_debug(iLocal_43, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43, 1862763509);
		set_entity_collision(iLocal_43, false, 0);
		freeze_entity_position(iLocal_43, true);
		set_entity_coords(iLocal_43, vLocal_52, 1, false, 0, 1);
		set_entity_heading(iLocal_43, func_17(1.12f));
		freeze_entity_position(iLocal_43, true);
		task_play_anim(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		task_look_at_entity(iLocal_43, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

bool func_13(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, false, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_14(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return fParam0 * 57.29578f;
}

void func_18()
{
	if (does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(iLocal_41))
		{
			if (!is_entity_a_mission_entity(iLocal_41))
			{
				set_entity_as_mission_entity(iLocal_41, true, 0);
			}
			vLocal_49 = {189.5964f, -956.0344f, 29.54f};
			set_entity_coords(iLocal_41, vLocal_49, 1, false, 0, 1);
			set_entity_heading(iLocal_41, func_17(-2.01f));
			freeze_entity_position(iLocal_41, true);
		}
	}
	if (does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(iLocal_40))
		{
			if (!is_entity_a_mission_entity(iLocal_40))
			{
				set_entity_as_mission_entity(iLocal_40, true, 0);
			}
			vLocal_49 = {190.2574f, -956.3513f, 29.621f};
			set_entity_coords(iLocal_40, vLocal_49, 1, false, 0, 1);
			set_entity_heading(iLocal_40, func_17(-1.68f));
			freeze_entity_position(iLocal_40, true);
		}
	}
	else
	{
		vLocal_49 = {190.2574f, -956.3513f, 29.621f};
		func_19(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		set_entity_coords(iLocal_40, vLocal_49, 1, false, 0, 1);
		set_entity_heading(iLocal_40, func_17(-1.68f));
		freeze_entity_position(iLocal_40, true);
	}
	vLocal_49 = {192.4462f, -953.5946f, 29.0919f};
	if (does_object_of_type_exist_at_coords(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = get_closest_object_of_type(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(iLocal_42))
		{
			if (!is_entity_a_mission_entity(iLocal_42))
			{
				set_entity_as_mission_entity(iLocal_42, true, 0);
			}
			vLocal_49.z = 29.603f;
			set_entity_coords(iLocal_42, vLocal_49, 1, false, 0, 1);
			set_entity_heading(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		set_entity_coords(iLocal_42, vLocal_49, 1, false, 0, 1);
		set_entity_heading(iLocal_42, 23.45f);
	}
}

void func_19(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3)
{
	func_20(iParam0);
	*iParam0 = create_object(iParam1, vParam2, 1, true, false);
	set_entity_heading(*iParam0, fParam5);
}

void func_20(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		delete_object(iParam0);
	}
}

void func_21(int iParam0)
{
	if (iParam0)
	{
		func_23(&iLocal_43);
	}
	else
	{
		func_22(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		freeze_entity_position(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		freeze_entity_position(iLocal_40, false);
	}
	if (iParam0)
	{
		func_20(&iLocal_40);
		func_20(&iLocal_41);
		func_20(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	remove_anim_dict(sLocal_44);
	clear_additional_text(7, false);
	terminate_this_thread();
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_23(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			set_entity_load_collision_flag(*iParam0, false);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		delete_ped(iParam0);
	}
}

int func_24(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

