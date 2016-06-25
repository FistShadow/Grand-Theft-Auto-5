#region Local Var
	int iLocal_0 = 0;
	auto uLocal_1 = 0;
	auto uLocal_2 = 0;
	auto uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	auto uLocal_14 = 0;
	auto uLocal_15 = 0;
	float fLocal_16 = 0;
	auto uLocal_17 = 0;
	auto uLocal_18 = 0;
	int iLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	char* sLocal_22 = 0;
	float fLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	float fLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	Vector3 vLocal_49 = 0;
	Vector3 fLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	auto uLocal_55 = 16;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	auto uLocal_96 = 0;
	auto uLocal_97 = 0;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	auto uLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	auto uLocal_132 = 0;
	auto uLocal_133 = 0;
	auto uLocal_134 = 0;
	auto uLocal_135 = 0;
	auto uLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 0;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	auto uLocal_149 = 0;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	auto uLocal_157 = 0;
	auto uLocal_158 = 0;
	auto uLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	auto uLocal_162 = 0;
	auto uLocal_163 = 0;
	auto uLocal_164 = 0;
	auto uLocal_165 = 0;
	auto uLocal_166 = 0;
	auto uLocal_167 = 0;
	auto uLocal_168 = 0;
	auto uLocal_169 = 0;
	auto uLocal_170 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	auto uLocal_173 = 0;
	auto uLocal_174 = 0;
	auto uLocal_175 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	auto uLocal_186 = 0;
	auto uLocal_187 = 0;
	auto uLocal_188 = 0;
	auto uLocal_189 = 0;
	auto uLocal_190 = 0;
	auto uLocal_191 = 0;
	auto uLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 0;
	auto uLocal_195 = 0;
	auto uLocal_196 = 0;
	auto uLocal_197 = 0;
	auto uLocal_198 = 0;
	auto uLocal_199 = 0;
	auto uLocal_200 = 0;
	auto uLocal_201 = 0;
	auto uLocal_202 = 0;
	auto uLocal_203 = 0;
	auto uLocal_204 = 0;
	auto uLocal_205 = 0;
	auto uLocal_206 = 0;
	auto uLocal_207 = 0;
	auto uLocal_208 = 0;
	auto uLocal_209 = 0;
	auto uLocal_210 = 0;
	auto uLocal_211 = 0;
	auto uLocal_212 = 0;
	auto uLocal_213 = 0;
	auto uLocal_214 = 0;
	auto uLocal_215 = 0;
	auto uLocal_216 = 0;
	auto uLocal_217 = 0;
	auto uLocal_218 = 0;
	auto uLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	Vector3 vLocal_234 = 0;
	Vector3 vLocal_237 = 0;
	Vector3 vLocal_240 = 0;
	Vector3 vLocal_243 = 0;
	Vector3 vLocal_246 = 0;
	Vector3 vLocal_249 = 0;
	Vector3 vLocal_252 = 0;
	Vector3 vLocal_255 = 0;
	Vector3 vLocal_258 = 0;
	Vector3 vLocal_261 = 0;
	Vector3 vLocal_264 = 0;
	Vector3 vLocal_267 = 0;
	Vector3 vLocal_270 = 0;
	Vector3 vLocal_273 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var[] uLocal_285 = new var[2];
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int[] iLocal_290 = new int[2];
	int[] iLocal_293 = new int[5];
	int[] iLocal_299 = new int[3];
	int[] iLocal_303 = new int[2];
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	auto uLocal_314 = 8;
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
	auto uLocal_461 = 1;
	struct<2> Local_462 = 0;
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
	auto uLocal_479 = 5;
	auto uLocal_480 = 0;
	auto uLocal_481 = 0;
	auto uLocal_482 = 0;
	auto uLocal_483 = 0;
	auto uLocal_484 = 0;
#endregion

void main()
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	auto uVar11;
	int iVar12;
	auto uVar13;
	auto uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = _0x4A9923385BDB9DAD();
	iLocal_48 = _get_blip_info_id_iterator();
	fLocal_52 = -1f;
	iLocal_220 = 1;
	iLocal_229 = -1;
	iLocal_230 = -1;
	vLocal_246 = {370.2576f, -1597.488f, 35.94954f};
	vLocal_249 = {824.992f, -1289.267f, 27.24564f};
	vLocal_252 = {450.1889f, -981.6754f, 42.69174f};
	vLocal_255 = {-1088.37f, -842.2911f, 30.27554f};
	vLocal_258 = {608.9076f, 0.806411f, 100.2497f};
	vLocal_261 = {-562.0159f, -130.8113f, 37.4369f};
	vLocal_264 = {1855.237f, 3683.236f, 33.29165f};
	vLocal_267 = {-443.5063f, 6016.231f, 30.71787f};
	vLocal_270 = {-1034.6f, 4918.6f, 205.9f};
	iVar0 = 0;
	iVar10 = 0;
	vLocal_234 = {Local_462.f_1[0 /*3*/]};
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_290[0]))
		{
			if (is_ped_in_group(iLocal_290[0]))
			{
				remove_ped_from_group(iLocal_290[0]);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_290[1]))
		{
			if (is_ped_in_group(iLocal_290[1]))
			{
				remove_ped_from_group(iLocal_290[1]);
			}
		}
		func_233(Var1, &iLocal_290, iVar12);
	}
	func_232(&uLocal_314, 3);
	if (func_201(vLocal_234, -1, 0, 0, 0))
	{
		func_198(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (iVar0 != 7)
	{
		iVar18 = false;
		func_195(&uLocal_314);
		if (!is_world_point_within_brain_activation_range() && !func_194())
		{
			iVar18 = false;
			iVar0 = 7;
			func_233(Var1, &iLocal_290, iVar12);
		}
		if (!func_194())
		{
			if (func_193() || func_192(7))
			{
				iVar18 = false;
				iVar0 = 7;
				func_233(Var1, &iLocal_290, iVar12);
			}
		}
		_0x208784099002BC30("RE_GD", 0);
		if (func_191())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[0]))
			{
				PED::DELETE_PED(&(iLocal_290[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[1]))
			{
				PED::DELETE_PED(&(iLocal_290[1]));
			}
			while (!func_190())
			{
				wait(false);
			}
			func_186(9, 0);
			func_176(-1, 0);
			func_173();
			iVar18 = false;
			iVar0 = 7;
			func_233(Var1, &iLocal_290, iVar12);
		}
		if (is_player_wanted_level_greater(player_id(), 0) && !ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
		{
			if (is_cop_ped_in_area_3d(func_172(player_id()) - Vector(10f, 20f, 20f), func_172(player_id()) + Vector(10f, 20f, 20f)) || is_cop_vehicle_in_area_3d(func_172(player_id()) - Vector(10f, 20f, 20f), func_172(player_id()) + Vector(10f, 20f, 20f)))
			{
				if ((((!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1])) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 0)) && is_ped_in_vehicle(iLocal_290[0], get_players_last_vehicle(), 0)) && is_ped_in_vehicle(iLocal_290[1], get_players_last_vehicle(), 0))
				{
					if (get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
					{
						if (iLocal_230 == -1)
						{
							iLocal_230 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_230 = -1;
					}
					if (iLocal_230 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_230 + 1000)
					{
						if (!func_171())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_230 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_230 + 10000)
						{
							func_160();
							wait(false);
							func_162(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iLocal_290[0]))
							{
								open_sequence_task(&iLocal_309);
								task_leave_any_vehicle(false, false, 0);
								AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								close_sequence_task(iLocal_309);
								task_perform_sequence(iLocal_290[0], iLocal_309);
								clear_sequence_task(&iLocal_309);
								set_ped_keep_task(iLocal_290[0], true);
							}
							if (!PED::IS_PED_INJURED(iLocal_290[1]))
							{
								open_sequence_task(&iLocal_309);
								task_leave_any_vehicle(false, 500, 0);
								AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								close_sequence_task(iLocal_309);
								task_perform_sequence(iLocal_290[1], iLocal_309);
								clear_sequence_task(&iLocal_309);
								set_ped_keep_task(iLocal_290[1], true);
							}
							iVar18 = false;
							iVar0 = 7;
							func_233(Var1, &iLocal_290, iVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (get_player_wanted_level(player_id()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_310, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_310, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1033021910, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, iLocal_310);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, iLocal_310);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_283)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_160();
					wait(false);
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						AI::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						AI::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_283)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_290[1]))
			{
				if (PED::IS_PED_INJURED(iLocal_290[1]) || !is_entity_at_entity(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						open_sequence_task(&iLocal_309);
						task_leave_any_vehicle(false, false, 0);
						AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_290[0], iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_290[0], true);
						func_160();
						wait(false);
						func_162(&uLocal_55, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
				if (PED::IS_PED_INJURED(iLocal_290[0]) || !is_entity_at_entity(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						open_sequence_task(&iLocal_309);
						task_leave_any_vehicle(false, false, 0);
						AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_290[1], iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_290[1], true);
						func_160();
						wait(false);
						func_162(&uLocal_55, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
			}
		}
		if (func_159(&iLocal_290, get_players_last_vehicle(), 180f))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_283 = 1;
			}
			if (iLocal_283)
			{
				if (!iLocal_278)
				{
					func_158();
				}
				if (!iLocal_279)
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						open_sequence_task(&iLocal_309);
						if (is_entity_playing_anim(iLocal_289, "random@getawaydriver", "idle_a", 3) || is_entity_playing_anim(iLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, 5f, 3f, 2f, 0);
						AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 3000);
						task_start_scenario_in_place(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_289, iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_289, true);
						iLocal_279 = true;
					}
				}
			}
			else
			{
				iVar18 = false;
				iVar0 = 7;
				func_233(Var1, &iLocal_290, iVar12);
			}
			if (iLocal_278)
			{
				set_wanted_level_multiplier(1f);
				set_police_ignore_player(player_id(), 0);
				if (!PED::IS_PED_INJURED(iLocal_299[0]))
				{
					if (!is_player_wanted_level_greater(player_id(), 0))
					{
						if (is_entity_at_entity(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_171())
							{
								task_look_at_entity(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								func_162(&uLocal_55, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								settimerb(false);
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_299[0]))
								{
									set_blocking_of_non_temporary_events(iLocal_299[0], false);
								}
								if (!PED::IS_PED_INJURED(iLocal_299[1]))
								{
									set_blocking_of_non_temporary_events(iLocal_299[1], false);
								}
								if (timerb() > 3000)
								{
									while (!func_190())
									{
										wait(false);
									}
									func_186(9, 0);
									func_157(5);
									func_176(-1, 0);
									func_173();
									iVar18 = false;
									iVar0 = 7;
									func_233(Var1, &iLocal_290, iVar12);
								}
							}
						}
						else if (!is_entity_at_entity(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = false;
							iVar0 = 7;
							func_233(Var1, &iLocal_290, iVar12);
						}
					}
					else
					{
						AI::CLEAR_PED_TASKS(iLocal_299[0]);
						func_160();
						wait(false);
						iVar18 = false;
						iVar0 = 7;
						func_233(Var1, &iLocal_290, iVar12);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_289))
				{
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
			}
			if (iLocal_279)
			{
				if (!PED::IS_PED_INJURED(iLocal_289))
				{
					if (is_entity_at_entity(iLocal_289, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_171())
						{
							task_look_at_entity(iLocal_289, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
							func_162(&uLocal_55, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_289))
							{
								set_ped_can_be_targetted(iLocal_289, true);
							}
							while (func_171())
							{
								wait(false);
							}
							while (!func_190())
							{
								wait(false);
							}
							remove_all_shocking_events(1);
							func_186(9, 0);
							func_157(5);
							func_176(-1, 0);
							func_173();
							iVar18 = false;
							iVar0 = 7;
							func_233(Var1, &iLocal_290, iVar12);
						}
					}
					else if (!is_entity_at_entity(iLocal_289, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = false;
						iVar0 = 7;
						func_233(Var1, &iLocal_290, iVar12);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_299[0]))
				{
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_145())
				{
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
				if (func_133(1, Var1))
				{
					iVar18 = false;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_121(3))
				{
					iLocal_313 = 1;
					func_120(1);
					iVar17 = GAMEPLAY::GET_GAME_TIMER();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar18 = false;
				break;
			
			case 4:
				iVar18 = false;
				GAMEPLAY::SET_BIT(&uVar11, 4);
				GAMEPLAY::SET_BIT(&uVar11, true);
				GAMEPLAY::SET_BIT(&uVar11, 5);
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
					{
						if (func_119())
						{
							if (is_vehicle_driveable(get_players_last_vehicle(), 0))
							{
								if ((is_vehicle_seat_free(get_players_last_vehicle(), false) && is_vehicle_seat_free(get_players_last_vehicle(), 2)) && is_vehicle_seat_free(get_players_last_vehicle(), true))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				get_closest_vehicle_node_with_heading(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &uVar13, &uVar16, 1, 1077936128, 0);
				if (func_118(iVar17, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar10 > 1)
				{
					if (!func_194())
					{
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar18 = false;
							iVar0 = 6;
							break;
						}
						if (!iLocal_282)
						{
							if (is_ped_shooting_in_area(PLAYER::PLAYER_PED_ID(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_293)
								{
									if (!PED::IS_PED_INJURED(iLocal_293[iVar19]))
									{
										AI::TASK_SMART_FLEE_PED(iLocal_293[iVar19], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										set_ped_keep_task(iLocal_293[iVar19], true);
									}
									iVar19++;
								}
								if (!PED::IS_PED_INJURED(iLocal_289))
								{
									AI::TASK_SMART_FLEE_PED(iLocal_289, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									set_ped_keep_task(iLocal_289, true);
								}
								iLocal_282 = 1;
							}
						}
					}
				}
				else if (func_145())
				{
					iVar18 = false;
					iVar0 = 7;
					func_233(Var1, &iLocal_290, iVar12);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar10, Var1, &iLocal_290, &iVar18, &iVar12))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar18 = false;
				iVar0 = 7;
				func_233(Var1, &iLocal_290, iVar12);
				break;
				break;
			
			case 7:
				iVar18 = false;
				break;
		}
		if (iVar0 != 7)
		{
			wait(iVar18);
		}
	}
	func_233(Var1, &iLocal_290, iVar12);
}

bool func_1(int iParam0, struct<5> Param1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8)
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[2];
	float[] fVar8 = new float[2];
	Vector3 vVar11;
	Vector3 fVar14;
	Vector3[] vVar15 = new Vector3[5];
	Vector3 fVar31;
	Vector3[] vVar32 = new Vector3[5];
	int iVar48;
	Vector3 vVar49;
	int[] iVar52 = new int[3];
	Vector3 vVar56;
	Vector3 vVar59;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	
	vVar15[0 /*3*/] = {-56.7157f, -1317.766f, 27.9845f};
	vVar15[1 /*3*/] = {457.5345f, -813.3361f, 26.511f};
	vVar15[2 /*3*/] = {884.047f, -2239.43f, 29.4387f};
	vVar15[3 /*3*/] = {-1339.328f, -762.4225f, 19.314f};
	vVar15[4 /*3*/] = {-461.6898f, 283.665f, 82.2492f};
	vVar32[0 /*3*/] = {-45.2654f, -1290.126f, 28.1977f};
	vVar32[1 /*3*/] = {470.193f, -731.1867f, 26.412f};
	vVar32[2 /*3*/] = {889.9938f, -2177.638f, 29.5195f};
	vVar32[3 /*3*/] = {-1334.826f, -792.1527f, 18.8175f};
	vVar32[4 /*3*/] = {-424.5901f, 288.3558f, 82.2293f};
	switch (*iParam0)
	{
		case 0:
			if (func_117(vLocal_234, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam11 = 0;
			func_107(39, 1);
			func_107(40, 1);
			func_107(41, 1);
			func_107(42, 1);
			func_107(43, 1);
			func_107(44, 1);
			if (func_106() == 0)
			{
				func_105(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (func_106() == 1)
			{
				func_105(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (func_106() == 2)
			{
				func_105(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (vdist(vLocal_234, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0 /*3*/] = {943.1853f, 3647.218f, 31.3603f};
				fVar8[0] = 58.2967f;
				vVar1[1 /*3*/] = {941.3207f, 3650.301f, 31.3111f};
				fVar8[1] = 92.7793f;
				vVar11 = {939.2422f, 3649.755f, 31.3536f};
				fVar14 = 260.4475f;
			}
			else if (vdist(vLocal_234, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0 /*3*/] = {66.0644f, -1564.218f, 28.4602f};
				fVar8[0] = 198.4093f;
				vVar1[1 /*3*/] = {63.5055f, -1568.178f, 28.4602f};
				fVar8[1] = 254.133f;
				vVar11 = {68.4259f, -1569.067f, 28.6027f};
				fVar14 = 64.1114f;
			}
			iLocal_233 = get_player_group(player_id());
			set_all_vehicle_generators_active_in_area(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			add_scenario_blocking_area(vLocal_234 - Vector(50f, 50f, 50f), vLocal_234 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			set_ped_paths_in_area(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 0);
			set_roads_in_area(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			STREAMING::REQUEST_MODEL(joaat("picador"));
			STREAMING::REQUEST_MODEL(joaat("stanier"));
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("picador")) || !STREAMING::HAS_MODEL_LOADED(joaat("stanier"))) || !STREAMING::HAS_MODEL_LOADED(joaat("patriot")))
			{
				wait(false);
			}
			iVar52[0] = create_vehicle(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 1, true);
			iVar52[1] = create_vehicle(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 1, true);
			iVar52[2] = create_vehicle(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 1, true);
			set_vehicle_on_ground_properly(iVar52[0]);
			set_vehicle_on_ground_properly(iVar52[1]);
			set_vehicle_on_ground_properly(iVar52[2]);
			if (iLocal_231 == 0)
			{
			}
			add_relationship_group("reCriminals", &iLocal_310);
			add_relationship_group("reShopKeep", &iLocal_311);
			add_relationship_group("reCops", &iLocal_312);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, iLocal_310);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_312);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_312, -1533126372);
			*uParam10[0] = PED::CREATE_PED(22, Param1, vVar1[0 /*3*/], fVar8[0], 1, true);
			set_blocking_of_non_temporary_events(*uParam10[0], true);
			set_model_as_no_longer_needed(Param1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam10[0], iLocal_310);
			give_weapon_to_ped(*uParam10[0], joaat("weapon_appistol"), -1, true, true);
			set_ped_money(*uParam10[0], get_random_int_in_range(800, 2000));
			PED::SET_PED_CONFIG_FLAG(*uParam10[0], 206, true);
			set_ped_flee_attributes(*uParam10[0], 2, false);
			set_ped_flee_attributes(*uParam10[0], 1024, true);
			set_ped_flee_attributes(*uParam10[0], 65536, true);
			set_ped_component_variation(*uParam10[0], 9, true, false, 0);
			func_105(&uLocal_55, 2, *uParam10[0], "REGETRobber2", 0, 1);
			*uParam10[1] = PED::CREATE_PED(22, Param1.f_1, vVar1[1 /*3*/], fVar8[1], 1, true);
			set_blocking_of_non_temporary_events(*uParam10[1], true);
			set_model_as_no_longer_needed(Param1.f_1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam10[1], iLocal_310);
			give_weapon_to_ped(*uParam10[1], joaat("weapon_pistol"), -1, true, true);
			set_ped_money(*uParam10[1], get_random_int_in_range(800, 2000));
			PED::SET_PED_CONFIG_FLAG(*uParam10[1], 206, true);
			set_ped_flee_attributes(*uParam10[1], 2, false);
			set_ped_flee_attributes(*uParam10[1], 1024, true);
			set_ped_flee_attributes(*uParam10[1], 65536, true);
			set_ped_component_variation(*uParam10[1], false, 5, false, 0);
			set_ped_component_variation(*uParam10[1], true, true, false, 0);
			set_ped_component_variation(*uParam10[1], 2, true, false, 0);
			set_ped_component_variation(*uParam10[1], 3, 6, false, 0);
			set_ped_component_variation(*uParam10[1], 4, 6, 2, 0);
			set_ped_component_variation(*uParam10[1], 6, true, false, 0);
			set_ped_component_variation(*uParam10[1], 8, false, false, 0);
			set_ped_component_variation(*uParam10[1], 9, false, false, 0);
			set_ped_component_variation(*uParam10[1], 10, true, false, 0);
			set_ambient_voice_name(*uParam10[1], "PACKIE_AI_Norm_Part1_Booth");
			func_105(&uLocal_55, 1, *uParam10[1], "PACKIE", 0, 1);
			iLocal_289 = PED::CREATE_PED(4, Param1.f_2, vVar11, fVar14, 1, true);
			set_model_as_no_longer_needed(Param1.f_2);
			set_blocking_of_non_temporary_events(iLocal_289, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_289, iLocal_311);
			set_ambient_voice_name(iLocal_289, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_105(&uLocal_55, 3, iLocal_289, "StoreOwner", 0, 1);
			iLocal_293[0] = PED::CREATE_PED(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, true);
			set_model_as_no_longer_needed(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[0], 17, true);
			task_cower(iLocal_293[0], -1);
			iLocal_293[2] = PED::CREATE_PED(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, true);
			set_model_as_no_longer_needed(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[2], 17, true);
			task_start_scenario_in_place(iLocal_293[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_293[3] = PED::CREATE_PED(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, true);
			set_model_as_no_longer_needed(Param1.f_4);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_289, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[2], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[3], 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam10[0], 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam10[1], 0))
			{
				if (((((_0x7350823473013C02(iLocal_289) && _0x7350823473013C02(iLocal_293[0])) && _0x7350823473013C02(iLocal_293[2])) && _0x7350823473013C02(iLocal_293[3])) && _0x7350823473013C02(*uParam10[0])) && _0x7350823473013C02(*uParam10[1]))
				{
					request_anim_dict("random@getawaydriver@thugs");
					request_anim_dict("combat@gestures@pistol@halt");
					request_anim_dict("misslamar1ig_20");
					request_anim_dict("random@getawaydriver");
					while (((!has_anim_dict_loaded("random@getawaydriver@thugs") || !has_anim_dict_loaded("combat@gestures@pistol@halt")) || !has_anim_dict_loaded("misslamar1ig_20")) || !has_anim_dict_loaded("random@getawaydriver"))
					{
						wait(false);
					}
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						task_hands_up(iLocal_289, -1, false, -1, 0);
						if (!PED::IS_PED_INJURED(*uParam10[0]))
						{
							AI::TASK_PLAY_ANIM(*uParam10[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							task_look_at_entity(*uParam10[0], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
						if (!PED::IS_PED_INJURED(*uParam10[1]))
						{
							AI::TASK_PLAY_ANIM(*uParam10[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							task_look_at_entity(*uParam10[1], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
					}
					settimera(false);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (timera() > 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[0]))
				{
					func_103(iLocal_293[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (timera() > 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[2]))
				{
					func_103(iLocal_293[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (timera() > 2000)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[3]))
				{
					func_103(iLocal_293[3], "GENERIC_FRIGHTENED_HIGH", 24);
					settimera(false);
				}
			}
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, true, 0))
			{
				if (!iLocal_282)
				{
					if (!PED::IS_PED_INJURED(iLocal_293[0]))
					{
						task_smart_flee_coord(iLocal_293[0], vLocal_234, 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_293[2]))
					{
						open_sequence_task(&iLocal_309);
						task_pause(false, 250);
						task_smart_flee_coord(false, vLocal_234, 200f, -1, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_293[2], iLocal_309);
						clear_sequence_task(&iLocal_309);
					}
					if (!PED::IS_PED_INJURED(iLocal_293[3]))
					{
						open_sequence_task(&iLocal_309);
						task_pause(false, 500);
						task_smart_flee_coord(false, vLocal_234, 200f, -1, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_293[3], iLocal_309);
						clear_sequence_task(&iLocal_309);
					}
					iLocal_282 = 1;
				}
			}
			if (func_67(uParam10, get_players_last_vehicle()))
			{
				*iParam0 = 4;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (is_cop_ped_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)) || is_cop_vehicle_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
				{
					AI::TASK_SMART_FLEE_PED(*uParam10[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					AI::TASK_SMART_FLEE_PED(*uParam10[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_171())
			{
				if ((!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1])) && !PED::IS_PED_INJURED(iLocal_289))
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						task_look_at_entity(*uParam10[0], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						open_sequence_task(&iLocal_309);
						AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_289, iLocal_309);
						clear_sequence_task(&iLocal_309);
					}
					*iParam0 = 5;
				}
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (((is_player_wanted_level_greater(player_id(), 0) || is_ped_in_any_police_vehicle(PLAYER::PLAYER_PED_ID())) || is_cop_ped_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || is_cop_vehicle_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
				{
					AI::TASK_SMART_FLEE_PED(*uParam10[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					AI::TASK_SMART_FLEE_PED(*uParam10[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(iLocal_289))
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
				{
					task_turn_ped_to_face_entity(*uParam10[0], PLAYER::PLAYER_PED_ID(), -1);
					task_turn_ped_to_face_entity(*uParam10[1], PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_289, 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_289, 242628503) != 0)
			{
				open_sequence_task(&iLocal_309);
				AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_309);
				task_perform_sequence(iLocal_289, iLocal_309);
				clear_sequence_task(&iLocal_309);
			}
			if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
					{
						if (get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 0.1f)
						{
							if (func_119() && is_vehicle_on_all_wheels(get_players_last_vehicle()))
							{
								request_vehicle_asset(ENTITY::GET_ENTITY_MODEL(get_players_last_vehicle()), 3);
								if (!PED::IS_PED_INJURED(iLocal_289))
								{
									vLocal_273 = {ENTITY::GET_ENTITY_COORDS(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)};
									vVar56 = {get_offset_from_entity_in_world_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), -1.5f, -1.5f, 0f)};
									vVar59 = {get_offset_from_entity_in_world_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1.5f, 0f, 0f)};
									open_sequence_task(&iLocal_309);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									task_aim_gun_at_entity(false, iLocal_289, 1500, 0);
									task_go_to_coord_while_aiming_at_entity(0, vVar56, iLocal_289, 3f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									close_sequence_task(iLocal_309);
									task_perform_sequence(iLocal_290[0], iLocal_309);
									clear_sequence_task(&iLocal_309);
									open_sequence_task(&iLocal_309);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									task_aim_gun_at_entity(false, iLocal_289, 2500, 0);
									task_go_to_coord_while_aiming_at_entity(0, vVar59, iLocal_289, 3f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									close_sequence_task(iLocal_309);
									task_perform_sequence(iLocal_290[1], iLocal_309);
									clear_sequence_task(&iLocal_309);
								}
								else
								{
									set_ped_as_group_member(iLocal_290[0], func_65());
									set_ped_as_group_member(iLocal_290[1], func_65());
									set_ped_group_member_passenger_index(iLocal_290[0], true);
									set_ped_group_member_passenger_index(iLocal_290[1], false);
									if (ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
									{
										if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true))
										{
											iVar62 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true);
											if (!is_entity_a_mission_entity(iVar62))
											{
												set_entity_as_mission_entity(iVar62, true, 0);
												PED::DELETE_PED(&iVar62);
											}
										}
										if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false))
										{
											iVar62 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false);
											if (!is_entity_a_mission_entity(iVar62))
											{
												set_entity_as_mission_entity(iVar62, true, 0);
												PED::DELETE_PED(&iVar62);
											}
										}
									}
									set_ped_never_leaves_group(iLocal_290[0], 1);
									set_ped_never_leaves_group(iLocal_290[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_280)
							{
								if (!func_171())
								{
									func_162(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									task_look_at_entity(iLocal_290[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									iLocal_280 = 1;
								}
							}
						}
					}
				}
				else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), *uParam10[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_280)
					{
						if (!func_171())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							task_look_at_entity(iLocal_290[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							iLocal_280 = 1;
						}
					}
				}
			}
			if (iLocal_280 || iLocal_281)
			{
				if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 0.2f)
				{
					if (iLocal_230 == -1)
					{
						iLocal_230 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_230 = -1;
				}
				if (iLocal_230 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_230 + 10000)
				{
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						AI::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						set_ped_keep_task(iLocal_290[0], true);
						wait(false);
						set_ped_as_no_longer_needed(&(iLocal_290[0]));
					}
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						AI::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						set_ped_keep_task(iLocal_290[1], true);
						wait(false);
						set_ped_as_no_longer_needed(&(iLocal_290[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_64(uParam10, 120f);
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (((is_player_wanted_level_greater(player_id(), 0) || is_ped_in_any_police_vehicle(PLAYER::PLAYER_PED_ID())) || is_cop_ped_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || is_cop_vehicle_in_area_3d(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
				{
					AI::TASK_SMART_FLEE_PED(*uParam10[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					AI::TASK_SMART_FLEE_PED(*uParam10[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam11 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				if (!func_63(uParam10, get_players_last_vehicle(), 120f) || !iLocal_276)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
							{
								if (func_119() && is_vehicle_on_all_wheels(get_players_last_vehicle()))
								{
									request_vehicle_asset(ENTITY::GET_ENTITY_MODEL(get_players_last_vehicle()), 3);
									while (!has_vehicle_asset_loaded(ENTITY::GET_ENTITY_MODEL(get_players_last_vehicle())))
									{
										wait(false);
									}
									if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
									{
										if (!is_ped_in_group(iLocal_290[0]) && !is_ped_in_group(iLocal_290[1]))
										{
											AI::CLEAR_PED_TASKS(iLocal_290[0]);
											AI::CLEAR_PED_TASKS(iLocal_290[1]);
											task_look_at_entity(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
											set_ped_as_group_member(iLocal_290[0], func_65());
											set_ped_as_group_member(iLocal_290[1], func_65());
											set_ped_group_member_passenger_index(iLocal_290[0], true);
											set_ped_group_member_passenger_index(iLocal_290[1], false);
											if (ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
											{
												if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true))
												{
													iVar63 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true);
													if (!is_entity_a_mission_entity(iVar63))
													{
														set_entity_as_mission_entity(iVar63, true, 0);
														PED::DELETE_PED(&iVar63);
													}
												}
												if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false))
												{
													iVar63 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false);
													if (!is_entity_a_mission_entity(iVar63))
													{
														set_entity_as_mission_entity(iVar63, true, 0);
														PED::DELETE_PED(&iVar63);
													}
												}
											}
											set_ped_never_leaves_group(iLocal_290[0], 1);
											set_ped_never_leaves_group(iLocal_290[1], 1);
										}
									}
								}
								else if (!iLocal_280)
								{
									if (!func_171())
									{
										func_162(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_280 = 1;
									}
								}
							}
							else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), *uParam10[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_280)
								{
									if (!func_171())
									{
										func_162(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_280 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_290[0]))
			{
				if (!is_ped_in_group(iLocal_290[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
						{
							if ((AI::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) != 0) || AI::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) == 7)
							{
								set_ped_as_group_member(iLocal_290[0], func_65());
								set_ped_never_leaves_group(iLocal_290[0], 1);
							}
						}
					}
					else
					{
						set_ped_as_group_member(iLocal_290[0], func_65());
						set_ped_never_leaves_group(iLocal_290[0], 1);
					}
				}
				else
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!is_ped_getting_into_a_vehicle(iLocal_290[0]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_290[0], ENTITY::GET_ENTITY_COORDS(get_players_last_vehicle(), 1), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							set_ped_min_move_blend_ratio(iLocal_290[0], 2f);
						}
					}
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_290[0], -875674219) == 1 || AI::GET_SCRIPT_TASK_STATUS(iLocal_290[0], -875674219) == 0)
					{
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (!is_ped_in_group(iLocal_290[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
						{
							if ((AI::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) != 0) || AI::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) == 7)
							{
								set_ped_as_group_member(iLocal_290[1], func_65());
								set_ped_never_leaves_group(iLocal_290[1], 1);
							}
						}
					}
					else
					{
						set_ped_as_group_member(iLocal_290[1], func_65());
						set_ped_never_leaves_group(iLocal_290[1], 1);
					}
				}
				else
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!is_ped_getting_into_a_vehicle(iLocal_290[1]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_290[1], ENTITY::GET_ENTITY_COORDS(get_players_last_vehicle(), 1), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							set_ped_min_move_blend_ratio(iLocal_290[1], 2f);
						}
					}
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_290[1], -875674219) == 1 || AI::GET_SCRIPT_TASK_STATUS(iLocal_290[1], -875674219) == 0)
					{
					}
				}
			}
			if (!iLocal_276)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_INJURED(iLocal_290[0])) && !PED::IS_PED_INJURED(iLocal_290[1]))
					{
						if ((is_ped_in_vehicle(iLocal_290[0], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && !is_ped_in_vehicle(iLocal_290[1], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && !is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_290[1], 20f, 20f, 20f, 0, 1, 0))
						{
							iLocal_276 = true;
						}
						if ((is_ped_in_vehicle(iLocal_290[1], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && !is_ped_in_vehicle(iLocal_290[0], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && !is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_290[0], 20f, 20f, 20f, 0, 1, 0))
						{
							iLocal_276 = true;
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				if (func_63(uParam10, get_players_last_vehicle(), 120f) || iLocal_276)
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						open_sequence_task(&iLocal_309);
						AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_289, iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_289, true);
						set_ped_as_no_longer_needed(&iLocal_289);
					}
					func_62();
					if (!CAM::IS_SPHERE_VISIBLE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_307 = create_vehicle(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 1, true);
						iLocal_303[0] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), false, 1, true);
						give_weapon_to_ped(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						give_weapon_to_ped(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						set_ped_target_loss_response(iLocal_303[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_307 = create_vehicle(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 1, true);
						iLocal_303[0] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), false, 1, true);
						give_weapon_to_ped(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						give_weapon_to_ped(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						set_ped_target_loss_response(iLocal_303[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_307 = create_vehicle(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 1, true);
						iLocal_303[0] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_inside_vehicle(iLocal_307, 6, joaat("s_m_y_cop_01"), false, 1, true);
						give_weapon_to_ped(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						give_weapon_to_ped(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						set_ped_target_loss_response(iLocal_303[0], 0);
					}
					play_police_report("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					set_vehicle_is_wanted(get_players_last_vehicle(), 1);
					set_player_wanted_level(player_id(), 2, 0);
					set_player_wanted_level_now(player_id(), 0);
					set_wanted_level_difficulty(player_id(), 0f);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
					wait(1000);
					if (!iLocal_276)
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(*uParam10[iVar48]))
					{
						clear_entity_last_damage_entity(*uParam10[iVar48]);
					}
					iLocal_224 = GAMEPLAY::GET_GAME_TIMER();
					*iParam0 = 8;
				}
			}
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, true, 0))
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
				{
					AI::TASK_SMART_FLEE_PED(*uParam10[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					AI::TASK_SMART_FLEE_PED(*uParam10[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_64(uParam10, 120f);
			func_61();
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_60(iLocal_53);
			if (func_118(iLocal_224, 3000))
			{
				*iParam0 = 9;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_59(uParam10);
			if (get_player_wanted_level(player_id()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1533126372);
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
				{
					set_vehicle_is_wanted(get_players_last_vehicle(), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					set_vehicle_as_no_longer_needed(&iLocal_307);
				}
				if (!PED::IS_PED_INJURED(iLocal_303[0]))
				{
					set_ped_as_no_longer_needed(&(iLocal_303[0]));
				}
				if (!PED::IS_PED_INJURED(iLocal_303[1]))
				{
					set_ped_as_no_longer_needed(&(iLocal_303[1]));
				}
				func_60(iLocal_53);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0) && !PED::IS_PED_INJURED(*uParam10[iVar48]))
				{
					if (!is_ped_sitting_in_vehicle(*uParam10[iVar48], get_players_last_vehicle()))
					{
						if (!does_blip_exist(uLocal_285[iVar48]))
						{
							uLocal_285[iVar48] = func_57(*uParam10[iVar48], 0, 145);
							func_60(iLocal_53);
						}
					}
				}
				iVar48++;
			}
			func_64(uParam10, 120f);
			func_61();
			if (func_55())
			{
				*iParam0 = 12;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
				func_60(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1533126372);
				vVar49 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				fVar31 = 9999f;
				iVar64 = 0;
				while (iVar64 < vVar15.x)
				{
					if (vdist(vVar49, vVar15[iVar64 /*3*/]) < fVar31)
					{
						fVar31 = vdist(vVar49, vVar15[iVar64 /*3*/]);
						iLocal_223 = iVar64;
					}
					iVar64++;
				}
				if (func_54(vVar15[iLocal_223 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_223 = 0;
				}
				iLocal_53 = func_52(vVar15[iLocal_223 /*3*/], 1);
				if (func_106() == 2 && !func_51())
				{
					if (!does_blip_exist(iLocal_288))
					{
						iLocal_288 = func_52(vLocal_270, 0);
						set_blip_sprite(iLocal_288, 269);
						func_49();
					}
				}
				iLocal_224 = GAMEPLAY::GET_GAME_TIMER();
				if (!iLocal_222)
				{
					func_160();
					wait(false);
					func_162(&uLocal_55, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_222 = 1;
				}
				*iParam0 = 11;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam11 = 0;
			func_48(uParam10);
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				func_60(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				if (func_47(vVar15[iLocal_223 /*3*/]))
				{
					func_162(&uLocal_55, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_45())
				{
					func_160();
					wait(false);
					if (func_44())
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar15[iLocal_223 /*3*/], Global_19, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_290[0], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_290[1], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_60(iLocal_53);
						iVar48 = 0;
						while (iVar48 <= *uParam10 - 1)
						{
							if (iLocal_220)
							{
								_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f, 2, 0);
								wait(1000);
								iLocal_220 = 0;
							}
							if (!PED::IS_PED_INJURED(*uParam10[iVar48]))
							{
								clear_entity_last_damage_entity(*uParam10[iVar48]);
								remove_ped_from_group(*uParam10[iVar48]);
								remove_group(iLocal_233);
							}
							iVar48++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0) && !PED::IS_PED_INJURED(*uParam10[iVar48]))
				{
					if (!is_ped_sitting_in_vehicle(*uParam10[iVar48], get_players_last_vehicle()))
					{
						if (!does_blip_exist(uLocal_285[iVar48]))
						{
							uLocal_285[iVar48] = func_57(*uParam10[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_64(uParam10, 120f);
			func_61();
			if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 0.2f)
			{
				if (iLocal_230 == -1)
				{
					iLocal_230 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_230 = -1;
			}
			if (iLocal_230 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_230 + 60000)
			{
				func_160();
				wait(false);
				func_162(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_290[0]))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					set_ped_keep_task(iLocal_290[0], true);
				}
				if (!PED::IS_PED_INJURED(iLocal_290[1]))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					set_ped_keep_task(iLocal_290[1], true);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_55())
			{
				*iParam0 = 12;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_158();
			if (iLocal_278)
			{
				remove_ped_from_group(iLocal_290[0]);
				remove_ped_from_group(iLocal_290[1]);
				clear_player_wanted_level(player_id());
				func_160();
				wait(false);
				func_162(&uLocal_55, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(*uParam10[0]))
				{
					open_sequence_task(&iLocal_309);
					task_leave_any_vehicle(false, false, 4194304);
					AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					close_sequence_task(iLocal_309);
					task_perform_sequence(*uParam10[0], iLocal_309);
					clear_sequence_task(&iLocal_309);
					set_ped_keep_task(*uParam10[0], true);
				}
				if (!PED::IS_PED_INJURED(*uParam10[1]))
				{
					open_sequence_task(&iLocal_309);
					task_leave_any_vehicle(false, 500, 4194304);
					AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					close_sequence_task(iLocal_309);
					task_perform_sequence(*uParam10[1], iLocal_309);
					clear_sequence_task(&iLocal_309);
					set_ped_keep_task(*uParam10[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= *uParam10 - 1)
				{
					if (!PED::IS_PED_INJURED(*uParam10[iVar48]))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(*uParam10[iVar48], 242628503) != 1 || AI::GET_SCRIPT_TASK_STATUS(*uParam10[iVar48], 242628503) != 0)
						{
							if (!PED::IS_PED_INJURED(*uParam10[iVar48]))
							{
								iVar0 = 0;
								iLocal_228 = iVar48;
							}
						}
					}
					iVar48++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!PED::IS_PED_INJURED(*uParam10[0]))
				{
					task_look_at_entity(PLAYER::PLAYER_PED_ID(), *uParam10[iVar48], 4000, 2048, 2);
					open_sequence_task(&iVar0);
					task_leave_any_vehicle(false, false, 4194816);
					task_follow_nav_mesh_to_coord(false, vVar32[iLocal_223 /*3*/], 2f, -1, 0.25f, 0, 1193033728);
					AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(*uParam10[0], iVar0);
					clear_sequence_task(&iVar0);
					if (!PED::IS_PED_INJURED(*uParam10[1]))
					{
						open_sequence_task(&iVar0);
						task_leave_any_vehicle(false, 2000, 4194816);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
						task_follow_nav_mesh_to_coord(false, vVar32[iLocal_223 /*3*/], 2f, -1, 0.25f, 0, 1193033728);
						AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						close_sequence_task(iVar0);
						task_perform_sequence(*uParam10[1], iVar0);
						clear_sequence_task(&iVar0);
					}
					iVar0 = 0;
					set_ped_keep_task(*uParam10[iVar48], true);
					task_look_at_entity(*uParam10[iVar48], PLAYER::PLAYER_PED_ID(), 4000, 2052, 2);
					func_160();
					wait(false);
					if (iLocal_228 > 0)
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_162(&uLocal_55, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		
		case 15:
			if (!*iParam12)
			{
				if (!PED::IS_PED_INJURED(*uParam10[1]))
				{
					if (!iLocal_220)
					{
						set_player_control(player_id(), true, 0);
						iLocal_220 = 1;
					}
					func_17(func_106(), 1, 1000, 0, 1);
					*iParam12 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(*uParam10[0]) && !PED::IS_PED_INJURED(*uParam10[1]))
			{
				if (!is_ped_in_any_vehicle(*uParam10[0], 0) && !is_ped_in_any_vehicle(*uParam10[1], 0))
				{
					clear_prints();
					task_clear_look_at(PLAYER::PLAYER_PED_ID());
					while (!func_190())
					{
						wait(false);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_186(9, 0);
					}
					func_157(6);
					func_176(-1, 0);
					func_173();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*iParam12 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_283 = 1;
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, iLocal_310);
			clear_player_wanted_level(player_id());
			set_wanted_level_multiplier(0f);
			set_police_ignore_player(player_id(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (!PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (does_blip_exist(uLocal_285[iVar65]))
					{
						remove_blip(&(uLocal_285[iVar65]));
						if (is_ped_in_any_vehicle(iLocal_290[iVar65], 0))
						{
							task_leave_any_vehicle(iLocal_290[iVar65], false, 0);
						}
						if (does_blip_exist(iLocal_53))
						{
							remove_blip(&iLocal_53);
						}
						remove_ped_from_group(iLocal_290[iVar65]);
						task_combat_ped(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						set_ped_keep_task(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			func_160();
			wait(false);
			if (!PED::IS_PED_INJURED(iLocal_290[1]))
			{
				func_162(&uLocal_55, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_290[0]))
			{
				func_162(&uLocal_55, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!iLocal_279)
			{
				if (!PED::IS_PED_INJURED(iLocal_289))
				{
					set_ped_can_be_targetted(iLocal_289, false);
					AI::TASK_PLAY_ANIM(iLocal_289, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_293)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[iVar65]))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_293[iVar65], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					set_ped_keep_task(iLocal_293[iVar65], true);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, 1862763509);
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (does_blip_exist(uLocal_285[iVar65]))
					{
						remove_blip(&(uLocal_285[iVar65]));
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (!does_blip_exist(uLocal_285[iVar65]))
					{
						uLocal_285[iVar65] = func_57(iLocal_290[iVar65], 1, 145);
					}
					if (is_ped_in_group(iLocal_290[iVar65]))
					{
						remove_ped_from_group(iLocal_290[iVar65]);
					}
					if (is_ped_in_any_vehicle(iLocal_290[iVar65], 0))
					{
						task_leave_any_vehicle(iLocal_290[iVar65], false, 0);
						task_combat_ped(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						set_ped_keep_task(iLocal_290[iVar65], true);
					}
					else
					{
						task_combat_ped(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						set_ped_keep_task(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			if (does_blip_exist(iLocal_53))
			{
				remove_blip(&iLocal_53);
			}
			break;
		
		case 20:
			if (!func_171())
			{
				return true;
			}
			break;
	}
	return false;
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_3(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	
	GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), 14);
			break;
		
		case 13:
			GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), 16);
			break;
		
		case 12:
			GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), 15);
			break;
		
		case 11:
			GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), 17);
			break;
	}
	if (!iParam1)
	{
		iVar0 = 0;
		switch (func_16(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_14(iParam0);
		_set_notification_text_entry("FEED_CREW_U");
		_add_text_component_item_string(func_14(iParam0));
		_set_notification_message(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_13(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_6();
	}
}

void func_6()
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

int func_7()
{
	func_8();
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

void func_8()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_9(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_10(Global_101154.f_1826.f_539.f_3549))
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

int func_9(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(int iParam0)
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

auto func_14(int iParam0)
{
	return func_15(iParam0);
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

auto func_16(int iParam0)
{
	return Global_87486[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_18(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

bool func_18(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_43();
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
					func_42(99, 1);
					func_41(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_26(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_25(5))
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
							func_41(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_25(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_41(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_property"), iParam3);
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
									func_41(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_25(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_24(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_42(95, iParam3);
					break;
				
				case 1:
					func_42(97, iParam3);
					break;
				
				case 2:
					func_42(96, iParam3);
					break;
			}
			func_42(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_21(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_21(iVar1);
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
					func_41(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_total_cash_earned"), iParam3);
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
	func_20(iParam0);
	if (Global_35711 == 15)
	{
		func_19(0);
	}
	return true;
}

void func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(int iParam0)
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
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_23() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_23() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_22(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_22(int iParam0)
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

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_24(int iParam0)
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

int func_25(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_23() /*10375*/].f_7704.f_10, iParam0);
}

bool func_26(int iParam0)
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_27(27, 1);
	return true;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_28(iParam0, iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	if (func_9(14) && !func_39(iParam0))
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
	if (func_38(&Global_2563627))
	{
		if (func_36(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_29(&Global_2563627, iParam0))
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

bool func_29(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_9(14) && !func_39(iParam1))
	{
		return false;
	}
	if (func_36(uParam0, iParam1))
	{
		return false;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	func_32(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_30(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_30(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_9(14) && !func_39(iParam1))
	{
		return false;
	}
	if (func_36(uParam0, iParam1))
	{
		return false;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_31(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_31(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_32(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_34(uParam0, Global_2563626 - 0.5f);
}

void func_33(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_34(auto uParam0, float fParam1)
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

auto func_35(auto uParam0)
{
	return *uParam0.f_72;
}

int func_36(auto uParam0, int iParam1)
{
	return func_37(uParam0, iParam1) != -1;
}

int func_37(auto uParam0, int iParam1)
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

int func_38(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_39(int iParam0)
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

int func_40(int iParam0, int iParam1)
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

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_42(int iParam0, int iParam1)
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

void func_43()
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

bool func_44()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_45()
{
	if (func_106() == 2)
	{
		if (func_46())
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(get_player_ped(get_player_index()), 0), 1) < 400f)
			{
				if (!Global_25359)
				{
					trigger_music_event("AC_EN_ROUTE_CULT");
					Global_25359 = 1;
					if (!Global_25358)
					{
						Global_25358 = 1;
						return true;
					}
				}
			}
			else if (Global_25359)
			{
				trigger_music_event("AC_LEFT_AREA");
				Global_25359 = 0;
			}
		}
	}
	return false;
}

auto func_46()
{
	return Global_25354;
}

bool func_47(Vector3 vParam0)
{
	if (func_106() == 2)
	{
		if (func_46() && !Global_25357)
		{
			if (fLocal_52 == -1f)
			{
				fLocal_52 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0);
			}
			if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0) > fLocal_52 + 200f || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(get_player_ped(get_player_index()), 0), 1) < 400f)
			{
				Global_25357 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_48(auto uParam0)
{
	if (!PED::IS_PED_INJURED(*uParam0[0]) && !PED::IS_PED_INJURED(*uParam0[1]))
	{
		if (is_entity_at_entity(*uParam0[0], *uParam0[1], 15f, 15f, 15f, 0, 1, 0) && is_entity_at_entity(*uParam0[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_227)
			{
				case 0:
					iLocal_226 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_227++;
					break;
				
				case 1:
					if (func_118(iLocal_226, 2000))
					{
						if (!func_171())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_227++;
						}
					}
					break;
				
				case 2:
					if (!func_171())
					{
						if (func_106() == 0)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_106() == 1)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_106() == 2)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_227++;
					}
					break;
				}
			}
	}
}

void func_49()
{
	if (func_106() == 2)
	{
		if (!Global_25356)
		{
			func_50("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

void func_50(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_51()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

int func_52(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_53(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_54(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_55()
{
	if (func_56())
	{
		if (((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_246, 50f, 50f, 50f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_249, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_252, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_255, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_258, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_261, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_264, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_267, 50f, 50f, 50f, false, true, 0))
		{
			if (get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
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
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (is_ped_in_vehicle(iLocal_290[0], iVar0, 0) && is_ped_in_vehicle(iLocal_290[1], iVar0, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_58(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_59(auto uParam0)
{
	if (!PED::IS_PED_INJURED(*uParam0[0]) && !PED::IS_PED_INJURED(*uParam0[1]))
	{
		if (is_entity_at_entity(*uParam0[0], *uParam0[1], 15f, 15f, 15f, 0, 1, 0) && is_entity_at_entity(*uParam0[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_226 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_225++;
					break;
				
				case 1:
					if (func_118(iLocal_226, 2000))
					{
						if (!func_171())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_171())
					{
						if (func_106() == 0)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_106() == 1)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_106() == 2)
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_60(int iParam0)
{
	if (does_blip_exist(iParam0))
	{
		remove_blip(&iParam0);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (!PED::IS_PED_INJURED(iLocal_290[iVar0]))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!func_119())
				{
					set_blocking_of_non_temporary_events(iLocal_290[iVar0], true);
					if (is_ped_in_group(iLocal_290[iVar0]))
					{
						remove_ped_from_group(iLocal_290[iVar0]);
					}
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) != 0)
					{
						task_go_to_entity(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
					}
					if (is_ped_in_any_vehicle(iLocal_290[iVar0], 0))
					{
						task_leave_any_vehicle(iLocal_290[iVar0], false, 0);
					}
					if (!iLocal_281)
					{
						if (!func_171())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_281 = 1;
						}
					}
				}
				else
				{
					iLocal_281 = 0;
					set_blocking_of_non_temporary_events(iLocal_290[iVar0], false);
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) == 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) == 0)
					{
						AI::CLEAR_PED_TASKS(iLocal_290[iVar0]);
					}
					if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
					{
						set_ped_group_member_passenger_index(iLocal_290[0], true);
						set_ped_group_member_passenger_index(iLocal_290[1], false);
						if (ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
						{
							if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true))
							{
								iVar1 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), true);
								if (!is_entity_a_mission_entity(iVar1))
								{
									set_entity_as_mission_entity(iVar1, true, 0);
									PED::DELETE_PED(&iVar1);
								}
							}
							if (!is_vehicle_seat_free(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false))
							{
								iVar2 = get_ped_in_vehicle_seat(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), false);
								if (!is_entity_a_mission_entity(iVar2))
								{
									set_entity_as_mission_entity(iVar2, true, 0);
									PED::DELETE_PED(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!is_ped_in_group(iLocal_290[iVar0]))
			{
				AI::CLEAR_PED_TASKS(iLocal_290[iVar0]);
				set_ped_as_group_member(iLocal_290[iVar0], func_65());
				set_ped_never_leaves_group(iLocal_290[iVar0], 1);
				if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
				{
					set_ped_group_member_passenger_index(iLocal_290[0], true);
					set_ped_group_member_passenger_index(iLocal_290[1], false);
				}
			}
		}
		iVar0++;
	}
}

void func_62()
{
	if (!func_51())
	{
		if (func_106() == 2)
		{
			Global_25354 = 1;
		}
	}
}

bool func_63(auto uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (!PED::IS_PED_INJURED(*uParam0[iVar0]))
		{
			if (!is_ped_in_vehicle(*uParam0[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (is_entity_at_entity(*uParam0[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
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
		iVar0++;
	}
	return true;
}

void func_64(auto uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (PED::IS_PED_INJURED(*uParam0[iVar0]))
		{
			if (does_blip_exist(uLocal_285[iVar0]))
			{
				remove_blip(&(uLocal_285[iVar0]));
			}
		}
		else
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (is_ped_in_vehicle(*uParam0[iVar0], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (does_blip_exist(uLocal_285[iVar0]))
						{
							remove_blip(&(uLocal_285[iVar0]));
						}
					}
					else if (!does_blip_exist(uLocal_285[iVar0]))
					{
						uLocal_285[iVar0] = func_57(*uParam0[iVar0], 0, 145);
					}
				}
			}
			else if (!does_blip_exist(uLocal_285[iVar0]))
			{
				uLocal_285[iVar0] = func_57(*uParam0[iVar0], 0, 145);
			}
			if (!is_entity_at_entity(*uParam0[iVar0], PLAYER::PLAYER_PED_ID(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (does_blip_exist(uLocal_285[iVar0]))
				{
					remove_blip(&(uLocal_285[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_65()
{
	return get_player_group(get_player_index());
}

bool func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_290[iVar0]))
			{
				if (!is_ped_in_group(iLocal_290[iVar0]))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						if (has_entity_clear_los_to_entity_in_front(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
							{
								if (((is_player_free_aiming_at_entity(player_id(), iLocal_290[0]) || is_player_targetting_entity(player_id(), iLocal_290[0])) || is_player_free_aiming_at_entity(player_id(), iLocal_290[1])) || is_player_targetting_entity(player_id(), iLocal_290[1]))
								{
									if (iLocal_229 == -1)
									{
										iLocal_229 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_229 = -1;
								}
							}
						}
					}
					if (!iLocal_284)
					{
						if (iLocal_229 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_229 + 1000)
						{
							func_160();
							wait(false);
							func_162(&uLocal_55, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_284 = 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], get_players_last_vehicle(), 1))
						{
							return true;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), 1) && get_entity_health(iLocal_290[iVar0]) < 190) || (iLocal_229 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_229 + 5000))
					{
						return true;
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], get_players_last_vehicle(), 1))
					{
						return true;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_67(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iLocal_221)
	{
		iVar0 = 0;
		while (iVar0 <= *uParam0 - 1)
		{
			if (!PED::IS_PED_INJURED(*uParam0[iVar0]))
			{
				if ((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(*uParam0[iVar0])) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
				{
					if (!does_blip_exist(uLocal_285[iVar0]))
					{
						if (!PED::IS_PED_INJURED(*uParam0[iVar0]))
						{
							if (!func_194())
							{
								func_93(1);
								func_92(1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_308, 0))
								{
									if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_308, 0) && !is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_308, 50f, 50f, 50f, 0, 1, 0))
									{
										func_70(iLocal_308, 0, 145);
									}
								}
							}
							uLocal_285[iVar0] = func_57(*uParam0[iVar0], 0, 145);
							_0x75A16C3DA34F1245(uLocal_285[iVar0], false);
							func_60(iLocal_54);
						}
					}
					if (!func_171())
					{
						if (iLocal_232 < GAMEPLAY::GET_GAME_TIMER())
						{
							func_162(&uLocal_55, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_232 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(3500, 4000);
						}
					}
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
					{
						func_68();
						if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
						{
							if (!func_171())
							{
								if (func_119() && is_vehicle_on_all_wheels(get_players_last_vehicle()))
								{
									func_162(&uLocal_55, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_221 = 1;
								}
								else
								{
									func_162(&uLocal_55, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_221 = 1;
								}
								if (does_blip_exist(uLocal_285[0]))
								{
									_0x75A16C3DA34F1245(uLocal_285[0], true);
								}
								if (does_blip_exist(uLocal_285[1]))
								{
									_0x75A16C3DA34F1245(uLocal_285[1], true);
								}
								if (!PED::IS_PED_INJURED(*uParam0[1]) && !PED::IS_PED_INJURED(iLocal_289))
								{
									set_ped_reset_flag(*uParam0[1], 156, true);
									open_sequence_task(&iLocal_309);
									AI::TASK_PLAY_ANIM(false, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									AI::TASK_PLAY_ANIM(false, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									task_aim_gun_at_entity(false, iLocal_289, -1, 0);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									close_sequence_task(iLocal_309);
									task_perform_sequence(*uParam0[1], iLocal_309);
									clear_sequence_task(&iLocal_309);
								}
								task_look_at_entity(*uParam0[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_68()
{
	Global_14578 = 0;
	func_69();
}

void func_69()
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

bool func_70(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = get_entity_script(iParam0, &uVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (GAMEPLAY::GET_HASH_KEY(sVar1) == GAMEPLAY::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return false;
			}
		}
	}
	func_71(iParam0, iParam2);
	return true;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_76(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_72(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_72(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_75(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_74(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_73(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
		}
	}
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_74(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_75(auto uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

bool func_76(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_90(iParam0, 0, 0)) || func_90(iParam0, 1, 0)) || func_90(iParam0, 2, 0)) || func_89(iParam0) != 145) || func_88(iParam0)) || func_87(iParam0)) || func_86(iParam0)) || func_85(iParam0)) || !func_77(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_87(iParam0))
		{
		}
		if (func_87(iParam0))
		{
		}
		if (func_90(iParam0, 0, 0))
		{
		}
		if (func_90(iParam0, 1, 0))
		{
		}
		if (func_90(iParam0, 2, 0))
		{
		}
		if (func_89(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_77(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_78(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_84())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_83() && !func_82()) && !func_81()) && !func_80()) && !func_84())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_81())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_79(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_80()
{
	return false;
}

bool func_81()
{
	return true;
}

bool func_82()
{
	return true;
}

bool func_83()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_84()
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

bool func_85(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_78(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_87(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_88(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_91(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_91(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_92(int iParam0)
{
	if (iParam0)
	{
		StringCopy(&Global_100210, get_this_script_name(), 24);
		Global_100204 = 1;
	}
	else
	{
		StringCopy(&Global_100210, "NULL", 24);
		Global_100204 = 0;
	}
}

bool func_93(int iParam0)
{
	if (func_97())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_96(Global_101143))
		{
			func_94(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_96(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_50(func_95(iParam0), -1);
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
					func_50(func_95(iParam0), -1);
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
					func_50(func_95(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_95(int iParam0)
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

bool func_96(int iParam0)
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

bool func_97()
{
	switch (func_98(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_98(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_102(0))
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
		if (!func_100(iParam2))
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
			func_99(uParam0, iParam4);
		}
	}
	return 2;
}

void func_99(auto uParam0, int iParam1)
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

int func_100(int iParam0)
{
	return func_101(iParam0, Global_35711);
}

bool func_101(int iParam0, int iParam1)
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

bool func_102(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_100(iParam0))
	{
		return false;
	}
	return true;
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

void func_105(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

auto func_106()
{
	func_8();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_107(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_116(iParam0, 2, 1))
		{
			func_115(iParam0, 2, 1);
		}
	}
	else if (func_116(iParam0, 2, 1))
	{
		func_108(iParam0, 2, 1);
	}
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_114() == 0)
		{
			iVar0 = func_112(func_113(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_109(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_109(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_110(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_110(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
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

auto func_111()
{
	return Global_1312747;
}

int func_112(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_110(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

auto func_114()
{
	return Global_25120;
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_114() == 0)
		{
			iVar0 = func_112(func_113(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_109(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_114() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_112(func_113(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

bool func_117(Vector3 vParam0, Vector3 fParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0, fParam3, fParam3, fParam3, false, true, 0))
	{
		if (iParam4 == 0)
		{
			if (CAM::IS_SPHERE_VISIBLE(vParam0, 5f))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_118(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	iVar1 = iVar0 - iParam0;
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_119()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()) && !is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_boat(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_sub(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_train(PLAYER::PLAYER_PED_ID())) && !is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) >= 2)
				{
					return true;
				}
			}
		}
	}
	else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (is_vehicle_driveable(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && !is_this_model_a_train(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_120(int iParam0)
{
	if (iParam0)
	{
	}
}

bool func_121(int iParam0)
{
	if (is_world_point_within_brain_activation_range())
	{
		if (func_122(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_122(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_100(5))
			{
				if (func_123(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_106();
				if (!func_10(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_132()) || Global_100201) || Global_25122) || func_131()) || func_130(8, -1)) || func_129()) || func_128()) || func_127()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_132()) || Global_25122) || func_131()) || func_130(8, -1)) || func_127()) || func_129()) || func_128()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_132()) || Global_100201) || Global_25122) || func_131()) || func_130(8, -1)) || func_127()) || func_129()) || func_128()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_132()) || Global_100201) || Global_25122) || func_131()) || func_130(8, -1)) || func_129()) || func_128()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_132() || get_player_wanted_level(player_id()) > 0) || func_130(8, -1)) || func_126()) || func_125()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_130(8, -1) || func_129()) || func_128()) || func_125()) || func_124())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_132()) || Global_25122) || func_131()) || func_130(8, -1)) || func_128()) || func_127()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_132()) || func_128()) || Global_100201) || Global_25122) || func_131()) || Global_36839) || func_130(8, -1)) || func_127()) || func_125()) || func_126()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_132()) || Global_100201) || Global_25122) || func_131()) || func_130(8, -1)) || func_127()) || func_125()) || func_129()) || func_128()) || func_126())
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

auto func_124()
{
	return Global_91317.f_1;
}

int func_125()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_126()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_127()
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

int func_128()
{
	return Global_91330.f_297 > 0;
}

int func_129()
{
	return Global_91330.f_296 > 0;
}

int func_130(int iParam0, int iParam1)
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

auto func_131()
{
	return Global_1315913;
}

int func_132()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_133(int iParam0, struct<7> Param1, auto uParam2, auto uParam3)
{
	if (iParam0 == 1)
	{
		func_143(&uLocal_314, Param1);
		func_143(&uLocal_314, Param1.f_1);
		func_143(&uLocal_314, Param1.f_2);
		func_143(&uLocal_314, Param1.f_3);
		func_143(&uLocal_314, Param1.f_4);
		func_143(&uLocal_314, Param1.f_5);
		func_143(&uLocal_314, Param1.f_6);
		if (func_140(&uLocal_314))
		{
			return true;
		}
	}
	else
	{
		func_134(&uLocal_314, 0);
	}
	return false;
}

void func_134(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_136(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_135(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_145 = 0;
	*uParam0.f_146 = -1;
}

void func_135(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_136(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			func_137(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_145 = 1;
}

void func_137(auto uParam0)
{
	func_138(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_138(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		switch (func_139(iParam0))
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

int func_139(int iParam0)
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

bool func_140(auto uParam0)
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
			if (!func_141(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_145 = 0;
	return true;
}

int func_141(auto uParam0)
{
	return func_142(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_142(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, 29))
		{
			switch (func_139(iParam0))
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

void func_143(auto uParam0, int iParam1)
{
	func_144(uParam0, 0, iParam1, "NULL", 0);
}

void func_144(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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

bool func_145()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_49) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
		{
			return false;
		}
	}
	if (func_152())
	{
		return true;
	}
	if (func_146(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_146(float fParam0, int iParam1)
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
		if (func_10(func_106()))
		{
			iVar36 = func_7();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_147(iVar32, &Var0);
					fVar35 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
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

void func_147(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_148(uParam1, "Abigail1", func_150(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 1:
			func_148(uParam1, "Abigail2", func_150(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 2:
			func_148(uParam1, "Barry1", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 3:
			func_148(uParam1, "Barry2", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 4:
			func_148(uParam1, "Barry3", func_150(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 5:
			func_148(uParam1, "Barry3A", func_150(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 6:
			func_148(uParam1, "Barry3C", func_150(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 7:
			func_148(uParam1, "Barry4", func_150(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_149(iParam0), 0, 0);
			break;
		
		case 8:
			func_148(uParam1, "Dreyfuss1", func_150(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 9:
			func_148(uParam1, "Epsilon1", func_150(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 10:
			func_148(uParam1, "Epsilon2", func_150(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 11:
			func_148(uParam1, "Epsilon3", func_150(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 12:
			func_148(uParam1, "Epsilon4", func_150(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 13:
			func_148(uParam1, "Epsilon5", func_150(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 14:
			func_148(uParam1, "Epsilon6", func_150(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 15:
			func_148(uParam1, "Epsilon7", func_150(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 16:
			func_148(uParam1, "Epsilon8", func_150(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 17:
			func_148(uParam1, "Extreme1", func_150(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 18:
			func_148(uParam1, "Extreme2", func_150(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 19:
			func_148(uParam1, "Extreme3", func_150(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 20:
			func_148(uParam1, "Extreme4", func_150(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 21:
			func_148(uParam1, "Fanatic1", func_150(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 22:
			func_148(uParam1, "Fanatic2", func_150(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 23:
			func_148(uParam1, "Fanatic3", func_150(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_149(iParam0), 0, 1);
			break;
		
		case 24:
			func_148(uParam1, "Hao1", func_150(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_149(iParam0), 0, 1);
			break;
		
		case 25:
			func_148(uParam1, "Hunting1", func_150(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 26:
			func_148(uParam1, "Hunting2", func_150(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 27:
			func_148(uParam1, "Josh1", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 28:
			func_148(uParam1, "Josh2", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 29:
			func_148(uParam1, "Josh3", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 30:
			func_148(uParam1, "Josh4", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 31:
			func_148(uParam1, "Maude1", func_150(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 32:
			func_148(uParam1, "Minute1", func_150(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 33:
			func_148(uParam1, "Minute2", func_150(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 34:
			func_148(uParam1, "Minute3", func_150(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 35:
			func_148(uParam1, "MrsPhilips1", func_150(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 36:
			func_148(uParam1, "MrsPhilips2", func_150(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 37:
			func_148(uParam1, "Nigel1", func_150(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 38:
			func_148(uParam1, "Nigel1A", func_150(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 39:
			func_148(uParam1, "Nigel1B", func_150(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 40:
			func_148(uParam1, "Nigel1C", func_150(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 41:
			func_148(uParam1, "Nigel1D", func_150(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 42:
			func_148(uParam1, "Nigel2", func_150(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 43:
			func_148(uParam1, "Nigel3", func_150(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 44:
			func_148(uParam1, "Omega1", func_150(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 45:
			func_148(uParam1, "Omega2", func_150(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 46:
			func_148(uParam1, "Paparazzo1", func_150(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 47:
			func_148(uParam1, "Paparazzo2", func_150(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 48:
			func_148(uParam1, "Paparazzo3", func_150(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 49:
			func_148(uParam1, "Paparazzo3A", func_150(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 50:
			func_148(uParam1, "Paparazzo3B", func_150(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 51:
			func_148(uParam1, "Paparazzo4", func_150(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 52:
			func_148(uParam1, "Rampage1", func_150(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 54:
			func_148(uParam1, "Rampage3", func_150(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 55:
			func_148(uParam1, "Rampage4", func_150(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 56:
			func_148(uParam1, "Rampage5", func_150(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 53:
			func_148(uParam1, "Rampage2", func_150(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 57:
			func_148(uParam1, "TheLastOne", func_150(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 58:
			func_148(uParam1, "Tonya1", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 59:
			func_148(uParam1, "Tonya2", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 60:
			func_148(uParam1, "Tonya3", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 61:
			func_148(uParam1, "Tonya4", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 62:
			func_148(uParam1, "Tonya5", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_148(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_149(int iParam0)
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

struct<2> func_150(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_151(iParam0)};
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

struct<2> func_151(int iParam0)
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

bool func_152()
{
	if (func_155() && !func_156())
	{
		return true;
	}
	if (func_154() && func_153())
	{
		return true;
	}
	return false;
}

int func_153()
{
	return Global_100872 > 0;
}

bool func_154()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_155()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_156()
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

void func_157(int iParam0)
{
	Global_101140 = iParam0;
}

void func_158()
{
	if (!iLocal_278)
	{
		get_nth_closest_vehicle_node(func_172(player_id()) - Vector(0f, 10f, 0f), get_random_int_in_range(5, 15), &vLocal_243, 1, 3f, 0f);
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_243, 10f))
		{
			vLocal_237 = {vLocal_243};
			iLocal_277 = true;
		}
		else
		{
			get_nth_closest_vehicle_node(func_172(player_id()) + Vector(0f, 10f, 0f), get_random_int_in_range(5, 15), &vLocal_243, 1, 3f, 0f);
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_243, 10f))
			{
				vLocal_237 = {vLocal_243};
				iLocal_277 = true;
			}
			if (iLocal_277)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[0]))
				{
					iLocal_299[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_237 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_55())
					{
						give_weapon_to_ped(iLocal_299[0], joaat("weapon_pistol"), -1, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[0], iLocal_312);
						set_blocking_of_non_temporary_events(iLocal_299[0], true);
						task_combat_hated_targets_around_ped(iLocal_299[0], 50f, 0);
						set_ped_keep_task(iLocal_299[0], true);
					}
					else
					{
						set_blocking_of_non_temporary_events(iLocal_299[0], true);
						open_sequence_task(&iLocal_309);
						task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, 6f, 3f, 2f, 0);
						AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
						task_stand_still(false, 3000);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_299[0], iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_299[0], true);
						func_105(&uLocal_55, 4, iLocal_299[0], "REGETCop", 0, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[1]))
				{
					iLocal_299[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_237 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_55())
					{
						give_weapon_to_ped(iLocal_299[0], joaat("weapon_pistol"), -1, false, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[1], iLocal_312);
						set_blocking_of_non_temporary_events(iLocal_299[1], true);
						task_combat_hated_targets_around_ped(iLocal_299[1], 50f, 0);
						set_ped_keep_task(iLocal_299[1], true);
					}
					else
					{
						set_blocking_of_non_temporary_events(iLocal_299[1], true);
						task_go_to_coord_any_means(iLocal_299[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						set_ped_keep_task(iLocal_299[1], true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
				{
					iLocal_306 = create_vehicle(joaat("police3"), vLocal_237, 0, 1, true);
					vLocal_240 = {func_172(player_id()) - ENTITY::GET_ENTITY_COORDS(iLocal_306, 1)};
					set_entity_heading(iLocal_306, get_heading_from_vector_2d(vLocal_240.x, vLocal_240.y));
					set_vehicle_siren(iLocal_306, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[2]))
				{
					iLocal_299[2] = PED::CREATE_PED_inside_vehicle(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					if (func_55())
					{
						give_weapon_to_ped(iLocal_299[2], joaat("weapon_pistol"), -1, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[2], iLocal_312);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_299[2], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_299[2], 3, false);
						set_blocking_of_non_temporary_events(iLocal_299[2], true);
						task_vehicle_mission_ped_target(iLocal_299[2], iLocal_306, iLocal_290[1], 6, 15f, 2, -1f, -1f, 1);
						set_ped_keep_task(iLocal_299[2], true);
					}
					else
					{
						set_blocking_of_non_temporary_events(iLocal_299[2], true);
						open_sequence_task(&iLocal_309);
						task_vehicle_drive_to_coord(false, iLocal_306, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						task_stand_still(false, 5000);
						close_sequence_task(iLocal_309);
						task_perform_sequence(iLocal_299[2], iLocal_309);
						clear_sequence_task(&iLocal_309);
						set_ped_keep_task(iLocal_299[2], true);
					}
				}
				iLocal_278 = true;
			}
		}
	}
}

bool func_159(auto uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (is_vehicle_driveable(iParam1, 0))
				{
					if (!PED::IS_PED_INJURED(*uParam0[iVar0]))
					{
						if (is_ped_in_vehicle(*uParam0[iVar0], iParam1, 0))
						{
							return false;
						}
						if (fParam2 > 0f)
						{
							if (is_entity_at_entity(*uParam0[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return false;
							}
						}
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
		iVar0++;
	}
	return true;
}

void func_160()
{
	Global_14578 = 0;
	func_161();
}

void func_161()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

int func_162(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_170(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_163(sParam2, iParam3, 0);
}

bool func_163(char* sParam0, int iParam1, int iParam2)
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
					func_69();
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
		if (func_130(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_169();
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
				func_168();
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
				if (func_167())
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
			if (func_166())
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
			func_165();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_164();
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
		func_69();
	}
	return false;
}

void func_164()
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

void func_165()
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

bool func_166()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_167()
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

void func_168()
{
	if (func_9(14))
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
		Global_14413 = func_106();
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

void func_169()
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

void func_170(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_171()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

Vector3 func_172(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_173()
{
	func_174();
}

bool func_174()
{
	if (func_175(0))
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

int func_175(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_176(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_184();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_183(iParam0))
	{
		func_182(iParam0, iParam1);
		if (!func_13(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_181(51);
		}
		if (func_96(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_180(iParam0, iParam1) != 322)
		{
			func_177(func_180(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_157(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_157(7);
			}
			else
			{
				func_157(1);
			}
		}
	}
}

void func_177(int iParam0, auto uParam1, auto uParam2)
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
		func_179(891 + iParam0, 1, -1, 1);
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
		func_178();
	}
}

void func_178()
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
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_100897, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_100898, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_40(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_114() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_174();
				}
			}
		}
	}
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_111();
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

int func_180(int iParam0, int iParam1)
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

void func_181(int iParam0)
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

void func_182(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_183(int iParam0)
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

auto func_184()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_185(cVar0);
	return uVar16;
}

int func_185(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_189(iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_30959.f_1), iVar0);
			if (!iParam1)
			{
				func_187(func_188(iParam0));
			}
		}
	}
}

void func_187(char* sParam0)
{
	_set_notification_text_entry("");
	UI::_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_189(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_30959.f_1, iParam0);
	}
	return false;
}

bool func_190()
{
	return true;
}

bool func_191()
{
	if (Global_25355)
	{
		func_157(4);
		return true;
	}
	return false;
}

int func_192(int iParam0)
{
	return func_116(iParam0, 5, 1);
}

bool func_193()
{
	if (!func_100(5))
	{
		return true;
	}
	if (func_152())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
		{
			return false;
		}
	}
	if (func_146(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_194()
{
	if ((Global_101143 == func_184() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_195(auto uParam0)
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
						func_196(uParam0[iVar0 /*18*/]);
						*uParam0.f_146 = GAMEPLAY::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_196(int iParam0)
{
	func_197(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_197(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_139(*iParam0))
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

void func_198(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_184();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_200(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_199();
}

void func_199()
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

void func_200(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_201(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_184();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_84())
		{
			return false;
		}
	}
	vLocal_49 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_175(0))
		{
			return false;
		}
		if (func_152())
		{
			return false;
		}
		if (func_231())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_10(func_106()))
		{
			if (func_146(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_49.z > 50f)
			{
				return false;
			}
		}
		if (!func_230(iParam3))
		{
			return false;
		}
		if (func_10(func_106()))
		{
			if (func_229(func_106()) == 4 || func_229(func_106()) == 5)
			{
				return false;
			}
		}
		if (func_10(func_106()))
		{
			if (!func_228(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_227(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_226())
		{
			return false;
		}
		if (GAMEPLAY::GET_MISSION_FLAG())
		{
			return false;
		}
		if (get_random_event_flag())
		{
			return false;
		}
		if (!func_123(4))
		{
			return false;
		}
		if (!func_100(5))
		{
			return false;
		}
		if (func_225(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_225(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_230(30) && !func_225(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_10(func_106()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_224(iVar8))
				{
					if (func_202(iVar4))
					{
						if (!func_54(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_106() != iVar4)
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

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_203(iVar0);
}

int func_203(int iParam0)
{
	return func_204(iParam0, 1);
}

bool func_204(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_224(iParam0))
	{
		return false;
	}
	func_205(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_205(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_206(func_217(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_206(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_216(iParam0, iParam1))
	{
		iVar0 = func_215(iParam1);
		iVar1 = func_213(iParam0);
		iVar2 = func_213(iParam0) - func_213(iParam1);
		iVar3 = func_215(iParam0) - func_215(iParam1);
		iVar4 = func_212(iParam0) - func_212(iParam1);
		iVar5 = func_211(iParam0) - func_211(iParam1);
		iVar6 = func_210(iParam0) - func_210(iParam1);
		iVar7 = func_209(iParam0) - func_209(iParam1);
	}
	else
	{
		iVar0 = func_215(iParam0);
		iVar1 = func_213(iParam1);
		iVar2 = func_213(iParam1) - func_213(iParam0);
		iVar3 = func_215(iParam1) - func_215(iParam0);
		iVar4 = func_212(iParam1) - func_212(iParam0);
		iVar5 = func_211(iParam1) - func_211(iParam0);
		iVar6 = func_210(iParam1) - func_210(iParam0);
		iVar7 = func_209(iParam1) - func_209(iParam0);
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
		iVar4 += func_208(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_207(to_float(iVar0 + 1), 0f, 12f));
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

float func_207(Vector3 fParam0, float fParam1, float fParam2)
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

int func_208(int iParam0, int iParam1)
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

int func_209(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_210(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_211(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_212(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_213(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_214(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_214(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_215(int iParam0)
{
	return (iParam0 && 15);
}

bool func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return true;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_217()
{
	auto uVar0;
	
	func_223(&uVar0, get_clock_seconds());
	func_222(&uVar0, get_clock_minutes());
	func_221(&uVar0, TIME::GET_CLOCK_HOURS());
	func_220(&uVar0, get_clock_day_of_month());
	func_219(&uVar0, get_clock_month());
	func_218(&uVar0, get_clock_year());
	return uVar0;
}

void func_218(auto uParam0, int iParam1)
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

void func_219(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_220(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_215(*uParam0);
	iVar1 = func_213(*uParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_221(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_222(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_223(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_224(int iParam0)
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
	iVar0 = func_209(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_211(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_213(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_215(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_226()
{
	func_168();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_227(int iParam0)
{
	return func_216(func_217(), iParam0);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_106();
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

int func_229(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_84())
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

bool func_231()
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

void func_232(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		*uParam0.f_147 = iParam1;
	}
}

void func_233(struct<9> Param0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iLocal_313)
	{
		func_246(0);
		if (Global_25358)
		{
			trigger_music_event("AC_STOP");
		}
		func_245();
		func_92(0);
		set_all_vehicle_generators_active_in_area(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), true, 1);
		remove_scenario_blocking_areas();
		set_ped_paths_back_to_original(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), 0);
		set_roads_back_to_original(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), 1);
		reset_wanted_level_difficulty(player_id());
		set_wanted_level_multiplier(1f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_308, 0))
		{
			func_70(iLocal_308, 0, 145);
		}
		if (!PED::IS_PED_INJURED(iLocal_289))
		{
			if (is_entity_playing_anim(iLocal_289, "random@getawaydriver", "idle_a", 3) || is_entity_playing_anim(iLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				open_sequence_task(&iLocal_309);
				AI::TASK_PLAY_ANIM(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(*iParam9[0]))
				{
					AI::TASK_SMART_FLEE_PED(false, *iParam9[0], 150f, -1, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(*iParam9[1]))
				{
					AI::TASK_SMART_FLEE_PED(false, *iParam9[1], 150f, -1, 0, 0);
				}
				close_sequence_task(iLocal_309);
				task_perform_sequence(iLocal_289, iLocal_309);
				clear_sequence_task(&iLocal_309);
				set_ped_keep_task(iLocal_289, true);
			}
			clear_ped_secondary_task(iLocal_289);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_289, 17, true);
			set_blocking_of_non_temporary_events(iLocal_289, false);
		}
		if (!PED::IS_PED_INJURED(*iParam9[0]))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam9[0], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam9[0], 17, true);
			remove_ped_from_group(*iParam9[0]);
			set_ped_can_be_targetted(*iParam9[0], true);
			set_blocking_of_non_temporary_events(*iParam9[0], false);
		}
		if (!PED::IS_PED_INJURED(*iParam9[1]))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam9[1], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam9[1], 17, true);
			remove_ped_from_group(*iParam9[1]);
			set_ped_can_be_targetted(*iParam9[1], true);
			set_blocking_of_non_temporary_events(*iParam9[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_293)
		{
			if (!PED::IS_PED_INJURED(iLocal_293[iVar0]))
			{
				set_blocking_of_non_temporary_events(iLocal_293[iVar0], false);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_299[0]))
		{
			give_weapon_to_ped(iLocal_299[0], joaat("weapon_pistol"), -1, false, true);
			set_blocking_of_non_temporary_events(iLocal_299[0], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_299[1]))
		{
			give_weapon_to_ped(iLocal_299[1], joaat("weapon_pistol"), -1, false, true);
			set_blocking_of_non_temporary_events(iLocal_299[1], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_299[2]))
		{
			give_weapon_to_ped(iLocal_299[2], joaat("weapon_pistol"), -1, false, true);
			set_blocking_of_non_temporary_events(iLocal_299[2], false);
		}
		if (!iParam10)
		{
			if (!PED::IS_PED_INJURED(*iParam9[0]))
			{
				task_smart_flee_coord(*iParam9[0], func_172(player_id()), 200f, -1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(*iParam9[1]))
			{
				task_smart_flee_coord(*iParam9[1], func_172(player_id()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_220)
		{
			set_player_control(player_id(), true, 0);
			iLocal_220 = 1;
		}
		func_60(iLocal_53);
		if (does_blip_exist(iLocal_288))
		{
			remove_blip(&iLocal_288);
		}
		func_60(iLocal_54);
		func_120(0);
		func_133(0, Param0);
	}
	func_234(-1);
	terminate_this_thread();
}

void func_234(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_184();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_194())
	{
		func_238(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_237(30000);
		StringCopy(&cVar0, func_236(Global_101143, 1), 64);
		if (func_183(Global_101143) > 0)
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
	func_235(&Global_25179);
	Global_101144 = 0;
	func_200(-1);
}

void func_235(auto uParam0)
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

char* func_236(int iParam0, int iParam1)
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

void func_237(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_238(int iParam0)
{
	func_239(iParam0, 0, func_244(iParam0));
}

void func_239(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_217();
	func_242(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_241(uParam0, &uVar0);
	Var1 = {func_240(&uVar0)};
}

struct<16> func_240(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_209(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_215(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_213(*uParam0), 64);
	return cVar0;
}

void func_241(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_242(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_215(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_211(*uParam0);
	iVar4 = func_210(*uParam0);
	iVar5 = func_209(*uParam0);
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
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_243(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_243(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_223(uParam0, iParam1);
	func_222(uParam0, iParam2);
	func_221(uParam0, iParam3);
	func_219(uParam0, iParam5);
	func_220(uParam0, iParam4);
	func_218(uParam0, iParam6);
}

int func_244(int iParam0)
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

void func_245()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_107(iVar0, iParam0);
		iVar0++;
	}
}

