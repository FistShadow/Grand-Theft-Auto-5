#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> Local_3 = 0;
#endregion

void main()
{
	float fVar0;
	
	if (has_force_cleanup_occurred(19))
	{
		func_1();
	}
	iLocal_0 = Local_3;
	iLocal_1 = Local_3.f_1;
	while (!is_bit_set(iLocal_2, true))
	{
		if (!is_bit_set(iLocal_2, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (is_vehicle_driveable(iLocal_0, 0))
				{
					set_entity_as_mission_entity(iLocal_0, false, 1);
					freeze_entity_position(iLocal_0, true);
					set_entity_proofs(iLocal_0, true, true, true, true, true, false, 0, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
					{
						set_entity_as_mission_entity(iLocal_1, false, 1);
						freeze_entity_position(iLocal_1, true);
						set_entity_proofs(iLocal_1, true, true, true, true, true, false, 0, false);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_2, false);
				}
			}
		}
		else if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_vehicle_driveable(iLocal_0, 0))
			{
				fVar0 = vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_0, 1));
				if (fVar0 > 90000f)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_2, true);
				}
				else if (fVar0 > 40000f && !is_entity_on_screen(iLocal_0))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_2, true);
				}
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_2, true);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	set_vehicle_as_no_longer_needed(&iLocal_0);
	set_entity_as_no_longer_needed(&iLocal_1);
	terminate_this_thread();
}

