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
	Vector3 vLocal_43 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int[] iLocal_51 = new int[2];
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var[] uLocal_60 = new var[2];
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	Vector3[] vLocal_67 = new Vector3[2];
	float[] fLocal_74 = new float[2];
	Vector3 vLocal_77 = 0;
	Vector3 fLocal_80 = 0;
	Vector3 vLocal_81 = 0;
	Vector3 vLocal_84 = 0;
	Vector3 vLocal_87 = 0;
	Vector3 vLocal_90 = 0;
	Vector3 vLocal_93 = 0;
	Vector3 vLocal_96 = 0;
	Vector3 vLocal_99 = 0;
	Vector3 fLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int[] iLocal_118 = new int[2];
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int[] iLocal_123 = new int[2];
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	char* sLocal_139 = 0;
	struct<10>[] Local_140 = new struct<10>[16];
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 0;
	auto uLocal_307 = -1;
	auto uLocal_308 = 0;
	auto uLocal_309 = 0;
	auto uLocal_310 = 0;
	auto uLocal_311 = 0;
	auto uLocal_312 = 0;
	auto uLocal_313 = 0;
	auto uLocal_314 = 1000;
	auto uLocal_315 = 1000;
	auto uLocal_316 = 0;
	auto uLocal_317 = 8;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
	auto uLocal_326 = 0;
	auto uLocal_327 = 0;
	auto uLocal_328 = 0;
	auto uLocal_329 = 0;
	auto uLocal_330 = 0;
	auto uLocal_331 = 0;
	auto uLocal_332 = 0;
	auto uLocal_333 = 0;
	auto uLocal_334 = 0;
	auto uLocal_335 = 0;
	auto uLocal_336 = 0;
	auto uLocal_337 = 0;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	auto uLocal_341 = 0;
	auto uLocal_342 = 0;
	auto uLocal_343 = 0;
	auto uLocal_344 = 0;
	auto uLocal_345 = 0;
	auto uLocal_346 = 0;
	auto uLocal_347 = 0;
	auto uLocal_348 = 0;
	auto uLocal_349 = 0;
	auto uLocal_350 = 0;
	auto uLocal_351 = 0;
	auto uLocal_352 = 0;
	auto uLocal_353 = 0;
	auto uLocal_354 = 0;
	auto uLocal_355 = 0;
	auto uLocal_356 = 0;
	auto uLocal_357 = 0;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 0;
	auto uLocal_364 = 0;
	auto uLocal_365 = 0;
	auto uLocal_366 = 0;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	auto uLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = 0;
	auto uLocal_375 = 0;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	auto uLocal_382 = 0;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	auto uLocal_388 = 0;
	auto uLocal_389 = 0;
	auto uLocal_390 = 0;
	auto uLocal_391 = 0;
	auto uLocal_392 = 0;
	auto uLocal_393 = 0;
	auto uLocal_394 = 0;
	auto uLocal_395 = 0;
	auto uLocal_396 = 0;
	auto uLocal_397 = 0;
	auto uLocal_398 = 0;
	auto uLocal_399 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	auto uLocal_403 = 0;
	auto uLocal_404 = 0;
	auto uLocal_405 = 0;
	auto uLocal_406 = 0;
	auto uLocal_407 = 0;
	auto uLocal_408 = 0;
	auto uLocal_409 = 0;
	auto uLocal_410 = 0;
	auto uLocal_411 = 0;
	auto uLocal_412 = 0;
	auto uLocal_413 = 0;
	auto uLocal_414 = 0;
	auto uLocal_415 = 0;
	auto uLocal_416 = 0;
	auto uLocal_417 = 0;
	auto uLocal_418 = 0;
	auto uLocal_419 = 0;
	auto uLocal_420 = 0;
	auto uLocal_421 = 0;
	auto uLocal_422 = 0;
	auto uLocal_423 = 0;
	auto uLocal_424 = 0;
	auto uLocal_425 = 0;
	auto uLocal_426 = 0;
	auto uLocal_427 = 0;
	auto uLocal_428 = 0;
	auto uLocal_429 = 0;
	auto uLocal_430 = 0;
	auto uLocal_431 = 0;
	auto uLocal_432 = 0;
	auto uLocal_433 = 0;
	auto uLocal_434 = 0;
	auto uLocal_435 = 0;
	auto uLocal_436 = 0;
	auto uLocal_437 = 0;
	auto uLocal_438 = 0;
	auto uLocal_439 = 0;
	auto uLocal_440 = 0;
	auto uLocal_441 = 0;
	auto uLocal_442 = 0;
	auto uLocal_443 = 0;
	auto uLocal_444 = 0;
	auto uLocal_445 = 0;
	auto uLocal_446 = 0;
	auto uLocal_447 = 0;
	auto uLocal_448 = 0;
	auto uLocal_449 = 0;
	auto uLocal_450 = 0;
	auto uLocal_451 = 0;
	auto uLocal_452 = 0;
	auto uLocal_453 = 0;
	auto uLocal_454 = 0;
	auto uLocal_455 = 0;
	auto uLocal_456 = 0;
	auto uLocal_457 = 0;
	auto uLocal_458 = 0;
	auto uLocal_459 = 0;
	auto uLocal_460 = 0;
	auto uLocal_461 = 0;
	auto uLocal_462 = 0;
	auto uLocal_463 = 0;
	auto uLocal_464 = 1;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	Vector3 fLocal_469 = 0;
	Vector3 vLocal_470 = 0;
	Vector3 vLocal_473 = 0;
	int iLocal_476 = 0;
	Vector3 vLocal_477 = 0;
	float fLocal_480 = 0;
	int[] iLocal_481 = new int[2];
	int iLocal_484 = 0;
	Vector3 vLocal_485 = 0;
	Vector3 vLocal_488 = 0;
	Vector3 vLocal_491 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	Vector3 fLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	Vector3 vLocal_501 = 0;
	int[] iLocal_504 = new int[2];
	int iLocal_507 = 0;
	float fLocal_508 = 0;
	float fLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int[] iLocal_512 = new int[2];
	int[] iLocal_515 = new int[2];
	struct<2> Local_518 = 0;
	auto uLocal_520 = 0;
	auto uLocal_521 = 0;
	auto uLocal_522 = 0;
	auto uLocal_523 = 0;
	auto uLocal_524 = 0;
	auto uLocal_525 = 0;
	auto uLocal_526 = 0;
	auto uLocal_527 = 0;
	auto uLocal_528 = 0;
	auto uLocal_529 = 0;
	auto uLocal_530 = 0;
	auto uLocal_531 = 0;
	auto uLocal_532 = 0;
	auto uLocal_533 = 0;
	auto uLocal_534 = 0;
	auto uLocal_535 = 5;
	auto uLocal_536 = 0;
	auto uLocal_537 = 0;
	auto uLocal_538 = 0;
	auto uLocal_539 = 0;
	auto uLocal_540 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_18 = 3;
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
	vLocal_81 = {0.0203f, -3.1441f, 0.5027f};
	vLocal_84 = {90f, 0f, 0f};
	vLocal_90 = {0f, 0f, 0f};
	vLocal_93 = {0f, 0f, 0f};
	iLocal_129 = 1;
	iLocal_130 = 1;
	sLocal_139 = "RESECAU";
	iLocal_465 = -1;
	fLocal_469 = -3.55f;
	vLocal_470 = {0.014f, -0.9111f, 1.2317f};
	vLocal_473 = {0f, -3.4368f, 1.2317f};
	iLocal_494 = -1;
	iLocal_495 = -1;
	iLocal_507 = -1;
	vLocal_87 = {vLocal_87};
	vLocal_87 = {Local_518.f_1[0 /*3*/]};
	if (vdist(vLocal_87, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_47 = true;
	}
	else if (vdist(vLocal_87, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_47 = 2;
	}
	else if (vdist(vLocal_87, -389f, 6061f, 31f) < 5f)
	{
		iLocal_47 = 3;
	}
	else if (vdist(vLocal_87, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_47 = 4;
	}
	else if (vdist(vLocal_87, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_47 = 5;
	}
	else if (vdist(vLocal_87, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_47 = 6;
	}
	else if (vdist(vLocal_87, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_47 = 7;
	}
	else if (vdist(vLocal_87, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_47 = 8;
	}
	else if (vdist(vLocal_87, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_47 = 9;
	}
	else if (vdist(vLocal_87, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_47 = 10;
	}
	else
	{
		terminate_this_thread();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			terminate_this_thread();
		}
	}
	else
	{
		if (has_force_cleanup_occurred(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar0]))
				{
					if (is_vehicle_driveable(iLocal_54, 0))
					{
						if (!is_ped_in_vehicle(iLocal_51[iVar0], iLocal_54, 0))
						{
							task_enter_vehicle(iLocal_51[iVar0], iLocal_54, -1, func_234(iLocal_54), 2f, 1, 0);
						}
					}
					else
					{
						task_stand_still(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(vLocal_87, 9, iLocal_47, 1, 0))
		{
			terminate_this_thread();
		}
		else
		{
			func_174(-1);
		}
	}
	func_173();
	iLocal_65 = add_scenario_blocking_area(vLocal_77 + Vector(30f, 30f, 30f), vLocal_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		wait(false);
		func_170(&uLocal_317);
		if (!func_169())
		{
			if (func_168())
			{
				func_217();
			}
			_0x208784099002BC30("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (is_world_point_within_brain_activation_range() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_46 == 3 && !(is_sphere_visible(vLocal_77, 3f) && func_146(player_ped_id(), vLocal_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!is_sphere_visible(vLocal_77, 8f))
									{
										clear_area(vLocal_77, 4f, 1, 0, 0, false);
									}
									iLocal_48 = 4;
									iLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_145();
								if (is_vehicle_driveable(iLocal_54, 0) && iLocal_46 == 3)
								{
									set_vehicle_forward_speed(iLocal_54, 5f);
								}
								settimera(false);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_217();
					}
					break;
				
				case 1:
					if (!is_ped_injured(player_ped_id()) && is_vehicle_driveable(iLocal_54, 0))
					{
						if (((vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) < 10000f || !is_entity_occluded(iLocal_54)) || (!is_ped_injured(iLocal_51[0]) && !is_entity_occluded(iLocal_51[0]))) || (!is_ped_injured(iLocal_51[1]) && !is_entity_occluded(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_144())
					{
						iLocal_510++;
					}
					if (iLocal_510 != 1)
					{
						settimera(false);
					}
					break;
				
				case 2:
					if (timera() > 2000)
					{
						if (iLocal_46 != 3)
						{
							func_139();
						}
					}
					if (does_entity_exist(iLocal_54) && !is_ped_injured(player_ped_id()))
					{
						if (iLocal_46 == 3)
						{
							func_134();
							if (!is_entity_occluded(iLocal_54) && (vdist(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) < 100f || func_144()))
							{
								func_125(1);
							}
						}
						else if (((!is_entity_occluded(iLocal_54) && iLocal_48 == 4) || is_entity_in_angled_area(player_ped_id(), vLocal_96, vLocal_99, fLocal_102, 0, true, 0)) || func_144())
						{
							func_125(1);
						}
						if ((iLocal_48 == 4 && is_entity_occluded(iLocal_54)) && iLocal_46 != 3)
						{
							if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) > 100f)
							{
								func_217();
							}
							else
							{
								func_125(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (is_vehicle_driveable(iLocal_54, 0) && is_entity_occluded(iLocal_54))
				{
					if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) > 62500f)
					{
						func_217();
					}
					if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) > 10000f && !is_world_point_within_brain_activation_range())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			set_all_random_peds_flee_this_frame(player_id());
			if (!does_blip_exist(iLocal_63))
			{
				if (!func_124(2) && !iLocal_114)
				{
					if (!is_help_message_being_displayed())
					{
						func_123("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (does_entity_exist(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (vdist2(get_entity_coords(iLocal_56, 1), get_entity_coords(player_ped_id(), 1)) < pow(50f, 2f))
						{
							iLocal_511 = 0;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((iLocal_109 && !does_pickup_exist(iLocal_137)) && is_vehicle_driveable(iLocal_54, 0)) && !iLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) < pow(50f, 2f))
						{
							iLocal_511 = 1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (does_pickup_exist(iLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (vdist2(get_pickup_coords(iLocal_137), get_entity_coords(player_ped_id(), 1)) < pow(50f, 2f))
						{
							iLocal_511 = 2;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (does_entity_exist(iLocal_56))
					{
						func_114(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (vdist2(get_entity_coords(iLocal_56, 1), get_entity_coords(player_ped_id(), 1)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_in_vehicle(player_ped_id(), iLocal_54, 1))
					{
						func_114(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (does_pickup_exist(iLocal_137))
					{
						func_97(&uLocal_305, get_pickup_coords(iLocal_137), 0, 0, 1, 1, 1);
						if (vdist2(get_pickup_coords(iLocal_137), get_entity_coords(player_ped_id(), 1)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!is_entity_dead(iLocal_54, 0) && iLocal_109) && !iLocal_111) && (!func_124(0) || (has_ped_got_weapon(player_ped_id(), joaat("weapon_stickybomb"), 0) && !func_124(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!is_help_message_being_displayed() && vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) < 225f)
							{
								func_123("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!is_help_message_being_displayed())
							{
								iLocal_135 = get_game_timer();
								iLocal_134++;
							}
							break;
						
						case 2:
							if (get_game_timer() - iLocal_135 > 2000 && has_ped_got_weapon(player_ped_id(), joaat("weapon_stickybomb"), 0))
							{
								func_123("SV_DOORHELP2", 15000);
								func_122(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (iLocal_111 || iLocal_121)
				{
					if (func_96("SV_DOORHELP1") || func_96("SV_DOORHELP2"))
					{
						clear_help(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_139();
					break;
				
				case 2:
					func_88();
					break;
				
				case 3:
					func_86();
					break;
				
				case 4:
					func_134();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!is_ped_injured(iLocal_51[0]))
					{
						if (get_ped_alertness(iLocal_51[0]) != 3)
						{
							set_ped_alertness(iLocal_51[0], 3);
						}
					}
					if (!is_ped_injured(iLocal_51[1]))
					{
						if (get_ped_alertness(iLocal_51[1]) != 3)
						{
							set_ped_alertness(iLocal_51[1], 3);
						}
					}
					if (((!is_ped_injured(iLocal_51[0]) && !is_entity_dead(iLocal_51[0], 0)) && !is_ped_injured(iLocal_51[1])) && !is_entity_dead(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_73(iLocal_51[1]);
						func_71(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (is_ped_injured(iLocal_51[1]) || is_entity_dead(iLocal_51[1], 0))
						{
							iLocal_50 = 0;
							iLocal_129 = 0;
						}
						else
						{
							func_73(iLocal_51[1]);
						}
					}
					else if (iLocal_129 == 0)
					{
						if (is_ped_injured(iLocal_51[0]) || is_entity_dead(iLocal_51[0], 0))
						{
							iLocal_129 = -1;
						}
						else
						{
							func_73(iLocal_51[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_217();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id())) && get_ped_in_vehicle_seat(iLocal_54, -1) == player_ped_id()) && !iLocal_113) && iLocal_48 != 8)
			{
				if (iLocal_109)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (iLocal_110)
			{
				if (get_relationship_between_groups(iLocal_66, 1862763509) != 5)
				{
					set_relationship_between_groups(5, iLocal_66, 1862763509);
					set_relationship_between_groups(5, 1862763509, iLocal_66);
				}
			}
			if (iLocal_111)
			{
				if ((does_pickup_exist(iLocal_137) && !is_ped_injured(player_ped_id())) && vdist(get_entity_coords(player_ped_id(), 1), get_pickup_coords(iLocal_137)) > 250f)
				{
					func_62(9);
				}
			}
			if (!iLocal_121)
			{
				if (func_61())
				{
					iLocal_121 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (does_entity_exist(iLocal_51[iVar2]))
				{
					if ((!is_entity_dead(iLocal_51[iVar2], 0) && !is_ped_injured(iLocal_51[iVar2])) && vdist2(get_entity_coords(iLocal_51[0], 1), get_entity_coords(player_ped_id(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (does_entity_exist(iLocal_54))
				{
					if (is_vehicle_driveable(iLocal_54, 0))
					{
						if (is_ped_in_vehicle(player_ped_id(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) > 10000f && is_entity_occluded(iLocal_54)) || vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_37();
				}
			}
			func_33();
			func_28();
			func_23();
		}
		if (!iLocal_107)
		{
			if (func_22())
			{
				iLocal_127 = get_game_timer();
				iLocal_107 = true;
			}
		}
		if (iLocal_107)
		{
			if (!iLocal_108)
			{
				if (get_game_timer() - iLocal_127 > 5000)
				{
					set_player_wanted_level(player_id(), 2, 0);
					if (func_21() < 30f)
					{
						if (func_4(&Local_140, sLocal_139, "RESEC_COPS", 8, 0, 0, 0))
						{
							iLocal_108 = true;
						}
					}
					else
					{
						iLocal_108 = true;
					}
				}
			}
		}
		if ((get_game_timer() - iLocal_127 > 10000 && get_player_wanted_level(player_id()) > 0) && !iLocal_126)
		{
			iVar4 = get_random_int_in_range(false, 3);
			if (iVar4 == 0)
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (iLocal_108)
		{
			if ((!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1])) && !is_ped_injured(player_ped_id()))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(func_3(), 1)) < pow(50f, 2f))
				{
					if (get_player_wanted_level(player_id()) == 0)
					{
						set_player_wanted_level(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
					}
					set_player_wanted_centre_position(player_id(), get_entity_coords(player_ped_id(), 1));
				}
			}
		}
		if (get_player_wanted_level(player_id()) == 0 && func_2())
		{
			set_player_wanted_level(player_id(), 2, 0);
			set_player_wanted_level_now(player_id(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
		{
			if (get_vehicle_door_angle_ratio(iLocal_54, false) > 0f || get_vehicle_door_angle_ratio(iLocal_54, true) > 0f)
			{
				if (get_vehicle_door_lock_status(iLocal_54) == 3)
				{
					set_vehicle_doors_locked(iLocal_54, 1);
				}
			}
			if (!iLocal_112)
			{
				if (is_ped_in_vehicle(player_ped_id(), iLocal_54, 0))
				{
					iLocal_112 = true;
				}
			}
			if (!iLocal_112)
			{
				if (get_vehicle_door_angle_ratio(iLocal_54, false) == 0f && get_vehicle_door_angle_ratio(iLocal_54, true) == 0f)
				{
					if (get_vehicle_door_lock_status(iLocal_54) == 1)
					{
						set_vehicle_doors_locked(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				remove_shocking_event(iLocal_131);
			}
		}
		if (does_entity_exist(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar5]) && !is_entity_dead(iLocal_51[iVar5], 0))
				{
					if (is_entity_attached_to_entity(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								set_ped_alternate_movement_anim(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 8f, 1);
								set_ped_alternate_movement_anim(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								set_ped_alternate_movement_anim(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 8f, 1);
								set_ped_alternate_movement_anim(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (is_ped_armed(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							hide_ped_weapon_for_scripted_cutscene(iLocal_51[iVar5], true);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 0, -8f);
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 1, -8f);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 0, -8f);
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 1, -8f);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 0, -8f);
							clear_ped_alternate_movement_anim(iLocal_51[iVar5], 1, -8f);
						}
						if (is_ped_armed(iLocal_51[iVar5], 4) && iLocal_115)
						{
							hide_ped_weapon_for_scripted_cutscene(iLocal_51[iVar5], true);
							iLocal_115 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						clear_ped_alternate_movement_anim(iLocal_51[iVar5], 0, -8f);
						clear_ped_alternate_movement_anim(iLocal_51[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!iLocal_109 && !iLocal_496)
		{
			if (((((does_entity_exist(iLocal_56) && is_entity_attached(iLocal_56)) && !is_ped_injured(iLocal_51[iLocal_130])) && !is_entity_playing_anim(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !is_entity_playing_anim(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !is_entity_playing_anim(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				task_play_anim(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (does_entity_exist(iLocal_54))
			{
				if (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1))
				{
					iLocal_116 = 1;
				}
				clear_entity_last_damage_entity(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!is_ped_injured(player_ped_id()) && (((is_vehicle_driveable(iLocal_54, 0) && iLocal_114) && does_pickup_exist(iLocal_137)) || (!is_vehicle_driveable(iLocal_54, 0) && does_pickup_exist(iLocal_137)))) && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) < 20f) && vdist(get_entity_coords(player_ped_id(), 1), get_pickup_coords(iLocal_137)) < 20f)
	{
		iVar1 = get_random_ped_at_coord(get_entity_coords(player_ped_id(), 0), fVar0, fVar0, fVar0, -1);
		if (!is_ped_injured(iVar1))
		{
			if (get_entity_model(iVar1) == joaat("s_m_y_cop_01") || get_entity_model(iVar1) == joaat("s_f_y_cop_01"))
			{
				return true;
			}
		}
		iVar1 = get_random_ped_at_coord(get_entity_coords(player_ped_id(), 0), fVar0, fVar0, fVar0, -1);
		if (!is_ped_injured(iVar1))
		{
			if (get_entity_model(iVar1) == joaat("s_m_y_cop_01") || get_entity_model(iVar1) == joaat("s_f_y_cop_01"))
			{
				return true;
			}
		}
		iVar2 = get_random_vehicle_in_sphere(get_entity_coords(player_ped_id(), 0), fVar0, false, 1024);
		if (is_vehicle_driveable(iVar2, 0))
		{
			return true;
		}
		iVar2 = get_random_vehicle_in_sphere(get_entity_coords(player_ped_id(), 0), fVar0, false, 1024);
		if (is_vehicle_driveable(iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

auto func_3()
{
	Vector3 fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (!is_ped_injured(iLocal_51[0]))
		{
			fVar0 = vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!is_ped_injured(iLocal_51[1]))
		{
			if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_51[iVar1];
}

int func_4(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

bool func_5(char* sParam0, int iParam1, int iParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_17();
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
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_10();
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
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_9())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_8())
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
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_7();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_6();
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
		func_19();
	}
	return false;
}

void func_6()
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

void func_7()
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
	clear_bit(&Global_2284, 16);
}

bool func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
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
		if (get_ped_config_flag(player_ped_id(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_11();
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

auto func_11()
{
	func_12();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_15(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_14(player_ped_id());
			if (func_13(iVar0) && (!func_16(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_13(Global_101154.f_1826.f_539.f_3549))
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

int func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
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
	return Global_35711 == iParam0;
}

void func_17()
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

int func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

float func_21()
{
	Vector3 fVar0;
	
	fVar0 = 999999f;
	if (!is_ped_injured(player_ped_id()))
	{
		if (!is_ped_injured(iLocal_51[0]))
		{
			fVar0 = vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[0], 1));
		}
		if (!is_ped_injured(iLocal_51[1]))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[1], 1));
			}
		}
	}
	return sqrt(fVar0);
}

int func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (does_entity_exist(iLocal_51[iVar1]))
			{
				if (((!is_ped_injured(iLocal_51[iVar1]) && has_entity_been_damaged_by_entity(iLocal_51[iVar1], player_ped_id(), 1)) || is_ped_injured(iLocal_51[iVar1])) || is_entity_dead(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1])) && iLocal_116)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()
{
	if (!iLocal_121)
	{
		if (!iLocal_109)
		{
			if (does_entity_exist(iLocal_56))
			{
				if (!is_entity_attached(iLocal_56))
				{
					delete_object(&iLocal_56);
					if (!does_pickup_exist(iLocal_137) && !iLocal_111)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if (get_game_timer() - iLocal_136 > 3000)
				{
					if (is_ped_injured(iLocal_51[iLocal_130]) || is_ped_ragdoll(iLocal_51[iLocal_130]))
					{
						detach_entity(iLocal_56, 1, true);
						iLocal_136 = get_game_timer();
					}
				}
			}
			else if (!does_pickup_exist(iLocal_137))
			{
				if (is_ped_injured(iLocal_51[iLocal_130]) || ((!is_ped_injured(iLocal_51[iLocal_130]) && is_ped_ragdoll(iLocal_51[iLocal_130])) && !iLocal_111))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (does_entity_exist(iLocal_56))
		{
			delete_object(&iLocal_56);
		}
		if (does_pickup_exist(iLocal_137))
		{
			remove_pickup(iLocal_137);
		}
	}
}

void func_24(Vector3 vParam0, int iParam1)
{
	if (!iLocal_121 && !iLocal_111)
	{
		if (!iParam3)
		{
			if (iLocal_109)
			{
				vParam0 = {get_safe_pickup_coords(get_offset_from_entity_in_world_coords(iLocal_54, 0f, -3.3f, 0f), 1.2f, 1.5f)};
			}
			else
			{
				vParam0 = {get_safe_pickup_coords(get_entity_coords(iLocal_51[iLocal_130], 0), 1.2f, 1.5f)};
			}
		}
		set_bit(&iLocal_138, 3);
		set_bit(&iLocal_138, 4);
		set_bit(&iLocal_138, true);
		if (iParam3)
		{
			iLocal_137 = create_pickup_rotate(joaat("pickup_money_security_case"), vParam0, get_entity_rotation(iLocal_56, 2), false, iLocal_128, 2, 1, false);
		}
		else
		{
			iLocal_137 = create_pickup(joaat("pickup_money_security_case"), vParam0, iLocal_138, iLocal_128, 1, false);
		}
		if (!does_blip_exist(iLocal_64))
		{
			iLocal_64 = func_25(iLocal_137);
		}
		if (does_entity_exist(iLocal_56))
		{
			delete_object(&iLocal_56);
		}
		iLocal_111 = true;
	}
}

int func_25(int iParam0)
{
	return func_26(iParam0);
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_27(network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

float func_27(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_28()
{
	if (func_30())
	{
		if (does_entity_exist(iLocal_57))
		{
			set_vehicle_door_open(iLocal_54, 2, 0, 0);
			set_vehicle_door_open(iLocal_54, 3, 0, 0);
			if (does_entity_exist(iLocal_57))
			{
				delete_object(&iLocal_57);
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (iLocal_109)
			{
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (get_vehicle_door_angle_ratio(iLocal_54, 2) == 0f && get_vehicle_door_angle_ratio(iLocal_54, 3) == 0f)
			{
				if (does_entity_exist(iLocal_56))
				{
					if (is_entity_attached(iLocal_56))
					{
						detach_entity(iLocal_56, 1, true);
					}
					attach_entity_to_entity(iLocal_56, iLocal_54, 0, vLocal_81, vLocal_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!iLocal_111 && !iLocal_121)
			{
				if (!is_entity_dead(iLocal_54, 0))
				{
					if (((is_vehicle_driveable(iLocal_54, 0) && get_vehicle_door_angle_ratio(iLocal_54, 2) > 0.25f) && get_vehicle_door_angle_ratio(iLocal_54, 3) > 0.25f) || !is_vehicle_driveable(iLocal_54, 0))
					{
						if (does_entity_exist(iLocal_56))
						{
							if (is_entity_attached(iLocal_56))
							{
								play_sound_from_coord(get_sound_id(), "DOORS_BLOWN", get_world_position_of_entity_bone(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								detach_entity(iLocal_56, 1, false);
								set_entity_collision(iLocal_56, true, 0);
								activate_physics(iLocal_56);
								set_activate_object_physics_as_soon_as_it_is_unfrozen(iLocal_56, 1);
								vLocal_477 = {get_entity_coords(iLocal_56, 1) - get_entity_coords(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f)};
								if (vmag(vLocal_477) > 10f)
								{
									vLocal_477 = {func_29(vLocal_477)};
									vLocal_477 = {vLocal_477 * Vector(10f, 10f, 10f)};
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								apply_force_to_entity(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = get_game_timer();
							}
							else if (_0x7F8F6405F4777AF6(get_entity_coords(iLocal_56, 1), get_offset_from_entity_in_world_coords(iLocal_54, vLocal_470), get_offset_from_entity_in_world_coords(iLocal_54, vLocal_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if (get_game_timer() - iLocal_476 > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (does_entity_exist(iLocal_54))
				{
					set_vehicle_door_open(iLocal_54, 2, 0, 0);
					set_vehicle_door_open(iLocal_54, 3, 0, 0);
					func_24(get_offset_from_entity_in_world_coords(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_62(8);
			}
			if (does_entity_exist(iLocal_56) && !does_pickup_exist(iLocal_137))
			{
				if (get_entity_speed(iLocal_56) == 0f && get_game_timer() - iLocal_476 > 1000)
				{
					func_24(get_entity_coords(iLocal_56, 1), 1);
					delete_object(&iLocal_56);
				}
				else if (get_game_timer() - iLocal_476 > 5000)
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_29(Vector3 vParam0)
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

bool func_30()
{
	int iVar0;
	
	if (does_entity_exist(iLocal_57) && is_entity_attached(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (_0x34318593248C8FB2(get_entity_coords(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || does_object_of_type_exist_at_coords(get_entity_coords(iLocal_57, 1), 0.3f, get_weapontype_model(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		draw_debug_sphere(get_entity_coords(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_57, 1), 1f, 1) || (is_explosion_in_sphere(2, get_entity_coords(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (get_entity_health(iLocal_57) < iLocal_132 && has_entity_been_damaged_by_entity(iLocal_57, player_ped_id(), 0))
		{
			iLocal_133 += iLocal_132 - get_entity_health(iLocal_57);
			clear_entity_last_damage_entity(iLocal_57);
		}
		if (get_game_timer() - iLocal_467 > 200 && does_entity_exist(iLocal_54))
		{
			if (is_bullet_in_angled_area(get_offset_from_entity_in_world_coords(iLocal_54, 0f, 0f, 1.2195f - 0.27f), get_offset_from_entity_in_world_coords(iLocal_54, 0f, fLocal_469, 1.2195f + 0.09f), 0.45f, 1))
			{
				iLocal_467 = get_game_timer();
				iLocal_468++;
			}
		}
		if (iLocal_468 > 5)
		{
			return true;
		}
		if (iLocal_133 > 100 || iVar0)
		{
			return true;
		}
		iLocal_132 = get_entity_health(iLocal_57);
	}
	return false;
}

int func_31(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(vParam0 + vParam3))
	{
		if ((((((((((((((((((((((is_explosion_in_area(5, vParam3, vParam0) || (is_explosion_in_area(2, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(20, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(4, vParam3, vParam0)) || (is_explosion_in_area(28, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(32, vParam3, vParam0)) || is_explosion_in_area(25, vParam3, vParam0)) || is_explosion_in_area(9, vParam3, vParam0)) || (is_explosion_in_area(3, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(6, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(0, vParam3, vParam0)) || is_explosion_in_area(1, vParam3, vParam0)) || is_explosion_in_area(23, vParam3, vParam0)) || is_explosion_in_area(34, vParam3, vParam0)) || is_explosion_in_area(14, vParam3, vParam0)) || (is_explosion_in_area(30, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(12, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(7, vParam3, vParam0)) || (is_explosion_in_area(21, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(18, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(15, vParam3, vParam0)) || is_explosion_in_area(10, vParam3, vParam0)) || is_explosion_in_area(27, vParam3, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((is_explosion_in_sphere(5, vParam6, fParam9) || (is_explosion_in_sphere(2, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(20, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(4, vParam6, fParam9)) || (is_explosion_in_sphere(28, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(32, vParam6, fParam9)) || is_explosion_in_sphere(25, vParam6, fParam9)) || is_explosion_in_sphere(9, vParam6, fParam9)) || (is_explosion_in_sphere(3, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(6, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(0, vParam6, fParam9)) || is_explosion_in_sphere(1, vParam6, fParam9)) || is_explosion_in_sphere(23, vParam6, fParam9)) || is_explosion_in_sphere(34, vParam6, fParam9)) || is_explosion_in_sphere(14, vParam6, fParam9)) || (is_explosion_in_sphere(30, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(12, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(7, vParam6, fParam9)) || (is_explosion_in_sphere(21, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(18, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(15, vParam6, fParam9)) || is_explosion_in_sphere(10, vParam6, fParam9)) || is_explosion_in_sphere(27, vParam6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_32(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_33()
{
	int iVar0;
	int iVar1;
	int[] iVar2 = new int[2];
	
	if (!does_blip_exist(iLocal_63))
	{
		if (!iLocal_110)
		{
			if ((!is_ped_injured(iLocal_51[1]) && is_vehicle_driveable(iLocal_54, 0)) && !iLocal_121)
			{
				if (!iLocal_109)
				{
					if (!does_blip_exist(uLocal_60[1]))
					{
						uLocal_60[1] = func_36(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (does_blip_exist(uLocal_60[1]))
					{
						remove_blip(&(uLocal_60[1]));
					}
					if (!does_blip_exist(iLocal_59))
					{
						iLocal_59 = func_34(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (does_blip_exist(uLocal_60[1]))
				{
					remove_blip(&(uLocal_60[1]));
				}
				if (does_blip_exist(iLocal_59))
				{
					remove_blip(&iLocal_59);
				}
			}
		}
		else
		{
			if (does_blip_exist(uLocal_60[0]) && get_blip_hud_colour(uLocal_60[0]) != 119)
			{
				remove_blip(&(uLocal_60[0]));
			}
			if (does_blip_exist(uLocal_60[1]) && get_blip_hud_colour(uLocal_60[1]) != 119)
			{
				remove_blip(&(uLocal_60[1]));
			}
			if (does_blip_exist(iLocal_59) && get_blip_hud_colour(iLocal_59) != 119)
			{
				remove_blip(&iLocal_59);
			}
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!is_ped_injured(iLocal_51[iVar0]))
					{
						if (is_ped_in_vehicle(iLocal_51[iVar0], iLocal_54, 0))
						{
							iVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (iVar1)
			{
				if (!does_blip_exist(iLocal_59))
				{
					iLocal_59 = func_34(iLocal_54, 1, 0);
				}
			}
			else if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			if ((is_vehicle_driveable(iLocal_54, 0) && does_blip_exist(iLocal_59)) && !is_ped_injured(player_ped_id()))
			{
				if (is_ped_in_vehicle(player_ped_id(), iLocal_54, 0))
				{
					if (get_blip_alpha(iLocal_59) != 0)
					{
						set_blip_alpha(iLocal_59, 0);
					}
				}
				else if (get_blip_alpha(iLocal_59) != 255)
				{
					set_blip_alpha(iLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar0]) && !is_ped_injured(player_ped_id()))
				{
					if (!does_pickup_exist(iLocal_137) && !is_ped_in_any_vehicle(iLocal_51[iVar0], 0))
					{
						if (!is_ped_fleeing(iLocal_51[iVar0]) || vdist(get_entity_coords(iLocal_51[iVar0], 1), get_entity_coords(player_ped_id(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !is_ped_in_any_vehicle(iLocal_51[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_48 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!does_blip_exist(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_36(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (does_blip_exist(uLocal_60[iVar0]))
				{
					remove_blip(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (does_pickup_exist(iLocal_137) && !iLocal_121)
			{
				if (!does_blip_exist(iLocal_64))
				{
					iLocal_64 = func_26(iLocal_137);
				}
			}
			else if (does_blip_exist(iLocal_64))
			{
				remove_blip(&iLocal_64);
			}
		}
	}
	else if ((does_entity_exist(iLocal_54) && does_entity_exist(iLocal_51[0])) && does_entity_exist(iLocal_51[1]))
	{
		if ((((((!is_entity_occluded(iLocal_54) && is_entity_at_entity(player_ped_id(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!is_entity_occluded(iLocal_51[0]) && is_entity_at_entity(player_ped_id(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!is_entity_occluded(iLocal_51[1]) && is_entity_at_entity(player_ped_id(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || is_entity_at_entity(player_ped_id(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || is_entity_at_entity(player_ped_id(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || is_entity_at_entity(player_ped_id(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			remove_blip(&iLocal_63);
		}
	}
	if (does_blip_exist(uLocal_60[0]))
	{
		_0x75A16C3DA34F1245(uLocal_60[0], iLocal_122);
	}
	if (does_blip_exist(uLocal_60[1]))
	{
		_0x75A16C3DA34F1245(uLocal_60[1], iLocal_122);
	}
	if (does_blip_exist(iLocal_59))
	{
		_0x75A16C3DA34F1245(iLocal_59, iLocal_122);
	}
	if (does_blip_exist(iLocal_64))
	{
		_0x75A16C3DA34F1245(iLocal_64, iLocal_122);
	}
	if (!iLocal_122)
	{
		if (iLocal_110 || iLocal_49 == 3)
		{
			iLocal_122 = false;
		}
	}
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	return func_35(iParam0, !iParam1, iParam2);
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_27(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_27(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_27(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_35(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_37()
{
	func_39(9, iLocal_47);
	while (!func_38())
	{
		wait(false);
	}
	func_217();
}

bool func_38()
{
	return true;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_58(iParam0))
	{
		func_57(iParam0, iParam1);
		if (!func_56(51))
		{
			func_52("RE_REWARD", 1, 0, 4000, 10000, func_55(), 0, 138, 0);
			func_51(51);
		}
		if (func_50(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_40(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)
{
	Global_101140 = iParam0;
}

void func_41(int iParam0, auto uParam1, auto uParam2)
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
		func_47(891 + iParam0, 1, -1, 1);
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
		func_42();
	}
}

void func_42()
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
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
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
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_46(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_45() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_43();
				}
			}
		}
	}
}

bool func_43()
{
	if (func_44(0))
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

int func_44(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

auto func_45()
{
	return Global_25120;
}

int func_46(int iParam0, int iParam1)
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

int func_47(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_48();
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

auto func_48()
{
	return Global_1312747;
}

int func_49(int iParam0, int iParam1)
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

bool func_50(int iParam0)
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

void func_51(int iParam0)
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
		set_bit(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = get_game_timer() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = get_game_timer() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_54();
	}
}

void func_54()
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
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
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

int func_56(int iParam0)
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
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_57(int iParam0, int iParam1)
{
	set_bit(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_58(int iParam0)
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

auto func_59()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_60(cVar0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_61()
{
	if (iLocal_111)
	{
		if (has_pickup_been_collected(iLocal_137))
		{
			return true;
		}
	}
	return false;
}

void func_62(int iParam0)
{
	iLocal_48 = iParam0;
	iLocal_50 = 0;
}

bool func_63()
{
	if (!does_pickup_exist(iLocal_137))
	{
		if (iLocal_109)
		{
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				if (!func_64(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = get_game_timer();
					}
				}
				else if (iLocal_465 != -1)
				{
					iLocal_465 = -1;
				}
			}
		}
		if (!iLocal_109)
		{
			if (iLocal_130 != -1)
			{
				if (!is_ped_injured(iLocal_51[iLocal_130]))
				{
					if (!func_64(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = get_game_timer();
						}
					}
					else if (iLocal_465 != -1)
					{
						iLocal_465 = -1;
					}
				}
			}
		}
		if (iLocal_465 != -1)
		{
			if (get_game_timer() - iLocal_465 > 3000)
			{
				set_ped_as_no_longer_needed(&(iLocal_51[0]));
				set_ped_as_no_longer_needed(&(iLocal_51[1]));
				stop_synchronized_entity_anim(iLocal_54, -1000f, 1);
				set_entity_collision(iLocal_54, true, 0);
				set_vehicle_as_no_longer_needed(&iLocal_54);
				return true;
			}
		}
	}
	else
	{
		if (iLocal_465 != -1)
		{
			iLocal_465 = -1;
		}
		if (!is_ped_injured(player_ped_id()) && vdist(get_pickup_coords(iLocal_137), get_entity_coords(player_ped_id(), 1)) > 300f)
		{
			return true;
		}
	}
	return false;
}

bool func_64(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_ped_injured(player_ped_id()))
	{
		if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) < 150f)
		{
			return true;
		}
		else if (!is_entity_occluded(iParam0) && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) < 300f)
		{
			return true;
		}
	}
	return false;
}

void func_65()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_507 == -1)
	{
		iLocal_507 = get_game_timer();
	}
	if (!is_ped_injured(player_ped_id()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_110 = true;
				if (!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1]))
				{
					if (func_21() < 30f && !is_ped_injured(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, sLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!is_ped_injured(iLocal_51[iVar0]) && does_entity_exist(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || iLocal_109) || !is_entity_attached_to_entity(iLocal_56, iLocal_51[iVar0]))
						{
							clear_ped_tasks(iLocal_51[iVar0]);
							open_sequence_task(&iLocal_58);
							if (is_ped_in_any_vehicle(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (has_clip_set_loaded("move_injured_generic"))
									{
										set_ped_movement_clipset(iLocal_51[iVar0], "move_injured_generic", 0.25f);
										iLocal_118[iVar0] = 1;
									}
								}
								task_leave_any_vehicle(false, false, 256);
							}
							task_clear_look_at(false);
							if (iLocal_118[iVar0])
							{
								task_stand_still(false, get_random_int_in_range(1000, 3000));
							}
							task_combat_ped(false, player_ped_id(), 0, 16);
							close_sequence_task(iLocal_58);
							task_perform_sequence(iLocal_51[iVar0], iLocal_58);
							clear_sequence_task(&iLocal_58);
						}
						set_ped_combat_attributes(iLocal_51[iVar0], 6, false);
						set_ped_combat_attributes(iLocal_51[iVar0], 0, true);
						set_ped_combat_attributes(iLocal_51[iVar0], 1, false);
						set_ped_combat_movement(iLocal_51[iVar0], 1);
						set_ped_target_loss_response(iLocal_51[iVar0], 1);
						set_blocking_of_non_temporary_events(iLocal_51[iVar0], true);
					}
					iVar0++;
				}
				if ((does_entity_exist(iLocal_56) && is_entity_attached(iLocal_56)) && !is_ped_injured(iLocal_51[iLocal_130]))
				{
					clear_ped_tasks(iLocal_51[iLocal_130]);
				}
				settimera(false);
				iLocal_50++;
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!is_ped_injured(iLocal_51[iLocal_130]))
					{
						clear_ped_tasks(iLocal_51[iLocal_130]);
						open_sequence_task(&iLocal_58);
						if (is_ped_in_any_vehicle(iLocal_51[iLocal_130], 0))
						{
							task_leave_any_vehicle(false, false, 256);
						}
						task_clear_look_at(false);
						task_combat_ped(false, player_ped_id(), 0, 16);
						close_sequence_task(iLocal_58);
						task_perform_sequence(iLocal_51[iLocal_130], iLocal_58);
						clear_sequence_task(&iLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1]))
				{
					if (is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1]))
					{
						if (Local_140[3 /*10*/] != iLocal_51[1])
						{
							func_69(&Local_140, 3);
							func_69(&Local_140, 4);
							func_68(&Local_140, 3, iLocal_51[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_51)
					{
						if (!is_ped_injured(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !is_entity_dead(iLocal_54, 0))
							{
								_0xE4723DB6E736CCFF(iLocal_51[iVar0], iLocal_54, get_offset_from_entity_in_world_coords(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((does_pickup_exist(iLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !iLocal_121)
							{
								_0xE4723DB6E736CCFF(iLocal_51[iVar0], iLocal_54, get_pickup_coords(iLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (iLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									remove_ped_defensive_area(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat(get_game_timer() - iLocal_500) > get_random_float_in_range(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (is_ped_armed(player_ped_id(), 4))
							{
								if (func_4(&Local_140, sLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = get_game_timer();
								}
							}
						}
					}
					if (is_vehicle_driveable(iLocal_54, 0))
					{
						if (!iLocal_109)
						{
							if (!is_ped_in_vehicle(player_ped_id(), iLocal_54, 0) && get_game_timer() - iLocal_507 > 5000)
							{
								if (func_21() > 30f + 30f / 10f)
								{
									func_62(7);
								}
								if (func_21() > 30f / 2f && !func_66())
								{
									if (!iLocal_109)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_48 != 8)
								{
									iLocal_123[0] = 0;
									iLocal_123[1] = 0;
									iLocal_507 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!is_ped_injured(iLocal_51[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (timera() > iVar1 && iLocal_118[iVar0])
				{
					reset_ped_movement_clipset(iLocal_51[iVar0], 0.25f);
					iLocal_118[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

auto func_66()
{
	int iVar0;
	
	if (get_game_timer() - iLocal_484 > 250)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar0]))
				{
					if (has_entity_clear_los_to_entity(iLocal_51[iVar0], player_ped_id(), 19) && has_entity_clear_los_to_entity_in_front(iLocal_51[iVar0], player_ped_id()))
					{
						iLocal_481[iVar0] = 1;
					}
					else
					{
						iLocal_481[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_481[0] || iLocal_481[1]);
}

bool func_67()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_68(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!is_ped_injured(iParam2))
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
		if (!is_ped_injured(iParam2))
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

void func_69(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iLocal_56))
	{
		if (!is_ped_injured(iLocal_51[iParam0]))
		{
			if (is_entity_attached_to_entity(iLocal_56, iLocal_51[iParam0]))
			{
				if (is_entity_playing_anim(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (get_entity_anim_current_time(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						detach_entity(iLocal_56, 1, true);
						delete_object(&iLocal_56);
					}
				}
				else
				{
					set_blocking_of_non_temporary_events(iLocal_51[iParam0], true);
					task_play_anim(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	iVar0 = (!does_entity_exist(iLocal_56) || (does_entity_exist(iLocal_56) && !is_entity_attached_to_entity(iLocal_56, iLocal_51[iParam0])));
	if (iVar0)
	{
		if (!is_ped_injured(iLocal_51[iParam0]))
		{
			set_blocking_of_non_temporary_events(iLocal_51[iParam0], false);
		}
	}
	return iVar0;
}

void func_71(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	Vector3[] vVar5 = new Vector3[2];
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		vVar0 = {func_29(get_offset_from_entity_given_world_coords(iLocal_54, get_entity_coords(player_ped_id(), 1)))};
		fVar3 = get_entity_heading(iLocal_54) + get_heading_from_vector_2d(vVar0.x, vVar0.y) + 45f;
		fVar4 = get_entity_heading(iLocal_54) + get_heading_from_vector_2d(vVar0.x, vVar0.y) - 45f;
		vVar5[0 /*3*/] = {_get_object_offset_from_coords(get_entity_coords(iLocal_54, 1), fVar3, 0f, 4.5f, 0f)};
		vVar5[1 /*3*/] = {_get_object_offset_from_coords(get_entity_coords(iLocal_54, 1), fVar4, 0f, 4.5f, 0f)};
		func_72(&fVar3);
		func_72(&fVar4);
		if (vdist(get_entity_coords(player_ped_id(), 1), vLocal_501) > 2f)
		{
			iVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!is_ped_injured(iLocal_51[iVar12]))
			{
				if (vdist(get_entity_coords(iLocal_51[iVar12], 1), vVar5[iVar12 /*3*/]) > 2f)
				{
					iVar13 = true;
				}
			}
			iVar12++;
		}
		if (iVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_51)
			{
				if ((((((!is_ped_injured(iLocal_51[iVar12]) && !is_ped_injured(player_ped_id())) && vdist(get_entity_coords(iLocal_51[iVar12], 1), vVar5[iVar12 /*3*/]) > 2f) && get_game_timer() - iLocal_504[iVar12] > 1000) && !is_ped_in_any_vehicle(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (iParam1)
					{
						if (func_66())
						{
							vLocal_501 = {get_entity_coords(player_ped_id(), 1)};
						}
						open_sequence_task(&iVar14);
						if (func_66() || func_32(vLocal_501))
						{
							task_go_to_coord_while_aiming_at_entity(0, vVar5[iVar12 /*3*/], player_ped_id(), 2f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_aim_gun_at_entity(false, player_ped_id(), -1, 1);
						}
						else
						{
							task_go_to_coord_while_aiming_at_coord(false, vVar5[iVar12 /*3*/], vLocal_501, 2f, false, 0.5f, 4f, true, 0, 0, -957453492);
							task_aim_gun_at_coord(false, vLocal_501, -1, 1, 0);
						}
						close_sequence_task(iVar14);
						task_perform_sequence(iLocal_51[iVar12], iVar14);
						clear_sequence_task(&iVar14);
					}
					iLocal_504[iVar12] = get_game_timer();
				}
				iVar12++;
			}
		}
	}
}

void func_72(Vector3 fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 -= 360f;
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 += 360f;
	}
}

void func_73(int iParam0)
{
	Vector3 fVar0;
	
	if (is_vehicle_driveable(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!iLocal_109)
				{
					set_blocking_of_non_temporary_events(iParam0, true);
					clear_ped_tasks(iParam0);
					vLocal_485 = {get_world_position_of_entity_bone(iLocal_54, 0)};
					vLocal_488 = {get_entity_rotation(iLocal_54, 2)};
					vLocal_491 = {get_anim_initial_offset_position("random@security_van", "sec_case_into_van_panic", vLocal_485, vLocal_488, 0, 2)};
					if (((!is_ped_injured(iLocal_51[1]) && !is_entity_dead(iLocal_51[1], 0)) && !is_ped_injured(iLocal_51[0])) && !is_entity_dead(iLocal_51[0], 0))
					{
						if (func_21() < 20f)
						{
							if (iLocal_110)
							{
								func_4(&Local_140, sLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (does_pickup_exist(iLocal_137))
						{
							if (iLocal_110)
							{
								task_follow_nav_mesh_to_coord(iParam0, get_pickup_coords(iLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								task_follow_nav_mesh_to_coord(iParam0, get_pickup_coords(iLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!is_ped_injured(iParam0))
					{
						if (does_pickup_exist(iLocal_137))
						{
							task_follow_nav_mesh_to_coord(iParam0, get_pickup_coords(iLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
				}
				else
				{
					iLocal_50 = 4;
				}
				break;
			
			case 1:
				if (!is_ped_injured(iParam0) && does_pickup_exist(iLocal_137))
				{
					if ((get_distance_between_coords(get_entity_coords(iParam0, 1), get_pickup_coords(iLocal_137), 1) < 2f && !is_ped_ragdoll(iParam0)) && get_game_timer() - iLocal_136 > 3000)
					{
						if (is_ped_armed(iParam0, 4))
						{
							set_current_ped_weapon(iParam0, joaat("weapon_unarmed"), true);
						}
						remove_pickup(iLocal_137);
						func_79(iParam0);
						set_current_ped_weapon(iParam0, joaat("weapon_unarmed"), true);
						iLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!is_ped_injured(iParam0) && is_vehicle_driveable(iLocal_54, 0))
				{
					if (get_script_task_status(iParam0, 713668775) != 1)
					{
						if (iLocal_110)
						{
							task_follow_nav_mesh_to_coord(iParam0, vLocal_491, 2f, -1, 0.1f, 512, vLocal_488.z);
						}
						else
						{
							task_follow_nav_mesh_to_coord(iParam0, vLocal_491, 1f, -1, 0.1f, 512, vLocal_488.z);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!is_ped_injured(iParam0))
				{
					if (does_pickup_exist(iLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = get_entity_heading(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 -= 360f;
						}
						if (fVar0 <= -180f)
						{
							fVar0 += 360f;
						}
						if (vLocal_488.z > 180f)
						{
							vLocal_488.z -= 360f;
						}
						if (vLocal_488.z <= -180f)
						{
							vLocal_488.z += 360f;
						}
						if (vdist(vLocal_491, get_entity_coords(iParam0, 1)) < 0.3f)
						{
							if (absf(fVar0 - vLocal_488.z) < 15f)
							{
								clear_ped_alternate_walk_anim(iParam0, -8f);
								clear_ped_tasks(iParam0);
								iLocal_496 = true;
								iLocal_494 = create_synchronized_scene(vLocal_485, vLocal_488, 2);
								if (iLocal_110)
								{
									task_synchronized_scene(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									play_synchronized_entity_anim(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									task_synchronized_scene(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									play_synchronized_entity_anim(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								_0x2208438012482A1A(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (is_entity_occluded(iParam0) && !is_sphere_visible(vLocal_485, 2f))
						{
							set_entity_coords(iParam0, vLocal_485, 1, false, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (is_synchronized_scene_running(iLocal_494))
				{
					if (iLocal_110)
					{
						fLocal_508 = 0.42f;
					}
					else
					{
						fLocal_508 = 0.3893f;
					}
					if (iLocal_110)
					{
						fLocal_509 = 0.52f;
					}
					else
					{
						fLocal_509 = 0.546243f;
					}
					if (!iLocal_109)
					{
						if ((does_entity_exist(iLocal_56) && is_entity_attached_to_entity(iLocal_56, iParam0)) && get_synchronized_scene_phase(iLocal_494) > fLocal_508)
						{
							if (!is_entity_attached_to_entity(iLocal_56, iLocal_54))
							{
								detach_entity(iLocal_56, 1, true);
								set_entity_collision(iLocal_56, false, 0);
								attach_entity_to_entity(iLocal_56, iLocal_54, 0, get_offset_from_entity_given_world_coords(iLocal_54, get_entity_coords(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							iLocal_109 = true;
						}
					}
					else if (get_synchronized_scene_phase(iLocal_494) > fLocal_509)
					{
						stop_synchronized_entity_anim(iLocal_54, -4f, 1);
						clear_ped_tasks(iParam0);
						if (does_entity_exist(iLocal_56))
						{
							iLocal_106 = 0;
							set_vehicle_door_shut(iLocal_54, 2, 1);
							set_vehicle_door_shut(iLocal_54, 3, 1);
							set_blocking_of_non_temporary_events(iParam0, false);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((is_synchronized_scene_running(iLocal_494) && get_synchronized_scene_phase(iLocal_494) > fLocal_509) || !is_synchronized_scene_running(iLocal_494))
				{
					if (!iLocal_110)
					{
						if (!is_ped_injured(iLocal_51[0]))
						{
							task_enter_vehicle(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (is_vehicle_driveable(iLocal_54, 0))
				{
					if (iLocal_110)
					{
						func_62(6);
					}
					else
					{
						func_62(4);
					}
				}
				else
				{
					func_62(8);
				}
				break;
			}
	}
	if (!is_vehicle_driveable(iLocal_54, 0))
	{
		if (!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1]))
		{
			func_62(8);
		}
	}
	if ((!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1])) && !is_ped_injured(player_ped_id()))
	{
		if (!iLocal_109)
		{
			if ((((((func_21() < 10f && is_ped_armed(player_ped_id(), 6)) && func_66()) || ((func_21() < 20f && is_ped_armed(player_ped_id(), 6)) && is_ped_shooting(player_ped_id()))) || (func_21() < 5f && iLocal_110)) || (is_ped_in_any_vehicle(player_ped_id(), 0) && func_74(get_vehicle_ped_is_in(player_ped_id(), 0)))) || ((!is_ped_in_any_vehicle(player_ped_id(), 0) && does_entity_exist(get_players_last_vehicle())) && func_74(get_players_last_vehicle())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (iLocal_109)
		{
			if (is_synchronized_scene_running(iLocal_494))
			{
				stop_synchronized_entity_anim(iLocal_54, -8f, 1);
			}
		}
		if (!is_ped_injured(iParam0))
		{
			set_blocking_of_non_temporary_events(iParam0, false);
		}
	}
	if ((is_vehicle_driveable(iLocal_54, 0) && iLocal_48 != 7) && is_synchronized_scene_running(iLocal_494))
	{
		stop_synchronized_entity_anim(iLocal_54, -8f, 1);
	}
}

int func_74(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	Vector3[] vVar7 = new Vector3[4];
	Vector3[] vVar20 = new Vector3[4];
	Vector3[] vVar33 = new Vector3[4];
	Vector3[] vVar46 = new Vector3[4];
	auto uVar59;
	Vector3 fVar72;
	Vector3 fVar73;
	
	iVar0 = 0;
	if (does_entity_exist(iParam0) && does_entity_exist(iLocal_54))
	{
		uVar59 = 4;
		get_model_dimensions(get_entity_model(iParam0), &Var1, &Var4);
		vVar7[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var1, Var4.f_1, 0f)};
		vVar7[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var4, Var4.f_1, 0f)};
		vVar7[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var4, Var1.f_1, 0f)};
		vVar7[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var1, Var1.f_1, 0f)};
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		vVar20[0 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73 - 0.25f, fVar72, 0f)};
		vVar20[1 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73 + 0.25f, fVar72, 0f)};
		vVar20[2 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73 - 0.25f, fVar72 - 1.55f, 0f)};
		vVar20[3 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73 + 0.25f, fVar72 - 1.55f, 0f)};
		vVar33[0 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73, 0.5f, 0f)};
		vVar33[1 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73 - 0.75f, 0.5f, 0f)};
		vVar33[2 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73 - 0.75f, 1.5f, 0f)};
		vVar33[3 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, -fVar73, 1.5f, 0f)};
		vVar46[0 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73, 0.5f, 0f)};
		vVar46[1 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73 + 0.75f, 0.5f, 0f)};
		vVar46[2 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73 + 0.75f, 1.5f, 0f)};
		vVar46[3 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_54, fVar73, 1.5f, 0f)};
		if (!iLocal_109)
		{
			if (func_75(&vVar20, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!is_ped_injured(iLocal_51[0]) && !is_ped_in_vehicle(iLocal_51[0], iLocal_54, 1))
		{
			if (func_75(&vVar33, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!is_ped_injured(iLocal_51[1]) && !is_ped_in_vehicle(iLocal_51[1], iLocal_54, 1))
		{
			if (func_75(&vVar46, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_75(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_76(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

bool func_76(Vector3 vParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, struct<2> Param5, auto uParam6, auto uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = vParam0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = vParam0.y;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = fVar0 - fVar1 * fVar6 - fVar7 - fVar4 - fVar5 * fVar2 - fVar3;
	if (fVar8 == 0f)
	{
		return false;
	}
	fVar9 = fVar0 * fVar5 - fVar4 * fVar1;
	fVar10 = fVar2 * fVar7 - fVar6 * fVar3;
	fVar11 = fVar9 * fVar2 - fVar3 - fVar0 - fVar1 * fVar10 / fVar8;
	fVar12 = fVar9 * fVar6 - fVar7 - fVar4 - fVar5 * fVar10 / fVar8;
	if (((fVar11 < func_78(fVar0, fVar1) || fVar11 > func_77(fVar0, fVar1)) || fVar11 < func_78(fVar2, fVar3)) || fVar11 > func_77(fVar2, fVar3))
	{
		return false;
	}
	if (((fVar12 < func_78(fVar4, fVar5) || fVar12 > func_77(fVar4, fVar5)) || fVar12 < func_78(fVar6, fVar7)) || fVar12 > func_77(fVar6, fVar7))
	{
		return false;
	}
	*uParam12 = fVar11;
	*uParam12.f_1 = fVar12;
	*uParam12.f_2 = vParam0.z;
	return true;
}

float func_77(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_78(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_79(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		if (!does_entity_exist(iLocal_56))
		{
			iLocal_56 = create_object(iLocal_105, vLocal_77, 1, true, false);
			set_entity_can_be_damaged(iLocal_56, 0);
		}
		if (does_entity_exist(iLocal_56))
		{
			attach_entity_to_entity(iLocal_56, iParam0, get_ped_bone_index(iParam0, 28422), vLocal_90, vLocal_93, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!is_ped_injured(iLocal_51[iVar0]))
				{
					set_blocking_of_non_temporary_events(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			iLocal_110 = true;
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				if (does_entity_exist(func_83()))
				{
					if (!is_ped_injured(func_83()))
					{
						if (get_ped_in_vehicle_seat(iLocal_54, -1) != func_83() && is_vehicle_seat_free(iLocal_54, -1))
						{
							task_enter_vehicle(func_83(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!is_ped_injured(iLocal_51[1]) && func_83() != iLocal_51[1])
				{
					if (get_ped_in_vehicle_seat(iLocal_54, false) != iLocal_51[1] && is_vehicle_seat_free(iLocal_54, false))
					{
						task_enter_vehicle(iLocal_51[1], iLocal_54, -1, false, 2f, 1, 0);
					}
				}
				iLocal_50++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (does_entity_exist(func_83()) && !is_ped_injured(player_ped_id()))
				{
					task_vehicle_mission_ped_target(func_83(), iLocal_54, player_ped_id(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (does_entity_exist(func_83()))
				{
					task_vehicle_mission(func_83(), iLocal_54, false, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				if (get_entity_speed(iLocal_54) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((does_entity_exist(iLocal_54) && does_entity_exist(get_ped_in_vehicle_seat(iLocal_54, -1))) && (is_entity_dead(get_ped_in_vehicle_seat(iLocal_54, -1), 0) || is_ped_injured(get_ped_in_vehicle_seat(iLocal_54, -1))))
	{
		iVar1 = 0;
		if (get_ped_in_vehicle_seat(iLocal_54, -1) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (vdist2(get_entity_coords(iLocal_54, 1), get_entity_coords(player_ped_id(), 1)) > 100f)
		{
			if (!is_ped_injured(iLocal_51[iVar1]) && get_script_task_status(iLocal_51[iVar1], 242628503) != 1)
			{
				set_ped_flee_attributes(iLocal_51[iVar1], 2, true);
				open_sequence_task(&iVar2);
				task_shuffle_to_next_vehicle_seat(false, iLocal_54);
				task_vehicle_mission_ped_target(false, iLocal_54, player_ped_id(), 8, 50f, 786484, 100f, 5f, 1);
				close_sequence_task(iVar2);
				task_perform_sequence(iLocal_51[iVar1], iVar2);
				clear_sequence_task(&iVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!is_vehicle_driveable(iLocal_54, 0) || does_pickup_exist(iLocal_137)) || iLocal_49 == 3) || is_vehicle_stuck_timer_up(iLocal_54, 0, 7000)) || is_vehicle_stuck_timer_up(iLocal_54, 3, 30000)) || is_vehicle_stuck_timer_up(iLocal_54, 2, 30000)) || is_vehicle_stuck_timer_up(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

bool func_81()
{
	if (does_entity_exist(iLocal_54))
	{
		if (!is_entity_dead(iLocal_54, 0))
		{
			if (((((get_entity_health(iLocal_54) < 300 || get_vehicle_engine_health(iLocal_54) < 200f) || (is_vehicle_tyre_burst(iLocal_54, false, 0) && is_vehicle_tyre_burst(iLocal_54, true, 0))) || (is_vehicle_tyre_burst(iLocal_54, 4, 0) && is_vehicle_tyre_burst(iLocal_54, 5, 0))) || (is_vehicle_tyre_burst(iLocal_54, false, 0) && is_vehicle_tyre_burst(iLocal_54, 4, 0))) || (is_vehicle_tyre_burst(iLocal_54, true, 0) && is_vehicle_tyre_burst(iLocal_54, 5, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_82()
{
	int iVar0;
	
	iVar0 = 1;
	if (is_vehicle_driveable(iLocal_54, 0))
	{
		if (!is_ped_injured(iLocal_51[0]) && !is_entity_dead(iLocal_51[0], 0))
		{
			if (!is_ped_in_vehicle(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!is_ped_injured(iLocal_51[1]) && !is_entity_dead(iLocal_51[1], 0))
		{
			if (!is_ped_in_vehicle(iLocal_51[1], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_83()
{
	if (!is_ped_injured(iLocal_51[0]) && !is_entity_dead(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!is_ped_injured(iLocal_51[1]) && !is_entity_dead(iLocal_51[1], 0))
	{
		return iLocal_51[1];
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_50)
	{
		case 0:
			if (!iLocal_109)
			{
				if (does_entity_exist(iLocal_56) && is_entity_attached(iLocal_56))
				{
					detach_entity(iLocal_56, 1, true);
				}
			}
			if ((!is_ped_injured(iLocal_51[0]) || !is_ped_injured(iLocal_51[1])) && !is_ped_injured(player_ped_id()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_140, sLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!is_ped_injured(iLocal_51[iVar0]))
					{
						set_ped_combat_attributes(iLocal_51[iVar0], 17, true);
						set_ped_flee_attributes(iLocal_51[iVar0], 128, true);
						set_ped_flee_attributes(iLocal_51[iVar0], 16, true);
						set_ped_combat_attributes(iLocal_51[iVar0], 1, false);
						open_sequence_task(&iVar1);
						if (is_ped_in_any_vehicle(iLocal_51[iVar0], 1))
						{
							task_leave_any_vehicle(iLocal_51[iVar0], false, 256);
						}
						task_smart_flee_ped(false, player_ped_id(), 300f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(iLocal_51[iVar0], iVar1);
						clear_sequence_task(&iVar1);
					}
					iVar0++;
				}
			}
			iLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				if (func_85(iLocal_54, 1, 0, 0, 0, 0))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

bool func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
	if (iParam4 || !is_entity_dead(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!is_vehicle_seat_free(iParam0, iVar0 - 1))
			{
				iVar2 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
				if (iParam3 && iVar2 == player_ped_id())
				{
				}
				else if (iParam2)
				{
					if (!is_ped_injured(iVar2))
					{
						if (is_ped_a_player(iVar2))
						{
							if (get_player_wanted_level(_network_get_ped_player(iVar2)) == 0)
							{
								if (!iParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else
				{
					iVar3 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
					if (!is_ped_injured(iVar3))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_86()
{
	if (!is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, sLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (does_entity_exist(iLocal_56) && is_entity_attached(iLocal_56))
					{
						if (!is_entity_attached_to_entity(iLocal_56, iLocal_51[0]))
						{
							func_87(0);
						}
						else
						{
							clear_ped_tasks(iLocal_51[0]);
						}
						if (!is_entity_attached_to_entity(iLocal_56, iLocal_51[1]))
						{
							func_87(1);
						}
						else
						{
							clear_ped_tasks(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_87(0);
						func_87(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!is_ped_injured(iLocal_51[iLocal_130]))
					{
						func_87(iLocal_130);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!func_67())
				{
					if (func_4(&Local_140, sLocal_139, "RESEC_CAR2", 8, 0, 0, 0))
					{
						settimera(false);
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if ((timera() > 12000 && !func_67()) && func_4(&Local_140, sLocal_139, "RESEC_CAR3", 8, 0, 0, 0))
				{
					settimera(false);
					iLocal_50++;
				}
				break;
			
			case 4:
				if ((timera() > 7000 && !func_67()) && func_4(&Local_140, sLocal_139, "RESEC_CAR4", 8, 0, 0, 0))
				{
					settimera(false);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_50 > 0)
	{
		func_71(-1, 1);
	}
	if (does_entity_exist(iLocal_55))
	{
		if (!is_entity_dead(iLocal_55, 0) && is_vehicle_driveable(iLocal_54, 0))
		{
			if (vdist(get_entity_coords(iLocal_55, 1), get_entity_coords(iLocal_54, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((is_entity_dead(iLocal_55, 0) || !is_vehicle_driveable(iLocal_55, 0)) || (!is_entity_upright(iLocal_55, 90f) && !is_ped_in_vehicle(player_ped_id(), iLocal_55, 1)))
		{
			if (!func_74(iLocal_55))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!is_ped_injured(iLocal_51[0]) && !is_ped_injured(player_ped_id()))
	{
		if (has_entity_been_damaged_by_entity(iLocal_51[0], player_ped_id(), 1))
		{
			func_62(8);
		}
	}
	if (!is_ped_injured(iLocal_51[1]) && !is_ped_injured(player_ped_id()))
	{
		if (has_entity_been_damaged_by_entity(iLocal_51[1], player_ped_id(), 1))
		{
			func_62(8);
		}
	}
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if (iLocal_116)
		{
			func_62(8);
		}
	}
	if (iLocal_121)
	{
		func_62(8);
	}
	if ((!is_ped_injured(player_ped_id()) && func_66()) && is_ped_armed(player_ped_id(), 7))
	{
		func_62(2);
	}
	if (!is_vehicle_driveable(iLocal_54, 0))
	{
		func_62(5);
	}
}

void func_87(int iParam0)
{
	if (!is_ped_injured(iLocal_51[iParam0]) && !is_ped_injured(player_ped_id()))
	{
		clear_ped_tasks(iLocal_51[iParam0]);
		open_sequence_task(&iLocal_58);
		if (is_ped_in_any_vehicle(iLocal_51[iParam0], 0))
		{
			task_leave_any_vehicle(false, false, 256);
		}
		task_clear_look_at(false);
		task_look_at_entity(false, player_ped_id(), -1, 0, 2);
		task_aim_gun_at_entity(false, player_ped_id(), -1, 0);
		close_sequence_task(iLocal_58);
		task_perform_sequence(iLocal_51[iParam0], iLocal_58);
		clear_sequence_task(&iLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = add_shocking_event_at_position(116, get_entity_coords(iLocal_51[iParam0], 1), -1f);
		}
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!is_ped_injured(iLocal_51[0]))
			{
				set_blocking_of_non_temporary_events(iLocal_51[0], true);
			}
			if (!is_ped_injured(iLocal_51[1]))
			{
				set_blocking_of_non_temporary_events(iLocal_51[1], true);
			}
			if (func_95())
			{
				if (func_4(&Local_140, sLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					settimera(false);
					func_62(8);
				}
			}
			else if ((!is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1])) && !is_ped_injured(player_ped_id()))
			{
				if (func_94() || func_93())
				{
					func_4(&Local_140, sLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (is_ped_armed(player_ped_id(), 4))
				{
					func_4(&Local_140, sLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, sLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				settimera(false);
				if (does_entity_exist(iLocal_56) && is_entity_attached(iLocal_56))
				{
					if (!is_entity_attached_to_entity(iLocal_56, iLocal_51[0]))
					{
						func_87(0);
					}
					else
					{
						clear_ped_tasks(iLocal_51[0]);
					}
					if (!is_entity_attached_to_entity(iLocal_56, iLocal_51[1]))
					{
						func_87(1);
					}
					else
					{
						clear_ped_tasks(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_87(0);
					func_87(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_130))
			{
				if (!is_ped_injured(iLocal_51[iLocal_130]))
				{
					func_87(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_92())
			{
				if (!func_91(iLocal_54, 1000) && timera() > 10000)
				{
					iVar0 = true;
				}
				else if (timera() > 7000)
				{
					settimera(7000);
				}
				if (timera() > 5000)
				{
					if (func_94())
					{
						iVar0 = true;
					}
				}
				if (timera() > 10000)
				{
					if (func_93())
					{
						iVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_91(iLocal_51[iVar1], 1000) && (func_21() < 2f && is_ped_armed(player_ped_id(), 6)))
					{
						iVar0 = true;
					}
					if (!is_entity_dead(iLocal_51[iVar1], 0))
					{
						if (is_player_free_aiming_at_entity(player_id(), iLocal_51[iVar1]) || is_player_targetting_entity(player_id(), iLocal_51[iVar1]))
						{
							iVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat(get_game_timer() - iLocal_500) > get_random_float_in_range(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_140, sLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = get_game_timer();
						}
					}
				}
				if (iVar0)
				{
					func_89();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!is_ped_injured(player_ped_id()) && does_entity_exist(iLocal_51[iVar2]))
		{
			if ((is_ped_injured(iLocal_51[iVar2]) || is_entity_dead(iLocal_51[iVar2], 0)) && has_entity_been_damaged_by_entity(iLocal_51[iVar2], player_ped_id(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((is_ped_injured(iLocal_51[0]) || is_ped_injured(iLocal_51[1])) || iLocal_121)
	{
		func_62(8);
	}
	if ((is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id())) && func_66())
	{
		if (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1))
		{
			func_62(8);
		}
	}
	if (!is_vehicle_driveable(iLocal_54, 0))
	{
		func_62(5);
	}
	if ((!is_ped_injured(player_ped_id()) && is_ped_armed(player_ped_id(), 6)) && is_ped_shooting(player_ped_id()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_89()
{
	Global_14578 = 0;
	func_90();
}

void func_90()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (does_entity_exist(iParam0))
		{
			if ((is_entity_a_ped(iParam0) && !is_ped_injured(get_ped_index_from_entity_index(iParam0))) || (is_entity_a_vehicle(iParam0) && is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), 0)))
			{
				if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if (get_game_timer() - iLocal_499 > iParam1)
				{
					fLocal_498 = vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1));
					iLocal_499 = get_game_timer();
				}
			}
		}
	}
	return iVar0;
}

bool func_92()
{
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if (!is_entity_at_entity(player_ped_id(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !is_player_wanted_level_greater(player_id(), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_93()
{
	int iVar0;
	
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if (is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, 0f, 1.7532f, 0.5984f), get_offset_from_entity_in_world_coords(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, true, 0))
		{
			return true;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!is_ped_injured(iLocal_51[iVar0]))
			{
				if ((!is_ped_in_vehicle(iLocal_51[iVar0], iLocal_54, 0) && is_ped_on_specific_vehicle(player_ped_id(), iLocal_54)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[iVar0], 1)) < 400f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_94()
{
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if (get_vehicle_ped_is_using(player_ped_id()) == iLocal_54)
		{
			if (is_ped_trying_to_enter_a_locked_vehicle(player_ped_id()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_95()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if ((!is_ped_injured(iLocal_51[0]) && is_entity_at_entity(iLocal_51[0], player_ped_id(), 20f, 20f, 5f, 0, 1, 0)) || (!is_ped_injured(iLocal_51[1]) && is_entity_at_entity(iLocal_51[1], player_ped_id(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (is_ped_armed(player_ped_id(), 4) && is_ped_shooting(player_ped_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_97(auto uParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_98(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(auto uParam0, Vector3 vParam1, auto uParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	int iVar0;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (get_game_timer() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (is_string_null(iVar0))
	{
		if (!network_is_game_in_progress())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_96(iVar0))
	{
		func_113();
	}
	if (!is_gameplay_hint_active())
	{
		if (func_108(uParam0, iParam6, iParam8, 0))
		{
			func_107(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (*uParam0.f_6 == 2)
		{
			if (func_103(iVar0))
			{
				if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && uParam7)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_102(1);
							}
						}
					}
				}
			}
		}
		else if (func_103(iVar0))
		{
			if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
			{
				if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && uParam7)
				{
					if (!func_96(iVar0))
					{
						func_123(iVar0, -1);
						*uParam0.f_3 = iVar0;
						if (are_strings_equal("CMN_HINT", iVar0))
						{
							func_102(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!is_string_null(iVar0))
		{
			if (func_96(iVar0) && is_help_message_being_displayed())
			{
				clear_help(1);
			}
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 1))
		{
			if (is_ped_in_any_boat(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_heli(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_plane(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_sub(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_on_any_bike(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				func_121(uParam0, iVar0, 1);
			}
		}
		if (!func_108(uParam0, iParam6, iParam8, 0))
		{
			if ((!*uParam0 && !*uParam0.f_1) && !func_101(uParam0))
			{
				func_99(uParam0);
			}
		}
	}
}

void func_99(auto uParam0)
{
	if (func_100(player_ped_id()))
	{
		task_clear_look_at(player_ped_id());
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

bool func_100(int iParam0)
{
	if (does_entity_exist(iParam0))
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
			if (!is_ped_injured(get_ped_index_from_entity_index(iParam0)))
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

bool func_101(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > get_game_timer())
		{
			return true;
		}
	}
	return false;
}

int func_102(int iParam0)
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

bool func_103(char* sParam0)
{
	if (!func_104(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_102(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_102(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_102(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_104(int iParam0, int iParam1, int iParam2)
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
	if (func_106(0))
	{
		return false;
	}
	if (func_105())
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
		if (is_ped_in_any_vehicle(player_ped_id(), 1))
		{
			if (is_ped_in_any_boat(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(player_ped_id()))
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

int func_105()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_106(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
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

void func_107(auto uParam0, Vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	set_cinematic_button_active(false);
	iVar0 = *uParam0.f_9;
	iVar1 = *uParam0.f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	set_gameplay_coord_hint(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	task_look_at_coord(player_ped_id(), vParam1, -1, iVar2, iVar3);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = get_game_timer();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

bool func_108(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (get_game_timer() >= *uParam0.f_8 + *uParam0.f_9)
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
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (func_112(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_111(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_111(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_112(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_101(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (get_game_timer() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (!func_112(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = get_game_timer();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_111(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_111(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_112(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
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
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (!func_112(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_111(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_111(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_112(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (get_game_timer() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (func_110(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_109(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1) || func_109(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_110(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_101(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_104(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_113();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_109(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_110(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		disable_control_action(0, 80, 1);
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

bool func_111(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && get_game_timer() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_112(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		disable_control_action(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && get_game_timer() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

void func_113()
{
	set_bit(&Global_2284, 4);
}

void func_114(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_115(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_116(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_116(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (get_game_timer() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (is_string_null(iVar0))
	{
		if (!network_is_game_in_progress())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_96(iVar0))
	{
		func_113();
	}
	if (func_100(iParam1) && is_entity_visible(iParam1))
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
			if (func_108(uParam0, iParam7, iParam9, 0))
			{
				func_117(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_103(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_96(iVar0))
							{
								func_123(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_102(1);
								}
							}
						}
					}
				}
			}
			else if (func_103(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_102(1);
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
				if (func_96(sParam5))
				{
					clear_help(1);
				}
			}
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				if (is_ped_in_any_boat(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			if (!func_108(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_101(uParam0))
				{
					func_99(uParam0);
				}
			}
		}
	}
	else
	{
		func_121(uParam0, iVar0, 0);
	}
}

void func_117(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_121(uParam0, 0, 0);
	}
	if (func_120(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_118())
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
	task_look_at_entity(player_ped_id(), iParam1, -1, iVar3, iVar4);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = get_game_timer();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

int func_118()
{
	return func_119(player_id());
}

bool func_119(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_120(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_121(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (network_is_game_in_progress())
	{
		if (is_bit_set(Global_2460486.f_4429, 26))
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
		if (!network_is_game_in_progress())
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
		if (func_96(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_96(sVar0))
		{
			clear_help(1);
		}
	}
}

void func_122(int iParam0)
{
	set_bit(&(Global_101154.f_29520.f_6), iParam0);
}

void func_123(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_124(int iParam0)
{
	return is_bit_set(Global_101154.f_29520.f_6, iParam0);
}

bool func_125(int iParam0)
{
	if (func_128())
	{
		Global_101144 = 1;
		Global_101141 = get_game_timer();
		if (func_50(Global_101143))
		{
			func_126(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_50(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_123(func_127(iParam0), -1);
					Global_101154.f_29520.f_2++;
					set_bit(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(Global_101150, true))
			{
				if (!is_help_message_on_screen())
				{
					func_123(func_127(iParam0), -1);
					Global_101154.f_29520.f_3++;
					set_bit(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(Global_101150, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_123(func_127(iParam0), -1);
					Global_101154.f_29520.f_4++;
					set_bit(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_127(int iParam0)
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

bool func_128()
{
	switch (func_129(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_129(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_133(0))
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
		if (!func_131(iParam2))
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
			func_130(uParam0, iParam4);
		}
	}
	return 2;
}

void func_130(auto uParam0, int iParam1)
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

int func_131(int iParam0)
{
	return func_132(iParam0, Global_35711);
}

bool func_132(int iParam0, int iParam1)
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

bool func_133(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_131(iParam0))
	{
		return false;
	}
	return true;
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (is_vehicle_driveable(iLocal_54, 0))
			{
				if (!is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1]))
				{
					set_ped_combat_attributes(iLocal_51[0], 6, true);
					set_ped_combat_attributes(iLocal_51[1], 6, true);
					set_blocking_of_non_temporary_events(iLocal_51[0], true);
					set_blocking_of_non_temporary_events(iLocal_51[1], true);
					if (is_ped_in_vehicle(iLocal_51[0], iLocal_54, 0) && is_ped_in_vehicle(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							open_sequence_task(&iVar0);
							task_vehicle_drive_to_coord(false, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							task_vehicle_drive_wander(false, iLocal_54, 10f, 786603);
							close_sequence_task(iVar0);
							task_perform_sequence(iLocal_51[0], iVar0);
							clear_sequence_task(&iVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							open_sequence_task(&iVar1);
							task_vehicle_drive_to_coord(false, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							task_vehicle_drive_wander(false, iLocal_54, 10f, 786603);
							close_sequence_task(iVar1);
							task_perform_sequence(iLocal_51[0], iVar1);
							clear_sequence_task(&iVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							open_sequence_task(&iVar2);
							task_vehicle_drive_to_coord(false, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							task_vehicle_drive_wander(false, iLocal_54, 10f, 786603);
							close_sequence_task(iVar2);
							task_perform_sequence(iLocal_51[0], iVar2);
							clear_sequence_task(&iVar2);
							iLocal_50++;
						}
						else
						{
							task_vehicle_drive_wander(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!is_ped_in_vehicle(iLocal_51[0], iLocal_54, 0) && get_script_task_status(iLocal_51[0], -1794415470) != 1)
						{
							task_enter_vehicle(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!is_ped_in_vehicle(iLocal_51[1], iLocal_54, 0) && get_script_task_status(iLocal_51[1], -1794415470) != 1)
						{
							task_enter_vehicle(iLocal_51[1], iLocal_54, -1, false, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_138() || func_137()) || func_94()) || func_93()) || func_136()) || func_135())
			{
				if (func_21() < 20f)
				{
					func_89();
					func_4(&Local_140, sLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!is_ped_injured(iLocal_51[iVar3]) && !is_entity_dead(iLocal_51[iVar3], 0))
					{
						if (is_ped_jacking(player_ped_id()) && is_ped_being_jacked(iLocal_51[iVar3]))
						{
							func_62(8);
						}
					}
					else
					{
						func_62(6);
					}
					iVar3++;
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_54, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			get_current_ped_weapon(player_ped_id(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				draw_debug_text("PLAYER HAS PROJECTILE WEAPON", get_entity_coords(player_ped_id(), 1), 0, 0, 255, 255);
				if ((is_ped_shooting(player_ped_id()) && !is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, 0f, -3.44f, -3f), get_offset_from_entity_in_world_coords(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, true, 0)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) < 225f)
				{
					func_62(6);
				}
				if (is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, 0f, -3.44f, -3f), get_offset_from_entity_in_world_coords(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, true, 0))
				{
					draw_debug_text_2d("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_54, 1)) < 225f)
				{
					draw_debug_text_2d("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (is_ped_shooting(player_ped_id()))
				{
				}
			}
		}
		if (((is_vehicle_driveable(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_54, 1), 25f, 0)) || (!is_ped_injured(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_51[0], 1), 20f, 0))) || (!is_ped_injured(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_51[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_48 != 4)
		{
			if (!is_ped_injured(iLocal_51[0]))
			{
				set_ped_combat_attributes(iLocal_51[0], 6, false);
				set_blocking_of_non_temporary_events(iLocal_51[0], false);
			}
			if (!is_ped_injured(iLocal_51[1]))
			{
				set_ped_combat_attributes(iLocal_51[1], 6, false);
				set_blocking_of_non_temporary_events(iLocal_51[1], false);
			}
		}
	}
}

bool func_135()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	
	if ((is_vehicle_driveable(iLocal_54, 0) && is_player_playing(player_id())) && !is_ped_injured(player_ped_id()))
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1) - get_entity_coords(iLocal_54, 1)};
		vVar3 = {get_entity_forward_vector(iLocal_54)};
		vVar6 = {get_offset_from_entity_given_world_coords(iLocal_54, get_entity_coords(player_ped_id(), 1))};
		if (((vVar6.y > 1f && (((is_player_targetting_entity(player_id(), iLocal_54) || is_player_free_aiming_at_entity(player_id(), iLocal_54)) || is_player_free_aiming_at_entity(player_id(), iLocal_51[0])) || is_player_free_aiming_at_entity(player_id(), iLocal_51[1]))) && absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) < 60f) && get_angle_between_2d_vectors(vVar3.z, vVar3.y, vVar0.z, vVar0.y) < 30f)
		{
			return true;
		}
	}
	return false;
}

bool func_136()
{
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if ((is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, 2.7f, 7f, -2f), get_offset_from_entity_in_world_coords(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, -2.7f, 7f, -2f), get_offset_from_entity_in_world_coords(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), get_offset_from_entity_in_world_coords(iLocal_54, 0f, 7f, -2f), get_offset_from_entity_in_world_coords(iLocal_54, 0f, 0f, 3f), 2.4f, 0, true, 0))
		{
			if (is_ped_planting_bomb(player_ped_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_137()
{
	int iVar0;
	
	if (is_vehicle_driveable(iLocal_54, 0) && !is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
			{
				iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			}
		}
		else if (does_entity_exist(get_players_last_vehicle()))
		{
			iVar0 = get_players_last_vehicle();
		}
		if (does_entity_exist(iVar0) && does_entity_exist(iLocal_54))
		{
			return ((is_vehicle_driveable(iVar0, 0) && is_entity_touching_entity(iVar0, iLocal_54)) && get_entity_speed(iVar0) > 10f);
		}
	}
	return false;
}

bool func_138()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (iLocal_116)
		{
			return true;
		}
		if (!is_ped_injured(iLocal_51[0]) || is_entity_dead(iLocal_51[0], 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_51[0], player_ped_id(), 1))
			{
				return true;
			}
		}
		if (!is_ped_injured(iLocal_51[1]) || is_entity_dead(iLocal_51[1], 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_51[1], player_ped_id(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_139()
{
	Vector3 fVar0;
	
	if ((!is_ped_injured(iLocal_51[0]) && !is_ped_injured(iLocal_51[1])) && is_vehicle_driveable(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				vLocal_485 = {get_world_position_of_entity_bone(iLocal_54, 0)};
				vLocal_488 = {get_entity_rotation(iLocal_54, 2)};
				vLocal_491 = {get_anim_initial_offset_position("random@security_van", "sec_case_into_van_calm", vLocal_485, vLocal_488, 0, 2)};
				iLocal_496 = false;
				iLocal_497 = 0;
				set_vehicle_on_ground_properly(iLocal_54);
				open_sequence_task(&iLocal_58);
				task_stand_still(false, 5000);
				task_follow_nav_mesh_to_coord(false, vLocal_491, 1f, -1, 0.1f, 512, vLocal_488.z);
				task_achieve_heading(false, vLocal_488.z, 0);
				close_sequence_task(iLocal_58);
				task_perform_sequence(iLocal_51[1], iLocal_58);
				clear_sequence_task(&iLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				vLocal_485 = {get_world_position_of_entity_bone(iLocal_54, 0)};
				vLocal_488 = {get_entity_rotation(iLocal_54, 2)};
				vLocal_491 = {get_anim_initial_offset_position("random@security_van", "sec_case_into_van_calm", vLocal_485, vLocal_488, 0, 2)};
				if (!is_synchronized_scene_running(iLocal_495))
				{
					if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_77) < 22500f && has_collision_loaded_around_entity(iLocal_54))
					{
						iLocal_495 = create_synchronized_scene(vLocal_485, vLocal_488, 2);
						task_synchronized_scene(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						set_synchronized_scene_looped(iLocal_495, true);
					}
				}
				if (get_script_task_status(iLocal_51[1], 242628503) != 1)
				{
					open_sequence_task(&iLocal_58);
					task_follow_nav_mesh_to_coord(false, vLocal_491, 1f, -1, 0.1f, 512, vLocal_488.z);
					task_achieve_heading(false, vLocal_488.z, 0);
					close_sequence_task(iLocal_58);
					task_perform_sequence(iLocal_51[1], iLocal_58);
					clear_sequence_task(&iLocal_58);
				}
				fVar0 = get_entity_heading(iLocal_51[1]);
				if (fVar0 > 180f)
				{
					fVar0 -= 360f;
				}
				if (fVar0 <= -180f)
				{
					fVar0 += 360f;
				}
				if (vLocal_488.z > 180f)
				{
					vLocal_488.z -= 360f;
				}
				if (vLocal_488.z <= -180f)
				{
					vLocal_488.z += 360f;
				}
				if (absf(fVar0 - vLocal_488.z) < 15f && vdist(vLocal_491, get_entity_coords(iLocal_51[1], 1)) < 0.2f)
				{
					clear_ped_alternate_walk_anim(iLocal_51[1], -8f);
					clear_ped_tasks(iLocal_51[1]);
					iLocal_496 = true;
					iLocal_494 = create_synchronized_scene(vLocal_485, vLocal_488, 2);
					task_synchronized_scene(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					play_synchronized_entity_anim(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((is_synchronized_scene_running(iLocal_494) && get_synchronized_scene_phase(iLocal_494) > 0.09f) && get_synchronized_scene_phase(iLocal_494) < 0.11f) && !is_ped_injured(player_ped_id()))
					{
						if (is_entity_at_entity(player_ped_id(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, sLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (is_synchronized_scene_running(iLocal_494))
				{
					if (!iLocal_109)
					{
						if ((does_entity_exist(iLocal_56) && is_entity_attached_to_entity(iLocal_56, iLocal_51[1])) && get_synchronized_scene_phase(iLocal_494) > 0.3793f)
						{
							if (!is_entity_attached_to_entity(iLocal_56, iLocal_54))
							{
								detach_entity(iLocal_56, 1, true);
								set_entity_collision(iLocal_56, false, 0);
								attach_entity_to_entity(iLocal_56, iLocal_54, 0, get_offset_from_entity_given_world_coords(iLocal_54, get_entity_coords(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							iLocal_109 = true;
						}
					}
					else if (get_synchronized_scene_phase(iLocal_494) > 0.546243f)
					{
						stop_synchronized_entity_anim(iLocal_54, -4f, 1);
						if (does_entity_exist(iLocal_56))
						{
							iLocal_106 = 0;
							set_vehicle_door_shut(iLocal_54, 2, 1);
							set_vehicle_door_shut(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((is_synchronized_scene_running(iLocal_494) && get_synchronized_scene_phase(iLocal_494) > 0.56f) && !is_ped_injured(player_ped_id())) && is_entity_at_entity(player_ped_id(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, sLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((is_synchronized_scene_running(iLocal_494) && get_synchronized_scene_phase(iLocal_494) > 0.6f) || !is_synchronized_scene_running(iLocal_494))
					{
						if (is_synchronized_scene_running(iLocal_495))
						{
							clear_ped_tasks(iLocal_51[0]);
							iLocal_495 = create_synchronized_scene(vLocal_485, vLocal_488, 2);
							task_synchronized_scene(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((is_synchronized_scene_running(iLocal_495) && get_synchronized_scene_phase(iLocal_495) >= 0.92f) || !is_synchronized_scene_running(iLocal_495))
				{
					if (!is_ped_in_vehicle(iLocal_51[0], iLocal_54, 0) && get_script_task_status(iLocal_51[0], -1794415470) != 1)
					{
						clear_ped_tasks(iLocal_51[0]);
						task_enter_vehicle(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (is_synchronized_scene_running(iLocal_494) && has_anim_event_fired(iLocal_51[1], get_hash_key("ENDS_IN_WALK")))
				{
					clear_ped_tasks(iLocal_51[1]);
					task_enter_vehicle(iLocal_51[1], iLocal_54, -1, false, 1f, 1, 0);
					settimera(false);
				}
				if ((func_82() && get_vehicle_door_angle_ratio(iLocal_54, false) == 0f) && get_vehicle_door_angle_ratio(iLocal_54, true) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (timera() > 15000)
				{
					set_vehicle_door_shut(iLocal_54, false, 1);
					set_vehicle_door_shut(iLocal_54, true, 1);
				}
				break;
		}
		if (((!is_ped_injured(func_3()) && !is_ped_injured(player_ped_id())) && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(func_3(), 1)) < 30f) && get_player_wanted_level(player_id()) != 0)
		{
			func_62(8);
		}
	}
	if (!is_ped_injured(iLocal_51[1]))
	{
		if (does_pickup_exist(iLocal_137))
		{
			func_62(7);
		}
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_143())
		{
			if (func_82())
			{
				func_62(6);
			}
			else
			{
				func_62(8);
			}
		}
		else if (func_141())
		{
			func_62(2);
		}
		else if (func_140())
		{
			func_62(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_89();
			if (!is_ped_injured(iLocal_51[0]))
			{
				if (is_entity_playing_anim(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						task_play_anim_advanced(iLocal_51[0], "random@security_van", "driver_exit_panic", vLocal_485, vLocal_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						clear_ped_tasks(iLocal_51[0]);
						task_play_anim(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((is_vehicle_driveable(iLocal_54, 0) && is_synchronized_scene_running(iLocal_494)) && !is_ped_injured(iLocal_51[1]))
			{
				stop_synchronized_entity_anim(iLocal_54, -1000f, 1);
				clear_ped_tasks(iLocal_51[1]);
			}
		}
		if (iLocal_109 && !does_pickup_exist(iLocal_137))
		{
			set_vehicle_door_shut(iLocal_54, 2, 1);
			set_vehicle_door_shut(iLocal_54, 3, 1);
		}
	}
}

bool func_140()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (!is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (!is_entity_dead(get_players_last_vehicle(), 0))
			{
				if (func_74(get_players_last_vehicle()))
				{
					iLocal_55 = get_players_last_vehicle();
					return true;
				}
			}
		}
		else if (!is_entity_dead(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			if (func_74(get_vehicle_ped_is_in(player_ped_id(), 0)))
			{
				fLocal_480 += get_frame_time();
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 -= get_frame_time() * 10f;
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = get_vehicle_ped_is_in(player_ped_id(), 0);
				return true;
			}
		}
	}
	return false;
}

bool func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!is_ped_injured(iLocal_51[iVar0]) && is_player_playing(player_id())) && !is_ped_injured(player_ped_id())) && (is_player_targetting_entity(player_id(), iLocal_51[iVar0]) || is_ped_in_melee_combat(player_ped_id()))) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51[iVar0], 1)) < 9f) && !is_ped_armed(player_ped_id(), 7)) && func_66())
		{
			return true;
		}
		if (is_ped_ragdoll(iLocal_51[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	if (func_93())
	{
		return true;
	}
	if ((func_142() || func_94()) && func_66())
	{
		if (!is_ped_in_vehicle(iLocal_51[0], iLocal_54, 0) || !is_ped_in_vehicle(iLocal_51[1], iLocal_54, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_142()
{
	int iVar0;
	
	if (!is_ped_injured(player_ped_id()))
	{
		get_current_ped_weapon(player_ped_id(), &iVar0, 1);
		if (is_ped_armed(player_ped_id(), 7) || (iVar0 == joaat("weapon_petrolcan") && is_ped_shooting(player_ped_id())))
		{
			if (is_ped_on_foot(player_ped_id()))
			{
				if (!is_ped_injured(iLocal_51[0]))
				{
					if (is_entity_at_entity(iLocal_51[0], player_ped_id(), 12f, 12f, 5f, 0, 1, 0))
					{
						return true;
					}
				}
				if (!is_ped_injured(iLocal_51[1]))
				{
					if (is_entity_at_entity(iLocal_51[1], player_ped_id(), 12f, 12f, 5f, 0, 1, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!is_ped_injured(iLocal_51[iVar0]) && has_entity_been_damaged_by_entity(iLocal_51[iVar0], player_ped_id(), 1)) || (!is_ped_injured(iLocal_51[iVar0]) && is_ped_in_combat(iLocal_51[iVar0], player_ped_id()))) || has_entity_been_damaged_by_entity(iLocal_51[iVar0], player_ped_id(), 1)) || (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1) && func_66())) || is_ped_injured(iLocal_51[iVar0])) || is_entity_dead(iLocal_51[iVar0], 0))
		{
			return true;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return true;
	}
	if (is_vehicle_driveable(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!is_ped_injured(iLocal_51[iVar0]))
			{
				if (is_ped_jacking(player_ped_id()) && is_ped_being_jacked(iLocal_51[iVar0]))
				{
					return true;
				}
			}
			iVar0++;
		}
		if (is_ped_in_vehicle(player_ped_id(), iLocal_54, 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	if (is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_plane(player_ped_id()))
	{
		if (is_entity_at_coord(player_ped_id(), vLocal_77, 25f, 25f, 20f, false, true, 0))
		{
			return true;
		}
	}
	if (((is_vehicle_driveable(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_54, 1), 25f, 0)) || (!is_ped_injured(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_51[0], 1), 20f, 0))) || (!is_ped_injured(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(iLocal_51[1], 1), 20f, 0)))
	{
		return true;
	}
	return false;
}

bool func_144()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (does_entity_exist(iLocal_51[iVar0]))
		{
			if ((!is_ped_injured(iLocal_51[iVar0]) && !is_entity_dead(iLocal_51[iVar0], 0)) && !is_ped_injured(player_ped_id()))
			{
				if ((is_bullet_in_area(get_entity_coords(iLocal_51[iVar0], 1), 5f, 1) || func_31(get_entity_coords(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), get_entity_coords(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || has_entity_been_damaged_by_entity(iLocal_51[iVar0], player_ped_id(), 1))
				{
					iLocal_110 = true;
					return true;
				}
			}
			else
			{
				iLocal_110 = true;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_145()
{
	int iVar0;
	
	iLocal_54 = create_vehicle(iLocal_104, vLocal_77, fLocal_80, 1, true);
	iLocal_57 = create_object(joaat("prop_security_case_01"), vLocal_77, 1, true, false);
	attach_entity_to_entity(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	set_entity_visible(iLocal_57, false, 0);
	set_entity_no_collision_entity(iLocal_57, iLocal_54, 0);
	set_vehicle_on_ground_properly(iLocal_54);
	set_vehicle_doors_locked(iLocal_54, 3);
	set_entity_proofs(iLocal_57, false, true, true, true, true, true, 0, false);
	set_entity_is_target_priority(iLocal_54, 1, 0f);
	set_entity_health(iLocal_54, 700);
	set_vehicle_automatically_attaches(iLocal_54, false, 0);
	set_entity_load_collision_flag(iLocal_54, true);
	_set_vehicle_creates_money_pickups_when_exploded(iLocal_54, 0);
	set_vehicle_provides_cover(iLocal_54, 1);
	_0x07FB139B592FA687(vLocal_77.x - 200f, vLocal_77.y - 200f, vLocal_77.x + 200f, vLocal_77.y + 200f);
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = create_ped_inside_vehicle(iLocal_54, 26, iLocal_103, -1, 1, true);
		iLocal_51[1] = create_ped_inside_vehicle(iLocal_54, 26, iLocal_103, false, 1, true);
		set_vehicle_engine_on(iLocal_54, true, 1, 0);
		set_entity_load_collision_flag(iLocal_54, true);
	}
	else
	{
		iLocal_51[1] = create_ped(26, iLocal_103, vLocal_67[1 /*3*/], fLocal_74[1], 1, true);
		iLocal_51[0] = create_ped(26, iLocal_103, vLocal_67[0 /*3*/], fLocal_74[0], 1, true);
		task_look_at_entity(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_79(iLocal_51[1]);
	add_relationship_group("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		set_ped_money(iLocal_51[iVar0], false);
		set_ped_combat_attributes(iLocal_51[iVar0], 1, false);
		set_ped_combat_attributes(iLocal_51[iVar0], 13, false);
		set_ped_combat_attributes(iLocal_51[iVar0], 6, true);
		set_ped_combat_attributes(iLocal_51[iVar0], 8, false);
		set_ped_combat_attributes(iLocal_51[iVar0], 10, true);
		set_ped_flee_attributes(iLocal_51[iVar0], 512, true);
		set_ped_config_flag(iLocal_51[iVar0], 118, false);
		set_ped_flee_attributes(iLocal_51[iVar0], 128, true);
		set_ped_can_ragdoll_from_player_impact(iLocal_51[iVar0], 0);
		set_entity_is_target_priority(iLocal_51[iVar0], 1, 0f);
		set_ped_get_out_upside_down_vehicle(iLocal_51[iVar0], 1);
		set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(iLocal_51[iVar0], 1);
		give_weapon_to_ped(iLocal_51[iVar0], joaat("weapon_pistol"), -1, false, true);
		set_ped_relationship_group_hash(iLocal_51[iVar0], iLocal_66);
		set_ped_keep_task(iLocal_51[iVar0], true);
		set_entity_lod_dist(iLocal_51[iVar0], 250);
		iVar0++;
	}
	set_entity_load_collision_flag(iLocal_51[1], true);
	set_relationship_between_groups(1, -1533126372, iLocal_66);
	set_relationship_between_groups(1, iLocal_66, -1533126372);
	set_relationship_between_groups(2, iLocal_66, 1862763509);
	set_relationship_between_groups(2, 1862763509, iLocal_66);
	if (iLocal_46 == 1)
	{
		set_ped_prop_index(iLocal_51[0], false, 1, 0, false);
		set_ped_suffers_critical_hits(iLocal_51[0], 0);
		set_ped_prop_index(iLocal_51[1], false, 1, 0, false);
		set_ped_suffers_critical_hits(iLocal_51[1], 0);
	}
	if (func_11() == 0 && !is_ped_injured(player_ped_id()))
	{
		func_68(&Local_140, 0, player_ped_id(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !is_ped_injured(player_ped_id()))
	{
		func_68(&Local_140, 1, player_ped_id(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !is_ped_injured(player_ped_id()))
	{
		func_68(&Local_140, 2, player_ped_id(), "TREVOR", 0, 1);
	}
	func_68(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_68(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	set_vehicle_model_is_suppressed(iLocal_104, true);
	set_ped_model_is_suppressed(iLocal_103, true);
	if (iLocal_46 != 3)
	{
	}
}

auto func_146(int iParam0, Vector3 vParam1, int iParam2)
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

int func_147()
{
	func_155(&uLocal_317, iLocal_103);
	func_155(&uLocal_317, iLocal_104);
	func_155(&uLocal_317, iLocal_105);
	func_153(&uLocal_317, "random@security_van");
	func_153(&uLocal_317, "weapons@holster_1h");
	func_153(&uLocal_317, "move_injured_generic");
	func_152(&uLocal_317, 3);
	return func_148(&uLocal_317);
}

bool func_148(auto uParam0)
{
	int iVar0;
	
	if (!*uParam0.f_145)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			if (!is_bit_set(*uParam0[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_149(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_145 = 0;
	return true;
}

int func_149(auto uParam0)
{
	return func_150(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_150(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		if (is_bit_set(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return has_model_loaded(iParam2);
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
					return request_script_audio_bank(sParam1, is_bit_set(iParam0, 27));
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

int func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 10)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_152(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		*uParam0.f_147 = iParam1;
	}
}

void func_153(auto uParam0, char* sParam1)
{
	func_154(uParam0, 1, -1, sParam1, 0);
}

void func_154(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			if (is_bit_set(*uParam0[iVar0 /*18*/], iParam1))
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
		if (!is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			StringCopy(uParam0[iVar0 /*18*/].f_2, sParam3, 64);
			*(uParam0[iVar0 /*18*/]).f_1 = iParam2;
			*uParam0[iVar0 /*18*/] = iParam4;
			set_bit(uParam0[iVar0 /*18*/], iParam1);
			set_bit(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_155(auto uParam0, int iParam1)
{
	func_154(uParam0, 0, iParam1, "NULL", 0);
}

bool func_156()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_43) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_167())
		{
			return false;
		}
	}
	if (func_163())
	{
		return true;
	}
	if (func_157(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_157(float fParam0, int iParam1)
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
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = get_distance_between_coords(get_entity_coords(player_ped_id(), 0), Var0.f_6, 1);
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

void func_158(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_159(uParam1, "Abigail1", func_161(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 1:
			func_159(uParam1, "Abigail2", func_161(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 2:
			func_159(uParam1, "Barry1", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 3:
			func_159(uParam1, "Barry2", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 4:
			func_159(uParam1, "Barry3", func_161(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 5:
			func_159(uParam1, "Barry3A", func_161(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 6:
			func_159(uParam1, "Barry3C", func_161(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 7:
			func_159(uParam1, "Barry4", func_161(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_160(iParam0), 0, 0);
			break;
		
		case 8:
			func_159(uParam1, "Dreyfuss1", func_161(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 9:
			func_159(uParam1, "Epsilon1", func_161(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 10:
			func_159(uParam1, "Epsilon2", func_161(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 11:
			func_159(uParam1, "Epsilon3", func_161(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 12:
			func_159(uParam1, "Epsilon4", func_161(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 13:
			func_159(uParam1, "Epsilon5", func_161(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 14:
			func_159(uParam1, "Epsilon6", func_161(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 15:
			func_159(uParam1, "Epsilon7", func_161(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 16:
			func_159(uParam1, "Epsilon8", func_161(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 17:
			func_159(uParam1, "Extreme1", func_161(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 18:
			func_159(uParam1, "Extreme2", func_161(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 19:
			func_159(uParam1, "Extreme3", func_161(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 20:
			func_159(uParam1, "Extreme4", func_161(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 21:
			func_159(uParam1, "Fanatic1", func_161(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 22:
			func_159(uParam1, "Fanatic2", func_161(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 23:
			func_159(uParam1, "Fanatic3", func_161(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_160(iParam0), 0, 1);
			break;
		
		case 24:
			func_159(uParam1, "Hao1", func_161(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_160(iParam0), 0, 1);
			break;
		
		case 25:
			func_159(uParam1, "Hunting1", func_161(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 26:
			func_159(uParam1, "Hunting2", func_161(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 27:
			func_159(uParam1, "Josh1", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 28:
			func_159(uParam1, "Josh2", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 29:
			func_159(uParam1, "Josh3", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 30:
			func_159(uParam1, "Josh4", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 31:
			func_159(uParam1, "Maude1", func_161(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 32:
			func_159(uParam1, "Minute1", func_161(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 33:
			func_159(uParam1, "Minute2", func_161(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 34:
			func_159(uParam1, "Minute3", func_161(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 35:
			func_159(uParam1, "MrsPhilips1", func_161(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 36:
			func_159(uParam1, "MrsPhilips2", func_161(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 37:
			func_159(uParam1, "Nigel1", func_161(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 38:
			func_159(uParam1, "Nigel1A", func_161(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 39:
			func_159(uParam1, "Nigel1B", func_161(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 40:
			func_159(uParam1, "Nigel1C", func_161(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 41:
			func_159(uParam1, "Nigel1D", func_161(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 42:
			func_159(uParam1, "Nigel2", func_161(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 43:
			func_159(uParam1, "Nigel3", func_161(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 44:
			func_159(uParam1, "Omega1", func_161(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 45:
			func_159(uParam1, "Omega2", func_161(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 46:
			func_159(uParam1, "Paparazzo1", func_161(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 47:
			func_159(uParam1, "Paparazzo2", func_161(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 48:
			func_159(uParam1, "Paparazzo3", func_161(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 49:
			func_159(uParam1, "Paparazzo3A", func_161(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 50:
			func_159(uParam1, "Paparazzo3B", func_161(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 51:
			func_159(uParam1, "Paparazzo4", func_161(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 52:
			func_159(uParam1, "Rampage1", func_161(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 54:
			func_159(uParam1, "Rampage3", func_161(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 55:
			func_159(uParam1, "Rampage4", func_161(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 56:
			func_159(uParam1, "Rampage5", func_161(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 53:
			func_159(uParam1, "Rampage2", func_161(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 57:
			func_159(uParam1, "TheLastOne", func_161(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 58:
			func_159(uParam1, "Tonya1", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 59:
			func_159(uParam1, "Tonya2", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 60:
			func_159(uParam1, "Tonya3", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 61:
			func_159(uParam1, "Tonya4", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 62:
			func_159(uParam1, "Tonya5", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_159(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_160(int iParam0)
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

struct<2> func_161(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_162(iParam0)};
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

struct<2> func_162(int iParam0)
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

bool func_163()
{
	if (func_166() && !func_167())
	{
		return true;
	}
	if (func_165() && func_164())
	{
		return true;
	}
	return false;
}

int func_164()
{
	return Global_100872 > 0;
}

bool func_165()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_166()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_167()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_168()
{
	if (!func_131(5))
	{
		return true;
	}
	if (func_163())
	{
		return true;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_167())
		{
			return false;
		}
	}
	if (func_157(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_169()
{
	if ((Global_101143 == func_59() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_170(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_145)
	{
		if ((get_frame_count() >= *uParam0.f_146 + *uParam0.f_147 || is_bit_set(Global_91278.f_20, 2)) || is_bit_set(Global_91278.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
				{
					if (!is_bit_set(*uParam0[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						*uParam0.f_146 = get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_171(int iParam0)
{
	func_172(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_172(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(*iParam0, 30))
	{
		switch (func_151(*iParam0))
		{
			case 0:
				request_model(iParam2);
				break;
			
			case 1:
				request_anim_dict(sParam1);
				break;
			
			case 2:
				request_clip_set(sParam1);
				break;
			
			case 3:
				request_streamed_texture_dict(sParam1, is_bit_set(*iParam0, 28));
				break;
			
			case 4:
				request_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				request_waypoint_recording(sParam1);
				break;
			
			case 6:
				request_script_audio_bank(sParam1, is_bit_set(*iParam0, 27));
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
		set_bit(iParam0, 29);
	}
}

void func_173()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	iLocal_128 = get_random_int_in_range(3000, 8000);
	switch (iLocal_47)
	{
		case 1:
			vLocal_96 = {-315.889f, -1550.554f, 7.233013f};
			vLocal_99 = {-315.2352f, -1366.581f, 45.29617f};
			fLocal_102 = 180f;
			vLocal_77 = {-331.8429f, -1461.042f, 30.153f};
			fLocal_80 = -64.3539f;
			vLocal_67[0 /*3*/] = {-335.564f, -1462.237f, 29.5452f};
			fLocal_74[0] = 158.3857f;
			vLocal_67[1 /*3*/] = {-342.7024f, -1475.043f, 29.6004f};
			fLocal_74[1] = 290.3041f;
			iLocal_46 = 1;
			break;
		
		case 2:
			vLocal_96 = {-538.2149f, -868.7426f, 17.96054f};
			vLocal_99 = {-663.8162f, -867.9987f, 53.66249f};
			fLocal_102 = 121.5f;
			vLocal_77 = {-588.5128f, -866.9584f, 25.32786f};
			fLocal_80 = -89.02679f;
			vLocal_67[0 /*3*/] = {-589.4673f, -865.4055f, 24.7622f};
			fLocal_74[0] = 12.5464f;
			vLocal_67[1 /*3*/] = {-578.4414f, -874.5964f, 24.9183f};
			fLocal_74[1] = 352.4951f;
			iLocal_46 = 1;
			break;
		
		case 3:
			vLocal_96 = {-468.6309f, 6101.907f, 14.8912f};
			vLocal_99 = {-359.9734f, 5994.152f, 50.36843f};
			fLocal_102 = 152.25f;
			vLocal_77 = {-395.6852f, 6056.967f, 30.5001f};
			fLocal_80 = 188.9862f;
			vLocal_67[0 /*3*/] = {-398.4612f, 6051.296f, 30.5003f};
			fLocal_74[0] = 251.7138f;
			vLocal_67[1 /*3*/] = {-378.408f, 6035.689f, 30.498f};
			fLocal_74[1] = 154.0836f;
			iLocal_46 = 2;
			break;
		
		case 4:
			vLocal_96 = {-631.3408f, -1105.581f, 7.220509f};
			vLocal_99 = {-462.1721f, -1103.597f, 62.53583f};
			fLocal_102 = 177.25f;
			vLocal_77 = {-595.7766f, -1094.089f, 21.1785f};
			fLocal_80 = 263.4662f;
			vLocal_67[0 /*3*/] = {-600.8182f, -1103.778f, 21.3292f};
			fLocal_74[0] = 338.8304f;
			vLocal_67[1 /*3*/] = {-595.3461f, -1096.054f, 21.1785f};
			fLocal_74[1] = 151.297f;
			iLocal_46 = 1;
			break;
		
		case 5:
			vLocal_77 = {-1042.768f, -1049.296f, 1.0825f};
			fLocal_80 = 26.9919f;
			iLocal_46 = 3;
			break;
		
		case 6:
			vLocal_77 = {-595.5618f, -667.7325f, 31.0544f};
			fLocal_80 = 271.1543f;
			iLocal_46 = 3;
			break;
		
		case 7:
			vLocal_77 = {3018.384f, 3634.017f, 70.4076f};
			fLocal_80 = 335.9052f;
			iLocal_46 = 3;
			break;
		
		case 8:
			vLocal_77 = {-2815.661f, 2208.171f, 27.8382f};
			fLocal_80 = 119.1519f;
			iLocal_46 = 3;
			break;
		
		case 9:
			vLocal_77 = {856.7742f, -2067.845f, 29.0704f};
			fLocal_80 = 83.1204f;
			iLocal_46 = 3;
			break;
		
		case 10:
			vLocal_77 = {805.1932f, -703.1327f, 28.1632f};
			fLocal_80 = 248.8625f;
			iLocal_46 = 3;
			break;
		
		default:
			break;
	}
}

void func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_176(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_175();
}

void func_175()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			set_vehicle_model_is_suppressed(get_entity_model(get_vehicle_ped_is_in(player_ped_id(), 0)), true);
		}
		set_ped_config_flag(player_ped_id(), 32, false);
	}
}

void func_176(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_177(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_59();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_216())
		{
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			vVar1 = {get_entity_coords(player_ped_id(), 1)};
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_167())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_44(0))
		{
			return false;
		}
		if (func_163())
		{
			return false;
		}
		if (func_215())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_13(func_11()))
		{
			if (func_157(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_43.z > 50f)
			{
				return false;
			}
		}
		if (!func_214(iParam3))
		{
			return false;
		}
		if (func_13(func_11()))
		{
			if (func_213(func_11()) == 4 || func_213(func_11()) == 5)
			{
				return false;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_212(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_211(Global_101154.f_29520.f_43[iParam3]))
		{
			return false;
		}
		if (get_game_timer() - Global_101145 < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_210())
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
		if (!func_202(4))
		{
			return false;
		}
		if (!func_131(5))
		{
			return false;
		}
		if (func_201(iParam3, iParam4) && !iParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (is_valid_interior(get_interior_from_entity(player_ped_id())))
		{
			if ((get_interior_from_entity(player_ped_id()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_214(30) && !func_201(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_120(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vVar5) < 210f * 210f)
							{
								if (func_11() != iVar4)
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

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_179(iVar0);
}

int func_179(int iParam0)
{
	return func_180(iParam0, 1);
}

bool func_180(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_200(iParam0))
	{
		return false;
	}
	func_181(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_181(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_182(func_193(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_182(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_192(iParam0, iParam1))
	{
		iVar0 = func_191(iParam1);
		iVar1 = func_189(iParam0);
		iVar2 = func_189(iParam0) - func_189(iParam1);
		iVar3 = func_191(iParam0) - func_191(iParam1);
		iVar4 = func_188(iParam0) - func_188(iParam1);
		iVar5 = func_187(iParam0) - func_187(iParam1);
		iVar6 = func_186(iParam0) - func_186(iParam1);
		iVar7 = func_185(iParam0) - func_185(iParam1);
	}
	else
	{
		iVar0 = func_191(iParam0);
		iVar1 = func_189(iParam1);
		iVar2 = func_189(iParam1) - func_189(iParam0);
		iVar3 = func_191(iParam1) - func_191(iParam0);
		iVar4 = func_188(iParam1) - func_188(iParam0);
		iVar5 = func_187(iParam1) - func_187(iParam0);
		iVar6 = func_186(iParam1) - func_186(iParam0);
		iVar7 = func_185(iParam1) - func_185(iParam0);
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
		iVar4 += func_184(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_183(to_float(iVar0 + 1), 0f, 12f));
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

float func_183(Vector3 fParam0, float fParam1, float fParam2)
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

int func_184(int iParam0, int iParam1)
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

int func_185(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_186(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_187(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_188(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_189(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_190(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_191(int iParam0)
{
	return (iParam0 && 15);
}

bool func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_200(iParam1) || !func_200(iParam0))
	{
		return true;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_193()
{
	auto uVar0;
	
	func_199(&uVar0, get_clock_seconds());
	func_198(&uVar0, get_clock_minutes());
	func_197(&uVar0, get_clock_hours());
	func_196(&uVar0, get_clock_day_of_month());
	func_195(&uVar0, get_clock_month());
	func_194(&uVar0, get_clock_year());
	return uVar0;
}

void func_194(auto uParam0, int iParam1)
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

void func_195(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_196(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_189(*uParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_197(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_198(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_199(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_200(int iParam0)
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
	iVar0 = func_185(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_186(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_187(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_189(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_191(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_188(iParam0);
	if (iVar5 < 1 || iVar5 > func_184(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_201(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_202(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_1()) || Global_100201) || Global_25122) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_1()) || Global_25122) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_1()) || Global_100201) || Global_25122) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_1()) || Global_100201) || Global_25122) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_1() || get_player_wanted_level(player_id()) > 0) || func_18(8, -1)) || func_205()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_1()) || Global_25122) || func_209()) || func_18(8, -1)) || func_207()) || func_206()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_1()) || func_207()) || Global_100201) || Global_25122) || func_209()) || Global_36839) || func_18(8, -1)) || func_206()) || func_204()) || func_205()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_1()) || Global_100201) || Global_25122) || func_209()) || func_18(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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

auto func_203()
{
	return Global_91317.f_1;
}

int func_204()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_205()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_206()
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

int func_207()
{
	return Global_91330.f_297 > 0;
}

int func_208()
{
	return Global_91330.f_296 > 0;
}

auto func_209()
{
	return Global_1315913;
}

bool func_210()
{
	func_10();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_211(int iParam0)
{
	return func_192(func_193(), iParam0);
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_213(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_216())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = is_bit_set(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 -= 31;
		iVar1 = is_bit_set(Global_101154.f_29520.f_1, iVar0);
	}
	return iVar1;
}

bool func_215()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(get_ped_in_vehicle_seat(iVar0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_216()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
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
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_217()
{
	if (func_169())
	{
		if (does_pickup_exist(iLocal_137))
		{
			if (does_blip_exist(iLocal_64))
			{
				remove_blip(&iLocal_64);
			}
		}
		if (does_entity_exist(iLocal_57))
		{
			delete_object(&iLocal_57);
		}
		if (does_entity_exist(iLocal_56))
		{
			if (is_entity_occluded(iLocal_56))
			{
				delete_object(&iLocal_56);
			}
			else
			{
				set_object_as_no_longer_needed(&iLocal_56);
			}
		}
		set_model_as_no_longer_needed(iLocal_104);
		set_model_as_no_longer_needed(iLocal_103);
		set_model_as_no_longer_needed(iLocal_105);
		set_all_random_peds_flee(player_id(), 0);
		set_ped_model_is_suppressed(iLocal_103, false);
		set_vehicle_model_is_suppressed(iLocal_104, false);
	}
	if (iLocal_131 != 0)
	{
		remove_shocking_event(iLocal_131);
	}
	remove_scenario_blocking_area(iLocal_65, 0);
	func_121(&uLocal_305, 0, 0);
	func_223(-1);
	func_218(&uLocal_317, 0);
	terminate_this_thread();
}

void func_218(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_220(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_219(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_145 = 0;
	*uParam0.f_146 = -1;
}

void func_219(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_220(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			func_221(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_145 = 1;
}

void func_221(auto uParam0)
{
	func_222(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_222(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		switch (func_151(iParam0))
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
				clear_additional_text(iParam2, is_bit_set(iParam0, 26));
				break;
			
			case 9:
				remove_ptfx_asset();
				break;
			
			default:
				break;
		}
	}
}

void func_223(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_169())
	{
		func_227(iParam0);
		set_mission_name(0, 0);
		Global_101145 = get_game_timer();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_101143, 1), 64);
		if (func_58(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_101140, get_game_timer() - Global_101141, 0);
	}
	else if (is_bit_set(Global_101150, false) && Global_101154.f_29520.f_2 < 3)
	{
		clear_bit(&Global_101150, false);
	}
	func_224(&Global_25179);
	Global_101144 = 0;
	func_176(-1);
}

void func_224(auto uParam0)
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

char* func_225(int iParam0, int iParam1)
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

void func_226(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_227(int iParam0)
{
	func_228(iParam0, 0, func_233(iParam0));
}

void func_228(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_193();
	func_231(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(uParam0, &uVar0);
	Var1 = {func_229(&uVar0)};
}

struct<16> func_229(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_188(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_191(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_189(*uParam0), 64);
	return cVar0;
}

void func_230(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_231(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_191(*uParam0);
	iVar2 = func_188(*uParam0);
	iVar3 = func_187(*uParam0);
	iVar4 = func_186(*uParam0);
	iVar5 = func_185(*uParam0);
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
	iVar6 = func_184(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_184(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_232(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_232(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(uParam0, iParam1);
	func_198(uParam0, iParam2);
	func_197(uParam0, iParam3);
	func_195(uParam0, iParam5);
	func_196(uParam0, iParam4);
	func_194(uParam0, iParam6);
}

int func_233(int iParam0)
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

int func_234(int iParam0)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_vehicle_seat_free(iParam0, -1))
		{
			return -1;
		}
		if (is_vehicle_seat_free(iParam0, false))
		{
			return 0;
		}
		if (is_vehicle_seat_free(iParam0, true))
		{
			return 1;
		}
		if (is_vehicle_seat_free(iParam0, 2))
		{
			return 2;
		}
		if (is_vehicle_seat_free(iParam0, 3))
		{
			return 3;
		}
		if (is_vehicle_seat_free(iParam0, 4))
		{
			return 4;
		}
		if (is_vehicle_seat_free(iParam0, 5))
		{
			return 5;
		}
		if (is_vehicle_seat_free(iParam0, 6))
		{
			return 6;
		}
		if (is_vehicle_seat_free(iParam0, 7))
		{
			return 7;
		}
		if (is_vehicle_seat_free(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

