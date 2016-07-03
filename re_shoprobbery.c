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
	int iLocal_49 = 0;
	Vector3 vLocal_50 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	Vector3[] vLocal_55 = new Vector3[2];
	float[] fLocal_62 = new float[2];
	Vector3[] vLocal_65 = new Vector3[3];
	float[] fLocal_75 = new float[3];
	Vector3[] vLocal_79 = new Vector3[4];
	float[] fLocal_92 = new float[4];
	Vector3 vLocal_97 = 0;
	Vector3 vLocal_100 = 0;
	Vector3 vLocal_103 = 0;
	int iLocal_106 = 0;
	Vector3 vLocal_107 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int[] iLocal_114 = new int[2];
	int[] iLocal_117 = new int[3];
	int[] iLocal_121 = new int[4];
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	Vector3 vLocal_128 = 0;
	Vector3 vLocal_131 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int[] iLocal_141 = new int[2];
	int[] iLocal_144 = new int[2];
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
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int[] iLocal_168 = new int[2];
	int iLocal_171 = 0;
	Vector3 vLocal_172 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var[] uLocal_185 = new var[2];
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	Vector3 vLocal_194 = 0;
	Vector3 fLocal_197 = 0;
	Vector3 vLocal_198 = 0;
	Vector3 vLocal_201 = 0;
	Vector3 vLocal_204 = 0;
	Vector3 vLocal_207 = 0;
	int iLocal_210 = 0;
	char* sLocal_211 = 0;
	char* sLocal_212 = 0;
	char* sLocal_213 = 0;
	char* sLocal_214 = 0;
	char* sLocal_215 = 0;
	int iLocal_216 = 0;
	float fLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	auto uLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	auto uLocal_232 = 16;
	auto uLocal_233 = 0;
	auto uLocal_234 = 0;
	auto uLocal_235 = 0;
	auto uLocal_236 = 0;
	auto uLocal_237 = 0;
	auto uLocal_238 = 0;
	auto uLocal_239 = 0;
	auto uLocal_240 = 0;
	auto uLocal_241 = 0;
	auto uLocal_242 = 0;
	auto uLocal_243 = 0;
	auto uLocal_244 = 0;
	auto uLocal_245 = 0;
	auto uLocal_246 = 0;
	auto uLocal_247 = 0;
	auto uLocal_248 = 0;
	auto uLocal_249 = 0;
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
	struct<2> Local_397 = 0;
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
	auto uLocal_414 = 5;
	auto uLocal_415 = 0;
	auto uLocal_416 = 0;
	auto uLocal_417 = 0;
	auto uLocal_418 = 0;
	auto uLocal_419 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	vLocal_128 = {-824.1719f, -187.654f, 36.5707f};
	vLocal_131 = {-1202.94f, -779.74f, 17.33f};
	vLocal_50 = {Local_397.f_1[0 /*3*/]};
	func_238();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_236();
		func_224();
	}
	if (iLocal_49 == 1)
	{
		if (!func_223(0) || !func_222(0))
		{
			terminate_this_thread();
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!func_223(14) || !func_222(14))
		{
			terminate_this_thread();
		}
	}
	if (func_192(vLocal_50, 5, iLocal_134, 0, 0))
	{
		func_189(5);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if (is_world_point_within_brain_activation_range() || iLocal_164)
		{
			if (!func_188())
			{
				if (func_187())
				{
					func_224();
				}
			}
			_0x208784099002BC30("RE_SR", 0);
			if (is_player_playing(player_id()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (iLocal_53)
						{
							iLocal_223 = 1;
							iLocal_48 = 1;
						}
						else
						{
							if (func_175())
							{
								func_224();
							}
							if (!iLocal_54)
							{
								func_174();
							}
							if (iLocal_54)
							{
								func_173();
							}
						}
						break;
					
					case 1:
						switch (iLocal_46)
						{
							case 0:
								if (!iLocal_137)
								{
									func_172();
									if (is_interior_ready(iLocal_153))
									{
										func_166();
										iLocal_137 = 1;
									}
								}
								else
								{
									if (iLocal_49 == 1)
									{
										_0xAF66DCEE6609B148();
									}
									func_163();
									unpin_interior(iLocal_153);
									if (func_162())
									{
										if (!iLocal_159)
										{
											if (iLocal_49 == 1)
											{
												if (func_161(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
											else if (iLocal_49 == 2)
											{
												if (func_161(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
										}
									}
									if (func_160())
									{
										if (does_blip_exist(iLocal_193))
										{
											remove_blip(&iLocal_193);
										}
										clear_player_wanted_level(player_id());
										set_wanted_level_multiplier(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_114)
										{
											if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
											{
												task_combat_ped(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												set_ped_keep_task(iLocal_114[iVar0], true);
												if (!does_blip_exist(uLocal_185[iVar0]))
												{
													uLocal_185[iVar0] = func_159(iLocal_114[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_49 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_117)
											{
												if (!PED::IS_PED_INJURED(iLocal_117[iVar0]))
												{
													task_cower(iLocal_117[iVar0], -1);
													set_ped_keep_task(iLocal_117[iVar0], true);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_121)
											{
												if (!PED::IS_PED_INJURED(iLocal_121[iVar0]))
												{
													task_cower(iLocal_121[iVar0], -1);
													set_ped_keep_task(iLocal_121[iVar0], true);
												}
												iVar0++;
											}
										}
										delete_object(&iLocal_167);
										iLocal_140 = true;
										iLocal_46 = 1;
										iLocal_47 = 3;
									}
									if (func_158())
									{
										func_151(1);
										settimera(false);
										add_shocking_event_at_position(88, vLocal_194, 15000f);
										iLocal_46 = 1;
									}
								}
								break;
							
							case 1:
								set_all_random_peds_flee_this_frame(player_id());
								func_163();
								iVar1 = 0;
								while (iVar1 < iLocal_117)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_150();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_121)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_121[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_150();
										}
									}
									iVar1++;
								}
								switch (iLocal_47)
								{
									case 0:
										if (func_158())
										{
											func_146();
											func_144();
										}
										break;
									
									case 1:
										func_143();
										func_144();
										break;
									
									case 2:
										func_142();
										func_141();
										func_140();
										if (timerb() > 500)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
											{
												if (!is_entity_attached(iLocal_167))
												{
													func_139();
													WEAPON::SET_CURRENT_PED_WEAPON(iLocal_114[0], joaat("weapon_unarmed"), true);
													attach_entity_to_entity(iLocal_167, iLocal_114[0], get_ped_bone_index(iLocal_114[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (is_projectile_in_area(vLocal_194 - Vector(20f, 20f, 20f), vLocal_194 + Vector(20f, 20f, 20f), 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_117[1]))
											{
												task_smart_flee_coord(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
												set_blocking_of_non_temporary_events(iLocal_117[1], false);
												set_ped_as_no_longer_needed(&(iLocal_117[1]));
											}
											if (!PED::IS_PED_INJURED(iLocal_117[2]))
											{
												task_smart_flee_coord(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
												set_blocking_of_non_temporary_events(iLocal_117[2], false);
												set_ped_as_no_longer_needed(&(iLocal_117[2]));
											}
											iVar2 = 0;
											while (iVar2 <= iLocal_113 - 1)
											{
												if (!PED::IS_PED_INJURED(iLocal_121[iVar2]))
												{
													set_entity_load_collision_flag(iLocal_121[iVar2], true);
													open_sequence_task(&iLocal_152);
													if (iLocal_49 == 1)
													{
														AI::TASK_PLAY_ANIM(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_49 == 2)
													{
														task_follow_nav_mesh_to_coord(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 1193033728);
													}
													task_smart_flee_coord(false, vLocal_103, 150f, -1, 0, 0);
													close_sequence_task(iLocal_152);
													task_perform_sequence(iLocal_121[iVar2], iLocal_152);
													clear_sequence_task(&iLocal_152);
													set_ped_keep_task(iLocal_121[iVar2], true);
													set_blocking_of_non_temporary_events(iLocal_121[iVar2], false);
													set_ped_can_be_targetted(iLocal_121[iVar2], true);
													set_ped_as_no_longer_needed(&(iLocal_121[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_138() || timera() > 20000)
										{
											if (!iLocal_164)
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0))
												{
													func_130(0, 1, 1, 0);
													func_125(0);
													display_hud(true);
													display_radar(true);
													set_player_control(player_id(), true, 0);
													AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0, 0, 0, 0);
													if (iLocal_49 == 1)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
														{
															set_entity_visible(iLocal_167, false, 0);
															set_entity_collision(iLocal_167, false, 0);
														}
													}
													else if (iLocal_49 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_117)
													{
														if (!PED::IS_PED_INJURED(iLocal_117[iVar1]))
														{
															set_blocking_of_non_temporary_events(iLocal_117[iVar1], false);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_121)
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar1]))
														{
															set_blocking_of_non_temporary_events(iLocal_121[iVar1], false);
														}
														iVar1++;
													}
													if (!PED::IS_PED_INJURED(iLocal_117[0]))
													{
														set_blocking_of_non_temporary_events(iLocal_117[0], true);
														open_sequence_task(&iLocal_152);
														AI::TASK_PLAY_ANIM(false, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
														close_sequence_task(iLocal_152);
														task_perform_sequence(iLocal_117[0], iLocal_152);
														clear_sequence_task(&iLocal_152);
														set_ped_keep_task(iLocal_117[0], true);
													}
													if (!func_124())
													{
														func_113(&uLocal_232, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_164 = 1;
												}
											}
										}
										if (!iLocal_139)
										{
											if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (get_entity_anim_current_time(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (get_entity_anim_current_time(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_112(64)))
												{
													AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
													iLocal_139 = 1;
												}
											}
										}
										if (iLocal_49 == 1)
										{
											if (!func_158())
											{
												if (!iLocal_180)
												{
													iLocal_180 = 1;
												}
											}
											if (!iLocal_161)
											{
												func_111();
											}
											if (!PED::IS_PED_INJURED(iLocal_114[0]) && is_vehicle_driveable(iLocal_175, 0))
											{
												if (is_ped_in_vehicle(iLocal_114[0], iLocal_175, 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
													{
														delete_object(&iLocal_167);
														iLocal_161 = true;
													}
												}
											}
											if (func_110() && !iLocal_162)
											{
												if (does_blip_exist(uLocal_185[0]))
												{
													remove_blip(&(uLocal_185[0]));
												}
												if (does_blip_exist(uLocal_185[1]))
												{
													remove_blip(&(uLocal_185[1]));
												}
												if (!does_blip_exist(iLocal_191))
												{
													iLocal_191 = func_108(iLocal_175, 1, 0);
												}
												iLocal_161 = true;
												if (!PED::IS_PED_INJURED(iLocal_184))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 6, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 1, true);
													task_vehicle_mission_ped_target(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 16f, 786469, -1f, -1f, 1);
													set_ped_keep_task(iLocal_184, true);
													iLocal_162 = 1;
												}
											}
											if (iLocal_162 && !iLocal_224)
											{
												if (is_vehicle_driveable(iLocal_175, 0) && !PED::IS_PED_INJURED(iLocal_184))
												{
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_175, vLocal_55[0 /*3*/], 20f, 20f, 10f, false, true, 0))
													{
														task_vehicle_mission_ped_target(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_224 = 1;
													}
												}
											}
											if (func_107())
											{
												if (!PED::IS_PED_INJURED(iLocal_184))
												{
													if (is_vehicle_driveable(iLocal_175, 0))
													{
														if (!iLocal_163)
														{
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 17, true);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 6, true);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 1, true);
															task_vehicle_mission_ped_target(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_163 = 1;
														}
														if (!PED::IS_PED_INJURED(iLocal_114[0]))
														{
															if (is_ped_in_vehicle(iLocal_114[0], iLocal_175, 0))
															{
																if (does_blip_exist(uLocal_185[0]))
																{
																	remove_blip(&(uLocal_185[0]));
																}
																if (does_blip_exist(uLocal_185[1]))
																{
																	remove_blip(&(uLocal_185[1]));
																}
																if (!does_blip_exist(iLocal_191))
																{
																	iLocal_191 = func_108(iLocal_175, 1, 0);
																}
																iLocal_161 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= iLocal_111 - 1)
												{
													if (!iLocal_141[iVar3])
													{
														if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
														{
															if (is_ped_in_any_vehicle(iLocal_114[iVar3], 0) && !PED::IS_PED_INJURED(iLocal_184))
															{
																task_drive_by(iLocal_114[iVar3], PLAYER::PLAYER_PED_ID(), false, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_141[iVar3] = 1;
															}
															else if (!does_blip_exist(iLocal_192))
															{
																task_combat_ped(iLocal_114[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
																set_ped_keep_task(iLocal_114[iVar3], true);
																if (does_blip_exist(iLocal_191))
																{
																	remove_blip(&iLocal_191);
																}
																if (!does_blip_exist(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_159(iLocal_114[iVar3], 1, 145);
																}
																iLocal_141[iVar3] = 1;
															}
														}
													}
													if (!iLocal_144[iVar3])
													{
														if (is_vehicle_driveable(iLocal_175, 0))
														{
															if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
															{
																if ((PED::IS_PED_INJURED(iLocal_184) || is_vehicle_seat_free(iLocal_175, -1)) || is_entity_on_fire(iLocal_114[iVar3]))
																{
																	set_entity_load_collision_flag(iLocal_114[iVar3], true);
																	open_sequence_task(&iLocal_152);
																	task_leave_any_vehicle(false, false, 0);
																	AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																	close_sequence_task(iLocal_152);
																	task_perform_sequence(iLocal_114[iVar3], iLocal_152);
																	clear_sequence_task(&iLocal_152);
																	set_ped_keep_task(iLocal_114[iVar3], true);
																	if (!PED::IS_PED_INJURED(iLocal_184))
																	{
																		set_entity_load_collision_flag(iLocal_184, true);
																		open_sequence_task(&iLocal_152);
																		task_leave_any_vehicle(false, false, 0);
																		AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																		close_sequence_task(iLocal_152);
																		task_perform_sequence(iLocal_184, iLocal_152);
																		clear_sequence_task(&iLocal_152);
																		set_ped_keep_task(iLocal_184, true);
																	}
																	if (!does_blip_exist(iLocal_192))
																	{
																		if (does_blip_exist(iLocal_191))
																		{
																			remove_blip(&iLocal_191);
																		}
																		if (!does_blip_exist(uLocal_185[iVar3]))
																		{
																			uLocal_185[iVar3] = func_159(iLocal_114[iVar3], 1, 145);
																		}
																	}
																	iLocal_144[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
															{
																set_entity_load_collision_flag(iLocal_114[iVar3], true);
																open_sequence_task(&iLocal_152);
																task_leave_any_vehicle(false, false, 0);
																AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																close_sequence_task(iLocal_152);
																task_perform_sequence(iLocal_114[iVar3], iLocal_152);
																clear_sequence_task(&iLocal_152);
																set_ped_keep_task(iLocal_114[iVar3], true);
															}
															if (!PED::IS_PED_INJURED(iLocal_184))
															{
																set_entity_load_collision_flag(iLocal_184, true);
																open_sequence_task(&iLocal_152);
																task_leave_any_vehicle(false, false, 0);
																AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																close_sequence_task(iLocal_152);
																task_perform_sequence(iLocal_184, iLocal_152);
																clear_sequence_task(&iLocal_152);
																set_ped_keep_task(iLocal_184, true);
															}
															if (!does_blip_exist(iLocal_192))
															{
																if (does_blip_exist(iLocal_191))
																{
																	remove_blip(&iLocal_191);
																}
																if (!does_blip_exist(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_159(iLocal_114[iVar3], 1, 145);
																}
																iLocal_144[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (iLocal_161)
											{
												if (func_106())
												{
													func_105();
													func_102();
													iLocal_47 = 9;
												}
											}
										}
										else if (iLocal_49 == 2)
										{
											if (PED::IS_PED_INJURED(iLocal_114[0]))
											{
												if (does_blip_exist(uLocal_185[0]))
												{
													func_101(&uLocal_232, 3);
													remove_blip(&(uLocal_185[0]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_114[1]))
											{
												if (does_blip_exist(uLocal_185[1]))
												{
													func_101(&uLocal_232, 4);
													remove_blip(&(uLocal_185[1]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_114[0]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
												{
													if (is_entity_attached(iLocal_167))
													{
														detach_entity(iLocal_167, 1, true);
													}
													delete_object(&iLocal_167);
													func_105();
													func_102();
													iLocal_47 = 9;
												}
											}
											else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
												{
													if (is_entity_attached(iLocal_167))
													{
														detach_entity(iLocal_167, 1, true);
													}
													delete_object(&iLocal_167);
													func_105();
													func_102();
													iLocal_47 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_143();
										break;
									
									case 9:
										func_142();
										func_99();
										break;
									
									case 10:
										func_96(2);
										func_95(iLocal_193, &uLocal_229);
										if (iLocal_49 == 1)
										{
											if (!iLocal_160)
											{
												request_anim_dict("random@robbery");
												if (!has_anim_dict_loaded("random@robbery"))
												{
													request_anim_dict("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_117[0]))
												{
													set_entity_coords(iLocal_117[0], -818.5553f, -185.4815f, 36.5689f, 1, false, 0, 1);
													set_entity_heading(iLocal_117[0], 47.0582f);
													AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_117[1]))
													{
														task_smart_flee_coord(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
														set_blocking_of_non_temporary_events(iLocal_117[1], false);
														set_ped_as_no_longer_needed(&(iLocal_117[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_117[2]))
													{
														task_smart_flee_coord(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
														set_blocking_of_non_temporary_events(iLocal_117[2], false);
														set_ped_as_no_longer_needed(&(iLocal_117[2]));
													}
													iVar4 = 0;
													while (iVar4 <= iLocal_113 - 1)
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar4]))
														{
															open_sequence_task(&iLocal_152);
															AI::TASK_PLAY_ANIM(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															task_smart_flee_coord(false, vLocal_103, 150f, -1, 0, 0);
															close_sequence_task(iLocal_152);
															task_perform_sequence(iLocal_121[iVar4], iLocal_152);
															clear_sequence_task(&iLocal_152);
															set_ped_keep_task(iLocal_121[iVar4], true);
															set_blocking_of_non_temporary_events(iLocal_121[iVar4], false);
															set_ped_can_be_targetted(iLocal_121[iVar4], true);
															set_ped_as_no_longer_needed(&(iLocal_121[iVar4]));
														}
														iVar4++;
													}
													iLocal_160 = 1;
												}
											}
											func_71(6, 3);
											func_71(7, 3);
										}
										else if (iLocal_49 == 2)
										{
											if (!iLocal_160)
											{
												request_anim_dict("random@robbery");
												if (!has_anim_dict_loaded("random@robbery"))
												{
													request_anim_dict("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_117[0]))
												{
													set_entity_coords(iLocal_117[0], -1197.455f, -776.0289f, 16.3254f, 1, false, 0, 1);
													set_entity_heading(iLocal_117[0], 205.7753f);
													AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_117[1]))
													{
														task_smart_flee_coord(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
														set_blocking_of_non_temporary_events(iLocal_117[1], false);
														set_ped_as_no_longer_needed(&(iLocal_117[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_117[2]))
													{
														task_smart_flee_coord(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
														set_blocking_of_non_temporary_events(iLocal_117[2], false);
														set_ped_as_no_longer_needed(&(iLocal_117[2]));
													}
													iVar5 = 0;
													while (iVar5 <= iLocal_113 - 1)
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar5]))
														{
															task_smart_flee_coord(iLocal_121[iVar5], vLocal_103, 150f, -1, 0, 0);
															set_blocking_of_non_temporary_events(iLocal_121[iVar5], false);
															set_ped_can_be_targetted(iLocal_121[iVar5], true);
															set_ped_as_no_longer_needed(&(iLocal_121[iVar5]));
														}
														iVar5++;
													}
													iLocal_160 = 1;
												}
											}
											if (does_object_of_type_exist_at_coords(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												set_state_of_closest_door_of_type(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, false, 0f, 0);
											}
										}
										if (func_162())
										{
										}
										if ((func_158() && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
										{
											settimera(false);
											iLocal_47 = 11;
										}
										if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_238()) > fLocal_197 + 150f)
										{
											iLocal_47 = 12;
										}
										if (timera() > 120000)
										{
											iLocal_47 = 14;
										}
										if (PED::IS_PED_INJURED(iLocal_117[0]))
										{
											func_70(2);
											func_49();
										}
										else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[0], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_70(2);
											func_49();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_70(2);
										func_49();
										break;
									
									case 7:
										func_49();
										break;
									
									case 14:
										func_70(2);
										func_49();
										break;
									
									case 13:
										if (!iLocal_225)
										{
											if (!PED::IS_PED_INJURED(iLocal_117[0]))
											{
												AI::CLEAR_PED_TASKS(iLocal_117[0]);
												if (iLocal_49 == 1)
												{
													func_113(&uLocal_232, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_49 == 2)
												{
													func_113(&uLocal_232, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												task_use_mobile_phone_timed(iLocal_117[0], 20000);
												set_ped_keep_task(iLocal_117[0], true);
												set_blocking_of_non_temporary_events(iLocal_117[0], false);
												iLocal_225 = 1;
											}
										}
										if (!func_124())
										{
											iLocal_46 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_150();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_224();
		}
	}
}

void func_1()
{
	if (func_158())
	{
		if (does_blip_exist(iLocal_193))
		{
			remove_blip(&iLocal_193);
		}
		if (!iLocal_182)
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				func_130(1, 1, 1, 0);
				set_player_control(player_id(), false, 0);
				clear_help(1);
				clear_area_of_projectiles(ENTITY::GET_ENTITY_COORDS(iLocal_117[0], 1), 20f, 0);
				display_hud(false);
				display_radar(false);
				if (iLocal_49 == 1)
				{
					iLocal_181 = true;
				}
				else if (iLocal_49 == 2)
				{
				}
				iLocal_182 = 1;
			}
		}
	}
	if (!iLocal_181)
	{
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			iLocal_181 = true;
		}
	}
	if (iLocal_181)
	{
		if (!iLocal_183)
		{
			hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			if (does_blip_exist(iLocal_193))
			{
				remove_blip(&iLocal_193);
			}
			vLocal_198 = {ENTITY::GET_ENTITY_COORDS(iLocal_117[0], 0)};
			if (iLocal_49 == 1)
			{
				vLocal_198 = {-820.77f, -186.514f, 36.569f};
				vLocal_204 = {0f, 0f, -60f};
				fLocal_217 = 0.855f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_b";
				sLocal_213 = "return_bag_stand_b_female";
				sLocal_214 = "return_bag_stand_b_bag";
				sLocal_215 = "return_bag_stand_b_cam";
			}
			else if (iLocal_49 == 2)
			{
				vLocal_198 = {-1198.295f, -776.533f, 16.326f};
				vLocal_204 = {0f, 0f, -60.25f};
				fLocal_217 = 0.785f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_c_rt";
				sLocal_213 = "return_bag_stand_c_rt_female";
				sLocal_214 = "return_bag_stand_c_rt_bag";
				sLocal_215 = "return_bag_stand_c_rt_cam";
			}
			iLocal_216 = create_synchronized_scene(vLocal_198, vLocal_204, 2);
			iLocal_210 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
			play_synchronized_cam_anim(iLocal_210, iLocal_216, sLocal_215, sLocal_211);
			AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
			task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_216, sLocal_211, sLocal_212, 1000f, -2f, 5, 0, 1000f, 0);
			_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
			AI::CLEAR_PED_TASKS_immediately(iLocal_117[0]);
			task_synchronized_scene(iLocal_117[0], iLocal_216, sLocal_211, sLocal_213, 1000f, -2f, 4, 0, 1000f, 0);
			_0x2208438012482A1A(iLocal_117[0], 0, 0);
			iLocal_167 = create_object(joaat("prop_cs_duffel_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, true, false);
			play_synchronized_entity_anim(iLocal_167, iLocal_216, sLocal_214, sLocal_211, 1000f, 8f, 0, 1000f);
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				func_48();
				set_cam_active(iLocal_210, true);
				render_script_cams(true, false, 3000, 1, 0, 0);
				settimera(false);
				iLocal_183 = 1;
			}
		}
	}
	if ((timera() > 1500 && iLocal_183) && !iLocal_158)
	{
		func_46();
		wait(false);
		if (iLocal_49 == 1)
		{
			func_113(&uLocal_232, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_113(&uLocal_232, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_158 = 1;
	}
	if (get_synchronized_scene_phase(iLocal_216) > fLocal_217 && iLocal_183)
	{
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			set_ped_money(iLocal_117[0], iLocal_189);
			AI::CLEAR_PED_TASKS(iLocal_117[0]);
			open_sequence_task(&iLocal_152);
			AI::TASK_PLAY_ANIM(false, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_152);
			task_perform_sequence(iLocal_117[0], iLocal_152);
			clear_sequence_task(&iLocal_152);
			set_ped_keep_task(iLocal_117[0], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			delete_object(&iLocal_167);
		}
		AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -668482597, false, 0, 0);
		simulate_player_input_gait(player_id(), 1f, 650, 0, 1, 0);
		func_130(0, 1, 1, 0);
		set_player_control(player_id(), true, 4);
		display_hud(true);
		display_radar(true);
		hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
		set_gameplay_cam_relative_heading(0);
		_0xC819F3CBB62BF692(0, 0f, 3, 0);
		destroy_cam(iLocal_210, 0);
		func_45();
		func_44(joaat("rc_wallets_returned"), 1);
		if (iLocal_49 == 1)
		{
			func_12(func_39(), 1, iLocal_189);
			func_2(0, func_39(), 1);
		}
		else if (iLocal_49 == 2)
		{
			func_12(func_39(), 1, iLocal_189);
			func_2(14, func_39(), 1);
		}
		func_70(3);
		func_49();
	}
}

void func_2(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (iParam2)
	{
		if (!func_11(iParam0, iVar0, 0))
		{
			func_10(iParam0, iVar0, 0);
		}
	}
	else if (func_11(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_4(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_5(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

auto func_6()
{
	return Global_1312747;
}

int func_7(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8(int iParam0)
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

auto func_9()
{
	return Global_25120;
}

void func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_12(auto uParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_13(Global_101154.f_32575[uParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_38();
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
					func_37(99, 1);
					func_44(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_44(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_44(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_21(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_20(5))
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
							func_44(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_20(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_44(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_44(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_44(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_property"), iParam3);
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
									func_44(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_20(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_19(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_37(95, iParam3);
					break;
				
				case 1:
					func_37(97, iParam3);
					break;
				
				case 2:
					func_37(96, iParam3);
					break;
			}
			func_37(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_16(iVar1);
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
					func_44(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_44(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_44(joaat("sp2_total_cash_earned"), iParam3);
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
	func_15(iParam0);
	if (Global_35711 == 15)
	{
		func_14(0);
	}
	return true;
}

void func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(int iParam0)
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
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_18() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_18() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_17(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(int iParam0)
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

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_19(int iParam0)
{
	func_37(93, iParam0);
	func_37(29, iParam0);
	func_37(30, iParam0);
}

int func_20(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_18() /*10375*/].f_7704.f_10, iParam0);
}

bool func_21(int iParam0)
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
		func_36(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_22(27, 1);
	return true;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_23(iParam0, iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	if (func_35(14) && !func_34(iParam0))
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
	if (func_33(&Global_2563627))
	{
		if (func_31(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_24(&Global_2563627, iParam0))
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

bool func_24(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_35(14) && !func_34(iParam1))
	{
		return false;
	}
	if (func_31(uParam0, iParam1))
	{
		return false;
	}
	if (func_30(uParam0) < 0f)
	{
		func_29(uParam0, 0);
	}
	func_27(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_25(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_25(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_35(14) && !func_34(iParam1))
	{
		return false;
	}
	if (func_31(uParam0, iParam1))
	{
		return false;
	}
	if (func_30(uParam0) < 0f)
	{
		func_29(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_26(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_26(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_27(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_28(uParam0, iVar0);
		iVar0++;
	}
	func_29(uParam0, Global_2563626 - 0.5f);
}

void func_28(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_29(auto uParam0, float fParam1)
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

auto func_30(auto uParam0)
{
	return *uParam0.f_72;
}

int func_31(auto uParam0, int iParam1)
{
	return func_32(uParam0, iParam1) != -1;
}

int func_32(auto uParam0, int iParam1)
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

int func_33(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_34(int iParam0)
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

int func_35(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_36(int iParam0, int iParam1)
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

void func_37(int iParam0, int iParam1)
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

void func_38()
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

auto func_39()
{
	func_40();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_40()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_35(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_41(Global_101154.f_1826.f_539.f_3549))
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

int func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_45()
{
	if (iLocal_49 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				set_blocking_of_non_temporary_events(iLocal_117[0], false);
				set_ped_as_no_longer_needed(&(iLocal_117[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_117[1]))
			{
				set_blocking_of_non_temporary_events(iLocal_117[1], false);
				set_ped_as_no_longer_needed(&(iLocal_117[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[0]))
			{
				set_blocking_of_non_temporary_events(iLocal_121[0], false);
				set_ped_as_no_longer_needed(&(iLocal_121[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[1]))
			{
				set_blocking_of_non_temporary_events(iLocal_121[1], false);
				set_ped_as_no_longer_needed(&(iLocal_121[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[2]))
			{
				set_entity_coords(iLocal_121[2], -820.424f, -181.9059f, 36.5687f, 1, false, 0, 1);
				set_entity_heading(iLocal_121[2], 167.7909f);
				set_blocking_of_non_temporary_events(iLocal_121[2], false);
				set_ped_as_no_longer_needed(&(iLocal_121[2]));
			}
		}
	}
}

void func_46()
{
	Global_14578 = 0;
	func_47();
}

void func_47()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_48()
{
	if (iLocal_49 == 1)
	{
		if (is_vehicle_driveable(get_players_last_vehicle(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, false, true, 0))
			{
				set_entity_coords(get_players_last_vehicle(), -831.9709f, -192.0823f, 36.5008f, 0, false, 0, 1);
				set_vehicle_on_ground_properly(get_players_last_vehicle());
			}
		}
		clear_area(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, false);
	}
	else if (iLocal_49 == 2)
	{
		if (is_vehicle_driveable(get_players_last_vehicle(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, false, true, 0))
			{
				set_entity_coords(get_players_last_vehicle(), -1205.936f, -781.2014f, 16.0088f, 0, false, 0, 1);
				set_vehicle_on_ground_properly(get_players_last_vehicle());
			}
		}
		clear_area(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, false);
	}
}

void func_49()
{
	while (!func_69())
	{
		wait(false);
	}
	special_ability_fill_meter(player_id(), 1);
	func_53(5, iLocal_134);
	func_50();
	func_224();
}

void func_50()
{
	func_51();
}

bool func_51()
{
	if (func_52(0))
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

int func_52(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_66(iParam0))
	{
		func_65(iParam0, iParam1);
		if (!func_64(51))
		{
			func_60("RE_REWARD", 1, 0, 4000, 10000, func_63(), 0, 138, 0);
			func_59(51);
		}
		if (func_58(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_54(func_57(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_70(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_70(7);
			}
			else
			{
				func_70(1);
			}
		}
	}
}

void func_54(int iParam0, auto uParam1, auto uParam2)
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
		func_56(891 + iParam0, 1, -1, 1);
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
		func_55();
	}
}

void func_55()
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
		func_36(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_9() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_51();
				}
			}
		}
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_6();
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

int func_57(int iParam0, int iParam1)
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

bool func_58(int iParam0)
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

void func_59(int iParam0)
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

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
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
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
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
		func_62();
	}
}

void func_62()
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

int func_63()
{
	func_40();
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

int func_64(int iParam0)
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

void func_65(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_66(int iParam0)
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

auto func_67()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_68(cVar0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_69()
{
	return true;
}

void func_70(int iParam0)
{
	Global_101140 = iParam0;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69489)
		{
			iVar0 = Global_2428492.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_101154.f_5951[iParam0];
		}
		if (iVar0 != iParam1 || GAMEPLAY::IS_BIT_SET(Global_31499[iParam0 / 32], iParam0 % 32))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				GAMEPLAY::SET_BIT(&(Global_31508[iParam0 / 32]), iParam0 % 32);
				Global_31971[iParam0] = iParam1;
			}
			else if (Global_69489)
			{
				Global_2428492.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_101154.f_5951[iParam0] = iParam1;
			}
			GAMEPLAY::SET_BIT(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			func_73(iParam0);
			if (GAMEPLAY::IS_BIT_SET(Global_31499[iParam0 / 32], iParam0 % 32))
			{
				func_72(iParam0);
			}
		}
	}
}

void func_72(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_32442.f_228[iParam0 / 32], iParam0 % 23))
	{
		GAMEPLAY::SET_BIT(&(Global_32442.f_228[iParam0 / 32]), iParam0 % 23);
		Global_32442[Global_32442.f_227] = iParam0;
		Global_32442.f_227++;
	}
}

void func_73(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	Vector3 fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (!func_93())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = {func_92(iParam0)};
	if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 2))
	{
		func_78(iParam0, &Var0);
	}
	if (!_does_door_exist(Var0.f_5))
	{
		if (is_cutscene_playing())
		{
			return;
		}
	}
	iVar7 = false;
	iVar8 = false;
	fVar10 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((GAMEPLAY::IS_BIT_SET(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] == 2) && fVar10 > 210f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31508[iParam0 / 32]), iParam0 % 32);
		Global_31517[iParam0] = 0;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_31744[iParam0 / 32], iParam0 % 32))
		{
			if (fVar10 < 25f)
			{
				if (Global_91330.f_294 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_91330.f_294 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_91330.f_294;
				iVar12 = get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					GAMEPLAY::SET_BIT(&(Global_31508[iParam0 / 32]), iParam0 % 32);
					Global_31971[iParam0] = 3;
					GAMEPLAY::SET_BIT(&(Global_31499[iParam0 / 32]), iParam0 % 32);
				}
			}
			GAMEPLAY::CLEAR_BIT(&(Global_31744[iParam0 / 32]), iParam0 % 32);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31508[iParam0 / 32], iParam0 % 32))
	{
		iVar9 = Global_31971[iParam0];
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, false))
	{
		if (Global_101154.f_7775)
		{
			iVar9 = func_75(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_35(14))
		{
			iVar9 = 0;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, true) && _get_number_of_instances_of_streamed_script(joaat("ambient_solomon")) == 0)
	{
		if (func_74())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_101154.f_5951[iParam0];
	}
	if (Global_32198[iParam0] != iVar9)
	{
		iVar7 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31499[iParam0 / 32], iParam0 % 32))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_31508[iParam0 / 32], iParam0 % 32) || (Global_31517[iParam0] == 0 && Global_31971[iParam0] != 2))
		{
			iVar7 = true;
		}
	}
	if (iVar7)
	{
		if (!Global_31498)
		{
		}
		else
		{
			if (!_does_door_exist(Var0.f_5))
			{
				add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 3))
					{
						iVar13 = true;
					}
					else if (fVar10 > 3f || absf(_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
						iVar15 = get_interior_at_coords(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							iVar13 = true;
						}
					}
					if (iVar13)
					{
						if (Var0.f_6 != 0f)
						{
							_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
						iVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
					iVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				}
		}
		if (iVar8)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			Global_32198[iParam0] = iVar9;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] != 2)
	{
		GAMEPLAY::SET_BIT(&(Global_31499[iParam0 / 32]), iParam0 % 32);
		func_72(iParam0);
		if (Global_31517[iParam0] < 2)
		{
			Global_31517[iParam0]++;
		}
	}
}

bool func_74()
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return false;
	}
	switch (func_39())
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
		
		case 1:
			if (Global_101154.f_7775.f_99.f_58[66])
			{
				return true;
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39();
	if (func_76(iParam0))
	{
		return true;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[5], false) || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[6], false))
			{
				return false;
			}
		}
		if (func_41(iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_86638[5], iVar0))
			{
				return false;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[0], false))
				{
					return false;
				}
			}
			if (func_41(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_86638[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return false;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[5], false))
				{
					return false;
				}
			}
			if (func_41(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_86638[5], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[6], false))
				{
					return false;
				}
			}
			if (func_41(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_86638[6], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[2], false))
				{
					return false;
				}
				if (func_41(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_86638[2], iVar0))
					{
						return false;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[1], false))
				{
					return false;
				}
				if (func_41(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_86638[1], iVar0))
					{
						return false;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[3], false))
				{
					return false;
				}
			}
			if (func_41(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_86638[3], iVar0))
				{
					return false;
				}
			}
			break;
		
		default:
			return false;
			break;
	}
	return true;
}

bool func_76(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_77(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
						break;
					}
				}
			}
	}
	return false;
}

int func_77(int iParam0)
{
	return iParam0;
}

void func_78(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_4, 2))
	{
		return;
	}
	iVar0 = func_81();
	iVar1 = func_80(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_79(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_79(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_79(iParam0))
			{
				if ((_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0) && !Global_101154.f_7775.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_101154.f_5951[iParam0] = 0;
							_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_101154.f_7775.f_99.f_58[4])
				{
					Global_101154.f_5951[iParam0] = 0;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (Global_101154.f_7775.f_99.f_58[4])
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_79(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_79(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) > 0)
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (_get_number_of_instances_of_streamed_script(joaat("omega2")) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_79(iParam0) && _get_number_of_instances_of_streamed_script(Global_82399[26 /*34*/].f_6) == 0)
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_79(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[43 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_79(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[93 /*34*/].f_6) > 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_79(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[8 /*34*/].f_6) == 0 && _get_number_of_instances_of_streamed_script(Global_82399[10 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_79(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[47 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (_get_number_of_instances_of_streamed_script(Global_82399[48 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (_get_number_of_instances_of_streamed_script(Global_82399[39 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_79(iParam0))
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
	}
}

int func_79(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = {func_92(iParam0)};
	iVar7 = _0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_80(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

auto func_81()
{
	auto uVar0;
	
	func_91(&uVar0, get_clock_seconds());
	func_90(&uVar0, get_clock_minutes());
	func_89(&uVar0, TIME::GET_CLOCK_HOURS());
	func_84(&uVar0, get_clock_day_of_month());
	func_83(&uVar0, get_clock_month());
	func_82(&uVar0, get_clock_year());
	return uVar0;
}

void func_82(auto uParam0, int iParam1)
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

void func_83(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

auto func_86(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_87(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(int iParam0)
{
	return (iParam0 && 15);
}

void func_89(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_90(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_91(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

struct<7> func_92(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {133f, -1711f, 29f};
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-1287.857f, -1115.742f, 7.1401f};
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1932.952f, 3725.154f, 32.9944f};
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1207.873f, -470.063f, 66.358f};
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-29.8692f, -148.1571f, 57.2265f};
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-280.7851f, 6232.782f, 31.8455f};
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = {-824f, -187f, 38f};
			Var0 = {-823.2001f, -187.0831f, 37.819f};
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = {-823f, -188f, 38f};
			Var0 = {-822.4442f, -188.3924f, 37.819f};
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {82.3186f, -1392.752f, 29.5261f};
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {82.3186f, -1390.476f, 29.5261f};
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1686.983f, 4821.741f, 42.2131f};
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1687.282f, 4819.484f, 42.2131f};
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {418.637f, -806.457f, 29.6396f};
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {418.637f, -808.733f, 29.6396f};
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-1096.661f, 2705.446f, 19.2578f};
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1094.965f, 2706.964f, 19.2578f};
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1196.825f, 2703.221f, 38.3726f};
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1199.101f, 2703.221f, 38.3726f};
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-818.7642f, -1079.544f, 11.4781f};
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-816.7932f, -1078.406f, 11.4781f};
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-0.0564f, 6517.461f, 32.0278f};
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1.7253f, 6515.914f, 32.0278f};
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-1201.435f, -776.8566f, 17.9918f};
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {617.2458f, 2751.022f, 42.7578f};
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {127.8201f, -211.8274f, 55.2275f};
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-3167.75f, 1055.536f, 21.5329f};
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-716.6754f, -155.42f, 37.6749f};
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-715.6154f, -157.2561f, 37.6749f};
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-157.0924f, -306.4413f, 39.994f};
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-156.4022f, -304.4366f, 39.994f};
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1454.782f, -231.7927f, 50.0565f};
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1456.201f, -233.3682f, 50.0565f};
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {321.81f, 178.36f, 103.68f};
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = {1859.89f, 3749.79f, 33.18f};
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = {-289.1752f, 6199.112f, 31.637f};
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-1155.454f, -1424.008f, 5.0461f};
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {1321.286f, -1650.597f, 52.3663f};
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-3167.789f, 1074.767f, 20.9209f};
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = {-817f, 179f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = {-816f, 178f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = {-815f, 186f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-797f, 177f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-795f, 178f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-793f, 181f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-794f, 183f, 73f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = {-849f, 179f, 70f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = {-802.7333f, 167.5041f, 77.5824f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = {-14f, -1441f, 31f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {-15f, -1427f, 31f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = {-25.28f, -1431.06f, 30.84f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = {7.52f, 539.53f, 176.18f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = {1973f, 3815f, 34f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = {1972.787f, 3824.554f, 32.5831f};
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = {-1150f, -1521f, 11f};
			GAMEPLAY::SET_BIT(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-1145.9f, -1991.14f, 14.18f};
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = {723.12f, -1088.83f, 23.28f};
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-356.09f, -134.77f, 40.01f};
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {108.8502f, 6617.876f, 32.673f};
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {114.3206f, 6623.226f, 32.7161f};
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1182.305f, 2645.242f, 38.807f};
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1174.654f, 2645.242f, 38.6826f};
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = {-205.7007f, -1310.692f, 30.2957f};
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = {-107.5401f, -9.0258f, 70.6696f};
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = {717f, -975f, 25f};
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = {719f, -975f, 25f};
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = {709.9813f, -963.5311f, 30.5453f};
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = {709.9894f, -960.6675f, 30.5453f};
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = {707.8046f, -962.4564f, 30.5453f};
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = {1393f, 3599f, 35f};
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = {1395f, 3600f, 35f};
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1387f, 3614f, 39f};
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1083.547f, -1975.435f, 31.6222f};
			Var0.f_5 = 792295685;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1065.237f, -2006.079f, 32.2329f};
			Var0.f_5 = 563273144;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1085.307f, -2018.561f, 41.6289f};
			Var0.f_5 = -726993043;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = {-111f, 6464f, 32f};
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = {-110f, 6462f, 32f};
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = {1274f, -1721f, 55f};
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1271.89f, -1707.57f, 53.79f};
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1270.77f, -1708.1f, 53.75f};
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = {-127.5f, -1456.18f, 37.94f};
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = {483.56f, -1316.08f, 32.18f};
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = {483f, -1312f, 29f};
			Var0.f_5 = -106474626;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = {128f, -1299f, 29f};
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {96f, -1285f, 29f};
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = {549f, -1773f, 34f};
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {974f, -1839f, 36f};
			Var0.f_5 = 1267246609;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {977f, -105f, 75f};
			Var0.f_5 = -1900237971;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1391f, 1163f, 114f};
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1391f, 1161f, 114f};
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = {1396f, 1143f, 115f};
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = {1396f, 1141f, 115f};
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1409f, 1146f, 114f};
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1409f, 1148f, 114f};
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1408f, 1159f, 114f};
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1408f, 1161f, 114f};
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = {-1067f, -1666f, 5f};
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = {-1065f, -1669f, 5f};
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = {-1104.66f, -1638.48f, 4.68f};
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = {-31.72f, -1101.85f, 26.57f};
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = {134.4f, -2204.1f, 7.52f};
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3628f, 3747f, 28f};
			Var0.f_5 = 1773088812;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3621f, 3752f, 28f};
			Var0.f_5 = -1332101528;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-608.73f, -1610.32f, 27.16f};
			Var0.f_5 = -1811763714;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-611.32f, -1610.09f, 27.16f};
			Var0.f_5 = 1608500665;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-592.94f, -1631.58f, 27.16f};
			Var0.f_5 = -1456048340;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-592.71f, -1628.99f, 27.16f};
			Var0.f_5 = 943854909;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1991f, 3053f, 47f};
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = {1988.353f, 3054.411f, 47.3204f};
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = {-700.17f, 47.31f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = {-697.94f, 48.35f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = {241.3574f, 361.0488f, 105.8963f};
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = {-689.11f, 506.97f, 110.64f};
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = {-1055.96f, -236.43f, 44.17f};
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {29f, 3661f, 41f};
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = {32f, 3667f, 41f};
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = {87f, -1959f, 21f};
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {0f, -1823f, 30f};
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = {23.34f, -1897.6f, 23.05f};
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = {524.2f, 3081.14f, 41.16f};
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = {-1910.58f, -576.01f, 19.25f};
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = {-720.39f, 256.86f, 80.29f};
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = {-718.42f, 257.79f, 80.29f};
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = {106.38f, -742.7f, 46.18f};
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = {105.76f, -746.65f, 46.18f};
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2343.53f, 3265.37f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2342.23f, 3267.62f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = {-1041.933f, -2748.167f, 22.0308f};
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = {-1044.841f, -2746.489f, 22.0308f};
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = {-1045.12f, -232.004f, 39.4379f};
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = {-1046.516f, -229.3581f, 39.4379f};
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = {-1083.62f, -260.4167f, 38.1867f};
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = {-1080.974f, -259.0204f, 38.1867f};
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = {-1042.57f, -240.6f, 38.11f};
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = {1385.258f, -2079.949f, 52.7638f};
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {1656.57f, 4849.66f, 42.35f};
			Var0.f_5 = 243782214;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {1656.25f, 4852.24f, 42.35f};
			Var0.f_5 = 714115627;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = {-1051.402f, -474.6847f, 36.6199f};
			Var0.f_5 = 1668106976;
			GAMEPLAY::SET_BIT(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = {-1049.285f, -476.6376f, 36.7584f};
			Var0.f_5 = 1382347031;
			GAMEPLAY::SET_BIT(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = {-1210.957f, -580.8765f, 27.2373f};
			Var0.f_5 = -966790948;
			GAMEPLAY::SET_BIT(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = {-1212.445f, -578.4401f, 27.2373f};
			Var0.f_5 = -2068750132;
			GAMEPLAY::SET_BIT(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-565.1712f, 276.6259f, 83.2863f};
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-561.2863f, 293.5043f, 87.7771f};
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = {-631.96f, -236.33f, 38.21f};
			Var0.f_5 = 1874948872;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = {-630.43f, -238.44f, 38.21f};
			Var0.f_5 = -1965020851;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = {231.62f, 216.23f, 106.4f};
			Var0.f_5 = 1951546856;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = {232.72f, 213.88f, 106.4f};
			Var0.f_5 = -431382051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = {258.32f, 203.84f, 106.43f};
			Var0.f_5 = -293975210;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = {260.76f, 202.95f, 106.43f};
			Var0.f_5 = -785215289;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = {256.31f, 220.66f, 106.43f};
			Var0.f_5 = -366143778;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = {266.36f, 217.57f, 110.43f};
			Var0.f_5 = 440819155;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-442.66f, 6015.222f, 31.8663f};
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-444.4985f, 6017.06f, 31.8663f};
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = {1855.685f, 3683.93f, 34.5928f};
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1223.35f, -172.41f, 39.98f};
			Var0.f_5 = -320891223;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1220.93f, -173.68f, 39.98f};
			Var0.f_5 = 1511747875;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1211.99f, -190.57f, 39.98f};
			Var0.f_5 = -1517722103;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1213.26f, -192.98f, 39.98f};
			Var0.f_5 = -1093199712;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1217.77f, -201.54f, 39.98f};
			Var0.f_5 = 1902048492;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1219.04f, -203.95f, 39.98f};
			Var0.f_5 = -444768985;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = {2514.32f, -317.34f, 93.32f};
			Var0.f_5 = 404057594;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = {2512.42f, -319.26f, 93.32f};
			Var0.f_5 = -1417472813;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = {2333.23f, 2574.97f, 47.03f};
			Var0.f_5 = -1376084479;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = {2329.65f, 2576.64f, 47.03f};
			Var0.f_5 = 457472151;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {16.1279f, -1114.605f, 29.9469f};
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {18.572f, -1115.495f, 29.9469f};
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {1698.176f, 3751.506f, 34.8553f};
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {1699.937f, 3753.42f, 34.8553f};
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {244.7274f, -44.0791f, 70.91f};
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {243.8379f, -46.5232f, 70.91f};
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {845.3624f, -1024.539f, 28.3448f};
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {842.7684f, -1024.539f, 23.3448f};
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-326.1122f, 6075.27f, 31.6047f};
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-324.273f, 6077.109f, 31.6047f};
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-665.2424f, -944.3256f, 21.9792f};
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-662.6414f, -944.3256f, 21.9792f};
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1313.826f, -389.1259f, 36.8457f};
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1314.465f, -391.6472f, 36.8457f};
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1114.009f, 2689.77f, 18.7041f};
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1112.071f, 2691.505f, 18.7041f};
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-3164.845f, 1081.392f, 20.9887f};
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-3163.812f, 1083.778f, 20.9887f};
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {2570.905f, 303.3556f, 108.8848f};
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {2568.304f, 303.3556f, 108.8848f};
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {813.1779f, -2148.27f, 29.7689f};
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {810.5769f, -2148.27f, 29.7689f};
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {6.8179f, -1098.209f, 29.9469f};
			Var0.f_5 = 1487704245;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {827.5342f, -2160.493f, 29.7688f};
			Var0.f_5 = 1529812051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1107.01f, 289.38f, 64.76f};
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1101.62f, 290.36f, 64.76f};
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1138.64f, 300.82f, 67.18f};
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1137.05f, 295.59f, 67.18f};
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = {-2053.16f, 3239.49f, 30.5f};
			Var0.f_5 = -621770121;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = {-2054.39f, 3237.23f, 30.5f};
			Var0.f_5 = 1018580481;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = {-108.91f, 6469.11f, 31.91f};
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = {-182.91f, 6168.37f, 32.14f};
			Var0.f_5 = -1331552374;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-59.89f, -1092.95f, 26.88f};
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-60.55f, -1094.75f, 26.89f};
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-39.13f, -1108.22f, 26.72f};
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-37.33f, -1108.87f, 26.72f};
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1943.73f, 3803.63f, 32.31f};
			Var0.f_5 = -2018911784;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {316.39f, -276.49f, 54.52f};
			Var0.f_5 = -93934272;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {313.96f, -275.6f, 54.52f};
			Var0.f_5 = 667682830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-2965.71f, 484.22f, 16.05f};
			Var0.f_5 = 1876735830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-2965.82f, 481.63f, 16.05f};
			Var0.f_5 = -2112857171;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = {962.1f, -2183.83f, 31.06f};
			Var0.f_5 = 2046930518;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = {961.79f, -2187.08f, 31.06f};
			Var0.f_5 = 1208502884;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = {2508.43f, -336.63f, 115.76f};
			Var0.f_5 = 1986432421;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2255.19f, 322.26f, 184.93f};
			Var0.f_5 = -722798986;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2254.06f, 319.7f, 184.93f};
			Var0.f_5 = 204301578;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2301.13f, 336.91f, 184.93f};
			Var0.f_5 = -320140460;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2298.57f, 338.05f, 184.93f};
			Var0.f_5 = 65222916;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2222.32f, 305.86f, 184.93f};
			Var0.f_5 = -920027322;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2221.19f, 303.3f, 184.93f};
			Var0.f_5 = -58432001;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2280.6f, 265.43f, 184.93f};
			Var0.f_5 = -2007378629;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2278.04f, 266.57f, 184.93f};
			Var0.f_5 = 418772613;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = {778.31f, -1867.49f, 30.66f};
			Var0.f_5 = 1679064921;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = {-721.35f, 91.01f, 56.68f};
			Var0.f_5 = 412198396;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = {-728.84f, 88.64f, 56.68f};
			Var0.f_5 = -1053755588;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2287.62f, 363.9f, 174.93f};
			Var0.f_5 = -53446139;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2289.78f, 362.91f, 174.93f};
			Var0.f_5 = 1333960556;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2289.86f, 362.88f, 174.93f};
			Var0.f_5 = -41786493;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2292.01f, 361.89f, 174.93f};
			Var0.f_5 = 1750120734;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = {1803.94f, 3929.01f, 33.72f};
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-348.81f, -47.26f, 49.39f};
			Var0.f_5 = -2116116146;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-351.26f, -46.41f, 49.39f};
			Var0.f_5 = -74083138;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = {962.9084f, -2105.814f, 34.6432f};
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_93()
{
	if ((func_9() == -1 || func_9() == 999) && !func_94() == 0)
	{
		return true;
	}
	return false;
}

auto func_94()
{
	return Global_25121;
}

void func_95(int iParam0, auto uParam1)
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

void func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_97(func_98(iParam0), -1);
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
					func_97(func_98(iParam0), -1);
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
					func_97(func_98(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_97(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_98(int iParam0)
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

void func_99()
{
	if (has_pickup_been_collected(iLocal_110))
	{
		func_44(joaat("rc_wallets_recovered"), 1);
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			iLocal_193 = func_159(iLocal_117[0], 0, 145);
		}
		func_100(&uLocal_229);
		fLocal_197 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_238());
		settimera(false);
		iLocal_47 = 10;
	}
	if (does_pickup_exist(iLocal_110))
	{
		if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), get_pickup_coords(iLocal_110)) > 200f)
		{
			func_150();
		}
	}
}

void func_100(auto uParam0)
{
	*uParam0 = -99;
}

void func_101(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_102()
{
	int iVar0;
	
	if (!does_pickup_exist(iLocal_110))
	{
		GAMEPLAY::SET_BIT(&iLocal_106, 3);
		GAMEPLAY::SET_BIT(&iLocal_106, 4);
		GAMEPLAY::SET_BIT(&iLocal_106, true);
		if (!iLocal_161)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
				{
					vLocal_107 = {get_dead_ped_pickup_coords(iLocal_114[0], 1067030938, 1069547520)};
				}
			}
			else
			{
				vLocal_107 = {get_safe_pickup_coords(ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 1), 1.2f, 1.5f)};
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			vLocal_107 = {get_safe_pickup_coords(ENTITY::GET_ENTITY_COORDS(iLocal_175, 0), 1.2f, 1.5f)};
		}
		vLocal_107 = {vLocal_107.x, vLocal_107.y, vLocal_107.z + 0.25f};
		iLocal_110 = create_pickup(joaat("pickup_money_med_bag"), vLocal_107, iLocal_106, iLocal_189, 1, joaat("prop_cs_duffel_01"));
		iLocal_192 = func_103(iLocal_110);
		if (iLocal_49 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= iLocal_111 - 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
				{
					set_entity_load_collision_flag(iLocal_114[iVar0], true);
					AI::CLEAR_PED_TASKS(iLocal_114[iVar0]);
					open_sequence_task(&iLocal_152);
					task_leave_any_vehicle(false, false, 0);
					AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					close_sequence_task(iLocal_152);
					task_perform_sequence(iLocal_114[iVar0], iLocal_152);
					clear_sequence_task(&iLocal_152);
					set_ped_keep_task(iLocal_114[iVar0], true);
				}
				iVar0++;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_114[0]))
			{
				clear_ped_secondary_task(iLocal_114[0]);
				if (!is_ped_in_writhe(iLocal_114[0]))
				{
					func_46();
					wait(false);
					func_113(&uLocal_232, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_104(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_105()
{
	if (does_blip_exist(iLocal_192))
	{
		remove_blip(&iLocal_192);
	}
	if (does_blip_exist(iLocal_193))
	{
		remove_blip(&iLocal_193);
	}
	if (does_blip_exist(iLocal_191))
	{
		remove_blip(&iLocal_191);
	}
	if (does_blip_exist(uLocal_185[0]))
	{
		remove_blip(&(uLocal_185[0]));
	}
	if (does_blip_exist(uLocal_185[1]))
	{
		remove_blip(&(uLocal_185[1]));
	}
}

bool func_106()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	if (!iLocal_161)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
		else if (PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
	}
	else
	{
		iLocal_150 = 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		iLocal_151 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_184) || !is_ped_in_any_vehicle(iLocal_184, 0))
	{
		iLocal_151 = 1;
	}
	if ((iLocal_149 && iLocal_150) || iLocal_151)
	{
		return true;
	}
	return false;
}

bool func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iLocal_111 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_114[iVar0], 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_111 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				if (is_ped_being_jacked(iLocal_114[iVar0]))
				{
					if (get_peds_jacker(iLocal_114[iVar0]) == PLAYER::PLAYER_PED_ID())
					{
						set_entity_load_collision_flag(iLocal_114[iVar0], true);
						AI::TASK_SMART_FLEE_PED(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_114[iVar0], true);
						wait(false);
						set_ped_as_no_longer_needed(&(iLocal_114[iVar0]));
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		if (!PED::IS_PED_INJURED(iLocal_184) || ENTITY::IS_ENTITY_DEAD(iLocal_184, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_184, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_184))
		{
			if (is_ped_being_stunned(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun")))
			{
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		if (!PED::IS_PED_INJURED(iLocal_184))
		{
			if (is_ped_being_jacked(iLocal_184))
			{
				if (get_peds_jacker(iLocal_184) == PLAYER::PLAYER_PED_ID())
				{
					set_entity_load_collision_flag(iLocal_184, true);
					AI::TASK_SMART_FLEE_PED(iLocal_184, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					set_ped_keep_task(iLocal_184, true);
					wait(false);
					set_ped_as_no_longer_needed(&iLocal_184);
					return true;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_175, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_175, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	return func_109(iParam0, !iParam1, iParam2);
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_110()
{
	if (is_vehicle_driveable(iLocal_175, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_114[0]))
		{
			if (is_ped_in_vehicle(iLocal_114[0], iLocal_175, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[1]))
				{
					if (is_ped_in_vehicle(iLocal_114[1], iLocal_175, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_111()
{
	if (PED::IS_PED_INJURED(iLocal_114[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (is_entity_attached(iLocal_167))
			{
				detach_entity(iLocal_167, 1, true);
			}
			delete_object(&iLocal_167);
			func_105();
			func_102();
			iLocal_47 = 9;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (is_entity_attached(iLocal_167))
			{
				detach_entity(iLocal_167, 1, true);
			}
			delete_object(&iLocal_167);
			func_105();
			func_102();
			iLocal_47 = 9;
		}
	}
}

bool func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_control_value(2, 195) - 128;
	iVar1 = get_control_value(2, 196) - 128;
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return true;
	}
	return false;
}

int func_113(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_114(sParam2, iParam3, 0);
}

bool func_114(char* sParam0, int iParam1, int iParam2)
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
					func_122();
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
		if (func_121(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_120();
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
				func_119();
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
				if (func_118())
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
			if (func_117())
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
			func_116();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_115();
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
		func_122();
	}
	return false;
}

void func_115()
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

void func_116()
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

bool func_117()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_118()
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

void func_119()
{
	if (func_35(14))
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
		Global_14413 = func_39();
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

void func_120()
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

int func_121(int iParam0, int iParam1)
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

void func_122()
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

void func_123(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_124()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_125(int iParam0)
{
	if (iParam0)
	{
		func_129();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_128(0))
		{
			func_126(0);
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

void func_126(int iParam0)
{
	if (Global_14571)
	{
		func_127(0, 0);
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
	if (!func_117())
	{
		Global_14413.f_1 = 3;
	}
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_128(0))
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

bool func_128(int iParam0)
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

void func_129()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_137(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_117())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_136(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_137(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_136(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_134(player_id())) && !func_132(player_id(), 0)) && !func_131())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_134(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_131()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_133(-1, 0) == 8;
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

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

bool func_134(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return true;
	}
	if (func_135())
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

int func_135()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_136(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_137(int iParam0)
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

bool func_138()
{
	if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
	{
		if (iLocal_49 == 1)
		{
			if (!iLocal_165)
			{
				if (!is_entity_in_angled_area(iLocal_114[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if (!is_entity_in_angled_area(iLocal_114[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					iLocal_166 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!iLocal_165)
			{
				if ((!is_entity_in_angled_area(iLocal_114[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || is_entity_in_angled_area(iLocal_114[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || is_entity_in_angled_area(iLocal_114[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if ((!is_entity_in_angled_area(iLocal_114[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || is_entity_in_angled_area(iLocal_114[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || is_entity_in_angled_area(iLocal_114[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_114[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_166 = 1;
				}
			}
		}
	}
	if (iLocal_165 && iLocal_166)
	{
		return true;
	}
	return false;
}

void func_139()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_167, 1)};
	vVar3 = {get_entity_rotation(iLocal_167, 2)};
	delete_object(&iLocal_167);
	iLocal_167 = create_object(joaat("prop_cs_duffel_01"), vVar0, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_167, vVar3, 2, 1);
}

void func_140()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
	{
		if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_114[0]))
		{
			if (does_blip_exist(uLocal_185[0]))
			{
				remove_blip(&(uLocal_185[0]));
			}
			set_ped_as_no_longer_needed(&(iLocal_114[0]));
			iLocal_147 = true;
		}
	}
	else
	{
		iLocal_147 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_175, 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_175))
		{
			if (does_blip_exist(iLocal_191))
			{
				remove_blip(&iLocal_191);
			}
			set_vehicle_as_no_longer_needed(&iLocal_175);
			iLocal_148 = true;
		}
	}
	else
	{
		iLocal_148 = true;
	}
	if (iLocal_161)
	{
		if (iLocal_148)
		{
			if (func_158())
			{
				iLocal_47 = 13;
			}
			else
			{
				wait(false);
				iLocal_46 = 2;
			}
		}
	}
	else if (iLocal_147)
	{
		wait(false);
		if (func_158())
		{
			iLocal_47 = 13;
		}
		else
		{
			iLocal_46 = 2;
		}
	}
}

void func_141()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_175, 0))
	{
		if (get_entity_health(iLocal_175) < 800)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_175, false);
			set_vehicle_engine_health(iLocal_175, 10f);
		}
	}
}

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iLocal_111 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				if (does_blip_exist(uLocal_185[iVar0]))
				{
					remove_blip(&(uLocal_185[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_143()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_49 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_114[0]) && PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_114[0]) && PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_114)
	{
		if (PED::IS_PED_INJURED(iLocal_114[iVar0]))
		{
			if (does_blip_exist(uLocal_185[iVar0]))
			{
				remove_blip(&(uLocal_185[iVar0]));
			}
		}
		iVar0++;
	}
	if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_140)
		{
			iVar1 = 0;
			while (iVar1 <= iLocal_111 - 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar1]))
				{
					task_combat_ped(iLocal_114[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iVar1++;
			}
			iLocal_140 = true;
			if (is_entity_attached(iLocal_167))
			{
				iLocal_47 = 5;
			}
		}
	}
	if (!iLocal_154 && !iLocal_140)
	{
		trigger_music_event("RE51A_SHOP");
		func_46();
		wait(false);
		if (iLocal_49 == 1)
		{
			if (func_113(&uLocal_232, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (func_113(&uLocal_232, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
	}
	if ((iLocal_154 && !iLocal_155) && !iLocal_140)
	{
		if (!func_124())
		{
			if (func_39() == 0)
			{
				func_113(&uLocal_232, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_39() == 1)
			{
				func_113(&uLocal_232, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_39() == 2)
			{
				func_113(&uLocal_232, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_155 = 1;
		}
	}
	if (!iLocal_140)
	{
		if (!func_124())
		{
			if (iLocal_155 && !iLocal_156)
			{
				if (iLocal_49 == 1)
				{
					if (func_161(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
				else if (iLocal_49 == 2)
				{
					if (func_161(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
			}
		}
		if (iLocal_49 == 1)
		{
			if (!func_124())
			{
				if (!iLocal_157)
				{
					if (iLocal_49 == 1)
					{
						func_113(&uLocal_232, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_49 == 2)
					{
						func_113(&uLocal_232, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_157 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (timera() > 4000)
			{
				if (!iLocal_157)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
					{
						if (!PED::IS_PED_INJURED(iLocal_117[0]))
						{
							iLocal_157 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_167) && !PED::IS_PED_INJURED(iLocal_114[0]))
			{
				if (!iLocal_178)
				{
					iLocal_178 = 1;
				}
			}
		}
		if (!iLocal_138)
		{
			if (iLocal_49 == 1)
			{
				if (timera() > 14100)
				{
					delete_object(&(iLocal_168[0]));
					delete_object(&(iLocal_168[1]));
					if (is_vehicle_driveable(iLocal_175, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_114[0]))
						{
							AI::CLEAR_PED_TASKS(iLocal_114[0]);
							open_sequence_task(&iLocal_152);
							task_clear_look_at(false);
							task_enter_vehicle(false, iLocal_175, -1, false, 2f, 1, 0);
							close_sequence_task(iLocal_152);
							task_perform_sequence(iLocal_114[0], iLocal_152);
							clear_sequence_task(&iLocal_152);
						}
						if (!PED::IS_PED_INJURED(iLocal_114[1]))
						{
							force_ped_motion_state(iLocal_114[1], -530524, true, 0, 0);
							open_sequence_task(&iLocal_152);
							task_clear_look_at(false);
							task_enter_vehicle(false, iLocal_175, -1, true, 2f, 1, 0);
							close_sequence_task(iLocal_152);
							task_perform_sequence(iLocal_114[1], iLocal_152);
							clear_sequence_task(&iLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_114[0]))
						{
							set_entity_load_collision_flag(iLocal_114[0], true);
							AI::CLEAR_PED_TASKS_immediately(iLocal_114[0]);
							open_sequence_task(&iLocal_152);
							task_clear_look_at(false);
							AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							close_sequence_task(iLocal_152);
							task_perform_sequence(iLocal_114[0], iLocal_152);
							clear_sequence_task(&iLocal_152);
						}
						if (!PED::IS_PED_INJURED(iLocal_114[1]))
						{
							set_entity_load_collision_flag(iLocal_114[1], true);
							AI::CLEAR_PED_TASKS_immediately(iLocal_114[1]);
							open_sequence_task(&iLocal_152);
							task_clear_look_at(false);
							AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							close_sequence_task(iLocal_152);
							task_perform_sequence(iLocal_114[1], iLocal_152);
							clear_sequence_task(&iLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
				}
			}
			else if (iLocal_49 == 2)
			{
				if (get_synchronized_scene_phase(iLocal_216) > 0.453f)
				{
					if (!PED::IS_PED_INJURED(iLocal_117[0]))
					{
						set_blocking_of_non_temporary_events(iLocal_117[0], true);
						open_sequence_task(&iLocal_152);
						AI::TASK_PLAY_ANIM(false, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
						close_sequence_task(iLocal_152);
						task_perform_sequence(iLocal_117[0], iLocal_152);
						clear_sequence_task(&iLocal_152);
						set_ped_keep_task(iLocal_117[0], true);
					}
					if (!PED::IS_PED_INJURED(iLocal_114[0]))
					{
						AI::CLEAR_PED_TASKS(iLocal_114[0]);
						set_ped_flee_attributes(iLocal_114[0], 128, true);
						set_ped_flee_attributes(iLocal_114[0], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[0], 17, true);
						set_ped_max_move_blend_ratio(iLocal_114[0], 1.6f);
						set_entity_load_collision_flag(iLocal_114[0], true);
						open_sequence_task(&iLocal_152);
						AI::TASK_PLAY_ANIM(false, "random@robbery", "run", 2f, -2f, -1, 49, 0, 0, 0, 0);
						task_follow_waypoint_recording(false, "re_shoprobbery", 0, 0, 16);
						task_clear_look_at(false);
						close_sequence_task(iLocal_152);
						task_perform_sequence(iLocal_114[0], iLocal_152);
						clear_sequence_task(&iLocal_152);
						set_ped_keep_task(iLocal_114[0], true);
						settimerb(false);
					}
					if (!PED::IS_PED_INJURED(iLocal_114[1]))
					{
						set_ped_flee_attributes(iLocal_114[1], 128, true);
						set_ped_flee_attributes(iLocal_114[1], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[1], 17, true);
						set_ped_max_move_blend_ratio(iLocal_114[1], 1.6f);
						set_entity_load_collision_flag(iLocal_114[1], true);
						open_sequence_task(&iLocal_152);
						task_clear_look_at(false);
						task_follow_waypoint_recording(false, "re_shoprobbery2", 0, 0, 17);
						close_sequence_task(iLocal_152);
						task_perform_sequence(iLocal_114[1], iLocal_152);
						clear_sequence_task(&iLocal_152);
						set_ped_keep_task(iLocal_114[1], true);
					}
					iLocal_47 = 2;
					iLocal_138 = 1;
				}
			}
			set_wanted_level_multiplier(0f);
		}
	}
}

void func_144()
{
	switch (iLocal_227)
	{
		case 0:
			func_130(1, 1, 1, 0);
			clear_area_of_peds(func_145(player_id()), 10f, 0);
			iLocal_226 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
			set_cam_active(iLocal_226, true);
			play_synchronized_cam_anim(iLocal_226, iLocal_216, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_49 == 1)
			{
				_0xAF348AFCB575A441("Hair_room");
			}
			render_script_cams(true, false, 3000, 1, 0, 0);
			iLocal_228 = GAMEPLAY::GET_GAME_TIMER() + 3500;
			iLocal_227++;
			break;
		
		case 1:
			if (iLocal_228 < GAMEPLAY::GET_GAME_TIMER())
			{
				if (iLocal_49 == 1)
				{
					set_gameplay_cam_relative_heading(115f);
					set_gameplay_cam_relative_pitch(-9.1222f, 1f);
				}
				else if (iLocal_49 == 2)
				{
					set_gameplay_cam_relative_heading(44.5236f);
					set_gameplay_cam_relative_pitch(-18.1582f, 1f);
				}
				new_load_scene_stop();
				set_cam_active(iLocal_226, false);
				render_script_cams(false, false, 3000, 1, 0, 0);
				func_48();
				func_130(0, 1, 1, 0);
				iLocal_227++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_145(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_146()
{
	int iVar0;
	
	if (!iLocal_136 && func_149(1, 0, 1))
	{
		if (does_blip_exist(iLocal_193))
		{
			remove_blip(&iLocal_193);
		}
		func_130(1, 1, 1, 0);
		clear_help(1);
		display_hud(false);
		display_radar(false);
		set_player_control(player_id(), false, 256);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		if (iLocal_49 == 1)
		{
			if (!iLocal_177)
			{
				iLocal_216 = create_synchronized_scene(vLocal_201, vLocal_207, 2);
				AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
				task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_216, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1000f, 0);
				_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
				if (((!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1])) && !PED::IS_PED_INJURED(iLocal_117[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_167))
				{
					task_synchronized_scene(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1000f, 0);
					task_synchronized_scene(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1000f, 0);
					task_synchronized_scene(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1000f, 0);
					play_synchronized_entity_anim(iLocal_167, iLocal_216, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1000f);
				}
				set_synchronized_scene_phase(iLocal_216, 0.06f);
				iLocal_177 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				AI::CLEAR_PED_TASKS(iLocal_117[0]);
				AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0, 0, 0, 0);
			}
			_new_load_scene_start_safe(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			iLocal_216 = create_synchronized_scene(vLocal_201, vLocal_207, 2);
			if (((!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1])) && !PED::IS_PED_INJURED(iLocal_117[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_167))
			{
				task_synchronized_scene(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1000f, 0);
				task_synchronized_scene(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1000f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[1]))
				{
					attach_entity_to_entity(iLocal_168[0], iLocal_117[0], get_ped_bone_index(iLocal_117[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					attach_entity_to_entity(iLocal_168[1], iLocal_117[0], get_ped_bone_index(iLocal_117[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			set_synchronized_scene_phase(iLocal_216, 0.05f);
			vLocal_201 = {-1199.369f, -776.1991f, 16.3235f};
			vLocal_207 = {0f, 0f, -60f};
			iLocal_216 = create_synchronized_scene(vLocal_201, vLocal_207, 2);
			if (!PED::IS_PED_INJURED(iLocal_114[1]))
			{
				task_synchronized_scene(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1000f, 0);
			}
			set_synchronized_scene_phase(iLocal_216, 0.06f);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), -1200.455f, -777.6201f, 16.3244f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 305.3806f);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			open_sequence_task(&iLocal_152);
			AI::TASK_PLAY_ANIM(false, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			AI::TASK_PLAY_ANIM(false, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0, 0, 0, 0);
			close_sequence_task(iLocal_152);
			task_perform_sequence(PLAYER::PLAYER_PED_ID(), iLocal_152);
			clear_sequence_task(&iLocal_152);
			_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		iLocal_136 = 1;
	}
	if (!iLocal_176)
	{
		func_147();
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_111 - 1)
	{
		if (!does_blip_exist(uLocal_185[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				uLocal_185[iVar0] = func_159(iLocal_114[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_49 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_175)) || iLocal_49 == 2)
	{
		settimera(false);
		iLocal_47 = 1;
	}
}

void func_147()
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_179)
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_179 = 1;
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (func_148())
		{
			if (is_entity_in_angled_area(iLocal_171, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, true, 0))
			{
				vLocal_172 = {-822.1784f, -205.811f, 36.3444f};
			}
			else
			{
				vLocal_172 = {-826.2828f, -197.8547f, 36.3995f};
			}
		}
		else
		{
			vLocal_172 = {-826.2828f, -197.8547f, 36.3995f};
		}
		iLocal_175 = create_vehicle(iVar0, vLocal_172, 31.9252f, 1, true);
		set_entity_load_collision_flag(iLocal_175, true);
		set_vehicle_on_ground_properly(iLocal_175);
		set_vehicle_engine_on(iLocal_175, true, 1, 0);
		iLocal_184 = PED::CREATE_PED_inside_vehicle(iLocal_175, 26, joaat("g_m_y_korean_01"), -1, 1, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_184, 134, true);
		set_blocking_of_non_temporary_events(iLocal_184, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_184, iLocal_190);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 8, false);
		PED::SET_PED_COMBAT_ABILITY(iLocal_184, 0);
		set_ped_accuracy(iLocal_184, 13);
		give_weapon_to_ped(iLocal_184, joaat("weapon_pistol"), -1, true, true);
		set_entity_is_target_priority(iLocal_184, 1, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_184, 42, true);
		iLocal_176 = 1;
	}
}

bool func_148()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (is_vehicle_driveable(iVar0, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, false, true, 0))
		{
			iLocal_171 = iVar0;
			if (!is_entity_a_mission_entity(iLocal_171))
			{
				set_entity_as_mission_entity(iLocal_171, true, 0);
			}
			return true;
		}
	}
	return false;
}

bool func_149(int iParam0, int iParam1, int iParam2)
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

void func_150()
{
	func_224();
}

bool func_151(int iParam0)
{
	if (func_152())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_58(Global_101143))
		{
			func_96(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_58(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

bool func_152()
{
	switch (func_153(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_153(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_157(0))
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
		if (!func_155(iParam2))
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
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(auto uParam0, int iParam1)
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

int func_155(int iParam0)
{
	return func_156(iParam0, Global_35711);
}

bool func_156(int iParam0, int iParam1)
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

bool func_157(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_155(iParam0))
	{
		return false;
	}
	return true;
}

bool func_158()
{
	if (iLocal_49 == 1)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, true, 0))
		{
			return true;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
		{
			return true;
		}
	}
	return false;
}

int func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_109(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_160()
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
			if (_0x6CD5A433374D4CFB(iLocal_114[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_114[1], PLAYER::PLAYER_PED_ID()))
			{
				if (((is_player_free_aiming_at_entity(player_id(), iLocal_114[0]) || is_player_targetting_entity(player_id(), iLocal_114[0])) || is_player_free_aiming_at_entity(player_id(), iLocal_114[1])) || is_player_targetting_entity(player_id(), iLocal_114[1]))
				{
					if (iLocal_126 == -1)
					{
						iLocal_126 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_126 = -1;
				}
				if (iLocal_126 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_126 + 1500)
				{
					return true;
				}
			}
		}
	}
	if (is_explosion_in_area(-1, vLocal_194 - Vector(20f, 20f, 20f), vLocal_194 + Vector(20f, 20f, 20f)))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0) || ENTITY::IS_ENTITY_DEAD(iLocal_114[1], 0))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && func_158())
	{
		return true;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && func_158())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
	{
		if (((is_ped_shooting_in_area(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1) - Vector(12f, 12f, 12f), ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID())) || is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 1), 3f, 1)) || is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1), 3f, 1))
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_121[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_161(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_114(sParam2, iParam4, 0);
}

bool func_162()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, false, true, 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
		set_ped_max_move_blend_ratio(PLAYER::PLAYER_PED_ID(), 1f);
		set_ped_using_action_mode(PLAYER::PLAYER_PED_ID(), false, 1, 0);
		return true;
	}
	return false;
}

void func_163()
{
	if (!PED::IS_PED_INJURED(iLocal_117[1]))
	{
		if (is_ped_male(iLocal_117[1]))
		{
			func_164(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_164(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		play_pain(iLocal_117[1], 26, 0f, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_121[1]))
	{
		func_164(iLocal_121[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		play_pain(iLocal_121[1], 3, 0f, 0);
	}
}

void func_164(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_165(iParam3), 0);
}

int func_165(int iParam0)
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

void func_166()
{
	int iVar0;
	
	set_create_random_cops(false);
	add_relationship_group("ROBBERS", &iLocal_190);
	iVar0 = 0;
	while (iVar0 <= iLocal_111 - 1)
	{
		iLocal_114[iVar0] = PED::CREATE_PED(26, iLocal_222, vLocal_55[iVar0 /*3*/], fLocal_62[iVar0], 1, true);
		set_blocking_of_non_temporary_events(iLocal_114[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_114[iVar0], iLocal_190);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[iVar0], 8, false);
		PED::SET_PED_COMBAT_ABILITY(iLocal_114[iVar0], 0);
		set_ped_accuracy(iLocal_114[iVar0], 13);
		give_weapon_to_ped(iLocal_114[iVar0], joaat("weapon_pistol"), -1, true, true);
		set_entity_is_target_priority(iLocal_114[iVar0], 1, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 269, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 188, true);
		set_ped_can_ragdoll_from_player_impact(iLocal_114[iVar0], 0);
		set_ped_flee_attributes(iLocal_114[iVar0], 128, true);
		set_ped_flee_attributes(iLocal_114[iVar0], 8, true);
		iVar0++;
	}
	set_ped_name_debug(iLocal_114[0], "pedRobber[0]");
	set_ped_name_debug(iLocal_114[1], "pedRobber[1]");
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_190, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_190);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_190, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_190);
	if (func_39() == 0)
	{
		func_171(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_39() == 1)
	{
		func_171(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_39() == 2)
	{
		func_171(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_167 = create_object(iLocal_188, vLocal_97, 1, true, false);
	if (iLocal_49 == 1)
	{
		add_scenario_blocking_area(vLocal_128 - Vector(20f, 20f, 20f), vLocal_128 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		set_vehicle_model_is_suppressed(joaat("baller"), true);
		iLocal_168[0] = create_object(joaat("prop_anim_cash_pile_01"), vLocal_97, 1, true, false);
		iLocal_168[1] = create_object(joaat("prop_anim_cash_pile_01"), vLocal_97 - Vector(0.1f, 0f, 0f), 1, true, false);
		set_ambient_voice_name(iLocal_114[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		set_ambient_voice_name(iLocal_114[1], "G_M_Y_Korean_01_Korean_MINI_02");
		vLocal_201 = {-821.565f, -186.467f, 36.6f};
		vLocal_207 = {0f, 0f, -59.96f};
		iLocal_216 = create_synchronized_scene(vLocal_201, vLocal_207, 2);
		set_synchronized_scene_looped(iLocal_216, true);
		task_synchronized_scene(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1000f, 0);
		play_synchronized_entity_anim(iLocal_167, iLocal_216, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 8f, 0, 1000f);
		iVar0 = 0;
		while (iVar0 <= iLocal_112 - 1)
		{
			iLocal_117[iVar0] = PED::CREATE_PED(26, iLocal_219, vLocal_65[iVar0 /*3*/], fLocal_75[iVar0], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_117[iVar0], 17, true);
			set_blocking_of_non_temporary_events(iLocal_117[iVar0], true);
			set_ped_can_be_targetted(iLocal_117[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 269, true);
			iVar0++;
		}
		set_ped_name_debug(iLocal_117[0], "pedWorker[0]");
		set_ped_name_debug(iLocal_117[1], "pedWorker[1]");
		set_ped_name_debug(iLocal_117[2], "pedWorker[2]");
		iLocal_121[0] = PED::CREATE_PED(26, iLocal_220, vLocal_79[0 /*3*/], fLocal_92[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[0], 17, true);
		set_blocking_of_non_temporary_events(iLocal_121[0], true);
		set_ped_can_be_targetted(iLocal_121[0], false);
		PED::SET_PED_CONFIG_FLAG(iLocal_121[0], 269, true);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_121[iVar0] = PED::CREATE_PED(26, iLocal_221, vLocal_79[iVar0 /*3*/], fLocal_92[iVar0], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[iVar0], 17, true);
			set_blocking_of_non_temporary_events(iLocal_121[iVar0], true);
			set_ped_can_be_targetted(iLocal_121[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_121[iVar0], 269, true);
			iVar0++;
		}
		set_ped_name_debug(iLocal_121[0], "pedShopper[0]");
		set_ped_name_debug(iLocal_121[1], "pedShopper[1]");
		set_ped_name_debug(iLocal_121[2], "pedShopper[2]");
		set_ped_component_variation(iLocal_117[0], false, false, false, 0);
		set_ped_component_variation(iLocal_117[0], 2, true, true, 0);
		set_ped_component_variation(iLocal_117[0], 3, true, false, 0);
		set_ped_component_variation(iLocal_117[0], 4, false, false, 0);
		set_ped_component_variation(iLocal_117[0], 5, false, false, 0);
		task_synchronized_scene(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1000f, 0);
		set_ambient_voice_name(iLocal_117[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_171(&uLocal_232, 5, iLocal_117[0], "REROBShopworker", 0, 1);
		set_ped_component_variation(iLocal_117[1], false, true, false, 0);
		set_ped_component_variation(iLocal_117[1], 2, false, false, 0);
		set_ped_component_variation(iLocal_117[1], 3, false, false, 0);
		set_ped_component_variation(iLocal_117[1], 4, true, 2, 0);
		set_ped_component_variation(iLocal_117[1], 5, false, false, 0);
		task_cower(iLocal_117[1], -1);
		set_ped_keep_task(iLocal_117[1], true);
		set_ped_component_variation(iLocal_117[2], false, true, false, 0);
		set_ped_component_variation(iLocal_117[2], 2, true, false, 0);
		set_ped_component_variation(iLocal_117[2], 3, false, 2, 0);
		set_ped_component_variation(iLocal_117[2], 4, true, 2, 0);
		set_ped_component_variation(iLocal_117[2], 5, false, false, 0);
		task_cower(iLocal_117[2], -1);
		set_ped_keep_task(iLocal_117[2], true);
		iLocal_216 = create_synchronized_scene(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		set_synchronized_scene_looped(iLocal_216, true);
		set_ped_component_variation(iLocal_121[0], false, false, true, 0);
		set_ped_component_variation(iLocal_121[0], 2, false, false, 0);
		set_ped_component_variation(iLocal_121[0], 3, false, true, 0);
		set_ped_component_variation(iLocal_121[0], 4, false, true, 0);
		set_ped_component_variation(iLocal_121[0], 8, false, false, 0);
		task_synchronized_scene(iLocal_121[0], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		set_ped_keep_task(iLocal_121[0], true);
		iLocal_216 = create_synchronized_scene(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		set_synchronized_scene_looped(iLocal_216, true);
		set_ped_component_variation(iLocal_121[1], false, false, false, 0);
		set_ped_component_variation(iLocal_121[1], 2, false, true, 0);
		set_ped_component_variation(iLocal_121[1], 3, true, true, 0);
		set_ped_component_variation(iLocal_121[1], 4, true, true, 0);
		set_ped_component_variation(iLocal_121[1], 8, false, false, 0);
		task_synchronized_scene(iLocal_121[1], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		set_ped_keep_task(iLocal_121[1], true);
		iLocal_216 = create_synchronized_scene(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		set_synchronized_scene_looped(iLocal_216, true);
		set_ped_component_variation(iLocal_121[2], false, true, false, 0);
		set_ped_component_variation(iLocal_121[2], 2, false, 2, 0);
		set_ped_component_variation(iLocal_121[2], 3, false, true, 0);
		set_ped_component_variation(iLocal_121[2], 4, true, false, 0);
		set_ped_component_variation(iLocal_121[2], 8, false, false, 0);
		task_synchronized_scene(iLocal_121[2], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		set_ped_keep_task(iLocal_121[2], true);
		task_aim_gun_at_entity(iLocal_114[0], iLocal_117[0], -1, 0);
		set_roads_in_area(-871f, -246f, 0f, -798f, -163f, 50f, false, 1);
		assisted_movement_request_route("Hairdresser1");
		func_170(0, 1);
		func_169(0);
		wait(500);
		func_167(0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		add_scenario_blocking_area(vLocal_131 - Vector(20f, 20f, 20f), vLocal_131 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_167, vLocal_100, 2, 1);
		iLocal_117[0] = PED::CREATE_PED(26, iLocal_219, vLocal_65[0 /*3*/], fLocal_75[0], 1, true);
		set_ped_name_debug(iLocal_117[0], "pedWorker[0]");
		set_ambient_voice_name(iLocal_117[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_171(&uLocal_232, 6, iLocal_117[0], "REROBShopworker2", 0, 1);
		iLocal_117[1] = PED::CREATE_PED(26, iLocal_218, vLocal_65[1 /*3*/], fLocal_75[1], 1, true);
		set_ped_name_debug(iLocal_117[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= iLocal_112 - 1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_117[iVar0], 17, true);
			set_blocking_of_non_temporary_events(iLocal_117[iVar0], true);
			set_ped_can_be_targetted(iLocal_117[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 269, true);
			iVar0++;
		}
		iLocal_121[0] = PED::CREATE_PED(26, iLocal_220, vLocal_79[0 /*3*/], fLocal_92[0], 1, true);
		set_ped_name_debug(iLocal_121[0], "pedShopper[0]");
		iLocal_121[1] = PED::CREATE_PED(26, iLocal_221, vLocal_79[1 /*3*/], fLocal_92[1], 1, true);
		set_ped_name_debug(iLocal_121[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= iLocal_113 - 1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[iVar0], 17, true);
			set_blocking_of_non_temporary_events(iLocal_121[iVar0], true);
			set_ped_can_be_targetted(iLocal_121[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_121[iVar0], 269, true);
			iVar0++;
		}
		AI::TASK_PLAY_ANIM(iLocal_117[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0, 0, 0, 0);
		set_ped_keep_task(iLocal_117[0], true);
		AI::TASK_PLAY_ANIM(iLocal_117[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0, 0, 0, 0);
		set_ped_keep_task(iLocal_117[1], true);
		task_cower(iLocal_121[0], -1);
		set_ped_keep_task(iLocal_121[0], true);
		AI::TASK_PLAY_ANIM(iLocal_121[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0, 0, 0, 0);
		set_ped_keep_task(iLocal_121[1], true);
		vLocal_201 = {-1192.01f, -768.929f, 16.358f};
		vLocal_207 = {0f, 0f, -59.5f};
		iLocal_216 = create_synchronized_scene(vLocal_201, vLocal_207, 2);
		set_synchronized_scene_looped(iLocal_216, true);
		task_synchronized_scene(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1000f, 0);
		task_synchronized_scene(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1000f, 0);
		AI::TASK_PLAY_ANIM(iLocal_114[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0, 0, 0, 0);
		func_170(14, 1);
		func_169(14);
		wait(500);
		func_167(14, 0, 0);
	}
	func_171(&uLocal_232, 3, iLocal_114[0], "REROBRobber1", 0, 1);
	func_171(&uLocal_232, 4, iLocal_114[1], "REROBRobber2", 0, 1);
	set_model_as_no_longer_needed(joaat("a_f_y_bevhills_02"));
	set_model_as_no_longer_needed(joaat("a_m_y_bevhills_02"));
	set_model_as_no_longer_needed(joaat("a_m_y_hipster_01"));
	set_model_as_no_longer_needed(joaat("a_f_y_hipster_04"));
	set_model_as_no_longer_needed(joaat("g_m_y_korean_01"));
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (iParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2)
	{
		if (iParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_168(iParam0, 0);
	if (iVar1 != 226)
	{
		func_71(iVar1, iVar0);
	}
	iVar1 = func_168(iParam0, 1);
	if (iVar1 != 226)
	{
		func_71(iVar1, iVar0);
	}
}

int func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_169(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_170(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_37(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_171(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_172()
{
	if (!iLocal_135)
	{
		iLocal_153 = get_interior_at_coords(vLocal_55[0 /*3*/]);
		_0x2CA429C029CCF247(iLocal_153);
		iLocal_135 = 1;
	}
}

void func_173()
{
	STREAMING::REQUEST_MODEL(iLocal_219);
	STREAMING::REQUEST_MODEL(iLocal_220);
	STREAMING::REQUEST_MODEL(iLocal_221);
	STREAMING::REQUEST_MODEL(iLocal_222);
	STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
	request_waypoint_recording("re_shoprobbery");
	request_waypoint_recording("re_shoprobbery2");
	request_anim_dict("random@robbery");
	request_anim_dict("random@shop_robbery");
	prepare_music_event("RE51A_SHOP");
	if ((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_219) && STREAMING::HAS_MODEL_LOADED(iLocal_220)) && STREAMING::HAS_MODEL_LOADED(iLocal_221)) && STREAMING::HAS_MODEL_LOADED(iLocal_222)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_duffel_01"))) && get_is_waypoint_recording_loaded("re_shoprobbery")) && get_is_waypoint_recording_loaded("re_shoprobbery2")) && has_anim_dict_loaded("random@robbery")) && has_anim_dict_loaded("random@shop_robbery")) && prepare_music_event("RE51A_SHOP"))
	{
		iLocal_53 = 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_219);
		STREAMING::REQUEST_MODEL(iLocal_220);
		STREAMING::REQUEST_MODEL(iLocal_221);
		STREAMING::REQUEST_MODEL(iLocal_222);
		STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
		request_anim_dict("random@robbery");
		request_anim_dict("random@shop_robbery");
		prepare_music_event("RE51A_SHOP");
	}
}

void func_174()
{
	iLocal_141[0] = 0;
	iLocal_141[1] = 0;
	if (iLocal_49 == 1)
	{
		iLocal_219 = joaat("a_f_y_bevhills_02");
		iLocal_220 = joaat("a_m_y_bevhills_02");
		iLocal_221 = joaat("a_f_y_bevhills_02");
		iLocal_222 = joaat("g_m_y_korean_01");
		iLocal_111 = 2;
		iLocal_112 = 3;
		iLocal_113 = 3;
		vLocal_55[0 /*3*/] = {-821.4461f, -184.8474f, 37.5668f};
		fLocal_62[0] = 252.381f;
		vLocal_55[1 /*3*/] = {-819.4664f, -186.8146f, 36.5671f};
		fLocal_62[1] = -153.9562f;
		vLocal_65[0 /*3*/] = {-821.941f, -183.3325f, 36.5689f};
		fLocal_75[0] = 203.3684f;
		vLocal_65[1 /*3*/] = {-813.6672f, -185.5652f, 36.5689f};
		fLocal_75[1] = 90.1761f;
		vLocal_65[2 /*3*/] = {-816.1049f, -183.9966f, 36.5689f};
		fLocal_75[2] = 192.7338f;
		vLocal_79[0 /*3*/] = {-813.008f, -184.931f, 37.869f};
		fLocal_92[0] = 337.68f;
		vLocal_79[1 /*3*/] = {-817.5606f, -190.8273f, 37.3114f};
		fLocal_92[1] = 25.8399f;
		vLocal_79[2 /*3*/] = {-816.1862f, -182.897f, 37.6304f};
		fLocal_92[2] = 30f;
		vLocal_97 = {-822.2148f, -184.0822f, 37.7027f};
		vLocal_100 = {-1.8236f, 0.6172f, 75.8024f};
		vLocal_103 = {-808.5918f, -180.0378f, 36.5689f};
		iLocal_188 = joaat("prop_cs_duffel_01");
		iLocal_189 = 2000;
		vLocal_194 = {-822.8538f, -187.7645f, 36.5792f};
	}
	else if (iLocal_49 == 2)
	{
		iLocal_218 = joaat("a_m_y_hipster_01");
		iLocal_219 = joaat("a_f_y_hipster_04");
		iLocal_220 = joaat("a_m_y_hipster_01");
		iLocal_221 = joaat("a_f_y_hipster_04");
		iLocal_222 = joaat("g_m_y_strpunk_02");
		iLocal_111 = 2;
		iLocal_112 = 2;
		iLocal_113 = 2;
		vLocal_55[0 /*3*/] = {-1193.045f, -769.304f, 16.321f};
		fLocal_62[0] = -85.5f;
		vLocal_55[1 /*3*/] = {-1199.045f, -778.8358f, 16.3277f};
		fLocal_62[1] = 329.1899f;
		vLocal_65[0 /*3*/] = {-1193.802f, -766.8922f, 16.331f};
		fLocal_75[0] = 221.3152f;
		vLocal_65[1 /*3*/] = {-1193.85f, -771.4392f, 16.3227f};
		fLocal_75[1] = 247.1149f;
		vLocal_79[0 /*3*/] = {-1184.359f, -767.0463f, 16.3468f};
		fLocal_92[0] = 103.3015f;
		vLocal_79[1 /*3*/] = {-1185.932f, -770.624f, 16.344f};
		fLocal_92[1] = 43.215f;
		vLocal_97 = {-1192.968f, -767.0651f, 17.2968f};
		vLocal_100 = {0f, 0f, -128.52f};
		vLocal_103 = {-1180.457f, -763.9163f, 16.3267f};
		iLocal_188 = joaat("prop_cs_duffel_01");
		iLocal_189 = 2000;
		vLocal_194 = {-1201.006f, -777.4955f, 16.3235f};
	}
	iLocal_54 = true;
}

bool func_175()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_43) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_186())
		{
			return false;
		}
	}
	if (func_182())
	{
		return true;
	}
	if (func_176(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_176(float fParam0, int iParam1)
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
		if (func_41(func_39()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_177(iVar32, &Var0);
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

void func_177(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_178(uParam1, "Abigail1", func_180(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 1:
			func_178(uParam1, "Abigail2", func_180(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 2:
			func_178(uParam1, "Barry1", func_180(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 3:
			func_178(uParam1, "Barry2", func_180(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 4:
			func_178(uParam1, "Barry3", func_180(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 5:
			func_178(uParam1, "Barry3A", func_180(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 6:
			func_178(uParam1, "Barry3C", func_180(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 7:
			func_178(uParam1, "Barry4", func_180(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_179(iParam0), 0, 0);
			break;
		
		case 8:
			func_178(uParam1, "Dreyfuss1", func_180(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 9:
			func_178(uParam1, "Epsilon1", func_180(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 10:
			func_178(uParam1, "Epsilon2", func_180(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 11:
			func_178(uParam1, "Epsilon3", func_180(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 12:
			func_178(uParam1, "Epsilon4", func_180(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 13:
			func_178(uParam1, "Epsilon5", func_180(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 14:
			func_178(uParam1, "Epsilon6", func_180(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 15:
			func_178(uParam1, "Epsilon7", func_180(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 16:
			func_178(uParam1, "Epsilon8", func_180(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 17:
			func_178(uParam1, "Extreme1", func_180(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 18:
			func_178(uParam1, "Extreme2", func_180(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 19:
			func_178(uParam1, "Extreme3", func_180(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 20:
			func_178(uParam1, "Extreme4", func_180(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 21:
			func_178(uParam1, "Fanatic1", func_180(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_179(iParam0), 1, 0);
			break;
		
		case 22:
			func_178(uParam1, "Fanatic2", func_180(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_179(iParam0), 1, 0);
			break;
		
		case 23:
			func_178(uParam1, "Fanatic3", func_180(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_179(iParam0), 0, 1);
			break;
		
		case 24:
			func_178(uParam1, "Hao1", func_180(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_179(iParam0), 0, 1);
			break;
		
		case 25:
			func_178(uParam1, "Hunting1", func_180(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 26:
			func_178(uParam1, "Hunting2", func_180(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 27:
			func_178(uParam1, "Josh1", func_180(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 28:
			func_178(uParam1, "Josh2", func_180(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 29:
			func_178(uParam1, "Josh3", func_180(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 30:
			func_178(uParam1, "Josh4", func_180(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 31:
			func_178(uParam1, "Maude1", func_180(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 32:
			func_178(uParam1, "Minute1", func_180(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 33:
			func_178(uParam1, "Minute2", func_180(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 34:
			func_178(uParam1, "Minute3", func_180(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 35:
			func_178(uParam1, "MrsPhilips1", func_180(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 36:
			func_178(uParam1, "MrsPhilips2", func_180(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 37:
			func_178(uParam1, "Nigel1", func_180(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 38:
			func_178(uParam1, "Nigel1A", func_180(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 39:
			func_178(uParam1, "Nigel1B", func_180(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_179(iParam0), 1, 1);
			break;
		
		case 40:
			func_178(uParam1, "Nigel1C", func_180(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_179(iParam0), 1, 1);
			break;
		
		case 41:
			func_178(uParam1, "Nigel1D", func_180(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_179(iParam0), 1, 1);
			break;
		
		case 42:
			func_178(uParam1, "Nigel2", func_180(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 43:
			func_178(uParam1, "Nigel3", func_180(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_179(iParam0), 1, 1);
			break;
		
		case 44:
			func_178(uParam1, "Omega1", func_180(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 45:
			func_178(uParam1, "Omega2", func_180(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 46:
			func_178(uParam1, "Paparazzo1", func_180(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 47:
			func_178(uParam1, "Paparazzo2", func_180(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 48:
			func_178(uParam1, "Paparazzo3", func_180(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 49:
			func_178(uParam1, "Paparazzo3A", func_180(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 50:
			func_178(uParam1, "Paparazzo3B", func_180(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 51:
			func_178(uParam1, "Paparazzo4", func_180(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 52:
			func_178(uParam1, "Rampage1", func_180(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 54:
			func_178(uParam1, "Rampage3", func_180(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 55:
			func_178(uParam1, "Rampage4", func_180(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 56:
			func_178(uParam1, "Rampage5", func_180(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_179(iParam0), 0, 0);
			break;
		
		case 53:
			func_178(uParam1, "Rampage2", func_180(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_179(iParam0), 1, 0);
			break;
		
		case 57:
			func_178(uParam1, "TheLastOne", func_180(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 58:
			func_178(uParam1, "Tonya1", func_180(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 59:
			func_178(uParam1, "Tonya2", func_180(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 60:
			func_178(uParam1, "Tonya3", func_180(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 61:
			func_178(uParam1, "Tonya4", func_180(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		case 62:
			func_178(uParam1, "Tonya5", func_180(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_179(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_178(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_179(int iParam0)
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

struct<2> func_180(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_181(iParam0)};
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

struct<2> func_181(int iParam0)
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

bool func_182()
{
	if (func_185() && !func_186())
	{
		return true;
	}
	if (func_184() && func_183())
	{
		return true;
	}
	return false;
}

int func_183()
{
	return Global_100872 > 0;
}

bool func_184()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_185()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_186()
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

bool func_187()
{
	if (!func_155(5))
	{
		return true;
	}
	if (func_182())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_186())
		{
			return false;
		}
	}
	if (func_176(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_188()
{
	if ((Global_101143 == func_67() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_189(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_191(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_190();
}

void func_190()
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

void func_191(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_192(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_67();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_221())
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
			if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_186())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_52(0))
		{
			return false;
		}
		if (func_182())
		{
			return false;
		}
		if (func_220())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_41(func_39()))
		{
			if (func_176(100f, 1) != -1)
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
		if (!func_219(iParam3))
		{
			return false;
		}
		if (func_41(func_39()))
		{
			if (func_218(func_39()) == 4 || func_218(func_39()) == 5)
			{
				return false;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_217(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_216(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_215())
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
		if (!func_206(4))
		{
			return false;
		}
		if (!func_155(5))
		{
			return false;
		}
		if (func_205(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_205(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_219(30) && !func_205(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_204(iVar8))
				{
					if (func_194(iVar4))
					{
						if (!func_193(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_39() != iVar4)
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

int func_193(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_195(iVar0);
}

int func_195(int iParam0)
{
	return func_196(iParam0, 1);
}

bool func_196(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_204(iParam0))
	{
		return false;
	}
	func_197(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_197(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_198(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_198(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_203(iParam0, iParam1))
	{
		iVar0 = func_88(iParam1);
		iVar1 = func_86(iParam0);
		iVar2 = func_86(iParam0) - func_86(iParam1);
		iVar3 = func_88(iParam0) - func_88(iParam1);
		iVar4 = func_202(iParam0) - func_202(iParam1);
		iVar5 = func_80(iParam0) - func_80(iParam1);
		iVar6 = func_201(iParam0) - func_201(iParam1);
		iVar7 = func_200(iParam0) - func_200(iParam1);
	}
	else
	{
		iVar0 = func_88(iParam0);
		iVar1 = func_86(iParam1);
		iVar2 = func_86(iParam1) - func_86(iParam0);
		iVar3 = func_88(iParam1) - func_88(iParam0);
		iVar4 = func_202(iParam1) - func_202(iParam0);
		iVar5 = func_80(iParam1) - func_80(iParam0);
		iVar6 = func_201(iParam1) - func_201(iParam0);
		iVar7 = func_200(iParam1) - func_200(iParam0);
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
		iVar4 += func_85(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_199(to_float(iVar0 + 1), 0f, 12f));
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

float func_199(Vector3 fParam0, float fParam1, float fParam2)
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

int func_200(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_202(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

bool func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_204(iParam1) || !func_204(iParam0))
	{
		return true;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_80(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
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
	iVar0 = func_200(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_201(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_80(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_86(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_205(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_214()) || Global_100201) || Global_25122) || func_213()) || func_121(8, -1)) || func_212()) || func_211()) || func_210()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_214()) || Global_25122) || func_213()) || func_121(8, -1)) || func_210()) || func_212()) || func_211()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_214()) || Global_100201) || Global_25122) || func_213()) || func_121(8, -1)) || func_210()) || func_212()) || func_211()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_214()) || Global_100201) || Global_25122) || func_213()) || func_121(8, -1)) || func_212()) || func_211()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_214() || get_player_wanted_level(player_id()) > 0) || func_121(8, -1)) || func_209()) || func_208()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_121(8, -1) || func_212()) || func_211()) || func_208()) || func_207())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_214()) || Global_25122) || func_213()) || func_121(8, -1)) || func_211()) || func_210()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_214()) || func_211()) || Global_100201) || Global_25122) || func_213()) || Global_36839) || func_121(8, -1)) || func_210()) || func_208()) || func_209()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_214()) || Global_100201) || Global_25122) || func_213()) || func_121(8, -1)) || func_210()) || func_208()) || func_212()) || func_211()) || func_209())
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

auto func_207()
{
	return Global_91317.f_1;
}

int func_208()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_209()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_210()
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

int func_211()
{
	return Global_91330.f_297 > 0;
}

int func_212()
{
	return Global_91330.f_296 > 0;
}

auto func_213()
{
	return Global_1315913;
}

int func_214()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_215()
{
	func_119();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_216(int iParam0)
{
	return func_203(func_81(), iParam0);
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_218(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_221())
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

bool func_220()
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

bool func_221()
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

int func_222(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

int func_223(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_224()
{
	int iVar0;
	
	if (iLocal_223)
	{
		func_125(0);
		cancel_music_event("RE51A_SHOP");
		remove_scenario_blocking_areas();
		set_roads_back_to_original(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		remove_waypoint_recording("re_shoprobbery");
		remove_waypoint_recording("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= iLocal_111 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar0]) && !is_ped_in_any_vehicle(iLocal_114[iVar0], 0))
				{
					task_smart_flee_coord(iLocal_114[iVar0], vLocal_103, 150f, -1, 0, 0);
					set_ped_keep_task(iLocal_114[iVar0], true);
				}
				set_ped_as_no_longer_needed(&(iLocal_114[iVar0]));
			}
			if (does_blip_exist(uLocal_185[iVar0]))
			{
				remove_blip(&(uLocal_185[iVar0]));
			}
			iVar0++;
		}
		if (does_blip_exist(iLocal_192))
		{
			remove_blip(&iLocal_192);
		}
		iVar0 = 0;
		while (iVar0 <= iLocal_113 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_121[iVar0]))
				{
					set_entity_load_collision_flag(iLocal_121[iVar0], true);
					open_sequence_task(&iLocal_152);
					if (iLocal_49 == 1)
					{
						AI::TASK_PLAY_ANIM(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_49 == 2)
					{
						AI::CLEAR_PED_TASKS(iLocal_121[iVar0]);
						task_follow_nav_mesh_to_coord(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 1193033728);
					}
					task_smart_flee_coord(false, vLocal_103, 150f, -1, 0, 0);
					close_sequence_task(iLocal_152);
					task_perform_sequence(iLocal_121[iVar0], iLocal_152);
					clear_sequence_task(&iLocal_152);
					set_ped_keep_task(iLocal_121[iVar0], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= iLocal_112 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_117[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 317, true);
					set_entity_load_collision_flag(iLocal_117[iVar0], true);
					if (iVar0 == 0)
					{
						if (!iLocal_183)
						{
							AI::CLEAR_PED_TASKS(iLocal_117[iVar0]);
							task_smart_flee_coord(iLocal_117[iVar0], vLocal_103, 150f, -1, 0, 0);
						}
						else
						{
							set_blocking_of_non_temporary_events(iLocal_117[iVar0], false);
						}
					}
					else
					{
						open_sequence_task(&iLocal_152);
						if (iLocal_49 == 2)
						{
							AI::CLEAR_PED_TASKS(iLocal_117[iVar0]);
							task_follow_nav_mesh_to_coord(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 1193033728);
						}
						task_smart_flee_coord(false, vLocal_103, 150f, -1, 0, 0);
						close_sequence_task(iLocal_152);
						task_perform_sequence(iLocal_117[iVar0], iLocal_152);
						clear_sequence_task(&iLocal_152);
					}
					set_blocking_of_non_temporary_events(iLocal_117[iVar0], false);
					set_ped_can_be_targetted(iLocal_117[iVar0], true);
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
		{
			set_ped_as_no_longer_needed(&iLocal_184);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (is_entity_attached(iLocal_167))
			{
				detach_entity(iLocal_167, 1, true);
			}
			set_object_as_no_longer_needed(&iLocal_167);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			set_vehicle_as_no_longer_needed(&iLocal_175);
		}
		if (is_player_playing(player_id()))
		{
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		display_hud(true);
		display_radar(true);
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		set_create_random_cops(true);
		if (iLocal_49 == 1)
		{
			func_170(0, 0);
			func_167(0, 1, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_170(14, 0);
			func_167(14, 1, 0);
		}
	}
	func_225(-1);
	terminate_this_thread();
}

void func_225(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_188())
	{
		func_229(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_228(30000);
		StringCopy(&cVar0, func_227(Global_101143, 1), 64);
		if (func_66(Global_101143) > 0)
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
	func_226(&Global_25179);
	Global_101144 = 0;
	func_191(-1);
}

void func_226(auto uParam0)
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

char* func_227(int iParam0, int iParam1)
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

void func_228(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_229(int iParam0)
{
	func_230(iParam0, 0, func_235(iParam0));
}

void func_230(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_81();
	func_233(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_232(uParam0, &uVar0);
	Var1 = {func_231(&uVar0)};
}

struct<16> func_231(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_80(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_88(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_86(*uParam0), 64);
	return cVar0;
}

void func_232(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_233(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_201(*uParam0);
	iVar5 = func_200(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_234(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_234(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

int func_235(int iParam0)
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

void func_236()
{
	Global_14578 = 0;
	func_237();
}

void func_237()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

Vector3 func_238()
{
	Vector3 fVar0;
	
	if (is_player_playing(player_id()))
	{
		fVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_128, 1);
		iLocal_127 = 1;
		if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_131, 1) < fVar0)
		{
			fVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_131, 1);
			iLocal_127 = 2;
		}
		if (iLocal_127 == 1)
		{
			iLocal_134 = true;
			iLocal_49 = 1;
			return vLocal_128;
		}
		else if (iLocal_127 == 2)
		{
			iLocal_134 = 2;
			iLocal_49 = 2;
			return vLocal_131;
		}
	}
	return 0f, 0f, 0f;
}

