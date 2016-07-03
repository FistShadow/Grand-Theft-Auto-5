#region Local Var
	auto uLocal_0 = 0;
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
	int iLocal_13 = 0;
	auto uLocal_14 = 0;
	auto uLocal_15 = 0;
	float fLocal_16 = 0;
	auto uLocal_17 = 0;
	auto uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
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
	Vector3 vLocal_44 = 0;
	Vector3 fLocal_47 = 0;
	int iLocal_48 = 0;
	auto uLocal_49 = 0;
	int iLocal_50 = 0;
	auto uLocal_51 = 0;
	Vector3 vLocal_52 = 0;
	Vector3 fLocal_55 = 0;
	Vector3 vLocal_56 = 0;
	Vector3 vLocal_59 = 0;
	Vector3 vLocal_62 = 0;
	Vector3 vLocal_65 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	Vector3 vLocal_70 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	auto uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int[] iLocal_87 = new int[2];
	int[] iLocal_90 = new int[2];
	int[] iLocal_93 = new int[2];
	int[] iLocal_96 = new int[2];
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	float fLocal_102 = 0;
	float fLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	Vector3 vLocal_110 = 0;
	Vector3 vLocal_113 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	var[] uLocal_125 = new var[2];
	var[] uLocal_128 = new var[2];
	var[] uLocal_131 = new var[2];
	var[] uLocal_134 = new var[4];
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int[] iLocal_144 = new int[2];
	int[] iLocal_147 = new int[2];
	int[] iLocal_150 = new int[4];
	int iLocal_155 = 0;
	int[] iLocal_156 = new int[2];
	int iLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	Vector3 vLocal_165 = 0;
	Vector3 vLocal_168 = 0;
	Vector3 vLocal_171 = 0;
	char* sLocal_174 = 0;
	char* sLocal_175 = 0;
	auto uLocal_176 = 16;
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
	auto uLocal_220 = 0;
	auto uLocal_221 = 0;
	auto uLocal_222 = 0;
	auto uLocal_223 = 0;
	auto uLocal_224 = 0;
	auto uLocal_225 = 0;
	auto uLocal_226 = 0;
	auto uLocal_227 = 0;
	auto uLocal_228 = 0;
	auto uLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	auto uLocal_232 = 0;
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
	auto uLocal_343 = -1;
	auto uLocal_344 = 0;
	auto uLocal_345 = 0;
	auto uLocal_346 = 0;
	auto uLocal_347 = 0;
	auto uLocal_348 = 0;
	auto uLocal_349 = 0;
	auto uLocal_350 = 1000;
	auto uLocal_351 = 1000;
	auto uLocal_352 = 0;
	Vector3 vLocal_353 = 0;
	Vector3 vLocal_356 = 0;
	float fLocal_359 = 0;
	auto uLocal_360 = 0;
	int iLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 0;
	auto uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	auto uLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	struct<6> Local_378 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	char* sLocal_386 = 0;
	char* sLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	struct<19> Local_392 = 0;
	auto uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	struct<7>[] Local_416 = new struct<7>[2];
	int[] iLocal_431 = new int[2];
	int[] iLocal_434 = new int[2];
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	struct<18> Local_440 = 0;
	auto uLocal_458 = 0;
	auto uLocal_459 = 0;
	auto uLocal_460 = 0;
	auto uLocal_461 = 0;
	auto uLocal_462 = 0;
#endregion

void main()
{
	Vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iLocal_3 = 3;
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
	sLocal_20 = "NULL";
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
	fLocal_47 = -1f;
	vLocal_56 = {-1511.194f, 436.5252f, 109.7818f};
	vLocal_59 = {968.0051f, -127.6078f, 73.3543f};
	vLocal_65 = {-1034.6f, 4918.6f, 205.9f};
	vLocal_70 = {0.5f, 0.1f, 0.56f};
	sLocal_175 = "chassis";
	vLocal_353 = {0f, -5f, 0f};
	vLocal_356 = {1f, -1f, 0f};
	iLocal_369 = joaat("gburrito");
	iLocal_370 = joaat("daemon");
	iLocal_371 = joaat("g_m_y_lost_01");
	iLocal_372 = joaat("g_m_y_lost_02");
	iLocal_373 = joaat("u_f_y_bikerchic");
	StringCopy(&Local_378, "", 24);
	iLocal_384 = -1;
	sLocal_386 = "RANDOM@KIDNAP_GIRL";
	sLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	vLocal_52 = {Local_440.f_1[0 /*3*/]};
	fLocal_55 = Local_440.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (is_ped_group_member(iLocal_140, get_player_group(player_id())))
			{
				remove_ped_from_group(iLocal_140);
				task_wander_standard(iLocal_140, 1193033728, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 17, true);
				set_ped_flee_attributes(iLocal_140, 2, false);
				set_blocking_of_non_temporary_events(iLocal_140, false);
				set_ped_keep_task(iLocal_140, true);
			}
			else if (!is_entity_playing_anim(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				set_ped_suffers_critical_hits(iLocal_140, 1);
				task_smart_flee_coord(iLocal_140, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 150f, -1, 0, 0);
				set_ped_keep_task(iLocal_140, true);
			}
		}
		func_241();
	}
	if (func_200(vLocal_52, -1, 0, 0, 0))
	{
		func_197(-1);
	}
	else
	{
		terminate_this_thread();
	}
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_196();
	iLocal_83 = false;
	while (true)
	{
		wait(false);
		if (!iLocal_105)
		{
			func_195(1);
			iLocal_105 = 1;
		}
		if (!func_194())
		{
			if (func_193())
			{
				func_241();
			}
		}
		_0x208784099002BC30("RE_SN", 0);
		func_192();
		func_191();
		func_189();
		if (!func_194())
		{
			if (is_world_point_within_brain_activation_range())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_175())
						{
							set_max_wanted_level(false);
							iLocal_48 = 1;
						}
						else if (func_163())
						{
							func_241();
						}
						break;
					
					case 1:
						func_162();
						set_vehicle_density_multiplier_this_frame(0.2f);
						if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_140))
						{
							if (!does_blip_exist(iLocal_123))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, false, true, 0))
								{
									if (does_blip_exist(iLocal_120))
									{
										remove_blip(&iLocal_120);
									}
									if (!does_blip_exist(iLocal_123))
									{
										flash_minimap_display();
										iLocal_123 = func_161(iLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_155) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_141)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_140, 40f, 40f, 20f, 0, 1, 0))
								{
									settimerb(false);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								set_wanted_level_multiplier(0f);
								set_vehicle_tyres_can_burst(iLocal_155, true);
								func_152(0);
							}
							else if (!iLocal_101)
							{
								if (func_151() == 2)
								{
									if ((vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_52) < 40f && ENTITY::DOES_ENTITY_EXIST(iLocal_155)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
									{
										if (func_150(&uLocal_176, sLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_101 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_149();
							func_142();
						}
						break;
				}
			}
			else
			{
				func_241();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_140, 150f, 150f, 50f, 0, 1, 0) || (is_vehicle_driveable(iLocal_155, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						_0xAF66DCEE6609B148();
						if (is_vehicle_driveable(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_142))
						{
							if (is_ped_in_vehicle(iLocal_142, iLocal_155, 0))
							{
								if (is_entity_attached(iLocal_140) && AI::GET_SCRIPT_TASK_STATUS(iLocal_142, 242628503) == 7)
								{
									task_look_at_entity(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									open_sequence_task(&iLocal_159);
									task_vehicle_drive_to_coord(false, iLocal_155, vLocal_62, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, -859.6284f, 382.7891f, 86.4466f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, -703.2946f, 287.229f, 82.6848f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, -496.6651f, 246.5268f, 82.0747f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, -166.6776f, 250.8786f, 92.4768f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, 74.5106f, 236.4861f, 108.1344f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, 278.7988f, 161.9029f, 103.446f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, 425.6758f, 108.9366f, 99.4329f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, 729.2792f, -19.616f, 81.9823f, 50f, 0, false, 786469, 7f, 15f);
									task_vehicle_drive_to_coord(false, iLocal_155, vLocal_59, 50f, 0, false, 786469, 7f, 15f);
									close_sequence_task(iLocal_159);
									task_perform_sequence(iLocal_142, iLocal_159);
									clear_sequence_task(&iLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_140();
							iLocal_50 = 1;
						}
						break;
					
					case 1:
						_0xAF66DCEE6609B148();
						func_139();
						func_117();
						func_116(iLocal_123, iLocal_141, 150f, 1061158912, 0);
						if (((((func_115() || func_114()) || func_112()) || func_111()) || func_110()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
						{
							clear_entity_last_damage_entity(iLocal_140);
							if (does_blip_exist(iLocal_123))
							{
								if (get_blip_colour(iLocal_123) != 1)
								{
									set_blip_as_friendly(iLocal_123, false);
									set_blip_colour(iLocal_123, 1);
								}
							}
							func_140();
							func_108(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (iLocal_366 || iLocal_81)
						{
							if (does_blip_exist(iLocal_123))
							{
								if (get_blip_colour(iLocal_123) != 1)
								{
									set_blip_as_friendly(iLocal_123, false);
									set_blip_colour(iLocal_123, 1);
								}
							}
						}
						else if (is_vehicle_driveable(iLocal_155, 0))
						{
							if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_155, 25f, 25f, 5f, 0, 1, 0) && get_entity_speed(iLocal_155) > 10f)
							{
								if (GAMEPLAY::GET_GAME_TIMER() > iLocal_109 + 5000)
								{
									iLocal_81 = 1;
								}
							}
							else
							{
								iLocal_109 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						break;
					
					case 2:
						_0xAF66DCEE6609B148();
						if (!iLocal_83)
						{
							iLocal_83 = true;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && ENTITY::DOES_ENTITY_EXIST(iLocal_140))
						{
							if (is_entity_attached_to_entity(iLocal_140, iLocal_155))
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
								{
									set_entity_invincible(iLocal_140, false);
									detach_entity(iLocal_140, 1, false);
								}
							}
						}
						if (iLocal_74)
						{
							if (iLocal_76)
							{
								func_107();
							}
							else
							{
								func_106();
							}
						}
						else
						{
							iLocal_77 = true;
						}
						func_149();
						func_103();
						if (iLocal_77)
						{
							if (iLocal_78)
							{
								func_103();
								iLocal_50 = 3;
								set_entity_invincible(iLocal_140, false);
							}
						}
						break;
					
					case 3:
						if (!does_blip_exist(iLocal_122))
						{
							iLocal_122 = func_161(iLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(get_players_last_vehicle()))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
									{
										iLocal_163 = get_players_last_vehicle();
										set_entity_as_mission_entity(iLocal_163, true, 1);
									}
								}
								if (func_102(1, 0, 1) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_140, 2.5f, 2.5f, 2.5f, 0, 1, 1))
								{
									clear_area_of_projectiles(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, false);
									func_101();
									func_93(1, 1, 1, 0);
									set_player_control(player_id(), false, 0);
									hide_hud_and_radar_this_frame();
									Local_392 = {-1.2232f, -4.3354f, 1.3385f};
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										stop_synchronized_entity_anim(iLocal_155, -8f, 1);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
										set_vehicle_doors_locked(iLocal_155, 1);
										Local_392.f_3 = {-22.8598f, 0f, get_entity_heading(iLocal_155) - 60f};
									}
									Local_392.f_6 = {-1.4334f, -4.6656f, 1.3733f};
									Local_392.f_9 = {-22.8598f, 0f, -106.3162f};
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_89(&Local_392, iLocal_155, 1);
									set_entity_coords(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, false, 0, 1);
									vLocal_110 = {0f, 0f, 0f};
									vLocal_113 = {0f, 0f, 0f};
									iLocal_108 = create_synchronized_scene(vLocal_110, vLocal_113, 2);
									if (is_entity_attached(iLocal_140))
									{
										detach_entity(iLocal_140, 1, false);
									}
									attach_synchronized_scene_to_entity(iLocal_108, iLocal_155, get_entity_bone_index_by_name(iLocal_155, sLocal_175));
									set_synchronized_scene_origin(iLocal_108, vLocal_110, vLocal_113, 2);
									task_look_at_entity(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									task_synchronized_scene(iLocal_140, iLocal_108, sLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1000f, 0);
									_0x394B9CD12435C981(iLocal_108, false);
									set_ped_keep_task(iLocal_140, true);
									iLocal_412 = create_camera(964613260, 1);
									play_synchronized_cam_anim(iLocal_412, iLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_386);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
									set_vehicle_door_open(iLocal_155, 2, 0, 0);
									set_vehicle_door_open(iLocal_155, 3, 0, 0);
									vLocal_110 = {ENTITY::GET_ENTITY_COORDS(iLocal_155, 0)};
									vLocal_113.z = get_entity_heading(iLocal_155);
									vVar0 = {get_offset_from_entity_in_world_coords(iLocal_155, 0f, -4.7f, 0f)};
									get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), 0);
									set_entity_heading(PLAYER::PLAYER_PED_ID(), get_entity_heading(iLocal_155));
									set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar0, 1, false, 0, 1);
									if (func_85(iLocal_163))
									{
										func_84();
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
									{
										if (ENTITY::IS_ENTITY_DEAD(iLocal_141, 0) && vdist(ENTITY::GET_ENTITY_COORDS(iLocal_141, 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 3f)
										{
											PED::DELETE_PED(&iLocal_141);
										}
										if (ENTITY::IS_ENTITY_DEAD(iLocal_143, 0) && vdist(ENTITY::GET_ENTITY_COORDS(iLocal_143, 0), ENTITY::GET_ENTITY_COORDS(iLocal_143, 0)) < 3f)
										{
											PED::DELETE_PED(&iLocal_143);
										}
									}
									hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
									render_script_cams(true, false, 3000, 1, 0, 0);
									set_model_as_no_longer_needed(iLocal_369);
									hide_hud_and_radar_this_frame();
									iLocal_385++;
								}
								break;
							
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
								{
									iLocal_385++;
								}
								break;
							
							case 2:
								if (func_151() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_151() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_83())
								{
									if (func_150(&uLocal_176, sLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 3:
								if (!func_83())
								{
									if (func_150(&uLocal_176, sLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 4:
								if (is_synchronized_scene_running(iLocal_108))
								{
									if (get_synchronized_scene_phase(iLocal_108) > 0.3746479f && !iLocal_116)
									{
										if (get_follow_ped_cam_view_mode() == 4)
										{
											_start_screen_effect("CamPushInNeutral", false, 0);
											play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
											iLocal_116 = 1;
										}
									}
									if (get_synchronized_scene_phase(iLocal_108) > 0.4f)
									{
										iLocal_385++;
									}
								}
								break;
							
							case 5:
								AI::CLEAR_PED_TASKS(iLocal_140);
								set_entity_invincible(iLocal_140, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, true);
								vLocal_171 = {get_anim_initial_offset_position(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2)};
								get_ground_z_for_3d_coord(vLocal_171, &(vLocal_171.f_2), 0);
								set_entity_coords(iLocal_140, vLocal_171, 1, false, 0, 1);
								vLocal_171 = {get_anim_initial_offset_rotation(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2)};
								set_entity_heading(iLocal_140, vLocal_171.z);
								if (is_synchronized_scene_running(iLocal_108))
								{
									set_synchronized_scene_phase(iLocal_108, 1f);
								}
								_0x2208438012482A1A(iLocal_140, 0, 0);
								hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
								if (is_vehicle_driveable(iLocal_155, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									if (is_entity_playing_anim(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										stop_entity_anim(iLocal_155, "IG_1_ALT1_EXIT_VAN", sLocal_386, -8f);
									}
								}
								render_script_cams(false, false, 3000, 1, 0, 0);
								if (does_cam_exist(iLocal_412))
								{
									destroy_cam(iLocal_412, 0);
								}
								set_gameplay_cam_relative_heading(0);
								set_player_control(player_id(), true, 0);
								func_93(0, 1, 1, 0);
								set_ped_can_ragdoll(iLocal_140, 1);
								func_81(vLocal_56);
								if (is_vehicle_driveable(iLocal_155, 0))
								{
									set_vehicle_doors_locked(iLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							hide_hud_and_radar_this_frame();
							if ((func_79(1000) || !is_synchronized_scene_running(iLocal_108)) || (is_synchronized_scene_running(iLocal_108) && get_synchronized_scene_phase(iLocal_108) > 0.4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!does_blip_exist(iLocal_122))
						{
							iLocal_122 = func_161(iLocal_140, 0, 0);
						}
						break;
					
					case 4:
						if (get_max_wanted_level() == 0)
						{
							set_max_wanted_level(5);
							set_wanted_level_multiplier(0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_142, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
							{
								set_ped_as_no_longer_needed(&iLocal_142);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_143, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_143))
							{
								set_ped_as_no_longer_needed(&iLocal_143);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_141, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_141))
							{
								set_ped_as_no_longer_needed(&iLocal_141);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_155, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
							{
								set_vehicle_as_no_longer_needed(&iLocal_155);
							}
						}
						func_61();
						if (does_blip_exist(iLocal_122))
						{
							if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_140, 10f, 10f, 10f, 0, 1, 0))
							{
								if (is_player_control_on(player_id()))
								{
									if (AI::GET_SCRIPT_TASK_STATUS(iLocal_140, 474215631) != 7)
									{
										AI::CLEAR_PED_TASKS(iLocal_140);
									}
									task_clear_look_at(iLocal_140);
									set_ped_as_group_member(iLocal_140, get_player_group(player_id()));
									set_ped_group_member_passenger_index(iLocal_140, false);
									remove_blip(&iLocal_122);
									if (does_blip_exist(iLocal_120))
									{
										remove_blip(&iLocal_120);
									}
									func_56();
									iLocal_120 = func_55(vLocal_56, 1);
								}
							}
						}
						else if (does_blip_exist(iLocal_120))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, Global_19, true, true, 0))
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_ped_in_any_vehicle(iLocal_140, 0))
								{
									if ((is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && is_vehicle_on_all_wheels(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0))) && is_entity_upright(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 90f))
									{
										iLocal_50 = 6;
										func_54();
										remove_blip(&iLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_54();
									remove_blip(&iLocal_120);
								}
							}
							else
							{
								if (!is_ped_group_member(iLocal_140, get_player_group(player_id())))
								{
									func_54();
									remove_blip(&iLocal_120);
									if (!does_blip_exist(iLocal_122))
									{
										iLocal_122 = func_52(iLocal_140, 0, 145);
									}
								}
								if (!iLocal_73 && !iLocal_75)
								{
									func_49();
									iLocal_69 = GAMEPLAY::GET_GAME_TIMER();
								}
								else if (!iLocal_75)
								{
									if (GAMEPLAY::GET_GAME_TIMER() - iLocal_69 > 5000)
									{
										iLocal_69 = GAMEPLAY::GET_GAME_TIMER() - 5000;
									}
									func_46();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_45(iLocal_144[iVar4]) || func_45(iLocal_147[iVar4])) || vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_56) < 400f) || vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_65) < 400f)
										{
											if (does_blip_exist(iLocal_120))
											{
												remove_blip(&iLocal_120);
											}
											func_54();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_43();
											iLocal_75 = 0;
											if (!PED::IS_PED_INJURED(iLocal_144[iVar4]))
											{
												set_ped_can_be_knocked_off_vehicle(iLocal_144[iVar4], 3);
											}
											if (!PED::IS_PED_INJURED(iLocal_147[iVar4]))
											{
												set_ped_can_be_knocked_off_vehicle(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_149();
						if (func_42())
						{
							PED::DELETE_PED(&iLocal_140);
							func_12();
						}
						break;
					
					case 5:
						if (get_max_wanted_level() != 0)
						{
							set_max_wanted_level(false);
							set_wanted_level_multiplier(0f);
						}
						func_149();
						func_11();
						func_46();
						if (!iLocal_367)
						{
							if (func_10())
							{
								if (func_150(&uLocal_176, sLocal_387, "RESNA_MOR", 4, func_191(), 0, 0))
								{
									iLocal_367 = 1;
									iLocal_119 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
							else
							{
								iLocal_367 = 1;
							}
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_119 > 2000 && !func_83())
						{
							if (!iLocal_99)
							{
								if (func_10() && func_9() < 30f)
								{
									if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_144[0]))
									{
										if (is_ped_in_any_vehicle(iLocal_140, 0))
										{
											task_drive_by(iLocal_140, iLocal_144[0], false, 0f, 0f, 0f, 50f, 90, 0, 1566631136);
										}
										iLocal_99 = 1;
									}
								}
							}
							else if (!iLocal_100)
							{
								if (is_ped_in_any_vehicle(iLocal_140, 0))
								{
									if (is_ped_doing_driveby(iLocal_140))
									{
										if (func_150(&uLocal_176, sLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							iVar6 = 0;
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar5]) && !PED::IS_PED_INJURED(iLocal_144[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar5], 0))
							{
								if (is_vehicle_driveable(iLocal_156[iVar5], 0) && is_ped_in_vehicle(iLocal_144[iVar5], iLocal_156[iVar5], 0))
								{
									if (does_blip_exist(uLocal_125[iVar5]))
									{
										remove_blip(&(uLocal_125[iVar5]));
									}
									iVar6 = 1;
								}
								if (!does_blip_exist(uLocal_125[iVar5]) && !is_ped_in_any_vehicle(iLocal_144[iVar5], 0))
								{
									uLocal_125[iVar5] = func_52(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (does_blip_exist(uLocal_125[iVar5]))
							{
								remove_blip(&(uLocal_125[iVar5]));
							}
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar5]) && !PED::IS_PED_INJURED(iLocal_147[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar5], 0))
							{
								if (is_vehicle_driveable(iLocal_156[iVar5], 0) && is_ped_in_vehicle(iLocal_147[iVar5], iLocal_156[iVar5], 0))
								{
									if (does_blip_exist(uLocal_128[iVar5]))
									{
										remove_blip(&(uLocal_128[iVar5]));
									}
									iVar6 = 1;
								}
								if (!does_blip_exist(uLocal_128[iVar5]) && !is_ped_in_any_vehicle(iLocal_147[iVar5], 0))
								{
									uLocal_128[iVar5] = func_52(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (does_blip_exist(uLocal_128[iVar5]))
							{
								remove_blip(&(uLocal_128[iVar5]));
							}
							func_6(iVar5, (iVar6 && is_vehicle_driveable(iLocal_156[iVar5], 0)));
							iVar5++;
						}
						if (func_5())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (is_vehicle_driveable(iLocal_156[iLocal_85], 0))
								{
									set_vehicle_as_no_longer_needed(&(iLocal_156[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_144[iLocal_85]))
								{
									set_ped_as_no_longer_needed(&(iLocal_144[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_147[iLocal_85]))
								{
									set_ped_as_no_longer_needed(&(iLocal_147[iLocal_85]));
								}
								if (does_blip_exist(uLocal_125[iLocal_85]))
								{
									remove_blip(&(uLocal_125[iLocal_85]));
								}
								if (does_blip_exist(uLocal_128[iLocal_85]))
								{
									remove_blip(&(uLocal_128[iLocal_85]));
								}
								if (does_blip_exist(uLocal_131[iLocal_85]))
								{
									remove_blip(&(uLocal_131[iLocal_85]));
								}
								set_model_as_no_longer_needed(iLocal_370);
								set_model_as_no_longer_needed(iLocal_371);
								set_model_as_no_longer_needed(iLocal_372);
								iLocal_85++;
							}
							func_56();
							iLocal_120 = func_55(vLocal_56, 1);
							func_4(-1);
							iLocal_75 = 1;
							AI::CLEAR_PED_TASKS(iLocal_140);
							if (!is_ped_group_member(iLocal_140, get_player_group(player_id())))
							{
								set_ped_as_group_member(iLocal_140, get_player_group(player_id()));
							}
							iLocal_50 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_12();
						}
						break;
				}
				if (does_blip_exist(iLocal_120))
				{
					_0x75A16C3DA34F1245(iLocal_120, iLocal_83);
				}
				if (does_blip_exist(iLocal_121))
				{
					_0x75A16C3DA34F1245(iLocal_121, iLocal_83);
				}
				if (does_blip_exist(iLocal_122))
				{
					_0x75A16C3DA34F1245(iLocal_122, iLocal_83);
				}
				if (does_blip_exist(iLocal_123))
				{
					_0x75A16C3DA34F1245(iLocal_123, iLocal_83);
				}
				if (does_blip_exist(iLocal_124))
				{
					_0x75A16C3DA34F1245(iLocal_124, iLocal_83);
				}
			}
			else
			{
				if (is_vehicle_driveable(iLocal_155, 0))
				{
					delete_vehicle(&iLocal_155);
				}
				func_241();
			}
		}
		else
		{
			func_1();
			func_241();
		}
	}
}

void func_1()
{
	func_140();
	wait(false);
}

bool func_2()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_93(1, 1, 0, 0);
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					while (!func_3(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						wait(false);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (is_ped_in_group(iLocal_140))
					{
						remove_ped_from_group(iLocal_140);
					}
				}
				func_43();
				set_player_control(player_id(), false, 1280);
				while (!func_150(&uLocal_176, sLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					wait(false);
				}
				if (!is_ped_in_any_vehicle(iLocal_140, 0))
				{
					task_turn_ped_to_face_entity(iLocal_140, PLAYER::PLAYER_PED_ID(), false);
				}
				task_look_at_entity(iLocal_140, PLAYER::PLAYER_PED_ID(), 30000, 2052, 2);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			
			case 1:
				if (!func_83())
				{
					open_sequence_task(&iVar0);
					if (is_ped_in_any_vehicle(iLocal_140, 0))
					{
						task_leave_any_vehicle(false, false, 0);
					}
					task_follow_nav_mesh_to_coord(false, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, 0, 1193033728);
					task_achieve_heading(false, 73.0132f, 0);
					task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
					close_sequence_task(iVar0);
					task_perform_sequence(iLocal_140, iVar0);
					clear_sequence_task(&iVar0);
					iLocal_437++;
					settimera(false);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (!is_ped_in_any_vehicle(iLocal_140, 0))
					{
						settimera(false);
						set_player_control(player_id(), true, 0);
						func_93(0, 1, 0, 0);
						iLocal_437++;
					}
				}
				break;
			
			case 3:
				if (timera() > 1000)
				{
					return true;
				}
				break;
			}
	}
	return false;
}

bool func_3(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

void func_4(int iParam0)
{
	iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

bool func_5()
{
	float fVar0;
	
	fVar0 = func_9();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (iParam1)
	{
		if (!does_blip_exist(uLocal_131[iParam0]))
		{
			uLocal_131[iParam0] = func_7(ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], 0), 0);
			set_blip_colour(uLocal_131[iParam0], 1);
			set_blip_priority(uLocal_131[iParam0], 9);
		}
		else
		{
			vVar0 = {get_blip_coords(uLocal_131[iParam0])};
			vVar3 = {ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], 0)};
			vVar0.x += vVar3.x - vVar0.x / 25f;
			vVar0.y += vVar3.y - vVar0.y / 25f;
			vVar0.z += vVar3.z - vVar0.z / 25f;
			set_blip_coords(uLocal_131[iParam0], vVar0);
		}
	}
	else if (does_blip_exist(uLocal_131[iParam0]))
	{
		remove_blip(&(uLocal_131[iParam0]));
	}
}

int func_7(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_8(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_8(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

auto func_9()
{
	int iVar0;
	Vector3 fVar1;
	
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]) && !PED::IS_PED_INJURED(iLocal_144[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0));
			}
			else if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0)) < fVar1)
			{
				fVar1 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar0]) && !PED::IS_PED_INJURED(iLocal_147[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0));
			}
			else if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0)) < fVar1)
			{
				fVar1 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0));
			}
		}
		iVar0++;
	}
	return fVar1;
}

bool func_10()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && is_ped_in_vehicle(iLocal_140, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			return true;
		}
		if ((!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_140, 0)) && !PED::IS_PED_RAGDOLL(iLocal_140))
		{
			if (vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_140, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 400f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_11()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {-20f, -20f, -20f};
	vVar3 = {20f, 20f, 20f};
	if (!iLocal_367)
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) + vVar0};
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) + vVar3};
		if (func_150(&uLocal_176, sLocal_387, "RESNA_MOR", 4, func_191(), 0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_147[0]))
			{
				task_look_at_entity(iLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			iLocal_367 = 1;
		}
	}
}

void func_12()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 317, true);
	}
	func_17(-1, 0);
	func_16();
	func_13();
	func_241();
}

void func_13()
{
	func_14();
}

bool func_14()
{
	if (func_15(0))
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

int func_15(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

bool func_16()
{
	return true;
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_28("RE_REWARD", 1, 0, 4000, 10000, func_31(), 0, 138, 0);
			func_27(51);
		}
		if (func_26(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_25(iParam0, iParam1) != 322)
		{
			func_19(func_25(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_18(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_18(7);
			}
			else
			{
				func_18(1);
			}
		}
	}
}

void func_18(int iParam0)
{
	Global_101140 = iParam0;
}

void func_19(int iParam0, auto uParam1, auto uParam2)
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
		func_23(891 + iParam0, 1, -1, 1);
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
		func_20();
	}
}

void func_20()
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
		func_22(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_21() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_14();
				}
			}
		}
	}
}

auto func_21()
{
	return Global_25120;
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_24();
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

auto func_24()
{
	return Global_1312747;
}

int func_25(int iParam0, int iParam1)
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

bool func_26(int iParam0)
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

void func_27(int iParam0)
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

void func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_29(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_29(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_30();
	}
}

void func_30()
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

int func_31()
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

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_33(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_34(Global_101154.f_1826.f_539.f_3549))
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
	return Global_35711 == iParam0;
}

int func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

auto func_40()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_41(cVar0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_42()
{
	if (Global_25355)
	{
		func_18(4);
		return true;
	}
	return false;
}

void func_43()
{
	Global_14578 = 0;
	func_44();
}

void func_44()
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

int func_45(int iParam0)
{
	int iVar0;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 10000f)
		{
			iVar0 = 1;
		}
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 2500f)
		{
			iVar0 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1))
		{
			iVar0 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_140) && is_ped_in_any_vehicle(iLocal_140, 0))
		{
			if (is_vehicle_driveable(get_vehicle_ped_is_in(iLocal_140, 0), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(get_vehicle_ped_is_in(iLocal_140, 0), iParam0, 1))
				{
					iVar0 = 1;
				}
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0) != get_vehicle_ped_is_in(iLocal_140, 0))
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), iParam0, 1))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 fVar8;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_415 = create_object(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(2f, 0f, 0f), 1, true, false);
			set_entity_collision(iLocal_415, false, 0);
			set_entity_visible(iLocal_415, false, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_415, true);
		}
	}
	draw_debug_text_2d("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((is_vehicle_driveable(iLocal_156[iVar1], 0) && !PED::IS_PED_INJURED(iLocal_144[iVar1])) && is_ped_sitting_in_vehicle(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				vVar2 = {ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar1], 0)};
				vVar5 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
				if (vdist2(vVar5, Local_416[0 /*7*/]) > 400f && vdist2(vVar5, Local_416[1 /*7*/]) > 400f)
				{
					if (vdist2(vVar5, Local_416[iVar1 /*7*/]) > 900f)
					{
						if (func_48(iLocal_156[iVar1], iVar0, iLocal_415, vVar5, get_entity_rotation(iVar0, 2)))
						{
							Local_416[iVar1 /*7*/] = {vVar5};
							Local_416[iVar1 /*7*/].f_3 = {get_entity_rotation(iVar0, 2)};
							Local_416[iVar1 /*7*/].f_6 = vmag(ENTITY::GET_ENTITY_VELOCITY(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_47(Local_416[iVar1 /*7*/]))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = GAMEPLAY::GET_GAME_TIMER();
					}
					else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_434[iVar1] > 1000 && GAMEPLAY::GET_GAME_TIMER() - iLocal_431[0] > 2000) && GAMEPLAY::GET_GAME_TIMER() - iLocal_431[1] > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_416[iVar1 /*7*/], 3f) && !CAM::IS_SPHERE_VISIBLE(vVar2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (is_vehicle_driveable(iLocal_156[iVar9], 0))
							{
								fVar8 = vdist(ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar9], 0), Local_416[iVar1 /*7*/]);
							}
							if ((((vdist2(vVar2, vVar5) > 625f && vdist2(vVar2, Local_416[iVar1 /*7*/]) < vdist2(vVar2, vVar5)) && vdist2(vVar5, Local_416[iVar1 /*7*/]) > 400f) && fVar8 > 5f) && func_48(iLocal_156[iVar1], iVar0, iLocal_415, Local_416[iVar1 /*7*/], Local_416[iVar1 /*7*/].f_3))
							{
								clear_area_of_peds(Local_416[iVar1 /*7*/], 3f, 0);
								clear_area_of_vehicles(Local_416[iVar1 /*7*/], 3f, 0, 0, 0, 0, false);
								set_entity_coords(iLocal_156[iVar1], Local_416[iVar1 /*7*/], 1, false, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_156[iVar1], Local_416[iVar1 /*7*/].f_3, 2, 1);
								set_vehicle_on_ground_properly(iLocal_156[iVar1]);
								set_vehicle_forward_speed(iLocal_156[iVar1], Local_416[iVar1 /*7*/].f_6 + 5f);
								task_vehicle_chase(iLocal_144[iVar1], PLAYER::PLAYER_PED_ID());
								set_vehicle_engine_on(iLocal_156[iVar1], true, 1, 0);
								iLocal_431[iVar1] = GAMEPLAY::GET_GAME_TIMER();
								iLocal_68 = GAMEPLAY::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > GAMEPLAY::GET_GAME_TIMER())
	{
		_0xAF66DCEE6609B148();
	}
}

bool func_47(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_48(int iParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	auto uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	Vector3 fVar22;
	float fVar23;
	Vector3 vVar24;
	int iVar27;
	auto uVar28;
	auto uVar31;
	auto uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam1), &vVar13, &uVar16);
		fVar19 = absf(vVar10.z - vVar7.z);
		fVar20 = absf(vVar10.x - vVar7.x);
		fVar21 = absf(vVar10.y - vVar7.y);
		if (fVar20 > fVar19)
		{
			fVar22 = fVar20 / 2f;
			fVar23 = fVar22 - absf(vVar7.z);
		}
		else
		{
			fVar22 = fVar21 / 2f;
			fVar23 = fVar22 - absf(vVar7.x);
		}
		vVar24.z += vVar13.z - vVar7.z;
		set_entity_coords(iParam2, vParam3, 1, false, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iParam2, vParam6, 2, 1);
		vVar1 = {get_offset_from_entity_in_world_coords(iParam2, Vector(fVar23 * 1.25f, fVar21 / 2f - fVar22 * 0.75f, 0f) + vVar24)};
		vVar4 = {get_offset_from_entity_in_world_coords(iParam2, Vector(fVar23 * 1.25f, -fVar21 / 2f + fVar22 * 0.75f, 0f) + vVar24)};
		iVar35 = _cast_3d_ray_point_to_point(vVar4, vVar1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (_get_raycast_result(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_49()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_56) < 1500f || vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_65) < 1500f)
			{
				if (func_50())
				{
					iLocal_73 = 1;
				}
			}
		}
	}
}

bool func_50()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	int iVar11;
	
	iVar0 = 524852;
	iVar1 = 6;
	if (is_vehicle_driveable(iLocal_156[0], 0) && is_vehicle_driveable(iLocal_156[1], 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_144[0]))
		{
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_144[0], -1273030092) == 1)
			{
				if (!is_driveby_task_underneath_driving_task(iLocal_144[0]))
				{
					task_drive_by(iLocal_144[0], PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_144[1]))
		{
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_144[1], -1273030092) == 1)
			{
				if (!is_driveby_task_underneath_driving_task(iLocal_144[1]))
				{
					task_drive_by(iLocal_144[1], PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_370);
		STREAMING::REQUEST_MODEL(iLocal_372);
		STREAMING::REQUEST_MODEL(iLocal_371);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_371))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar5 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
				if (_0xA4822F1CF23F4810(&vVar5, &vVar2, &vVar8, 0f, 180f, 30f, false, 1, 1))
				{
					if ((func_51(vVar2) && !CAM::IS_SPHERE_VISIBLE(vVar2, 5f)) && vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar2) > 100f)
					{
						iVar11 = false;
						while (iVar11 < 2)
						{
							clear_area(vVar2, 3f, 0, 0, 0, false);
							vVar2.x += to_float(iVar11);
							iLocal_156[iVar11] = create_vehicle(iLocal_370, vVar2, vVar8.z, 1, true);
							iLocal_144[iVar11] = PED::CREATE_PED_inside_vehicle(iLocal_156[iVar11], 22, iLocal_372, -1, 1, true);
							iLocal_147[iVar11] = PED::CREATE_PED_inside_vehicle(iLocal_156[iVar11], 22, iLocal_371, false, 1, true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_147[iVar11], iLocal_374);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[iVar11], iLocal_374);
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									task_vehicle_chase(iLocal_144[iVar11], PLAYER::PLAYER_PED_ID());
								}
							}
							else
							{
								task_vehicle_mission_ped_target(iLocal_144[iVar11], iLocal_156[iVar11], PLAYER::PLAYER_PED_ID(), iVar1, 50f, iVar0, 5f, 10f, 1);
							}
							set_ped_suffers_critical_hits(iLocal_144[iVar11], 0);
							set_ped_suffers_critical_hits(iLocal_147[iVar11], 0);
							set_ped_keep_task(iLocal_144[iVar11], true);
							give_weapon_to_ped(iLocal_144[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							set_vehicle_forward_speed(iLocal_156[iVar11], get_entity_speed(PLAYER::PLAYER_PED_ID()) + 5f);
							iVar1 = 11;
							give_weapon_to_ped(iLocal_147[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							task_drive_by(iLocal_147[iVar11], PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 70, 0, -753768974);
							set_ped_keep_task(iLocal_147[iVar11], true);
							set_ped_can_be_knocked_off_vehicle(iLocal_144[iVar11], 1);
							set_ped_can_be_knocked_off_vehicle(iLocal_147[iVar11], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_144[iVar11], 42, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar11], 42, true);
							set_ped_accuracy(iLocal_144[iVar11], 15);
							set_ped_accuracy(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_101();
					}
				}
			}
		}
	}
	return false;
}

bool func_51(Vector3 vParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	vVar3 = {get_entity_forward_vector(PLAYER::PLAYER_PED_ID())};
	if (absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) >= 90f)
	{
		return true;
	}
	return false;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_53(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_8(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_8(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_8(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_54()
{
	if (does_blip_exist(iLocal_139))
	{
		remove_blip(&iLocal_139);
	}
}

int func_55(Vector3 vParam0, int iParam1)
{
	return func_7(vParam0, iParam3);
}

void func_56()
{
	if (func_151() == 2)
	{
		if (!does_blip_exist(iLocal_139))
		{
			func_59();
			iLocal_139 = func_55(vLocal_65, 0);
			set_blip_sprite(iLocal_139, 269);
			func_57();
		}
	}
}

void func_57()
{
	if (!func_58())
	{
		if (func_151() == 2)
		{
			Global_25354 = 1;
		}
	}
}

bool func_58()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_59()
{
	if (func_151() == 2)
	{
		if (!Global_25356)
		{
			func_60("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

void func_60(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_61()
{
	struct<6> Var0;
	char* sVar6;
	int iVar7;
	
	if (!iLocal_87[0])
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 400f)
		{
			if (is_ped_jacking(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 400f && GAMEPLAY::GET_GAME_TIMER() - iLocal_104 > 30000)
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_140, 0))
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!func_78(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_10())
		{
			iLocal_104 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_10())
		{
			if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 1f)
			{
				fLocal_102 += get_frame_time();
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 -= get_frame_time() * 10f;
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_140, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))
			{
				fLocal_103 += get_frame_time();
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 -= get_frame_time() * 10f;
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_83())
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (func_10())
						{
							if (func_150(&uLocal_176, sLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 2:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 3:
						if (func_10())
						{
							if (func_76())
							{
								if (func_150(&uLocal_176, sLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_150(&uLocal_176, sLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 4:
						if (!func_83())
						{
							func_4(1);
						}
						break;
				}
				break;
			
			case 1:
				if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_10())
							{
								if (func_150(&uLocal_176, sLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_83())
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_151() == 2)
							{
								if (func_64("RESNA_B1T", func_10()))
								{
									iLocal_388++;
								}
							}
							else if (func_10())
							{
								if (func_77("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_64("RESNA_B2", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (func_10())
							{
								if (func_77("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 5:
							if (!func_83())
							{
								func_4(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_10())
							{
								if (func_77("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (func_64("RESNA_B4", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_10())
							{
								if (func_77("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_64("RESNA_B5b", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_10())
							{
								if (func_150(&uLocal_176, sLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_83())
							{
								if (func_10())
								{
									if (func_77("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						
						case 2:
							if (func_64("RESNA_B5b", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_64("RESNA_B6", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_10())
							{
								if (func_77("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 2:
							if (func_64("RESNA_RUNOUT", func_10()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!is_ped_running_mobile_phone_task(iLocal_140))
					{
						task_use_mobile_phone(iLocal_140, 1, 1);
					}
				}
				else if (is_ped_running_mobile_phone_task(iLocal_140))
				{
					task_use_mobile_phone(iLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 10000)
						{
							if (func_10())
							{
								if (func_150(&uLocal_176, sLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									set_ped_can_play_gesture_anims(iLocal_140, 0);
									set_ped_can_play_ambient_anims(iLocal_140, 0);
									set_ped_can_play_viseme_anims(iLocal_140, 0, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = {func_63()};
						if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					
					case 2:
						if (!func_83())
						{
							iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_388++;
						}
						break;
					
					case 3:
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 2000)
						{
							if (func_10() && !_0xA3F3564A5B3646C0(iLocal_140))
							{
								if (func_77("RESNA_CELLR", 0))
								{
									set_ped_can_play_gesture_anims(iLocal_140, 1);
									set_ped_can_play_ambient_anims(iLocal_140, 1);
									set_ped_can_play_viseme_anims(iLocal_140, 1, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_10())
						{
							if (func_150(&uLocal_176, sLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_150(&uLocal_176, sLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 2:
						if (func_10())
						{
							if (func_150(&uLocal_176, sLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 3:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_10())
						{
							if (func_150(&uLocal_176, sLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 5:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 6:
						if (func_10())
						{
							if (func_150(&uLocal_176, sLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 7:
						if (!func_83())
						{
							iLocal_388++;
						}
						break;
					
					case 8:
						if (func_10())
						{
							if (func_151() == 2)
							{
								if (!func_83())
								{
									if (func_77("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_151() == 0)
							{
								if (func_64("RESNA_B3DM", func_10()))
								{
									iLocal_388++;
								}
							}
							else if (func_64("RESNA_B3DF", func_10()))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 9:
						if (!func_83())
						{
							func_4(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_151() == 2 && GAMEPLAY::GET_GAME_TIMER() - iLocal_389 > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_81(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_64("RESNA_TREV", func_10()))
							{
								iLocal_388++;
								iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (func_81(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (func_64("RESNA_CULT", func_10()))
							{
								iLocal_388++;
								iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							}
							break;
						
						case 4:
							if (func_81(vLocal_56) && vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						
						case 5:
							if (func_64("RESNA_NEAR", func_10()))
							{
								iLocal_388++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_83())
	{
		if (iLocal_376 && !iLocal_377)
		{
			Local_378 = {func_62()};
			func_43();
			iLocal_377 = 1;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_150(&uLocal_176, sLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_150(&uLocal_176, sLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 3f)
			{
				if (func_150(&uLocal_176, sLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_140, 0)) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar7 = ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0));
				if ((is_this_model_a_bike(iVar7) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar7)) || is_this_model_a_quadbike(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_150(&uLocal_176, sLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_62()
{
	char[24] cVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (does_text_label_exist(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return cVar0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

struct<6> func_63()
{
	char[24] cVar0;
	int iVar6;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

bool func_64(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		if (!iLocal_376)
		{
			if (func_150(&uLocal_176, sLocal_387, sParam0, 8, 0, 0, 0))
			{
				iLocal_376 = 1;
				iLocal_377 = 0;
			}
		}
		else if (iLocal_377)
		{
			if (func_65(&uLocal_176, sLocal_387, sParam0, &Local_378, 8, 0, 0))
			{
				iLocal_377 = 0;
			}
		}
		if ((iLocal_376 && !iLocal_377) && iParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_83())
				{
					iLocal_384 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_384 > 500)
			{
				iLocal_384 = -1;
				iLocal_376 = 0;
				iLocal_377 = 0;
				return true;
			}
		}
	}
	else if (iLocal_376 && !iLocal_377)
	{
		Local_378 = {func_62()};
		func_43();
		iLocal_377 = 1;
	}
	return false;
}

int func_65(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_66(sParam2, iParam4, 0);
}

bool func_66(char* sParam0, int iParam1, int iParam2)
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
					func_74();
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
		if (func_73(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_72();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_67();
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
		func_74();
	}
	return false;
}

void func_67()
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

void func_68()
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

bool func_69()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_70()
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

void func_71()
{
	if (func_33(14))
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
		Global_14413 = func_151();
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

void func_72()
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

int func_73(int iParam0, int iParam1)
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

void func_74()
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

void func_75(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_76()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_77(char* sParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_151() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_151() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (!is_string_null_or_empty(sParam1))
	{
		StringConCat(&Var0, sParam1, 24);
	}
	if (func_150(&uLocal_176, sLocal_387, &Var0, 8, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (is_vehicle_seat_free(iParam0, -1))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, false))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, true))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, 2))
		{
			return true;
		}
	}
	return false;
}

bool func_79(int iParam0)
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
			if (func_80())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_80()
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

bool func_81(Vector3 vParam0)
{
	if (func_151() == 2)
	{
		if (func_82() && !Global_25357)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0);
			}
			if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0) > fLocal_47 + 200f || INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(get_player_ped(get_player_index()), 0), 1) < 400f)
			{
				Global_25357 = 1;
				return true;
			}
		}
	}
	return false;
}

auto func_82()
{
	return Global_25354;
}

bool func_83()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_84()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	auto uVar7;
	
	vVar0 = {get_offset_from_entity_in_world_coords(iLocal_155, 0f, -6f, 0f)};
	if (is_vehicle_driveable(get_players_last_vehicle(), 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), vVar0, 5f, 5f, 5f, false, true, 0))
		{
			get_nth_closest_vehicle_node_with_heading(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iLocal_3, &vVar3, &fVar6, &uVar7, 1, 3f, 0f);
			set_entity_heading(get_players_last_vehicle(), fVar6);
			set_entity_coords(get_players_last_vehicle(), vVar3, 1, false, 0, 1);
		}
	}
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	Vector3[] vVar11 = new Vector3[4];
	Vector3[] vVar24 = new Vector3[4];
	Vector3[] vVar37 = new Vector3[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		iVar1 = iParam0;
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar1), &vVar2, &vVar5);
		vVar8 = {vVar5 - vVar2};
		vVar11[0 /*3*/] = {get_offset_from_entity_in_world_coords(iVar1, -vVar8.x / 2f, vVar8.y / 2f, 0f)};
		vVar11[1 /*3*/] = {get_offset_from_entity_in_world_coords(iVar1, vVar8.x / 2f, vVar8.y / 2f, 0f)};
		vVar11[2 /*3*/] = {get_offset_from_entity_in_world_coords(iVar1, vVar8.x / 2f, -vVar8.y / 2f, 0f)};
		vVar11[3 /*3*/] = {get_offset_from_entity_in_world_coords(iVar1, -vVar8.x / 2f, -vVar8.y / 2f, 0f)};
		vVar24[0 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_155, -1f, -2.5f, 0f)};
		vVar24[1 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_155, 1f, -2.5f, 0f)};
		vVar24[2 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_155, 0.75f, -5f, 0f)};
		vVar24[3 /*3*/] = {get_offset_from_entity_in_world_coords(iLocal_155, -0.75f, -5f, 0f)};
		iVar50 = 0;
		while (iVar50 < vVar24.x)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == vVar24.x)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < vVar11.x)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == vVar11.x)
				{
					iVar53 = 0;
				}
				if (func_86(vVar24[iVar50 /*3*/], vVar24[iVar52 /*3*/], vVar11[iVar51 /*3*/], vVar11[iVar53 /*3*/], &(vVar37[iVar50 /*3*/])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

bool func_86(Vector3 vParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, struct<2> Param5, auto uParam6, auto uParam7)
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
	if (((fVar11 < func_88(fVar0, fVar1) || fVar11 > func_87(fVar0, fVar1)) || fVar11 < func_88(fVar2, fVar3)) || fVar11 > func_87(fVar2, fVar3))
	{
		return false;
	}
	if (((fVar12 < func_88(fVar4, fVar5) || fVar12 > func_87(fVar4, fVar5)) || fVar12 < func_88(fVar6, fVar7)) || fVar12 > func_87(fVar6, fVar7))
	{
		return false;
	}
	*uParam12 = fVar11;
	*uParam12.f_1 = fVar12;
	*uParam12.f_2 = vParam0.z;
	return true;
}

float func_87(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_88(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_89(auto uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (does_cam_exist(*uParam0.f_14))
	{
		destroy_cam(*uParam0.f_14, 0);
	}
	if (does_cam_exist(*uParam0.f_15))
	{
		destroy_cam(*uParam0.f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam0.f_14 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		set_cam_coord(*uParam0.f_14, get_offset_from_entity_in_world_coords(iParam1, *uParam0));
		if (*uParam0.f_18 == 1)
		{
			attach_cam_to_entity(*uParam0.f_14, iParam1, *uParam0, 1);
		}
		if (iParam2)
		{
			set_cam_rot(*uParam0.f_14, *uParam0.f_3, 2);
		}
		else
		{
			vVar0 = {func_92(get_offset_from_entity_in_world_coords(iParam1, *uParam0.f_3), get_offset_from_entity_in_world_coords(iParam1, *uParam0))};
			vVar3 = {func_90(vVar0)};
			set_cam_rot(*uParam0.f_14, vVar3, 2);
		}
		set_cam_fov(*uParam0.f_14, *uParam0.f_12);
		set_cam_active(*uParam0.f_14, true);
	}
}

Vector3 func_90(Vector3 vParam0)
{
	Vector3 vVar0;
	
	vParam0.z = func_91(vParam0.z);
	vVar0.z = atan2(-vParam0.x, vParam0.y);
	vVar0.x = asin(vParam0.z);
	vVar0.y = 0f;
	return vVar0;
}

float func_91(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_92(Vector3 vParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {vParam0 - vParam3};
	fVar6 = sqrt(vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z);
	vVar3.x = vVar0.x / fVar6;
	vVar3.y = vVar0.y / fVar6;
	vVar3.z = vVar0.z / fVar6;
	return vVar3;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_100(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_69())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_100(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(player_id())) && !func_95(player_id(), 0)) && !func_94())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_94()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, int iParam1)
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

bool func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return true;
	}
	if (func_98())
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

int func_98()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_99(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_100(int iParam0)
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

void func_101()
{
	Global_14578 = 0;
	func_74();
}

bool func_102(int iParam0, int iParam1, int iParam2)
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

void func_103()
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		if (does_blip_exist(iLocal_121))
		{
			remove_blip(&iLocal_121);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		if (does_blip_exist(iLocal_123))
		{
			remove_blip(&iLocal_123);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		if (does_blip_exist(iLocal_124))
		{
			remove_blip(&iLocal_124);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_86 + 8000)
		{
			func_104(iLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	if (iVar0 == 3)
	{
		iLocal_78 = true;
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

void func_106()
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[4];
	
	vVar1[0 /*3*/] = {986.8661f, -113.7463f, 72.9153f};
	vVar1[1 /*3*/] = {964.0147f, -144.0337f, 73.4875f};
	vVar1[2 /*3*/] = {954.2817f, -137.429f, 73.4781f};
	vVar1[3 /*3*/] = {976.5977f, -149.0529f, 73.2404f};
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_59, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_150[iVar0] = PED::CREATE_PED(22, iLocal_371, vVar1[iVar0 /*3*/], 0, 1, true);
			give_weapon_to_ped(iLocal_150[iVar0], joaat("weapon_sawnoffshotgun"), 999999, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_150[iVar0], iLocal_374);
			task_combat_ped(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_150[iVar0], 42, true);
			uLocal_134[iVar0] = func_161(iLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_76 = 1;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			if (does_blip_exist(uLocal_134[iVar0]))
			{
				remove_blip(&(uLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		iLocal_77 = true;
	}
}

void func_108(auto uParam0, int iParam1, int iParam2)
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
		if (func_109(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_109(sVar0))
		{
			clear_help(1);
		}
	}
}

int func_109(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_110()
{
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		return true;
	}
	else if (is_ped_on_foot(iLocal_142))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		return true;
	}
	return false;
}

bool func_111()
{
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_155, vLocal_59, 10f, 10f, 10f, false, true, 0))
		{
			iLocal_74 = true;
			return true;
		}
	}
	return false;
}

bool func_112()
{
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		if (iLocal_84 > 0)
		{
			func_113();
		}
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_155, 20f, 20f, 10f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = GAMEPLAY::GET_GAME_TIMER();
				}
				iLocal_84++;
				clear_entity_last_damage_entity(iLocal_155);
				if (timera() > 10000)
				{
					if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 100) > 49)
					{
						func_150(&uLocal_176, sLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_142))
					{
						func_150(&uLocal_176, sLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					settimera(false);
				}
			}
			if (iLocal_84 > 30)
			{
				return true;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (is_vehicle_stuck_on_roof(iLocal_155))
		{
			return true;
		}
	}
	return false;
}

void func_113()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (is_ped_in_any_vehicle(iLocal_142, 0))
		{
			if (!is_driveby_task_underneath_driving_task(iLocal_142))
			{
				if (!has_ped_got_weapon(iLocal_142, joaat("weapon_microsmg"), 0) || (has_ped_got_weapon(iLocal_142, joaat("weapon_microsmg"), 0) && get_ped_ammo_by_type(iLocal_142, -1878508229) == 0))
				{
					give_weapon_to_ped(iLocal_142, joaat("weapon_microsmg"), 68, true, true);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_microsmg"), true);
				}
				task_drive_by(iLocal_142, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
			}
		}
	}
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_438 > 250)
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			if ((is_ped_in_any_vehicle(iLocal_141, 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 0)
			{
				AI::CLEAR_PED_TASKS(iLocal_141);
				give_weapon_to_ped(iLocal_141, joaat("weapon_microsmg"), 68, true, true);
				task_drive_by(iLocal_141, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if ((is_ped_in_any_vehicle(iLocal_143, 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 0)
		{
			AI::CLEAR_PED_TASKS(iLocal_143);
			give_weapon_to_ped(iLocal_143, joaat("weapon_pistol"), 68, true, true);
			task_drive_by(iLocal_143, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			set_ped_keep_task(iLocal_143, true);
		}
	}
	if (!iLocal_366)
	{
		iLocal_366 = 1;
	}
}

bool func_114()
{
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		if (get_vehicle_engine_health(iLocal_155) < 700f || get_vehicle_petrol_tank_health(iLocal_155) < 700f)
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_115()
{
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		if (((is_vehicle_tyre_burst(iLocal_155, false, 0) || is_vehicle_tyre_burst(iLocal_155, true, 0)) || is_vehicle_tyre_burst(iLocal_155, 4, 0)) || is_vehicle_tyre_burst(iLocal_155, 5, 0))
		{
			return true;
		}
	}
	return false;
}

void func_116(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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
					fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
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
					fVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
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

void func_117()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_vehicle_driveable(iLocal_155, 0))
		{
			func_118(&uLocal_341, iLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_108(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_108(&uLocal_341, 0, 0);
	}
}

void func_118(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_119(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_119(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	*uParam0.f_6 = 0;
	func_120(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, uParam5, iParam6);
}

void func_120(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
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
	if (func_109(iVar0))
	{
		func_138();
	}
	if (func_137(iParam1) && is_entity_visible(iParam1))
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
			if (func_132(uParam0, iParam7, iParam9, 0))
			{
				func_128(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_124(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_109(iVar0))
							{
								func_60(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_123(1);
								}
							}
						}
					}
				}
			}
			else if (func_124(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_109(iVar0))
						{
							func_60(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_123(1);
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
				if (func_109(sParam5))
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
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_108(uParam0, iVar0, 1);
				}
			}
			if (!func_132(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_122(uParam0))
				{
					func_121(uParam0);
				}
			}
		}
	}
	else
	{
		func_108(uParam0, iVar0, 0);
	}
}

void func_121(auto uParam0)
{
	if (func_137(PLAYER::PLAYER_PED_ID()))
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

bool func_122(auto uParam0)
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

int func_123(int iParam0)
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

bool func_124(char* sParam0)
{
	if (!func_125(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_109(sParam0)) || func_109("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_123(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_123(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_123(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_125(int iParam0, int iParam1, int iParam2)
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
	if (func_127(0))
	{
		return false;
	}
	if (func_126())
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

int func_126()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_127(int iParam0)
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

void func_128(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_108(uParam0, 0, 0);
	}
	if (func_131(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_129())
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

int func_129()
{
	return func_130(player_id());
}

bool func_130(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_131(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_132(auto uParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_136(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_135(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_135(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_136(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_122(uParam0))
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
						if (!func_136(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_135(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_135(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_136(iParam1, iParam2, iParam3))
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
					if (!func_136(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_135(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_135(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_136(iParam1, iParam2, iParam3))
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
						if (func_134(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_133(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_133(iParam1, iParam2, iParam3))
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
					else if (func_134(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_122(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_125(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_138();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_133(int iParam0, int iParam1, int iParam2)
{
	if (!func_125(iParam0, iParam1, iParam2))
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

bool func_134(int iParam0, int iParam1, int iParam2)
{
	if (!func_125(iParam0, iParam1, iParam2))
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

bool func_135(int iParam0, int iParam1, int iParam2)
{
	if (!func_125(iParam0, iParam1, iParam2))
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

bool func_136(int iParam0, int iParam1, int iParam2)
{
	if (!func_125(iParam0, iParam1, iParam2))
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

bool func_137(int iParam0)
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

void func_138()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

void func_139()
{
	if (!PED::IS_PED_INJURED(iLocal_143) && is_vehicle_driveable(iLocal_155, 0))
	{
		if (!is_ped_in_vehicle(iLocal_143, iLocal_155, 0))
		{
			if (!is_entity_playing_anim(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				set_ped_into_vehicle(iLocal_143, iLocal_155, true);
			}
		}
	}
}

void func_140()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		task_combat_ped(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 16);
		set_ped_keep_task(iLocal_142, true);
		func_150(&uLocal_176, sLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		give_weapon_to_ped(iLocal_141, joaat("weapon_smg"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_141, joaat("weapon_smg"), true);
		set_ped_can_be_targetted(iLocal_141, true);
		task_combat_ped(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 16);
		set_ped_keep_task(iLocal_141, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		give_weapon_to_ped(iLocal_143, joaat("weapon_pistol"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("weapon_pistol"), true);
		task_combat_ped(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 16);
		set_ped_keep_task(iLocal_143, true);
	}
	func_141();
	clear_sequence_task(&iLocal_159);
	iLocal_50 = 2;
}

void func_141()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (!does_blip_exist(iLocal_123))
		{
			iLocal_123 = func_161(iLocal_142, 1, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		if (is_entity_at_entity(iLocal_141, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!does_blip_exist(iLocal_121))
			{
				iLocal_121 = func_161(iLocal_141, 1, 0);
			}
		}
		else
		{
			set_ped_as_no_longer_needed(&iLocal_141);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if (is_entity_at_entity(iLocal_143, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!does_blip_exist(iLocal_124))
			{
				iLocal_124 = func_161(iLocal_143, 1, 0);
			}
		}
		else
		{
			set_ped_as_no_longer_needed(&iLocal_143);
		}
	}
}

void func_142()
{
	int iVar0;
	
	iVar0 = false;
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
		{
			iVar0 = true;
		}
	}
	else
	{
		iVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		iVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		iVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_142, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		iVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_140))
	{
		iVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = true;
	}
	if (iVar0)
	{
		func_148();
		if (iLocal_365)
		{
			if (is_synchronized_scene_running(iLocal_107))
			{
				if (get_synchronized_scene_phase(iLocal_107) > 0.735f)
				{
					func_147();
				}
				else if (get_synchronized_scene_phase(iLocal_107) > 0.4f)
				{
					func_146();
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_140))
			{
				task_cower(iLocal_140, -1);
			}
			if (iLocal_82)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
			}
			remove_blip(&iLocal_120);
			if (!does_blip_exist(iLocal_123))
			{
				iLocal_123 = func_161(iLocal_142, 1, 0);
			}
			set_wanted_level_multiplier(0.3f);
			if (!func_194())
			{
				func_152(1);
			}
			func_144();
			func_140();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_142))
			{
				if (is_vehicle_driveable(iLocal_155, 0))
				{
					task_vehicle_mission_ped_target(iLocal_142, iLocal_155, PLAYER::PLAYER_PED_ID(), 8, 40f, 786469, -1f, -1f, 1);
				}
				else
				{
					AI::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					set_ped_keep_task(iLocal_142, true);
				}
			}
			func_143();
		}
	}
}

void func_143()
{
	if (is_synchronized_scene_running(iLocal_106))
	{
		detach_synchronized_scene(iLocal_106);
	}
	if (is_synchronized_scene_running(iLocal_107))
	{
		detach_synchronized_scene(iLocal_107);
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		set_ped_suffers_critical_hits(iLocal_140, 1);
		if (!is_entity_playing_anim(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			AI::TASK_SMART_FLEE_PED(iLocal_140, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			set_ped_keep_task(iLocal_140, true);
		}
	}
	func_140();
	func_241();
}

void func_144()
{
	Global_14578 = 0;
	func_145();
}

void func_145()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_146()
{
	if (is_vehicle_driveable(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140))
	{
		attach_entity_to_entity(iLocal_140, iLocal_155, get_entity_bone_index_by_name(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		set_entity_coords(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, false, 0, 1);
		AI::CLEAR_PED_TASKS_immediately(iLocal_140);
		AI::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		set_ped_keep_task(iLocal_140, true);
		if (!does_blip_exist(iLocal_123))
		{
			iLocal_123 = func_161(iLocal_142, 1, 0);
		}
		if (is_vehicle_driveable(iLocal_155, 0))
		{
			set_vehicle_doors_shut(iLocal_155, 1);
		}
		iLocal_365 = 0;
	}
}

void func_147()
{
	if (((is_vehicle_driveable(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
	{
		set_ped_into_vehicle(iLocal_143, iLocal_155, 2);
		set_ped_into_vehicle(iLocal_141, iLocal_155, true);
		attach_entity_to_entity(iLocal_140, iLocal_155, get_entity_bone_index_by_name(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		set_entity_coords(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, false, 0, 1);
		AI::CLEAR_PED_TASKS_immediately(iLocal_140);
		AI::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		set_ped_keep_task(iLocal_140, true);
		if (!does_blip_exist(iLocal_123))
		{
			iLocal_123 = func_161(iLocal_142, 1, 0);
		}
		if (is_vehicle_driveable(iLocal_155, 0))
		{
			set_vehicle_doors_shut(iLocal_155, 0);
		}
		_0xAF66DCEE6609B148();
		iLocal_365 = 0;
	}
}

void func_148()
{
	if (is_synchronized_scene_running(iLocal_118))
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			AI::CLEAR_PED_TASKS(iLocal_141);
		}
		if (!PED::IS_PED_INJURED(iLocal_143))
		{
			AI::CLEAR_PED_TASKS(iLocal_143);
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			AI::CLEAR_PED_TASKS(iLocal_140);
		}
		stop_synchronized_entity_anim(iLocal_155, -4f, 1);
	}
}

void func_149()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1) || is_entity_on_fire(iLocal_140))
		{
			if (is_synchronized_scene_running(iLocal_118))
			{
				func_148();
			}
			func_143();
		}
	}
}

int func_150(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

auto func_151()
{
	func_32();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_152(int iParam0)
{
	if (func_155())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_26(Global_101143))
		{
			func_153(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_26(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_154(iParam0), -1);
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
					func_60(func_154(iParam0), -1);
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
					func_60(func_154(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_154(int iParam0)
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

bool func_155()
{
	switch (func_156(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_156(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_160(0))
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
		if (!func_158(iParam2))
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
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(auto uParam0, int iParam1)
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

int func_158(int iParam0)
{
	return func_159(iParam0, Global_35711);
}

bool func_159(int iParam0, int iParam1)
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

bool func_160(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_158(iParam0))
	{
		return false;
	}
	return true;
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_52(iParam0, iParam1, 145);
}

void func_162()
{
	if (iLocal_361)
	{
	}
	else
	{
		iLocal_361 = 1;
	}
}

bool func_163()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
		{
			return false;
		}
	}
	if (func_170())
	{
		return true;
	}
	if (func_164(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_164(float fParam0, int iParam1)
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
		if (func_34(func_151()))
		{
			iVar36 = func_31();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_165(iVar32, &Var0);
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

void func_165(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_166(uParam1, "Abigail1", func_168(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 1:
			func_166(uParam1, "Abigail2", func_168(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 2:
			func_166(uParam1, "Barry1", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 3:
			func_166(uParam1, "Barry2", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 4:
			func_166(uParam1, "Barry3", func_168(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 5:
			func_166(uParam1, "Barry3A", func_168(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 6:
			func_166(uParam1, "Barry3C", func_168(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 7:
			func_166(uParam1, "Barry4", func_168(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_167(iParam0), 0, 0);
			break;
		
		case 8:
			func_166(uParam1, "Dreyfuss1", func_168(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 9:
			func_166(uParam1, "Epsilon1", func_168(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 10:
			func_166(uParam1, "Epsilon2", func_168(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 11:
			func_166(uParam1, "Epsilon3", func_168(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 12:
			func_166(uParam1, "Epsilon4", func_168(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 13:
			func_166(uParam1, "Epsilon5", func_168(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 14:
			func_166(uParam1, "Epsilon6", func_168(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 15:
			func_166(uParam1, "Epsilon7", func_168(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 16:
			func_166(uParam1, "Epsilon8", func_168(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 17:
			func_166(uParam1, "Extreme1", func_168(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 18:
			func_166(uParam1, "Extreme2", func_168(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 19:
			func_166(uParam1, "Extreme3", func_168(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 20:
			func_166(uParam1, "Extreme4", func_168(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 21:
			func_166(uParam1, "Fanatic1", func_168(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 22:
			func_166(uParam1, "Fanatic2", func_168(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 23:
			func_166(uParam1, "Fanatic3", func_168(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_167(iParam0), 0, 1);
			break;
		
		case 24:
			func_166(uParam1, "Hao1", func_168(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_167(iParam0), 0, 1);
			break;
		
		case 25:
			func_166(uParam1, "Hunting1", func_168(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 26:
			func_166(uParam1, "Hunting2", func_168(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 27:
			func_166(uParam1, "Josh1", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 28:
			func_166(uParam1, "Josh2", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 29:
			func_166(uParam1, "Josh3", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 30:
			func_166(uParam1, "Josh4", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 31:
			func_166(uParam1, "Maude1", func_168(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 32:
			func_166(uParam1, "Minute1", func_168(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 33:
			func_166(uParam1, "Minute2", func_168(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 34:
			func_166(uParam1, "Minute3", func_168(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 35:
			func_166(uParam1, "MrsPhilips1", func_168(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 36:
			func_166(uParam1, "MrsPhilips2", func_168(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 37:
			func_166(uParam1, "Nigel1", func_168(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 38:
			func_166(uParam1, "Nigel1A", func_168(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 39:
			func_166(uParam1, "Nigel1B", func_168(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 40:
			func_166(uParam1, "Nigel1C", func_168(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 41:
			func_166(uParam1, "Nigel1D", func_168(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 42:
			func_166(uParam1, "Nigel2", func_168(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 43:
			func_166(uParam1, "Nigel3", func_168(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 44:
			func_166(uParam1, "Omega1", func_168(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 45:
			func_166(uParam1, "Omega2", func_168(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 46:
			func_166(uParam1, "Paparazzo1", func_168(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 47:
			func_166(uParam1, "Paparazzo2", func_168(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 48:
			func_166(uParam1, "Paparazzo3", func_168(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 49:
			func_166(uParam1, "Paparazzo3A", func_168(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 50:
			func_166(uParam1, "Paparazzo3B", func_168(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 51:
			func_166(uParam1, "Paparazzo4", func_168(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 52:
			func_166(uParam1, "Rampage1", func_168(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 54:
			func_166(uParam1, "Rampage3", func_168(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 55:
			func_166(uParam1, "Rampage4", func_168(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 56:
			func_166(uParam1, "Rampage5", func_168(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 53:
			func_166(uParam1, "Rampage2", func_168(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 57:
			func_166(uParam1, "TheLastOne", func_168(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 58:
			func_166(uParam1, "Tonya1", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 59:
			func_166(uParam1, "Tonya2", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 60:
			func_166(uParam1, "Tonya3", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 61:
			func_166(uParam1, "Tonya4", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 62:
			func_166(uParam1, "Tonya5", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_166(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_167(int iParam0)
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

struct<2> func_168(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_169(iParam0)};
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

struct<2> func_169(int iParam0)
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

bool func_170()
{
	if (func_173() && !func_174())
	{
		return true;
	}
	if (func_172() && func_171())
	{
		return true;
	}
	return false;
}

int func_171()
{
	return Global_100872 > 0;
}

bool func_172()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_173()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_174()
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

bool func_175()
{
	func_181(39, 1);
	func_181(40, 1);
	func_181(41, 1);
	func_181(42, 1);
	func_181(43, 1);
	func_181(44, 1);
	fLocal_55 = 321f;
	set_ped_model_is_suppressed(iLocal_372, true);
	set_ped_model_is_suppressed(iLocal_373, true);
	set_ped_model_is_suppressed(iLocal_371, true);
	set_vehicle_model_is_suppressed(iLocal_369, true);
	STREAMING::REQUEST_MODEL(iLocal_373);
	STREAMING::REQUEST_MODEL(iLocal_371);
	STREAMING::REQUEST_MODEL(iLocal_372);
	STREAMING::REQUEST_MODEL(iLocal_369);
	request_anim_dict(sLocal_386);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	if (((((STREAMING::HAS_MODEL_LOADED(iLocal_373) && STREAMING::HAS_MODEL_LOADED(iLocal_371)) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && has_anim_dict_loaded(sLocal_386))
	{
		func_180();
		func_179();
		func_178();
		func_177();
		add_shocking_event_at_position(109, vLocal_52, -1f);
		iLocal_162 = add_scenario_blocking_area(vLocal_59 - Vector(50f, 50f, 50f), vLocal_59 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		switch (func_151())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_176(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), sLocal_174, 0, 1);
		vLocal_165 = {-3057.362f, 441.8271f, 6.151212f};
		vLocal_168 = {-0.34992f, -0.199749f, -98.79861f};
		fLocal_359 = 116f;
		vLocal_56 = {-3053.721f, 440.9221f, 5.3566f};
		iLocal_164 = create_object(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_164, get_entity_rotation(iLocal_155, 2), 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164, true);
		set_entity_collision(iLocal_164, false, 0);
		return true;
	}
	return false;
}

void func_176(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_177()
{
	set_ped_can_be_targetted(iLocal_141, false);
	set_entity_only_damaged_by_player(iLocal_155, true);
	set_vehicle_doors_locked(iLocal_155, 3);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_142, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_141, iLocal_374);
	set_blocking_of_non_temporary_events(iLocal_143, true);
	set_blocking_of_non_temporary_events(iLocal_142, true);
	set_blocking_of_non_temporary_events(iLocal_141, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	set_ped_combat_movement(iLocal_143, 2);
	set_ped_combat_movement(iLocal_142, 2);
	set_ped_combat_movement(iLocal_141, 2);
	set_ped_suffers_critical_hits(iLocal_143, 0);
	set_ped_suffers_critical_hits(iLocal_142, 0);
	set_ped_suffers_critical_hits(iLocal_141, 0);
	give_weapon_to_ped(iLocal_143, joaat("weapon_pistol"), 68, false, true);
	give_weapon_to_ped(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, false, true);
	give_weapon_to_ped(iLocal_141, joaat("weapon_microsmg"), 68, false, true);
	set_ped_dies_in_vehicle(iLocal_143, 0);
	set_ped_dies_in_vehicle(iLocal_142, 0);
	set_ped_dies_in_vehicle(iLocal_141, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 115, true);
	func_176(&uLocal_176, 2, iLocal_142, "LostKidnapper", 0, 1);
}

void func_178()
{
	int iVar0;
	
	iVar0 = 500;
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, get_offset_from_entity_in_world_coords(iLocal_155, vLocal_353), fLocal_55, 1, true);
	}
	else
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), vLocal_353), fLocal_55, 1, true);
	}
	set_ambient_voice_name(iLocal_140, "LostKidnapGirl");
	set_ped_can_be_targetted(iLocal_140, false);
	set_ped_suffers_critical_hits(iLocal_140, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_140, iVar0);
	set_ped_max_health(iLocal_140, iVar0);
	set_blocking_of_non_temporary_events(iLocal_140, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, iLocal_375);
	func_176(&uLocal_176, 1, iLocal_140, "LostKidnapGirl", 0, 1);
}

void func_179()
{
	Vector3 vVar0;
	
	vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	if (vVar0.x > vLocal_52.x)
	{
		iLocal_155 = create_vehicle(iLocal_369, -1116.946f, 560.8027f, 101.3588f, 116.0592f, 1, true);
		vLocal_62 = {-1247.233f, 515.3996f, 94.1352f};
	}
	else
	{
		iLocal_155 = create_vehicle(iLocal_369, vLocal_52, 305f, 1, true);
		vLocal_62 = {-852.9832f, 441.7806f, 86.0437f};
	}
	add_vehicle_upsidedown_check(iLocal_155);
	set_vehicle_engine_on(iLocal_155, true, 1, 0);
	iLocal_142 = PED::CREATE_PED_inside_vehicle(iLocal_155, 22, iLocal_372, -1, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 2, true);
	give_weapon_to_ped(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_sawnoffshotgun"), true);
	iLocal_143 = PED::CREATE_PED(22, iLocal_372, get_offset_from_entity_in_world_coords(iLocal_155, vLocal_356), fLocal_55, 1, true);
	iLocal_141 = PED::CREATE_PED(22, iLocal_371, get_offset_from_entity_in_world_coords(iLocal_155, vLocal_356), fLocal_55, 1, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
	iLocal_82 = 1;
	set_ped_shoot_rate(iLocal_141, 25);
	set_ped_firing_pattern(iLocal_141, -753768974);
	set_ped_shoot_rate(iLocal_143, 35);
	set_ped_firing_pattern(iLocal_141, 1566631136);
	set_ped_accuracy(iLocal_142, 12);
	set_ped_accuracy(iLocal_143, 10);
	set_ped_accuracy(iLocal_141, 15);
	set_vehicle_tyres_can_burst(iLocal_155, false);
	set_model_as_no_longer_needed(iLocal_372);
	set_model_as_no_longer_needed(iLocal_371);
	set_model_as_no_longer_needed(iLocal_369);
	set_vehicle_automatically_attaches(iLocal_155, false, 0);
	set_vehicle_lod_multiplier(iLocal_155, 2f);
}

void func_180()
{
	add_relationship_group("re_snatched badGuys", &iLocal_374);
	add_relationship_group("re_snatched pedVictim", &iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_374, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_374, iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_375, 1862763509);
}

void func_181(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_188(iParam0, 2, 1))
		{
			func_187(iParam0, 2, 1);
		}
	}
	else if (func_188(iParam0, 2, 1))
	{
		func_182(iParam0, 2, 1);
	}
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			iVar0 = func_185(func_186(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_183(func_186(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_183(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_184(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_184(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_185(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_184(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_186(int iParam0)
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

void func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			iVar0 = func_185(func_186(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_183(func_186(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_185(func_186(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_189()
{
	float fVar0;
	
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_141) && ENTITY::DOES_ENTITY_EXIST(iLocal_143)) && ENTITY::DOES_ENTITY_EXIST(iLocal_140)) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		request_anim_dict("random@kidnap_girl");
		if (has_anim_dict_loaded("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_439)
			{
				case 0:
					if (((is_vehicle_driveable(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (!is_synchronized_scene_running(iLocal_117))
						{
							vLocal_110 = {0f, 0f, 0f};
							vLocal_113 = {0f, 0f, 0f};
							iLocal_117 = create_synchronized_scene(vLocal_110, vLocal_113, 2);
							attach_synchronized_scene_to_entity(iLocal_117, iLocal_155, get_entity_bone_index_by_name(iLocal_155, sLocal_175));
							set_synchronized_scene_looped(iLocal_117, true);
							set_synchronized_scene_origin(iLocal_117, vLocal_110, vLocal_113, 2);
							task_synchronized_scene(iLocal_140, iLocal_117, sLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							task_synchronized_scene(iLocal_141, iLocal_117, sLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							task_synchronized_scene(iLocal_143, iLocal_117, sLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							set_ped_can_ragdoll(iLocal_140, 1);
						}
						else
						{
							func_142();
							func_149();
							if (func_190())
							{
								func_143();
							}
						}
					}
					break;
				
				case 1:
					if ((!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (is_synchronized_scene_running(iLocal_117))
						{
							AI::CLEAR_PED_TASKS(iLocal_141);
							AI::CLEAR_PED_TASKS(iLocal_140);
							AI::CLEAR_PED_TASKS(iLocal_143);
						}
						if (!is_synchronized_scene_running(iLocal_118))
						{
							if (is_vehicle_driveable(iLocal_155, 0))
							{
								vLocal_110 = {0f, 0f, 0f};
								vLocal_113 = {get_entity_rotation(iLocal_155, 2)};
								iLocal_118 = create_synchronized_scene(ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), vLocal_113.x, vLocal_113.y, get_entity_heading(iLocal_155), 2);
								if (iLocal_82)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									iLocal_82 = 0;
								}
								set_synchronized_scene_rate(iLocal_118, fVar0);
								task_synchronized_scene(iLocal_140, iLocal_118, sLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								task_synchronized_scene(iLocal_141, iLocal_118, sLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								task_synchronized_scene(iLocal_143, iLocal_118, sLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								play_synchronized_entity_anim(iLocal_155, iLocal_118, "DRAG_INTO_VAN_BURR", sLocal_386, 1000f, -4f, 1, 1000f);
							}
						}
						else
						{
							if (!iLocal_80)
							{
								if ((((is_synchronized_scene_running(iLocal_118) && vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_155, 0)) < 30f) && !func_83()) && get_synchronized_scene_phase(iLocal_118) > 0.1f) && get_synchronized_scene_phase(iLocal_118) < 0.4f)
								{
									if (func_150(&uLocal_176, sLocal_387, "RESNA_HELP", 4, func_191(), 0, 0))
									{
										iLocal_80 = 1;
									}
								}
							}
							if (get_synchronized_scene_phase(iLocal_118) > 0.502f)
							{
								set_entity_invincible(iLocal_140, true);
								set_entity_invincible(iLocal_141, true);
								set_entity_invincible(iLocal_143, true);
								if (get_synchronized_scene_phase(iLocal_118) < 0.732f)
								{
									if (!is_entity_attached(iLocal_155))
									{
										set_ped_can_ragdoll(iLocal_141, 0);
										set_ped_can_ragdoll(iLocal_143, 0);
										if (!PED::IS_PED_INJURED(iLocal_142) && is_vehicle_driveable(iLocal_155, 0))
										{
											task_vehicle_temp_action(iLocal_142, iLocal_155, 30, 6000);
										}
										set_entity_invincible(iLocal_140, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, true);
									}
									if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										func_148();
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_140, false);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_143, false);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_141, false);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_142, false);
										}
										detach_entity(iLocal_155, 1, false);
									}
								}
								else
								{
									set_ped_can_ragdoll(iLocal_141, 1);
									set_ped_can_ragdoll(iLocal_143, 1);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, false);
									set_entity_invincible(iLocal_141, false);
									set_entity_invincible(iLocal_143, false);
									func_148();
									func_147();
									iLocal_439 = 3;
									settimerb(false);
								}
							}
							else
							{
								func_142();
								func_149();
								if (func_190())
								{
									func_143();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

bool func_190()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {10f, 10f, 3f};
	vVar3 = {-10f, -10f, -3f};
	if (is_bullet_in_area(get_ped_bone_coords(iLocal_140, 31086, 0f, 0f, 0f), 15f, 1))
	{
		return true;
	}
	vVar0 = {vVar0 + get_ped_bone_coords(iLocal_140, 31086, 0f, 0f, 0f)};
	vVar3 = {vVar3 + get_ped_bone_coords(iLocal_140, 31086, 0f, 0f, 0f)};
	if (((is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_stickybomb"), 1)) || is_projectile_type_in_area(vVar3, vVar0, joaat("vehicle_weapon_tank"), 1))
	{
		return true;
	}
	if (is_entity_on_fire(iLocal_140))
	{
		return true;
	}
	return false;
}

int func_191()
{
	int iVar0;
	Vector3 vVar1;
	
	vVar1 = {75f, 75f, 20f};
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (is_entity_at_entity(iLocal_140, PLAYER::PLAYER_PED_ID(), vVar1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_192()
{
}

bool func_193()
{
	if (!func_158(5))
	{
		return true;
	}
	if (func_170())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
		{
			return false;
		}
	}
	if (func_164(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_194()
{
	if ((Global_101143 == func_40() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_195(int iParam0)
{
	clear_area(vLocal_171, 15f, 1, 0, 0, false);
	clear_area(-1133.993f, 558.3267f, 107.351f, 5f, 1, 0, 0, false);
	if (iParam0)
	{
		iLocal_414 = add_scenario_blocking_area(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), 0, 1, 1, 1);
		iLocal_413 = add_scenario_blocking_area(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), 0, 1, 1, 1);
	}
	else
	{
		remove_scenario_blocking_area(iLocal_414, 0);
		remove_scenario_blocking_area(iLocal_413, 0);
	}
	set_all_vehicle_generators_active_in_area(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !iParam0, 1);
	set_all_vehicle_generators_active_in_area(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !iParam0, 1);
}

void func_196()
{
}

void func_197(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_198();
}

void func_198()
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

void func_199(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_200(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_240())
		{
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_15(0))
		{
			return false;
		}
		if (func_170())
		{
			return false;
		}
		if (func_239())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_34(func_151()))
		{
			if (func_164(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_44.z > 50f)
			{
				return false;
			}
		}
		if (!func_238(iParam3))
		{
			return false;
		}
		if (func_34(func_151()))
		{
			if (func_237(func_151()) == 4 || func_237(func_151()) == 5)
			{
				return false;
			}
		}
		if (func_34(func_151()))
		{
			if (!func_236(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_235(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_234())
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
		if (!func_225(4))
		{
			return false;
		}
		if (!func_158(5))
		{
			return false;
		}
		if (func_224(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_224(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_238(30) && !func_224(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_34(func_151()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_223(iVar8))
				{
					if (func_201(iVar4))
					{
						if (!func_131(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_151() != iVar4)
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_202(iVar0);
}

int func_202(int iParam0)
{
	return func_203(iParam0, 1);
}

bool func_203(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_223(iParam0))
	{
		return false;
	}
	func_204(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_204(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_205(func_216(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_205(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_215(iParam0, iParam1))
	{
		iVar0 = func_214(iParam1);
		iVar1 = func_212(iParam0);
		iVar2 = func_212(iParam0) - func_212(iParam1);
		iVar3 = func_214(iParam0) - func_214(iParam1);
		iVar4 = func_211(iParam0) - func_211(iParam1);
		iVar5 = func_210(iParam0) - func_210(iParam1);
		iVar6 = func_209(iParam0) - func_209(iParam1);
		iVar7 = func_208(iParam0) - func_208(iParam1);
	}
	else
	{
		iVar0 = func_214(iParam0);
		iVar1 = func_212(iParam1);
		iVar2 = func_212(iParam1) - func_212(iParam0);
		iVar3 = func_214(iParam1) - func_214(iParam0);
		iVar4 = func_211(iParam1) - func_211(iParam0);
		iVar5 = func_210(iParam1) - func_210(iParam0);
		iVar6 = func_209(iParam1) - func_209(iParam0);
		iVar7 = func_208(iParam1) - func_208(iParam0);
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
		iVar4 += func_207(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_206(to_float(iVar0 + 1), 0f, 12f));
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

float func_206(Vector3 fParam0, float fParam1, float fParam2)
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

int func_207(int iParam0, int iParam1)
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

int func_208(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_209(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_210(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_211(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_212(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_213(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_214(int iParam0)
{
	return (iParam0 && 15);
}

bool func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_223(iParam1) || !func_223(iParam0))
	{
		return true;
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
	iVar0 = func_214(iParam0);
	iVar1 = func_214(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_216()
{
	auto uVar0;
	
	func_222(&uVar0, get_clock_seconds());
	func_221(&uVar0, get_clock_minutes());
	func_220(&uVar0, TIME::GET_CLOCK_HOURS());
	func_219(&uVar0, get_clock_day_of_month());
	func_218(&uVar0, get_clock_month());
	func_217(&uVar0, get_clock_year());
	return uVar0;
}

void func_217(auto uParam0, int iParam1)
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

void func_218(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_219(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_214(*uParam0);
	iVar1 = func_212(*uParam0);
	if (iParam1 < 1 || iParam1 > func_207(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_220(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_221(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_222(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_223(int iParam0)
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
	iVar0 = func_208(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_209(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_210(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_212(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_214(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_211(iParam0);
	if (iVar5 < 1 || iVar5 > func_207(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_224(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_151();
				if (!func_34(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_233()) || Global_100201) || Global_25122) || func_232()) || func_73(8, -1)) || func_231()) || func_230()) || func_229()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_233()) || Global_25122) || func_232()) || func_73(8, -1)) || func_229()) || func_231()) || func_230()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_233()) || Global_100201) || Global_25122) || func_232()) || func_73(8, -1)) || func_229()) || func_231()) || func_230()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_233()) || Global_100201) || Global_25122) || func_232()) || func_73(8, -1)) || func_231()) || func_230()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_233() || get_player_wanted_level(player_id()) > 0) || func_73(8, -1)) || func_228()) || func_227()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_231()) || func_230()) || func_227()) || func_226())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_233()) || Global_25122) || func_232()) || func_73(8, -1)) || func_230()) || func_229()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_233()) || func_230()) || Global_100201) || Global_25122) || func_232()) || Global_36839) || func_73(8, -1)) || func_229()) || func_227()) || func_228()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_233()) || Global_100201) || Global_25122) || func_232()) || func_73(8, -1)) || func_229()) || func_227()) || func_231()) || func_230()) || func_228())
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

auto func_226()
{
	return Global_91317.f_1;
}

int func_227()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_228()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_229()
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

int func_230()
{
	return Global_91330.f_297 > 0;
}

int func_231()
{
	return Global_91330.f_296 > 0;
}

auto func_232()
{
	return Global_1315913;
}

int func_233()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_234()
{
	func_71();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_235(int iParam0)
{
	return func_215(func_216(), iParam0);
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_151();
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

int func_237(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_240())
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

bool func_239()
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

bool func_240()
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

void func_241()
{
	wait(false);
	func_254(0);
	if (Global_25358)
	{
		trigger_music_event("AC_STOP");
	}
	func_253();
	func_108(&uLocal_341, 0, 0);
	if (func_194())
	{
		set_wanted_level_multiplier(1f);
		remove_scenario_blocking_area(iLocal_162, 0);
	}
	else
	{
		func_252(&Global_25179);
	}
	set_max_wanted_level(5);
	set_wanted_level_multiplier(1f);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !PED::IS_PED_INJURED(iLocal_140)) && is_ped_group_member(iLocal_140, get_player_group(player_id())))
	{
		remove_ped_from_group(iLocal_140);
	}
	if (is_vehicle_driveable(iLocal_155, 0))
	{
		set_vehicle_doors_locked(iLocal_155, 1);
	}
	func_195(0);
	func_242(-1);
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", true);
	terminate_this_thread();
}

void func_242(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_194())
	{
		func_245(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_101143, 1), 64);
		if (func_39(Global_101143) > 0)
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
	func_252(&Global_25179);
	Global_101144 = 0;
	func_199(-1);
}

char* func_243(int iParam0, int iParam1)
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

void func_244(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_245(int iParam0)
{
	func_246(iParam0, 0, func_251(iParam0));
}

void func_246(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_216();
	func_249(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_248(uParam0, &uVar0);
	Var1 = {func_247(&uVar0)};
}

struct<16> func_247(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
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
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_214(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_212(*uParam0), 64);
	return cVar0;
}

void func_248(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_249(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_212(*uParam0);
	iVar1 = func_214(*uParam0);
	iVar2 = func_211(*uParam0);
	iVar3 = func_210(*uParam0);
	iVar4 = func_209(*uParam0);
	iVar5 = func_208(*uParam0);
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
	iVar6 = func_207(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_207(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_250(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_250(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_222(uParam0, iParam1);
	func_221(uParam0, iParam2);
	func_220(uParam0, iParam3);
	func_218(uParam0, iParam5);
	func_219(uParam0, iParam4);
	func_217(uParam0, iParam6);
}

int func_251(int iParam0)
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

void func_252(auto uParam0)
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

void func_253()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_181(iVar0, iParam0);
		iVar0++;
	}
}

