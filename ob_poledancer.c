#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	Vector3 vLocal_2 = 0;
	Vector3 fLocal_5 = 0;
	char* sLocal_6 = 0;
	int iLocal_7 = 0;
	char* sLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
#endregion

void main()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_10))
	{
		freeze_entity_position(iLocal_10, true);
		vLocal_2 = {get_offset_from_entity_in_world_coords(iLocal_10, 0f, 0f, 0f)};
		fLocal_5 = get_entity_heading(iLocal_10);
		set_entity_collision(iLocal_10, false, 0);
	}
	while (true)
	{
		wait(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_10))
		{
			if (is_object_within_brain_activation_range(iLocal_10))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							set_entity_collision(iLocal_10, true, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(iLocal_1))
						{
							task_cower(iLocal_1, -1);
							set_all_random_peds_flee(player_id(), 1);
							set_ped_keep_task(iLocal_1, true);
							terminate_this_thread();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!is_entity_dead(iLocal_1, 0))
	{
		if (!is_entity_on_screen(iLocal_1))
		{
			delete_ped(&iLocal_1);
		}
		else
		{
			set_ped_keep_task(iLocal_1, true);
		}
	}
	terminate_this_thread();
}

bool func_2()
{
	Vector3 vVar0;
	
	vVar0 = {2f, 2f, 0.5f};
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_1))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_1, vVar0, 0, 1, 0))
			{
				return true;
			}
			if (has_entity_been_damaged_by_entity(iLocal_1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
			if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), iLocal_1))
			{
				return true;
			}
		}
		if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	if (!PED::IS_PED_INJURED(iLocal_1))
	{
		if (get_script_task_status(iLocal_1, -2017877118) == 7)
		{
			task_play_anim(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (has_entity_anim_finished(iLocal_1, sLocal_8, sLocal_6, 3))
		{
			task_play_anim(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (is_entity_playing_anim(iLocal_1, sLocal_8, sLocal_6, 3))
			{
				set_entity_anim_current_time(iLocal_1, sLocal_8, sLocal_6, get_random_float_in_range(0f, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (is_entity_dead(iLocal_1, 0))
	{
		iLocal_1 = PED::CREATE_PED(5, iLocal_7, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_5, 1, true);
		set_ped_random_component_variation(iLocal_1, 0);
		set_ped_can_be_targetted(iLocal_1, false);
		set_blocking_of_non_temporary_events(iLocal_1, true);
	}
}

bool func_5()
{
	STREAMING::REQUEST_MODEL(iLocal_7);
	request_anim_dict(sLocal_8);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_7) && has_anim_dict_loaded(sLocal_8))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_7);
		request_anim_dict(sLocal_8);
	}
	return false;
}

