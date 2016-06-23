#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	float fLocal_2 = 0;
	float fLocal_3 = 0;
	float fLocal_4 = 0;
	float fLocal_5 = 0;
	float fLocal_6 = 0;
	float fLocal_7 = 0;
	float fLocal_8 = 0;
#endregion

void main()
{
	iLocal_0 = true;
	iLocal_1 = true;
	fLocal_2 = 1f;
	fLocal_3 = 1f;
	fLocal_4 = 1f;
	fLocal_5 = 1f;
	fLocal_6 = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_0)
			{
				set_vehicle_density_multiplier_this_frame(fLocal_2);
			}
			set_random_vehicle_density_multiplier_this_frame(fLocal_3);
			set_parked_vehicle_density_multiplier_this_frame(fLocal_4);
			_0x90B6DA738A9A25DA(fLocal_5);
			if (iLocal_1)
			{
				set_ped_density_multiplier_this_frame(fLocal_6);
			}
			set_scenario_ped_density_multiplier_this_frame(fLocal_7, fLocal_8);
		}
	}
}

void func_1()
{
	set_random_trains(1);
	terminate_this_thread();
}

