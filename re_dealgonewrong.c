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
	Vector3 vLocal_43 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	Vector3 vLocal_49 = 0;
	Vector3[] vLocal_52 = new Vector3[9];
	float[] fLocal_80 = new float[9];
	Vector3 vLocal_90 = 0;
	Vector3 vLocal_93 = 0;
	Vector3 vLocal_96 = 0;
	Vector3 vLocal_99 = 0;
	Vector3 vLocal_102 = 0;
	Vector3 vLocal_105 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	Vector3 fLocal_112 = 0;
	Vector3 vLocal_113 = 0;
	auto uLocal_116 = 0;
	Vector3 vLocal_117 = 0;
	Vector3 fLocal_120 = 0;
	Vector3 fLocal_121 = 0;
	Vector3 fLocal_122 = 0;
	Vector3 fLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
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
	int[] iLocal_137 = new int[9];
	int[] iLocal_147 = new int[2];
	int[] iLocal_150 = new int[4];
	int[] iLocal_155 = new int[4];
	int[] iLocal_160 = new int[5];
	int[] iLocal_166 = new int[4];
	int[] iLocal_171 = new int[4];
	int[] iLocal_176 = new int[4];
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	var[] uLocal_184 = new var[9];
	var[] uLocal_194 = new var[4];
	var[] uLocal_199 = new var[4];
	var[] uLocal_204 = new var[4];
	var[] uLocal_209 = new var[4];
	int iLocal_214 = 0;
	int[] iLocal_215 = new int[5];
	int[] iLocal_221 = new int[12];
	Vector3 vLocal_234 = 0;
	Vector3 vLocal_237 = 0;
	Vector3 vLocal_240 = 0;
	Vector3 vLocal_243 = 0;
	Vector3[] vLocal_246 = new Vector3[5];
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	auto uLocal_271 = 16;
	auto uLocal_272 = 0;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
	auto uLocal_276 = 0;
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
	auto uLocal_291 = 0;
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
	auto uLocal_306 = 0;
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
	Vector3 vLocal_436 = 0;
	Vector3[] vLocal_439 = new Vector3[4];
	Vector3 vLocal_452 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	struct<2> Local_457 = 0;
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
	auto uLocal_474 = 5;
	auto uLocal_475 = 0;
	auto uLocal_476 = 0;
	auto uLocal_477 = 0;
	auto uLocal_478 = 0;
	auto uLocal_479 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	vLocal_234 = {-1635.648f, 4737.801f, 52.4304f};
	vLocal_237 = {-1640.745f, 4696.386f, 39.279f};
	vLocal_49 = {Local_457.f_1[0 /*3*/]};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_167();
	}
	if (func_125(vLocal_49, -1, 0, 0, 0))
	{
		func_122(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if ((is_world_point_within_brain_activation_range() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_47 == 2)
		{
			if (!func_121())
			{
				if (func_120())
				{
					func_167();
				}
			}
			_0x208784099002BC30("RE_DGW", 0);
			switch (iLocal_47)
			{
				case 0:
					if (iLocal_455)
					{
						iLocal_47 = 1;
					}
					else
					{
						if (func_108())
						{
							func_167();
						}
						func_105();
					}
					break;
				
				case 1:
					func_104();
					func_93();
					break;
				
				case 2:
					switch (iLocal_46)
					{
						case 0:
							func_104();
							iLocal_46 = 1;
							break;
						
						case 1:
							func_104();
							func_73();
							if (iLocal_48 >= 6)
							{
								if (!func_72())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (iLocal_267)
										{
											func_71(&(iLocal_150[iVar0]), &(uLocal_194[iVar0]), &(iLocal_176[iVar0]), &(uLocal_204[iVar0]));
											func_66(iLocal_176[0], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(iLocal_176[1], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 2f, 0f, 1000, 0f);
											func_61(&(iLocal_150[iVar0]), &(uLocal_194[iVar0]), &(iLocal_176[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (iLocal_264)
										{
											func_71(&(iLocal_150[iVar0]), &(uLocal_194[iVar0]), &(iLocal_166[iVar0]), &(uLocal_204[iVar0]));
											func_66(iLocal_166[0], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(iLocal_166[1], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_61(&(iLocal_150[iVar0]), &(uLocal_194[iVar0]), &(iLocal_166[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (iLocal_265)
										{
											func_71(&(iLocal_155[iVar0]), &(uLocal_199[iVar0]), &(iLocal_171[iVar0]), &(uLocal_209[iVar0]));
											func_66(iLocal_171[0], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(iLocal_171[1], get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_61(&(iLocal_155[iVar0]), &(uLocal_199[iVar0]), &(iLocal_171[iVar0]), &(uLocal_209[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_36();
								}
							}
							if (((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) || is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_234, 100f, 100f, 100f, false, true, 0)) && iLocal_48 < 2)
							{
								func_36();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_167();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		remove_scenario_blocking_areas();
		set_wanted_level_multiplier(1f);
		if (does_blip_exist(iLocal_181))
		{
			remove_blip(&iLocal_181);
		}
		if (does_blip_exist(iLocal_182))
		{
			remove_blip(&iLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_blip_exist(uLocal_194[iVar0]))
			{
				remove_blip(&(uLocal_194[iVar0]));
			}
			if (does_blip_exist(uLocal_204[iVar0]))
			{
				remove_blip(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (is_entity_at_entity(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							iLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_blip_exist(uLocal_199[iVar0]))
			{
				remove_blip(&(uLocal_199[iVar0]));
			}
			if (does_blip_exist(uLocal_209[iVar0]))
			{
				remove_blip(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar0]))
					{
						if (is_entity_at_entity(iLocal_155[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							iLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			_0xDC0F817884CDD856(5, true);
			_0xDC0F817884CDD856(3, true);
		}
		if (iLocal_266)
		{
			func_3(func_31(), 1, 25000);
		}
		iLocal_262 = 1;
	}
	if (!is_sphere_visible(vLocal_234, 30f) && vdist(func_2(player_id()), vLocal_234) > 300f)
	{
		func_167();
	}
}

Vector3 func_2(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
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
	
	func_30();
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
					func_29(99, 1);
					func_28(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_28(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_28(joaat("sp2_money_total_spent"), iParam3);
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
							func_28(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_28(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_28(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_28(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_property"), iParam3);
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
									func_28(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_28(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_28(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_28(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_29(95, iParam3);
					break;
				
				case 1:
					func_29(97, iParam3);
					break;
				
				case 2:
					func_29(96, iParam3);
					break;
			}
			func_29(98, iParam3);
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
					func_28(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_28(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_28(joaat("sp2_total_cash_earned"), iParam3);
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
	func_29(93, iParam0);
	func_29(29, iParam0);
	func_29(30, iParam0);
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
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_29(int iParam0, int iParam1)
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

void func_30()
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

auto func_31()
{
	func_32();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_33(Global_101154.f_1826.f_539.f_3549))
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

int func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_36()
{
	while (func_60())
	{
		wait(false);
	}
	while (!func_59())
	{
		wait(false);
	}
	func_40(-1, 0);
	func_37();
	iLocal_47 = 3;
}

void func_37()
{
	func_38();
}

bool func_38()
{
	if (func_39(0))
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

int func_39(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_40(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_56(iParam0))
	{
		func_55(iParam0, iParam1);
		if (!func_54(51))
		{
			func_50("RE_REWARD", 1, 0, 4000, 10000, func_53(), 0, 138, 0);
			func_49(51);
		}
		if (func_48(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_47(iParam0, iParam1) != 322)
		{
			func_42(func_47(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_41(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_101140 = iParam0;
}

void func_42(int iParam0, auto uParam1, auto uParam2)
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
		func_45(891 + iParam0, 1, -1, 1);
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
		func_43();
	}
}

void func_43()
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
			if (func_44() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_38();
				}
			}
		}
	}
}

auto func_44()
{
	return Global_25120;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_46();
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

auto func_46()
{
	return Global_1312747;
}

int func_47(int iParam0, int iParam1)
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

bool func_48(int iParam0)
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

void func_49(int iParam0)
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

void func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_51(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_51(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_52();
	}
}

void func_52()
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

int func_53()
{
	func_32();
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

int func_54(int iParam0)
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

void func_55(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_56(int iParam0)
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

auto func_57()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_58(cVar0);
	return uVar16;
}

int func_58(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_59()
{
	return true;
}

bool func_60()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_61(auto uParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (is_vehicle_driveable(*uParam2, 0))
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (is_ped_in_vehicle(*uParam0, *uParam2, 0))
				{
					if (does_blip_exist(*iParam1))
					{
						remove_blip(iParam1);
					}
					iVar0 = 1;
				}
				else if (!does_blip_exist(*iParam1))
				{
					*iParam1 = func_64(*uParam0, 1, 145);
				}
			}
			if (!does_blip_exist(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_62(ENTITY::GET_ENTITY_COORDS(*uParam2, 1), 0);
					set_blip_colour(*iParam3, 1);
					set_blip_priority(*iParam3, 9);
					set_blip_name_from_text_file(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = {get_blip_coords(*iParam3)};
				vVar4 = {ENTITY::GET_ENTITY_COORDS(*uParam2, 1)};
				vVar1.x += vVar4.x - vVar1.x / 1f * timestep();
				vVar1.y += vVar4.y - vVar1.y / 1f * timestep();
				vVar1.z += vVar4.z - vVar1.z / 1f * timestep();
				set_blip_coords(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					remove_blip(iParam3);
				}
			}
		}
		else
		{
			if (does_blip_exist(*iParam3))
			{
				remove_blip(iParam3);
			}
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (!does_blip_exist(*iParam1))
				{
					*iParam1 = func_64(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_62(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_63(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_65(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_66(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, Vector3 fParam5, auto uParam6, Vector3 vParam7, int iParam8, float fParam9)
{
	Vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_train(ENTITY::GET_ENTITY_MODEL(iParam1))) && is_vehicle_on_all_wheels(iParam1)) && func_70(iParam0))
		{
			if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = {*uParam4};
				*uParam3 = *fParam5;
				*uParam2 = {_get_object_offset_from_coords(*uParam2, *uParam3, vParam7)};
				func_69(iParam1, uParam4, fParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = GAMEPLAY::GET_GAME_TIMER();
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - *uParam6 > iParam10)
			{
				if (func_68(iParam0, iParam1, 1) > fParam11 && get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_67(*uParam2))
					{
						if (!is_sphere_visible(*uParam2, 3f))
						{
							clear_area_of_peds(*uParam2, 1.5f, 0);
							clear_area_of_vehicles(*uParam2, 3f, 0, 0, 0, 0, false);
							set_entity_coords(iParam0, *uParam2, 1, false, 0, 1);
							set_entity_heading(iParam0, *uParam3);
							set_vehicle_on_ground_properly(iParam0);
							set_vehicle_forward_speed(iParam0, 10f);
							set_vehicle_engine_on(iParam0, true, 1, 0);
							*uParam6 = GAMEPLAY::GET_GAME_TIMER();
						}
						else
						{
							vVar0 = {_get_object_offset_from_coords(vLocal_113, fLocal_112, vParam7)};
							if (!func_67(vVar0))
							{
								if (!is_sphere_visible(vVar0, 2f))
								{
									clear_area_of_peds(vVar0, 1.5f, 0);
									clear_area_of_vehicles(vVar0, 3f, 0, 0, 0, 0, false);
									set_entity_coords(iParam0, vVar0, 1, false, 0, 1);
									set_entity_heading(iParam0, fLocal_112);
									set_vehicle_on_ground_properly(iParam0);
									set_vehicle_forward_speed(iParam0, 10f);
									set_vehicle_engine_on(iParam0, true, 1, 0);
									*uParam6 = GAMEPLAY::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

bool func_67(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

auto func_68(int iParam0, int iParam1, int iParam2)
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

void func_69(int iParam0, auto uParam1, auto uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			*uParam1 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
			*uParam2 = get_entity_heading(iParam0);
		}
	}
}

bool func_70(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (!is_vehicle_seat_free(iParam0, -1))
			{
				iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (does_blip_exist(*iParam1))
			{
				remove_blip(iParam1);
			}
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!is_ped_in_any_vehicle(*iParam0, 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (is_vehicle_driveable(*iParam2, 0))
				{
					if (is_ped_in_vehicle(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (is_vehicle_driveable(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				remove_vehicle_stuck_check(*iParam2);
				remove_vehicle_upsidedown_check(*iParam2);
				_0x18EB48CFC41F2EA0(*iParam2, 0f);
				set_vehicle_as_no_longer_needed(iParam2);
				if (does_blip_exist(*iParam3))
				{
					remove_blip(iParam3);
				}
			}
		}
		else
		{
			remove_vehicle_stuck_check(*iParam2);
			remove_vehicle_upsidedown_check(*iParam2);
			_0x18EB48CFC41F2EA0(*iParam2, 0f);
			set_vehicle_as_no_longer_needed(iParam2);
			if (does_blip_exist(*iParam3))
			{
				remove_blip(iParam3);
			}
		}
	}
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!iLocal_456)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_150[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_150[iVar1]))
			{
				if (is_entity_at_entity(iLocal_150[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_155[iVar1]))
			{
				if (is_entity_at_entity(iLocal_155[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_73()
{
	int iVar0;
	
	if (iLocal_456)
	{
		if (iLocal_267)
		{
		}
		else if (iLocal_264)
		{
			if (!PED::IS_PED_INJURED(iLocal_150[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_166[0], 0))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_150[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_166[1], 0))
			{
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_155[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_171[0], 0))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_155[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_171[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			remove_decal(iLocal_221[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_150[iVar0]))
			{
				if (does_blip_exist(uLocal_194[iVar0]))
				{
					remove_blip(&(uLocal_194[iVar0]));
					iLocal_124++;
				}
			}
			else if (!is_ped_in_any_vehicle(iLocal_150[iVar0], 0))
			{
				if (!does_blip_exist(uLocal_194[iVar0]))
				{
					uLocal_194[iVar0] = func_64(iLocal_150[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			remove_decal(iLocal_221[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_155[iVar0]))
			{
				if (does_blip_exist(uLocal_199[iVar0]))
				{
					remove_blip(&(uLocal_199[iVar0]));
					iLocal_125++;
				}
			}
			else if (!is_ped_in_any_vehicle(iLocal_155[iVar0], 0))
			{
				if (!does_blip_exist(uLocal_199[iVar0]))
				{
					uLocal_199[iVar0] = func_64(iLocal_155[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_124 >= 4 && iLocal_125 >= 4)
		{
			func_36();
		}
	}
	func_89();
	func_88();
	switch (iLocal_48)
	{
		case 0:
			if (((_0x5FC472C501CCADB3(player_id()) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_234 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!iLocal_267)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						iLocal_267 = true;
					}
				}
				if (get_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &vLocal_240, 1, 3f, 0f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_240, 20f, 20f, 20f, false, true, 0))
					{
						_0xDC0F817884CDD856(5, true);
						_0xDC0F817884CDD856(3, true);
						settimera(false);
						func_86();
						iLocal_48 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (timera() > 5000 || iLocal_267)
			{
				settimera(false);
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			if (iLocal_267)
			{
				if (timera() > 3500)
				{
					if (((!ENTITY::IS_ENTITY_DEAD(iLocal_176[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_176[1], 0)) && !PED::IS_PED_INJURED(iLocal_150[0])) && !PED::IS_PED_INJURED(iLocal_150[1]))
					{
						set_ped_into_vehicle(iLocal_150[0], iLocal_176[0], -1);
						set_ped_into_vehicle(iLocal_150[1], iLocal_176[1], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[0], 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[1], 3, false);
						set_ped_helmet(iLocal_150[0], 0);
						set_ped_helmet(iLocal_150[1], 0);
						iLocal_48 = 5;
					}
				}
			}
			if (timera() > 10000)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("rebel")))
					{
						iLocal_48 = 3;
					}
					else
					{
						iLocal_48 = 4;
					}
				}
				else
				{
					iLocal_48 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_243 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			iLocal_132 = get_random_int_in_range(10, 15);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (get_nth_closest_vehicle_node(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_439[1 /*3*/] = {vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f)};
					if (!is_sphere_visible(vLocal_439[0 /*3*/], 7f) && !is_sphere_visible(vLocal_439[1 /*3*/], 7f))
					{
						if (is_vehicle_driveable(iLocal_166[0], 0))
						{
							set_entity_coords(iLocal_166[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
							func_85(iLocal_166[0], iLocal_150[0]);
						}
						if (is_vehicle_driveable(iLocal_166[1], 0))
						{
							set_entity_coords(iLocal_166[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
							func_85(iLocal_166[1], iLocal_150[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						iLocal_264 = true;
						settimera(false);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_243 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			iLocal_132 = get_random_int_in_range(30, 35);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (get_nth_closest_vehicle_node(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_439[1 /*3*/] = {vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f)};
					if (!is_sphere_visible(vLocal_439[0 /*3*/], 7f) && !is_sphere_visible(vLocal_439[1 /*3*/], 7f))
					{
						if (is_vehicle_driveable(iLocal_171[0], 0))
						{
							set_entity_coords(iLocal_171[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
							func_85(iLocal_171[0], iLocal_155[0]);
						}
						if (is_vehicle_driveable(iLocal_171[1], 0))
						{
							set_entity_coords(iLocal_171[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
							func_85(iLocal_171[1], iLocal_155[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						iLocal_265 = true;
						settimera(false);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_243 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			iLocal_132 = get_random_int_in_range(5, 10);
			if (get_nth_closest_vehicle_node(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_439[1 /*3*/] = {vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f)};
				if (!is_sphere_visible(vLocal_439[0 /*3*/], 7f) && !is_sphere_visible(vLocal_439[1 /*3*/], 7f))
				{
					if (is_vehicle_driveable(iLocal_176[0], 0))
					{
						set_entity_coords(iLocal_176[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
						func_85(iLocal_176[0], iLocal_150[0]);
					}
					if (is_vehicle_driveable(iLocal_176[1], 0))
					{
						set_entity_coords(iLocal_176[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
						func_85(iLocal_176[1], iLocal_150[1]);
					}
					if (func_31() == 0)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 1)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 2)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					iLocal_264 = true;
					settimera(false);
					iLocal_48 = 6;
				}
			}
			break;
		
		case 6:
			if (func_60())
			{
				fLocal_120 = get_random_float_in_range(1.5f, 2.5f);
				fLocal_121 = get_random_float_in_range(2f, 4f);
				fLocal_122 = get_random_float_in_range(0.1f, 2f);
				if (iLocal_134 < 5 && iLocal_135 < GAMEPLAY::GET_GAME_TIMER())
				{
					vLocal_90 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
					shoot_single_bullet_between_coords(vLocal_90.x + fLocal_120, vLocal_90.y + fLocal_121, vLocal_90.z + fLocal_122, vLocal_90.x - fLocal_120, vLocal_90.y - fLocal_121, vLocal_90.z, 10, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
					iLocal_135 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(200, 500);
					iLocal_134++;
				}
			}
			if (iLocal_134 > 4)
			{
				iLocal_48 = 7;
			}
			break;
	}
}

int func_74(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

bool func_75(char* sParam0, int iParam1, int iParam2)
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
					func_83();
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
		if (func_82(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_81();
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
				func_80();
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
				if (func_79())
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
			if (func_78())
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
			func_77();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_76();
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
		func_83();
	}
	return false;
}

void func_76()
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

void func_77()
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

bool func_78()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_79()
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

void func_80()
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
		Global_14413 = func_31();
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

void func_81()
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

int func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_85(int iParam0, int iParam1)
{
	freeze_entity_position(iParam0, false);
	set_vehicle_on_ground_properly(iParam0);
	vLocal_436 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	vLocal_452 = {vLocal_243 - vLocal_436};
	set_entity_heading(iParam0, get_heading_from_vector_2d(vLocal_452.x, vLocal_452.y));
	if (iLocal_267)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				task_vehicle_chase(iParam1, PLAYER::PLAYER_PED_ID());
				wait(true);
				if (!PED::IS_PED_INJURED(iParam1))
				{
					set_task_vehicle_chase_behavior_flag(iParam1, 32, 1);
				}
			}
			else
			{
				task_vehicle_mission_ped_target(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			{
				set_vehicle_forward_speed(iParam0, get_entity_speed(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iParam1))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			task_vehicle_chase(iParam1, PLAYER::PLAYER_PED_ID());
		}
		else
		{
			task_vehicle_mission_ped_target(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
		}
		set_vehicle_forward_speed(iParam0, get_entity_speed(PLAYER::PLAYER_PED_ID()));
	}
}

void func_86()
{
	int iVar0;
	
	iLocal_166[0] = create_vehicle(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, true);
	set_entity_as_mission_entity(iLocal_166[0], true, 0);
	set_vehicle_engine_on(iLocal_166[0], true, 1, 0);
	set_vehicle_lights(iLocal_166[0], 2);
	set_entity_only_damaged_by_player(iLocal_166[0], true);
	freeze_entity_position(iLocal_166[0], true);
	set_vehicle_number_plate_text(iLocal_166[0], "49GNL112");
	iLocal_166[1] = create_vehicle(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, true);
	set_entity_as_mission_entity(iLocal_166[1], true, 0);
	set_vehicle_engine_on(iLocal_166[1], true, 1, 0);
	set_vehicle_lights(iLocal_166[1], 2);
	set_entity_only_damaged_by_player(iLocal_166[1], true);
	freeze_entity_position(iLocal_166[1], true);
	set_vehicle_number_plate_text(iLocal_166[1], "47TMS703");
	iLocal_176[0] = create_vehicle(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, true);
	set_entity_as_mission_entity(iLocal_176[0], true, 0);
	set_vehicle_engine_on(iLocal_176[0], true, 1, 0);
	set_vehicle_lights(iLocal_176[0], 2);
	set_entity_only_damaged_by_player(iLocal_176[0], true);
	freeze_entity_position(iLocal_176[0], true);
	set_vehicle_number_plate_text(iLocal_176[0], "49GNL112");
	iLocal_176[1] = create_vehicle(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, true);
	set_entity_as_mission_entity(iLocal_176[1], true, 0);
	set_vehicle_engine_on(iLocal_176[1], true, 1, 0);
	set_vehicle_lights(iLocal_176[1], 2);
	set_entity_only_damaged_by_player(iLocal_176[1], true);
	freeze_entity_position(iLocal_176[1], true);
	set_vehicle_number_plate_text(iLocal_176[1], "47TMS703");
	iLocal_150[0] = PED::CREATE_PED_inside_vehicle(iLocal_166[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_150[1] = PED::CREATE_PED_inside_vehicle(iLocal_166[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!iLocal_267)
	{
		iLocal_150[2] = PED::CREATE_PED_inside_vehicle(iLocal_166[0], 26, joaat("g_m_m_chigoon_02"), false, 1, true);
		iLocal_150[3] = PED::CREATE_PED_inside_vehicle(iLocal_166[1], 26, joaat("g_m_m_chigoon_02"), false, 1, true);
	}
	iLocal_171[0] = create_vehicle(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, true);
	set_entity_as_mission_entity(iLocal_171[0], true, 0);
	set_vehicle_engine_on(iLocal_171[0], true, 1, 0);
	set_vehicle_lights(iLocal_171[0], 2);
	set_entity_only_damaged_by_player(iLocal_171[0], true);
	freeze_entity_position(iLocal_171[0], true);
	set_vehicle_number_plate_text(iLocal_171[0], "49GNL112");
	iLocal_171[1] = create_vehicle(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, true);
	set_entity_as_mission_entity(iLocal_171[1], true, 0);
	set_vehicle_engine_on(iLocal_171[1], true, 1, 0);
	set_vehicle_lights(iLocal_171[1], 2);
	set_entity_only_damaged_by_player(iLocal_171[1], true);
	freeze_entity_position(iLocal_171[1], true);
	set_vehicle_number_plate_text(iLocal_171[1], "47TMS703");
	iLocal_155[0] = PED::CREATE_PED_inside_vehicle(iLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_155[1] = PED::CREATE_PED_inside_vehicle(iLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_155[2] = PED::CREATE_PED_inside_vehicle(iLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), false, 1, true);
	iLocal_155[3] = PED::CREATE_PED_inside_vehicle(iLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), false, 1, true);
	add_relationship_group("RE_deal1", &iLocal_268);
	add_relationship_group("RE_deal2", &iLocal_269);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_150[iVar0], iLocal_268);
			set_entity_as_mission_entity(iLocal_150[iVar0], true, 0);
			if (iLocal_267)
			{
				give_weapon_to_ped(iLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_150[1]))
				{
					give_weapon_to_ped(iLocal_150[1], joaat("weapon_pistol"), -1, true, true);
				}
				set_ped_accuracy(iLocal_150[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 3, false);
			}
			else
			{
				give_weapon_to_ped(iLocal_150[iVar0], joaat("weapon_pistol"), -1, true, true);
				set_ped_accuracy(iLocal_150[iVar0], 13);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 1, true);
			func_87(&uLocal_271, 4, iLocal_150[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_155[iVar0], iLocal_269);
			set_entity_as_mission_entity(iLocal_155[iVar0], true, 0);
			if (iLocal_267)
			{
				give_weapon_to_ped(iLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_150[1]))
				{
					give_weapon_to_ped(iLocal_150[1], joaat("weapon_pistol"), -1, true, true);
				}
				set_ped_accuracy(iLocal_150[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 3, false);
				func_87(&uLocal_271, 4, iLocal_150[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				give_weapon_to_ped(iLocal_155[iVar0], joaat("weapon_pistol"), -1, true, true);
				set_ped_accuracy(iLocal_155[iVar0], 13);
				func_87(&uLocal_271, 5, iLocal_155[iVar0], "REDGWSalvadoran", 0, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 1, true);
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, iLocal_269);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_269, iLocal_268);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_269, 1862763509);
	set_model_as_no_longer_needed(joaat("g_m_m_chigoon_02"));
	set_model_as_no_longer_needed(joaat("g_m_y_salvagoon_03"));
	set_model_as_no_longer_needed(joaat("rebel"));
	set_model_as_no_longer_needed(joaat("bobcatxl"));
	set_model_as_no_longer_needed(joaat("sanchez"));
	set_model_as_no_longer_needed(joaat("a_c_rottweiler"));
	iLocal_456 = true;
	iLocal_46 = 1;
}

void func_87(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_130)
	{
		case 0:
			if (iLocal_264)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_150[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar0++;
				}
			}
			if (iLocal_265)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar1]))
					{
						if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_155[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, iLocal_269);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, iLocal_268);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, 1862763509);
			if (iLocal_264)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar2]))
					{
						if ((!is_ped_in_combat(iLocal_150[iVar2], false) && AI::GET_SCRIPT_TASK_STATUS(iLocal_150[iVar2], 579380604) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_150[iVar2], 579380604) != 0)
						{
							AI::CLEAR_PED_TASKS(iLocal_150[iVar2]);
							task_combat_ped(iLocal_150[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							set_ped_keep_task(iLocal_150[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_74(&uLocal_271, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_130 = 4;
				}
			}
			if (iLocal_265)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar3]))
					{
						if ((!is_ped_in_combat(iLocal_155[iVar3], false) && AI::GET_SCRIPT_TASK_STATUS(iLocal_155[iVar3], 579380604) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_155[iVar3], 579380604) != 0)
						{
							AI::CLEAR_PED_TASKS(iLocal_155[iVar3]);
							task_combat_ped(iLocal_155[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
							set_ped_keep_task(iLocal_155[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_74(&uLocal_271, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_130 = 4;
				}
			}
			break;
	}
}

void func_89()
{
	switch (iLocal_128)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_237, 7f, 7f, 10f, false, true, 0))
				{
					func_91();
					wait(false);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					task_look_at_entity(iLocal_136, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (!does_blip_exist(iLocal_182))
					{
						iLocal_182 = func_90(iLocal_214);
					}
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_128++;
				}
			}
			else
			{
				iLocal_128++;
			}
			break;
	}
	switch (iLocal_129)
	{
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_136, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_60())
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_136))
						{
							task_look_at_entity(iLocal_136, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							settimerb(false);
							iLocal_129++;
						}
					}
				}
			}
			else
			{
				settimerb(false);
				iLocal_129++;
			}
			break;
		
		case 2:
			if (!func_60() || timerb() > 4000)
			{
				if (!PED::IS_PED_INJURED(iLocal_136))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_136, false);
					remove_blip(&iLocal_183);
				}
				if (timerb() > 7000)
				{
					if (!PED::IS_PED_INJURED(iLocal_137[6]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], false);
						remove_blip(&(uLocal_184[6]));
					}
				}
				if (timerb() > 9000)
				{
					if (!PED::IS_PED_INJURED(iLocal_137[7]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], false);
						remove_blip(&(uLocal_184[7]));
					}
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_137[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_137[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_136, false);
			}
			break;
	}
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

void func_91()
{
	Global_14578 = 0;
	func_92();
}

void func_92()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_93()
{
	int iVar0;
	
	if (has_pickup_been_collected(iLocal_214))
	{
		if (does_blip_exist(iLocal_181))
		{
			remove_blip(&iLocal_181);
		}
		if (does_blip_exist(iLocal_182))
		{
			remove_blip(&iLocal_182);
		}
		iLocal_129 = 1;
		iLocal_47 = 2;
		iLocal_46 = 0;
	}
	else
	{
		set_wanted_level_multiplier(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_137[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_137[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (does_blip_exist(uLocal_184[iVar0]))
				{
					remove_blip(&(uLocal_184[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_147)
		{
			if (!PED::IS_PED_INJURED(iLocal_147[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_121())
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_52[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (does_blip_exist(iLocal_181))
				{
					remove_blip(&iLocal_181);
				}
				if ((!does_blip_exist(iLocal_183) && !does_blip_exist(uLocal_184[6])) && !does_blip_exist(uLocal_184[7]))
				{
					iLocal_183 = func_64(iLocal_136, 1, 145);
					uLocal_184[6] = func_64(iLocal_137[6], 1, 145);
					uLocal_184[7] = func_64(iLocal_137[7], 1, 145);
				}
				_0x75A16C3DA34F1245(iLocal_183, false);
				_0x75A16C3DA34F1245(uLocal_184[6], false);
				_0x75A16C3DA34F1245(uLocal_184[7], false);
				func_94(1);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_137[6]))
		{
			if (((((AI::GET_SCRIPT_TASK_STATUS(iLocal_137[6], 1785177548) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_137[6], 1785177548) != 0) || is_entity_on_fire(iLocal_137[6])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[6])) || has_entity_been_damaged_by_any_ped(iLocal_137[6])) || has_entity_been_damaged_by_any_object(iLocal_137[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], false);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_137[7]))
		{
			if (((((AI::GET_SCRIPT_TASK_STATUS(iLocal_137[7], 1785177548) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_137[7], 1785177548) != 0) || is_entity_on_fire(iLocal_137[7])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[7])) || has_entity_been_damaged_by_any_ped(iLocal_137[7])) || has_entity_been_damaged_by_any_object(iLocal_137[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], false);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_136))
		{
			if (((((AI::GET_SCRIPT_TASK_STATUS(iLocal_136, 1785177548) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_136, 1785177548) != 0) || is_entity_on_fire(iLocal_136)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_136)) || has_entity_been_damaged_by_any_ped(iLocal_136)) || has_entity_been_damaged_by_any_object(iLocal_136))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_136, false);
			}
		}
		if (!iLocal_263)
		{
		}
	}
	func_89();
	switch (iLocal_131)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_137[6]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_137[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && has_entity_clear_los_to_entity_in_front(PLAYER::PLAYER_PED_ID(), iLocal_137[6]))
				{
					task_look_at_entity(iLocal_137[6], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_137[6], 4000, 2048, 2);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_131 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_137[7]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_137[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && has_entity_clear_los_to_entity_in_front(PLAYER::PLAYER_PED_ID(), iLocal_137[7]))
				{
					task_look_at_entity(iLocal_137[7], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_137[7], 4000, 2048, 2);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_131 = 1;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_137[6]) && PED::IS_PED_INJURED(iLocal_137[7]))
			{
				iLocal_131 = 2;
			}
			break;
		
		case 1:
			if (does_blip_exist(iLocal_183))
			{
				_0x75A16C3DA34F1245(iLocal_183, true);
			}
			if (does_blip_exist(uLocal_184[6]))
			{
				_0x75A16C3DA34F1245(uLocal_184[6], true);
			}
			if (does_blip_exist(uLocal_184[7]))
			{
				_0x75A16C3DA34F1245(uLocal_184[7], true);
			}
			iLocal_126 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_126 - iLocal_127 > 6000 && !func_60())
			{
				if (!PED::IS_PED_INJURED(iLocal_137[6]))
				{
				}
				if (!PED::IS_PED_INJURED(iLocal_137[7]))
				{
				}
				if (!does_blip_exist(iLocal_182))
				{
					iLocal_182 = func_90(iLocal_214);
				}
				set_wanted_level_multiplier(0f);
				if (!func_121())
				{
					func_94(1);
				}
				iLocal_131 = 2;
			}
			break;
	}
}

bool func_94(int iParam0)
{
	if (func_98())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_48(Global_101143))
		{
			func_95(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_48(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_96(func_97(iParam0), -1);
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
					func_96(func_97(iParam0), -1);
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
					func_96(func_97(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_96(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_97(int iParam0)
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

bool func_98()
{
	switch (func_99(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_99(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_103(0))
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
		if (!func_101(iParam2))
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
			func_100(uParam0, iParam4);
		}
	}
	return 2;
}

void func_100(auto uParam0, int iParam1)
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

int func_101(int iParam0)
{
	return func_102(iParam0, Global_35711);
}

bool func_102(int iParam0, int iParam1)
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

bool func_103(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_101(iParam0))
	{
		return false;
	}
	return true;
}

void func_104()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[0], 0))
	{
		if (get_ped_in_vehicle_seat(iLocal_160[0], -1) == iLocal_137[8])
		{
			_0x9D3AF56E94C9AE98(iLocal_160[0], 60000f);
			_0x9C11908013EA4715(iLocal_160[0]);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_136))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_136))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_136, false);
		}
	}
	else if (does_blip_exist(iLocal_183))
	{
		remove_blip(&iLocal_183);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!is_sphere_visible(vLocal_234, 30f) && vdist(func_2(player_id()), vLocal_234) > 300f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_137[iVar0]))
			{
				set_ped_as_no_longer_needed(&(iLocal_137[iVar0]));
			}
		}
		if (PED::IS_PED_INJURED(iLocal_137[iVar0]))
		{
			if (does_blip_exist(uLocal_184[iVar0]))
			{
				remove_blip(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	STREAMING::REQUEST_MODEL(joaat("g_m_m_chigoon_02"));
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_03"));
	STREAMING::REQUEST_MODEL(joaat("rebel"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("a_c_rottweiler"));
	STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
	request_anim_dict("random@dealgonewrong");
	request_anim_dict("random@dealgonewrongdead_peds");
	if ((((((((STREAMING::HAS_MODEL_LOADED(joaat("g_m_m_chigoon_02")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01"))) && has_anim_dict_loaded("random@dealgonewrong")) && has_anim_dict_loaded("random@dealgonewrongdead_peds"))
	{
		add_scenario_blocking_area(vLocal_234 - Vector(150f, 150f, 150f), vLocal_234 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		set_vehicle_model_is_suppressed(joaat("bobcatxl"), true);
		set_vehicle_model_is_suppressed(joaat("rebel"), true);
		_0xDC0F817884CDD856(5, false);
		_0xDC0F817884CDD856(3, false);
		iLocal_160[0] = create_vehicle(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, true);
		set_entity_as_mission_entity(iLocal_160[0], true, 0);
		set_vehicle_on_ground_properly(iLocal_160[0]);
		set_vehicle_engine_on(iLocal_160[0], true, 1, 0);
		set_vehicle_lights(iLocal_160[0], 2);
		set_vehicle_engine_health(iLocal_160[0], 500f);
		set_vehicle_petrol_tank_health(iLocal_160[0], 500f);
		set_vehicle_extra(iLocal_160[0], 1, true);
		set_vehicle_tyre_burst(iLocal_160[0], false, 0, 1000f);
		smash_vehicle_window(iLocal_160[0], 6);
		set_veh_radio_station(iLocal_160[0], "RADIO_06_COUNTRY");
		set_vehicle_number_plate_text(iLocal_160[0], "76JON418");
		set_vehicle_radio_enabled(iLocal_160[0], 1);
		iLocal_160[1] = create_vehicle(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, true);
		set_entity_as_mission_entity(iLocal_160[1], true, 0);
		set_vehicle_on_ground_properly(iLocal_160[1]);
		set_vehicle_engine_on(iLocal_160[1], true, 1, 0);
		set_vehicle_lights(iLocal_160[1], 2);
		set_vehicle_engine_health(iLocal_160[1], 600f);
		set_vehicle_petrol_tank_health(iLocal_160[1], 400f);
		set_vehicle_extra(iLocal_160[1], 1, true);
		set_vehicle_extra(iLocal_160[1], 2, true);
		set_vehicle_extra(iLocal_160[1], 3, false);
		set_vehicle_extra(iLocal_160[1], 4, false);
		smash_vehicle_window(iLocal_160[1], 6);
		set_veh_radio_station(iLocal_160[1], "RADIO_06_COUNTRY");
		set_vehicle_number_plate_text(iLocal_160[1], "79ERK121");
		set_vehicle_radio_enabled(iLocal_160[1], 1);
		set_vehicle_radio_loud(iLocal_160[1], 1);
		iLocal_160[2] = create_vehicle(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, true);
		set_vehicle_number_plate_text(iLocal_160[2], "83JOH802");
		set_entity_as_mission_entity(iLocal_160[2], true, 0);
		set_vehicle_on_ground_properly(iLocal_160[2]);
		set_vehicle_engine_on(iLocal_160[2], true, 1, 0);
		set_vehicle_lights(iLocal_160[2], 2);
		set_vehicle_engine_health(iLocal_160[2], 60f);
		set_vehicle_petrol_tank_health(iLocal_160[2], 1000f);
		set_vehicle_extra(iLocal_160[2], 1, false);
		set_vehicle_tyre_burst(iLocal_160[2], true, 0, 1000f);
		iLocal_160[3] = create_vehicle(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, true);
		set_vehicle_number_plate_text(iLocal_160[3], "85TOR114");
		set_entity_as_mission_entity(iLocal_160[3], true, 0);
		set_vehicle_on_ground_properly(iLocal_160[3]);
		set_vehicle_engine_on(iLocal_160[3], true, 1, 0);
		set_vehicle_lights(iLocal_160[3], 2);
		set_vehicle_engine_health(iLocal_160[3], 500f);
		set_vehicle_petrol_tank_health(iLocal_160[3], 500f);
		set_vehicle_extra(iLocal_160[3], 1, false);
		set_vehicle_extra(iLocal_160[3], 2, false);
		set_vehicle_extra(iLocal_160[3], 3, false);
		set_vehicle_extra(iLocal_160[3], 4, false);
		set_vehicle_tyre_burst(iLocal_160[3], false, 0, 1000f);
		set_vehicle_tyre_burst(iLocal_160[3], 5, 0, 1000f);
		if (!does_pickup_exist(iLocal_214))
		{
			iVar0 = false;
			GAMEPLAY::SET_BIT(&iVar0, true);
			GAMEPLAY::SET_BIT(&iVar0, 3);
			GAMEPLAY::SET_BIT(&iVar0, 4);
			iLocal_214 = create_pickup_rotate(joaat("pickup_money_case"), vLocal_237, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			set_model_as_no_longer_needed(joaat("prop_security_case_01"));
		}
		vLocal_246[0 /*3*/] = {-1640.411f, 4740.702f, 52.6218f};
		vLocal_246[1 /*3*/] = {-1624.664f, 4746.569f, 51.541f};
		vLocal_246[2 /*3*/] = {-1626.339f, 4734.232f, 51.6176f};
		vLocal_246[3 /*3*/] = {-1634.297f, 4741.213f, 51.9737f};
		vLocal_246[4 /*3*/] = {-1644.717f, 4736.446f, 52.3014f};
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!does_pickup_exist(iLocal_215[iVar1]))
			{
				iVar2 = false;
				GAMEPLAY::SET_BIT(&iVar2, 3);
				GAMEPLAY::SET_BIT(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_215[iVar1] = create_pickup(joaat("pickup_weapon_sawnoffshotgun"), vLocal_246[iVar1 /*3*/], iVar2, -1, 1, false);
				}
				else if (iVar1 == 4)
				{
					iLocal_215[iVar1] = create_pickup_rotate(joaat("pickup_weapon_assaultrifle"), vLocal_246[iVar1 /*3*/], 90f, 50f, 0f, false, 50, 2, 1, false);
				}
				else
				{
					iLocal_215[iVar1] = create_pickup(joaat("pickup_weapon_pistol"), vLocal_246[iVar1 /*3*/], iVar2, -1, 1, false);
				}
			}
			iVar1++;
		}
		vLocal_52[0 /*3*/] = {-1636.535f, 4708.455f, 46.09f};
		fLocal_80[0] = 177.0024f;
		vLocal_52[1 /*3*/] = {-1621.19f, 4744.868f, 52.4254f};
		fLocal_80[1] = 146.9645f;
		vLocal_52[2 /*3*/] = {-1622.795f, 4735.975f, 51.474f};
		fLocal_80[2] = 48.6546f;
		vLocal_52[3 /*3*/] = {-1632.695f, 4742.906f, 51.8604f};
		fLocal_80[3] = 155.0678f;
		vLocal_52[4 /*3*/] = {-1629.544f, 4738.6f, 52.1784f};
		fLocal_80[4] = 278.3085f;
		vLocal_52[5 /*3*/] = {-1634.764f, 4745.188f, 51.3926f};
		fLocal_80[5] = 270.3501f;
		vLocal_52[7 /*3*/] = {-1628.321f, 4731.502f, 51.7644f};
		fLocal_80[7] = 352.9167f;
		vLocal_52[6 /*3*/] = {-1640.311f, 4738.4f, 52.2f};
		fLocal_80[6] = 34.1111f;
		vLocal_117 = {-1641.735f, 4692.13f, 39.394f};
		fLocal_123 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_137[iVar1] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), vLocal_52[iVar1 /*3*/], fLocal_80[iVar1], 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_137[iVar1], 227, true);
			}
			else
			{
				iLocal_137[iVar1] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_52[iVar1 /*3*/], fLocal_80[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_147[0] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, true);
		iLocal_147[1] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_147)
		{
			set_ped_can_ragdoll(iLocal_147[iVar1], 1);
			set_entity_collision(iLocal_147[iVar1], true, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar1], 227, true);
			vLocal_90 = {ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar1], 1)};
			vLocal_93 = {vLocal_90.x, vLocal_90.y - 2f, vLocal_90.z - 0.5f};
			vLocal_96 = {vLocal_90.x, vLocal_90.y + 50f, vLocal_90.z - 0.5f};
			shoot_single_bullet_between_coords(vLocal_93, vLocal_96, 100, 1, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			iVar1++;
		}
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_137[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_147[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		AI::TASK_PLAY_ANIM_advanced(iLocal_147[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		_0x46D1A61A21F566FC(50f);
		func_107();
		_0x46D1A61A21F566FC(1f);
		if (is_vehicle_driveable(iLocal_160[0], 0))
		{
			iLocal_137[8] = PED::CREATE_PED_inside_vehicle(iLocal_160[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			set_entity_as_mission_entity(iLocal_137[8], true, 0);
			set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(iLocal_137[8], 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_137[8], false);
		}
		if (!does_blip_exist(iLocal_181))
		{
		}
		add_relationship_group("re_DealGoneWrong", &iLocal_270);
		iLocal_137[6] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_52[6 /*3*/], fLocal_80[6], 1, true);
		func_87(&uLocal_271, 4, iLocal_137[6], "REDGWChinese", 0, 1);
		set_blocking_of_non_temporary_events(iLocal_137[6], true);
		set_entity_only_damaged_by_player(iLocal_137[6], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137[6], iLocal_270);
		iVar3 = create_synchronized_scene(vLocal_52[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		task_synchronized_scene(iLocal_137[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1000f, 0);
		set_synchronized_scene_looped(iVar3, true);
		set_ped_keep_task(iLocal_137[6], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_137[6], 227, true);
		iLocal_137[7] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_80[7], 1, true);
		func_87(&uLocal_271, 5, iLocal_137[7], "REDGWSalvadoran", 0, 1);
		set_blocking_of_non_temporary_events(iLocal_137[7], true);
		set_entity_only_damaged_by_player(iLocal_137[7], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137[7], iLocal_270);
		iVar4 = create_synchronized_scene(vLocal_52[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		task_synchronized_scene(iLocal_137[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1000f, 0);
		set_synchronized_scene_looped(iVar4, true);
		set_synchronized_scene_phase(iVar4, 0.5f);
		set_ped_keep_task(iLocal_137[7], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_137[7], 227, true);
		iLocal_136 = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_117, fLocal_123, 1, true);
		func_87(&uLocal_271, 4, iLocal_136, "REDGWChinese", 0, 1);
		set_blocking_of_non_temporary_events(iLocal_136, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136, iLocal_270);
		iVar5 = create_synchronized_scene(vLocal_117, 7.5f, -12.75f, 51.5f, 0);
		task_synchronized_scene(iLocal_136, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1000f, 0);
		set_synchronized_scene_looped(iVar5, true);
		set_entity_rotation(iLocal_136, 4f, 18f, 326.7277f, 0, 1);
		set_ped_keep_task(iLocal_136, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_136, 227, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_270, 1862763509);
		if (func_31() == 0)
		{
			func_87(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_31() == 1)
		{
			func_87(&uLocal_271, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_31() == 2)
		{
			func_87(&uLocal_271, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_221[0] = add_decal(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[1] = add_decal(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[2] = add_decal(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[3] = add_decal(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[4] = add_decal(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[5] = add_decal(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[6] = add_decal(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[7] = add_decal(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[8] = add_decal(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[9] = add_decal(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(false);
		iLocal_221[10] = add_decal(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_137[iVar1], 0))
			{
				set_ped_can_ragdoll(iLocal_137[iVar1], 1);
				apply_ped_blood_damage_by_zone(iLocal_137[iVar1], 0, 0.3f, 0.6f, 3);
				apply_ped_blood_damage_by_zone(iLocal_137[iVar1], 0, 0.65f, 0.6f, 3);
				wait(get_random_int_in_range(100, 500));
				if (iVar1 <= 5)
				{
					if (does_blip_exist(uLocal_184[iVar1]))
					{
						remove_blip(&(uLocal_184[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(get_players_last_vehicle()))
		{
			if (!is_entity_a_mission_entity(get_players_last_vehicle()))
			{
				set_entity_as_mission_entity(get_players_last_vehicle(), true, 0);
			}
		}
		iLocal_455 = 1;
	}
}

Vector3 func_106(Vector3 vParam0)
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

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		wait(false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			vLocal_99 = {get_offset_from_entity_in_world_coords(iLocal_160[iVar0], 0f, 0f, 0.5f)};
		}
		iLocal_133 = 0;
		while (iLocal_133 < 5)
		{
			fLocal_120 = get_random_float_in_range(1.5f, 2.5f);
			fLocal_121 = get_random_float_in_range(2f, 4f);
			fLocal_122 = get_random_float_in_range(0.1f, 2f);
			wait(false);
			vLocal_102 = {vLocal_99.x - fLocal_120, vLocal_99.y - fLocal_121, vLocal_99.z + fLocal_122};
			vLocal_105 = {vLocal_99.x + fLocal_120, vLocal_99.y + fLocal_121, vLocal_99.z};
			shoot_single_bullet_between_coords(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			vLocal_102 = {vLocal_99.x + fLocal_120, vLocal_99.y + fLocal_121, vLocal_99.z + fLocal_122};
			vLocal_105 = {vLocal_99.x - fLocal_120, vLocal_99.y - fLocal_121, vLocal_99.z};
			shoot_single_bullet_between_coords(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			vLocal_102 = {vLocal_99.x + fLocal_120, vLocal_99.y - fLocal_121, vLocal_99.z + fLocal_122};
			vLocal_105 = {vLocal_99.x - fLocal_120, vLocal_99.y + fLocal_121, vLocal_99.z};
			shoot_single_bullet_between_coords(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			vLocal_102 = {vLocal_99.x - fLocal_120, vLocal_99.y + fLocal_121, vLocal_99.z + fLocal_122};
			vLocal_105 = {vLocal_99.x + fLocal_120, vLocal_99.y - fLocal_121, vLocal_99.z};
			shoot_single_bullet_between_coords(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			vLocal_102 = {vLocal_99.x, vLocal_99.y + fLocal_121, vLocal_99.z + fLocal_122};
			vLocal_105 = {vLocal_99.x, vLocal_99.y - fLocal_121, vLocal_99.z};
			shoot_single_bullet_between_coords(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
			iLocal_133++;
		}
		iVar0++;
	}
}

bool func_108()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_43) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_119())
		{
			return false;
		}
	}
	if (func_115())
	{
		return true;
	}
	if (func_109(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_109(float fParam0, int iParam1)
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
		if (func_33(func_31()))
		{
			iVar36 = func_53();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_110(iVar32, &Var0);
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

void func_110(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_111(uParam1, "Abigail1", func_113(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 1:
			func_111(uParam1, "Abigail2", func_113(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 2:
			func_111(uParam1, "Barry1", func_113(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 3:
			func_111(uParam1, "Barry2", func_113(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 4:
			func_111(uParam1, "Barry3", func_113(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 5:
			func_111(uParam1, "Barry3A", func_113(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 6:
			func_111(uParam1, "Barry3C", func_113(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 7:
			func_111(uParam1, "Barry4", func_113(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_112(iParam0), 0, 0);
			break;
		
		case 8:
			func_111(uParam1, "Dreyfuss1", func_113(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 9:
			func_111(uParam1, "Epsilon1", func_113(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 10:
			func_111(uParam1, "Epsilon2", func_113(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 11:
			func_111(uParam1, "Epsilon3", func_113(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 12:
			func_111(uParam1, "Epsilon4", func_113(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 13:
			func_111(uParam1, "Epsilon5", func_113(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 14:
			func_111(uParam1, "Epsilon6", func_113(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 15:
			func_111(uParam1, "Epsilon7", func_113(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 16:
			func_111(uParam1, "Epsilon8", func_113(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 17:
			func_111(uParam1, "Extreme1", func_113(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 18:
			func_111(uParam1, "Extreme2", func_113(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 19:
			func_111(uParam1, "Extreme3", func_113(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 20:
			func_111(uParam1, "Extreme4", func_113(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 21:
			func_111(uParam1, "Fanatic1", func_113(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 22:
			func_111(uParam1, "Fanatic2", func_113(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 23:
			func_111(uParam1, "Fanatic3", func_113(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_112(iParam0), 0, 1);
			break;
		
		case 24:
			func_111(uParam1, "Hao1", func_113(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_112(iParam0), 0, 1);
			break;
		
		case 25:
			func_111(uParam1, "Hunting1", func_113(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 26:
			func_111(uParam1, "Hunting2", func_113(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 27:
			func_111(uParam1, "Josh1", func_113(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 28:
			func_111(uParam1, "Josh2", func_113(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 29:
			func_111(uParam1, "Josh3", func_113(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 30:
			func_111(uParam1, "Josh4", func_113(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 31:
			func_111(uParam1, "Maude1", func_113(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 32:
			func_111(uParam1, "Minute1", func_113(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 33:
			func_111(uParam1, "Minute2", func_113(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 34:
			func_111(uParam1, "Minute3", func_113(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 35:
			func_111(uParam1, "MrsPhilips1", func_113(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 36:
			func_111(uParam1, "MrsPhilips2", func_113(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 37:
			func_111(uParam1, "Nigel1", func_113(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 38:
			func_111(uParam1, "Nigel1A", func_113(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 39:
			func_111(uParam1, "Nigel1B", func_113(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 40:
			func_111(uParam1, "Nigel1C", func_113(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 41:
			func_111(uParam1, "Nigel1D", func_113(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 42:
			func_111(uParam1, "Nigel2", func_113(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 43:
			func_111(uParam1, "Nigel3", func_113(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 44:
			func_111(uParam1, "Omega1", func_113(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 45:
			func_111(uParam1, "Omega2", func_113(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 46:
			func_111(uParam1, "Paparazzo1", func_113(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 47:
			func_111(uParam1, "Paparazzo2", func_113(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 48:
			func_111(uParam1, "Paparazzo3", func_113(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 49:
			func_111(uParam1, "Paparazzo3A", func_113(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 50:
			func_111(uParam1, "Paparazzo3B", func_113(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 51:
			func_111(uParam1, "Paparazzo4", func_113(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 52:
			func_111(uParam1, "Rampage1", func_113(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 54:
			func_111(uParam1, "Rampage3", func_113(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 55:
			func_111(uParam1, "Rampage4", func_113(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 56:
			func_111(uParam1, "Rampage5", func_113(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 53:
			func_111(uParam1, "Rampage2", func_113(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 57:
			func_111(uParam1, "TheLastOne", func_113(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 58:
			func_111(uParam1, "Tonya1", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 59:
			func_111(uParam1, "Tonya2", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 60:
			func_111(uParam1, "Tonya3", func_113(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 61:
			func_111(uParam1, "Tonya4", func_113(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 62:
			func_111(uParam1, "Tonya5", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_111(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_112(int iParam0)
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

struct<2> func_113(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_114(iParam0)};
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

struct<2> func_114(int iParam0)
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

bool func_115()
{
	if (func_118() && !func_119())
	{
		return true;
	}
	if (func_117() && func_116())
	{
		return true;
	}
	return false;
}

int func_116()
{
	return Global_100872 > 0;
}

bool func_117()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_118()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_119()
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

bool func_120()
{
	if (!func_101(5))
	{
		return true;
	}
	if (func_115())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_119())
		{
			return false;
		}
	}
	if (func_109(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_121()
{
	if ((Global_101143 == func_57() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_124(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_123();
}

void func_123()
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

void func_124(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_125(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_57();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_166())
		{
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_119())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_39(0))
		{
			return false;
		}
		if (func_115())
		{
			return false;
		}
		if (func_165())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_33(func_31()))
		{
			if (func_109(100f, 1) != -1)
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
		if (!func_164(iParam3))
		{
			return false;
		}
		if (func_33(func_31()))
		{
			if (func_163(func_31()) == 4 || func_163(func_31()) == 5)
			{
				return false;
			}
		}
		if (func_33(func_31()))
		{
			if (!func_162(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_161(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_160())
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
		if (!func_151(4))
		{
			return false;
		}
		if (!func_101(5))
		{
			return false;
		}
		if (func_150(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_150(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_164(30) && !func_150(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_33(func_31()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_149(iVar8))
				{
					if (func_127(iVar4))
					{
						if (!func_126(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_31() != iVar4)
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

int func_126(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_128(iVar0);
}

int func_128(int iParam0)
{
	return func_129(iParam0, 1);
}

bool func_129(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_149(iParam0))
	{
		return false;
	}
	func_130(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_130(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_131(func_142(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_131(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_141(iParam0, iParam1))
	{
		iVar0 = func_140(iParam1);
		iVar1 = func_138(iParam0);
		iVar2 = func_138(iParam0) - func_138(iParam1);
		iVar3 = func_140(iParam0) - func_140(iParam1);
		iVar4 = func_137(iParam0) - func_137(iParam1);
		iVar5 = func_136(iParam0) - func_136(iParam1);
		iVar6 = func_135(iParam0) - func_135(iParam1);
		iVar7 = func_134(iParam0) - func_134(iParam1);
	}
	else
	{
		iVar0 = func_140(iParam0);
		iVar1 = func_138(iParam1);
		iVar2 = func_138(iParam1) - func_138(iParam0);
		iVar3 = func_140(iParam1) - func_140(iParam0);
		iVar4 = func_137(iParam1) - func_137(iParam0);
		iVar5 = func_136(iParam1) - func_136(iParam0);
		iVar6 = func_135(iParam1) - func_135(iParam0);
		iVar7 = func_134(iParam1) - func_134(iParam0);
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
		iVar4 += func_133(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_132(to_float(iVar0 + 1), 0f, 12f));
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

float func_132(Vector3 fParam0, float fParam1, float fParam2)
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

int func_133(int iParam0, int iParam1)
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

int func_134(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_135(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_136(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_137(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_138(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_139(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(int iParam0)
{
	return (iParam0 && 15);
}

bool func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_149(iParam1) || !func_149(iParam0))
	{
		return true;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_142()
{
	auto uVar0;
	
	func_148(&uVar0, get_clock_seconds());
	func_147(&uVar0, get_clock_minutes());
	func_146(&uVar0, get_clock_hours());
	func_145(&uVar0, get_clock_day_of_month());
	func_144(&uVar0, get_clock_month());
	func_143(&uVar0, get_clock_year());
	return uVar0;
}

void func_143(auto uParam0, int iParam1)
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

void func_144(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_145(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_133(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_146(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_147(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_148(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_149(int iParam0)
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
	iVar0 = func_134(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_135(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_136(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_138(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_140(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_137(iParam0);
	if (iVar5 < 1 || iVar5 > func_133(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_150(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_151(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_31();
				if (!func_33(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_159()) || Global_100201) || Global_25122) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_155()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_159()) || Global_25122) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_159()) || Global_100201) || Global_25122) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_159()) || Global_100201) || Global_25122) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_159() || get_player_wanted_level(player_id()) > 0) || func_82(8, -1)) || func_154()) || func_153()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_157()) || func_156()) || func_153()) || func_152())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_159()) || Global_25122) || func_158()) || func_82(8, -1)) || func_156()) || func_155()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_159()) || func_156()) || Global_100201) || Global_25122) || func_158()) || Global_36839) || func_82(8, -1)) || func_155()) || func_153()) || func_154()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_159()) || Global_100201) || Global_25122) || func_158()) || func_82(8, -1)) || func_155()) || func_153()) || func_157()) || func_156()) || func_154())
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

auto func_152()
{
	return Global_91317.f_1;
}

int func_153()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_154()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_155()
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

int func_156()
{
	return Global_91330.f_297 > 0;
}

int func_157()
{
	return Global_91330.f_296 > 0;
}

auto func_158()
{
	return Global_1315913;
}

int func_159()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_160()
{
	func_80();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_161(int iParam0)
{
	return func_141(func_142(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31();
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

int func_163(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
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

bool func_165()
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

bool func_166()
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

void func_167()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		remove_scenario_blocking_areas();
		set_wanted_level_multiplier(1f);
		if (does_blip_exist(iLocal_181))
		{
			remove_blip(&iLocal_181);
		}
		if (does_blip_exist(iLocal_182))
		{
			remove_blip(&iLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_blip_exist(uLocal_194[iVar0]))
			{
				remove_blip(&(uLocal_194[iVar0]));
			}
			if (does_blip_exist(uLocal_204[iVar0]))
			{
				remove_blip(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (is_entity_at_entity(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							iLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_blip_exist(uLocal_199[iVar0]))
			{
				remove_blip(&(uLocal_199[iVar0]));
			}
			if (does_blip_exist(uLocal_209[iVar0]))
			{
				remove_blip(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar0]))
					{
						if (is_entity_at_entity(iLocal_155[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							iLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			_0xDC0F817884CDD856(5, true);
			_0xDC0F817884CDD856(3, true);
		}
		if (iLocal_266)
		{
			func_3(func_31(), 1, 25000);
		}
	}
	func_168(-1);
	terminate_this_thread();
}

void func_168(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_121())
	{
		func_172(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_171(30000);
		StringCopy(&cVar0, func_170(Global_101143, 1), 64);
		if (func_56(Global_101143) > 0)
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
	func_169(&Global_25179);
	Global_101144 = 0;
	func_124(-1);
}

void func_169(auto uParam0)
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

char* func_170(int iParam0, int iParam1)
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

void func_171(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_172(int iParam0)
{
	func_173(iParam0, 0, func_178(iParam0));
}

void func_173(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_142();
	func_176(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_175(uParam0, &uVar0);
	Var1 = {func_174(&uVar0)};
}

struct<16> func_174(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_138(*uParam0), 64);
	return cVar0;
}

void func_175(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_176(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_140(*uParam0);
	iVar2 = func_137(*uParam0);
	iVar3 = func_136(*uParam0);
	iVar4 = func_135(*uParam0);
	iVar5 = func_134(*uParam0);
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
	iVar6 = func_133(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_133(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_177(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_177(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_148(uParam0, iParam1);
	func_147(uParam0, iParam2);
	func_146(uParam0, iParam3);
	func_144(uParam0, iParam5);
	func_145(uParam0, iParam4);
	func_143(uParam0, iParam6);
}

int func_178(int iParam0)
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

