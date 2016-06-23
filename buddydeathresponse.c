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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || _is_interior_rendering_disabled())
	{
		terminate_this_thread();
	}
	func_1();
}

void func_1()
{
	Vector3 vVar0;
	int iVar3;
	
	while (!func_8(&iLocal_20))
	{
		wait(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_20))
	{
		if (!Global_88106)
		{
			set_entity_as_mission_entity(iLocal_20, true, 1);
			if (get_script_task_status(iLocal_20, 1435919172) != 7)
			{
				clear_ped_tasks(iLocal_20);
			}
			vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 0)};
			set_blocking_of_non_temporary_events(iLocal_20, true);
			open_sequence_task(&iVar3);
			if (!is_ped_in_any_vehicle(iLocal_20, 0))
			{
				if (!is_ped_in_combat(iLocal_20, false) && !is_ped_in_any_vehicle(iLocal_20, 0))
				{
					task_turn_ped_to_face_coord(false, vVar0, 6000);
				}
			}
			task_look_at_coord(false, vVar0, 6000, 0, 2);
			close_sequence_task(iVar3);
			task_perform_sequence(iLocal_20, iVar3);
		}
		func_2(iLocal_20);
	}
	while (!is_screen_faded_out())
	{
		wait(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		if (!PED::IS_PED_INJURED(iLocal_20))
		{
			set_ped_keep_task(iLocal_20, true);
		}
		set_ped_as_no_longer_needed(&iLocal_20);
	}
	Global_88106 = 0;
	terminate_this_thread();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER() + 1000;
	while (GAMEPLAY::GET_GAME_TIMER() < iVar0 && !is_screen_faded_out())
	{
		wait(0);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_7(int iParam0)
{
	return iParam0 < 3;
}

bool func_8(auto uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88980[iLocal_18]) && !PED::IS_PED_INJURED(Global_88980[iLocal_18]))
		{
			if (Global_88980[iLocal_18] != PLAYER::PLAYER_PED_ID())
			{
				if (!is_entity_a_mission_entity(Global_88980[iLocal_18]))
				{
					if (is_ped_in_any_vehicle(Global_88980[iLocal_18], 0) || !is_entity_attached(Global_88980[iLocal_18]))
					{
						if (get_distance_between_coords(get_entity_coords(Global_88980[iLocal_18], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_88980[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (has_entity_clear_los_to_entity(Global_88980[iLocal_18], PLAYER::PLAYER_PED_ID(), 17))
									{
										if (is_ped_in_any_vehicle(Global_88980[iLocal_18], 0))
										{
											iVar0 = get_vehicle_ped_is_in(Global_88980[iLocal_18], 0);
										}
										if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0)) || !ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											*uParam0 = Global_88980[iLocal_18];
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (is_screen_faded_out())
	{
		return true;
	}
	return false;
}

auto func_9()
{
	func_10();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_6(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_5(PLAYER::PLAYER_PED_ID());
			if (func_7(iVar0) && (!func_11(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_7(Global_101154.f_1826.f_539.f_3549))
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

int func_11(int iParam0)
{
	return Global_35711 == iParam0;
}

