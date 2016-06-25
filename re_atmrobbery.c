#region Local Var
	int iLocal_0 = 0;
	auto uLocal_1 = 0;
	auto uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	auto uLocal_13 = 0;
	auto uLocal_14 = 0;
	float fLocal_15 = 0;
	auto uLocal_16 = 0;
	auto uLocal_17 = 0;
	int iLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
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
	auto uLocal_48 = 0;
	struct<4>[] Local_49 = new struct<4>[10];
	int iLocal_90 = 0;
	Vector3 vLocal_91 = 0;
	int iLocal_94 = 0;
	Vector3 vLocal_95 = 0;
	Vector3 fLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	auto uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	auto uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	Vector3 vLocal_118 = 0;
	Vector3 vLocal_121 = 0;
	Vector3 fLocal_124 = 0;
	Vector3 fLocal_125 = 0;
	Vector3 vLocal_126 = 0;
	Vector3 vLocal_129 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	Vector3 fLocal_134 = 0;
	float fLocal_135 = 0;
	float fLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char* sLocal_144 = 0;
	char* sLocal_145 = 0;
	char* sLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<10>[] Local_159 = new struct<10>[16];
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	char* sLocal_324 = 0;
	char* sLocal_325 = 0;
	char* sLocal_326 = 0;
	char* sLocal_327 = 0;
	char* sLocal_328 = 0;
	char* sLocal_329 = 0;
	char* sLocal_330 = 0;
	char* sLocal_331 = 0;
	char* sLocal_332 = 0;
	char* sLocal_333 = 0;
	char* sLocal_334 = 0;
	char* sLocal_335 = 0;
	char* sLocal_336 = 0;
	char* sLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	float fLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	Vector3 vLocal_348 = 0;
	Vector3 vLocal_351 = 0;
	Vector3 vLocal_354 = 0;
	float fLocal_357 = 0;
	Vector3 vLocal_358 = 0;
	Vector3 fLocal_361 = 0;
	char* sLocal_362 = 0;
	char* sLocal_363 = 0;
	char* sLocal_364 = 0;
	char* sLocal_365 = 0;
	char* sLocal_366 = 0;
	char* sLocal_367 = 0;
	char* sLocal_368 = 0;
	char* sLocal_369 = 0;
	char* sLocal_370 = 0;
	char* sLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = -1;
	auto uLocal_375 = 0;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 1000;
	auto uLocal_382 = 1000;
	auto uLocal_383 = 0;
	struct<147> Local_384 = 8;
	auto uLocal_531 = 1;
	struct<18> Local_532 = 0;
	auto uLocal_550 = 0;
	auto uLocal_551 = 0;
	auto uLocal_552 = 0;
	auto uLocal_553 = 0;
	auto uLocal_554 = 0;
#endregion

void main()
{
	Vector3 vVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = _0x4A9923385BDB9DAD();
	iLocal_47 = _get_blip_info_id_iterator();
	iLocal_109 = 3;
	iLocal_132 = true;
	sLocal_144 = "RANDOM@ATMROBBERYGEN";
	sLocal_145 = "RANDOM@ATMROBBERYGEN";
	iLocal_153 = joaat("prop_ld_wallet_01_s");
	iLocal_154 = joaat("prop_ld_wallet_01_s");
	iLocal_345 = 500;
	iLocal_346 = -1;
	iLocal_347 = -1;
	fLocal_357 = 0f;
	fLocal_361 = 0f;
	vLocal_95 = {Local_532.f_1[0 /*3*/]};
	fLocal_98 = Local_532.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_147)
		{
			iLocal_148 = true;
			func_272(0);
		}
		else
		{
			func_254();
		}
	}
	if (vdist(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_109 = true;
	}
	else if (vdist(vLocal_95, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_109 = true;
	}
	else if (vdist(vLocal_95, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_109 = 2;
	}
	else if (vdist(vLocal_95, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_109 = 3;
	}
	else if (vdist(vLocal_95, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_109 = 4;
	}
	else
	{
		iLocal_109 = 5;
	}
	if (func_212(vLocal_95, 1, iLocal_109, 1, 0))
	{
		func_209(-1);
	}
	else
	{
		terminate_this_thread();
	}
	settimera(false);
	func_208();
	while (true)
	{
		wait(0);
		func_207();
		func_206(iLocal_102, &uLocal_108);
		func_203(&Local_384);
		if (is_player_playing(player_id()))
		{
			set_all_random_peds_flee_this_frame(player_id());
		}
		if (!func_200())
		{
			if (func_199())
			{
				func_254();
			}
			if (is_world_point_within_brain_activation_range())
			{
				switch (iLocal_94)
				{
					case 0:
						if (func_173())
						{
							iLocal_94 = 1;
						}
						break;
					
					case 1:
						func_172();
						if (iLocal_113 == 0)
						{
							iLocal_113 = add_shocking_event_at_position(99, vLocal_95, 30000f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
						{
						}
						if (!PED::IS_PED_INJURED(iLocal_99))
						{
							if (PED::IS_PED_INJURED(iLocal_100))
							{
								task_smart_flee_coord(iLocal_99, vLocal_95, 200f, -1, 0, 0);
								set_ped_keep_task(iLocal_99, true);
								wait(0);
								func_254();
							}
							if (!PED::IS_PED_INJURED(iLocal_100))
							{
								if (is_sphere_visible(vLocal_95, 2.5f))
								{
									if (iLocal_109 == 2)
									{
										if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 120f, 120f, 8f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (iLocal_109 == 1)
									{
										if (vdist(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 100f, 100f, 8f, 0, 1, 0) || func_171())
											{
												func_162();
											}
										}
										else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 170f, 170f, 8f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (vdist(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 65f, 65f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (get_distance_between_coords(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 50f, 50f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (get_distance_between_coords(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 60f, 60f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 30f, 30f, 8f, 0, 1, 0) || func_171())
									{
										func_162();
									}
								}
							}
						}
						else
						{
							if (Local_159[2 /*10*/].f_7)
							{
								func_161(&Local_159, 2);
							}
							if (!PED::IS_PED_INJURED(iLocal_100))
							{
								task_smart_flee_coord(iLocal_100, vLocal_95, 200f, -1, 0, 0);
								set_ped_keep_task(iLocal_100, true);
								wait(0);
							}
							func_254();
						}
						break;
				}
			}
			else
			{
				func_159("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_254();
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!PED::IS_PED_INJURED(iLocal_99))
				{
					if (func_158(iLocal_99, -251125078))
					{
						if (func_157(iLocal_99, vLocal_95, 1) >= 190f)
						{
							AI::CLEAR_PED_TASKS(iLocal_99);
							AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						}
					}
					else if (func_158(iLocal_99, -982327190))
					{
						AI::CLEAR_PED_TASKS(iLocal_99);
						AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
			{
			}
			if (GAMEPLAY::GET_GAME_TIMER() > iLocal_110 + 3000)
			{
				func_135();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_115() && !func_112())
				{
					_0x36F1B38855F2A8DF(player_id());
					if (!iLocal_137 && !iLocal_142)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
						{
							if (vdist(ENTITY::GET_ENTITY_COORDS(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, sLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (get_distance_between_coords(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, sLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (get_distance_between_coords(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, sLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_110(&Local_159, sLocal_335, sLocal_327, 3, 0, 0, 0))
								{
									iLocal_137 = 1;
								}
							}
						}
					}
					if (does_blip_exist(iLocal_103))
					{
						if (!PED::IS_PED_INJURED(iLocal_99))
						{
							if (iLocal_338)
							{
								if (is_entity_at_entity(iLocal_99, PLAYER::PLAYER_PED_ID(), fLocal_344, fLocal_344, fLocal_344, 0, 1, 0))
								{
									if (!is_ped_in_any_vehicle(iLocal_99, 0))
									{
										if (timera() > 1000)
										{
											if (is_player_targetting_entity(player_id(), iLocal_99))
											{
												fLocal_344 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 1));
												fLocal_344 *= 1.5f;
												settimera(false);
											}
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, false);
										}
									}
								}
								else if (!iLocal_340)
								{
									if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!is_ped_in_any_vehicle(iLocal_99, 0))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, false);
											func_109();
											iLocal_340 = 1;
										}
									}
								}
							}
							else if (!iLocal_139)
							{
								if ((is_player_free_aiming_at_entity(player_id(), iLocal_99) || is_player_targetting_entity(player_id(), iLocal_99)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 0))
								{
									func_110(&Local_159, sLocal_335, sLocal_325, 4, 0, 0, 0);
									settimera(false);
									fLocal_344 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 1));
									fLocal_344 *= 1.5f;
									iLocal_338 = 1;
									iLocal_139 = 1;
								}
								if (is_vehicle_driveable(iLocal_117, 0))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117, PLAYER::PLAYER_PED_ID(), 1))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, false);
										if (is_ped_sitting_in_any_vehicle(iLocal_99))
										{
											task_vehicle_mission_ped_target(iLocal_99, iLocal_117, PLAYER::PLAYER_PED_ID(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
										}
										func_110(&Local_159, sLocal_335, sLocal_325, 4, 0, 0, 0);
										settimera(false);
										fLocal_344 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 1));
										fLocal_344 *= 1.5f;
										iLocal_338 = 1;
										iLocal_139 = 1;
									}
								}
							}
							if ((iLocal_340 || iLocal_338) || iLocal_342)
							{
								if (does_blip_exist(iLocal_103))
								{
									if (get_blip_colour(iLocal_103) == 1)
									{
									}
									else
									{
										set_blip_as_friendly(iLocal_103, false);
										set_blip_colour(iLocal_103, 1);
									}
								}
								if (!iLocal_340)
								{
									func_109();
									iLocal_340 = 1;
								}
							}
							else
							{
								if (is_ped_in_combat(iLocal_99, PLAYER::PLAYER_PED_ID()))
								{
									iLocal_342 = true;
								}
								func_107(iLocal_103, &uLocal_114);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
							{
								if (!iLocal_139)
								{
									if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_110(&Local_159, sLocal_335, sLocal_328, 4, 0, 0, 0))
										{
											open_sequence_task(&iLocal_105);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -4f, -1, 0, 0, 0, 0, 0);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -4f, -1, 1, 0, 0, 0, 0);
											close_sequence_task(iLocal_105);
											task_perform_sequence(iLocal_100, iLocal_105);
											clear_sequence_task(&iLocal_105);
											settimera(false);
											iLocal_139 = 1;
										}
									}
								}
								else if (!iLocal_140)
								{
									if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!is_player_free_aiming_at_entity(player_id(), iLocal_99) && !is_player_targetting_entity(player_id(), iLocal_99)) && !is_ped_shooting(PLAYER::PLAYER_PED_ID())) && func_106(iLocal_100, iLocal_99, 1) > 30f)
										{
											if (func_110(&Local_159, sLocal_335, sLocal_329, 4, 0, 0, 0))
											{
												settimera(false);
												iLocal_140 = 1;
											}
										}
									}
								}
								else if (!is_any_speech_playing(iLocal_100))
								{
									func_104(iLocal_100, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_102())
							{
								func_101();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
								{
									vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_100, 1)};
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_99, vVar0, 25f, 25f, 25f, false, true, 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_99, 12f, 12f, 12f, 0, 1, 0))
								{
									if (timera() > 20000)
									{
										if (func_100(iLocal_99) && !PED::IS_PED_RAGDOLL(iLocal_99))
										{
											if (func_110(&Local_159, sLocal_335, sLocal_330, 4, 0, 0, 0))
											{
												iLocal_342 = true;
												settimera(false);
											}
										}
									}
								}
							}
							else if (func_100(iLocal_100))
							{
								if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, Global_19, 0, 1, 0))
								{
									if (func_110(&Local_159, sLocal_335, sLocal_333, 4, 0, 0, 0))
									{
										open_sequence_task(&iLocal_105);
										task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 3000);
										task_wander_standard(false, 1193033728, 0);
										close_sequence_task(iLocal_105);
										task_perform_sequence(iLocal_100, iLocal_105);
										clear_sequence_task(&iLocal_105);
										iLocal_339 = true;
										func_254();
									}
								}
								else if (iLocal_342)
								{
									if (func_110(&Local_159, sLocal_335, sLocal_334, 4, 0, 0, 0))
									{
										task_wander_standard(iLocal_100, 1193033728, 0);
										force_ped_motion_state(iLocal_100, -668482597, false, 0, 0);
										iLocal_339 = true;
										func_254();
									}
								}
								else
								{
									task_wander_standard(iLocal_100, 1193033728, 0);
									force_ped_motion_state(iLocal_100, -668482597, false, 0, 0);
									iLocal_339 = true;
									func_254();
								}
							}
							else
							{
								iLocal_339 = true;
								func_254();
							}
						}
						else if (func_102())
						{
							if ((PED::IS_PED_INJURED(iLocal_99) || PED::IS_PED_DEAD_OR_DYING(iLocal_99, 1)) || func_158(iLocal_99, -1899872703))
							{
								func_110(&Local_159, sLocal_335, sLocal_337, 4, 0, 0, 0);
								func_97();
								func_161(&Local_159, 2);
								remove_blip(&iLocal_103);
							}
						}
					}
					else if (!does_blip_exist(iLocal_102))
					{
						if (iLocal_147)
						{
							if (does_blip_exist(iLocal_104))
							{
								remove_blip(&iLocal_104);
							}
							iLocal_104 = 0;
							set_player_control(player_id(), true, 0);
							iLocal_102 = func_93(iLocal_100, 0, 0);
							func_92(&uLocal_108);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
							{
								fLocal_134 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_100, 0));
								clear_entity_last_damage_entity(iLocal_100);
							}
							if (fLocal_134 > 750f)
							{
								func_272(0);
							}
						}
						else
						{
							func_89();
						}
					}
					else
					{
						if (get_player_wanted_level(player_id()) > 0)
						{
							if (iLocal_147)
							{
								func_272(0);
							}
							else
							{
								func_254();
							}
						}
						if (iLocal_152)
						{
						}
						else
						{
							func_2();
						}
						if (!iLocal_152)
						{
							if (!PED::IS_PED_INJURED(iLocal_100))
							{
								if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_100, 0)) > fLocal_134 + 100f)
								{
									if (iLocal_147)
									{
										func_272(0);
									}
									else
									{
										AI::TASK_SMART_FLEE_PED(iLocal_100, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
										func_254();
									}
								}
								else if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_100, 0)) < fLocal_134)
								{
									fLocal_134 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_100, 0));
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), 1))
								{
									if (iLocal_147)
									{
										func_272(0);
									}
								}
							}
						}
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
}

void func_1()
{
	if (!PED::IS_PED_INJURED(iLocal_100))
	{
		AI::TASK_SMART_FLEE_PED(iLocal_100, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		func_104(iLocal_100, "GENERIC_FRIGHTENED_HIGH", 24);
		set_ped_keep_task(iLocal_100, true);
		set_blocking_of_non_temporary_events(iLocal_100, false);
		set_ped_can_be_targetted(iLocal_100, true);
		set_ped_as_no_longer_needed(&iLocal_100);
	}
	func_89();
	if (iLocal_142)
	{
		if (does_blip_exist(iLocal_104))
		{
			if (does_pickup_exist(iLocal_141))
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), get_pickup_coords(iLocal_141)) > 100f)
				{
					func_254();
				}
			}
		}
		else if (iLocal_147)
		{
			func_272(0);
		}
		else if (PED::IS_PED_INJURED(iLocal_99))
		{
			func_254();
		}
	}
	if (does_blip_exist(iLocal_103))
	{
		if (PED::IS_PED_INJURED(iLocal_99))
		{
			remove_blip(&iLocal_103);
		}
		else if (!func_102())
		{
			func_254();
		}
	}
}

void func_2()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 vVar16;
	Vector3 vVar19;
	int iVar22;
	Vector3 fVar23;
	Vector3 fVar24;
	char[16] cVar25;
	char[16] cVar29;
	auto uVar33;
	int iVar34;
	
	if (!PED::IS_PED_INJURED(iLocal_100))
	{
		if (!iLocal_151)
		{
			if (iLocal_341)
			{
				if (!iLocal_343)
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 15f, 15f, 20f, 0, 1, 0))
					{
						func_104(iLocal_100, "GENERIC_HI", 5);
						iLocal_343 = 1;
					}
				}
				if (get_distance_between_coords(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 5f;
					}
				}
				else if (get_distance_between_coords(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 4f;
					}
				}
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, fLocal_135, fLocal_135, fLocal_135, 0, 1, 0) && !func_88())
				{
					if (func_85(2))
					{
						clear_help(1);
					}
					if (!func_112())
					{
						if (is_player_control_on(player_id()))
						{
							if (func_84(1, 0, 1))
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2283, 11) || func_83())
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
									{
										clear_help(1);
										if (func_82())
										{
											func_81();
										}
										if (iLocal_153 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_101 = create_object(iLocal_154, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, true, false);
										}
										else
										{
											iLocal_101 = create_object(iLocal_153, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, true, false);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											attach_entity_to_entity(iLocal_101, PLAYER::PLAYER_PED_ID(), get_ped_bone_index(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										set_entity_visible(iLocal_101, false, 0);
										func_72(1, 1, 1, 0);
										if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
											{
												while ((!func_71(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fLocal_136, 1, 1056964608, 0, 1, 0) || func_82()) || !does_entity_have_drawable(iLocal_101))
												{
													if (!func_71(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fLocal_136, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_82())
													{
													}
													if (!does_entity_have_drawable(iLocal_101))
													{
													}
													wait(0);
												}
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), false, 0);
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
										{
											while (func_82() || !does_entity_have_drawable(iLocal_101))
											{
												wait(0);
											}
										}
										set_player_control(player_id(), false, 0);
										if (!PED::IS_PED_INJURED(iLocal_100))
										{
											set_ped_can_ragdoll(iLocal_100, 0);
										}
										remove_all_shocking_events(0);
										remove_shocking_event(iLocal_113);
										set_ped_stealth_movement(PLAYER::PLAYER_PED_ID(), 0, 0);
										func_69();
										func_65();
										wait(0);
										if (func_100(iLocal_100))
										{
											if (is_ped_male(iLocal_100))
											{
												sLocal_146 = "move_m@hurry@b";
											}
											else
											{
												sLocal_146 = "move_f@hurry@a";
											}
										}
										request_clip_set(sLocal_146);
										iLocal_151 = true;
										settimera(false);
									}
								}
							}
						}
					}
				}
				else
				{
					func_63(ENTITY::GET_ENTITY_COORDS(iLocal_100, 1), &fLocal_135, &fLocal_136);
					if (!func_88())
					{
						if (!func_158(iLocal_100, 1227113341) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
						{
							AI::CLEAR_PED_TASKS(iLocal_100);
							task_go_to_entity(iLocal_100, PLAYER::PLAYER_PED_ID(), 20000, 0.5f, 1f, 2f, 0);
						}
					}
					else if (func_158(iLocal_100, 1227113341))
					{
						AI::CLEAR_PED_TASKS(iLocal_100);
						clear_sequence_task(&iLocal_105);
						open_sequence_task(&iLocal_105);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
						AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
						AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -8f, -1, 0, 0, 0, 0, 0);
						AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -8f, -1, 1, 0, 0, 0, 0);
						close_sequence_task(iLocal_105);
						task_perform_sequence(iLocal_100, iLocal_105);
						clear_sequence_task(&iLocal_105);
						_0x2208438012482A1A(iLocal_100, 0, 0);
					}
				}
			}
			else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 25f, 25f, 20f, 0, 1, 1) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_88())
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						AI::CLEAR_PED_TASKS(iLocal_100);
						clear_sequence_task(&iLocal_105);
						open_sequence_task(&iLocal_105);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), 20000, 0.5f, 1f, 2f, 0);
						close_sequence_task(iLocal_105);
						task_perform_sequence(iLocal_100, iLocal_105);
						clear_sequence_task(&iLocal_105);
					}
					iLocal_341 = 1;
				}
			}
		}
		if (iLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					if (((!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !is_ped_prone(PLAYER::PLAYER_PED_ID())) && !is_ped_getting_up(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_132)
						{
							if (get_distance_between_coords(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, true, 0))
							{
								vLocal_126 = {-710.1279f, -821.3084f, 22.6169f};
								vLocal_129 = {0f, 0f, 266.962f};
							}
							else if (!PED::IS_PED_INJURED(iLocal_100))
							{
								vVar19 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
								func_60(iLocal_100, &vLocal_126, &vLocal_129, sLocal_362, sLocal_364);
								if (vLocal_126.z - vVar19.z > 20f)
								{
									vLocal_126 = {vVar19};
								}
								vLocal_126.z += 2f;
								get_ground_z_for_3d_coord(vLocal_126, &(vLocal_126.f_2), 0);
								if (vLocal_126.z == 0f)
								{
									vLocal_126 = {vLocal_354};
									vLocal_129.z = fLocal_357;
								}
								if (get_distance_between_coords(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, true, 0))
									{
										if (vLocal_129.z > 315f && vLocal_129.z < 360f)
										{
											vLocal_129.z = 251.4238f;
										}
										else if (vLocal_129.z > 120f && vLocal_129.z < 212f)
										{
											vLocal_129.z = 67.2304f;
										}
										vLocal_126 = {-205.81f, -865.2f, 28.5f};
									}
								}
								else if (get_distance_between_coords(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f && is_point_in_angled_area(vLocal_126, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, true))
								{
									vLocal_126 = {-814.0593f, -1082.483f, 10.0671f};
									vLocal_129.z = 275.5752f;
								}
								else if (get_distance_between_coords(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && is_point_in_angled_area(vLocal_126, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, true))
								{
									vLocal_126 = {-375.0627f, 6030.533f, 30.5313f};
									vLocal_129.z = 222.9049f;
								}
								else if (get_distance_between_coords(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && is_point_in_angled_area(vLocal_126, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, true))
								{
									vLocal_126 = {-379.7835f, 6029.472f, 30.5014f};
									vLocal_129.z = 213.2611f;
								}
								else if (get_distance_between_coords(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, true, 0))
									{
										if (vLocal_129.z > 128f && vLocal_129.z < 195f)
										{
											if (vLocal_129.z > 162f)
											{
												vLocal_129.z = 220f;
											}
											else
											{
												vLocal_129.z = 107f;
											}
										}
									}
								}
								else if (get_distance_between_coords(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, true, 0))
									{
										if (vLocal_129.z > 244.444f && vLocal_129.z < 326.2103f)
										{
											vLocal_129.z = 343.1367f;
										}
									}
								}
								else if (get_distance_between_coords(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, true, 0))
									{
										vLocal_126 = {-3045.4f, 598.65f, 6.51f};
									}
								}
								vVar10 = {get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 0f, 2)};
								vVar13 = {vVar10 - vLocal_126};
								vVar13.z = 0f;
								fVar24 = vmag(vVar13);
								get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
								fVar23 = vLocal_126.z - vVar10.z;
								vLocal_129.x = atan2(fVar23, fVar24);
								if (vLocal_129.x > 20f || vLocal_129.x < -330f)
								{
									vLocal_126 = {vLocal_354};
									vLocal_129.x = 0f;
									vLocal_129.z = fLocal_357;
									vVar10 = {get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 0f, 2)};
									vVar13 = {vVar10 - vLocal_126};
									vVar13.z = 0f;
									fVar24 = vmag(vVar13);
									get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
									fVar23 = vLocal_126.z - vVar10.z;
								}
							}
							if (func_59(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (is_point_in_angled_area(vLocal_126, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, true))
								{
									if (vLocal_129.z < 35f || vLocal_129.z > 275f)
									{
										if (vLocal_129.z < 335f)
										{
											vLocal_129.z = 260f;
										}
										else
										{
											vLocal_129.z = 55f;
										}
									}
									else if (vLocal_129.z > 107.2072f && vLocal_129.z < 210f)
									{
										if (vLocal_129.z > 154.6742f)
										{
											vLocal_129.z = 233f;
										}
										else
										{
											vLocal_129.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_109 == 4)
						{
							if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 183.6065f, 6636.653f, 30.6299f) < vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_126 = {183.6065f, 6636.653f, 30.6299f};
								vLocal_129 = {0f, 0f, 265f};
							}
							else
							{
								vLocal_126 = {172.2291f, 6631.007f, 30.7398f};
								vLocal_129 = {0f, 0f, 132f};
							}
						}
						else
						{
							vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
							if (!PED::IS_PED_INJURED(iLocal_100))
							{
								vVar4 = {ENTITY::GET_ENTITY_COORDS(iLocal_100, 1)};
							}
							vVar7 = {vVar1 - vVar4};
							vLocal_126 = {vVar1};
							vLocal_126 = {vLocal_126.x, vLocal_126.y, vLocal_126.z - 1f};
							vLocal_129 = {0f, 0f, get_heading_from_vector_2d(vVar7.x, vVar7.y)};
						}
						if (get_distance_between_coords(vLocal_126, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							vLocal_126 = {-521.475f, -1210.47f, 17.1848f};
							vLocal_129 = {0f, 0f, 308.502f};
						}
						if (is_vehicle_driveable(iLocal_117, 0))
						{
							set_vehicle_as_no_longer_needed(&iLocal_117);
						}
						if (is_vehicle_driveable(get_players_last_vehicle(), 0))
						{
							if (!is_vehicle_driveable(iVar0, 0))
							{
								iVar0 = get_players_last_vehicle();
								get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar0), &vLocal_348, &vLocal_351);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_126, vLocal_351.y + 1f, vLocal_351.y + 1f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2), vLocal_351.y + 1f, vLocal_351.y + 1f, 3f, false, true, 0))
								{
									if (func_59(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0) && (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, true, 0)))
									{
										if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0))
										{
											vVar16 = {2.9f, 12f, 8f};
											vLocal_121 = {-543.34f, -1216.8f, 17.96f};
											fLocal_125 = 337.5f;
											iVar22 = true;
										}
										else
										{
											vVar16 = {2.9f, 12f, 8f};
											vLocal_121 = {-522.4418f, -1214.57f, 17.1848f};
											fLocal_125 = 246.7714f;
											iVar22 = true;
										}
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_door_latched(iVar0, false, 1, 1, 1);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
									else if (get_distance_between_coords(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, true, 0))
									{
										vVar16 = {2.9f, 12f, 8f};
										vLocal_121 = {-187f, -855.51f, 29.02f};
										fLocal_125 = 158.28f;
										iVar22 = true;
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
									else if (get_distance_between_coords(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, true, 0))
									{
										vVar16 = {2.9f, 12f, 8f};
										vLocal_121 = {-395.84f, 6051.16f, 31.19f};
										fLocal_125 = 139.92f;
										iVar22 = true;
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
									else if (get_distance_between_coords(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, true, 0))
									{
										vVar16 = {2.9f, 12f, 8f};
										vLocal_121 = {-2972.31f, 490.07f, 15.03f};
										fLocal_125 = 357.64f;
										iVar22 = true;
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
									else if ((get_distance_between_coords(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, true, 0)) && is_entity_in_angled_area(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, true, 0))
									{
										vVar16 = {2.9f, 12f, 8f};
										vLocal_121 = {184.05f, 6628.75f, 31.27f};
										fLocal_125 = 89.37f;
										iVar22 = true;
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
									else
									{
										vVar16 = {2.9f, 12f, 8f};
										fLocal_125 = get_entity_heading(iVar0);
										vLocal_121 = {func_56(vLocal_126, get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2))};
										if (func_55(0f, 0f, 0f, vLocal_121, 0))
										{
											vLocal_121 = {ENTITY::GET_ENTITY_COORDS(iVar0, 1)};
										}
										if (is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iVar0)))
										{
											vLocal_351.x += 3f;
											vLocal_351.y += 3f;
										}
										iVar22 = true;
										if (vLocal_351.x - vLocal_348.x > vVar16.x)
										{
											iVar22 = false;
										}
										else if (vLocal_351.y - vLocal_348.y > vVar16.y)
										{
											iVar22 = false;
										}
										else if (vLocal_351.z - vLocal_348.z > vVar16.z)
										{
											iVar22 = false;
										}
										if (iVar22)
										{
											if (func_58(iVar0))
											{
												set_entity_coords(iVar0, vLocal_121, 1, false, 0, 1);
												set_entity_heading(iVar0, fLocal_125);
												set_vehicle_on_ground_properly(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												delete_vehicle(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_58(iVar0))
						{
							get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar0), &vLocal_348, &vLocal_351);
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_126, vLocal_351.y + 1f, vLocal_351.y + 1f, 1f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2), vLocal_351.y + 1f, vLocal_351.y + 1f, 1f, false, true, 0))
							{
								set_entity_coords(iVar0, vLocal_358, 1, false, 0, 1);
								set_entity_heading(iVar0, fLocal_361);
								set_vehicle_on_ground_properly(iVar0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
						{
							set_entity_visible(iLocal_101, true, 0);
						}
						remove_vehicles_from_generators_in_area(vLocal_126 - Vector(10f, 10f, 10f), vLocal_126 + Vector(10f, 10f, 10f), 0);
						clear_area_of_projectiles(vLocal_126, 20f, 0);
						clear_area_of_peds(vLocal_126, 10f, 0);
						clear_area(vLocal_126, vLocal_351.y + 1f, 1, 0, 0, false);
						stop_fire_in_range(vLocal_126, 25f);
						hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
						set_player_wanted_level(player_id(), false, 0);
						iLocal_112 = create_synchronized_scene(vLocal_126, vLocal_129, 2);
						_0x394B9CD12435C981(iLocal_112, false);
						iLocal_149 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
						set_cam_fov(iLocal_149, 15f);
						play_synchronized_cam_anim(iLocal_149, iLocal_112, sLocal_365, sLocal_362);
						AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
						task_clear_look_at(PLAYER::PLAYER_PED_ID());
						task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_112, sLocal_362, sLocal_363, 1000f, -1000f, 1024, 0, 1000f, 0);
						_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_100))
						{
							AI::CLEAR_PED_TASKS_immediately(iLocal_100);
							task_synchronized_scene(iLocal_100, iLocal_112, sLocal_362, sLocal_364, 1000f, -4f, 0, 0, 1000f, 0);
						}
						set_cam_active(iLocal_149, true);
						render_script_cams(true, false, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_336, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, sLocal_332, 16);
						StringConCat(&cVar29, "_1", 16);
						func_43(&Local_159, sLocal_335, sLocal_336, &cVar25, sLocal_332, &cVar29, 7, 0, 0);
						settimera(false);
						remove_all_shocking_events(0);
						func_42(joaat("rc_wallets_returned"), 1);
						STATS::STAT_GET_INT(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_150++;
					}
					else
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
						{
						}
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (is_ped_prone(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (is_ped_getting_up(PLAYER::PLAYER_PED_ID()))
						{
						}
					}
					hide_hud_and_radar_this_frame();
					break;
				
				case 1:
					if ((is_synchronized_scene_running(iLocal_112) && get_synchronized_scene_phase(iLocal_112) == 1f) || func_39())
					{
						clear_player_wanted_level(player_id());
						special_ability_fill_meter(player_id(), 0);
						if (!PED::IS_PED_INJURED(iLocal_100))
						{
							set_ped_money(iLocal_100, iLocal_345 - iLocal_345 / 10);
							set_blocking_of_non_temporary_events(iLocal_100, false);
							set_ped_movement_clipset(iLocal_100, sLocal_146, 0.25f);
						}
						if (is_screen_faded_out())
						{
							AI::CLEAR_PED_TASKS_immediately(iLocal_100);
							vVar10 = {get_anim_initial_offset_position(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2)};
							get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
							set_entity_coords(iLocal_100, vVar10, 1, false, 0, 1);
							vVar10 = {get_anim_initial_offset_rotation(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2)};
							set_entity_heading(iLocal_100, vVar10.z);
						}
						vVar10 = {get_anim_initial_offset_rotation(sLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2)};
						if (func_59(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_38(PLAYER::PLAYER_PED_ID(), 215.68f, 60f))
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_follow_nav_mesh_to_coord(false, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
							else if (func_38(PLAYER::PLAYER_PED_ID(), 122.0371f, 60f))
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_follow_nav_mesh_to_coord(false, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
							else
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
						}
						else if (get_distance_between_coords(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_38(PLAYER::PLAYER_PED_ID(), 200.8887f, 60f))
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_follow_nav_mesh_to_coord(false, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
							else if (func_38(PLAYER::PLAYER_PED_ID(), 347.8599f, 60f))
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_follow_nav_mesh_to_coord(false, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
							else
							{
								open_sequence_task(&iLocal_105);
								task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								task_wander_standard(false, get_entity_heading(iLocal_100), 1);
								close_sequence_task(iLocal_105);
								task_perform_sequence(iLocal_100, iLocal_105);
								clear_sequence_task(&iLocal_105);
							}
						}
						else
						{
							open_sequence_task(&iLocal_105);
							task_follow_nav_mesh_to_coord(false, get_offset_from_entity_in_world_coords(iLocal_100, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							task_wander_standard(false, get_entity_heading(iLocal_100), 1);
							close_sequence_task(iLocal_105);
							task_perform_sequence(iLocal_100, iLocal_105);
							clear_sequence_task(&iLocal_105);
						}
						force_ped_motion_state(iLocal_100, -668482597, true, 0, 0);
						set_ped_can_ragdoll(iLocal_100, 1);
						set_ped_keep_task(iLocal_100, true);
						func_37(&iLocal_117);
						settimerb(false);
						stop_gameplay_hint(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
							if (!func_36())
							{
								_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
						{
							delete_object(&iLocal_101);
						}
						if (!PED::IS_PED_INJURED(iLocal_100))
						{
							set_ped_money(iLocal_100, iLocal_345 - iLocal_345 / 10);
						}
						hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
						set_gameplay_cam_relative_heading(0f);
						set_cam_active(iLocal_149, false);
						func_35();
						destroy_cam(iLocal_149, 0);
						set_player_control(player_id(), true, 0);
						if (is_screen_faded_out())
						{
							do_screen_fade_in(500);
							while (is_screen_fading_in())
							{
								wait(0);
							}
						}
						iVar34 = iLocal_345 / 100;
						iVar34 *= 90;
						wait(0);
						_0xC819F3CBB62BF692(0, 0f, 3, 0);
						func_72(0, 1, 1, 0);
						func_3(func_30(), 1, iVar34);
						func_272(1);
					}
					else
					{
						hide_hud_and_radar_this_frame();
						if (has_anim_event_fired(PLAYER::PLAYER_PED_ID(), -3856156))
						{
							if (!PED::IS_PED_INJURED(iLocal_100) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (is_entity_attached_to_entity(iLocal_101, PLAYER::PLAYER_PED_ID()))
								{
									detach_entity(iLocal_101, 0, true);
									if (is_ped_male(iLocal_100))
									{
										attach_entity_to_entity(iLocal_101, iLocal_100, get_ped_bone_index(iLocal_100, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										attach_entity_to_entity(iLocal_101, iLocal_100, get_ped_bone_index(iLocal_100, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(auto uParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_101154.f_32575[uParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_4(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_29();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_28(99, 1);
					func_42(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_12(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_11(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_28(95, iParam3);
					break;
				
				case 1:
					func_28(97, iParam3);
					break;
				
				case 2:
					func_28(96, iParam3);
					break;
			}
			func_28(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_42(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35711 == 15)
	{
		func_5(0);
	}
	return true;
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_9() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_9() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_8(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0)
{
	func_28(93, iParam0);
	func_28(29, iParam0);
	func_28(30, iParam0);
}

int func_11(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_9() /*10375*/].f_7704.f_10, iParam0);
}

bool func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_13(27, 1);
	return true;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

bool func_14(int iParam0, int iParam1)
{
	if (func_26(14) && !func_25(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_24(&Global_2563627))
	{
		if (func_22(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_15(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_15(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return false;
	}
	if (func_22(uParam0, iParam1))
	{
		return false;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
	}
	func_18(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_16(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_16(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return false;
	}
	if (func_22(uParam0, iParam1))
	{
		return false;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_17(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_17(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_18(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0, iVar0);
		iVar0++;
	}
	func_20(uParam0, Global_2563626 - 0.5f);
}

void func_19(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_20(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_21(auto uParam0)
{
	return *uParam0.f_72;
}

int func_22(auto uParam0, int iParam1)
{
	return func_23(uParam0, iParam1) != -1;
}

int func_23(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_24(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_25(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_29()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

auto func_30()
{
	func_31();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_31()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_33(PLAYER::PLAYER_PED_ID());
			if (func_32(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_32(Global_101154.f_1826.f_539.f_3549))
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

int func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = create_camera_with_params(26379945, get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, get_entity_heading(PLAYER::PLAYER_PED_ID()), 65f, 1, 2);
	set_cam_active(iVar0, true);
}

bool func_36()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

void func_37(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

bool func_38(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = fParam1 + fParam2 / 2f;
	if (fVar0 > 360f)
	{
		fVar0 -= 360f;
	}
	fVar1 = fParam1 - fParam2 / 2f;
	if (fVar1 < 0f)
	{
		fVar1 += 360f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (get_entity_heading(iParam0) < fVar0 && get_entity_heading(iParam0) > fVar1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (get_entity_heading(iParam0) < fVar0 || get_entity_heading(iParam0) > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_39()
{
	if (func_40(1000))
	{
		do_screen_fade_out(500);
		while (is_screen_fading_out())
		{
			hide_hud_and_radar_this_frame();
			wait(0);
		}
		return true;
	}
	return false;
}

bool func_40(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_41())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_41()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_43(auto uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	auto uVar11;
	
	func_54(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_53(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_44(&uVar0, &uVar11, iParam6, 0);
}

bool func_44(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (iParam3 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
				}
				else
				{
					func_52();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_51(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_50();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = {Global_15892[0 /*6*/]};
			Global_15866[1 /*6*/] = {Global_15892[1 /*6*/]};
			Global_15918[0 /*6*/] = {Global_15944[0 /*6*/]};
			Global_15918[1 /*6*/] = {Global_15944[1 /*6*/]};
			Global_15879[0 /*6*/] = {Global_15905[0 /*6*/]};
			Global_15879[1 /*6*/] = {Global_15905[1 /*6*/]};
			Global_15931[0 /*6*/] = {Global_15957[0 /*6*/]};
			Global_15931[1 /*6*/] = {Global_15957[1 /*6*/]};
		}
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam3)
			{
				func_49();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_48())
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (Global_15970 == 0)
					{
						if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
						{
							return false;
						}
						if (is_player_climbing(player_id()))
						{
							return false;
						}
						if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
						{
							return false;
						}
						if (is_special_ability_active(player_id()))
						{
							return false;
						}
					}
				}
			}
			if (func_47())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_46();
			Global_15722 = iParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), *uParam0[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), *uParam1[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_45();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
	{
		return false;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_52();
	}
	return false;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_46()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_47()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_49()
{
	if (func_26(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_30();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_51(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_52()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_53(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15709 = iParam0;
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	*uParam1[0] = uParam3;
	*uParam2[0] = uParam4;
	*uParam1[1] = uParam5;
	*uParam2[1] = uParam6;
	*uParam1[2] = iParam7;
	*uParam2[2] = iParam8;
	*uParam1[3] = iParam9;
	*uParam2[3] = iParam10;
	*uParam1[4] = iParam11;
	*uParam2[4] = iParam12;
	*uParam1[5] = iParam13;
	*uParam2[5] = iParam14;
	*uParam1[6] = iParam15;
	*uParam2[6] = iParam16;
}

void func_54(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_55(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_56(Vector3 vParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	auto uVar16;
	auto uVar19;
	Vector3 vVar22;
	Vector3 vVar25;
	auto uVar28;
	int iVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = get_players_last_vehicle();
	if (!is_entity_a_mission_entity(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, 0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar0), &vVar7, &vVar10);
	get_nth_closest_vehicle_node(vParam0, 3, &vVar4, 1, 3f, 0f);
	if (vdist(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = {-3045.49f, 604.46f, 7.02f};
		iVar13 = 8;
	}
	else if (vdist(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = {278.97f, -1255.06f, 28.88f};
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y + IntToFloat(iVar14), 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y + IntToFloat(iVar14), 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y + IntToFloat(iVar14), 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y + IntToFloat(iVar14), 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = {func_57(vVar1, 0f, vVar10)};
						vVar25 = {func_57(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y - IntToFloat(iVar14), 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y - IntToFloat(iVar14), 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y - IntToFloat(iVar14), 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y - IntToFloat(iVar14), 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = {func_57(vVar1, 0f, vVar10)};
						vVar25 = {func_57(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, vVar10.x + IntToFloat(iVar14), 0f, 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, -vVar10.x + IntToFloat(iVar14), 0f, 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, vVar10.x + IntToFloat(iVar14), 0f, 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, -vVar10.x + IntToFloat(iVar14), 0f, 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = {func_57(vVar1, 0f, vVar10)};
						vVar25 = {func_57(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, vVar10.x - IntToFloat(iVar14), 0f, 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, -vVar10.x - IntToFloat(iVar14), 0f, 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, vVar10.x - IntToFloat(iVar14), 0f, 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, -vVar10.x - IntToFloat(iVar14), 0f, 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = {func_57(vVar1, 0f, vVar10)};
						vVar25 = {func_57(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(false);
	}
	return vVar1;
}

Vector3 func_57(Vector3 vParam0, float fParam1, struct<2> Param2, auto uParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	Vector3 fVar5;
	Vector3 vVar6;
	
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = Param4 * fVar4 + Param4.f_1 * fVar5;
	vVar0.y = Param4.f_1 * fVar4 - Param4 * fVar5;
	vVar6 = {vParam0 + vVar0};
	return vVar6;
}

bool func_58(int iParam0)
{
	if (func_100(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_59(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_60(int iParam0, auto uParam1, auto uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	Vector3 fVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 vVar16;
	auto uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	*uParam2.f_2 = func_62(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_62(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_62(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	vVar16 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	if (has_anim_dict_loaded(sParam3))
	{
		vVar13 = {get_anim_initial_offset_position(sParam3, sParam4, *uParam1, *uParam2, 0, 2)};
	}
	else
	{
		vVar13 = {*uParam1 + Vector(0f, 5f, 5f)};
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					*uParam2.f_2 = func_61(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
					*uParam1 = {_get_object_offset_from_coords(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam2.f_2, vVar16)};
					iVar0 = 2;
				}
				else
				{
					iVar5 = _cast_3d_ray_point_to_point(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, false, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (_get_raycast_result(iVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > *uParam1.f_2 + 8.5f)
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 += 7.5f;
							}
							else
							{
								fVar4 = fVar3 - 7.5f * IntToFloat(iVar2);
								iVar2++;
							}
							*uParam1 = {_get_object_offset_from_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar4, vVar16)};
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							*uParam2.f_2 = func_61(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(false);
	}
}

float func_61(struct<2> Param0, Vector3 fParam1, struct<2> Param2, auto uParam3, int iParam4)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	
	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1f;
		if (fVar0 < 0f)
		{
			fVar0 += 360f;
		}
	}
	return fVar0;
}

float func_62(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
	return func_61(vVar0, vVar3, iParam2);
}

void func_63(Vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - vParam0};
		fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_64(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			iVar0 = true;
		}
		vVar1 = {vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_64(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*fParam3 = 6f * 4f;
		}
		else if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*fParam3 = 6f * 3f;
		}
		else if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*fParam3 = 6f * 2f;
		}
		else
		{
			*fParam3 = 6f;
		}
		*fParam4 = *fParam3 / 1.33f - 1f;
	}
	else
	{
		*fParam3 = 6f;
		*fParam4 = *fParam3 / 1.33f - 1f;
	}
}

bool func_64(int iParam0, float fParam1, float fParam2)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		fVar0 = get_entity_heading(iParam0);
		fVar2 = fParam1 - fParam2;
		if (fVar2 < 0f)
		{
			fVar2 += 360f;
		}
		fVar1 = fParam1 + fParam2;
		if (fVar1 >= 360f)
		{
			fVar1 -= 360f;
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return true;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return true;
		}
	}
	return false;
}

void func_65()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_68(0))
		{
			func_66(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_66(int iParam0)
{
	if (Global_14571)
	{
		func_67(0, 0);
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
	if (!func_47())
	{
		Global_14413.f_1 = 3;
	}
}

void func_67(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_68(0))
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

bool func_68(int iParam0)
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

void func_69()
{
	Global_14578 = 0;
	func_70();
}

void func_70()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_71(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_80(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_47())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_79(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_80(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_79(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_77(player_id())) && !func_74(player_id(), 0)) && !func_73())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_77(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_73()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_75(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

auto func_76()
{
	return Global_1312747;
}

bool func_77(int iParam0)
{
	if (func_74(iParam0, 0))
	{
		return true;
	}
	if (func_78())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_78()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_79(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_80(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

void func_81()
{
	Global_14578 = 0;
	func_52();
}

bool func_82()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_83()
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_82())
		{
			return true;
		}
	}
	return false;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (iParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

int func_85(int iParam0)
{
	return func_86(func_87(iParam0));
}

int func_86(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

char* func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_88()
{
	switch (iLocal_116)
	{
		case 1:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 2:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 3:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 4:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 6:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 8:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 11:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 16:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 17:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 18:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 19:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 22:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 23:
			if ((!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 25:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 30:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, true, 0))
			{
				return true;
			}
			break;
		
		case 31:
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, true, 0))
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return true;
	}
	return false;
}

void func_89()
{
	auto uVar0;
	
	if (!iLocal_147)
	{
		if (iLocal_338)
		{
			func_97();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_99))
			{
				if (is_player_free_aiming_at_entity(player_id(), iLocal_99) || is_player_targetting_entity(player_id(), iLocal_99))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_338 = 1;
					}
				}
			}
			else
			{
				iLocal_338 = 1;
			}
			func_107(iLocal_103, &uLocal_114);
		}
		if (!iLocal_339)
		{
			if (iLocal_142)
			{
				if (has_pickup_been_collected(iLocal_141))
				{
					func_42(joaat("rc_wallets_recovered"), 1);
					STATS::STAT_GET_INT(joaat("rc_wallets_recovered"), &uVar0, -1);
					set_pad_shake(0, 200, 250);
					func_90(2);
					iLocal_147 = true;
				}
				else if (does_blip_exist(iLocal_104))
				{
					if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), get_pickup_coords(iLocal_141)) > 150f)
					{
						if (PED::IS_PED_INJURED(iLocal_100))
						{
							func_254();
						}
						else if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_100, 1)) > 100f)
						{
							func_254();
						}
					}
				}
			}
		}
	}
}

void func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_91(func_87(iParam0), -1);
					Global_101154.f_29520.f_2++;
					GAMEPLAY::SET_BIT(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_101150, true))
			{
				if (!is_help_message_on_screen())
				{
					func_91(func_87(iParam0), -1);
					Global_101154.f_29520.f_3++;
					GAMEPLAY::SET_BIT(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_101150, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_91(func_87(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_91(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_92(auto uParam0)
{
	*uParam0 = -99;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_94(iParam0, iParam1, 145);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_95(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_96(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_96(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_96(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_96(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_97()
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!iLocal_142)
	{
		GAMEPLAY::SET_BIT(&iVar1, 3);
		GAMEPLAY::SET_BIT(&iVar1, 4);
		GAMEPLAY::SET_BIT(&iVar1, true);
		iLocal_141 = create_pickup(iVar0, get_dead_ped_pickup_coords(iLocal_99, 1067030938, 1069547520), iVar1, iLocal_345, 1, iLocal_153);
		iLocal_142 = true;
		iLocal_104 = func_98(iLocal_141);
		func_110(&Local_159, sLocal_335, sLocal_331, 4, 0, 0, 0);
		if (does_blip_exist(iLocal_103))
		{
			remove_blip(&iLocal_103);
		}
		if (func_100(iLocal_100))
		{
			AI::CLEAR_PED_TASKS(iLocal_100);
		}
	}
	else
	{
		if (!iLocal_143)
		{
			if (!func_158(iLocal_100, 242628503) && !PED::IS_PED_INJURED(iLocal_100))
			{
				open_sequence_task(&iLocal_105);
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_100, vLocal_354, 0.5f, 0.5f, 0.5f, false, true, 0))
				{
					task_go_straight_to_coord(false, vLocal_354, 1f, 20000, 1193033728, 0.5f);
				}
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_105);
				task_perform_sequence(iLocal_100, iLocal_105);
				clear_sequence_task(&iLocal_105);
			}
		}
		if (iLocal_143)
		{
			if (!iLocal_147)
			{
				if (!PED::IS_PED_INJURED(iLocal_100))
				{
					if (is_entity_playing_anim(iLocal_100, sLocal_145, "pickup_low", 3))
					{
						if (get_entity_anim_current_time(iLocal_100, sLocal_145, "pickup_low") > 0.35f)
						{
							if (does_pickup_exist(iLocal_141))
							{
								func_110(&Local_159, sLocal_335, sLocal_332, 4, 0, 0, 0);
								remove_pickup(iLocal_141);
								set_ped_money(iLocal_100, iLocal_345);
								set_blocking_of_non_temporary_events(iLocal_100, false);
								set_ped_as_no_longer_needed(&iLocal_100);
								func_272(1);
							}
						}
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_100, 242628503) == 7)
					{
						AI::CLEAR_PED_TASKS(iLocal_100);
						open_sequence_task(&iLocal_105);
						AI::TASK_PLAY_ANIM(false, sLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 3000);
						task_wander_standard(false, 1193033728, 0);
						close_sequence_task(iLocal_105);
						task_perform_sequence(iLocal_100, iLocal_105);
						clear_sequence_task(&iLocal_105);
						set_ped_keep_task(iLocal_100, true);
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_100))
		{
			if (does_pickup_exist(iLocal_141))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_100, get_pickup_coords(iLocal_141), 10f, 10f, 7f, false, true, 0))
				{
					AI::CLEAR_PED_TASKS(iLocal_100);
					open_sequence_task(&iLocal_105);
					task_follow_nav_mesh_to_coord(false, get_pickup_coords(iLocal_141), 1f, 20000, 1f, 512, 1193033728);
					task_turn_ped_to_face_coord(false, get_pickup_coords(iLocal_141), 0);
					AI::TASK_PLAY_ANIM(false, sLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 3000);
					task_wander_standard(false, 1193033728, 0);
					close_sequence_task(iLocal_105);
					task_perform_sequence(iLocal_100, iLocal_105);
					clear_sequence_task(&iLocal_105);
					set_ped_keep_task(iLocal_100, true);
					iLocal_143 = 1;
				}
			}
		}
	}
}

int func_98(int iParam0)
{
	return func_99(iParam0);
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_96(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

bool func_100(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_101()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 1))
			{
				clear_entity_last_damage_entity(iLocal_99);
				iVar0 = true;
			}
			if (is_vehicle_driveable(iLocal_117, 0) && is_ped_in_vehicle(iLocal_99, iLocal_117, 0))
			{
				if (does_vehicle_have_stuck_vehicle_check(iLocal_117))
				{
					if (is_vehicle_stuck_on_roof(iLocal_117))
					{
						iVar0 = true;
					}
				}
			}
			else if (!is_vehicle_driveable(iLocal_117, 0) || !func_158(iLocal_99, -1273030092))
			{
				iVar0 = true;
			}
			if (!is_ped_fleeing(iLocal_99))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(iLocal_99, -1273030092) == 7)
				{
					iVar0 = true;
				}
			}
			if (iVar0)
			{
				if (!iLocal_138)
				{
					if (is_ped_in_vehicle(iLocal_99, iLocal_117, 0))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 0)
						{
							open_sequence_task(&iLocal_106);
							task_leave_any_vehicle(false, false, 0);
							AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							close_sequence_task(iLocal_106);
							task_perform_sequence(iLocal_99, iLocal_106);
							clear_sequence_task(&iLocal_106);
						}
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 0)
					{
						open_sequence_task(&iLocal_106);
						AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						close_sequence_task(iLocal_106);
						task_perform_sequence(iLocal_99, iLocal_106);
						clear_sequence_task(&iLocal_106);
					}
					iVar1 = get_navmesh_route_result(iLocal_99);
					if (iVar1 == 2)
					{
						AI::CLEAR_PED_TASKS(iLocal_99);
						if (func_100(PLAYER::PLAYER_PED_ID()))
						{
							task_combat_ped(iLocal_99, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						iLocal_138 = 1;
					}
				}
			}
			break;
	}
}

bool func_102()
{
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_99, 180f, 180f, 50f, 0, 1, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_99))
		{
			func_103(iLocal_103, iLocal_99, 180f, 1061158912, 0);
			return true;
		}
		else
		{
			if (Local_159[2 /*10*/].f_7)
			{
				func_161(&Local_159, 2);
			}
			PED::DELETE_PED(&iLocal_99);
			if (is_vehicle_driveable(iLocal_117, 0))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_117))
				{
					delete_vehicle(&iLocal_117);
				}
			}
		}
	}
	else if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_99, 0)) < 300f)
	{
		return true;
	}
	return false;
}

void func_103(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar2 = fParam2 * fParam3;
	if (does_blip_exist(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_a_vehicle(iParam1))
			{
				if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam1), 0))
				{
					fVar1 = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (is_entity_a_ped(iParam1))
			{
				if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam1)))
				{
					fVar1 = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_105(iParam2), 1);
}

int func_105(int iParam0)
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

auto func_106(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	else
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

void func_107(int iParam0, auto uParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (GAMEPLAY::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (get_blip_colour(iParam0) == 1)
			{
				set_blip_as_friendly(iParam0, true);
			}
			else
			{
				set_blip_as_friendly(iParam0, false);
				set_blip_colour(iParam0, 1);
			}
			*uParam1 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (!is_help_message_being_displayed() && func_108(0))
		{
			func_90(1);
		}
	}
}

int func_108(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101150, iParam0);
}

void func_109()
{
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (is_vehicle_driveable(iLocal_117, 0))
			{
				if (iLocal_338)
				{
					if (is_ped_sitting_in_vehicle(iLocal_99, iLocal_117) || AI::GET_SCRIPT_TASK_STATUS(iLocal_99, -1273030092) == 1)
					{
						task_vehicle_mission_coors_target(iLocal_99, iLocal_117, vLocal_95, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!does_vehicle_have_stuck_vehicle_check(iLocal_117))
					{
						add_vehicle_stuck_check_with_warp(iLocal_117, 0.1f, 1000, 0, 0, 0, -1);
					}
					task_vehicle_mission_coors_target(iLocal_99, iLocal_117, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_338)
			{
				open_sequence_task(&iLocal_105);
				task_follow_nav_mesh_to_coord(false, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				task_follow_nav_mesh_to_coord(false, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				close_sequence_task(iLocal_105);
				task_perform_sequence(iLocal_99, iLocal_105);
				clear_sequence_task(&iLocal_105);
			}
			else
			{
				AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (get_distance_between_coords(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				task_smart_flee_coord(iLocal_99, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				clear_sequence_task(&iLocal_105);
			}
			else if (iLocal_338)
			{
				AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			else
			{
				task_smart_flee_coord(iLocal_99, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		set_ped_keep_task(iLocal_99, true);
	}
}

int func_110(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_111(sParam2, iParam3, 0);
}

bool func_111(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_52();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_51(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_50();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_49();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_48())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_47())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_46();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_45();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_52();
	}
	return false;
}

int func_112()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	
	vVar1 = {6f, 6f, 6f};
	vVar4 = {-6f, -6f, -6f};
	if (!PED::IS_PED_INJURED(iLocal_100))
	{
		if (is_player_playing(player_id()))
		{
			if (is_player_free_aiming_at_entity(player_id(), iLocal_100))
			{
				iLocal_111++;
				if (iLocal_111 > 60)
				{
					iVar0 = true;
				}
			}
			else
			{
				iLocal_111 = 0;
			}
		}
		if (is_bullet_in_area(get_ped_bone_coords(iLocal_100, 31086, 0f, 0f, 0f), 2f, 1))
		{
			iVar0 = true;
		}
		vVar1 = {vVar1 + get_ped_bone_coords(iLocal_100, 31086, 0f, 0f, 0f)};
		vVar4 = {vVar4 + get_ped_bone_coords(iLocal_100, 31086, 0f, 0f, 0f)};
		if ((is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_stickybomb"), 1))
		{
			iVar0 = true;
		}
		if (_0x2F09F7976C512404(get_ped_bone_coords(iLocal_100, 31086, 0f, 0f, 0f), 12f))
		{
			iVar0 = true;
		}
		if (is_explosion_in_sphere(-1, get_ped_bone_coords(iLocal_100, 31086, 0f, 0f, 0f), 50f))
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		if (!func_114())
		{
		}
		else
		{
			iVar0 = false;
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_100, 474215631) != 1)
			{
				if (func_113(iLocal_100))
				{
					task_cower(iLocal_100, 2000);
				}
			}
		}
	}
	return iVar0;
}

bool func_113(int iParam0)
{
	if (func_100(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_114()
{
	if (func_100(iLocal_99))
	{
		if (func_106(iLocal_100, iLocal_99, 1) < 22f)
		{
			return true;
		}
	}
	return false;
}

int func_115()
{
	int iVar0;
	
	iVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		if (PED::IS_PED_INJURED(iLocal_100))
		{
			iVar0 = true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_100))
			{
				iVar0 = true;
				clear_entity_last_damage_entity(iLocal_100);
			}
			if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iLocal_100, 1), 1f, 1))
			{
				iVar0 = true;
			}
			if (func_116(iLocal_100, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				iVar0 = true;
			}
		}
	}
	if (iVar0)
	{
		if (func_114())
		{
			iVar0 = false;
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_100, 474215631) != 1)
			{
				if (func_113(iLocal_100))
				{
					task_cower(iLocal_100, 2000);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_99))
		{
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_99, 1805844857) == 7)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, false);
				AI::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
		}
	}
	return iVar0;
}

int func_116(int iParam0, int iParam1, Vector3 fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Vector3 vVar0;
	
	if (func_100(PLAYER::PLAYER_PED_ID()) && func_100(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_130(iParam0, iParam1, iParam5, iParam6, iParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
			{
				vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f)
				{
					return func_129(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (iParam4)
		{
			return 0;
		}
		else if (func_117(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_117(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_100(PLAYER::PLAYER_PED_ID()) && func_100(iParam0))
	{
		if (func_128(iParam0) || is_player_targetting_entity(player_id(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_118(iParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_118(int iParam0, float fParam1)
{
	return func_119(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_119(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	int iVar4;
	
	iVar4 = func_127(iParam0, iParam1);
	if (!func_100(iParam0) || !func_100(iParam1))
	{
		if (iVar4 != -1)
		{
			func_126(&(Local_49[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_123(iParam0, iParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_122();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	uVar0 = func_120(&(Local_49[iVar4 /*4*/]), vVar1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || GAMEPLAY::GET_GAME_TIMER() - Local_49[iVar4 /*4*/].f_3 < iParam4);
}

bool func_120(auto uParam0, Vector3 vParam1, int iParam2, auto uParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = false;
	if (!func_100(iParam4))
	{
		*uParam0 = 0;
		return false;
	}
	if (*uParam0 == 0)
	{
		vVar1 = {func_121(iParam4, iParam7)};
		*uParam0 = _0x7EE9F5D83DD4F90E(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return false;
	}
	iVar8 = _get_raycast_result(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return false;
	}
	else if (iVar8 == 1)
	{
		return false;
	}
	*uParam0 = 0;
	if (is_entity_a_ped(iVar7))
	{
		func_100(iVar7);
		if (get_ped_index_from_entity_index(iVar7) == iParam4)
		{
			if (iLocal_90)
			{
				draw_debug_line_with_two_colours(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = GAMEPLAY::GET_GAME_TIMER();
			return true;
		}
		return false;
	}
	if (is_entity_a_vehicle(iVar7))
	{
		func_100(iVar7);
		if (is_ped_in_any_vehicle(iParam4, 0))
		{
			if (get_vehicle_index_from_entity_index(iVar7) == get_vehicle_ped_is_in(iParam4, 0))
			{
				if (iLocal_90)
				{
					draw_debug_line_with_two_colours(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
		return false;
	}
	return false;
}

Vector3 func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = get_random_int_in_range(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_122()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_123(int iParam0, int iParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_125(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_125(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_124(vVar3, vVar0);
	if (fVar6 <= cos(fParam2 / 2f))
	{
		return false;
	}
	return true;
}

float func_124(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_125(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_126(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_128(int iParam0)
{
	if (is_player_free_aiming_at_entity(player_id(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return true;
	}
	return false;
}

int func_129(int iParam0, int iParam1, Vector3 fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_forward_vector(iParam0)};
	vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	return vVar0.x * vVar3.x + vVar0.y * vVar3.y / vdist(vVar3, 0f, 0f, 0f) > cos(fParam2);
}

bool func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2)
	{
		fVar0 = 2f;
	}
	if (func_100(PLAYER::PLAYER_PED_ID()) && func_100(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2)
		{
			if (func_134(iParam0, iParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_131(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
		else
		{
			if (is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return true;
					}
				}
			}
			else
			{
				if (iParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_134(iParam0, iParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_131(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_131(int iParam0, float fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (iParam2)
	{
		if (((_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (iParam3)
			{
				if (func_132(iParam0, fParam1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			return true;
		}
	}
	else
	{
		if (iParam3)
		{
			if (func_132(iParam0, fParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (is_projectile_in_area(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_132(int iParam0, float fParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if ((((_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_133(iParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_133(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_125(vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_125(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_124(vVar3, vVar0);
	if (fVar6 <= cos(fParam4 / 2f))
	{
		return false;
	}
	return true;
}

bool func_134(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam1)
	{
		if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return true;
	}
	return false;
}

void func_135()
{
	if (iLocal_142 || ENTITY::IS_ENTITY_DEAD(iLocal_99, 0))
	{
		func_156(&uLocal_372, 0, 0);
	}
	else
	{
		func_136(&uLocal_372, iLocal_99, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_136(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_137(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_137(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	func_138(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, uParam5, iParam6);
}

void func_138(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_156(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_139(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_139(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (is_string_null(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_86(iVar0))
	{
		func_155();
	}
	if (func_154(iParam1) && is_entity_visible(iParam1))
	{
		iVar1 = 0;
		if (is_entity_a_ped(iParam1))
		{
			_0x7D7A2E43E74E2EB8(get_ped_index_from_entity_index(iParam1));
			get_ped_flood_invincibility(get_ped_index_from_entity_index(iParam1), 1);
			if (is_tracked_ped_visible(get_ped_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_a_vehicle(iParam1))
		{
			track_vehicle_visibility(get_vehicle_index_from_entity_index(iParam1));
			if (is_vehicle_visible(get_vehicle_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_an_object(iParam1))
		{
			track_object_visibility(get_object_index_from_entity_index(iParam1));
			if (is_object_visible(get_object_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!is_gameplay_hint_active())
		{
			if (func_149(uParam0, iParam7, iParam9, 0))
			{
				func_146(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_143(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_86(iVar0))
							{
								func_91(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_142(1);
								}
							}
						}
					}
				}
			}
			else if (func_143(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_86(iVar0))
						{
							func_91(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_142(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!is_string_null(sParam5))
			{
				if (func_86(sParam5))
				{
					clear_help(1);
				}
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_156(uParam0, iVar0, 1);
				}
			}
			if (!func_149(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_141(uParam0))
				{
					func_140(uParam0);
				}
			}
		}
	}
	else
	{
		func_156(uParam0, iVar0, 0);
	}
}

void func_140(auto uParam0)
{
	if (func_154(PLAYER::PLAYER_PED_ID()))
	{
		task_clear_look_at(PLAYER::PLAYER_PED_ID());
	}
	if (is_gameplay_hint_active())
	{
		set_cinematic_button_active(true);
		stop_gameplay_hint(0);
		stop_audio_scene("HINT_CAM_SCENE");
		_stop_screen_effect("FocusIn");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	*uParam0.f_2 = -1;
	*uParam0 = 1;
}

bool func_141(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > GAMEPLAY::GET_GAME_TIMER())
		{
			return true;
		}
	}
	return false;
}

int func_142(int iParam0)
{
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (iParam0)
			{
				Global_101154.f_8739.f_100++;
			}
			return Global_101154.f_8739.f_100;
			break;
		
		case 4:
			if (iParam0)
			{
				Global_101154.f_8739.f_101++;
			}
			return Global_101154.f_8739.f_101;
			break;
		
		case 5:
		case 15:
			if (iParam0)
			{
				Global_101154.f_8739.f_102++;
			}
			return Global_101154.f_8739.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

bool func_143(char* sParam0)
{
	if (!func_144(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_86(sParam0)) || func_86("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_142(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_142(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_142(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_144(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (iParam2)
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (func_68(0))
	{
		return false;
	}
	if (func_145())
	{
		return false;
	}
	if (_network_is_text_chat_active())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (iParam1)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				return false;
			}
			if (is_gameplay_cam_looking_behind())
			{
				return false;
			}
		}
	}
	return true;
}

int func_145()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_146(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_156(uParam0, 0, 0);
	}
	if (func_55(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_147())
					{
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (is_ped_male(iVar0))
				{
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	set_cinematic_button_active(false);
	iVar1 = *uParam0.f_9;
	iVar2 = *uParam0.f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	task_look_at_entity(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

int func_147()
{
	return func_148(player_id());
}

bool func_148(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

bool func_149(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	switch (*uParam0.f_5)
	{
		case 0:
			*uParam0.f_7 = 0;
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_153(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_152(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_152(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_153(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_141(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_153(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_152(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_152(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_153(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*uParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_153(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_152(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_152(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_153(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_151(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_150(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_150(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_151(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_141(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_144(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_155();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_150(int iParam0, int iParam1, int iParam2)
{
	if (!func_144(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_151(int iParam0, int iParam1, int iParam2)
{
	if (!func_144(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_just_released(0, 80))
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_152(int iParam0, int iParam1, int iParam2)
{
	if (!func_144(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_153(int iParam0, int iParam1, int iParam2)
{
	if (!func_144(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_154(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), 0))
			{
				return true;
			}
		}
		else if (is_entity_a_ped(iParam0))
		{
			if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam0)))
			{
				return true;
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_155()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

void func_156(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(iParam2);
		_stop_screen_effect("FocusIn");
		stop_audio_scene("HINT_CAM_SCENE");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	set_cinematic_button_active(true);
	*uParam0.f_1 = 0;
	*uParam0 = 0;
	*uParam0.f_2 = -1;
	*uParam0.f_8 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	sVar0 = iParam1;
	if (is_string_null(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!is_string_null(*uParam0.f_3))
	{
		if (func_86(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_86(sVar0))
		{
			clear_help(1);
		}
	}
}

auto func_157(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

bool func_158(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_159(char* sParam0)
{
	func_160(sParam0);
}

void func_160(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

void func_161(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_162()
{
	open_sequence_task(&iLocal_105);
	task_turn_ped_to_face_entity(false, iLocal_99, 750);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(false, sLocal_368, sLocal_371, 8f, -2f, -1, 1, 0, 0, 0, 0);
	close_sequence_task(iLocal_105);
	task_perform_sequence(iLocal_100, iLocal_105);
	clear_sequence_task(&iLocal_105);
	if (does_blip_exist(iLocal_102))
	{
		remove_blip(&iLocal_102);
	}
	if (!does_blip_exist(iLocal_103))
	{
		iLocal_103 = func_93(iLocal_99, 1, 0);
	}
	_0x75A16C3DA34F1245(iLocal_103, true);
	set_create_random_cops(false);
	set_wanted_level_multiplier(0.1f);
	func_109();
	if ((vdist(ENTITY::GET_ENTITY_COORDS(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) > 5f && get_distance_between_coords(vLocal_95, -203.72f, -861.8f, 29.27f, 1) > 5f) && get_distance_between_coords(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_106(PLAYER::PLAYER_PED_ID(), iLocal_100, 1) < 50f)
		{
			func_110(&Local_159, sLocal_335, sLocal_327, 3, 0, 0, 0);
			iLocal_137 = 1;
		}
	}
	iLocal_110 = GAMEPLAY::GET_GAME_TIMER();
	settimera(false);
	if (func_100(PLAYER::PLAYER_PED_ID()))
	{
		stop_ped_speaking(PLAYER::PLAYER_PED_ID(), 1);
	}
	func_163(1);
}

bool func_163(int iParam0)
{
	if (func_165())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_164(Global_101143))
		{
			func_90(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_164(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

bool func_164(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
			break;
	}
	return true;
}

bool func_165()
{
	switch (func_166(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return true;
			break;
		
		case 0:
			return true;
			break;
	}
	return false;
}

int func_166(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_170(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_168(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_167(uParam0, iParam4);
		}
	}
	return 2;
}

void func_167(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_168(int iParam0)
{
	return func_169(iParam0, Global_35711);
}

bool func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_168(iParam0))
	{
		return false;
	}
	return true;
}

bool func_171()
{
	if (iLocal_346 == -1)
	{
		if (is_first_person_aim_cam_active())
		{
			if (is_entity_on_screen(iLocal_99))
			{
				iLocal_346 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_346 + 1000)
	{
		return true;
	}
	if (is_explosion_in_sphere(-1, vLocal_95, 50f))
	{
		return true;
	}
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_347 > 30000)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_99))
		{
			return true;
		}
		else
		{
			func_254();
		}
	}
	if (does_blip_exist(iLocal_103))
	{
		if ((get_distance_between_coords(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) > 5f && get_distance_between_coords(vLocal_95, -712.9f, -819.32f, 22.73f, 1) > 5f) && get_distance_between_coords(vLocal_95, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (is_sphere_visible(ENTITY::GET_ENTITY_COORDS(iLocal_99, 0), 2.5f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_172()
{
	if (vdist(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!does_blip_exist(iLocal_103))
		{
			if (func_100(iLocal_100) && func_100(PLAYER::PLAYER_PED_ID()))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_103 = func_93(iLocal_99, 1, 0);
					_0x75A16C3DA34F1245(iLocal_103, false);
				}
			}
		}
		else
		{
			func_107(iLocal_103, &uLocal_114);
		}
	}
	else if (!does_blip_exist(iLocal_103))
	{
		if (func_100(iLocal_100) && func_100(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_100, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_103 = func_93(iLocal_99, 1, 0);
				_0x75A16C3DA34F1245(iLocal_103, false);
			}
		}
	}
	else
	{
		func_107(iLocal_103, &uLocal_114);
	}
	if (iLocal_347 == -1)
	{
		iLocal_347 = GAMEPLAY::GET_GAME_TIMER();
	}
}

bool func_173()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	
	vVar0 = {vLocal_95};
	vVar3 = {0f, 0f, fLocal_98};
	vVar6 = {10f, 10f, 5f};
	if (iLocal_109 == 1)
	{
		func_197();
		if (vdist(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_118 = {-197.9643f, -868.5554f, 28.2738f};
			fLocal_124 = 196f;
			vLocal_121 = {-187.5415f, -858.1728f, 28.1863f};
			fLocal_125 = 160.391f;
			vLocal_348 = {-259.0351f, -865.7119f, 28f};
			vLocal_351 = {-130.3981f, -908.8096f, 40f};
			assisted_movement_request_route("ATM_1");
			STREAMING::REQUEST_MODEL(iLocal_158);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_158))
			{
				if (func_184())
				{
					func_254();
				}
				wait(false);
			}
			set_vehicle_model_is_suppressed(iLocal_158, true);
		}
		else
		{
			vLocal_118 = {-2968.5f, 494.48f, 14.82f};
			fLocal_124 = 55.24f;
			vLocal_121 = {-2973.03f, 496.38f, 14.96f};
			fLocal_125 = 3.18f;
			vLocal_348 = {-259.0351f, -865.7119f, 28f};
			vLocal_351 = {-130.3981f, -908.8096f, 40f};
			STREAMING::REQUEST_MODEL(iLocal_158);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_158))
			{
				if (func_184())
				{
					func_254();
				}
				wait(false);
			}
			set_vehicle_model_is_suppressed(iLocal_158, true);
		}
	}
	else if (iLocal_109 == 2)
	{
		func_197();
		vLocal_118 = {283.31f, -1249.51f, 28.95f};
		fLocal_124 = 78.25f;
		vLocal_121 = {288.9906f, -1248.443f, 28.2847f};
		fLocal_125 = 75.9756f;
		vLocal_348 = {266.3643f, -1313.829f, 28.59103f};
		vLocal_351 = {265.1489f, -1215.932f, 36.20192f};
		STREAMING::REQUEST_MODEL(iLocal_158);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_158))
		{
			if (func_184())
			{
				func_254();
			}
			wait(false);
		}
		set_vehicle_model_is_suppressed(iLocal_158, true);
	}
	else if (iLocal_109 == 3)
	{
		func_197();
		vLocal_121 = {-1587.15f, -539.9152f, 34.3644f};
		fLocal_125 = 327f;
		vLocal_348 = {-1596.203f, -474.8844f, 32f};
		vLocal_351 = {-1595.572f, -565.8368f, 48f};
	}
	else if (iLocal_109 == 4)
	{
		func_197();
		vLocal_118 = {181.2355f, 6632.627f, 30.5732f};
		fLocal_124 = 182f;
		vLocal_121 = {200.0727f, 6630.587f, 30.517f};
		fLocal_125 = 165f;
		vLocal_348 = {178.1817f, 6660.375f, 31f};
		vLocal_351 = {179.1249f, 6530.043f, 38f};
		_0xD79185689F8FD5DF(0);
		set_all_vehicle_generators_active_in_area(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, false, 1);
		STREAMING::REQUEST_MODEL(iLocal_158);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_158))
		{
			if (func_184())
			{
				func_254();
			}
			wait(false);
		}
		set_vehicle_model_is_suppressed(iLocal_158, true);
	}
	else if (iLocal_109 == 5)
	{
		func_197();
	}
	if (func_175())
	{
		clear_area(vLocal_95, vVar6.x, 0, 0, 0, false);
		iLocal_107 = add_scenario_blocking_area(vLocal_95 - vVar6, vLocal_95 + vVar6, 0, 1, 1, 1);
		iLocal_100 = PED::CREATE_PED(5, iLocal_157, vLocal_95, fLocal_98, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 11, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 17, false);
		set_ped_component_variation(iLocal_100, 6, true, false, 0);
		set_entity_load_collision_flag(iLocal_100, true);
		set_entity_only_damaged_by_player(iLocal_100, true);
		set_ped_can_be_targetted(iLocal_100, false);
		set_ambient_voice_name(iLocal_100, sLocal_367);
		set_ped_money(iLocal_100, false);
		if (iLocal_115 == 1)
		{
			set_ped_component_variation(iLocal_100, false, false, false, 0);
			set_ped_component_variation(iLocal_100, 2, false, true, 0);
			set_ped_component_variation(iLocal_100, 3, false, true, 0);
			set_ped_component_variation(iLocal_100, 4, false, 2, 0);
		}
		iLocal_99 = PED::CREATE_PED(22, iLocal_156, vLocal_95, 0, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 6, true);
		set_ped_flee_attributes(iLocal_99, 128, true);
		set_entity_load_collision_flag(iLocal_99, true);
		set_blocking_of_non_temporary_events(iLocal_99, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_99, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_99, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_99, 172, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_99, 137, true);
		_0x733C87D4CE22BEA2(iLocal_99);
		set_ambient_voice_name(iLocal_99, sLocal_366);
		set_ped_target_loss_response(iLocal_99, 1);
		set_entity_coords_no_offset(iLocal_99, get_anim_initial_offset_position(sLocal_144, "b_atm_mugging", vVar0, vVar3, 0, 2), 0, 0, 1);
		vVar9 = {get_anim_initial_offset_rotation(sLocal_144, "b_atm_mugging", vVar0, vVar3, 0, 2)};
		set_entity_heading(iLocal_99, vVar9.z);
		if (func_100(iLocal_100))
		{
			if (is_ped_male(iLocal_100))
			{
				set_entity_coords_no_offset(iLocal_100, get_anim_initial_offset_position("random@atmrobberygen@male", "idle_a", vVar0, vVar3, 0, 2), 0, 0, 1);
				vVar9 = {get_anim_initial_offset_rotation("random@atmrobberygen@male", "idle_a", vVar0, vVar3, 0, 2)};
			}
			else
			{
				set_entity_coords_no_offset(iLocal_100, get_anim_initial_offset_position("random@atmrobberygen@female", "idle_a", vVar0, vVar3, 0, 2), 0, 0, 1);
				vVar9 = {get_anim_initial_offset_rotation("random@atmrobberygen@female", "idle_a", vVar0, vVar3, 0, 2)};
			}
			set_entity_heading(iLocal_100, vVar9.z);
		}
		AI::TASK_PLAY_ANIM(iLocal_99, sLocal_144, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (is_ped_male(iLocal_100))
		{
			AI::TASK_PLAY_ANIM(iLocal_100, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			remove_anim_dict("random@atmrobberygen@female");
		}
		else
		{
			AI::TASK_PLAY_ANIM(iLocal_100, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			remove_anim_dict("random@atmrobberygen@male");
		}
		set_ped_as_enemy(iLocal_99, 1);
		set_blocking_of_non_temporary_events(iLocal_100, true);
		give_weapon_to_ped(iLocal_99, joaat("weapon_pistol"), -1, true, true);
		set_ped_ammo(iLocal_99, joaat("weapon_pistol"), 34);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_99, joaat("weapon_pistol"), false);
		set_entity_is_target_priority(iLocal_99, 1, 0f);
		switch (func_30())
		{
			case 0:
				sLocal_324 = "MICHAEL";
				break;
			
			case 1:
				sLocal_324 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_324 = "TREVOR";
				break;
		}
		func_174(&Local_159, 0, PLAYER::PLAYER_PED_ID(), sLocal_324, 0, 1);
		func_174(&Local_159, 1, iLocal_100, sLocal_326, 0, 1);
		func_174(&Local_159, 2, iLocal_99, "ATMRobber", 0, 1);
		if (iLocal_109 == 1 || iLocal_109 == 2)
		{
			iLocal_117 = create_vehicle(iLocal_158, vLocal_118, fLocal_124, 1, true);
			set_vehicle_engine_on(iLocal_117, true, 1, 0);
			add_vehicle_upsidedown_check(iLocal_117);
			_0x25367DE49D64CF16(iLocal_117, 1);
			if (iLocal_109 == 2)
			{
				set_vehicle_door_open(iLocal_117, false, 0, 0);
			}
			else if (iLocal_109 == 1)
			{
				set_ped_helmet(iLocal_99, 0);
				set_ped_can_be_knocked_off_vehicle(iLocal_99, 3);
			}
			else if (iLocal_109 == 4)
			{
				set_vehicle_doors_locked(iLocal_117, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		return true;
	}
	else if (func_184())
	{
		func_254();
	}
	return false;
}

void func_174(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_175()
{
	request_anim_dict("random@atmrobberygen@male");
	request_anim_dict("random@atmrobberygen@female");
	if (!iLocal_133)
	{
		func_183(&Local_384, 3);
		Local_384.f_146 = GAMEPLAY::GET_FRAME_COUNT();
		func_182(&Local_384, iLocal_156);
		func_182(&Local_384, iLocal_157);
		func_182(&Local_384, iLocal_153);
		func_182(&Local_384, iLocal_154);
		func_180(&Local_384, sLocal_144);
		func_180(&Local_384, sLocal_368);
		func_180(&Local_384, sLocal_362);
		func_180(&Local_384, sLocal_145);
		iLocal_133 = 1;
	}
	if ((has_anim_dict_loaded("random@atmrobberygen@male") && has_anim_dict_loaded("random@atmrobberygen@female")) && func_176(&Local_384))
	{
		return true;
	}
	return false;
}

bool func_176(auto uParam0)
{
	int iVar0;
	
	if (!*uParam0.f_145)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_177(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_145 = 0;
	return true;
}

int func_177(auto uParam0)
{
	return func_178(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_178(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, 29))
		{
			switch (func_179(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return has_anim_dict_loaded(sParam1);
					break;
				
				case 2:
					return has_clip_set_loaded(sParam1);
					break;
				
				case 3:
					return has_streamed_texture_dict_loaded(sParam1);
					break;
				
				case 4:
					return has_vehicle_recording_been_loaded(iParam2, sParam1);
					break;
				
				case 5:
					return get_is_waypoint_recording_loaded(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, GAMEPLAY::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return _has_streamed_script_loaded(iParam2);
					break;
				
				case 8:
					return has_additional_text_loaded(iParam2);
					break;
				
				case 9:
					return has_ptfx_asset_loaded();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 10)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_180(auto uParam0, char* sParam1)
{
	func_181(uParam0, 1, -1, sParam1, 0);
}

void func_181(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if (*(uParam0[iVar0 /*18*/]).f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!are_strings_equal(sParam3, "NULL"))
					{
						if (are_strings_equal(uParam0[iVar0 /*18*/].f_2, sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!*uParam0.f_145)
	{
		*uParam0.f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			StringCopy(uParam0[iVar0 /*18*/].f_2, sParam3, 64);
			*(uParam0[iVar0 /*18*/]).f_1 = iParam2;
			*uParam0[iVar0 /*18*/] = iParam4;
			GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_182(auto uParam0, int iParam1)
{
	func_181(uParam0, 0, iParam1, "NULL", 0);
}

void func_183(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		*uParam0.f_147 = iParam1;
	}
}

bool func_184()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_91) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
		{
			return false;
		}
	}
	if (func_192())
	{
		return true;
	}
	if (func_185(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_185(float fParam0, int iParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	Vector3 fVar34;
	Vector3 fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_32(func_30()))
		{
			iVar36 = func_191();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_186(iVar32, &Var0);
					fVar35 = get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						iVar38 = true;
						if (iParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								iVar38 = false;
							}
						}
						if (iVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_186(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_187(uParam1, "Abigail1", func_189(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 1:
			func_187(uParam1, "Abigail2", func_189(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 2:
			func_187(uParam1, "Barry1", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 3:
			func_187(uParam1, "Barry2", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 4:
			func_187(uParam1, "Barry3", func_189(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 5:
			func_187(uParam1, "Barry3A", func_189(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 6:
			func_187(uParam1, "Barry3C", func_189(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 7:
			func_187(uParam1, "Barry4", func_189(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_188(iParam0), 0, 0);
			break;
		
		case 8:
			func_187(uParam1, "Dreyfuss1", func_189(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 9:
			func_187(uParam1, "Epsilon1", func_189(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 10:
			func_187(uParam1, "Epsilon2", func_189(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 11:
			func_187(uParam1, "Epsilon3", func_189(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 12:
			func_187(uParam1, "Epsilon4", func_189(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 13:
			func_187(uParam1, "Epsilon5", func_189(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 14:
			func_187(uParam1, "Epsilon6", func_189(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 15:
			func_187(uParam1, "Epsilon7", func_189(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 16:
			func_187(uParam1, "Epsilon8", func_189(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 17:
			func_187(uParam1, "Extreme1", func_189(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 18:
			func_187(uParam1, "Extreme2", func_189(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 19:
			func_187(uParam1, "Extreme3", func_189(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 20:
			func_187(uParam1, "Extreme4", func_189(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 21:
			func_187(uParam1, "Fanatic1", func_189(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_188(iParam0), 1, 0);
			break;
		
		case 22:
			func_187(uParam1, "Fanatic2", func_189(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_188(iParam0), 1, 0);
			break;
		
		case 23:
			func_187(uParam1, "Fanatic3", func_189(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_188(iParam0), 0, 1);
			break;
		
		case 24:
			func_187(uParam1, "Hao1", func_189(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_188(iParam0), 0, 1);
			break;
		
		case 25:
			func_187(uParam1, "Hunting1", func_189(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 26:
			func_187(uParam1, "Hunting2", func_189(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 27:
			func_187(uParam1, "Josh1", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 28:
			func_187(uParam1, "Josh2", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 29:
			func_187(uParam1, "Josh3", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 30:
			func_187(uParam1, "Josh4", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 31:
			func_187(uParam1, "Maude1", func_189(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 32:
			func_187(uParam1, "Minute1", func_189(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 33:
			func_187(uParam1, "Minute2", func_189(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 34:
			func_187(uParam1, "Minute3", func_189(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 35:
			func_187(uParam1, "MrsPhilips1", func_189(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 36:
			func_187(uParam1, "MrsPhilips2", func_189(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 37:
			func_187(uParam1, "Nigel1", func_189(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 38:
			func_187(uParam1, "Nigel1A", func_189(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 39:
			func_187(uParam1, "Nigel1B", func_189(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 40:
			func_187(uParam1, "Nigel1C", func_189(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 41:
			func_187(uParam1, "Nigel1D", func_189(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 42:
			func_187(uParam1, "Nigel2", func_189(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 43:
			func_187(uParam1, "Nigel3", func_189(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 44:
			func_187(uParam1, "Omega1", func_189(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 45:
			func_187(uParam1, "Omega2", func_189(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 46:
			func_187(uParam1, "Paparazzo1", func_189(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 47:
			func_187(uParam1, "Paparazzo2", func_189(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 48:
			func_187(uParam1, "Paparazzo3", func_189(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 49:
			func_187(uParam1, "Paparazzo3A", func_189(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 50:
			func_187(uParam1, "Paparazzo3B", func_189(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 51:
			func_187(uParam1, "Paparazzo4", func_189(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 52:
			func_187(uParam1, "Rampage1", func_189(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 54:
			func_187(uParam1, "Rampage3", func_189(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 55:
			func_187(uParam1, "Rampage4", func_189(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 56:
			func_187(uParam1, "Rampage5", func_189(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 53:
			func_187(uParam1, "Rampage2", func_189(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 57:
			func_187(uParam1, "TheLastOne", func_189(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 58:
			func_187(uParam1, "Tonya1", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 59:
			func_187(uParam1, "Tonya2", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 60:
			func_187(uParam1, "Tonya3", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 61:
			func_187(uParam1, "Tonya4", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 62:
			func_187(uParam1, "Tonya5", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_187(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_189(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_190(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_190(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

int func_191()
{
	func_31();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_192()
{
	if (func_195() && !func_196())
	{
		return true;
	}
	if (func_194() && func_193())
	{
		return true;
	}
	return false;
}

int func_193()
{
	return Global_100872 > 0;
}

bool func_194()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_195()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_196()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

void func_197()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iLocal_115 == 0 && iLocal_109 == 5)
	{
		iLocal_115 = get_random_int_in_range(true, 5);
	}
	else if (iLocal_109 != 5)
	{
		iLocal_115 = iLocal_109;
	}
	switch (iLocal_115)
	{
		case 1:
			iLocal_156 = joaat("g_m_y_armgoon_02");
			sLocal_366 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_158 = joaat("sanchez");
			sLocal_327 = "REAR1_ATTR";
			sLocal_328 = "REAR1_HELP";
			sLocal_329 = "REAR1_PROMPT";
			sLocal_330 = "REAR1_CHASE";
			sLocal_331 = "REAR1_FLEE";
			sLocal_332 = "REAR1_THX";
			sLocal_333 = "REAR1_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_336 = "REAR1_REM";
					sLocal_334 = "REAR1_FKM";
					sLocal_325 = "REAR1_WM";
					sLocal_337 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR1_REF";
					sLocal_334 = "REAR1_FKF";
					sLocal_325 = "REAR1_WF";
					sLocal_337 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR1_RET";
					sLocal_334 = "REAR1_FKT";
					sLocal_325 = "REAR1_WT";
					sLocal_337 = "REAR1_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim1";
			sLocal_335 = "REAR1AU";
			if (iLocal_155 == 0)
			{
				iVar0 = get_random_int_in_range(false, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					iVar1 = func_198();
					if (iVar1)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			sLocal_362 = "RANDOM@ATMROBBERY1";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Female";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			sLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 2:
			iLocal_156 = joaat("g_m_y_famfor_01");
			sLocal_366 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_157 = joaat("a_m_y_hipster_02");
			sLocal_367 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_158 = joaat("ruiner");
			sLocal_327 = "REAR2_ATTR";
			sLocal_328 = "REAR2_HELP";
			sLocal_329 = "REAR2_PROMPT";
			sLocal_330 = "REAR2_CHASE";
			sLocal_331 = "REAR2_FLEE";
			sLocal_332 = "REAR2_THX";
			sLocal_333 = "REAR2_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_336 = "REAR2_REM";
					sLocal_334 = "REAR2_FKM";
					sLocal_325 = "REAR2_WM";
					sLocal_337 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR2_REF";
					sLocal_334 = "REAR2_FKF";
					sLocal_325 = "REAR2_WF";
					sLocal_337 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR2_RET";
					sLocal_334 = "REAR2_FKT";
					sLocal_325 = "REAR2_WT";
					sLocal_337 = "REAR2_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim2";
			sLocal_335 = "REAR2AU";
			iLocal_153 = joaat("prop_ld_wallet_pickup");
			sLocal_362 = "RANDOM@ATMROBBERY2";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Male";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			sLocal_368 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_369 = "IDLE_A";
			sLocal_370 = "IDLE_B";
			sLocal_371 = "IDLE_C";
			break;
		
		case 3:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_156 = joaat("g_m_y_salvagoon_02");
			sLocal_366 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_327 = "REAR5_ATTR";
			sLocal_328 = "REAR5_HELP";
			sLocal_329 = "REAR5_PROMPT";
			sLocal_330 = "REAR5_CHASE";
			sLocal_331 = "REAR5_FLEE";
			sLocal_332 = "REAR5_THX";
			sLocal_333 = "REAR5_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_336 = "REAR5_REM";
					sLocal_334 = "REAR5_FKM";
					sLocal_325 = "REAR5_WM";
					sLocal_337 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR5_REF";
					sLocal_334 = "REAR5_FKF";
					sLocal_325 = "REAR5_WF";
					sLocal_337 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR5_RET";
					sLocal_334 = "REAR5_FKT";
					sLocal_325 = "REAR5_WT";
					sLocal_337 = "REAR5_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim5";
			sLocal_335 = "REAR5AU";
			if (iLocal_155 == 0)
			{
				iVar0 = get_random_int_in_range(false, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					iVar2 = func_198();
					if (iVar2)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_155 = 1;
			}
			sLocal_362 = "RANDOM@ATMROBBERY3";
			sLocal_363 = "Return_Wallet_Positive_B_Player";
			sLocal_364 = "Return_Wallet_Positive_B_Female";
			sLocal_365 = "Return_Wallet_Positive_B_Cam";
			sLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 4:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_158 = joaat("ruiner");
			iLocal_156 = joaat("g_m_y_azteca_01");
			sLocal_366 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_327 = "REAR3_ATTR";
			sLocal_328 = "REAR3_HELP";
			sLocal_329 = "REAR3_PROMPT";
			sLocal_330 = "REAR3_CHASE";
			sLocal_331 = "REAR3_FLEE";
			sLocal_332 = "REAR3_THX";
			sLocal_333 = "REAR3_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_336 = "REAR3_REM";
					sLocal_334 = "REAR3_FKM";
					sLocal_325 = "REAR3_WM";
					sLocal_337 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR3_REF";
					sLocal_334 = "REAR3_FKF";
					sLocal_325 = "REAR3_WF";
					sLocal_337 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR3_RET";
					sLocal_334 = "REAR3_FKT";
					sLocal_325 = "REAR3_WT";
					sLocal_337 = "REAR3_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim3";
			sLocal_335 = "REAR3AU";
			if (iLocal_155 == 0)
			{
				iVar0 = get_random_int_in_range(false, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					iVar3 = func_198();
					if (iVar3)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			sLocal_362 = "RANDOM@ATMROBBERY4";
			sLocal_363 = "Return_Wallet_Positive_C_Player";
			sLocal_364 = "Return_Wallet_Positive_C_Female";
			sLocal_365 = "Return_Wallet_Positive_C_Cam";
			sLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
	}
	if (get_distance_between_coords(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		vLocal_354 = {-197.64f, -863.25f, 28.33f};
		fLocal_357 = 334.5007f;
		vLocal_358 = {-187.24f, -856.77f, 28.97f};
		fLocal_361 = 162.69f;
		iLocal_116 = 1;
	}
	else if (get_distance_between_coords(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		vLocal_354 = {286.5f, -1256.73f, 28.29f};
		fLocal_357 = 167.3216f;
		vLocal_358 = {250.55f, -1239.27f, 28.84f};
		fLocal_361 = 265.51f;
		iLocal_116 = 2;
	}
	else if (get_distance_between_coords(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		vLocal_354 = {-3044.66f, 595.7f, 6.59f};
		fLocal_357 = 296.7338f;
		vLocal_358 = {-3037.55f, 608.53f, 7.34f};
		fLocal_361 = 202.3f;
		iLocal_116 = 3;
	}
	else if (get_distance_between_coords(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		vLocal_354 = {175.57f, 6636.58f, 30.57f};
		fLocal_357 = 260.4868f;
		vLocal_358 = {188.97f, 6616.2f, 31.48f};
		fLocal_361 = 93.97f;
		iLocal_116 = 4;
	}
	else if (get_distance_between_coords(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		vLocal_354 = {23.65f, -948.26f, 28.36f};
		fLocal_357 = 258.8732f;
		vLocal_358 = {22.19f, -955.82f, 28.94f};
		fLocal_361 = 70.66f;
		iLocal_116 = 6;
	}
	else if (get_distance_between_coords(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		vLocal_354 = {294.64f, -893.6f, 28.18f};
		fLocal_357 = 156.7222f;
		vLocal_358 = {286.4f, -897.28f, 28.57f};
		fLocal_361 = 341.97f;
		iLocal_116 = 8;
	}
	else if (get_distance_between_coords(vLocal_95, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		vLocal_354 = {1077.64f, -773.86f, 57.09f};
		fLocal_357 = 275.6593f;
		vLocal_358 = {1081.93f, -764.08f, 57.35f};
		fLocal_361 = 268.57f;
		iLocal_116 = 11;
	}
	else if (get_distance_between_coords(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		vLocal_354 = {-2074.93f, -316.75f, 12.16f};
		fLocal_357 = 157.3363f;
		vLocal_358 = {-2101.2f, -293.74f, 12.74f};
		fLocal_361 = 263.12f;
		iLocal_116 = 16;
	}
	else if (get_distance_between_coords(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		vLocal_354 = {-819.39f, -1084.12f, 10.03f};
		fLocal_357 = 236.6294f;
		vLocal_358 = {-803.18f, -1075.91f, 11.13f};
		fLocal_361 = 209.53f;
		iLocal_116 = 17;
	}
	else if (get_distance_between_coords(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		vLocal_354 = {-712.88f, -820.47f, 22.61f};
		fLocal_357 = 268.2568f;
		vLocal_358 = {-721.63f, -826.84f, 22.82f};
		fLocal_361 = 93.14f;
		iLocal_116 = 18;
	}
	else if (get_distance_between_coords(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		vLocal_354 = {-389.5633f, 6042.153f, 30.4989f};
		fLocal_357 = 223.2838f;
		vLocal_358 = {-406.23f, 6045.69f, 31.06f};
		fLocal_361 = 229.52f;
		iLocal_116 = 19;
	}
	else if (get_distance_between_coords(vLocal_95, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		vLocal_354 = {-304.1459f, -837.4778f, 30.6799f};
		fLocal_357 = 286.139f;
		vLocal_358 = {-304.56f, -840.76f, 31.26f};
		fLocal_361 = 77.59f;
		iLocal_116 = 22;
	}
	else if (get_distance_between_coords(vLocal_95, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		vLocal_354 = {-253.51f, -689.26f, 32.57f};
		fLocal_357 = 209.9227f;
		vLocal_358 = {-250.91f, -684.01f, 33f};
		fLocal_361 = 230.65f;
		iLocal_116 = 23;
	}
	else if (get_distance_between_coords(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		vLocal_354 = {88.7f, 0.01f, 67.38f};
		fLocal_357 = 71.0114f;
		vLocal_358 = {91.35f, -7.07f, 67.82f};
		fLocal_361 = 70.28f;
		iLocal_116 = 25;
	}
	else if (get_distance_between_coords(vLocal_95, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		vLocal_354 = {-530.11f, -1217.33f, 17.26f};
		fLocal_357 = 53.768f;
		vLocal_358 = {-522.45f, -1196.35f, 18.45f};
		fLocal_361 = 297.22f;
		iLocal_116 = 30;
	}
	else if (get_distance_between_coords(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		vLocal_354 = {-2956.78f, 488.19f, 14.47f};
		fLocal_357 = 80.0912f;
		vLocal_358 = {-2974.34f, 491.96f, 15f};
		fLocal_361 = 1.95f;
		iLocal_116 = 31;
	}
	else
	{
		vLocal_354 = {vLocal_95};
	}
}

bool func_198()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_199()
{
	if (!func_168(5))
	{
		return true;
	}
	if (func_192())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
		{
			return false;
		}
	}
	if (func_185(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_200()
{
	if ((Global_101143 == func_201() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

auto func_201()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_202(cVar0);
	return uVar16;
}

int func_202(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_203(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_145)
	{
		if ((GAMEPLAY::GET_FRAME_COUNT() >= *uParam0.f_146 + *uParam0.f_147 || GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 2)) || GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 29))
					{
						func_204(uParam0[iVar0 /*18*/]);
						*uParam0.f_146 = GAMEPLAY::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_204(int iParam0)
{
	func_205(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_205(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_179(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				request_anim_dict(sParam1);
				break;
			
			case 2:
				request_clip_set(sParam1);
				break;
			
			case 3:
				request_streamed_texture_dict(sParam1, GAMEPLAY::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				request_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				request_waypoint_recording(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, GAMEPLAY::IS_BIT_SET(*iParam0, 27));
				break;
			
			case 7:
				_request_streamed_script(iParam2);
				break;
			
			case 8:
				request_additional_text(sParam1, iParam2);
				break;
			
			case 9:
				request_ptfx_asset();
				break;
			
			default:
				break;
		}
		GAMEPLAY::SET_BIT(iParam0, 29);
	}
}

void func_206(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (does_blip_exist(iParam0))
	{
		iVar0 = GAMEPLAY::GET_GAME_TIMER() - *uParam1;
		if (iVar0 < 5000)
		{
			iVar1 = ceil(to_float(iVar0) / 1000f);
			if (iVar1 * 1000 - iVar0 < 500)
			{
				if (get_blip_alpha(iParam0) != 255)
				{
					set_blip_alpha(iParam0, 255);
				}
			}
			else if (get_blip_alpha(iParam0) != 0)
			{
				set_blip_alpha(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (get_blip_alpha(iParam0) != 255)
			{
				set_blip_alpha(iParam0, 255);
			}
		}
	}
}

void func_207()
{
}

void func_208()
{
}

void func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_211(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_210();
}

void func_210()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_vehicle_model_is_suppressed(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_211(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_212(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	
	if (!Global_138022)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_201();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_253())
		{
			return false;
		}
	}
	vLocal_91 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_252(0))
		{
			return false;
		}
		if (func_192())
		{
			return false;
		}
		if (func_251())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_32(func_30()))
		{
			if (func_185(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_91.z > 50f)
			{
				return false;
			}
		}
		if (!func_250(iParam3))
		{
			return false;
		}
		if (func_32(func_30()))
		{
			if (func_249(func_30()) == 4 || func_249(func_30()) == 5)
			{
				return false;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_248(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_247(Global_101154.f_29520.f_43[iParam3]))
		{
			return false;
		}
		if (GAMEPLAY::GET_GAME_TIMER() - Global_101145 < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_246())
		{
			return false;
		}
		if (get_mission_flag())
		{
			return false;
		}
		if (get_random_event_flag())
		{
			return false;
		}
		if (!func_237(4))
		{
			return false;
		}
		if (!func_168(5))
		{
			return false;
		}
		if (func_236(iParam3, iParam4) && !iParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (is_valid_interior(get_interior_from_entity(PLAYER::PLAYER_PED_ID())))
		{
			if ((get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_236(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_250(30) && !func_236(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_235(iVar8))
				{
					if (func_213(iVar4))
					{
						if (!func_55(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_30() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_214(iVar0);
}

int func_214(int iParam0)
{
	return func_215(iParam0, 1);
}

bool func_215(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_235(iParam0))
	{
		return false;
	}
	func_216(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_216(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_217(func_228(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_217(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_227(iParam0, iParam1))
	{
		iVar0 = func_226(iParam1);
		iVar1 = func_224(iParam0);
		iVar2 = func_224(iParam0) - func_224(iParam1);
		iVar3 = func_226(iParam0) - func_226(iParam1);
		iVar4 = func_223(iParam0) - func_223(iParam1);
		iVar5 = func_222(iParam0) - func_222(iParam1);
		iVar6 = func_221(iParam0) - func_221(iParam1);
		iVar7 = func_220(iParam0) - func_220(iParam1);
	}
	else
	{
		iVar0 = func_226(iParam0);
		iVar1 = func_224(iParam1);
		iVar2 = func_224(iParam1) - func_224(iParam0);
		iVar3 = func_226(iParam1) - func_226(iParam0);
		iVar4 = func_223(iParam1) - func_223(iParam0);
		iVar5 = func_222(iParam1) - func_222(iParam0);
		iVar6 = func_221(iParam1) - func_221(iParam0);
		iVar7 = func_220(iParam1) - func_220(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_219(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_218(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_218(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_219(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_220(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_221(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_222(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_224(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_225(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_226(int iParam0)
{
	return (iParam0 && 15);
}

bool func_227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_235(iParam1) || !func_235(iParam0))
	{
		return true;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_228()
{
	auto uVar0;
	
	func_234(&uVar0, get_clock_seconds());
	func_233(&uVar0, get_clock_minutes());
	func_232(&uVar0, get_clock_hours());
	func_231(&uVar0, get_clock_day_of_month());
	func_230(&uVar0, get_clock_month());
	func_229(&uVar0, get_clock_year());
	return uVar0;
}

void func_229(auto uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_230(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_224(*uParam0);
	if (iParam1 < 1 || iParam1 > func_219(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_232(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_233(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_234(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_220(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_221(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_222(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_224(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_226(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_223(iParam0);
	if (iVar5 < 1 || iVar5 > func_219(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_237(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_245()) || Global_100201) || Global_25122) || func_244()) || func_51(8, -1)) || func_243()) || func_242()) || func_241()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_245()) || Global_25122) || func_244()) || func_51(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_245()) || Global_100201) || Global_25122) || func_244()) || func_51(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_245()) || Global_100201) || Global_25122) || func_244()) || func_51(8, -1)) || func_243()) || func_242()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_245() || get_player_wanted_level(player_id()) > 0) || func_51(8, -1)) || func_240()) || func_239()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_243()) || func_242()) || func_239()) || func_238())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_245()) || Global_25122) || func_244()) || func_51(8, -1)) || func_242()) || func_241()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_245()) || func_242()) || Global_100201) || Global_25122) || func_244()) || Global_36839) || func_51(8, -1)) || func_241()) || func_239()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_245()) || Global_100201) || Global_25122) || func_244()) || func_51(8, -1)) || func_241()) || func_239()) || func_243()) || func_242()) || func_240())
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

auto func_238()
{
	return Global_91317.f_1;
}

int func_239()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_240()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_241()
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

int func_242()
{
	return Global_91330.f_297 > 0;
}

int func_243()
{
	return Global_91330.f_296 > 0;
}

auto func_244()
{
	return Global_1315913;
}

int func_245()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_246()
{
	func_49();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	return func_227(func_228(), iParam0);
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_249(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_253())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 -= 31;
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_1, iVar0);
	}
	return iVar1;
}

bool func_251()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(get_ped_in_vehicle_seat(iVar0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_252(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

bool func_253()
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

void func_254()
{
	if (iLocal_339)
	{
		if (is_vehicle_driveable(iLocal_117, 0))
		{
			if (does_vehicle_have_stuck_vehicle_check(iLocal_117))
			{
				remove_vehicle_stuck_check(iLocal_117);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
	{
		set_ped_as_no_longer_needed(&iLocal_99);
	}
	remove_all_shocking_events(0);
	if (iLocal_113 != 0)
	{
		remove_shocking_event(iLocal_113);
	}
	remove_all_shocking_events(0);
	if (!PED::IS_PED_INJURED(iLocal_100))
	{
		set_blocking_of_non_temporary_events(iLocal_100, false);
		set_ped_can_be_targetted(iLocal_100, true);
		set_ped_as_no_longer_needed(&iLocal_100);
	}
	if (iLocal_109 == 4)
	{
		set_all_vehicle_generators_active_in_area(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, true, 1);
	}
	func_156(&uLocal_372, 0, 0);
	if (func_200())
	{
		set_wanted_level_multiplier(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		stop_ped_speaking(PLAYER::PLAYER_PED_ID(), 0);
	}
	func_267(&Local_384, 0);
	func_255(-1);
	_0xD79185689F8FD5DF(1);
	remove_scenario_blocking_area(iLocal_107, 0);
	terminate_this_thread();
}

void func_255(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_260(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_259(30000);
		StringCopy(&cVar0, func_258(Global_101143, 1), 64);
		if (func_257(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_101140, GAMEPLAY::GET_GAME_TIMER() - Global_101141, 0);
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101150, false) && Global_101154.f_29520.f_2 < 3)
	{
		GAMEPLAY::CLEAR_BIT(&Global_101150, false);
	}
	func_256(&Global_25179);
	Global_101144 = 0;
	func_211(-1);
}

void func_256(auto uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!iParam1)
	{
	}
	return "UNKNOWN";
}

void func_259(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_260(int iParam0)
{
	func_261(iParam0, 0, func_266(iParam0));
}

void func_261(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_228();
	func_264(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_263(uParam0, &uVar0);
	Var1 = {func_262(&uVar0)};
}

struct<16> func_262(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_226(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_224(*uParam0), 64);
	return cVar0;
}

void func_263(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_264(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_224(*uParam0);
	iVar1 = func_226(*uParam0);
	iVar2 = func_223(*uParam0);
	iVar3 = func_222(*uParam0);
	iVar4 = func_221(*uParam0);
	iVar5 = func_220(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_219(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_219(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_265(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_265(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_234(uParam0, iParam1);
	func_233(uParam0, iParam2);
	func_232(uParam0, iParam3);
	func_230(uParam0, iParam5);
	func_231(uParam0, iParam4);
	func_229(uParam0, iParam6);
}

int func_266(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_267(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_269(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_268(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_145 = 0;
	*uParam0.f_146 = -1;
}

void func_268(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_269(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			func_270(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_145 = 1;
}

void func_270(auto uParam0)
{
	func_271(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_271(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		switch (func_179(iParam0))
		{
			case 0:
				set_model_as_no_longer_needed(iParam2);
				break;
			
			case 1:
				remove_anim_dict(sParam1);
				break;
			
			case 2:
				remove_clip_set(sParam1);
				break;
			
			case 3:
				set_streamed_texture_dict_as_no_longer_needed(sParam1);
				break;
			
			case 4:
				remove_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				remove_waypoint_recording(sParam1);
				break;
			
			case 6:
				release_script_audio_bank();
				break;
			
			case 7:
				_set_streamed_script_as_no_longer_needed(iParam2);
				break;
			
			case 8:
				clear_additional_text(iParam2, GAMEPLAY::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				remove_ptfx_asset();
				break;
			
			default:
				break;
		}
	}
}

void func_272(int iParam0)
{
	Global_101146 = {vLocal_95};
	if (iParam0)
	{
		func_288(3);
	}
	func_276(1, 0);
	if (!iLocal_148)
	{
		func_275();
	}
	func_273();
	func_254();
}

void func_273()
{
	func_274();
}

bool func_274()
{
	if (func_252(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

bool func_275()
{
	return true;
}

void func_276(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_257(iParam0))
	{
		func_287(iParam0, iParam1);
		if (!func_286(51))
		{
			func_283("RE_REWARD", 1, 0, 4000, 10000, func_191(), 0, 138, 0);
			func_282(51);
		}
		if (func_164(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_281(iParam0, iParam1) != 322)
		{
			func_277(func_281(iParam0, iParam1), vLocal_91.x, vLocal_91.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_288(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_288(7);
			}
			else
			{
				func_288(1);
			}
		}
	}
}

void func_277(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_280(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = uParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_278();
	}
}

void func_278()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_100890, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_100873, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_100891, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_100874, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_100892, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_100875, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_100893, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_100876, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_100880, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_100897, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_100898, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_27(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_279() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_274();
				}
			}
		}
	}
}

auto func_279()
{
	return Global_25120;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_76();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_283(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_284(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_284(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_285();
	}
}

void func_285()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_287(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

void func_288(int iParam0)
{
	Global_101140 = iParam0;
}

