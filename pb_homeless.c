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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	Vector3 vLocal_47 = 0;
	Vector3 vLocal_50 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<2> Local_58 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 5;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
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
	vLocal_47 = {Local_58.f_1[0 /*3*/]};
	iLocal_44 = get_random_int_in_range(false, 2);
	func_27();
	if (has_force_cleanup_occurred(11))
	{
		func_27();
	}
	while (true)
	{
		wait(0);
		if (is_world_point_within_brain_activation_range())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!is_entity_dead(iLocal_54, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_54, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_56 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}
}

void func_1()
{
	if (timerb() > 10000)
	{
		if (is_entity_at_coord(player_ped_id(), vLocal_47, 10f, 10f, 10f, false, true, 0) && !is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			settimerb(0);
			if (!is_entity_dead(iLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					open_sequence_task(&iLocal_57);
					task_turn_ped_to_face_entity(false, player_ped_id(), false);
					task_play_anim(false, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					close_sequence_task(iLocal_57);
					task_perform_sequence(iLocal_54, iLocal_57);
					clear_sequence_task(&iLocal_57);
				}
				else if (!is_entity_dead(iLocal_55, 0))
				{
					task_turn_ped_to_face_entity(iLocal_54, iLocal_55, false);
					if (iLocal_46 == 0)
					{
					}
					task_wander_standard(iLocal_55, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

bool func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
		
		case 1:
			if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
		
		case 0:
			if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, iParam5))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(int iParam0, Vector3 vParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	Vector3 vVar1;
	
	if (fParam5 < 1f)
	{
		fVar0 = 1f + 0.5f;
	}
	else
	{
		fVar0 = fParam5 + 0.5f;
	}
	vVar1 = {fParam5 + 0.2f, fParam5 + 0.2f, fVar0};
	if (!is_ped_injured(iParam0))
	{
		if ((((is_entity_at_coord(player_ped_id(), get_offset_from_entity_in_world_coords(iParam0, vParam1), vVar1, false, true, 0) && _0xFCF37A457CB96DC0(player_ped_id(), get_entity_coords(iParam0, 1), fParam4)) && func_5(iParam6)) && !is_ped_ragdoll(iParam0)) && !is_ped_getting_up(iParam0))
		{
			func_4(iParam0, 1);
			return true;
		}
		else
		{
			func_4(iParam0, 0);
		}
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	if (!is_entity_dead(iParam0, 0))
	{
	}
}

bool func_5(int iParam0)
{
	if (is_player_control_on(player_id()))
	{
		if (iParam0)
		{
			if (get_ped_desired_move_blend_ratio(player_ped_id()) == 1f || get_ped_desired_move_blend_ratio(player_ped_id()) == 0f)
			{
				return true;
			}
		}
		else if (get_ped_desired_move_blend_ratio(player_ped_id()) == 1f)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				vVar0 = {0f, fParam2, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {fParam2, 0f, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {0f, -fParam2, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {-fParam2, 0f, 0f};
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				vVar0 = {0f, fParam2, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {fParam2, 0f, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {0f, -fParam2, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {-fParam2, 0f, 0f};
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				vVar0 = {0f, fParam2, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {fParam2, 0f, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {0f, -fParam2, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {-fParam2, 0f, 0f};
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				vVar0 = {0f, fParam2, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {fParam2, 0f, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {0f, -fParam2, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {-fParam2, 0f, 0f};
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				vVar0 = {fParam2, fParam2, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {-fParam2, fParam2, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {fParam2, -fParam2, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {-fParam2, -fParam2, 0f};
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = {fParam2, fParam2, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {-fParam2, fParam2, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {fParam2, -fParam2, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {-fParam2, -fParam2, 0f};
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				vVar0 = {fParam2, fParam2, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {-fParam2, fParam2, 0f};
			}
			else if (iParam0 == 2)
			{
				vVar0 = {fParam2, -fParam2, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {-fParam2, -fParam2, 0f};
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				vVar0 = {fParam2, fParam2, 0f};
			}
			else if (iParam0 == 3)
			{
				vVar0 = {-fParam2, fParam2, 0f};
			}
			else if (iParam0 == 0)
			{
				vVar0 = {fParam2, -fParam2, 0f};
			}
			else if (iParam0 == 1)
			{
				vVar0 = {-fParam2, -fParam2, 0f};
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 *= -1f;
	}
	return vVar0;
}

void func_7()
{
	if (is_entity_at_coord(player_ped_id(), vLocal_47, 50f, 50f, 50f, false, true, 0))
	{
		request_model(joaat("a_m_o_tramp_01"));
		request_model(joaat("g_m_y_strpunk_01"));
		request_anim_dict("amb@drug_dealer");
		while ((!has_model_loaded(joaat("a_m_o_tramp_01")) || !has_model_loaded(joaat("g_m_y_strpunk_01"))) || !has_anim_dict_loaded("amb@drug_dealer"))
		{
			wait(0);
		}
		add_relationship_group("homeless", &iLocal_53);
		vLocal_50.z = vLocal_47.z - 1f;
		iLocal_54 = create_ped(19, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_50.z, 0f, 1, true);
		set_ped_relationship_group_hash(iLocal_54, iLocal_53);
		if (iLocal_44 == 1)
		{
			vLocal_50 = {get_offset_from_entity_in_world_coords(iLocal_54, 0.8f, 0.8f, -1f)};
			iLocal_55 = create_ped(5, joaat("g_m_y_strpunk_01"), vLocal_50, 0f, 1, true);
			add_relationship_group("homeless", &iLocal_53);
			set_ped_relationship_group_hash(iLocal_55, iLocal_53);
			if (!is_entity_dead(iLocal_54, 0))
			{
				open_sequence_task(&iLocal_57);
				task_turn_ped_to_face_coord(false, vLocal_50, 0);
				task_play_anim(false, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				close_sequence_task(iLocal_57);
				task_perform_sequence(iLocal_54, iLocal_57);
				clear_sequence_task(&iLocal_57);
			}
			if (!is_entity_dead(iLocal_55, 0))
			{
				open_sequence_task(&iLocal_57);
				task_turn_ped_to_face_coord(false, vLocal_47, 0);
				task_play_anim(false, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				close_sequence_task(iLocal_57);
				task_perform_sequence(iLocal_55, iLocal_57);
				clear_sequence_task(&iLocal_57);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_26(6) || func_26(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_24(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_9(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_18()) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_18() || get_player_wanted_level(player_id()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_18()) || Global_25122) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_18()) || func_14()) || Global_100201) || Global_25122) || func_17()) || Global_36839) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
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

auto func_10()
{
	return Global_91317.f_1;
}

int func_11()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_12()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_13()
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

int func_14()
{
	return Global_91330.f_297 > 0;
}

int func_15()
{
	return Global_91330.f_296 > 0;
}

int func_16(int iParam0, int iParam1)
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

auto func_17()
{
	return Global_1315913;
}

int func_18()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

int func_19(int iParam0)
{
	return iParam0 < 3;
}

auto func_20()
{
	func_21();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_21()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_23(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_22(player_ped_id());
			if (func_19(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_19(Global_101154.f_1826.f_539.f_3549))
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
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24(int iParam0)
{
	return func_25(iParam0, Global_35711);
}

bool func_25(int iParam0, int iParam1)
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

int func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_27()
{
	terminate_this_thread();
}

