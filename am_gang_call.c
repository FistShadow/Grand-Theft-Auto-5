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
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	float fLocal_87 = 0;
	struct<51> Local_88 = 0;
	auto uLocal_139 = 0;
	struct<5>[] Local_140 = new struct<5>[32];
	int iLocal_301 = 0;
	int[] iLocal_302 = new int[3];
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	Vector3 vLocal_311 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
	auto uLocal_326 = 16;
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
	auto uLocal_464 = 0;
	auto uLocal_465 = 0;
	auto uLocal_466 = 0;
	auto uLocal_467 = 0;
	auto uLocal_468 = 0;
	auto uLocal_469 = 0;
	auto uLocal_470 = 0;
	auto uLocal_471 = 0;
	auto uLocal_472 = 0;
	auto uLocal_473 = 0;
	auto uLocal_474 = 0;
	auto uLocal_475 = 0;
	auto uLocal_476 = 0;
	auto uLocal_477 = 0;
	auto uLocal_478 = 0;
	auto uLocal_479 = 0;
	auto uLocal_480 = 0;
	auto uLocal_481 = 0;
	auto uLocal_482 = 0;
	auto uLocal_483 = 0;
	auto uLocal_484 = 0;
	auto uLocal_485 = 0;
	auto uLocal_486 = 0;
	auto uLocal_487 = 0;
	auto uLocal_488 = 0;
	auto uLocal_489 = 0;
	auto uLocal_490 = 0;
	auto uLocal_491 = 0;
	var[] uLocal_492 = new var[16];
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	struct<20> Local_513 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	iLocal_307 = -1;
	iLocal_310 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_482(Local_513);
	}
	while (true)
	{
		func_481();
		if (func_471())
		{
			func_469();
		}
		iLocal_314 = NETWORK::GET_NETWORK_TIME();
		func_460();
		func_434();
		func_429();
		func_428();
		switch (func_427(network_player_id_to_int()))
		{
			case 0:
				if (func_426() == 1)
				{
					Local_140[network_player_id_to_int() /*5*/] = 1;
				}
				else if (func_426() == 4)
				{
					Local_140[network_player_id_to_int() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_426() == 1)
				{
					func_420();
				}
				else if (func_426() == 0)
				{
					func_414();
					Local_140[network_player_id_to_int() /*5*/] = 0;
				}
				else if (func_426() == 4)
				{
					Local_140[network_player_id_to_int() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_389();
				func_387(&(Local_88.f_50));
				if (func_386(&(Local_88.f_50)))
				{
					iVar0 = 0;
					while (iVar0 < func_385(iLocal_307))
					{
						func_389();
						iVar0++;
					}
					Local_140[network_player_id_to_int() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_140[network_player_id_to_int() /*5*/] = 4;
			
			case 4:
				func_216();
				break;
		}
		if (network_is_host_of_this_script())
		{
			func_214();
			func_213();
			func_212();
			switch (func_426())
			{
				case 0:
					func_211();
					if (func_207())
					{
						if (!is_entity_dead(get_player_ped(iLocal_309), 0))
						{
							func_205(get_player_ped(iLocal_309));
						}
						else
						{
							Local_88.f_36 = {vLocal_311};
						}
						GAMEPLAY::CLEAR_BIT(&(Local_88.f_2), 6);
						Local_88 = 1;
					}
					break;
				
				case 1:
					if (func_55())
					{
						func_54();
						func_53();
					}
					func_35();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_426() < 4)
	{
		if (func_22())
		{
			iLocal_315 = 0;
			iVar0 = 0;
			while (iVar0 <= func_385(iLocal_307) - 1)
			{
				func_2();
				iVar0++;
			}
			Local_88 = 4;
		}
	}
}

void func_2()
{
	auto uVar0;
	struct<14> Var1;
	
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iLocal_315 /*7*/].f_2, true) || GAMEPLAY::IS_BIT_SET(Local_88.f_10[iLocal_315 /*7*/].f_2, 6))
	{
		if (network_does_network_id_exist(Local_88.f_10[iLocal_315 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(net_to_ped(Local_88.f_10[iLocal_315 /*7*/])))
			{
				if (is_entity_dead(net_to_ped(Local_88.f_10[iLocal_315 /*7*/]), 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iLocal_315 /*7*/].f_2, 6))
					{
						if (iLocal_307 == 0)
						{
							Local_88.f_48++;
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 12))
							{
								if (network_get_destroyer_of_network_id(Local_88.f_10[iLocal_315 /*7*/], &uVar0) == iLocal_309)
								{
									GAMEPLAY::SET_BIT(&(Local_88.f_2), 12);
								}
							}
							if ((Local_88.f_42 == iLocal_315 && !GAMEPLAY::IS_BIT_SET(Local_88.f_2, 5)) || Local_88.f_48 == func_385(iLocal_307))
							{
								Var1.f_2 = 155;
								Var1.f_10 = iLocal_309;
								Var1.f_11 = iLocal_308;
								if (func_385(iLocal_307) > 1)
								{
									Var1.f_12 = int_to_playerindex(true);
								}
								else
								{
									Var1.f_12 = int_to_playerindex(false);
								}
								Var1.f_3 = Local_88.f_43;
								func_20(Var1, func_21(1));
								if (Local_88.f_42 == iLocal_315)
								{
									GAMEPLAY::SET_BIT(&(Local_88.f_2), 5);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 5))
							{
								Var1.f_2 = 154;
								Var1.f_11 = iLocal_308;
								func_20(Var1, func_21(1));
							}
						}
						GAMEPLAY::SET_BIT(&(Local_88.f_10[iLocal_315 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iLocal_315 /*7*/].f_2, 5))
					{
						GAMEPLAY::SET_BIT(&iLocal_301, 2);
					}
					GAMEPLAY::SET_BIT(&iLocal_301, true);
				}
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&iLocal_301, true);
		GAMEPLAY::SET_BIT(&iLocal_301, 2);
	}
	func_3(iLocal_315);
	iLocal_315++;
	if (iLocal_315 >= func_385(iLocal_307))
	{
		iLocal_315 = 0;
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, true))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, true))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_1), true);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 9))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_1), 9);
				}
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_301, true);
		GAMEPLAY::CLEAR_BIT(&iLocal_301, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (network_is_host_of_this_script())
	{
		if (network_does_network_id_exist(Local_88.f_10[iParam0 /*7*/]))
		{
			iVar0 = net_to_ped(Local_88.f_10[iParam0 /*7*/]);
			if (!is_entity_dead(iVar0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 9))
				{
					iVar2 = false;
					switch (Local_88.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								iVar2 = true;
							}
							break;
					}
					if (iVar2)
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_88.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((get_navmesh_route_result(iVar0) == 2 || (Global_2418472[iLocal_309 /*313*/].f_232 != -1 && func_18(Global_2418472[iLocal_309 /*313*/].f_232) == 4)) || Global_1587523[iLocal_309 /*444*/].f_362) || func_16(iLocal_309)) || func_9(iLocal_309))
								{
									Local_88.f_10[iParam0 /*7*/].f_3 = iLocal_314;
									GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((get_navmesh_route_result(iVar0) != 2 && Global_2418472[iLocal_309 /*313*/].f_232 == -1) && !Global_1587523[iLocal_309 /*444*/].f_362) && !func_16(iLocal_309)) && !func_9(iLocal_309))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (get_time_difference(iLocal_314, Local_88.f_10[iParam0 /*7*/].f_3) > 10000 || get_navmesh_route_result(iVar0) != 2)
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 10))
								{
									GAMEPLAY::SET_BIT(&(Local_88.f_2), 10);
									Local_88.f_39 = {func_8(iLocal_309)};
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_385(iLocal_307))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (get_ped_desired_move_blend_ratio(iVar0) == 3f && !get_ped_config_flag(iVar0, 118, 1))
									{
										GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
						{
							GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_309, 1, 1))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1), 25f) || !func_5(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1), 625f))
								{
									GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1)) || (is_ped_jacking(iVar0) && get_jack_target(iVar0) == get_player_ped(iLocal_309)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
						{
							GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_309, 1, 1))
						{
							if (!func_4(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1)) && !(is_ped_jacking(iVar0) && get_jack_target(iVar0) == get_player_ped(iLocal_309)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (get_ped_config_flag(iVar0, 118, 1))
								{
									GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

bool func_4(Vector3 vParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (absf(vParam3.z - vParam0.z) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar3.x = vParam3.x;
		vVar3.y = vParam3.y;
		if (func_5(vVar0, vVar3, 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_5(Vector3 vParam0, Vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam3) < fParam6)
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	Local_88.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (network_is_player_active(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = get_player_ped(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (is_vehicle_driveable(iVar1, 0))
				{
					if (is_ped_in_vehicle(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

bool func_10(int iParam0)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (decor_is_registered_as_type("MPBitset", 3) && decor_exist_on(iParam0, "MPBitset"))
		{
			iVar0 = decor_get_int(iParam0, "MPBitset");
			if (GAMEPLAY::IS_BIT_SET(iVar0, 17))
			{
				return true;
			}
		}
	}
	return false;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2460486.f_4660.f_28[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

int func_14(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_15(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_13())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

bool func_16(int iParam0)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = get_player_ped(iParam0);
		if (is_ped_in_any_vehicle(iVar0, 0))
		{
			if (func_17(get_vehicle_ped_is_in(iVar0, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_17(int iParam0)
{
	if (Global_69489)
	{
		if (decor_exist_on(iParam0, "Player_Vehicle"))
		{
			return true;
		}
	}
	return false;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_19(int iParam0, int iParam1)
{
	if (decor_is_registered_as_type("AttributeDamage", 3))
	{
		if (decor_exist_on(iParam0, "AttributeDamage"))
		{
			if (GAMEPLAY::IS_BIT_SET(decor_get_int(iParam0, "AttributeDamage"), iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_20(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_21(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_22()
{
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
	{
		if (iLocal_307 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 4))
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_3), 11);
				return true;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, true))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), false);
			return true;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 2))
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_3), true);
		GAMEPLAY::SET_BIT(&Global_1706779, iLocal_307);
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 12))
	{
		return true;
	}
	if (iLocal_307 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 2))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 2);
			return true;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 8))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 8);
			return true;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 5))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 3);
			return true;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 9))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 9);
			return true;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 15))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 10);
			return true;
		}
	}
	if (!func_6(iLocal_309, 0, 1))
	{
		if (iLocal_307 != 0 || !GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 4);
			return true;
		}
	}
	else
	{
		if (func_33(iLocal_309, 129))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 13);
			GAMEPLAY::SET_BIT(&(Local_88.f_3), 8);
			return true;
		}
		if (func_33(iLocal_309, 131) || GAMEPLAY::IS_BIT_SET(Global_1610316[iLocal_309 /*174*/].f_1, 11))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 13);
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_33(iLocal_309, 136) || (func_32(player_id(), 24) && func_31(iLocal_309)))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_33(iLocal_309, 146))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_30(player_id()) && ((func_28(player_id()) == 148 || func_28(player_id()) == 142) || func_28(player_id()) == 164))
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_28(player_id()) == 153)
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_26(player_id()) && func_28(player_id()) == 170)
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_28(player_id()) == 167)
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (func_28(player_id()) == 168)
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			return true;
		}
		if (is_entity_dead(get_player_ped(iLocal_309), 0))
		{
			if (iLocal_307 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_3), 6);
					return true;
				}
			}
		}
		else
		{
			if (iLocal_307 == 1)
			{
				if (func_33(iLocal_309, 146))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_3), 7);
					return true;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 16))
				{
					if (get_time_difference(iLocal_314, Local_88.f_9) > 120000)
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_3), 7);
						return true;
					}
				}
				if (func_23())
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_3), 7);
					return true;
				}
			}
			if (iLocal_310 != get_hash_key(get_player_name(iLocal_309)))
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_3), 5);
				return true;
			}
		}
	}
	return false;
}

bool func_23()
{
	if (((func_25(iLocal_309, 1, 0) || func_32(iLocal_309, 0)) || func_32(iLocal_309, 7)) || func_24(iLocal_309))
	{
		return true;
	}
	return false;
}

int func_24(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

bool func_25(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_13())
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
	{
		return true;
	}
	if (iParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, true))
		{
			return true;
		}
	}
	if (iParam2)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_27(iParam0, 9);
	}
	return false;
}

int func_27(auto uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_10.f_4, iParam1);
}

int func_28(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_29(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_26(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_31(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 4);
}

int func_32(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/] == iParam1)
	{
		return func_34(iParam0);
	}
	return false;
}

int func_34(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

void func_35()
{
	func_46();
	if (iLocal_307 != 1)
	{
		func_2();
	}
	func_36();
}

void func_36()
{
	int iVar0;
	
	if (func_6(int_to_playerindex(iLocal_316), 0, 1))
	{
		if (iLocal_307 == 1)
		{
			if (int_to_playerindex(iLocal_316) == iLocal_309)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 16))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, 3))
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 11))
			{
				if (func_42(int_to_playerindex(iLocal_316)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_88.f_4, iLocal_316))
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_1), 11);
						GAMEPLAY::SET_BIT(&(Local_88.f_4), iLocal_316);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_88.f_4, iLocal_316))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_1), 11);
					GAMEPLAY::CLEAR_BIT(&(Local_88.f_4), iLocal_316);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, 2))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_88.f_1), 11);
			}
			if (iLocal_307 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, false))
				{
					if (Local_140[iLocal_316 /*5*/].f_2 != -1)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
						{
							GAMEPLAY::SET_BIT(&(Local_88.f_2), true);
							Local_88.f_42 = Local_140[iLocal_316 /*5*/].f_2;
							Local_88.f_43 = Local_140[iLocal_316 /*5*/].f_3;
							if (!func_41())
							{
								func_40();
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 9))
					{
						if (!func_41())
						{
							func_39();
						}
						iVar0 = 0;
						while (iVar0 < func_385(iLocal_307))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						GAMEPLAY::SET_BIT(&(Local_88.f_2), 9);
						GAMEPLAY::SET_BIT(&(Local_88.f_2), true);
					}
				}
				if (func_41())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 17))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, 5))
						{
							func_40();
							GAMEPLAY::SET_BIT(&iLocal_301, 17);
						}
						else if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, 6))
						{
							func_39();
							GAMEPLAY::SET_BIT(&iLocal_301, 17);
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, true))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 3))
					{
						GAMEPLAY::SET_BIT(&iLocal_301, 3);
					}
				}
				else if (int_to_playerindex(iLocal_316) == iLocal_309)
				{
					if (iLocal_307 == 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 6))
							{
								GAMEPLAY::SET_BIT(&(Local_88.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_316++;
	if (iLocal_316 >= 32)
	{
		iLocal_316 = false;
		if (iLocal_307 == 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 3))
			{
				func_38();
			}
			else
			{
				func_37();
			}
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 3);
		}
	}
}

void func_37()
{
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_88.f_2), 3);
	}
}

void func_38()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 3))
	{
		Local_88.f_6 = iLocal_314;
		GAMEPLAY::SET_BIT(&(Local_88.f_2), 3);
	}
}

void func_39()
{
	struct<14> Var0;
	
	Var0.f_2 = 156;
	Var0.f_10 = iLocal_309;
	Var0.f_11 = iLocal_308;
	func_20(Var0, func_21(1));
}

void func_40()
{
	struct<14> Var0;
	
	Var0.f_2 = 153;
	Var0.f_10 = iLocal_309;
	Var0.f_11 = iLocal_308;
	if (func_385(iLocal_307) > 1)
	{
		Var0.f_12 = int_to_playerindex(true);
	}
	else
	{
		Var0.f_12 = int_to_playerindex(false);
	}
	Var0.f_3 = Local_88.f_43;
	func_20(Var0, func_21(1));
}

bool func_41()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

int func_42(int iParam0)
{
	if (iParam0 == player_id())
	{
		return func_45();
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_241.f_136[func_44(10) /*33*/][iParam0], func_43(10));
}

int func_43(int iParam0)
{
	return iParam0 % 32;
}

int func_44(int iParam0)
{
	return iParam0 / 32;
}

auto func_45()
{
	return Global_1312416;
}

void func_46()
{
	int iVar0;
	
	if (iLocal_307 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 3))
		{
			if (get_time_difference(iLocal_314, Local_88.f_6) > 10000)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_2), 2);
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
			{
				if (func_50())
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_2), 6);
					func_49();
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
		{
			if (func_6(iLocal_309, 1, 1))
			{
				iVar0 = get_player_ped(iLocal_309);
				if (func_48(iVar0))
				{
					func_205(iVar0);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
		{
			if (!func_6(iLocal_309, 1, 1) || func_24(iLocal_309))
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_1), 15);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 5))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 4))
			{
				if (get_time_difference(iLocal_314, Local_88.f_5) > 600000)
				{
					GAMEPLAY::SET_BIT(&(Local_88.f_1), 4);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_88.f_3, 12))
		{
			if (func_47())
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_3), 12);
			}
		}
	}
}

bool func_47()
{
	switch (Local_88.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1587523[player_id() /*444*/].f_353 == 0)
			{
				return true;
			}
			break;
		
		case 1:
			if (Global_1587523[player_id() /*444*/].f_353 == 1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_48(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 17))
	{
		if (!is_entity_in_water(iParam0))
		{
			return true;
		}
	}
	if (!func_5(Local_88.f_36, get_entity_coords(iParam0, 1), 625f))
	{
		return true;
	}
	return false;
}

void func_49()
{
	func_414();
	Local_88 = 0;
}

bool func_50()
{
	if ((((((((GAMEPLAY::IS_BIT_SET(Local_88.f_2, 6) || is_player_dead(iLocal_309)) || func_25(iLocal_309, 1, 0)) || func_52(iLocal_309)) || func_32(iLocal_309, 0)) || func_32(iLocal_309, 7)) || func_24(iLocal_309)) || Global_2418472[iLocal_309 /*313*/].f_234) || func_51(get_player_ped(iLocal_309), joaat("titan")))
	{
		return true;
	}
	if (iLocal_309 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_309 /*5*/].f_1, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (is_ped_sitting_in_any_vehicle(iParam0))
			{
				iVar0 = get_vehicle_ped_is_in(iParam0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_52(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

void func_53()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 5))
	{
		Local_88.f_5 = iLocal_314;
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 5);
	}
}

void func_54()
{
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_88.f_1), 5);
	}
}

bool func_55()
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
	{
		return false;
	}
	else
	{
		iVar0 = false;
		if (func_207())
		{
			if (iLocal_307 == 1)
			{
				iVar0 = true;
			}
			else if (func_202())
			{
				if (func_199())
				{
					if (func_198())
					{
						iVar0 = true;
					}
					else if (func_196(func_197(iLocal_307)))
					{
						if (func_61())
						{
							iVar0 = true;
						}
					}
				}
			}
		}
		if (iVar0)
		{
			func_53();
			if (func_56())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_56()
{
	int iVar0;
	
	iVar0 = 0;
	if (network_is_host_of_this_script())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
		{
			return true;
		}
		else
		{
			switch (iLocal_307)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_385(iLocal_307))
					{
						if ((!network_does_network_id_exist(Local_88.f_10[iVar0 /*7*/]) && !GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar0 /*7*/].f_2, true)) && !GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_57(iVar0, func_60(iLocal_307), Local_88.f_32, Local_88.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_307 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_385(iLocal_307))
				{
					if (!network_does_network_id_exist(Local_88.f_10[iVar0 /*7*/]))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar0 /*7*/].f_2, 6))
						{
							return false;
						}
					}
					iVar0++;
				}
			}
			GAMEPLAY::SET_BIT(&iLocal_301, true);
			GAMEPLAY::SET_BIT(&iLocal_301, 2);
			GAMEPLAY::SET_BIT(&iLocal_301, 3);
			GAMEPLAY::SET_BIT(&iLocal_301, 4);
			GAMEPLAY::SET_BIT(&(Local_88.f_1), false);
			GAMEPLAY::SET_BIT(&Global_1706780, iLocal_307);
			return true;
		}
	}
	return false;
}

void func_57(int iParam0, auto uParam1, Vector3 vParam2, float fParam3)
{
	if (network_is_host_of_this_script())
	{
		if (!network_does_network_id_exist(Local_88.f_10[iParam0 /*7*/]))
		{
			if (_0xCB215C4B56A7FAE7(0) < get_num_reserved_mission_peds(false))
			{
				if (can_register_mission_peds(1))
				{
					if (func_196(func_197(iLocal_307)))
					{
						if (func_59(&(Local_88.f_10[iParam0 /*7*/]), 7, func_197(iLocal_307), vParam2, fParam5, 1, 1, 1))
						{
							Local_88.f_10[iParam0 /*7*/].f_1 = iLocal_307;
							Local_88.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_58(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_58(int iParam0)
{
	char[16] cVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, true))
	{
		if (!is_entity_dead(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_88.f_10[iParam0 /*7*/]), Global_1574232);
				set_ped_paths_width_plant(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 1);
				set_ped_path_prefer_to_avoid_water(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 0);
			}
			set_entity_proofs(net_to_ped(Local_88.f_10[iParam0 /*7*/]), false, false, false, false, false, false, 1, false);
			PED::SET_PED_COMBAT_ABILITY(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 20, true);
			PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 311, true);
			set_ped_to_inform_respected_friends(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 300f, 10);
			set_ped_keep_task(net_to_ped(Local_88.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			set_ped_name_debug(net_to_ped(Local_88.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_88.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 2, false);
					set_ped_combat_movement(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 2);
					set_ped_combat_range(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 0);
					set_ped_using_action_mode(net_to_ped(Local_88.f_10[iParam0 /*7*/]), false, -1, 0);
					PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 32, true);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 4, false);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 1024, true);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 128, true);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 32, false);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 8, false);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 64, false);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 256, true);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 1, false);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 2, true);
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 16, true);
					if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, false))
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), 2);
					}
					set_ped_flee_attributes(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 17, false);
					give_weapon_to_ped(net_to_ped(Local_88.f_10[iParam0 /*7*/]), joaat("weapon_knife"), true, true, true);
					set_ped_money(net_to_ped(Local_88.f_10[iParam0 /*7*/]), false);
					task_look_at_entity(net_to_ped(Local_88.f_10[iParam0 /*7*/]), get_player_ped(iLocal_309), -1, 0, 2);
					_0x3FA36981311FA4FF(Local_88.f_10[iParam0 /*7*/], 1);
					break;
			}
			set_entity_health(net_to_ped(Local_88.f_10[iParam0 /*7*/]), round(Global_262145.f_151 * IntToFloat(get_entity_health(net_to_ped(Local_88.f_10[iParam0 /*7*/])))));
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8))
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_1), 8);
			}
			GAMEPLAY::SET_BIT(&(Local_88.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

bool func_59(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, iParam7);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam9);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam7)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
	}
	return false;
}

bool func_61()
{
	struct<25> Var0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 3))
	{
		return true;
	}
	else
	{
		switch (iLocal_307)
		{
			case 0:
				if (network_is_player_active(iLocal_309) && func_6(iLocal_309, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0 = {get_entity_coords(get_player_ped(iLocal_309), 1)};
					Var0.f_5 = 20f;
					if (func_62(Local_88.f_36, 40f, &(Local_88.f_32), &(Local_88.f_35), Var0))
					{
						GAMEPLAY::SET_BIT(&(Local_88.f_1), 3);
						return true;
					}
				}
				else
				{
					_0xFB8F2A6F3DF08CBE();
					_0xFEE4A5459472A9F8();
					if (Global_2404956.f_1490)
					{
						remove_navmesh_required_regions();
						Global_2404956.f_1490 = 0;
					}
				}
				break;
			}
	}
	return false;
}

bool func_62(Vector3 vParam0, float fParam1, auto uParam2, auto uParam3, struct<13> Param4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16)
{
	struct<11> Var0;
	struct<18> Var18;
	Vector3 vVar44;
	
	if (Param6.f_5 > fParam3 - 20f)
	{
		Param6.f_5 = fParam3 - 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = {vParam0};
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_63(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			vVar44 = {vParam0 - Var0[0 /*3*/]};
			if (vVar44.z > Param6.f_12)
			{
				Var0[0 /*3*/] = {vParam0};
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = {Var0[0 /*3*/]};
		*uParam5 = Var0.f_10[0];
		return true;
	}
	return false;
}

bool func_63(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;
	int iVar17;
	Vector3 vVar18;
	Vector3 vVar21;
	auto uVar24;
	int iVar25;
	struct<56> Var26;
	int iVar83;
	
	iVar25 = false;
	switch (*uParam0.f_7)
	{
		case 0:
			if (((!Global_2404956.f_1484 == *uParam0 || !Global_2404956.f_1484.f_1 == *uParam0.f_1) || !Global_2404956.f_1484.f_2 == *uParam0.f_2) || !Global_2404956.f_1487 == *uParam0.f_4)
			{
				iVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2)
			{
				iVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2) || !Global_2404956.f_1504 == *uParam0.f_14)
			{
				iVar25 = true;
			}
			break;
	}
	if (iVar25)
	{
		if (Global_2404956.f_1482 == 1)
		{
			if (is_thread_active(Global_2404956.f_1491))
			{
				if (Global_2404956.f_1491 == get_id_of_this_thread())
				{
					if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) < func_195(0))
					{
						return false;
					}
				}
				else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) < func_195(0))
				{
					return false;
				}
			}
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_194();
		}
		Global_2404956.f_1482 = 0;
	}
	else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) > func_195(0))
	{
		Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
	}
	switch (*uParam0.f_7)
	{
		case 0:
			fVar4 = *uParam0 - *uParam0.f_4;
			fVar5 = *uParam0.f_1 - *uParam0.f_4;
			fVar6 = *uParam0 + *uParam0.f_4;
			fVar7 = *uParam0.f_1 + *uParam0.f_4;
			break;
		
		case 1:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8;
				fVar6 = *uParam0.f_11;
			}
			else
			{
				fVar4 = *uParam0.f_11;
				fVar6 = *uParam0.f_8;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1;
				fVar7 = *uParam0.f_11.f_1;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1;
				fVar7 = *uParam0.f_8.f_1;
			}
			break;
		
		case 2:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_11 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar4 = *uParam0.f_11 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_8 + 0.5f * *uParam0.f_14;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_11.f_1 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_8.f_1 + 0.5f * *uParam0.f_14;
			}
			break;
	}
	_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (*uParam0.f_7 == 0)
	{
		vVar8 = {*uParam0};
	}
	else
	{
		vVar8 = {*uParam0.f_8 + *uParam0.f_11 * Vector(0.5f, 0.5f, 0.5f)};
	}
	vVar11 = {vVar8 + Vector(-0.1f, -0.1f, -0.1f)};
	vVar14 = {vVar8 + Vector(0.1f, 0.1f, 0.1f)};
	if (!Global_2404956.f_1482)
	{
		_0xFB8F2A6F3DF08CBE();
		_0xFEE4A5459472A9F8();
		func_194();
		if (*uParam1.f_7 && *uParam0.f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_193(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, *uParam1.f_5, *uParam0.f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = {*uParam0};
					*uParam2.f_10[0] = *uParam0.f_3;
					return true;
				}
			}
		}
		if (!_0x3C67506996001F5E())
		{
			Global_2404956.f_1505 = *uParam0.f_7;
			switch (*uParam0.f_7)
			{
				case 0:
					Global_2404956.f_1484 = {*uParam0};
					Global_2404956.f_1487 = *uParam0.f_4;
					break;
				
				case 1:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = 0f;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
				
				case 2:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = *uParam0.f_14;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
			}
			if (!*uParam1.f_8 && !*uParam1.f_9)
			{
				func_192(vVar8.x, vVar8.y);
			}
			Global_2404956.f_1483 = 1;
			Global_2404956.f_1482 = 1;
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1488 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1491 = get_id_of_this_thread();
		}
		else
		{
			return false;
		}
	}
	if (Global_2404956.f_1482)
	{
		if (Global_2404956.f_1483 == 1)
		{
			if (_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 5000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (*uParam1.f_8 || *uParam1.f_9)
				{
					if (*uParam0.f_21)
					{
						*(uParam2[0 /*3*/]) = {*uParam0.f_18};
					}
					else
					{
						*(uParam2[0 /*3*/]) = {vVar8};
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26 = {*uParam1};
					Var26.f_3 = *uParam1.f_5;
					Var26.f_11 = *uParam1.f_9;
					Var26.f_18 = 1;
					switch (*uParam0.f_7)
					{
						case 0:
							Var26.f_19 = {*uParam0};
							Var26.f_25 = *uParam0.f_4;
							break;
						
						case 1:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = *uParam0.f_14;
							break;
					}
					Var26.f_26 = *uParam0.f_7;
					Var26.f_12 = *uParam0.f_15;
					if (*uParam0.f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = {*(uParam1.f_13[iVar17 /*3*/])};
						Var26.f_45[iVar17] = *uParam1.f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = *uParam1.f_23;
					Var26.f_55 = *uParam0.f_16;
					func_173(uParam2[0 /*3*/], uParam2.f_10[0], &Var26);
					if ((*uParam1.f_7 && *uParam1.f_9) && *uParam0.f_7 == 0)
					{
						if (!func_172(*(uParam2[0 /*3*/]), *uParam0, *uParam0.f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = {*uParam0};
							*uParam2.f_10[0] = *uParam0.f_3;
						}
					}
					Global_2404956.f_1483 = 9;
				}
				else
				{
					Global_2404956.f_1483 = 2;
				}
			}
		}
		if (Global_2404956.f_1483 == 2)
		{
			if ((is_navmesh_loaded_in_area(vVar11, vVar14) || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 15000) || _0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (*uParam0.f_5 && !func_169(player_id(), 0))
				{
					Global_2404956.f_1483 = 3;
				}
				else
				{
					Global_2404956.f_1483 = 4;
				}
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1493) > 7000)
			{
				func_168(vVar8.x, vVar8.y);
			}
		}
		if (Global_2404956.f_1483 == 3)
		{
			if (func_167() || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 10000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 4;
			}
		}
		if (Global_2404956.f_1483 == 4)
		{
			if (_0x3C67506996001F5E())
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_162();
				if (*uParam0.f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (*uParam1.f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!get_player_team(player_id()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (*uParam0.f_7)
					{
						case 0:
							if (_0x5A6FFA2433E2F14C(player_id(), *uParam0, *uParam0.f_4, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 1:
							func_161(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							if (_0x4BA92A18502BCA61(player_id(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 2:
							if (_0x4BA92A18502BCA61(player_id(), *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
					}
				}
				else
				{
					if (*uParam1.f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (*uParam1.f_10)
					{
						iVar0 += 32;
					}
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					Global_2404956.f_1483 = 5;
					switch (*uParam0.f_7)
					{
						case 0:
							_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_161(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404956.f_1483 == 5)
		{
			if (func_104(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404956.f_1509.f_5)
				{
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					Global_2404956.f_1483 = 6;
				}
				else
				{
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					if (!*uParam0.f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = {*uParam1 - *(uParam2[0 /*3*/])};
							*uParam2.f_10[0] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						}
					}
					Global_2404956.f_1483 = 9;
				}
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 20000)
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 6)
		{
			iVar0 = 0;
			Global_2404956.f_1509.f_1 = 0;
			if (*uParam1.f_3)
			{
				iVar0++;
			}
			else if (*uParam0.f_7 == 0)
			{
				if (!func_103(*uParam0.f_4))
				{
					if (is_valid_interior(get_interior_at_coords(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_102(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14))
			{
				if (is_valid_interior(get_interior_at_coords(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (*uParam1.f_10)
			{
				iVar0 += 32;
			}
			if (*uParam0.f_15)
			{
				iVar0 += 16;
			}
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1483 = 7;
			switch (*uParam0.f_7)
			{
				case 0:
					_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_161(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
					_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404956.f_1483 == 7)
		{
			if (func_104(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2404956.f_1617[iVar17 /*3*/]) == 0f)
							{
								switch (*uParam0.f_7)
								{
									case 0:
										if (func_172(Global_2404956.f_1617[iVar17 /*3*/], *uParam0, *uParam0.f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 1:
										if (func_100(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 2:
										if (is_point_in_angled_area(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (*uParam0.f_7)
						{
							case 0:
								vVar1 = {*uParam0};
								break;
							
							case 1:
							case 2:
								vVar1 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
								break;
						}
						func_66(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = {vVar1};
					}
				}
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (!vmag(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						vVar1 = {*uParam1 - *(uParam2[iVar17 /*3*/])};
						*uParam2.f_10[iVar17] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2404956.f_1483 = 9;
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 20000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 8)
		{
			if (*uParam0.f_5)
			{
				if (func_65(Global_2404956.f_468))
				{
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_64(uParam2, &(Global_2404956.f_1509.f_6));
			}
			else
			{
				if (*uParam0.f_15)
				{
					iVar83 = false;
				}
				else
				{
					iVar83 = true;
				}
				*(uParam2[0 /*3*/]) = {Global_2404956.f_1484};
				func_66(uParam2[0 /*3*/], 0, iVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1483 = 9;
		}
		if (Global_2404956.f_1483 == 9)
		{
			Global_2404956.f_1482 = 0;
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_194();
			return true;
		}
		Global_2404956.f_1488 = NETWORK::GET_NETWORK_TIME();
	}
	return false;
}

void func_64(auto uParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = {*(uParam1[iVar0 /*8*/].f_4)};
		*uParam0.f_10[iVar0] = *(uParam1[iVar0 /*8*/]).f_7;
		*uParam0.f_14[iVar0] = *uParam1[iVar0 /*8*/];
		iVar0++;
	}
}

bool func_65(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_66(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, auto uParam5, auto uParam6)
{
	Vector3 vVar0;
	auto uVar3;
	struct<56> Var4;
	auto uVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	Vector3 vVar65;
	Vector3 vVar68;
	Vector3 vVar71;
	float fVar74;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	if (iParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!*uParam6.f_3)
	{
		if (*uParam5.f_5)
		{
			if (!*uParam5.f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (*uParam5.f_7)
				{
					case 0:
						vVar65 = {*uParam5};
						if (func_103(*uParam5.f_4) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_102(*uParam5.f_8, *uParam5.f_11, 0f) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_102(*uParam5.f_8, *uParam5.f_11, *uParam5.f_14) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_68(*uParam0, &vVar0, iVar64, iParam3, 1))
	{
	}
	else
	{
		iVar63 = true;
	}
	if (iVar63)
	{
		vVar0 = {*uParam0};
		Var4 = {*uParam6};
		Var4.f_8 = 1;
		Var4.f_3 = *uParam6.f_5;
		if (iParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = *uParam5.f_15;
		Var4.f_15 = iParam3;
		if (iParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = *uParam5.f_7;
			switch (*uParam5.f_7)
			{
				case 0:
					Var4.f_19 = {*uParam5};
					Var4.f_25 = *uParam5.f_4;
					break;
				
				case 1:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = *uParam5.f_14;
					break;
				}
		}
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = {*(uParam6.f_13[iVar62 /*3*/])};
			Var4.f_45[iVar62] = *uParam6.f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = *uParam6.f_23;
		Var4.f_55 = *uParam5.f_16;
		func_173(&vVar0, &uVar3, &Var4);
	}
	if (iParam4)
	{
		switch (*uParam5.f_7)
		{
			case 0:
				vVar68 = {*uParam5};
				fVar74 = *uParam5.f_4;
				break;
			
			case 1:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				break;
			
			case 2:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				fVar74 = *uParam5.f_14;
				break;
		}
		if (!func_67(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
		{
			if (func_68(*uParam0, &vVar0, iVar64, iParam3, 0))
			{
				if (!func_67(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
				{
					if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
					{
						vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
					}
					else
					{
						vVar0 = {vVar68};
					}
					if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
					{
						vVar0.z = uVar61;
					}
				}
			}
			else
			{
				if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
				{
					vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
				}
				else
				{
					vVar0 = {vVar68};
				}
				if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
				{
					vVar0.z = uVar61;
				}
			}
		}
	}
	*uParam0 = {vVar0};
	Global_2404956.f_603 = 1;
}

int func_67(Vector3 vParam0, int iParam1, Vector3 vParam2, Vector3 vParam3, float fParam4)
{
	switch (iParam3)
	{
		case 0:
			if (vdist(vParam0, vParam4) <= fParam10)
			{
				return true;
			}
			break;
		
		case 1:
			return func_100(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return false;
}

bool func_68(Vector3 vParam0, auto uParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_99(vParam0, uParam3))
	{
		if (func_69(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (get_safe_coord_for_ped(vParam0, 0, uParam3, iParam4))
	{
		if (func_69(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_69(Vector3 vParam0, auto uParam1, int iParam2, int iParam3)
{
	float fVar0;
	auto uVar1;
	auto uVar8;
	
	fVar0 = vdist(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_78(Global_2404956.f_481, uParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_70(*uParam3, 1056964608))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_70(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_75(player_id(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_71(vParam0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_71(vParam0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_71(vParam0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_71(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (vdist(vParam0, vParam3) < func_74(iParam7, 1008981770))
	{
		vVar0 = {0f, 1f, 0f};
		func_73(&vVar0, 0f, 0f, fParam6);
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
		func_72(iParam7, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
		fVar9 = absf(vVar6.y - vVar3.y);
		fVar10 = absf(vVar6.x - vVar3.x);
		fVar11 = absf(vVar6.z - vVar3.z);
		vVar12 = {vParam3 + vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar12.z -= 0.5f * fVar11 + fParam8;
		vVar15 = {vParam3 - vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar15.z += 0.5f * fVar11 + fParam8;
		if (is_point_in_angled_area(vParam0, vVar12, vVar15, fVar10, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_72(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (is_model_valid(iParam0))
	{
		get_model_dimensions(iParam0, fParam1, fParam2);
	}
	if (vmag(*fParam1) <= 0.01f || vmag(*fParam2) <= 0.01f)
	{
		*fParam1 = 0f - fParam4 * 0.5f;
		*fParam2 = 0f + fParam4 * 0.5f;
		*fParam1.f_1 = 0f - fParam3 * 0.5f;
		*fParam2.f_1 = 0f + fParam3 * 0.5f;
		*fParam1.f_2 = 0f - fParam5 * 0.5f;
		*fParam2.f_2 = 0f + fParam5 * 0.5f;
	}
}

void func_73(auto uParam0, Vector3 vParam1)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = fVar0 * *uParam0.f_1 - fVar1 * *uParam0.f_2;
	vVar2.z = fVar1 * *uParam0.f_1 + fVar0 * *uParam0.f_2;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = fVar0 * *uParam0 + fVar1 * *uParam0.f_2;
	vVar2.y = *uParam0.f_1;
	vVar2.z = fVar0 * *uParam0.f_2 - fVar1 * *uParam0;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = fVar0 * *uParam0 - fVar1 * *uParam0.f_1;
	vVar2.y = fVar1 * *uParam0 + fVar0 * *uParam0.f_1;
	vVar2.z = *uParam0.f_2;
	*uParam0 = {vVar2};
}

float func_74(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_72(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = {vVar3 - vVar0};
	fVar9 = sqrt(vVar6.x * 0.5f * vVar6.x * 0.5f + vVar6.y * 0.5f * vVar6.y * 0.5f + vVar6.z * 0.5f * vVar6.z * 0.5f) + fParam1;
	return fVar9;
}

bool func_75(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_76(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_76(auto uParam0)
{
	return func_77(uParam0);
}

int func_77(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_78(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (func_93(vParam0))
	{
		if (func_92(uParam3, iParam6, 0, 1))
		{
			if (iParam6)
			{
			}
			return true;
		}
	}
	if (func_81(uParam3, iParam6, 1))
	{
		if (iParam6)
		{
		}
		return true;
	}
	if (iParam7)
	{
		if (func_80(*uParam3, 1056964608))
		{
			return true;
		}
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (vdist(*uParam3, *(uParam4[iVar0 /*3*/])) < *uParam5[iVar0])
		{
			if (iParam6)
			{
				func_79(uParam3, *(uParam4[iVar0 /*3*/]), *uParam5[iVar0], 1036831949, 0);
			}
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		return true;
	}
	return false;
}

void func_79(auto uParam0, Vector3 vParam1, float fParam2, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {*uParam0 - vParam1};
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	}
	else
	{
		vVar0 = {0f, 1f, 0f};
		func_73(&vVar0, 0f, 0f, get_random_float_in_range(0f, 360f));
	}
	vVar0 = {vVar0 * Vector(fParam4 + fParam5, fParam4 + fParam5, fParam4 + fParam5)};
	if (!iParam6)
	{
		vVar3 = {vParam1 + vVar0};
	}
	else
	{
		vVar3 = {vParam1 - vVar0};
	}
	*uParam0 = vVar3.x;
	*uParam0.f_1 = vVar3.y;
}

bool func_80(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (vdist(vParam0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_81(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	auto uVar1;
	Vector3 vVar2;
	
	if (func_89(*uParam0, &uVar0))
	{
		if (iParam1)
		{
			vVar2 = {*uParam0};
			func_83(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 0, iParam2);
			if (func_89(vVar2, &uVar1) || func_82(vVar2))
			{
				vVar2 = {*uParam0};
				func_83(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 1, iParam2);
			}
			*uParam0 = {vVar2};
		}
		return true;
	}
	return false;
}

bool func_82(Vector3 vParam0)
{
	float fVar0;
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
		{
			return true;
		}
	}
	return false;
}

void func_83(auto uParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam4)
	{
		switch (*uParam1.f_10)
		{
			case 0:
				*uParam0 = {func_88(*uParam0, *uParam1, 0f, 0f, 0f, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, 0, fParam2, iParam3)};
				break;
			
			case 1:
				*uParam0 = {func_88(*uParam0, *uParam1, *uParam1.f_3, 0f, 1, fParam2, iParam3)};
				break;
			
			case 2:
				*uParam0 = {func_88(*uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, 2, fParam2, iParam3)};
				break;
		}
	}
	else
	{
		switch (*uParam1.f_10)
		{
			case 0:
				func_79(uParam0, *uParam1, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, fParam2, iParam3);
				break;
			
			case 1:
				func_87(uParam0, *uParam1, *uParam1.f_3, fParam2, iParam3);
				break;
			
			case 2:
				func_84(uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, fParam2, iParam3);
				break;
			}
	}
}

void func_84(auto uParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	Vector3 vVar10;
	Vector3 vVar13;
	float fVar16;
	Vector3 vVar17;
	Vector3 vVar20;
	Vector3 vVar23;
	Vector3 vVar26;
	Vector3 vVar29;
	
	vVar0 = {vParam4 - vParam1};
	vVar0.z = 0f;
	vVar3 = {*uParam0 - vParam1};
	vVar3.z = 0f;
	vVar6 = {func_86(0f, 0f, 1f, vVar0)};
	vVar6 = {vVar6 / FtoV(vmag(vVar6))};
	fVar9 = vmag(vVar3) * sin(get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y));
	if (fVar9 < fParam7 * 0.5f)
	{
		if (!iParam9)
		{
			if (func_85(vVar6, vVar3) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_85(vVar6, vVar3) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8)};
		}
		vVar10 = {*uParam0 + vVar6};
		fVar16 = vdist(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = {vParam1 + vParam4 / Vector(2f, 2f, 2f)};
		vVar17.z = 0f;
		vVar6 = {func_86(0f, 0f, 1f, vVar0)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		vVar6 = {vVar6 * Vector(fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f)};
		vVar20 = {vVar17 - vVar6};
		vVar23 = {vVar17 + vVar6};
		vVar26 = {vVar23 - vVar20};
		vVar26.z = 0f;
		vVar29 = {*uParam0 - vVar20};
		vVar29.z = 0f;
		vVar6 = {func_86(0f, 0f, 1f, vVar26)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		fVar9 = vmag(vVar29) * sin(get_angle_between_2d_vectors(vVar26.x, vVar26.y, vVar29.x, vVar29.y));
		if (!iParam9)
		{
			if (func_85(vVar6, vVar29) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_85(vVar6, vVar29) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8)};
		}
		vVar13 = {*uParam0 + vVar6};
		if (vdist(vVar10, *uParam0, *uParam0.f_1, 0f) < vdist(vVar13, *uParam0, *uParam0.f_1, 0f))
		{
			*uParam0 = {vVar10};
		}
		else
		{
			*uParam0 = {vVar13};
		}
	}
}

float func_85(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_86(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

void func_87(auto uParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, float fParam5, int iParam6)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = {*uParam0};
	fVar3 = *uParam0 - Param1;
	fVar4 = *uParam0 - Param4;
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = *uParam0.f_1 - Param1.f_1;
	fVar7 = *uParam0.f_1 - Param4.f_1;
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = {*uParam0};
	if (!iParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = Param1 - fParam7;
			}
			else
			{
				vVar0.x = Param4 + fParam7;
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = Param1.f_1 - fParam7;
		}
		else
		{
			vVar0.y = Param4.f_1 + fParam7;
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = Param4 + fParam7;
		}
		else
		{
			vVar0.x = Param1 - fParam7;
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = Param4.f_1 + fParam7;
	}
	else
	{
		vVar0.y = Param1.f_1 - fParam7;
	}
	*uParam0 = {vVar0};
}

Vector3 func_88(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	int iVar0;
	Vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_79(&vParam0, vParam3, fParam9, fParam11, iParam12);
			break;
		
		case 1:
			func_87(&vParam0, vParam3, vParam6, fParam11, iParam12);
			break;
		
		case 2:
			func_84(&vParam0, vParam3, vParam6, fParam9, fParam11, iParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		get_nth_closest_vehicle_node(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_172(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_100(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!is_point_in_angled_area(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

bool func_89(Vector3 vParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_91();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_90(vParam0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_90(Vector3 vParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	switch (*uParam3.f_10)
	{
		case 0:
			return func_172(vParam0, *uParam3, *uParam3.f_6 + fParam4 + IntToFloat(Global_2404956.f_1714) * *uParam3.f_8, iParam5, iParam6);
			break;
		
		case 1:
			return func_100(vParam0, *uParam3 + Vector(fParam4 * -1f, fParam4 * -1f, fParam4 * -1f), *uParam3.f_3 + Vector(fParam4, fParam4, fParam4), iParam5, iParam6);
			break;
		
		case 2:
			if (iParam5 && iParam6)
			{
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false);
			}
			else if (iParam5)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z < *uParam3.f_2 && vParam0.z < *uParam3.f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (iParam6)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z > *uParam3.f_2 && vParam0.z > *uParam3.f_3.f_2))
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
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
			}
			break;
	}
	return false;
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_92(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!iParam2 || (iParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_90(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (iParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = {Global_2407408[iVar0 /*17*/].f_13};
						}
						else
						{
							vVar1 = {*uParam0};
							func_83(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, iParam3);
							if (func_92(&vVar1, 0, 0, 0))
							{
								vVar1 = {*uParam0};
								func_83(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = {vVar1};
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_93(Vector3 vParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_97(player_id(), 1))
		{
			return true;
		}
		if (!func_96(vParam0, 1008981770))
		{
			if (!func_92(&vParam0, 0, 0, 0))
			{
				return true;
			}
			else if (func_92(&vParam0, 0, 1, 0))
			{
				return true;
			}
		}
		else
		{
			iVar0 = func_95(vParam0, 1008981770);
			if (iVar0 > -1)
			{
				vVar1 = {func_94(&(Global_2404956.f_39[iVar0 /*12*/]))};
				if (!func_92(&vVar1, 0, 0, 0))
				{
					if (!func_92(&vParam0, 0, 0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_94(auto uParam0)
{
	switch (*uParam0.f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + *uParam0.f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_95(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_90(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_96(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_90(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_97(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_98(iParam0) != 0;
	}
	return func_75(iParam0, iParam1);
}

int func_98(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_99(Vector3 vParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			fVar3 = vdist(Global_2404956.f_1281[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = {Global_2404956.f_1281[iVar1 /*4*/]};
			return true;
		}
	}
	return false;
}

bool func_100(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, int iParam4)
{
	func_101(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (iParam9 && iParam10)
	{
		return true;
	}
	else if (iParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (iParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_101(auto uParam0, auto uParam1)
{
	auto uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (*uParam0.f_1 > *uParam1.f_1)
	{
		uVar0 = *uParam1.f_1;
		*uParam1.f_1 = *uParam0.f_1;
		*uParam0.f_1 = uVar0;
	}
	if (*uParam0.f_2 > *uParam1.f_2)
	{
		uVar0 = *uParam1.f_2;
		*uParam1.f_2 = *uParam0.f_2;
		*uParam0.f_2 = uVar0;
	}
}

bool func_102(Vector3 vParam0, Vector3 vParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_103(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_104(auto uParam0, auto uParam1, auto uParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_2404956.f_1509.f_1 == 0 && Global_2404956.f_1509 == 0)
	{
		if (*uParam1.f_5 && !iParam3)
		{
			switch (_0x3C891A251567DFCE(&(Global_2404956.f_1509.f_1)))
			{
				case 0:
					func_159(uParam1, uParam2);
					if (!Global_2404956.f_1509.f_2)
					{
						if (*uParam2.f_7 && Global_2404956.f_512.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = {*uParam1};
							*uParam0.f_10[0] = *uParam1.f_3;
							return true;
						}
						else
						{
							if (*uParam1.f_21)
							{
								*(uParam0[0 /*3*/]) = {*uParam1.f_18};
							}
							else
							{
								*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
							}
							if (*uParam1.f_5 && func_65(Global_2404956.f_468))
							{
								if (!Global_2404956.f_1509.f_5)
								{
									Global_2404956.f_1509.f_5 = 1;
								}
								else
								{
									func_66(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_66(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
							return true;
						}
					}
					break;
				
				case 1:
					func_159(uParam1, uParam2);
					break;
				
				case 2:
					return false;
					break;
				
				case 3:
					return false;
					break;
			}
		}
		else if (_0x3C67506996001F5E())
		{
			if (!_0xF445DE8DA80A1792())
			{
				if (_0xA586FBEB32A53DBB())
				{
					func_159(uParam1, uParam2);
					Global_2404956.f_1509.f_1 = _0xA635C11B8C44AFC2();
				}
				else
				{
					return false;
				}
			}
			else
			{
				_0xFEE4A5459472A9F8();
				func_159(uParam1, uParam2);
				if (!Global_2404956.f_1509.f_2)
				{
					Global_2404956.f_1509.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (*uParam1.f_5)
	{
		func_156(Global_2404956.f_512, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64));
	}
	if (*uParam2.f_7 && !Global_2404956.f_1509.f_4)
	{
		Global_2404956.f_1509.f_4 = 1;
		func_109(*uParam1, *uParam1.f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (*uParam1.f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404956.f_1509.f_1 > 0 || Global_2404956.f_1509 > 0)
	{
		if (*uParam1.f_5 || _0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404956.f_1509.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404956.f_1509.f_3)
					{
						iVar4 = Global_2404956.f_1509.f_3 + 1;
					}
					if (iVar4 > Global_2404956.f_1509.f_1 - 1)
					{
						iVar4 = Global_2404956.f_1509.f_1 - 1;
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (*uParam1.f_5 && !iParam3)
					{
						network_get_respawn_result(iVar4, &vVar0, &fVar3);
						fVar3 *= 57.29578f;
					}
					else
					{
						_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (*uParam1.f_5 && !iParam3)
					{
						iVar5 = _0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_109(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404956.f_1509.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404956.f_1509.f_1;
		}
		if (Global_2404956.f_1509.f_1 == iVar4)
		{
			if (*uParam1.f_5 && func_65(Global_2404956.f_468))
			{
				if (Global_2404956.f_1509.f_2)
				{
					func_64(uParam0, &(Global_2404956.f_1509.f_6));
					func_108(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_66(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_108(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_64(uParam0, &(Global_2404956.f_1509.f_6));
				func_108(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (*uParam1.f_5)
			{
				iVar4 = get_random_int_in_range(0, Global_2404956.f_1509.f_1);
				network_get_respawn_result(iVar4, uParam0[0 /*3*/], uParam0.f_10[0]);
				if (!func_105(uParam0[0 /*3*/], 0))
				{
					*uParam0.f_10[0] *= 57.29578f;
					func_108(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_66(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_108(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
				func_66(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
				func_108(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
		if (*uParam1.f_5 && func_65(Global_2404956.f_468))
		{
			if (!Global_2404956.f_1509.f_5)
			{
				Global_2404956.f_1509.f_5 = 1;
			}
			else
			{
				func_66(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (*uParam1.f_15)
			{
				iVar8 = false;
			}
			else
			{
				iVar8 = true;
			}
			func_66(uParam0[0 /*3*/], 0, iVar8, 0, 0, uParam1, uParam2);
		}
		*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
		func_108(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

bool func_105(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	
	vVar1 = {*uParam0};
	uVar4 = func_107(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2408374[uVar4])
	{
		if (func_106(vVar1, &(Global_2407545[uVar4 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_84(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408374[8])
	{
		if (func_106(vVar1, &(Global_2407545[8 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_84(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_106(Vector3 vParam0, auto uParam1)
{
	return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
}

int func_107(struct<2> Param0, auto uParam1)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0 < Global_2408388[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

void func_108(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404956.f_1617[3 - iVar0 /*3*/] = {Global_2404956.f_1617[3 - iVar0 + 1 /*3*/]};
		}
		iVar0++;
	}
	Global_2404956.f_1617[0 /*3*/] = {vParam0};
}

void func_109(Vector3 vParam0, Vector3 fParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	Vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	int iVar24;
	int iVar25;
	
	iVar9 = false;
	iVar7 = 0;
	iVar8 = false;
	if (*uParam4.f_5)
	{
		if (Global_2404956.f_468 == 1)
		{
			if (absf(Global_2404956.f_481.f_2 - vParam0.z) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (*uParam4.f_5)
	{
		if (func_154(player_id()))
		{
			if (iParam7 == -1)
			{
				iVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				iVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (*uParam4.f_5 && *uParam4.f_6)
	{
		if (!func_153(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (*uParam4.f_5)
	{
		if (!_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (*uParam4.f_5)
	{
		if (!func_152(vParam0, *uParam5.f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	iVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (vmag(*(uParam5.f_13[iVar10 /*3*/])) > 0f)
		{
			if (!vdist(vParam0, *(uParam5.f_13[iVar10 /*3*/])) > *uParam5.f_20[iVar10])
			{
				iVar14 = false;
			}
		}
		iVar10++;
	}
	if (iVar14)
	{
		iVar7 += 256;
	}
	if (*uParam4.f_5)
	{
		if (func_146(vParam0, fParam3, *uParam4.f_15, func_151(1), *uParam4.f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404956.f_1;
		}
	}
	else if (!func_143(vParam0, 25f, player_id(), 1, 1))
	{
		if (*uParam4.f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_142(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_142(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (*uParam4.f_5)
	{
		if (!Global_2404956.f_625)
		{
			vVar11 = {Global_2404956.f_481};
			if (Global_2404956.f_468 == 26)
			{
				vVar11 = {Global_2404956.f_512.f_18};
			}
			if (func_93(vVar11))
			{
				if ((!func_92(&vParam0, 0, 0, 0) && !func_81(&vParam0, 0, 0)) && !func_141(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_81(&vParam0, 0, 0) && !func_141(&vParam0, 0)) && !func_80(vParam0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_140(vParam0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (*uParam4.f_5)
	{
		if (!(func_139(player_id()) && func_138(player_id())))
		{
			if (!func_137(&vParam0, &(Global_2404956.f_1509.f_64), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (*uParam4.f_5)
	{
		if (!func_138(player_id()))
		{
			if (!func_136(vParam0, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_135(vParam0))
	{
		if (*uParam4.f_5)
		{
			if (func_135(vParam0))
			{
				if (func_65(Global_2404956.f_468))
				{
					if (func_96(vParam0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (*uParam4.f_5)
	{
		if (func_134(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404956.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (*uParam4.f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (is_valid_interior(get_interior_at_coords(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (is_valid_interior(get_interior_at_coords(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_105(&vParam0, 0))
	{
		iVar7 += 32768;
	}
	else
	{
		iVar7 = -1;
	}
	if (func_70(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (*uParam4.f_5)
	{
	}
	else if (func_133(vParam0, 1, 0, *uParam4.f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	iVar24 = false;
	iVar25 = false;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (iVar7 >= Global_2404956.f_1509.f_6[iVar15 /*8*/])
		{
			if (*uParam4.f_5)
			{
				if (!iVar24)
				{
					if (iParam6)
					{
						*uParam5.f_4 = 0;
						iVar4 = false;
					}
					else
					{
						iVar4 = true;
					}
					if (*uParam4.f_21)
					{
						fVar0 = func_125(vParam0, *uParam4.f_18, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					else
					{
						fVar0 = func_125(vParam0, Global_2404956.f_1484, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					if (iVar8)
					{
						fVar0 *= 3f;
					}
					iVar24 = true;
				}
				if ((func_65(Global_2404956.f_468) && iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!iVar25)
					{
						fVar2 = func_123(vParam0);
						iVar25 = true;
					}
					if (fVar2 < Global_2404956.f_1509.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = {vParam0};
						Var16.f_7 = fParam3;
						Var16 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_122(Var16, iVar15);
						Global_2404956.f_1509.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar0 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_1 = fVar0;
					func_122(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
			else
			{
				if (!iVar24)
				{
					if (*uParam4.f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_121(vParam0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_111(vParam0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_110(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_110(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					iVar24 = true;
				}
				if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar3 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_3 = fVar3;
					func_122(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
		}
		iVar15++;
	}
}

float func_110(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = fParam3 * 0.5f;
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = fParam4 + 1f - fParam4 - 1f - fParam4 * fParam2 - fParam0 / fParam2 - fParam1;
		}
		else
		{
			fVar0 = fParam5 + 1f - fParam5 - 1f - fParam5 * fParam0 - fParam2 / fParam3 - fParam2;
		}
	}
	else
	{
		fVar0 = fParam4 + fParam0 - fParam1 / fParam3 - fParam1 * fParam5 - fParam4;
	}
	return fVar0;
}

float func_111(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	iVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_6(iVar11, 1, 1))
		{
			if (!iVar11 == player_id() || iParam5 == 1)
			{
				iVar4 = false;
				if (iParam3)
				{
					if (func_113(iVar11))
					{
						iVar4 = true;
					}
				}
				if (iParam4)
				{
					if (get_player_team(iVar11) == get_player_team(player_id()))
					{
						if (!get_player_team(iVar11) == -1 || !func_97(player_id(), 1))
						{
							iVar4 = true;
						}
					}
				}
				if (iVar4)
				{
					if (_0x9DE986FC9A87C474(player_id(), iVar11) || !iParam6)
					{
						if (func_112(iVar11))
						{
							vVar5 = {func_8(iVar11)};
							if (!iVar11 == player_id())
							{
								vVar8 = {unk_0x64D779659BC37B19(get_player_ped(iVar11))};
							}
							else
							{
								vVar8 = {vVar5};
							}
							if (!iParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = get_distance_between_coords(vParam0, vVar5, 1);
							fVar2 = get_distance_between_coords(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

bool func_112(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_113(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_119(iParam0))
		{
			if (_0x9DE986FC9A87C474(player_id(), iParam0))
			{
				if (!get_player_team(iParam0) == get_player_team(player_id()))
				{
					if (func_75(player_id(), 1))
					{
						if (!func_118(get_player_team(iParam0), get_player_team(player_id()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (get_player_team(iParam0) == -1 && get_player_team(player_id()) == -1)
				{
					if (!func_75(player_id(), 1))
					{
						if (!func_114(iParam0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_114(int iParam0)
{
	if (func_117(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_116(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_115(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_116(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_117(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_116(iParam0)};
		Global_2459453 = {func_116(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, false);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, true);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

bool func_119(int iParam0)
{
	if (func_169(iParam0, 0))
	{
		return true;
	}
	if (func_120())
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

int func_120()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

float func_121(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !iParam6)
	{
		if (func_6(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				if (is_sphere_visible(vParam0, fParam3))
				{
					fVar4 = vdist2(vParam0, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						iVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_169(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if (func_112(iVar1) || !iParam8)
					{
						if (!iParam6)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										iVar2 = true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam7 || get_player_team(iVar1) == -1)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									iVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_122(struct<8> Param0, int iParam1)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = {Global_2404956.f_1509.f_6[iParam8 /*8*/]};
	Global_2404956.f_1509.f_6[iParam8 /*8*/] = {Param0};
	if (iParam8 < 2)
	{
		func_122(Var0, iParam8 + 1);
	}
}

float func_123(Vector3 vParam0)
{
	auto uVar0;
	
	return func_124(vParam0, &(Global_2404956.f_39), &uVar0);
}

float func_124(Vector3 vParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (*(uParam3[iVar0 /*12*/]).f_9)
		{
			fVar1 = 0f;
			switch (*(uParam3[iVar0 /*12*/]).f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 -= *(uParam3[iVar0 /*12*/]).f_6 + IntToFloat(Global_2404956.f_1714) * *(uParam3[iVar0 /*12*/]).f_8;
					break;
				
				case 1:
				case 2:
					if (vParam0.x < *uParam3[iVar0 /*12*/])
					{
						fVar1 += *uParam3[iVar0 /*12*/] - vParam0.x;
					}
					else if (vParam0.x > *(uParam3[iVar0 /*12*/]).f_3)
					{
						fVar1 += vParam0.x - *(uParam3[iVar0 /*12*/]).f_3;
					}
					if (vParam0.y < *(uParam3[iVar0 /*12*/]).f_1)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_1 - vParam0.y;
					}
					else if (vParam0.y > *(uParam3[iVar0 /*12*/].f_3).f_1)
					{
						fVar1 += vParam0.y - *(uParam3[iVar0 /*12*/].f_3).f_1;
					}
					if (vParam0.z < *(uParam3[iVar0 /*12*/]).f_2)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_2 - vParam0.z;
					}
					else if (vParam0.z > *(uParam3[iVar0 /*12*/].f_3).f_2)
					{
						fVar1 += vParam0.z - *(uParam3[iVar0 /*12*/].f_3).f_2;
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_125(Vector3 vParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = to_float(iParam9) / to_float(8);
	}
	if (iParam6)
	{
		fVar0 = func_110(vdist(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 *= fVar0 * 0.95f;
	}
	fVar0 = func_110(func_111(vParam0, 1, 0, 0, 1), 0f, func_132(), func_130(), 0f, 0.3f);
	fVar1 *= fVar0 * 0.95f;
	fVar0 = func_110(func_128(vParam0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 *= fVar0 * 0.95f;
	fVar4 = 100f;
	if (get_player_team(player_id()) == -1 && !func_97(player_id(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_110(func_127(vParam0, player_id(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 *= fVar0 * 0.95f;
	if (iParam7)
	{
		if (func_126(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_110(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 += func_110(fVar3, 0f, 0f, 6f, 1f, 0.5f);
			fVar0 *= 0.5f;
			fVar1 *= fVar0 * 0.85f;
		}
	}
	if (iParam8)
	{
		fVar0 = func_110(vdist(Global_2404956.f_481, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 *= fVar0 * 0.9f;
	}
	return fVar1;
}

bool func_126(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 vVar0;
	int iVar3;
	auto uVar4;
	auto uVar5;
	
	iVar3 = get_nth_closest_vehicle_node_id_with_heading(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (is_vehicle_node_id_valid(iVar3))
	{
		get_vehicle_node_position(iVar3, &vVar0);
		*uParam3 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = absf(vParam0.z - vVar0.z);
		return true;
	}
	return false;
}

float func_127(Vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_6(iVar3, 0, 1))
			{
				if (get_player_team(iVar3) != get_player_team(iParam3) || (get_player_team(iVar3) == -1 && get_player_team(iParam3) == -1))
				{
					if (Global_2413760.f_260[iVar2])
					{
						fVar1 = vdist(Global_2413760.f_130[iVar2 /*3*/], vParam0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_128(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	Vector3 vVar3;
	var[] uVar6 = new var[32];
	int iVar39;
	
	iVar39 = get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!is_entity_dead(uVar6[iVar2], 0))
			{
				if (func_129(uVar6[iVar2]))
				{
					vVar3 = {get_entity_coords(uVar6[iVar2], 1)};
					fVar1 = get_distance_between_coords(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

bool func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_ped_relationship_group_hash(iParam0);
	switch (get_relationship_between_groups(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	switch (get_relationship_between_groups(iVar0, Global_1574198[player_id()]))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	if (Global_1587523[player_id() /*444*/] == 0)
	{
		iVar1 = get_player_team(player_id());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (get_relationship_between_groups(iVar0, Global_1573909[iVar1]))
			{
				case 3:
				case 5:
					return true;
					break;
				}
			}
	}
	return false;
}

float func_130()
{
	if (func_131())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_131()
{
	if (Global_2404956.f_39.f_65 && !Global_2404956.f_39.f_295)
	{
		if (!func_119(player_id()))
		{
			return true;
		}
	}
	return false;
}

float func_132()
{
	if (func_131())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_133(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (iParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && is_any_vehicle_near_point(vParam0, fParam7)) || (fVar0 > 0f && is_any_ped_near_point(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && is_any_object_near_point(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && is_any_object_near_point(vParam0, fParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_134(Vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2404956.f_39.f_55)
	{
		if (is_valid_interior(Global_2404956.f_39.f_56))
		{
			if (!_are_coords_colliding_with_exterior(vParam0))
			{
				iVar0 = get_interior_at_coords(vParam0);
				if (is_valid_interior(iVar0))
				{
					iVar1 = get_interior_group_id(iVar0);
					if (!iVar1 == Global_2404956.f_39.f_57)
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
		}
	}
	return true;
}

int func_135(Vector3 vParam0)
{
	switch (Global_2404956.f_1505)
	{
		case 0:
			return func_172(vParam0, Global_2404956.f_1484, Global_2404956.f_1487, 0, 0);
			break;
		
		case 1:
			return func_100(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, Global_2404956.f_1504, 0, true);
			break;
	}
	return false;
}

bool func_136(Vector3 vParam0, auto uParam1, auto uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = *(uParam3[iVar1 /*4*/]).f_3 + fParam5;
		if (vdist(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = {0f, 0f, 0f};
	vVar5 = {0f, 0f, 0f};
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = {*(uParam4[iVar1 /*10*/])};
		vVar5 = {*(uParam4[iVar1 /*10*/].f_3)};
		fVar8 = *(uParam4[iVar1 /*10*/]).f_6;
		if (is_point_in_angled_area(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_137(auto uParam0, auto uParam1, int iParam2, float fParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist(*(uParam1[iVar0 /*10*/].f_7), *uParam0) < 80f * fParam3)
		{
			if (iParam2)
			{
				vVar1 = {*uParam0};
				func_79(&vVar1, *(uParam1[iVar0 /*10*/].f_7), 80f, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_138(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_24(iParam0))
			{
				if (Global_1587523[iParam0 /*444*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_139(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_140(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (vdist2(Global_2404956.f_1617[iVar0 /*3*/], vParam0) < fParam3 * fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_141(auto uParam0, int iParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if (func_82(*uParam0))
	{
		if (iParam1)
		{
			vVar1 = {*uParam0};
			func_79(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_89(vVar1, &uVar0) || func_82(vVar1))
			{
				vVar1 = {*uParam0};
				func_79(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = {vVar1};
		}
	}
	return false;
}

bool func_142(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_6(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_8(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (is_sphere_visible(vParam0, fParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_169(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_112(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!iParam7)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (get_distance_between_coords(func_8(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_8(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_143(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_145(vParam0, fParam3, iParam4, iParam5, 0) || func_144(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

bool func_144(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_71(vParam0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_145(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (iParam6)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (get_player_team(iVar1) == get_player_team(iParam4))
					{
						return false;
					}
				}
			}
			if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
					{
						return true;
					}
				}
				else if (vdist(func_8(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (func_6(iVar1, 0, 1))
			{
				if (vdist(func_8(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_146(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, int iParam12)
{
	Global_2404956.f_1 = 0;
	if (!func_143(vParam0, 0.5f, player_id(), 0, 0))
	{
		Global_2404956.f_1++;
		if (iParam5)
		{
			if (func_193(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_150(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_70(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (!iParam4)
		{
			if (func_193(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_150(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_147(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404956.f_1++;
						if (!func_70(vParam0, 1056964608))
						{
							Global_2404956.f_1++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (func_193(vParam0, 6f, 5f, 5f, 5f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
		{
			Global_2404956.f_1 += Global_2404956;
			if (!func_150(vParam0, fParam12))
			{
				Global_2404956.f_1++;
				if (!func_147(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404956.f_1++;
					if (!func_70(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2404956.f_1 += Global_2404956;
		}
	}
	return false;
}

bool func_147(Vector3 vParam0, Vector3 fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!player_id() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_112(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (!func_149(player_id(), iVar1, -2, 0))
				{
					if (func_148(func_8(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_148(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, float fParam3, float fParam4, float fParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	fParam6 *= -1f;
	fParam6 += 360f;
	vVar0.x = sin(fParam6);
	vVar0.y = cos(fParam6);
	vVar0.z = 0f;
	vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	vVar0 = {vVar0 * Vector(fParam7, fParam7, fParam7)};
	vVar3 = {vParam3 + vVar0};
	vVar3.z = vParam3.z;
	vVar3.z += fParam9;
	vParam3.z += fParam9;
	return is_point_in_angled_area(vParam0, vParam3, vVar3, fParam8, 0, true);
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

bool func_150(Vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_112(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
		{
			if ((get_player_team(player_id()) == -1 && get_player_team(iVar1) == -1) && !func_97(player_id(), 1))
			{
				return false;
			}
			else if ((get_player_team(player_id()) == -1 && !player_id() == iVar1) || !func_149(player_id(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_8(iVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_151(int iParam0)
{
	if ((Global_2404956.f_468 == 9 || Global_2404956.f_468 == 9) || (Global_2404956.f_468 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_152(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_112(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam9) && iParam6) && func_114(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_8(iVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_153(Vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = get_player_team(player_id());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_169(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1)) && iVar1 != player_id())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!get_player_team(iVar1) == -1)
						{
							if (get_player_team(iVar1) == get_player_team(player_id()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (get_player_team(iVar1) == iVar3)
					{
						if (get_distance_between_coords(func_8(iVar1), vParam0, 1) <= fVar2 + fParam3)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_154(int iParam0)
{
	if ((func_97(iParam0, 1) || func_155(iParam0)) || func_29(iParam0, 0))
	{
		return true;
	}
	return false;
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

void func_156(Vector3 vParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	Vector3 vVar16;
	Vector3 vVar19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = {Var2};
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = {Var6};
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam3[iVar0 /*4*/])) == 0f || vdist(Global_2359718[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var2 = {Global_2359718[iVar1 /*26*/].f_3};
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_158(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar16 = {Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f)};
			vVar19 = {*(uParam4[iVar0 /*10*/]) + *(uParam4[iVar0 /*10*/].f_3) * Vector(0.5f, 0.5f, 0.5f)};
			if (vmag(*(uParam4[iVar0 /*10*/])) == 0f || vdist(vVar16, vParam0) < vdist(vVar19, vParam0))
			{
				Var6 = {Global_1311025[iVar1 /*8*/].f_1};
				Var6.f_3 = {Global_1311025[iVar1 /*8*/].f_4};
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = {Global_2359394[iVar1 /*3*/]};
				func_157(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_157(auto uParam0, auto uParam1, int iParam2)
{
	Global_2409351 = {*(uParam1[iParam2 /*10*/])};
	*(uParam1[iParam2 /*10*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_157(&Global_2409351, uParam1, iParam2 + 1);
	}
}

void func_158(auto uParam0, auto uParam1, int iParam2)
{
	Global_2409347 = {*(uParam1[iParam2 /*4*/])};
	*(uParam1[iParam2 /*4*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_158(&Global_2409347, uParam1, iParam2 + 1);
	}
}

void func_159(auto uParam0, auto uParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			if (func_160(Global_2404956.f_1281[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404956.f_1281[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = {*uParam1 - Global_2404956.f_1281[iVar0 /*4*/]};
					fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
				}
				func_109(Global_2404956.f_1281[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404956.f_1509++;
			}
			iVar0++;
		}
	}
}

int func_160(Vector3 vParam0, auto uParam1)
{
	switch (*uParam3.f_7)
	{
		case 0:
			return func_67(vParam0, *uParam3.f_7, *uParam3, 0f, 0f, 0f, *uParam3.f_4);
		
		case 1:
		case 2:
			return func_67(vParam0, *uParam3.f_7, *uParam3.f_8, *uParam3.f_11, *uParam3.f_14);
		
		default:
	}
	return false;
}

void func_161(Vector3 vParam0, Vector3 vParam1, auto uParam2, auto uParam3, auto uParam4)
{
	float fVar0;
	
	func_101(&vParam0, &vParam3);
	fVar0 = vParam3.x - vParam0.x;
	*uParam6 = vParam0.x + fVar0 * 0.5f;
	*uParam6.f_1 = vParam0.y;
	*uParam6.f_2 = vParam0.z;
	*uParam7 = *uParam6;
	*uParam7.f_1 = vParam3.y;
	*uParam7.f_2 = vParam3.z;
	*uParam8 = fVar0 * 0.5f;
}

void func_162()
{
	func_166();
	func_165();
	func_164();
	func_163();
}

void func_163()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404956.f_1509.f_64[iVar10 /*10*/] = {Var0};
		iVar10++;
	}
}

void func_164()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404956.f_1509.f_31[iVar4 /*4*/] = {Var0};
		iVar4++;
	}
}

void func_165()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404956.f_1509.f_6[iVar8 /*8*/] = {Var0};
		iVar8++;
	}
}

void func_166()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404956.f_1509 = {Var0};
}

auto func_167()
{
	return Global_1310987.f_4;
}

void func_168(float fParam0, float fParam1)
{
	func_194();
	func_192(fParam0, fParam1);
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_170(-1, 0) == 8;
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

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_171();
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

auto func_171()
{
	return Global_1312747;
}

int func_172(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam7 && iParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	return vdist(vParam0, vParam3) < fParam6 + 0.01f;
}

void func_173(auto uParam0, auto uParam1, auto uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_191(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_174(uParam0, uParam1, uParam2);
	}
}

void func_174(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	auto uVar6;
	auto uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	Vector3 vVar25;
	auto uVar28;
	Vector3 vVar29;
	float fVar32;
	int iVar33;
	
	iVar0 = 0;
	if (!vmag(*uParam2.f_35) > 0f)
	{
		*uParam2.f_35 = {*uParam0};
	}
	if (*uParam2.f_15)
	{
		if (func_78(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
		{
			*uParam2.f_6 = 9999.9f;
			*uParam2.f_7 = 9999.9f;
		}
	}
	if (*uParam2.f_51)
	{
		*uParam2.f_6 = 9999.9f;
	}
	if (*uParam2.f_48)
	{
		if (func_190(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (*uParam2.f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (*uParam2.f_10 == 0 || (*uParam2.f_33 > 0 && *uParam2.f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (*uParam2.f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = {0f, 0f, 0f};
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = get_nth_closest_vehicle_node_id_with_heading(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (is_vehicle_node_id_valid(iVar8))
		{
			get_vehicle_node_position(iVar8, &vVar1);
			iVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				iVar12 = true;
			}
			Global_2409361.f_165 = {vVar1};
			if (((*uParam2.f_10 || *uParam2.f_33 > 0) || !_get_is_slow_road_flag(iVar8)) || _get_supports_gps_route_flag(iVar8))
			{
				get_vehicle_node_properties(vVar1, &uVar6, &uVar7);
				if (vdist(vVar1, *uParam2.f_35) > *uParam2.f_4)
				{
					if (!func_141(&vVar1, 0))
					{
						if ((*uParam2.f_13 || uVar7 & 64 == 0) || *uParam2.f_33 == 1)
						{
							if (*uParam2.f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_189(vVar1))
									{
										if (!func_70(vVar1, 5f))
										{
											if (vVar1.z >= *uParam2.f_35.f_2 - *uParam2.f_7 || *uParam2.f_33 >= 2)
											{
												if (vVar1.z <= *uParam2.f_35.f_2 + *uParam2.f_6 || *uParam2.f_33 >= 2)
												{
													if (func_188(vVar1, uParam2) || *uParam2.f_33 >= 2)
													{
														if ((*uParam2.f_48 && !func_190(&vVar1, 0)) || *uParam2.f_48 == 0)
														{
															vVar1 = {func_186(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, iVar12, 1, *uParam2.f_51)};
															if (!iVar12)
															{
																if (iVar11)
																{
																	iVar0 += -1;
																}
															}
															if (vmag(vVar1) > 0f)
															{
																if (((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f) || *uParam2.f_33 >= 2)
																{
																	if ((*uParam2.f_12 && !func_181(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
																	{
																		if (!*uParam2.f_15 || !func_78(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
																		{
																			if (*uParam2.f_8)
																			{
																				iVar17 = *uParam2.f_31;
																				iVar18 = true;
																				iVar19 = 1;
																				fVar20 = *uParam2.f_49;
																				if (!*uParam2.f_55)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (*uParam2.f_17)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					if (*uParam2.f_33 == 1)
																					{
																						fVar20 *= 0.375f;
																					}
																				}
																				else
																				{
																					iVar18 = true;
																					iVar19 = 1;
																					if (*uParam2.f_28)
																					{
																						if (*uParam2.f_33 == 1)
																						{
																							fVar20 *= 0.375f;
																						}
																					}
																				}
																				iVar21 = 0;
																				if (*uParam2.f_3 > 7f)
																				{
																					if (func_193(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_193(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_180(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || *uParam2.f_33 >= 2)
																				{
																					if (((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52) || *uParam2.f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (*uParam2.f_52)
																						{
																							iVar22 = func_179(vVar1, *uParam2.f_54, &fVar23);
																						}
																						if (!*uParam2.f_52 || (*uParam2.f_52 && iVar22 <= *uParam2.f_53))
																						{
																							if (*uParam2.f_52)
																							{
																								if (iVar22 < *uParam2.f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									*uParam2.f_53 = iVar22;
																								}
																							}
																							if (*uParam2.f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = {vVar1};
																									Global_2409361.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar16 /*3*/], *uParam2.f_35))
																											{
																												func_178(vVar1, fVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
																								Global_2409361.f_121[Global_2409361.f_162] = fVar4;
																								Global_2409361.f_162++;
																								if (func_188(vVar1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = {vVar1};
																						*uParam1 = fVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = {vVar1};
																				*uParam1 = fVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!*uParam2.f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= 40 + iVar15 || iVar0 >= 100)
			{
				if (Global_2409361.f_162 > 0 && ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_33 >= 2))
				{
					if (*uParam2.f_30)
					{
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_176(0, uParam2);
						}
						iVar24 = get_random_int_in_range(0, Global_2409361.f_162);
						vVar25 = {Global_2409361[0 /*3*/]};
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = {Global_2409361[iVar24 /*3*/]};
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = {vVar25};
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
				}
				else
				{
					*uParam2.f_33++;
					if (*uParam2.f_33 < 3)
					{
						func_174(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = get_random_int_in_range(1 + iVar15, 40 + iVar15);
						get_nth_closest_vehicle_node_with_heading(*uParam0, iVar0, &vVar1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						vVar1 = {func_186(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, 0, 0, *uParam2.f_51)};
						vVar29 = {vVar1};
						fVar32 = fVar4;
						if (!*uParam2.f_50)
						{
							iVar33 = true;
						}
						else
						{
							iVar33 = false;
						}
						if (func_78(*uParam2.f_35, &vVar29, uParam2.f_38, uParam2.f_45, iVar33, 1) || func_190(&vVar29, iVar33))
						{
							if (!*uParam2.f_50)
							{
								*uParam2.f_33 = 0;
								*uParam2.f_50 = 1;
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								*uParam2.f_6 = 9999.9f;
								*uParam2.f_7 = 9999.9f;
								func_174(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = {vVar29};
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 3)
			{
				func_174(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_175(&Global_1312061, uParam0, uParam1, *uParam0);
				if (*uParam2.f_11)
				{
					*uParam2.f_27 = 1;
				}
				return;
			}
		}
		Global_2409361.f_164 = iVar8;
	}
}

void func_175(auto uParam0, auto uParam1, auto uParam2, Vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_143(*(uParam0[iVar2 /*4*/]), 5f, player_id(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = {*(uParam0[iVar3 /*4*/])};
		*uParam2 = *(uParam0[iVar3 /*4*/]).f_3;
	}
}

void func_176(int iParam0, auto uParam1)
{
	if (!func_188(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162--;
		func_177(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_176(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_176(iParam0 + 1, uParam1);
	}
}

void func_177(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409361[iParam0 /*3*/] = {Global_2409361[iParam0 + 1 /*3*/]};
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_178(Vector3 vParam0, float fParam1, int iParam2)
{
	Vector3 vVar0;
	auto uVar3;
	
	vVar0 = {Global_2409361[iParam4 /*3*/]};
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = {vParam0};
	Global_2409361.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_178(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_179(Vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_113(iVar5))
		{
			vVar1 = {func_8(iVar5)};
			fVar7 = vdist(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_180(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && player_id() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, iParam5, iParam6))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam8 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_112(iVar1)))
					{
						if ((!iParam7 || (iParam7 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam10) && iParam7) && func_114(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (func_71(func_8(iVar1), vParam0, fParam3, iParam4, 1036831949))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_181(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_185(vParam0, fParam3, iParam4, iParam5, iParam6) || func_182(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

bool func_182(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_184(vParam0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_183(vParam0, fParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_183(Vector3 vParam0, float fParam1, int iParam2, Vector3 vParam3, float fParam4, int iParam5)
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[4];
	Vector3 vVar14;
	Vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	Vector3 vVar23;
	Vector3 vVar26;
	
	if (func_71(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return true;
	}
	func_72(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	fVar20 = absf(vVar17.y - vVar14.y);
	fVar21 = absf(vVar17.x - vVar14.x);
	fVar22 = absf(vVar17.z - vVar14.z);
	vVar23 = {0f, fVar20 * 0.5f, 0f};
	func_73(&vVar23, 0f, 0f, fParam3);
	vVar26 = {fVar21 * 0.5f, 0f, 0f};
	func_73(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = {vParam0 + vVar23 + vVar26};
	vVar1[0 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[1 /*3*/] = {vParam0 + vVar23 - vVar26};
	vVar1[1 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[2 /*3*/] = {vParam0 - vVar23 + vVar26};
	vVar1[2 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[3 /*3*/] = {vParam0 - vVar23 - vVar26};
	vVar1[3 /*3*/].f_2 += 0.5f * fVar22;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_71(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_184(Vector3 vParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_74(iParam3, 1008981770);
	fVar1 = func_74(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < fVar0 + fVar1)
	{
		return true;
	}
	return false;
}

bool func_185(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_71(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
				else if (func_71(func_8(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_71(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
				{
					if (func_71(func_8(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_186(Vector3 vParam0, float fParam1, int iParam2, int iParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	auto uVar5;
	auto uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	Vector3 vVar24;
	Vector3 vVar27;
	Vector3 vVar30;
	
	if (iParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_187(vParam0, *fParam3, vParam6))
			{
				*fParam3 += 180f;
			}
		}
		return vParam0;
	}
	get_vehicle_node_properties(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !iParam10)
	{
		get_closest_road(vParam0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*iParam12 = 1;
		}
		if (iParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (iVar11 + iVar12 != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *iParam12)
		{
			*fParam3 += 180f;
			if (*fParam3 > 360f)
			{
				*fParam3 += -360f;
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			iVar15 = true;
		}
		else
		{
			iVar15 = false;
		}
		iVar16 = false;
		if (iVar15)
		{
			if (iVar11 == 0)
			{
				if (iParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				iVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			iVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (iVar15)
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar11) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar11);
				}
				if (iVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 += IntToFloat(iVar11 - 2) * 1f;
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 += IntToFloat(iVar11 - 1) * 1f;
				}
			}
			else
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar12) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar12);
				}
				if (iVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 += IntToFloat(iVar12 - 2) * 1f;
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 += IntToFloat(iVar12 - 1) * 1f;
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 += 0.95f * fVar13;
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 += -0.5f;
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 += -1f;
			}
			if (!iParam5 || !uVar4 & 8 == 0)
			{
				fVar14 += 4.2f * -0.5f;
			}
			if (!iParam11 == 0)
			{
				func_72(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				if (fVar23 > 1.8f)
				{
					fVar14 += fVar23 - 1.8f * -0.5f;
				}
			}
		}
	}
	if (vmag(vParam6) > 0f)
	{
		if (!func_187(vParam0, *fParam3, vParam6))
		{
			if (iParam5)
			{
				*fParam3 += 180f;
			}
			else if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	vVar0 = {_get_object_offset_from_coords(vParam0, *fParam3, fVar14, 0f, 0f)};
	if (iParam5)
	{
		if (unk_0xA0F8A7517A273C05(vParam0, *fParam3, &vVar24))
		{
			vVar27 = {vVar24 - vParam0};
			if (!iParam11 == 0)
			{
				vVar30 = {vVar27 / FtoV(vmag(vVar27))};
				func_72(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				vVar30 = {vVar30 * Vector(fVar23 * 0.5f, fVar23 * 0.5f, fVar23 * 0.5f)};
				vVar27 = {vVar27 - vVar30};
				vVar24 = {vParam0 + vVar27};
			}
			vVar30 = {vVar0 - vVar24};
			vVar0 = {vVar24};
		}
	}
	return vVar0;
}

bool func_187(Vector3 vParam0, float fParam1, Vector3 vParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {0f, 1f, 0f};
	func_73(&vVar0, 0f, 0f, fParam3);
	vVar3 = {vParam4 - vParam0};
	if (func_85(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_188(Vector3 vParam0, auto uParam1)
{
	if (*uParam3.f_18)
	{
		switch (*uParam3.f_26)
		{
			case 0:
				if (func_172(vParam0, *uParam3.f_19, *uParam3.f_25, 0, 0))
				{
					return true;
				}
				break;
			
			case 1:
				if (func_100(vParam0, *uParam3.f_19, *uParam3.f_22, 0, 0))
				{
					return true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(vParam0, *uParam3.f_19, *uParam3.f_22, *uParam3.f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_189(Vector3 vParam0)
{
	int iVar0;
	auto uVar1;
	
	uVar1 = func_107(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[uVar1])
	{
		if (func_106(vParam0, &(Global_2408393[uVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_106(vParam0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_190(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_172(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 1:
				if (func_100(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, true))
				{
					iVar0 = true;
				}
				break;
		}
		if (iVar0)
		{
			if (iParam1)
			{
				*uParam0 = {func_88(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0)};
			}
		}
	}
	return iVar0;
}

int func_191(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	Vector3 vVar14;
	auto uVar17;
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!vmag(*uParam2.f_35) > 0f)
		{
			*uParam2.f_35 = {*uParam0};
		}
		if (*uParam2.f_15)
		{
			if (func_78(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		if (*uParam2.f_48)
		{
			if (func_190(uParam0, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			vVar1 = {Global_2404956.f_1151[iVar0 /*4*/]};
			fVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (vmag(vVar1) > 0f)
			{
				if ((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f)
				{
					if ((*uParam2.f_12 && !func_181(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
					{
						if (!*uParam2.f_15 || !func_78(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
						{
							if (*uParam2.f_8)
							{
								iVar6 = *uParam2.f_31;
								iVar7 = true;
								iVar8 = 1;
								fVar9 = *uParam2.f_49;
								if (!*uParam2.f_55)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (*uParam2.f_17)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									if (*uParam2.f_33 == 1)
									{
										fVar9 *= 0.375f;
									}
								}
								else
								{
									iVar7 = true;
									iVar8 = 1;
									if (*uParam2.f_28)
									{
										if (*uParam2.f_33 == 1)
										{
											fVar9 *= 0.375f;
										}
									}
								}
								iVar10 = false;
								if (*uParam2.f_3 > 7f)
								{
									if (func_193(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
									{
										iVar10 = true;
									}
								}
								else if (func_193(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_180(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
								{
									iVar10 = true;
								}
								if (iVar10)
								{
									if ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52)
									{
										fVar12 = 0f;
										if (*uParam2.f_52)
										{
											iVar11 = func_179(vVar1, *uParam2.f_54, &fVar12);
										}
										if (!*uParam2.f_52 || (*uParam2.f_52 && iVar11 <= *uParam2.f_53))
										{
											if (*uParam2.f_52)
											{
												if (iVar11 < *uParam2.f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													*uParam2.f_53 = iVar11;
												}
											}
											if (*uParam2.f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = {vVar1};
													Global_2409361.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar5 /*3*/], *uParam2.f_35))
															{
																func_178(vVar1, fVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
												Global_2409361.f_121[Global_2409361.f_162] = fVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = {vVar1};
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = {vVar1};
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (*uParam2.f_30)
			{
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_176(0, uParam2);
				}
				iVar13 = get_random_int_in_range(0, Global_2409361.f_162);
				vVar14 = {Global_2409361[0 /*3*/]};
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = {Global_2409361[iVar13 /*3*/]};
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = {vVar14};
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 2)
			{
				return func_191(uParam0, uParam1, uParam2);
			}
			else
			{
				*uParam2.f_33 = 0;
				func_174(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_192(float fParam0, float fParam1)
{
	add_navmesh_required_region(fParam0, fParam1, 0.1f);
	Global_2404956.f_1492 = get_id_of_this_thread();
	Global_2404956.f_1490 = 1;
	Global_2404956.f_1493 = NETWORK::GET_NETWORK_TIME();
}

bool func_193(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (is_any_vehicle_near_point(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) || is_any_ped_near_point(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (is_any_object_near_point(vParam0, fParam5, iParam18))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam13)
	{
		if (get_number_of_fires_in_range(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_152(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_142(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

void func_194()
{
	if (Global_2404956.f_1490)
	{
		if (get_id_of_this_thread() == Global_2404956.f_1492)
		{
			remove_navmesh_required_regions();
		}
		else
		{
			remove_navmesh_required_regions();
		}
		Global_2404956.f_1490 = 0;
	}
}

int func_195(int iParam0)
{
	if (is_screen_faded_out())
	{
		return 10000;
	}
	if (iParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_196(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_88.f_49;
			break;
	}
	return 0;
}

bool func_198()
{
	if (iLocal_307 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_199()
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
	auto uVar9;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, false))
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_2), false);
		if (iLocal_307 != 0)
		{
			return true;
		}
		else if (func_6(iLocal_309, 1, 1))
		{
			if (get_num_reserved_mission_peds(false) - _0xCB215C4B56A7FAE7(0) >= func_385(iLocal_307))
			{
				if (can_register_mission_peds(func_385(iLocal_307)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = get_player_ped(iLocal_309);
					iVar3 = get_ped_nearby_peds(iVar2, &uLocal_492, -1);
					iVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (iVar4)
						{
							iVar5 = -1;
							iVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_385(iLocal_307))
							{
								if (iVar5 == -1)
								{
									if (((!network_does_network_id_exist(Local_88.f_10[iVar1 /*7*/]) && !GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar1 /*7*/].f_2, true)) && !GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar1 /*7*/].f_2, 6)) && !GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										iVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_492[iVar0]))
								{
									if (!is_entity_dead(uLocal_492[iVar0], 0))
									{
										if (!is_ped_a_player(uLocal_492[iVar0]))
										{
											if (func_201(ENTITY::GET_ENTITY_MODEL(uLocal_492[iVar0])))
											{
												if (!is_entity_a_mission_entity(uLocal_492[iVar0]))
												{
													if (!is_ped_in_any_vehicle(uLocal_492[iVar0], 0))
													{
														if (func_5(get_entity_coords(uLocal_492[iVar0], 1), get_entity_coords(iVar2, 1), 625f))
														{
															set_entity_as_mission_entity(uLocal_492[iVar0], true, 0);
															Local_88.f_10[iVar5 /*7*/].f_6 = iVar0;
															GAMEPLAY::SET_BIT(&(Local_88.f_10[iVar5 /*7*/].f_2), 8);
															if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 12))
															{
																Local_88.f_8 = iLocal_314;
																GAMEPLAY::SET_BIT(&(Local_88.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_385(iLocal_307))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar6 /*7*/].f_2, true) || GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!is_entity_dead(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (is_entity_a_mission_entity(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6]))
					{
						if (!network_has_control_of_entity(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6]))
						{
							network_request_control_of_entity(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6]);
							iVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6], 1);
							Local_88.f_10[iVar6 /*7*/] = ped_to_net(uLocal_492[Local_88.f_10[iVar6 /*7*/].f_6]);
							set_network_id_exists_on_all_machines(Local_88.f_10[iVar6 /*7*/], 1);
							GAMEPLAY::SET_BIT(&(Local_88.f_10[iVar6 /*7*/].f_2), false);
							Local_88.f_10[iVar6 /*7*/].f_1 = iLocal_307;
							Local_88.f_10[iVar6 /*7*/].f_4 = func_60(iLocal_307);
							func_58(iVar6);
							GAMEPLAY::CLEAR_BIT(&(Local_88.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						iVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!iVar8 || get_time_difference(iLocal_314, Local_88.f_8) > 5000)
		{
			if (iVar7 >= func_385(iLocal_307))
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_492[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_385(iLocal_307))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_200(&(Local_88.f_10[iVar6 /*7*/]));
					GAMEPLAY::CLEAR_BIT(&(Local_88.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			GAMEPLAY::CLEAR_BIT(&(Local_88.f_1), 12);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_200(int iParam0)
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*iParam0))
	{
		iVar0 = net_to_ent(*iParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

bool func_201(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return false;
	}
	return true;
}

bool func_202()
{
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 6))
	{
		return true;
	}
	else if (iLocal_307 == 0)
	{
		Local_88.f_49 = func_203(Local_88.f_36, 1);
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 6);
		return true;
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 6);
		return true;
	}
	return false;
}

int func_203(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_204(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_204(vParam0, 1100f, -196f, 300f, 350f, 0) || func_204(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_204(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_204(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_204(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_204(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_204(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = get_random_int_in_range(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = get_random_int_in_range(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

int func_204(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	return get_distance_between_coords(vParam0, vParam3, iParam7) <= fParam6;
}

void func_205(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_88.f_36 = {get_entity_coords(iParam0, 1)};
	if (func_206(iParam0, 0))
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 17);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_88.f_1), 17);
	}
}

bool func_206(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0) || iParam1)
		{
			if (is_entity_in_water(iParam0))
			{
				if (get_entity_submerged_level(iParam0) >= 0.7f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_207()
{
	int iVar0;
	
	if (network_is_host_of_this_script())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 7))
		{
			return true;
		}
		else
		{
			iVar0 = false;
			switch (iLocal_307)
			{
				case 0:
					if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 11))
					{
						if (func_6(iLocal_309, 1, 1))
						{
							if (vdist2(func_8(iLocal_309), Local_88.f_39) > 625f)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_88.f_2), 11);
								GAMEPLAY::CLEAR_BIT(&iLocal_301, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_309, 1, 1))
						{
							iVar0 = true;
							if (func_210())
							{
								iVar0 = false;
							}
						}
						if (iVar0)
						{
							func_53();
						}
						else
						{
							func_54();
						}
						if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 5))
						{
							if (func_209())
							{
								func_54();
								GAMEPLAY::SET_BIT(&(Local_88.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_309, 1, 1))
					{
						iVar0 = true;
						if (func_208())
						{
							iVar0 = false;
						}
					}
					if (iVar0)
					{
						func_53();
					}
					else
					{
						func_54();
					}
					if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 5))
					{
						if (get_time_difference(iLocal_314, Local_88.f_5) > 30000)
						{
							func_54();
							GAMEPLAY::SET_BIT(&(Local_88.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return false;
}

bool func_208()
{
	int iVar0;
	
	iVar0 = get_player_ped(iLocal_309);
	if (((((is_entity_in_air(iVar0) || is_entity_in_water(iVar0)) || func_25(iLocal_309, 1, 0)) || func_32(iLocal_309, 0)) || func_32(iLocal_309, 7)) || func_24(iLocal_309))
	{
		return true;
	}
	if (func_97(iLocal_309, 1))
	{
		if (iLocal_309 > -1)
		{
			if (Global_1587523[iLocal_309 /*444*/] != 1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_209()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 18))
	{
		if (get_time_difference(iLocal_314, Local_88.f_5) > 5000)
		{
			GAMEPLAY::SET_BIT(&(Local_88.f_1), 18);
			return true;
		}
	}
	else if (get_time_difference(iLocal_314, Local_88.f_5) > 60000)
	{
		return true;
	}
	return false;
}

bool func_210()
{
	int iVar0;
	
	iVar0 = get_player_ped(iLocal_309);
	if (((((((((get_entity_speed(iVar0) > 10f || is_entity_in_air(iVar0)) || is_entity_in_water(iVar0)) || func_25(iLocal_309, 1, 0)) || func_52(iLocal_309)) || func_32(iLocal_309, 0)) || func_32(iLocal_309, 7)) || func_24(iLocal_309)) || Global_2418472[iLocal_309 /*313*/].f_234) || func_51(get_player_ped(iLocal_309), joaat("titan")))
	{
		return true;
	}
	if (func_97(iLocal_309, 1))
	{
		if (iLocal_309 > -1)
		{
			if (Global_1587523[iLocal_309 /*444*/] != 1)
			{
				return true;
			}
		}
	}
	if (iLocal_309 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_140[iLocal_309 /*5*/].f_1, 4))
		{
			return true;
		}
	}
	return false;
}

void func_211()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 14))
	{
		Local_88.f_9 = iLocal_314;
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 14);
	}
}

void func_212()
{
	if (Local_88.f_44 != Local_140[iLocal_308 /*5*/].f_4)
	{
		Local_88.f_44 = Local_140[iLocal_308 /*5*/].f_4;
	}
}

void func_213()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 10))
	{
		Local_88.f_45 = func_385(iLocal_307);
		Local_88.f_46 = 0;
		Local_88.f_47 = 0;
		GAMEPLAY::SET_BIT(&(Local_88.f_1), 10);
	}
}

void func_214()
{
	func_215();
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 7))
		{
			if (get_time_difference(iLocal_314, Local_88.f_7) > 300000)
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_2), 8);
			}
		}
	}
}

void func_215()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 7))
	{
		Local_88.f_7 = iLocal_314;
		GAMEPLAY::SET_BIT(&(Local_88.f_2), 7);
	}
}

void func_216()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GAMEPLAY::SET_BIT(&iLocal_301, 7);
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, true))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 2))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 3))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 9))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 4))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 5))
	{
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 11))
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
			if (func_287("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				GAMEPLAY::SET_BIT(&iLocal_301, 7);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 6))
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
			if (func_287("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				GAMEPLAY::SET_BIT(&iLocal_301, 7);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 7))
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
			if (func_286())
			{
				iLocal_509 = func_283(12);
				func_281(iLocal_509, 1, 0, 0f);
				func_269(iLocal_509, 4, 1, 1);
				GAMEPLAY::SET_BIT(&iLocal_301, 7);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, false))
	{
		if (player_id() == iLocal_308)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
				if (func_287("MPCT_mugfail", "LAMAR", 19))
				{
					GAMEPLAY::SET_BIT(&iLocal_301, 7);
				}
			}
		}
		else if (player_id() == iLocal_309)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 12))
				{
					iVar0 = round(IntToFloat(Global_262145.f_5046) * Global_262145.f_4287);
					func_232(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_218(47, 1);
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 8))
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
			if (func_286())
			{
				if (iLocal_307 == 0)
				{
					iLocal_509 = func_283(2) * func_385(iLocal_307);
					iVar1 = 3;
				}
				else
				{
					iLocal_509 = func_283(12);
					iVar1 = 4;
				}
				func_281(iLocal_509, 1, 0, 0f);
				func_269(iLocal_509, iVar1, 1, 0);
				GAMEPLAY::SET_BIT(&iLocal_301, 7);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 10))
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 7);
			if (func_286())
			{
				if (iLocal_307 == 0)
				{
					iLocal_509 = func_283(2) * func_385(iLocal_307);
					iVar2 = 3;
				}
				else
				{
					iLocal_509 = func_283(12);
					iVar2 = 4;
				}
				func_281(iLocal_509, 1, 0, 0f);
				func_269(iLocal_509, iVar2, 1, 0);
				GAMEPLAY::SET_BIT(&iLocal_301, 7);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_301, 7))
	{
		func_217();
	}
}

void func_217()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1587523[network_player_id_to_int() /*444*/].f_132), iLocal_307);
	Global_1587523[network_player_id_to_int() /*444*/].f_133 = -1;
	if (iLocal_307 == 1)
	{
		if (is_incident_valid(uLocal_491))
		{
			delete_incident(uLocal_491);
		}
	}
	func_414();
	func_469();
}

int func_218(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_219(iParam0, iParam1);
}

bool func_219(int iParam0, int iParam1)
{
	if (func_231(14) && !func_230(iParam0))
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
	if (func_229(&Global_2563627))
	{
		if (func_227(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_220(&Global_2563627, iParam0))
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

bool func_220(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_231(14) && !func_230(iParam1))
	{
		return false;
	}
	if (func_227(uParam0, iParam1))
	{
		return false;
	}
	if (func_226(uParam0) < 0f)
	{
		func_225(uParam0, 0);
	}
	func_223(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_221(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_221(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_231(14) && !func_230(iParam1))
	{
		return false;
	}
	if (func_227(uParam0, iParam1))
	{
		return false;
	}
	if (func_226(uParam0) < 0f)
	{
		func_225(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_222(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_222(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_223(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_224(uParam0, iVar0);
		iVar0++;
	}
	func_225(uParam0, Global_2563626 - 0.5f);
}

void func_224(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_225(auto uParam0, float fParam1)
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

auto func_226(auto uParam0)
{
	return *uParam0.f_72;
}

int func_227(auto uParam0, int iParam1)
{
	return func_228(uParam0, iParam1) != -1;
}

int func_228(auto uParam0, int iParam1)
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

int func_229(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_230(int iParam0)
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

int func_231(int iParam0)
{
	return Global_35711 == iParam0;
}

auto func_232(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return func_233(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
}

auto func_233(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_234(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_234(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_268(player_id()) || func_267(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_266(sParam2))
	{
	}
	if (func_265())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_263(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_262(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_260(0, &iVar1);
					break;
				
				case 3:
					func_260(1, &iVar1);
					break;
				
				case 1:
					func_258(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_255(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_244(func_254(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_255(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_239(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_235(func_237(player_id()) + iVar1);
			}
			else
			{
				func_235(func_237(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_235(int iParam0)
{
	if (func_265())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_236(joaat("mpply_globalxp"), iParam0);
	}
}

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_237(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_238(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_238(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_239(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_116(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_242(func_243(&Var0));
			if (iVar13 == 0)
			{
				func_241(&Global_1347641, iParam0);
				func_240(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_241(&Global_1347642, iParam0);
				func_240(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_241(&Global_1347643, iParam0);
				func_240(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_241(&Global_1347644, iParam0);
				func_240(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_241(&Global_1347645, iParam0);
				func_240(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_241(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_242(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_243(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	if (func_265())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_253(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_253(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_252(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_250(iParam0, 1);
		}
		func_249(632, iParam0, -1, 1);
		func_248(633, func_250(iParam0, 1), -1, 1);
		Global_1347756[func_253(-1)] = iParam0;
		func_245(7, 0);
	}
}

void func_245(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_247(iParam0, iParam1))
	{
		uVar0 = func_246();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_246()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_247(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_253(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_249(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_253(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_253(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_253(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_253(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_253(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_253(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_253(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_253(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_253(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_253(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_253(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_253(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_253(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_253(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_253(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_253(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_253(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_253(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_253(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_253(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_253(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_253(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_253(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_253(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_253(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_253(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_253(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_253(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_253(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_253(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_253(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_253(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_253(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_253(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_253(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_251(iParam0, 0);
}

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_252(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_171();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_254(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_253(-1)];
			}
			else if (func_252(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_253(-1)];
	}
	return 0;
}

void func_255(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_257(iParam0, func_253(iParam2), 0);
	iVar0 += iParam1;
	if (!func_256(iParam0))
	{
		func_248(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_249(iParam0, iVar0, iParam2, 1);
	}
}

bool func_256(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

int func_257(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_253(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_118(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_117(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_259(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_259(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_259(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_117(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_261(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_117(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_259(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_259(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_261(int iParam0, int iParam1)
{
	return vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

auto func_262(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_259(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_263(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_254(player_id()))
		{
			iParam0 = -func_254(player_id());
		}
	}
	if (func_264(8000, 0, 0) > 0)
	{
		if (func_264(8000, 0, 0) < iParam0 + func_254(player_id()))
		{
			iParam0 = func_264(8000, 0, 0) - func_254(player_id());
		}
	}
	return iParam0;
}

auto func_264(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_265()
{
	return true;
}

bool func_266(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_267(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_268(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char[16] cVar0;
	char[16] cVar4;
	int iVar8;
	auto uVar9;
	
	StringCopy(&cVar0, func_280(iParam1), 16);
	StringCopy(&cVar4, func_279(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar8 = 1287308202;
			break;
		
		case 1:
			iVar8 = 691372038;
			break;
		
		case 2:
			iVar8 = 1480707108;
			break;
		
		case 3:
			iVar8 = 1512499951;
			break;
		
		case 4:
			iVar8 = 562283735;
			break;
		
		case 5:
			iVar8 = -154732333;
			break;
		
		case 6:
			iVar8 = -1362660491;
			break;
		
		case 7:
			iVar8 = 645708827;
			break;
		
		case 8:
			iVar8 = 767907967;
			break;
		
		case 9:
			iVar8 = -1970151306;
			break;
		
		case 10:
			iVar8 = 718859568;
			break;
		
		case 11:
			iVar8 = -1955564771;
			break;
		
		case 12:
			iVar8 = 892388724;
			break;
	}
	if (func_41())
	{
		func_270(iVar8, iParam0, &uVar9, iParam3, iParam3, 0);
		Global_2558146[uVar9 /*73*/].f_8.f_43 = {cVar0};
		Global_2558146[uVar9 /*73*/].f_8.f_47 = {cVar4};
	}
	else
	{
		network_refund_cash(iParam0, &cVar0, &cVar4, iParam3);
	}
}

void func_270(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_41())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_271(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_271(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_271(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_41())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_171()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_278(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_277(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_272(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_273(iParam0);
	}
}

void func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_41())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_276(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_274(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_274(auto uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_275(uParam0.f_8.f_3);
	func_275(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_275(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_276(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_277(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_278(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_41())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		default:
	}
	return "DEFAULT";
}

void func_281(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = iParam0 * iParam1;
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = 100f - fParam3;
		iVar1 = floor(IntToFloat(iVar0) * fVar2 / 100f);
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1587523[player_id() /*444*/].f_195.f_4 = iVar1;
	Global_1587523[player_id() /*444*/].f_195.f_3 += iVar1;
	if (iParam2 == 1)
	{
		func_282(iVar1, 0);
	}
}

void func_282(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	iParam0 = iParam0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_285(iParam0) >= 0)
	{
		iVar0 = func_285(iParam0);
	}
	else
	{
		iVar0 = func_284(iParam0);
	}
	return iVar0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (get_player_wanted_level(player_id()) == 1)
			{
				return 200;
			}
			else if (get_player_wanted_level(player_id()) == 2)
			{
				return 400;
			}
			else if (get_player_wanted_level(player_id()) == 3)
			{
				return 600;
			}
			else if (get_player_wanted_level(player_id()) == 4)
			{
				return 800;
			}
			else if (get_player_wanted_level(player_id()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5049;
			break;
		
		case 10:
			return Global_262145.f_4111;
			break;
		
		case 11:
			return Global_262145.f_4112;
			break;
		
		case 8:
			return Global_262145.f_4109;
			break;
		
		case 0:
			return Global_262145.f_4095;
			break;
		
		case 9:
			return Global_262145.f_4110;
			break;
		
		case 13:
			return Global_262145.f_4114;
			break;
		
		case 12:
			return Global_262145.f_4113;
			break;
		
		case 2:
			return Global_262145.f_4105;
			break;
		
		case 14:
			return Global_262145.f_4115;
			break;
		
		case 20:
			if (get_player_wanted_level(player_id()) == 1)
			{
				return Global_262145.f_5056;
			}
			else if (get_player_wanted_level(player_id()) == 2)
			{
				return Global_262145.f_5057;
			}
			else if (get_player_wanted_level(player_id()) == 3)
			{
				return Global_262145.f_5058;
			}
			else if (get_player_wanted_level(player_id()) == 4)
			{
				return Global_262145.f_5059;
			}
			else if (get_player_wanted_level(player_id()) == 5)
			{
				return Global_262145.f_5060;
			}
			break;
		
		case 6:
			return Global_262145.f_4108;
			break;
		
		case 22:
			return Global_262145.f_4121;
			break;
		
		case 23:
			return Global_262145.f_4122;
			break;
		
		case 24:
			return Global_262145.f_4123;
			break;
		
		case 25:
			return Global_262145.f_4124;
			break;
		
		case 26:
			return Global_262145.f_4125;
			break;
		
		case 35:
			return Global_262145.f_5625;
			break;
		
		case 15:
			return Global_262145.f_5050;
			break;
		
		case 17:
			return Global_262145.f_5050;
			break;
		
		case 18:
			return Global_262145.f_5050;
			break;
		
		case 19:
			return Global_262145.f_5050;
			break;
		
		case 21:
			return Global_262145.f_5050;
			break;
		
		case 36:
			return Global_262145.f_6090;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_10811;
			break;
		
		case 41:
			return Global_262145.f_10812;
			break;
		
		case 42:
			return Global_262145.f_10813;
			break;
		
		case 43:
			return Global_262145.f_12809;
			break;
		
		case 44:
			return Global_262145.f_12811;
			break;
	}
	return 0;
}

bool func_286()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	switch (iLocal_307)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_287(sVar0, sVar1, iVar2))
	{
		return true;
	}
	return false;
}

bool func_287(char* sParam0, char* sParam1, int iParam2)
{
	if (!are_strings_equal(sParam0, "NULL"))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_306, false))
		{
			func_384(&uLocal_326, 3, 0, sParam1, 0, 1);
			if (func_289(&uLocal_326, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				GAMEPLAY::SET_BIT(&iLocal_306, false);
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(iLocal_306, true))
		{
			if (func_288(0))
			{
				GAMEPLAY::SET_BIT(&iLocal_306, true);
			}
		}
		else if (!func_288(0))
		{
			iLocal_306 = false;
			return true;
		}
	}
	return false;
}

bool func_288(int iParam0)
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

int func_289(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_382())
	{
		return 0;
	}
	if (func_381())
	{
		return 0;
	}
	sVar0 = 0;
	iVar1 = false;
	iVar2 = -99;
	return func_290(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, iVar1, iVar2, sVar0, sVar0, -1);
}

int func_290(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_string_null_or_empty(sParam2))
	{
		return 0;
	}
	if (_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam3))
	{
		return 0;
	}
	if (_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = get_hash_key(get_this_script_name());
	iVar1 = func_380(sParam2, sParam3);
	iVar2 = 0;
	if (!is_string_null_or_empty(sParam7))
	{
		iVar2 = get_hash_key(sParam7);
	}
	if (func_379(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_374(iParam6))
	{
		return 0;
	}
	if (func_371(iVar0, iVar1, iVar2))
	{
		if (func_370())
		{
			return 0;
		}
		func_369();
		return func_297(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, sParam10, sParam11);
	}
	if (!func_296(iParam4))
	{
		return 0;
	}
	func_291(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_291(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1332285.f_40.f_1 = iParam0;
	Global_1332285.f_40.f_2 = iParam1;
	Global_1332285.f_40.f_3 = iParam2;
	StringCopy(&(Global_1332285.f_40.f_4), sParam3, 16);
	Global_1332285.f_40.f_8 = iParam4;
	Global_1332285.f_40.f_9 = iParam5;
	Global_1332285.f_40.f_14 = iParam6;
	func_292(iParam4);
	func_369();
	Global_1332285.f_40.f_13 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_292(int iParam0)
{
	if (func_295(iParam0))
	{
		func_294();
		return;
	}
	func_293();
}

void func_293()
{
	Global_1332285.f_40.f_10 = 0;
}

void func_294()
{
	Global_1332285.f_40.f_10 = 1;
}

bool func_295(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
		
		default:
	}
	return false;
}

int func_296(int iParam0)
{
	return iParam0 > Global_1332285.f_40.f_8;
}

int func_297(auto uParam0, int iParam1, auto uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<4> Var0;
	
	func_368();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_365(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_362(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_365(uParam0, sParam3, sParam4);
		}
		return func_345(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_344(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_334(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_333(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_298(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

bool func_298(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	func_332();
	iVar0 = true;
	if (func_300(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8))
	{
		func_299(120000);
		return true;
	}
	return false;
}

void func_299(int iParam0)
{
	Global_1332285.f_40.f_11 = get_time_offset(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1332285.f_40.f_12 = 1;
}

bool func_300(int iParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_326(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1332285.f_40.f_13))
			{
				return false;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_325(sParam5, iParam6, &iVar3);
	uVar5 = func_323(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	iVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (iParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	iVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		iVar12 = func_322(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, iVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		iVar12 = func_304(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, iVar7, iVar8, 0);
	}
	if (!iVar12)
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, false))
	{
		func_303();
	}
	func_332();
	func_302();
	func_301();
	return true;
}

void func_301()
{
	Global_1332285.f_57 = 0;
	Global_1332285.f_57.f_1 = 0;
}

void func_302()
{
	Global_1332285.f_40 = 3;
}

void func_303()
{
	GAMEPLAY::SET_BIT(&Global_2283, 8);
}

bool func_304(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_305(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			GAMEPLAY::SET_BIT(&Global_2563397, false);
		}
		return true;
	}
	return false;
}

bool func_305(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_316();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_2563382 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("appemail")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("appmpemail")) > 0)
		{
			return false;
		}
	}
	if (func_315() == 0)
	{
		func_313();
		return false;
	}
	func_312(Global_2563381);
	StringCopy(&(Global_2562132[Global_2563381 /*104*/]), sParam1, 64);
	Global_2562132[Global_2563381 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2562132[Global_2563381 /*104*/].f_24 = iParam2;
	}
	Global_2562132[Global_2563381 /*104*/].f_25 = iParam7;
	Global_2562132[Global_2563381 /*104*/].f_26 = uParam8;
	Global_2562132[Global_2563381 /*104*/].f_29 = uParam9;
	Global_2562132[Global_2563381 /*104*/].f_30 = uParam12;
	Global_2562132[Global_2563381 /*104*/].f_31 = uParam11;
	Global_2562132[Global_2563381 /*104*/].f_28 = 0;
	Global_2562132[Global_2563381 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_33), sParam4, 64);
	Global_2562132[Global_2563381 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_50), sParam5, 64);
	Global_2562132[Global_2563381 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_83), sParam15, 64);
	func_316();
	switch (iParam16)
	{
		case 3:
			Global_2562132[Global_2563381 /*104*/].f_99[Global_14413] = 1;
			break;
		
		case 0:
			Global_2562132[Global_2563381 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2562132[Global_2563381 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2562132[Global_2563381 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14413)
		{
			case 0:
				func_311(0);
				break;
			
			case 1:
				func_311(1);
				break;
			
			case 2:
				func_311(2);
				break;
			
			case 3:
				func_311(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2563382 = 1;
				break;
			
			case 0:
				Global_2563382 = 1;
				break;
			
			case 2:
				Global_2563382 = 1;
				break;
			
			case 1:
				Global_2563382 = 1;
				break;
			}
	}
	Global_16781[Global_2563381] = 0;
	if (iParam10)
	{
		func_316();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_310())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_309(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_306(1);
			func_309(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_306(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = false;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_231(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar7);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_308(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_307(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_307(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_308(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_308(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_308(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_308(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_308(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_308(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_309(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	_pop_scaleform_movie_function_void();
}

auto func_310()
{
	return Global_1315913;
}

void func_311(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_312(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_2562132[uParam0 /*104*/].f_18 = iVar0;
	Global_2562132[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_2562132[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_2562132[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_2562132[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2562132[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2563381 = 11;
	Global_2562132[Global_2563381 /*104*/].f_18 = -1;
	Global_2562132[Global_2563381 /*104*/].f_18.f_1 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_2 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_3 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_314(Global_2562132[iVar2 /*104*/].f_18, Global_2562132[Global_2563381 /*104*/].f_18))
		{
			Global_2563381 = iVar2;
		}
		iVar2++;
	}
	Global_2562132[Global_2563381 /*104*/].f_24 = 1;
}

bool func_314(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_315()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2562132[iVar2 /*104*/].f_24 == 0)
		{
			Global_2563381 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2563381 = 11;
	Global_2562132[Global_2563381 /*104*/].f_18 = -1;
	Global_2562132[Global_2563381 /*104*/].f_18.f_1 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_2 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_3 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2562132[iVar2 /*104*/].f_24 == 0 || Global_2562132[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_314(Global_2562132[iVar2 /*104*/].f_18, Global_2562132[Global_2563381 /*104*/].f_18))
			{
				Global_2563381 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2563381 == 11)
	{
		return false;
	}
	Global_2562132[Global_2563381 /*104*/].f_99[0] = 0;
	Global_2562132[Global_2563381 /*104*/].f_99[1] = 0;
	Global_2562132[Global_2563381 /*104*/].f_99[2] = 0;
	return true;
}

void func_316()
{
	if (func_231(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_317();
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

auto func_317()
{
	func_318();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_318()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_321(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_320(PLAYER::PLAYER_PED_ID());
			if (func_319(iVar0) && (!func_231(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_319(Global_101154.f_1826.f_539.f_3549))
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

int func_319(int iParam0)
{
	return iParam0 < 3;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_321(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_321(int iParam0)
{
	if (func_319(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_322(int iParam0, char* sParam1, int iParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_305(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, iParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (iParam11 == 1)
		{
			Global_2990 = iParam10;
			GAMEPLAY::SET_BIT(&Global_2563397, false);
		}
		return true;
	}
	return false;
}

int func_323(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_324(2, iParam1);
	return iParam0;
}

void func_324(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = false;
	iVar1 = false;
	switch (iParam0)
	{
		case 1:
			iVar0 = true;
			break;
		
		case 2:
			iVar1 = true;
			break;
		
		default:
			return;
	}
	if (iVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (iVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_325(char* sParam0, int iParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return sLocal_20;
	}
	if (are_strings_equal(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_324(1, iParam2);
	if (iParam1)
	{
		return sParam0;
	}
	return _get_label_text(sParam0);
}

int func_326(int iParam0)
{
	int iVar0;
	
	iVar0 = func_329(iParam0);
	if (iVar0 == -1)
	{
		func_327(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_327(int iParam0, int iParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_329(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_328(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_329(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_330(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_330(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_331(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_331(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_13();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_332()
{
	Global_1332285.f_40.f_9 = 4;
}

int func_333(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	func_332();
	iVar0 = false;
	return func_300(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8);
}

int func_334(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	iVar0 = false;
	return func_335(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8);
}

bool func_335(int iParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_326(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1332285.f_40.f_13))
			{
				return false;
			}
		}
		Global_16773 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_325(sParam5, iParam6, &iVar3);
	uVar5 = func_323(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	iVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (iParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	iVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		iVar12 = func_343(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, iVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		iVar12 = func_337(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, iVar7, iVar8, 0);
	}
	if (!iVar12)
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, false))
	{
		func_303();
	}
	func_336();
	func_302();
	func_301();
	return true;
}

void func_336()
{
	Global_1332285.f_40.f_9 = 3;
}

bool func_337(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_338(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_338(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_316();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_342() == 0)
	{
		func_340();
		return false;
	}
	func_339(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_311(0);
		func_311(2);
		func_311(1);
	}
	else
	{
		func_316();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_311(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_311(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_311(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_311(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_316();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_310())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_309(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_306(1);
			func_309(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_339(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_340()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_341(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_341(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_342()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_341(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

bool func_343(int iParam0, char* sParam1, int iParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 3;
	if (func_338(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, iParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (iParam11 == 1)
		{
			Global_2990 = iParam10;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			StringCopy(&Global_2971, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_344(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	func_336();
	iVar0 = true;
	if (func_335(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8))
	{
		func_299(120000);
		return true;
	}
	return false;
}

bool func_345(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
	}
	iVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 4))
	{
		iVar0 = func_361(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		iVar0 = func_351(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (iVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
		{
			func_350(1);
		}
		if (GAMEPLAY::IS_BIT_SET(iParam4, 5))
		{
			func_349(1);
		}
		func_348();
		func_302();
		func_347();
		func_346();
		return true;
	}
	return false;
}

void func_346()
{
	Global_2467484 = 0;
}

void func_347()
{
	Global_1332285.f_57 = 1;
	Global_1332285.f_57.f_1 = 0;
}

void func_348()
{
	Global_1332285.f_40.f_9 = 1;
}

void func_349(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2285, false);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2285, false);
	}
}

void func_350(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
	}
}

int func_351(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_360(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_352(sParam3, iParam4, iParam7);
}

bool func_352(char* sParam0, int iParam1, int iParam2)
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
					func_359();
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
		if (func_358(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_357();
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
				func_316();
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
				if (func_356())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
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
			if (func_355())
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
			func_354();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_353();
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
		func_359();
	}
	return false;
}

void func_353()
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

void func_354()
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

bool func_355()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_356()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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

void func_357()
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

int func_358(int iParam0, int iParam1)
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

void func_359()
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

void func_360(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_361(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_360(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_352(sParam3, iParam4, iParam7);
}

bool func_362(auto uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_364(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_363();
		func_348();
		func_302();
		func_347();
		func_346();
		return true;
	}
	return false;
}

void func_363()
{
	Global_16730 = 0;
}

int func_364(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	func_360(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 1;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 1;
	Global_15766 = 0;
	StringCopy(&Global_15860, sParam5, 24);
	Global_2621441 = 0;
	return func_352(sParam3, iParam4, iParam8);
}

bool func_365(auto uParam0, char* sParam1, char* sParam2)
{
	if (func_367(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_366();
		func_302();
		func_347();
		return true;
	}
	return false;
}

void func_366()
{
	Global_1332285.f_40.f_9 = 2;
}

int func_367(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_352(sParam2, iParam3, 0);
}

void func_368()
{
	Global_1332285.f_55 = Global_1332285.f_40.f_1;
	Global_1332285.f_55.f_1 = Global_1332285.f_40.f_10;
}

void func_369()
{
	Global_1332285.f_40 = 1;
}

int func_370()
{
	return Global_1332285.f_40 == 1;
}

bool func_371(int iParam0, int iParam1, int iParam2)
{
	if (!func_372(iParam0))
	{
		return false;
	}
	if (Global_1332285.f_40.f_2 != iParam1)
	{
		return false;
	}
	if (iParam2 != 0)
	{
		if (Global_1332285.f_40.f_3 != iParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_372(int iParam0)
{
	if (!func_373())
	{
		return false;
	}
	if (!Global_1332285.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_373()
{
	if (Global_1332285.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_374(int iParam0)
{
	if (func_378())
	{
		return false;
	}
	if (func_377())
	{
		return false;
	}
	if (func_288(0))
	{
		return false;
	}
	if (Global_1312466.f_18 != 0)
	{
		return false;
	}
	if (Global_1715399 || func_376())
	{
		return false;
	}
	if (!GAMEPLAY::IS_BIT_SET(iParam0, 6))
	{
		if (func_375())
		{
			return false;
		}
	}
	return true;
}

int func_375()
{
	return is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1347375);
}

bool func_376()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_377()
{
	return Global_1332285.f_40 == 3;
}

int func_378()
{
	return func_355();
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	if (!func_377())
	{
		return 0;
	}
	return func_371(iParam0, iParam1, iParam2);
}

int func_380(char* sParam0, char* sParam1)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return get_hash_key(&cVar0);
}

auto func_381()
{
	return Global_2465472.f_1;
}

int func_382()
{
	if (Global_1332473.f_2)
	{
		return 1;
	}
	return func_383();
}

int func_383()
{
	return func_378();
}

void func_384(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
			break;
	}
	return false;
}

bool func_386(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_387(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_388(uParam0, 0, 0);
		}
	}
}

void func_388(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

void func_389()
{
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_88.f_10[iLocal_317 /*7*/]) && !is_entity_dead(net_to_ped(Local_88.f_10[iLocal_317 /*7*/]), 0))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_5(get_entity_coords(net_to_ped(Local_88.f_10[iLocal_317 /*7*/]), 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 50625f))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 4))
				{
					GAMEPLAY::SET_BIT(&iLocal_301, 4);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 5))
			{
				if (Local_88.f_42 != -1)
				{
					if (iLocal_317 == Local_88.f_42)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 5))
						{
							GAMEPLAY::SET_BIT(&iLocal_301, 5);
						}
					}
				}
			}
		}
	}
	func_390(iLocal_317);
	iLocal_317++;
	if (iLocal_317 >= func_385(iLocal_307))
	{
		if ((!GAMEPLAY::IS_BIT_SET(iLocal_301, 4) && GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8)) || GAMEPLAY::IS_BIT_SET(iLocal_301, 5))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_140[network_player_id_to_int() /*5*/].f_1, true))
			{
				GAMEPLAY::SET_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), true);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_140[network_player_id_to_int() /*5*/].f_1, true))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), true);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_301, 4);
		GAMEPLAY::CLEAR_BIT(&iLocal_301, 5);
		iLocal_317 = 0;
	}
}

void func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = false;
	vVar3 = {0f, 0f, 0f};
	iVar6 = false;
	if (network_does_network_id_exist(Local_88.f_10[iParam0 /*7*/]))
	{
		iVar0 = net_to_ped(Local_88.f_10[iParam0 /*7*/]);
		if (iLocal_307 == 0)
		{
			if (player_id() == iLocal_309)
			{
				if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_88.f_10[iParam0 /*7*/].f_5 == 2)
					{
						iVar6 = true;
					}
				}
			}
		}
		if (player_id() == iLocal_308)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, true))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_302[iParam0], false))
				{
					GAMEPLAY::SET_BIT(&Global_1572922, false);
					GAMEPLAY::SET_BIT(&(iLocal_302[iParam0]), false);
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_302[iParam0], true))
					{
						iVar6 = true;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(iLocal_302[iParam0], true))
				{
					GAMEPLAY::CLEAR_BIT(&(iLocal_302[iParam0]), true);
				}
			}
		}
		if (iVar6)
		{
			if (network_does_network_id_exist(Local_88.f_10[iParam0 /*7*/]))
			{
				if (!network_has_control_of_network_id(Local_88.f_10[iParam0 /*7*/]))
				{
					network_request_control_of_network_id(Local_88.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (network_has_control_of_network_id(Local_88.f_10[iParam0 /*7*/]))
		{
			if (player_id() == iLocal_308)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 9) && !GAMEPLAY::IS_BIT_SET(iLocal_302[iParam0], true))
				{
					if (_0x0EDE326D47CD0F3E(iVar0, player_id()))
					{
						switch (Local_88.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_413(iVar0, 3);
								break;
						}
						GAMEPLAY::SET_BIT(&(iLocal_302[iParam0]), true);
					}
				}
			}
			if (!is_entity_dead(iVar0, 0) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_88.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						set_ped_reset_flag(iVar0, 187, true);
						if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 3))
								{
									set_ped_desired_move_blend_ratio(iVar0, 3f);
									set_blocking_of_non_temporary_events(iVar0, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (player_id() == iLocal_309 && func_5(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1), 25f))
						{
							GAMEPLAY::SET_BIT(&(Global_2460486.f_4427), false);
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4427), false);
						}
						if (!is_ped_fleeing(iVar0))
						{
							if (!is_ped_responding_to_event(iVar0, 29))
							{
								if (func_6(iLocal_309, 1, 1))
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 13))
									{
										if (func_412(iLocal_309) && !is_ped_hanging_on_to_vehicle(get_player_ped(iLocal_309)))
										{
											if (!func_411(iVar0, -1794415470))
											{
												if (func_410(iVar0))
												{
													iVar1 = get_vehicle_ped_is_in(get_player_ped(iLocal_309), 0);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (is_vehicle_driveable(iVar1, 0))
														{
														}
														if (!_0xF7F203E31F96F6A1(iVar1, func_409(get_player_ped(iLocal_309), 0)))
														{
															task_enter_vehicle(iVar0, iVar1, -1, func_408(get_player_ped(iLocal_309), iVar1), func_407(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(is_ped_jacking(iVar0) && get_jack_target(iVar0) == get_player_ped(iLocal_309)) && !is_ped_in_any_vehicle(iVar0, 1))
										{
											if (func_411(iVar0, -1794415470))
											{
												clear_ped_tasks(iVar0);
											}
											if (!func_411(iVar0, 1227113341))
											{
												if (func_410(iVar0))
												{
													task_go_to_entity(iVar0, get_player_ped(iLocal_309), -1, 0f, func_407(iParam0), 2f, 0);
												}
											}
											else
											{
												set_ped_reset_flag(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (player_id() == iLocal_309 && func_5(get_entity_coords(iVar0, 1), get_entity_coords(get_player_ped(iLocal_309), 1), 25f))
						{
							GAMEPLAY::SET_BIT(&(Global_2460486.f_4427), false);
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4427), false);
						}
						if (player_id() == iLocal_309)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_140[network_player_id_to_int() /*5*/].f_1, false))
							{
								if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
								{
									if ((func_4(get_entity_coords(iVar0, 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) && (is_ped_on_foot(PLAYER::PLAYER_PED_ID()) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID()))) || (is_ped_jacking(iVar0) && get_jack_target(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = func_405(player_id());
										fVar7 = to_float(Global_262145.f_5054) / 100f;
										iVar2 = round(to_float(iVar2) * fVar7);
										iVar8 = func_404(player_id());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > iVar8 * Global_262145.f_5055)
										{
											iVar2 = iVar8 * Global_262145.f_5055;
										}
										if (iVar2 > 0)
										{
											GAMEPLAY::SET_BIT(&iLocal_301, 16);
										}
										set_high_fall_task(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(is_ped_jacking(iVar0) && get_jack_target(iVar0) == get_player_ped(iLocal_309)))
										{
											vVar3 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - get_entity_coords(iVar0, 1)};
											vVar3 = {func_403(vVar3)};
											vVar3.x *= 3f;
											vVar3.y *= 3f;
											vVar3.z *= 3f;
											apply_force_to_entity(PLAYER::PLAYER_PED_ID(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										set_ped_flee_attributes(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((is_ped_in_any_vehicle(iVar0, 1) || is_ped_jacking(iVar0)) && func_401(iVar0)) && func_409(iVar0, 0) == -1)
										{
											set_ped_flee_attributes(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											clear_ped_tasks(iVar0);
											task_smart_flee_ped(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 1, 0);
										}
										Local_140[network_player_id_to_int() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_140[network_player_id_to_int() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_140[network_player_id_to_int() /*5*/].f_2 = -1;
										}
										PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1574237);
										GAMEPLAY::SET_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), false);
										GAMEPLAY::SET_BIT(&(Global_2460486.f_4427), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (get_ped_reset_flag(iVar0, 187))
						{
							set_ped_reset_flag(iVar0, 187, false);
						}
						if (Local_88.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[iParam0 /*7*/].f_2, 4))
							{
								set_blocking_of_non_temporary_events(iVar0, false);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(is_ped_jacking(iVar0) && get_jack_target(iVar0) == get_player_ped(iLocal_309)))
						{
							if (!is_ped_fleeing(iVar0))
							{
								if (func_410(iVar0))
								{
									if ((is_ped_in_any_vehicle(iVar0, 1) || is_ped_jacking(iVar0)) && !GAMEPLAY::IS_BIT_SET(Local_88.f_2, 10))
									{
										if (!func_411(iVar0, -258271821) && !func_411(iVar0, -1273030092))
										{
											if (is_ped_sitting_in_any_vehicle(iVar0))
											{
												iVar9 = get_vehicle_ped_is_in(iVar0, 1);
												iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
												if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (is_this_model_a_heli(iVar10))
												{
													task_heli_mission(iVar0, iVar9, false, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (is_this_model_a_plane(iVar10))
												{
													task_plane_mission(iVar0, iVar9, false, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar9) == joaat("taxi"))
												{
													set_ped_flee_attributes(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													task_smart_flee_ped(iVar0, get_player_ped(iLocal_309), 10000f, -1, 1, 0);
												}
												else
												{
													task_vehicle_drive_wander(iVar0, get_vehicle_ped_is_in(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_411(iVar0, 1805844857))
									{
										if (func_6(iLocal_309, 1, 1))
										{
											task_smart_flee_ped(iVar0, get_player_ped(iLocal_309), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_399(Local_88.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 13))
				{
					clear_ped_tasks(net_to_ped(Local_88.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_88.f_10[iParam0 /*7*/]), 1, false);
				}
				func_391(iVar0);
			}
		}
	}
}

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_BIT_SET(iLocal_301, 16))
	{
		iVar0 = Local_140[network_player_id_to_int() /*5*/].f_3;
		iVar1 = func_392(iVar0);
		if (iVar1 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 15);
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 16);
			if (!func_41())
			{
				_0x995A65F15F581359(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_6435)
			{
				iVar0 = Global_262145.f_6435;
			}
			set_ped_money(iParam0, iVar0);
			GAMEPLAY::SET_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 15);
			GAMEPLAY::CLEAR_BIT(&iLocal_301, 16);
			GAMEPLAY::SET_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_392(int iParam0)
{
	if (func_41())
	{
		if (func_395(iParam0))
		{
			if (func_394(iLocal_510) == 2)
			{
				_0x9507D4271988E1AE(func_393(iLocal_510));
				_0x995A65F15F581359(iParam0, 0, 0);
				func_273(iLocal_510);
				return 1;
			}
			else
			{
				func_273(iLocal_510);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_393(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/];
	}
	return -1;
}

int func_394(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_2;
	}
	return 0;
}

bool func_395(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 15))
	{
		func_271(&iLocal_510, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_398(&uLocal_511, 0, 0);
		GAMEPLAY::SET_BIT(&iLocal_301, 15);
	}
	else if (func_397(iLocal_510) || func_396(&uLocal_511, 10000, 0))
	{
		return true;
	}
	return false;
}

bool func_396(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_388(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_397(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_2 != 1;
	}
	return false;
}

void func_398(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	*uParam0.f_1 = 1;
}

void func_399(int iParam0, int iParam1)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (network_has_control_of_network_id(iParam0))
		{
			if (!func_400(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 13))
				{
					clear_ped_tasks(net_to_ped(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(iParam0), 1, false);
				}
				else
				{
					if (iParam1)
					{
						clear_ped_tasks(net_to_ped(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(iParam0), 1, true);
				}
			}
		}
		func_200(&iParam0);
	}
}

int func_400(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return PED::IS_PED_INJURED(net_to_ped(iParam0));
	}
	return true;
}

bool func_401(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 1);
	}
	if (is_ped_jacking(iParam0))
	{
		iVar0 = set_exclusive_phone_relationships(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_412(iLocal_309))
		{
			iVar0 = get_vehicle_ped_is_in(get_player_ped(iLocal_309), 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_402(iVar0))
		{
			return false;
		}
		if (is_ped_in_any_boat(iParam0) || is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!is_entity_in_water(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_402(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_entity_dead(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_403(Vector3 vParam0)
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

auto func_404(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_195.f_6;
}

auto func_405(int iParam0)
{
	auto uVar0;
	
	uVar0 = func_406(iParam0);
	return uVar0;
}

int func_406(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == player_id())
		{
			return _0xA40F9C2623F6A8B5(-1);
		}
		else if (func_252(iParam0))
		{
			return Global_1587523[iParam0 /*444*/].f_195.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_407(auto uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_88.f_10[uParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_408(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!is_entity_dead(iVar0, 0))
				{
					iVar1 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = iVar2 - 1;
						if (!is_vehicle_seat_free(iVar0, iVar3))
						{
							if (get_ped_in_vehicle_seat(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_410(int iParam0)
{
	if ((!PED::IS_PED_INJURED(iParam0) && !is_ped_being_stunned(iParam0, 0)) && !is_ped_ragdoll(iParam0))
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0, int iParam1)
{
	if (get_script_task_status(iParam0, iParam1) == 1 || get_script_task_status(iParam0, iParam1) == 0)
	{
		return true;
	}
	return false;
}

bool func_412(int iParam0)
{
	if (_0x690A61A6D13583F6(iParam0))
	{
		return false;
	}
	if (is_ped_sitting_in_any_vehicle(get_player_ped(iParam0)))
	{
		return true;
	}
	return false;
}

void func_413(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (decor_exist_on(iParam0, "AttributeDamage"))
	{
		iVar0 = decor_get_int(iParam0, "AttributeDamage");
	}
	GAMEPLAY::SET_BIT(&iVar0, iParam1);
	decor_set_int(iParam0, "AttributeDamage", iVar0);
}

void func_414()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GAMEPLAY::IS_BIT_SET(Local_88.f_2, 6);
	iVar1 = GAMEPLAY::IS_BIT_SET(Local_88.f_2, 10);
	func_419();
	if (iLocal_307 != 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 12))
		{
			func_416();
		}
	}
	if (does_blip_exist(iLocal_318))
	{
		func_415(&iLocal_318);
	}
	iVar3 = 0;
	while (iVar3 < func_385(iLocal_307))
	{
		iLocal_302[iVar3] = 0;
		iVar3++;
	}
	if (network_is_host_of_this_script())
	{
		Local_88.f_42 = -1;
		Local_88.f_5 = iLocal_314;
		Local_88.f_6 = iLocal_314;
		Local_88.f_7 = iLocal_314;
		Local_88.f_1 = 0;
		Local_88.f_4 = 0;
		Local_88.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_385(iLocal_307))
		{
			iVar2 = GAMEPLAY::IS_BIT_SET(Local_88.f_10[iVar3 /*7*/].f_2, 6);
			Local_88.f_10[iVar3 /*7*/].f_2 = 0;
			Local_88.f_10[iVar3 /*7*/].f_6 = -1;
			if (iVar2)
			{
				GAMEPLAY::SET_BIT(&(Local_88.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_140[network_player_id_to_int() /*5*/].f_1 = 0;
	Local_140[network_player_id_to_int() /*5*/].f_2 = -1;
	iLocal_301 = false;
	if (iVar0)
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_2), 6);
	}
	if (iVar1)
	{
		GAMEPLAY::SET_BIT(&(Local_88.f_2), 11);
		GAMEPLAY::SET_BIT(&iLocal_301, 8);
	}
	GAMEPLAY::SET_BIT(&iLocal_301, 4);
	GAMEPLAY::SET_BIT(&iLocal_301, 11);
}

void func_415(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		iVar0 = true;
	}
	if (does_blip_exist(*iParam0.f_1))
	{
		remove_blip(iParam0.f_1);
		iVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_7))
	{
		if (!PED::IS_PED_INJURED(*iParam0.f_7))
		{
			if (does_ped_have_ai_blip(*iParam0.f_7))
			{
				_0xD30C50DF888D58B5(*iParam0.f_7, 0);
			}
		}
		iVar0 = true;
	}
	if (iVar0)
	{
		*iParam0 = {Var1};
	}
}

void func_416()
{
	switch (iLocal_307)
	{
		case 0:
			func_418(&(Global_1574240[3]));
			break;
		
		case 1:
			func_417();
			break;
	}
}

void func_417()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574198[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574198[iVar0]);
			iVar0++;
		}
	}
}

void func_418(auto uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574198[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574198[iVar0]);
			iVar0++;
		}
	}
}

void func_419()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_385(iLocal_307))
	{
		iVar1 = false;
		if (iLocal_307 == 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, true))
			{
				iVar1 = true;
			}
		}
		func_399(Local_88.f_10[iVar0 /*7*/], iVar1);
		iVar0++;
	}
}

void func_420()
{
	func_421();
	if (iLocal_307 != 1)
	{
		func_389();
	}
}

void func_421()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_385(iLocal_307))
	{
		if (network_does_network_id_exist(Local_88.f_10[iVar0 /*7*/]))
		{
			if (network_has_control_of_network_id(Local_88.f_10[iVar0 /*7*/]))
			{
				iVar1 = net_to_ped(Local_88.f_10[iVar0 /*7*/]);
				if (!is_entity_dead(iVar1, 0))
				{
					set_ped_reset_flag(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2460486.f_1610)
	{
	}
	if (iLocal_307 == 1)
	{
		if (player_id() == iLocal_309)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
			{
				if (!is_incident_valid(uLocal_491))
				{
					if (func_6(iLocal_309, 1, 1))
					{
						create_incident_with_entity(14, get_player_ped(iLocal_309), 4, 0f, &uLocal_491);
					}
				}
				if (Global_2460486.f_1610)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_140[network_player_id_to_int() /*5*/].f_1, 3))
					{
						GAMEPLAY::SET_BIT(&(Local_140[network_player_id_to_int() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_307 == 0)
	{
		if (Local_88.f_42 != -1)
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_88.f_10[Local_88.f_42 /*7*/]))
			{
				if (!is_entity_dead(net_to_ped(Local_88.f_10[Local_88.f_42 /*7*/]), 0) && !func_425(net_to_ped(Local_88.f_10[Local_88.f_42 /*7*/])))
				{
					if (Local_88.f_10[Local_88.f_42 /*7*/].f_5 == 3)
					{
						func_422(Local_88.f_10[Local_88.f_42 /*7*/], &iLocal_318, -1082130432, 0, 1, 0, 0, -1);
						if (does_blip_exist(iLocal_318))
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 6))
							{
								set_blip_name_from_text_file(iLocal_318, "FM_MGR_BLP");
								GAMEPLAY::SET_BIT(&iLocal_301, 6);
							}
						}
					}
				}
				else if (does_blip_exist(iLocal_318))
				{
					func_415(&iLocal_318);
				}
			}
			if (player_id() == iLocal_308)
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 14))
				{
					if (func_287("MPCT_mugsuc", "LAMAR", 19))
					{
						GAMEPLAY::SET_BIT(&iLocal_301, 14);
					}
				}
			}
		}
	}
}

void func_422(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (func_424())
		{
			Global_2428492 = player_id();
		}
		if (iParam3)
		{
			func_423(net_to_ped(iParam0), iParam1, 1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
		else
		{
			func_423(net_to_ped(iParam0), iParam1, -1, Global_2428492, iParam4, iParam5, fParam2, sParam6, iParam7);
		}
	}
	else if (does_blip_exist(*iParam1))
	{
		func_415(iParam1);
	}
}

bool func_423(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			if (iParam8 == -1)
			{
				_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			*uParam1.f_7 = iParam0;
			_0xE52B8E7F85D39A08(iParam0, iParam2);
			_0x97C65887D4B37FA9(iParam0, fParam6);
			if (does_blip_exist(*uParam1))
			{
				set_blip_priority(*uParam1, 7);
			}
		}
		_0x0C4BBF625CA98C4E(iParam0, iParam4);
		hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				GAMEPLAY::SET_BIT(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					GAMEPLAY::SET_BIT(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			GAMEPLAY::CLEAR_BIT(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

auto func_424()
{
	return Global_1315888;
}

bool func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 0);
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iVar0, "MPBitset"))
				{
					iVar1 = decor_get_int(iVar0, "MPBitset");
				}
				if (GAMEPLAY::IS_BIT_SET(iVar1, 12))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_426()
{
	return Local_88;
}

auto func_427(int iParam0)
{
	return Local_140[iParam0 /*5*/];
}

void func_428()
{
	if (player_id() == iLocal_309)
	{
		if (Global_25270)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_140[iLocal_316 /*5*/].f_1, 4))
			{
				GAMEPLAY::SET_BIT(&(Local_140[iLocal_316 /*5*/].f_1), 4);
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_140[iLocal_316 /*5*/].f_1), 4);
		}
	}
}

void func_429()
{
	int iVar0;
	
	iVar0 = false;
	if (player_id() == iLocal_308)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1572922, false))
		{
			GAMEPLAY::CLEAR_BIT(&Global_1572922, false);
			iVar0 = true;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_140[iLocal_308 /*5*/].f_1, 2))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 11))
			{
				GAMEPLAY::SET_BIT(&(Local_140[iLocal_308 /*5*/].f_1), 2);
				iVar0 = true;
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Local_88.f_1, 11))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_140[iLocal_308 /*5*/].f_1), 2);
		}
		if (iVar0)
		{
			Local_140[network_player_id_to_int() /*5*/].f_4 = func_433();
			func_430(Local_140[network_player_id_to_int() /*5*/].f_4);
		}
	}
	else if (Local_140[network_player_id_to_int() /*5*/].f_4 != Local_88.f_44)
	{
		Local_140[network_player_id_to_int() /*5*/].f_4 = Local_88.f_44;
		func_430(Local_140[network_player_id_to_int() /*5*/].f_4);
		iVar0 = true;
	}
}

void func_430(int iParam0)
{
	switch (iLocal_307)
	{
		case 0:
			func_432(&(Global_1574240[3]), iParam0);
			break;
		
		case 1:
			func_431(iParam0);
			break;
	}
}

void func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574198[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1574198[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574198[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574198[iVar0]);
		}
		iVar0++;
	}
}

void func_432(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam1, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574198[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1574198[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574198[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574198[iVar0]);
		}
		iVar0++;
	}
}

int func_433()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = false;
	iVar1 = false;
	while (iVar1 < 32)
	{
		if (iLocal_307 == 1 || iLocal_307 == 0)
		{
			if (iLocal_308 == int_to_playerindex(iVar1))
			{
				GAMEPLAY::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (player_id() == int_to_playerindex(iVar1))
		{
			GAMEPLAY::SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(int_to_playerindex(iVar1), 0, 1))
		{
			if (func_42(int_to_playerindex(iVar1)))
			{
				GAMEPLAY::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_434()
{
	switch (iLocal_307)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 11))
			{
				if (player_id() == iLocal_308)
				{
					if (func_6(iLocal_309, 1, 1))
					{
						func_436("GC_TCK_60", iLocal_309, 0, 0, 0, 1, 1, 0);
						GAMEPLAY::SET_BIT(&iLocal_301, 11);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 12))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8))
				{
					if (player_id() == iLocal_308)
					{
						if (func_6(iLocal_309, 1, 1))
						{
							func_436("GC_TCK_62", iLocal_309, 0, 0, 0, 1, 1, 0);
							GAMEPLAY::SET_BIT(&iLocal_301, 12);
						}
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 10))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 8))
				{
					if (player_id() == iLocal_308)
					{
						if (func_6(iLocal_309, 1, 1))
						{
							func_436("GC_TCK_65", iLocal_309, 0, 0, 0, 1, 1, 0);
							GAMEPLAY::SET_BIT(&iLocal_301, 8);
						}
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 13))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_88.f_2, 11))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, 8))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_88.f_2, 6))
						{
							if (player_id() == iLocal_308)
							{
								if (func_6(iLocal_309, 1, 1))
								{
									func_436("GC_TCK_63", iLocal_309, 0, 0, 0, 1, 1, 0);
									GAMEPLAY::SET_BIT(&iLocal_301, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 11))
			{
				if (player_id() == iLocal_308)
				{
					if (func_6(iLocal_309, 1, 1))
					{
						func_436("GC_TCK_70", iLocal_309, 0, 0, 0, 1, 1, 0);
						GAMEPLAY::SET_BIT(&iLocal_301, 11);
					}
				}
				else if (player_id() == iLocal_309)
				{
					if (func_6(iLocal_308, 1, 1))
					{
						func_436("GC_TCK_71", iLocal_308, 0, 0, 0, 1, 1, 0);
						GAMEPLAY::SET_BIT(&iLocal_301, 11);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 6))
					{
						if (player_id() == iLocal_308)
						{
							if (func_6(iLocal_309, 0, 1))
							{
								func_435(-1);
								func_436("GC_TCK_73", iLocal_309, 0, 0, 0, 1, 1, 0);
								GAMEPLAY::SET_BIT(&iLocal_301, 10);
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_301, 9))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_88.f_1, false))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_88.f_3, 7))
					{
						if (player_id() == iLocal_308)
						{
							if (func_6(iLocal_309, 0, 1))
							{
								func_436("GC_TCK_75", iLocal_309, 0, 0, 0, 1, 1, 0);
								GAMEPLAY::SET_BIT(&iLocal_301, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_435(int iParam0)
{
	if (Global_1573828)
	{
		if (Global_1573832 && Global_1587523[player_id() /*444*/] != 148)
		{
			if (Global_1573410.f_14 == int_to_playerindex(iParam0))
			{
				Global_1608880++;
			}
		}
		else
		{
			Global_1608880++;
		}
	}
}

int func_436(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = get_player_team(iParam1);
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam3)
	{
		if (!iParam2)
		{
			StringCopy(&Var2, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		if ((iVar1 != -1 && network_is_activity_session()) && iVar1 < 4)
		{
			if (Global_1617379.f_66777[iVar1] != -1)
			{
				_0x39BBF623FC803EAC(func_459(iVar1, iParam1, 0));
			}
			else
			{
				_0x39BBF623FC803EAC(func_444(iParam1, -2, 1, 0));
			}
		}
		else
		{
			_0x39BBF623FC803EAC(func_444(iParam1, -2, 1, 0));
		}
		add_text_component_substring_player_name(func_442(&Var2));
		if (!iParam4)
		{
			iVar0 = _draw_notification(0, 1);
		}
		else
		{
			Global_2459440 = {func_116(iParam1)};
			if (network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440))
			{
				iVar18 = 0;
				if (are_strings_equal(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2459370.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (iParam6)
				{
					if (iParam7)
					{
						Var2 = {func_441(&Var2)};
					}
					iVar0 = _0x137BC35589E34E1E(iVar19, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, &Var2, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = _0x97C9E4E7024A8F2C(iVar19, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = _draw_notification(0, 1);
			}
		}
		func_437(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_437(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_440() || !network_is_activity_session()) || !func_169(player_id(), 0))
	{
		return;
	}
	iVar0 = func_438(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_439(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_440()
{
	return is_dlc_present(-1762644250);
}

struct<16> func_441(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>", 64);
	return cVar0;
}

auto func_442(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_443(&cVar0);
}

auto func_443(char[4] cParam0)
{
	return cParam0;
}

int func_444(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_119(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_119(player_id()) || (func_458() && func_457()))
	{
		iVar0 = func_456();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_6(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_459(iParam1, iParam0, 0);
							}
							else
							{
								return func_451(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_451(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_459(iParam1, iParam0, 0);
				}
				else
				{
					return func_445(0, -1, 0);
				}
			}
			else
			{
				return func_445(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_459(iParam1, iParam0, 0);
		}
		else
		{
			return func_451(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_451(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_445(int iParam0, int iParam1, int iParam2)
{
	return func_446(player_id(), iParam0, iParam1, iParam2);
}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_118(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_450(1);
				}
				else
				{
					return func_450(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_447(iVar0, iParam2, 1);
			}
			else
			{
				return func_447(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_450(1);
	}
	return func_450(0);
}

int func_447(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_449(iParam0, iParam1);
	if (func_448(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_448(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_449(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_118(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_450(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_149(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_118(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_450(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_455(1);
			}
			else
			{
				return func_446(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_450(1);
			}
			else
			{
				return func_446(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_454(iParam0);
	if (!iVar3 == -1)
	{
		return func_452(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0)
{
	int iVar0;
	
	iVar0 = func_453(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_453(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_454(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_455(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

auto func_456()
{
	return Global_2359301.f_2;
}

int func_457()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_458()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_459(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_446(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

void func_460()
{
	if (get_num_reserved_mission_peds(false) != Local_88.f_45)
	{
		if (func_468(Local_88.f_45, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= Local_88.f_45)
			{
				reserve_network_mission_peds(Local_88.f_45);
			}
		}
	}
	if (get_num_reserved_mission_vehicles(false) != Local_88.f_46)
	{
		if (func_467(Local_88.f_45, 0, 1))
		{
			if (_0x0CD9AB83489430EA(0) <= Local_88.f_46)
			{
				reserve_network_mission_vehicles(Local_88.f_46);
			}
		}
	}
	if (get_num_reserved_mission_objects(false) != Local_88.f_47)
	{
		if (func_461(Local_88.f_45, 0, 1))
		{
			if (_0x12B6281B6C6706C0(0) <= Local_88.f_47)
			{
				reserve_network_mission_objects(Local_88.f_47);
			}
		}
	}
}

int func_461(int iParam0, int iParam1, int iParam2)
{
	return func_462(2, iParam0, 1, iParam1, iParam2);
}

bool func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_466(iParam0) - func_465(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_465(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_466(iParam0) - func_464(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_465(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_466(iParam0) - func_465(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_463(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return get_num_reserved_mission_peds(!iParam1);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!iParam1);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return get_num_reserved_mission_objects(!iParam1);
			}
			break;
	}
	return 0;
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

int func_467(int iParam0, int iParam1, int iParam2)
{
	return func_462(1, iParam0, 1, iParam1, iParam2);
}

int func_468(int iParam0, int iParam1, int iParam2)
{
	return func_462(0, iParam0, 1, iParam1, iParam2);
}

void func_469()
{
	func_470();
}

void func_470()
{
	terminate_this_thread();
}

bool func_471()
{
	int iVar0;
	
	func_478(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_477())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_476())
	{
		return true;
	}
	if (func_475(157))
	{
		if (!func_474())
		{
			return true;
		}
	}
	if (func_475(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_472() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_472()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_472()
{
	switch (func_473())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_473()
{
	return Global_25120;
}

auto func_474()
{
	return Global_2434762.f_574;
}

bool func_475(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_476()
{
	return Global_2443085;
}

auto func_477()
{
	return Global_2434762.f_569;
}

void func_478(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_479(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_479(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_480(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_480(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_481()
{
	wait(0);
}

void func_482(struct<20> Param0)
{
	func_485(32, Param0);
	func_484(0, -1, 0);
	network_register_host_broadcast_variables(&Local_88, 52);
	network_register_player_broadcast_variables(&Local_140, 161);
	set_this_script_can_be_paused(0);
	if (!func_483())
	{
		func_217();
	}
	iLocal_307 = Param0.f_16;
	iLocal_308 = int_to_playerindex(Param0.f_17);
	iLocal_309 = int_to_playerindex(Param0.f_18);
	if (network_is_player_active(iLocal_309))
	{
		iLocal_310 = get_hash_key(get_player_name(iLocal_309));
	}
	vLocal_311 = {Param0.f_10};
	if (iLocal_307 == 1)
	{
		if (player_id() == iLocal_308)
		{
			GAMEPLAY::SET_BIT(&Global_1572922, false);
		}
	}
	Global_1706779 = 0;
	Global_1706780 = 0;
	if (iLocal_307 == 1)
	{
		Global_2460486.f_1610 = 0;
	}
	Local_140[network_player_id_to_int() /*5*/] = 0;
}

bool func_483()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_477())
		{
			return false;
		}
		if (func_475(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

bool func_484(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_470();
			}
			else
			{
				return false;
			}
		}
		if (!func_424())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_470();
					}
					else
					{
						return false;
					}
				}
				if (func_477())
				{
					if (!iParam2)
					{
						func_470();
					}
					else
					{
						return false;
					}
				}
				if (func_475(155))
				{
					if (!iParam2)
					{
						func_470();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_470();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!iParam2)
			{
				func_470();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_470();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_485(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_470();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

