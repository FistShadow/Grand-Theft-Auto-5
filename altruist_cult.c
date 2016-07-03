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
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	float fLocal_46 = 0;
	auto uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	Vector3[] vLocal_51 = new Vector3[16];
	float[] fLocal_100 = new float[16];
	Vector3 vLocal_117 = 0;
	Vector3 vLocal_120 = 0;
	Vector3 vLocal_123 = 0;
	Vector3 vLocal_126 = 0;
	float fLocal_129 = 0;
	Vector3 vLocal_130 = 0;
	Vector3 vLocal_133 = 0;
	float fLocal_136 = 0;
	Vector3 vLocal_137 = 0;
	Vector3 vLocal_140 = 0;
	float fLocal_143 = 0;
	Vector3 vLocal_144 = 0;
	Vector3 vLocal_147 = 0;
	float fLocal_150 = 0;
	Vector3 vLocal_151 = 0;
	Vector3 vLocal_154 = 0;
	float fLocal_157 = 0;
	Vector3 vLocal_158 = 0;
	Vector3 vLocal_161 = 0;
	float fLocal_164 = 0;
	Vector3 vLocal_165 = 0;
	Vector3 vLocal_168 = 0;
	float fLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0;
	float fLocal_183 = 0;
	float fLocal_184 = 0;
	float fLocal_185 = 0;
	auto uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var[] uLocal_193 = new var[2];
	int[] iLocal_196 = new int[16];
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var[] uLocal_216 = new var[4];
	int[] iLocal_221 = new int[6];
	int iLocal_228 = 0;
	var[] uLocal_229 = new var[16];
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	auto uLocal_250 = 0;
	auto uLocal_251 = 0;
	auto uLocal_252 = 0;
	auto uLocal_253 = 0;
	auto uLocal_254 = 0;
	auto uLocal_255 = 0;
	auto uLocal_256 = 0;
	auto uLocal_257 = 0;
	auto uLocal_258 = 0;
	auto uLocal_259 = 0;
	auto uLocal_260 = 0;
	auto uLocal_261 = 0;
	auto uLocal_262 = 0;
	auto uLocal_263 = 0;
	auto uLocal_264 = 0;
	auto uLocal_265 = 0;
	auto uLocal_266 = 0;
	auto uLocal_267 = 0;
	auto uLocal_268 = 0;
	auto uLocal_269 = 0;
	auto uLocal_270 = 0;
	auto uLocal_271 = 0;
	auto uLocal_272 = 8;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
	auto uLocal_276 = 4;
	auto uLocal_277 = 0;
	auto uLocal_278 = 0;
	auto uLocal_279 = 0;
	auto uLocal_280 = 0;
	auto uLocal_281 = 0;
	auto uLocal_282 = 0;
	auto uLocal_283 = 0;
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 0;
	auto uLocal_287 = 0;
	auto uLocal_288 = 0;
	auto uLocal_289 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 4;
	auto uLocal_292 = 0;
	auto uLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 4;
	auto uLocal_307 = 0;
	auto uLocal_308 = 0;
	auto uLocal_309 = 0;
	auto uLocal_310 = 0;
	auto uLocal_311 = 0;
	auto uLocal_312 = 0;
	auto uLocal_313 = 0;
	auto uLocal_314 = 0;
	auto uLocal_315 = 0;
	auto uLocal_316 = 0;
	auto uLocal_317 = 0;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 4;
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
	auto uLocal_336 = 4;
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
	auto uLocal_351 = 4;
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
	auto uLocal_366 = 4;
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
	auto uLocal_381 = 4;
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
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	char* sLocal_401 = 0;
	char* sLocal_402 = 0;
	char* sLocal_403 = 0;
	char* sLocal_404 = 0;
	char* sLocal_405 = 0;
	char* sLocal_406 = 0;
	char* sLocal_407 = 0;
	char* sLocal_408 = 0;
	char* sLocal_409 = 0;
	int iLocal_410 = 0;
	auto uLocal_411 = 16;
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
	auto uLocal_492 = 0;
	auto uLocal_493 = 0;
	auto uLocal_494 = 0;
	auto uLocal_495 = 0;
	auto uLocal_496 = 0;
	auto uLocal_497 = 0;
	auto uLocal_498 = 0;
	auto uLocal_499 = 0;
	auto uLocal_500 = 0;
	auto uLocal_501 = 0;
	auto uLocal_502 = 0;
	auto uLocal_503 = 0;
	auto uLocal_504 = 0;
	auto uLocal_505 = 0;
	auto uLocal_506 = 0;
	auto uLocal_507 = 0;
	auto uLocal_508 = 0;
	auto uLocal_509 = 0;
	auto uLocal_510 = 0;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	auto uLocal_513 = 0;
	auto uLocal_514 = 0;
	auto uLocal_515 = 0;
	auto uLocal_516 = 0;
	auto uLocal_517 = 0;
	auto uLocal_518 = 0;
	auto uLocal_519 = 0;
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
	auto uLocal_535 = 0;
	auto uLocal_536 = 0;
	auto uLocal_537 = 0;
	auto uLocal_538 = 0;
	auto uLocal_539 = 0;
	auto uLocal_540 = 0;
	auto uLocal_541 = 0;
	auto uLocal_542 = 0;
	auto uLocal_543 = 0;
	auto uLocal_544 = 0;
	auto uLocal_545 = 0;
	auto uLocal_546 = 0;
	auto uLocal_547 = 0;
	auto uLocal_548 = 0;
	auto uLocal_549 = 0;
	auto uLocal_550 = 0;
	auto uLocal_551 = 0;
	auto uLocal_552 = 0;
	auto uLocal_553 = 0;
	auto uLocal_554 = 0;
	auto uLocal_555 = 0;
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	auto uLocal_560 = 0;
	auto uLocal_561 = 0;
	auto uLocal_562 = 0;
	auto uLocal_563 = 0;
	auto uLocal_564 = 0;
	auto uLocal_565 = 0;
	auto uLocal_566 = 0;
	auto uLocal_567 = 0;
	auto uLocal_568 = 0;
	auto uLocal_569 = 0;
	auto uLocal_570 = 0;
	auto uLocal_571 = 0;
	auto uLocal_572 = 0;
	auto uLocal_573 = 0;
	auto uLocal_574 = 0;
	auto uLocal_575 = 0;
	int iLocal_576 = 0;
	auto uLocal_577 = 0;
	auto uLocal_578 = 5;
	auto uLocal_579 = 0;
	auto uLocal_580 = 0;
	auto uLocal_581 = 0;
	auto uLocal_582 = 0;
	auto uLocal_583 = 0;
	auto uLocal_584 = 0;
	auto uLocal_585 = 0;
	auto uLocal_586 = 0;
	auto uLocal_587 = 0;
	auto uLocal_588 = 0;
	auto uLocal_589 = 0;
	auto uLocal_590 = 0;
	auto uLocal_591 = 0;
	auto uLocal_592 = 0;
	auto uLocal_593 = 0;
	auto uLocal_594 = 5;
	auto uLocal_595 = 0;
	auto uLocal_596 = 0;
	auto uLocal_597 = 0;
	auto uLocal_598 = 0;
	auto uLocal_599 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_117 = {-1109.213f, 4914.744f, 216.101f};
	vLocal_120 = {-1034.6f, 4918.6f, 205.9f};
	vLocal_123 = {-1066.963f, 4873.13f, 207.3281f};
	vLocal_126 = {-1112.946f, 4986.957f, 241.133f};
	fLocal_129 = 72.3125f;
	vLocal_130 = {-1138.386f, 4872.04f, 207.5488f};
	vLocal_133 = {-1091.959f, 4983.27f, 241.1698f};
	fLocal_136 = 57.8125f;
	vLocal_137 = {-1171.648f, 4888.658f, 211.0756f};
	vLocal_140 = {-1137.907f, 4926.572f, 240.999f};
	fLocal_143 = 17.9375f;
	vLocal_144 = {-1177.981f, 4903.231f, 212.477f};
	vLocal_147 = {-1153.398f, 4902.631f, 241.155f};
	fLocal_150 = 17.9375f;
	vLocal_151 = {-1175.693f, 4904.839f, 207.5207f};
	vLocal_154 = {-1142.08f, 4985.32f, 241.2887f};
	fLocal_157 = 36.375f;
	vLocal_158 = {-1106.212f, 4860.086f, 206.1207f};
	vLocal_161 = {-1105.016f, 4873.854f, 241.1453f};
	fLocal_164 = 11.5625f;
	vLocal_165 = {-1044.268f, 4916.587f, 209.8365f};
	vLocal_168 = {-1063.605f, 4972.88f, 241.1299f};
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	sLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_177();
	}
	if (_0x9689123E3F213AA5())
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		if (is_world_point_within_brain_activation_range() || iLocal_173)
		{
			set_wanted_level_multiplier(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_101154.f_29520.f_5 >= iLocal_192 && !func_176())
						{
							iLocal_50 = 2;
						}
						func_173();
						func_170();
					}
					break;
				
				case 1:
					set_all_random_peds_flee_this_frame(player_id());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (timera() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_169();
							}
							else if (iLocal_187 == 2)
							{
								func_148();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_147();
							}
							else
							{
								func_146();
							}
						}
						if (iLocal_174)
						{
							func_133(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					set_all_random_peds_flee_this_frame(player_id());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_108();
					}
					_set_door_acceleration_limit(Global_34834[9 /*31*/], 0, 0, 1);
					_set_door_acceleration_limit(Global_34834[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!is_player_playing(player_id()))
					{
						iLocal_50 = 3;
						break;
					}
					iLocal_175 = false;
					set_wanted_level_multiplier(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (PED::IS_PED_INJURED(iLocal_196[iVar0]))
						{
							if (does_blip_exist(uLocal_229[iVar0]))
							{
								remove_blip(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (is_ped_in_writhe(iLocal_196[iVar0]))
							{
								if (does_blip_exist(uLocal_229[iVar0]))
								{
									remove_blip(&(uLocal_229[iVar0]));
								}
							}
							else if (is_entity_at_entity(iLocal_196[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_107())
								{
									if (iLocal_191 < GAMEPLAY::GET_GAME_TIMER())
									{
										iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											func_97(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_96(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_96(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4500, 6000);
									}
								}
							}
							iLocal_175 = true;
						}
						iVar0++;
					}
					if (!iLocal_175)
					{
						func_60();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						iLocal_249 = func_59();
						if (!has_scaleform_movie_loaded(iLocal_249))
						{
							break;
						}
						func_58(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_29(&uLocal_254, &uLocal_260, &iLocal_249, sLocal_401, sLocal_402, &iLocal_172, 78))
					{
						iLocal_190 = 0;
						remove_relationship_group(iLocal_410);
						remove_cover_point(iLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[iVar0]))
							{
								PED::DELETE_PED(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_221[iVar0]))
							{
								delete_object(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (does_cam_exist(iLocal_246))
						{
							set_cam_active(iLocal_246, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
						{
							delete_object(&iLocal_215);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
						{
							delete_object(&iLocal_215);
						}
						if (iLocal_172)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_177();
						}
					}
					break;
			}
		}
		else if (iLocal_177)
		{
		}
		else
		{
			func_177();
		}
	}
}

void func_1(int iParam0)
{
	if (iParam0)
	{
		set_fade_in_after_death_arrest(0);
		_disable_automatic_respawn(1);
		set_fade_out_after_death(0);
		func_2(1);
		Global_86869 = 1;
	}
	else
	{
		set_fade_in_after_death_arrest(1);
		_disable_automatic_respawn(0);
		set_fade_out_after_death(1);
		func_2(0);
		Global_86869 = 0;
	}
}

void func_2(int iParam0)
{
	if ((Global_35711 == 9 || Global_35711 == 10) || Global_35711 == 5)
	{
		Global_99805 = iParam0;
		if (iParam0)
		{
		}
	}
	else
	{
		if (iParam0)
		{
		}
		Global_99805 = 0;
	}
}

void func_3(int iParam0)
{
	if (iParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_7(0))
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

bool func_7(int iParam0)
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

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_9()
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		_start_screen_effect("DeathFailOut", false, 0);
		GAMEPLAY::SET_BIT(&iLocal_48, true);
		func_11(1, 2, 0);
		_set_cam_effect(2);
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_48, true) || iParam1)
		{
			_stop_screen_effect("DeathFailOut");
			func_11(0, 2, 1);
			_set_cam_effect(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_48, true);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&iLocal_48, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				set_time_scale(0.2f);
			}
			else
			{
				set_time_scale(0.075f);
			}
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_48, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				set_time_scale(1f);
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_48, 2);
	}
}

void func_12(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_48, false) || iParam1)
		{
			_start_screen_effect(sVar0, false, 0);
			GAMEPLAY::SET_BIT(&iLocal_48, false);
			func_11(1, 1, 0);
			_set_cam_effect(1);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_48, false) || iParam1)
		{
			_stop_screen_effect(sVar0);
			func_11(0, 1, 1);
			_set_cam_effect(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_48, false);
	}
}

auto func_13()
{
	func_14();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_14()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_18(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER::PLAYER_PED_ID());
			if (func_16(iVar0) && (!func_15(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_16(Global_101154.f_1826.f_539.f_3549))
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

int func_15(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()
{
	iLocal_48 = false;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_28(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_5())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_28(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(player_id())) && !func_22(player_id(), 0)) && !func_21())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_21()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

auto func_24()
{
	return Global_1312747;
}

bool func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return true;
	}
	if (func_26())
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

int func_26()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_27(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_28(int iParam0)
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

bool func_29(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			start_audio_scene("DEATH_SCENE");
			play_sound_frontend(-1, "ScreenFlash", "WastedSounds", 1);
			func_57(uParam0.f_1);
			func_19();
			func_56(uParam1, 0.15f * 0.075f, 0.5f);
			set_no_loading_screen(1);
			break;
		
		case 1:
			if (func_54() || is_screen_faded_out())
			{
				*uParam0 = 2;
			}
			if (!func_53(*uParam0.f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false))
				{
					play_sound_frontend(-1, "Bed", "WastedSounds", 1);
					func_51(uParam0.f_4, 4);
				}
			}
			if (IntToFloat(timera()) > 1500f * 0.2f)
			{
				if (!func_53(*uParam0.f_4, 2))
				{
					play_sound_frontend(-1, "TextHit", "WastedSounds", 1);
					func_51(uParam0.f_4, 2);
				}
				func_30(iParam2, uParam1, sParam3, sParam4, iParam5, iParam6 - 4 & iParam6 - 2 & iParam6 | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_30(iParam2, uParam1, sParam3, sParam4, iParam5, iParam6 - 8 & iParam6 - 4 & iParam6 - 2 & iParam6, 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					ignore_next_restart(1);
				}
				else if (!*uParam0.f_5)
				{
					func_2(0);
				}
				set_no_loading_screen(0);
				_disable_automatic_respawn(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (is_player_playing(player_id()))
			{
				set_fade_in_after_death_arrest(1);
				func_12(0, 1);
				func_10(0, 1);
				stop_audio_scene("DEATH_SCENE");
				set_no_loading_screen(0);
				return true;
			}
			break;
		
		case 4:
			set_no_loading_screen(0);
			return true;
			break;
	}
	return false;
}

bool func_30(auto uParam0, auto uParam1, char* sParam2, char* sParam3, auto uParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!is_screen_faded_out() || is_screen_fading_out())
			{
				do_screen_fade_out(2500);
				_0xEB2D525B57F42B40();
			}
			if (iParam9)
			{
				set_no_loading_screen(1);
			}
			set_time_scale(0.2f);
			if (func_50(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			_push_scaleform_movie_function(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			_begin_text_component("STRING");
			_0x39BBF623FC803EAC(6);
			_add_text_component_item_string(sParam2);
			_end_text_component();
			func_49(sParam3);
			_push_scaleform_movie_function_parameter_int(100);
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function();
			if (func_50(iParam5, 32))
			{
				if (!*uParam1.f_136)
				{
					_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
					_push_scaleform_movie_function_parameter_float(*uParam1.f_134);
					_pop_scaleform_movie_function_void();
					*uParam1.f_136 = 1;
				}
			}
			if (!func_50(iParam5, 1))
			{
				disable_all_control_actions(0);
			}
			func_48(uParam1.f_10, 0, 1, 1, 1);
			func_47(uParam1.f_10, "IB_RETRY", 2, 201, 1, 1, 0);
			func_47(uParam1.f_10, "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_50(iParam5, 4))
			{
				play_sound_frontend(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_50(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						_start_screen_effect("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						_start_screen_effect("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						_start_screen_effect("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_46(uParam1.f_1))
			{
				func_45(uParam1.f_1);
			}
			if (func_50(iParam5, 2))
			{
				if (!func_46(uParam1.f_4))
				{
					func_45(uParam1.f_4);
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			hide_loading_on_fade_this_frame();
			if (func_50(iParam5, 32))
			{
				if (!*uParam1.f_136)
				{
					_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
					_push_scaleform_movie_function_parameter_float(*uParam1.f_134);
					_pop_scaleform_movie_function_void();
					*uParam1.f_136 = 1;
				}
			}
			_set_2d_layer(iParam6);
			func_43(uParam0, 0, 0);
			if (!func_50(iParam5, 16) && (func_41(uParam1.f_1) >= *uParam1.f_135 || is_screen_faded_out()))
			{
				func_35(uParam1.f_10, 1128792064, iParam6, iParam7, 1, 1065353216);
				_show_cursor_this_frame();
				if (is_control_just_released(2, 201))
				{
					*uParam1.f_138 = 1;
					play_sound_frontend(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_34(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
				else if (is_control_just_released(2, 202))
				{
					*uParam1.f_138 = 0;
					play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_34(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
			}
			if (func_50(iParam5, 2))
			{
				if (func_41(uParam1.f_4) >= fParam8)
				{
					*uParam1.f_138 = 0;
					play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_34(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
			}
			break;
		
		case 3:
			func_43(uParam0, 0, 0);
			set_time_scale(1f);
			if (*uParam1.f_138 || !((GAMEPLAY::ARE_STRINGS_EQUAL("stunt_plane_races", get_this_script_name()) || GAMEPLAY::ARE_STRINGS_EQUAL("pilot_school", get_this_script_name())) || (GAMEPLAY::ARE_STRINGS_EQUAL("bj", get_this_script_name()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				do_screen_fade_in(2500);
			}
			if (func_50(iParam5, 64) && *uParam1.f_138)
			{
				do_screen_fade_out(500);
			}
			func_31(uParam1.f_4);
			if (iParam9)
			{
				set_no_loading_screen(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_41(uParam1.f_4) <= 0.1f)
			{
				func_43(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = *uParam1.f_138;
				return true;
			}
			break;
	}
	return false;
}

void func_31(auto uParam0)
{
	func_32(uParam0, 0f);
}

void func_32(auto uParam0, float fParam1)
{
	*uParam0.f_1 = func_33(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(uParam0, true);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	*uParam0.f_2 = 0f;
}

float func_33(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

void func_34(auto uParam0)
{
	if (*uParam0 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(uParam0);
		*uParam0 = 0;
	}
	*uParam0.f_1 = 0;
	*uParam0.f_123 = 0;
}

void func_35(auto uParam0, float fParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((is_screen_fading_out() || is_screen_fading_in()) || is_screen_faded_out()) || is_frontend_fading())
	{
		if (!iParam3)
		{
			return;
		}
	}
	if (!func_40(uParam0))
	{
		return;
	}
	hide_loading_on_fade_this_frame();
	_set_2d_layer(iParam2);
	if (!func_50(*uParam0.f_1, 256) || (func_50(*uParam0.f_1, 8192) && _0x6CD79468A1E595C6(2)))
	{
		_push_scaleform_movie_function(*uParam0, "SET_CLEAR_SPACE");
		_push_scaleform_movie_function_parameter_float(fParam1);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_MAX_WIDTH");
		_push_scaleform_movie_function_parameter_float(fParam5);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT_EMPTY");
		_pop_scaleform_movie_function_void();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			_push_scaleform_movie_function_parameter_bool(func_50(*uParam0.f_1, 4096));
			_pop_scaleform_movie_function_void();
		}
		iVar5 = false;
		iVar6 = 0;
		while (iVar6 < *uParam0.f_123)
		{
			switch (*(uParam0.f_2[iVar6 /*15*/]).f_2)
			{
				case 0:
					iVar4 = true;
					break;
				
				case 1:
					iVar4 = _is_input_disabled(2);
					break;
				
				case 2:
					iVar4 = !_is_input_disabled(2);
					break;
				
				default:
					iVar4 = false;
					break;
			}
			if (iVar4)
			{
				if (_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT"))
				{
					_push_scaleform_movie_function_parameter_int(iVar5);
					iVar5++;
					iVar7 = false;
					while (iVar7 < *(uParam0.f_2[iVar6 /*15*/]).f_14)
					{
						iVar0 = *(uParam0.f_2[iVar6 /*15*/].f_3)[iVar7 /*2*/];
						iVar1 = *(uParam0.f_2[iVar6 /*15*/].f_3[iVar7 /*2*/]).f_1;
						iVar2 = GAMEPLAY::IS_BIT_SET(*(uParam0.f_2[iVar6 /*15*/]).f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(*(uParam0.f_2[iVar6 /*15*/]).f_12, iVar7))
						{
							sVar3 = _get_control_action_name(iVar0, iVar1, iVar2);
						}
						else
						{
							sVar3 = _0x80C2FD58D720C801(iVar0, iVar1, iVar2);
						}
						if (!is_string_null_or_empty(sVar3))
						{
							func_39(sVar3);
						}
						iVar7++;
					}
					if (!is_string_null_or_empty(*uParam0.f_2[iVar6 /*15*/]))
					{
						func_49(*uParam0.f_2[iVar6 /*15*/]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_50(*uParam0.f_1, 4096))
						{
							if (*(uParam0.f_2[iVar6 /*15*/]).f_1)
							{
								_push_scaleform_movie_function_parameter_bool(true);
								_push_scaleform_movie_function_parameter_int(*(uParam0.f_2[iVar6 /*15*/].f_3[0 /*2*/]).f_1);
							}
							else
							{
								_push_scaleform_movie_function_parameter_bool(false);
								_push_scaleform_movie_function_parameter_int(-1);
							}
						}
					}
					_pop_scaleform_movie_function_void();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(iParam4, func_38(func_50(*uParam0.f_1, 32), 1f, 0f), -1f);
		_push_scaleform_movie_function(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		_push_scaleform_movie_function_parameter_float(fVar8);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_BACKGROUND_COLOUR");
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(80f);
		_pop_scaleform_movie_function_void();
		func_37(uParam0.f_1, 256);
		func_36(uParam0.f_1, 128);
	}
	draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 0, 0);
}

void func_36(auto uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 && iParam1);
}

void func_37(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_38(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_40(auto uParam0)
{
	if (*uParam0 != 0)
	{
		if (has_scaleform_movie_loaded(*uParam0))
		{
			func_37(uParam0.f_1, 1);
			return true;
		}
	}
	return false;
}

float func_41(auto uParam0)
{
	if (func_46(uParam0))
	{
		if (func_42(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_33(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

int func_42(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_43(auto uParam0, int iParam1, int iParam2)
{
	if (!func_46(uParam0.f_2))
	{
		func_31(uParam0.f_2);
	}
	hide_hud_component_this_frame(14);
	if (!iParam2)
	{
		draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (iParam2)
	{
		draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	if (iParam1)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			return false;
		}
	}
	if (*uParam0.f_1 == -1)
	{
		return true;
	}
	if (func_41(uParam0.f_2) * 1000f > to_float(*uParam0.f_1))
	{
		func_44(uParam0.f_2);
		return false;
	}
	return true;
}

void func_44(auto uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

void func_45(auto uParam0)
{
	if (!func_46(uParam0))
	{
		func_31(uParam0);
	}
}

int func_46(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

bool func_47(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = *uParam0.f_123;
	if (iVar1 < 8)
	{
		*uParam0.f_2[iVar1 /*15*/] = sParam1;
		*(uParam0.f_2[iVar1 /*15*/]).f_1 = iVar0;
		*(uParam0.f_2[iVar1 /*15*/]).f_2 = iParam6;
		*(uParam0.f_2[iVar1 /*15*/]).f_12 = 0;
		*(uParam0.f_2[iVar1 /*15*/]).f_13 = 0;
		*(uParam0.f_2[iVar1 /*15*/]).f_14 = 0;
		*(uParam0.f_2[iVar1 /*15*/].f_3)[0 /*2*/] = iParam2;
		*(uParam0.f_2[iVar1 /*15*/].f_3[0 /*2*/]).f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(uParam0.f_2[iVar1 /*15*/].f_13, false);
		}
		*(uParam0.f_2[iVar1 /*15*/]).f_14++;
		*uParam0.f_123++;
		return true;
	}
	return false;
}

void func_48(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = request_scaleform_movie_instance("instructional_buttons");
	}
	*uParam0.f_1 = 0;
	*uParam0.f_123 = 0;
	if (iParam1)
	{
		func_37(uParam0.f_1, 32);
	}
	if (has_scaleform_movie_loaded(*uParam0))
	{
		func_37(uParam0.f_1, 1);
		if (iParam2)
		{
			set_scaleform_movie_to_use_system_time(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iParam3)
		{
			func_37(uParam0.f_1, 4096);
		}
	}
	if (iParam4)
	{
		func_37(uParam0.f_1, 8192);
	}
}

void func_49(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

int func_50(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_51(auto uParam0, int iParam1)
{
	func_52(uParam0, iParam1);
}

void func_52(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_53(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_54()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_48, false) && !GAMEPLAY::IS_BIT_SET(iLocal_48, true))
	{
		settimera(0);
		func_12(1, 0);
	}
	if (!is_cutscene_playing())
	{
		clear_prints();
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	_0x5A7F62FDA59759BD();
	if (IntToFloat(timera()) > 1500f * 0.2f)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_48, true))
		{
			func_10(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > 1500f * 0.075f || is_screen_faded_out())
		{
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				if (is_player_playing(player_id()))
				{
					set_player_control(player_id(), false, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				set_frontend_active(0);
				set_pause_menu_active(0);
				clear_help(1);
				clear_prints();
				if (is_player_playing(player_id()))
				{
					set_player_control(player_id(), false, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_49)
			{
				return true;
			}
		}
	}
	return false;
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_48, 3))
			{
				set_game_paused(true);
				GAMEPLAY::SET_BIT(&iLocal_48, 3);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_48, 3))
		{
			set_game_paused(false);
			GAMEPLAY::CLEAR_BIT(&iLocal_48, 3);
		}
	}
}

void func_56(auto uParam0, float fParam1, float fParam2)
{
	if (func_46(uParam0.f_1))
	{
		func_44(uParam0.f_1);
	}
	if (func_46(uParam0.f_4))
	{
		func_44(uParam0.f_4);
	}
	func_34(uParam0.f_10);
	*uParam0.f_134 = fParam1;
	*uParam0.f_135 = fParam2;
	*uParam0.f_137 = 1;
	*uParam0.f_136 = 0;
	*uParam0 = 0;
}

void func_57(auto uParam0)
{
	if (!func_46(uParam0))
	{
		func_45(uParam0);
	}
	else
	{
		func_31(uParam0);
	}
}

void func_58(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false);
}

int func_59()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_60()
{
	if (!iLocal_176)
	{
		set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_101154.f_29520.f_5 = 1000;
		unlock_mission_news_story(64);
		Global_101154.f_25089.f_472 = 54;
		iLocal_399 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		func_95(1);
		while (!has_scaleform_movie_loaded(iLocal_399))
		{
			wait(0);
		}
		_push_scaleform_movie_function(iLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		_pop_scaleform_movie_function();
		while (!func_94())
		{
			wait(0);
		}
		func_93();
		settimera(0);
		play_sound_frontend(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	draw_scaleform_movie_fullscreen(iLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (timera() > 9500)
		{
			_push_scaleform_movie_function(iLocal_399, "SHARD_ANIM_OUT");
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_float(0.33f);
			_pop_scaleform_movie_function_void();
			iLocal_178 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (has_scaleform_movie_loaded(iLocal_399))
		{
			set_scaleform_movie_as_no_longer_needed(&iLocal_399);
			func_95(0);
		}
		while (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_92(player_id()), vLocal_117, 1) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			wait(0);
		}
		func_61(18);
		func_177();
	}
}

void func_61(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_89())
	{
		func_67(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_101143, 1), 64);
		if (func_64(Global_101143) > 0)
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
	func_63(&Global_25179);
	Global_101144 = 0;
	func_62(-1);
}

void func_62(int iParam0)
{
	Global_101143 = iParam0;
}

void func_63(auto uParam0)
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

int func_64(int iParam0)
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

char* func_65(int iParam0, int iParam1)
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

void func_66(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_67(int iParam0)
{
	func_68(iParam0, 0, func_88(iParam0));
}

void func_68(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_87();
	func_78(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(uParam0, &uVar0);
	Var1 = {func_69(&uVar0)};
}

struct<16> func_69(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_74(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_72(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_70(*uParam0), 64);
	return cVar0;
}

auto func_70(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_71(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_72(auto uParam0)
{
	return uParam0 & 15;
}

int func_73(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_74(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_75(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_77(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_78(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_70(*uParam0);
	iVar1 = func_72(*uParam0);
	iVar2 = func_73(*uParam0);
	iVar3 = func_76(*uParam0);
	iVar4 = func_75(*uParam0);
	iVar5 = func_74(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_79(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_79(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam6);
}

void func_80(auto uParam0, int iParam1)
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

void func_81(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_82(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_84(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_85(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_86(int iParam0, int iParam1)
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

auto func_87()
{
	auto uVar0;
	
	func_85(&uVar0, get_clock_seconds());
	func_84(&uVar0, get_clock_minutes());
	func_83(&uVar0, TIME::GET_CLOCK_HOURS());
	func_81(&uVar0, get_clock_day_of_month());
	func_82(&uVar0, get_clock_month());
	func_80(&uVar0, get_clock_year());
	return uVar0;
}

int func_88(int iParam0)
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

bool func_89()
{
	if ((Global_101143 == func_90() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

auto func_90()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_91(cVar0);
	return uVar16;
}

int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GAMEPLAY::GET_HASH_KEY(&cParam0))
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

Vector3 func_92(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_93()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

bool func_94()
{
	return true;
}

void func_95(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_96(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_97(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

bool func_98(char* sParam0, int iParam1, int iParam2)
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
					func_105();
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
		if (func_104(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_103();
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
				func_102();
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
				if (func_101())
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
			if (func_5())
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
			func_100();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_99();
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
		func_105();
	}
	return false;
}

void func_99()
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

void func_100()
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

bool func_101()
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

void func_102()
{
	if (func_15(14))
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
		Global_14413 = func_13();
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

void func_103()
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

int func_104(int iParam0, int iParam1)
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

void func_105()
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

void func_106(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_107()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_108()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			_set_weather_type_over_time("THUNDER", 20f);
			if (!is_cutscene_active())
			{
				request_cutscene("ac_ig_3_p3_b", 8);
			}
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_acult_02"));
			STREAMING::REQUEST_MODEL(-2022916910);
			STREAMING::REQUEST_MODEL(-1322183878);
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!func_132() || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(-2022916910)) || !STREAMING::HAS_MODEL_LOADED(-1322183878)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				wait(0);
			}
			iLocal_576 = func_128(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_576))
			{
				register_entity_for_cutscene(iLocal_576, "Trevors_weapon", 0, false, 0);
			}
			register_entity_for_cutscene(false, "Rifle_Mag1^1", 3, get_weapon_component_type_model(joaat("component_assaultrifle_clip_01")), 0);
			if (func_132() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				register_entity_for_cutscene(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, false, 0);
				register_entity_for_cutscene(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				register_entity_for_cutscene(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				register_entity_for_cutscene(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				register_entity_for_cutscene(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				register_entity_for_cutscene(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				start_cutscene(0);
			}
			wait(0);
			if (!iLocal_172 && Global_101154.f_29520.f_5 != 1000)
			{
				func_127();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[0]))
			{
				PED::DELETE_PED(&(iLocal_196[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[1]))
			{
				PED::DELETE_PED(&(iLocal_196[1]));
			}
			if (does_cam_exist(iLocal_246))
			{
				set_cam_active(iLocal_246, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
			{
				delete_object(&iLocal_215);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
			{
				delete_object(&iLocal_215);
			}
			render_script_cams(false, false, 3000, 1, 0, 0);
			if (does_blip_exist(iLocal_228))
			{
				remove_blip(&iLocal_228);
			}
			func_20(1, 1, 1, 0);
			set_player_control(player_id(), false, 0);
			clear_help(1);
			display_hud(false);
			display_radar(false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
			}
			clear_area(vLocal_117, 100f, 1, 0, 0, false);
			add_scenario_blocking_area(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			set_wanted_level_multiplier(0f);
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
			iLocal_248 = add_cover_point(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_01")))
			{
				wait(0);
			}
			iLocal_190 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (can_set_exit_state_for_camera(0))
			{
				if (can_set_exit_state_for_registered_entity("CULT_MASTER", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[11]))
					{
						iLocal_196[11] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("CULT_MASTER", false));
					}
				}
				if (can_set_exit_state_for_registered_entity("REAR_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[12]))
					{
						iLocal_196[12] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("REAR_CULT", false));
					}
				}
				if (can_set_exit_state_for_registered_entity("LEFT_OLD_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[13]))
					{
						iLocal_196[13] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("LEFT_OLD_CULT", false));
					}
				}
				if (can_set_exit_state_for_registered_entity("CARBINE_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[14]))
					{
						iLocal_196[14] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("CARBINE_CULT", false));
					}
				}
				if (can_set_exit_state_for_registered_entity("SHOTGUN_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[15]))
					{
						iLocal_196[15] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("SHOTGUN_CULT", false));
					}
				}
				if (can_set_exit_state_for_registered_entity("TREVOR", 0))
				{
					hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
					set_entity_coords(PLAYER::PLAYER_PED_ID(), -1173.531f, 4924.357f, 222.2101f, 1, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), 188.9369f);
					task_put_ped_directly_into_cover(PLAYER::PLAYER_PED_ID(), -1173.509f, 4924.365f, 222.21f, -1, false, 0f, true, 0, iLocal_248, 0);
					_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
				if (can_set_exit_state_for_registered_entity("Trevors_weapon", 0))
				{
					give_weapon_object_to_ped(iLocal_576, PLAYER::PLAYER_PED_ID());
				}
				set_gameplay_cam_relative_heading(91.3878f);
				set_gameplay_cam_relative_pitch(4.4337f, 1f);
				func_20(0, 1, 1, 0);
				set_player_control(player_id(), true, 0);
				display_hud(true);
				display_radar(true);
				vLocal_51[0 /*3*/] = {-1044.632f, 4918.149f, 211.3315f};
				fLocal_100[0] = 254.8275f;
				vLocal_51[1 /*3*/] = {-1054.92f, 4915.155f, 210.8241f};
				fLocal_100[1] = 270.2025f;
				vLocal_51[2 /*3*/] = {-1051.859f, 4903.902f, 209.6199f};
				fLocal_100[2] = 299.8404f;
				vLocal_51[3 /*3*/] = {-1068.246f, 4899.532f, 213.2755f};
				fLocal_100[3] = 298.4257f;
				vLocal_51[4 /*3*/] = {-1083.322f, 4899.532f, 213.2755f};
				fLocal_100[4] = 283.5311f;
				vLocal_51[5 /*3*/] = {-1084.058f, 4933.805f, 228.2246f};
				fLocal_100[5] = 87.5233f;
				vLocal_51[6 /*3*/] = {-1081.976f, 4937.339f, 232.3275f};
				fLocal_100[6] = 109.6546f;
				vLocal_51[7 /*3*/] = {-1092.075f, 4939.958f, 217.3385f};
				fLocal_100[7] = 210.2433f;
				vLocal_51[8 /*3*/] = {-1101.798f, 4930.33f, 217.3544f};
				fLocal_100[8] = 203.732f;
				vLocal_51[9 /*3*/] = {-1070.675f, 4869.301f, 220.2917f};
				fLocal_100[9] = 39.1109f;
				vLocal_51[10 /*3*/] = {-1115.703f, 4878.439f, 225.8085f};
				fLocal_100[10] = 25.8472f;
				add_relationship_group("rghCult", &iLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						set_ped_random_component_variation(iLocal_196[iVar1], 0);
						give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, true, true);
						set_ped_combat_movement(iLocal_196[iVar1], 0);
						PED::SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 2);
						set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
						set_ped_accuracy(iLocal_196[iVar1], 5);
						set_ped_hearing_range(iLocal_196[iVar1], 100f);
						set_ped_seeing_range(iLocal_196[iVar1], 100f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_196[iVar1], 150);
						set_ped_shoot_rate(iLocal_196[iVar1], GAMEPLAY::GET_RANDOM_INT_IN_RANGE(40, 60));
						task_combat_ped(iLocal_196[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						set_ped_random_component_variation(iLocal_196[iVar1], 0);
						give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 50, true);
						set_ped_combat_movement(iLocal_196[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 1);
						set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
						set_ped_accuracy(iLocal_196[iVar1], 5);
						set_ped_hearing_range(iLocal_196[iVar1], 100f);
						set_ped_seeing_range(iLocal_196[iVar1], 100f);
						set_ped_shoot_rate(iLocal_196[iVar1], GAMEPLAY::GET_RANDOM_INT_IN_RANGE(40, 60));
						task_combat_ped(iLocal_196[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!PED::IS_PED_INJURED(iLocal_196[iVar1]) && !PED::IS_PED_INJURED(iLocal_196[11])) && !PED::IS_PED_INJURED(iLocal_196[12])) && !PED::IS_PED_INJURED(iLocal_196[13])) && !PED::IS_PED_INJURED(iLocal_196[14])) && !PED::IS_PED_INJURED(iLocal_196[15]))
						{
							give_weapon_to_ped(iLocal_196[11], joaat("weapon_pistol"), -1, true, true);
							give_weapon_to_ped(iLocal_196[12], joaat("weapon_assaultrifle"), -1, true, true);
							give_weapon_to_ped(iLocal_196[13], joaat("weapon_assaultrifle"), -1, true, true);
							give_weapon_to_ped(iLocal_196[14], joaat("weapon_carbinerifle"), -1, true, true);
							give_weapon_to_ped(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 0, true);
							set_ped_combat_movement(iLocal_196[iVar1], 3);
							PED::SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 0);
							set_ped_accuracy(iLocal_196[iVar1], 0);
							set_ped_chance_of_firing_blanks(iLocal_196[iVar1], 1f, 1f);
							open_sequence_task(&iLocal_247);
							task_go_to_coord_while_aiming_at_entity(0, -1159.33f, 4924.412f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 6000, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_247);
							task_perform_sequence(iLocal_196[15], iLocal_247);
							clear_sequence_task(&iLocal_247);
							open_sequence_task(&iLocal_247);
							task_go_to_coord_while_aiming_at_entity(0, -1163.279f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_seek_cover_from_ped(false, PLAYER::PLAYER_PED_ID(), 5000, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 7500, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_247);
							task_perform_sequence(iLocal_196[14], iLocal_247);
							clear_sequence_task(&iLocal_247);
							open_sequence_task(&iLocal_247);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 2500, 0);
							task_seek_cover_from_ped(false, PLAYER::PLAYER_PED_ID(), 5000, 0);
							task_go_to_coord_while_aiming_at_entity(0, -1156.175f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 6500, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_247);
							task_perform_sequence(iLocal_196[13], iLocal_247);
							clear_sequence_task(&iLocal_247);
							open_sequence_task(&iLocal_247);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 3000, 0);
							task_go_to_coord_while_aiming_at_entity(0, -1157.962f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 5500, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_247);
							task_perform_sequence(iLocal_196[12], iLocal_247);
							clear_sequence_task(&iLocal_247);
							open_sequence_task(&iLocal_247);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_seek_cover_from_ped(false, PLAYER::PLAYER_PED_ID(), 10000, 0);
							task_go_to_coord_while_aiming_at_entity(0, -1161.475f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 4500, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_247);
							task_perform_sequence(iLocal_196[11], iLocal_247);
							clear_sequence_task(&iLocal_247);
							set_ped_keep_task(iLocal_196[iVar1], true);
							set_ped_reset_flag(iLocal_196[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_196[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, true);
						set_ped_random_component_variation(iLocal_196[iVar1], 0);
						give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_pistol"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 50, true);
						set_ped_combat_movement(iLocal_196[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 0);
						set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
						set_ped_combat_range(iLocal_196[iVar1], 1);
						set_ped_accuracy(iLocal_196[iVar1], 5);
						set_ped_hearing_range(iLocal_196[iVar1], 100f);
						set_ped_seeing_range(iLocal_196[iVar1], 100f);
						set_ped_shoot_rate(iLocal_196[iVar1], GAMEPLAY::GET_RANDOM_INT_IN_RANGE(40, 60));
						task_combat_ped(iLocal_196[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_196[iVar1], iLocal_410);
					set_entity_heading(iLocal_196[iVar1], func_126(ENTITY::GET_ENTITY_COORDS(iLocal_196[iVar1], 1), func_92(player_id())));
					set_blocking_of_non_temporary_events(iLocal_196[iVar1], true);
					PED::SET_PED_CONFIG_FLAG(iLocal_196[iVar1], 42, true);
					uLocal_229[iVar1] = func_124(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_96(&uLocal_411, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				func_96(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				GAMEPLAY::SET_BIT(&iVar0, true);
				GAMEPLAY::SET_BIT(&iVar0, 3);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				if (!iLocal_172)
				{
					uLocal_216[0] = create_pickup_rotate(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = create_pickup_rotate(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = create_pickup_rotate(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = create_pickup_rotate(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = create_object(-1322183878, -1158.69f, 4915.709f, 220.2644f, 1, true, false);
				iLocal_221[1] = create_object(-2022916910, -1156.246f, 4918.6f, 220.5432f, 1, true, false);
				iLocal_221[2] = create_object(-1322183878, -1145.802f, 4931.816f, 219.9683f, 1, true, false);
				iLocal_221[3] = create_object(-1322183878, -1133.369f, 4919.067f, 218.8385f, 1, true, false);
				iLocal_221[4] = create_object(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, true, false);
				iLocal_221[5] = create_object(-2022916910, -1112.66f, 4929.268f, 217.1752f, 1, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_123() < 50)
				{
					special_ability_charge_normalized(player_id(), 0.5f, 1);
				}
				if (func_122() != 18)
				{
					func_120(18);
				}
				if (!func_89())
				{
					func_109(0);
				}
				func_1(1);
				iLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

bool func_109(int iParam0)
{
	if (func_114())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_113(Global_101143))
		{
			func_110(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_113(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_111(func_112(iParam0), -1);
					Global_101154.f_29520.f_2++;
					GAMEPLAY::SET_BIT(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_101150, true))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_111(func_112(iParam0), -1);
					Global_101154.f_29520.f_3++;
					GAMEPLAY::SET_BIT(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_101150, 2))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_111(func_112(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_111(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_112(int iParam0)
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

bool func_113(int iParam0)
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

bool func_114()
{
	switch (func_115(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_115(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_119(0))
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
		if (!func_117(iParam2))
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
			func_116(uParam0, iParam4);
		}
	}
	return 2;
}

void func_116(auto uParam0, int iParam1)
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

int func_117(int iParam0)
{
	return func_118(iParam0, Global_35711);
}

bool func_118(int iParam0, int iParam1)
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

bool func_119(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_117(iParam0))
	{
		return false;
	}
	return true;
}

void func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_62(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_121();
}

void func_121()
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

auto func_122()
{
	return Global_101143;
}

auto func_123()
{
	auto uVar0;
	
	switch (func_13())
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_125(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_126(struct<2> Param0, Vector3 fParam1, struct<2> Param2, auto uParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

void func_127()
{
	Global_25355 = 1;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!has_ped_got_weapon(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return false;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar3 = get_ammo_in_ped_weapon(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = get_weapon_clip_size(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				get_max_ammo(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(10f, 0f, 0f)};
	if (iParam3)
	{
		vVar5 = {iParam4, iParam5, iParam6};
	}
	while (func_130(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (has_ped_got_weapon_component(iParam0, iVar2, func_130(iVar2, iVar8)))
			{
				if (func_129(func_130(iVar2, iVar8)))
				{
					iVar9 = get_weapon_component_type_model(func_130(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	iVar1 = create_weapon_object(iVar2, iVar3, vVar5, iVar0, 1f, iVar9, iParam7, iParam8);
	while (func_130(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (has_ped_got_weapon_component(iParam0, iVar2, func_130(iVar2, iVar8)))
			{
				give_weapon_component_to_weapon_object(iVar1, func_130(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (has_ped_got_weapon(iParam0, iVar2, 0))
		{
			set_weapon_object_tint_index(iVar1, get_ped_weapon_tint_index(iParam0, iVar2));
		}
	}
	return iVar1;
}

bool func_129(int iParam0)
{
	if (((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon"))
	{
		return true;
	}
	return false;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_131(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_131(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_132()
{
	int iVar0;
	
	iVar0 = has_cutscene_loaded();
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

int func_133(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_134(iParam0, iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	if (func_15(14) && !func_145(iParam0))
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
	if (func_144(&Global_2563627))
	{
		if (func_142(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_135(&Global_2563627, iParam0))
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

bool func_135(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_15(14) && !func_145(iParam1))
	{
		return false;
	}
	if (func_142(uParam0, iParam1))
	{
		return false;
	}
	if (func_141(uParam0) < 0f)
	{
		func_140(uParam0, 0);
	}
	func_138(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_136(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_136(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_15(14) && !func_145(iParam1))
	{
		return false;
	}
	if (func_142(uParam0, iParam1))
	{
		return false;
	}
	if (func_141(uParam0) < 0f)
	{
		func_140(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_137(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_137(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_138(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_139(uParam0, iVar0);
		iVar0++;
	}
	func_140(uParam0, Global_2563626 - 0.5f);
}

void func_139(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_140(auto uParam0, float fParam1)
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

auto func_141(auto uParam0)
{
	return *uParam0.f_72;
}

int func_142(auto uParam0, int iParam1)
{
	return func_143(uParam0, iParam1) != -1;
}

int func_143(auto uParam0, int iParam1)
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

int func_144(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_145(int iParam0)
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

void func_146()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 -= 0.6f / 1f / get_frame_time();
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		_set_door_ajar_angle(Global_34834[10 /*31*/], fLocal_183, 0, 1);
		_set_door_acceleration_limit(Global_34834[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 += 0.6f / 1f / get_frame_time();
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		_set_door_ajar_angle(Global_34834[9 /*31*/], fLocal_182, 0, 1);
		_set_door_acceleration_limit(Global_34834[9 /*31*/], 4, 0, 1);
	}
}

void func_147()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 += 0.6f / 1f / get_frame_time();
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		_set_door_ajar_angle(Global_34834[10 /*31*/], fLocal_183, 0, 1);
		_set_door_acceleration_limit(Global_34834[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 -= 0.6f / 1f / get_frame_time();
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		_set_door_ajar_angle(Global_34834[9 /*31*/], fLocal_182, 0, 1);
		_set_door_acceleration_limit(Global_34834[9 /*31*/], 4, 0, 1);
	}
}

void func_148()
{
	switch (iLocal_189)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			request_anim_dict("random@altruist_cult");
			prepare_music_event("AC_DELIVERED");
			request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && has_anim_dict_loaded("random@altruist_cult")) && prepare_music_event("AC_DELIVERED")) && has_weapon_asset_loaded(joaat("weapon_assaultrifle")))
			{
				if (Global_101154.f_29520.f_5 < 2)
				{
					if (Global_101154.f_29520.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101154.f_29520.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					STREAMING::REQUEST_MODEL(-2022916910);
					STREAMING::REQUEST_MODEL(-1322183878);
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!is_cutscene_active())
					{
						request_cutscene("ac_ig_3_p3_b", 8);
					}
				}
				if (does_blip_exist(iLocal_228))
				{
					remove_blip(&iLocal_228);
				}
				func_20(1, 1, 1, 0);
				set_player_control(player_id(), false, 0);
				clear_help(1);
				display_hud(false);
				display_radar(false);
				hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				trigger_music_event("AC_DELIVERED");
				if (func_168())
				{
					func_167(0);
				}
				func_165();
				wait(0);
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_213 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (is_vehicle_driveable(iLocal_213, 0))
					{
						if (is_vehicle_stopped(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = get_players_last_vehicle();
					if (!PED::IS_PED_INJURED(uLocal_193[0]) && !PED::IS_PED_INJURED(uLocal_193[1]))
					{
						AI::CLEAR_PED_TASKS(uLocal_193[0]);
						remove_ped_from_group(uLocal_193[0]);
						AI::CLEAR_PED_TASKS(uLocal_193[1]);
						remove_ped_from_group(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
			{
				if (!is_entity_a_mission_entity(iLocal_213))
				{
					set_entity_as_mission_entity(iLocal_213, true, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_213, vLocal_120, 13f, 13f, 13f, false, true, 0))
				{
					set_entity_coords(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, false, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_213, 0))
					{
						set_entity_heading(iLocal_213, 149.8882f);
						set_vehicle_on_ground_properly(iLocal_213);
					}
				}
			}
			clear_area(vLocal_120, 12f, 1, 0, 0, false);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_193[0]) && !PED::IS_PED_INJURED(uLocal_193[1]))
			{
				set_entity_coords(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				set_entity_heading(uLocal_193[0], 128.2065f);
				set_entity_coords(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, false, 0, 1);
				set_entity_heading(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_101154.f_29520.f_5 >= 2)
			{
				iLocal_196[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			set_blocking_of_non_temporary_events(iLocal_196[0], true);
			iLocal_215 = create_weapon_object(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_196[0], 1), 1, 1f, 0, 0, 1);
			attach_entity_to_entity(iLocal_215, iLocal_196[0], get_ped_bone_index(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_101154.f_29520.f_5 < 2)
			{
				iLocal_214 = create_object(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, true, false);
				attach_entity_to_entity(iLocal_214, PLAYER::PLAYER_PED_ID(), get_ped_bone_index(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_101154.f_29520.f_5 >= 2)
			{
				give_weapon_to_ped(iLocal_196[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_246 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_188 = create_synchronized_scene(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1000f, 0);
			task_synchronized_scene(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_101154.f_29520.f_5 >= 2)
			{
				task_synchronized_scene(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1000f, 0);
			}
			play_synchronized_cam_anim(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
			render_script_cams(true, false, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_193[0]) && !PED::IS_PED_INJURED(uLocal_193[1]))
			{
				task_synchronized_scene(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1000f, 0);
				task_synchronized_scene(uLocal_193[1], iLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				if (is_ped_male(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_193[1]))
			{
				if (is_ped_male(uLocal_193[1]))
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (get_synchronized_scene_phase(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				if (is_ped_male(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_193[1]))
			{
				if (is_ped_male(uLocal_193[1]))
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (get_synchronized_scene_phase(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_101154.f_29520.f_5 < 2)
			{
				func_127();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[0]))
				{
					PED::DELETE_PED(&(iLocal_196[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[1]))
				{
					PED::DELETE_PED(&(iLocal_196[1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
				{
					delete_object(&iLocal_214);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
				{
					delete_object(&iLocal_215);
				}
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				_0xC819F3CBB62BF692(0, 0f, 3, 0);
				set_cam_active(iLocal_246, false);
				func_20(0, 1, 1, 0);
				set_player_control(player_id(), true, 0);
				display_hud(true);
				display_radar(true);
				hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
				set_gameplay_cam_relative_heading(0f);
				func_149(func_13(), 1, 2000, 0, 0);
			}
			trigger_music_event("AC_DONE");
			Global_101154.f_29520.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_150(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3)
	{
		iVar0 = false;
		if (iParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_162();
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
					func_161(99, 1);
					func_160(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_160(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_160(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_158(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_157(5))
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
							func_160(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_157(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_160(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_160(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_160(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_property"), iParam3);
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
									func_160(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_157(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_156(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_161(95, iParam3);
					break;
				
				case 1:
					func_161(97, iParam3);
					break;
				
				case 2:
					func_161(96, iParam3);
					break;
			}
			func_161(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_153(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_153(iVar1);
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
					func_160(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_160(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_160(joaat("sp2_total_cash_earned"), iParam3);
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
	func_152(iParam0);
	if (Global_35711 == 15)
	{
		func_151(0);
	}
	return true;
}

void func_151(int iParam0)
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

void func_152(int iParam0)
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

void func_153(int iParam0)
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
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_155() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_155() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_154(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_154(int iParam0)
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

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156(int iParam0)
{
	func_161(93, iParam0);
	func_161(29, iParam0);
	func_161(30, iParam0);
}

int func_157(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_155() /*10375*/].f_7704.f_10, iParam0);
}

bool func_158(int iParam0)
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
		func_159(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_133(27, 1);
	return true;
}

int func_159(int iParam0, int iParam1)
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

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_161(int iParam0, int iParam1)
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

void func_162()
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

void func_163(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_164(iParam3), 0);
}

int func_164(int iParam0)
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

void func_165()
{
	Global_14578 = 0;
	func_166();
}

void func_166()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_167(int iParam0)
{
	Global_16723 = iParam0;
}

bool func_168()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

void func_169()
{
	switch (iLocal_189)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			request_anim_dict("random@altruist_cult");
			prepare_music_event("AC_DELIVERED");
			request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && has_anim_dict_loaded("random@altruist_cult")) && prepare_music_event("AC_DELIVERED")) && has_weapon_asset_loaded(joaat("weapon_assaultrifle")))
			{
				if (Global_101154.f_29520.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_101154.f_29520.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101154.f_29520.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101154.f_29520.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					STREAMING::REQUEST_MODEL(-2022916910);
					STREAMING::REQUEST_MODEL(-1322183878);
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!is_cutscene_active())
					{
						request_cutscene("ac_ig_3_p3_b", 8);
					}
				}
				if (does_blip_exist(iLocal_228))
				{
					remove_blip(&iLocal_228);
				}
				func_20(1, 1, 1, 0);
				set_player_control(player_id(), false, 0);
				clear_help(1);
				display_hud(false);
				display_radar(false);
				hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				trigger_music_event("AC_DELIVERED");
				if (func_168())
				{
					func_167(0);
				}
				func_165();
				wait(0);
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_213 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (is_vehicle_driveable(iLocal_213, 0))
					{
						if (is_vehicle_stopped(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = get_players_last_vehicle();
					if (!PED::IS_PED_INJURED(uLocal_193[0]))
					{
						AI::CLEAR_PED_TASKS(uLocal_193[0]);
						remove_ped_from_group(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
			{
				if (!is_entity_a_mission_entity(iLocal_213))
				{
					set_entity_as_mission_entity(iLocal_213, true, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_213, vLocal_120, 13f, 13f, 13f, false, true, 0))
				{
					set_entity_coords(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, false, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_213, 0))
					{
						set_entity_heading(iLocal_213, 149.8882f);
						set_vehicle_on_ground_properly(iLocal_213);
					}
				}
			}
			clear_area(vLocal_120, 12f, 1, 0, 0, false);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				set_entity_coords(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				set_entity_heading(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_101154.f_29520.f_5 >= 3)
			{
				iLocal_196[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_101154.f_29520.f_5 != 1 && Global_101154.f_29520.f_5 != 2)
			{
				func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			settimerb(0);
			set_blocking_of_non_temporary_events(iLocal_196[0], true);
			iLocal_214 = create_object(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, true, false);
			iLocal_215 = create_weapon_object(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_196[0], 1), 1, 1f, 0, 0, 1);
			attach_entity_to_entity(iLocal_215, iLocal_196[0], get_ped_bone_index(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_101154.f_29520.f_5 < 3)
			{
				if (Global_101154.f_29520.f_5 == 0)
				{
					attach_entity_to_entity(iLocal_214, PLAYER::PLAYER_PED_ID(), get_ped_bone_index(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					attach_entity_to_entity(iLocal_214, PLAYER::PLAYER_PED_ID(), get_ped_bone_index(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_101154.f_29520.f_5 >= 3)
			{
				give_weapon_to_ped(iLocal_196[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_246 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_188 = create_synchronized_scene(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1000f, 0);
			task_synchronized_scene(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_101154.f_29520.f_5 >= 3)
			{
				task_synchronized_scene(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1000f, 0);
			}
			play_synchronized_cam_anim(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
			render_script_cams(true, false, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				task_synchronized_scene(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				if (is_ped_male(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_101154.f_29520.f_5 == 1 || Global_101154.f_29520.f_5 == 2)
				{
					if (!func_107())
					{
						func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (get_synchronized_scene_phase(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_193[0]))
			{
				if (is_ped_male(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_101154.f_29520.f_5 == 1 || Global_101154.f_29520.f_5 == 2)
			{
				if ((get_synchronized_scene_phase(iLocal_188) > 0.9742857f && !iLocal_181) && get_follow_ped_cam_view_mode() == 4)
				{
					_start_screen_effect("CamPushInNeutral", false, 0);
					play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (get_synchronized_scene_phase(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_101154.f_29520.f_5 < 3)
			{
				if (Global_101154.f_29520.f_5 != 1 && Global_101154.f_29520.f_5 != 2)
				{
					func_127();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[0]))
					{
						PED::DELETE_PED(&(iLocal_196[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[1]))
					{
						PED::DELETE_PED(&(iLocal_196[1]));
					}
				}
				else
				{
					settimerb(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[0]))
					{
						set_entity_visible(iLocal_196[0], false, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[1]))
					{
						set_entity_visible(iLocal_196[1], false, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
					{
						set_entity_visible(uLocal_193[0], false, 0);
					}
					iLocal_189++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
				{
					delete_object(&iLocal_214);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
				{
					delete_object(&iLocal_215);
				}
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_101154.f_29520.f_5 == 0)
				{
					force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -668482597, false, 0, 0);
					simulate_player_input_gait(player_id(), 1f, 750, 0f, 1, 0);
				}
				if (GAMEPLAY::ARE_STRINGS_EQUAL(sLocal_408, "cult_p4_cam"))
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				else
				{
					_0xC819F3CBB62BF692(0, 0f, 3, 0);
				}
				set_cam_active(iLocal_246, false);
				func_20(0, 1, 1, 0);
				set_player_control(player_id(), true, 0);
				display_hud(true);
				display_radar(true);
				hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
				set_gameplay_cam_relative_heading(0f);
				func_149(func_13(), 1, 1000, 0, 0);
			}
			if (Global_101154.f_29520.f_5 != 1 && Global_101154.f_29520.f_5 != 2)
			{
				trigger_music_event("AC_DONE");
				Global_101154.f_29520.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_107() || timerb() > 7000)
			{
				func_127();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[0]))
				{
					PED::DELETE_PED(&(iLocal_196[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[1]))
				{
					PED::DELETE_PED(&(iLocal_196[1]));
				}
				trigger_music_event("AC_DONE");
				Global_101154.f_29520.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_170()
{
	if (func_172())
	{
		if (func_13() == 2)
		{
			if (does_group_exist(func_171()))
			{
				get_group_size(func_171(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = get_ped_as_group_member(func_171(), 0);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_193[0], vLocal_120, 5f, 5f, 5f, false, true, 0))
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
							{
								_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = get_ped_as_group_member(func_171(), 0);
					uLocal_193[1] = get_ped_as_group_member(func_171(), 1);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_193[0], vLocal_120, 5f, 5f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_193[1], vLocal_120, 5f, 5f, 5f, false, true, 0))
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
							{
								_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

int func_171()
{
	return get_player_group(get_player_index());
}

auto func_172()
{
	return Global_25354;
}

void func_173()
{
	if (func_176())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = add_scenario_blocking_area(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_92(player_id()), vLocal_117, 1) < 209f)
		{
			wait(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (get_relationship_between_groups(2017343592, 1862763509) != 5)
		{
			if (func_175())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (func_174())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_13() == 2)
	{
		if (get_relationship_between_groups(2017343592, 1862763509) != 5)
		{
			if (func_175())
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()) || (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()) && is_player_targetting_anything(player_id())))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
				}
			}
			else if (func_174())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (get_relationship_between_groups(2017343592, 1862763509) != 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_175())
	{
		if (iLocal_179)
		{
			if (!is_player_wanted_level_greater(player_id(), 3))
			{
				trigger_music_event("AC_START");
			}
			set_wanted_level_multiplier(0f);
			set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (does_object_of_type_exist_at_coords(Global_34834[9 /*31*/].f_2, 6f, Global_34834[9 /*31*/].f_5, 0))
			{
				set_state_of_closest_door_of_type(Global_34834[9 /*31*/].f_5, Global_34834[9 /*31*/].f_2, false, 0f, 0);
			}
			if (does_object_of_type_exist_at_coords(Global_34834[10 /*31*/].f_2, 6f, Global_34834[10 /*31*/].f_5, 0))
			{
				set_state_of_closest_door_of_type(Global_34834[10 /*31*/].f_5, Global_34834[10 /*31*/].f_2, false, 0f, 0);
			}
			iLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0x2DD39BF3E2F9C47F())
		{
			trigger_music_event("AC_END");
		}
		set_wanted_level_multiplier(1f);
		set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!iLocal_180)
		{
			func_146();
		}
		iLocal_179 = 1;
	}
}

bool func_174()
{
	if ((((((is_bullet_in_angled_area(vLocal_123, vLocal_126, fLocal_129, 1) || is_bullet_in_angled_area(vLocal_130, vLocal_133, fLocal_136, 1)) || is_bullet_in_angled_area(vLocal_137, vLocal_140, fLocal_143, 1)) || is_bullet_in_angled_area(vLocal_144, vLocal_147, fLocal_150, 1)) || is_bullet_in_angled_area(vLocal_151, vLocal_154, fLocal_157, 1)) || is_bullet_in_angled_area(vLocal_158, vLocal_161, fLocal_164, 1)) || is_bullet_in_angled_area(vLocal_165, vLocal_168, fLocal_171, 1))
	{
		return true;
	}
	return false;
}

bool func_175()
{
	if ((((((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_123, vLocal_126, fLocal_129, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_130, vLocal_133, fLocal_136, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_137, vLocal_140, fLocal_143, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_144, vLocal_147, fLocal_150, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_151, vLocal_154, fLocal_157, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_158, vLocal_161, fLocal_164, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_165, vLocal_168, fLocal_171, 0, true, 0))
	{
		return true;
	}
	return false;
}

bool func_176()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_177()
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, 1862763509);
	if (Global_101154.f_29520.f_5 >= iLocal_192 && Global_101154.f_29520.f_5 != 1000)
	{
		if (iLocal_172)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_178(&iLocal_249);
			Global_86868 = 0;
			Global_86869 = 0;
			Global_86870 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			set_fade_out_after_death(1);
			_disable_automatic_respawn(0);
			ignore_next_restart(0);
			func_3(0);
			set_wanted_level_multiplier(1f);
			_0xDC0F817884CDD856(3, true);
			_0xDC0F817884CDD856(5, true);
			clear_weather_type_persist();
			iLocal_179 = 0;
			func_93();
			Global_101154.f_29520.f_5 = iLocal_192 - 1;
			terminate_this_thread();
		}
	}
	else
	{
		remove_scenario_blocking_areas();
		func_178(&iLocal_249);
		Global_86868 = 0;
		Global_86869 = 0;
		Global_86870 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		set_fade_out_after_death(1);
		_disable_automatic_respawn(0);
		ignore_next_restart(0);
		func_3(0);
		if (has_scaleform_movie_loaded(iLocal_399))
		{
			set_scaleform_movie_as_no_longer_needed(&iLocal_399);
			func_95(0);
		}
		set_wanted_level_multiplier(1f);
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
		clear_weather_type_persist();
		iLocal_179 = 0;
		terminate_this_thread();
	}
}

void func_178(auto uParam0)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		set_scaleform_movie_as_no_longer_needed(uParam0);
		*uParam0 = 0;
	}
}

