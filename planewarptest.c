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
	Vector3[] vLocal_19 = new Vector3[2];
	float[] fLocal_26 = new float[2];
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	set_mission_flag(1);
	STREAMING::REQUEST_MODEL(joaat("cuban800"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
	{
		wait(0);
	}
	vLocal_19[0 /*3*/] = {1169.976f, 3592.572f, 32.6481f};
	vLocal_19[1 /*3*/] = {1215.738f, 3586.608f, 33.5131f};
	fLocal_26[0] = 277.7043f;
	fLocal_26[1] = 77.1113f;
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	load_scene(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = create_vehicle(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_26[0], 1, true);
	set_vehicle_on_ground_properly(iLocal_18);
	set_model_as_no_longer_needed(joaat("cuban800"));
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_18))
	{
		delete_vehicle(&iLocal_18);
	}
	set_model_as_no_longer_needed(joaat("cuban800"));
	terminate_this_thread();
}

