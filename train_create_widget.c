#region Local Var
	int iLocal_0 = 0;
	Vector3 vLocal_1 = 0;
	int iLocal_4 = 0;
	float fLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void main()
{
	vLocal_1 = {613f, 6438f, 31f};
	fLocal_5 = 5f;
	iLocal_6 = 1;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_1();
	}
	set_random_trains(0);
	delete_all_trains();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), -177f);
		set_gameplay_cam_relative_heading(0);
	}
	request_model(joaat("freight"));
	request_model(joaat("freightcar"));
	request_model(joaat("freightgrain"));
	request_model(joaat("freightcont1"));
	request_model(joaat("freightcont2"));
	request_model(joaat("tankercar"));
	request_model(868868440);
	while ((((((!has_model_loaded(joaat("freight")) || !has_model_loaded(joaat("freightcar"))) || !has_model_loaded(joaat("freightgrain"))) || !has_model_loaded(joaat("freightcont1"))) || !has_model_loaded(joaat("freightcont2"))) || !has_model_loaded(joaat("tankercar"))) || !has_model_loaded(868868440))
	{
		wait(false);
	}
	while (true)
	{
		wait(false);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
				{
					delete_mission_train(&iLocal_0);
				}
				iLocal_0 = create_mission_train(iLocal_4, vLocal_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				vLocal_1 = {_get_gameplay_cam_coords()};
				iLocal_9 = 0;
			}
			if (is_vehicle_driveable(iLocal_0, 0) && !is_entity_dead(iLocal_0, 0))
			{
				set_train_speed(iLocal_0, fLocal_5);
				set_train_cruise_speed(iLocal_0, fLocal_5);
			}
			if (iLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	set_random_trains(1);
	terminate_this_thread();
}

