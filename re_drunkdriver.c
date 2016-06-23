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
	auto uLocal_13 = 0;
	auto uLocal_14 = 0;
	float fLocal_15 = 0;
	auto uLocal_16 = 0;
	auto uLocal_17 = 0;
	int iLocal_18 = 0;
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
	Vector3 vLocal_44 = 0;
	Vector3 fLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	Vector3 vLocal_57 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var[] uLocal_65 = new var[2];
	Vector3 vLocal_68 = 0;
	Vector3 fLocal_71 = 0;
	Vector3 vLocal_72 = 0;
	Vector3 fLocal_75 = 0;
	Vector3 vLocal_76 = 0;
	Vector3 fLocal_79 = 0;
	int iLocal_80 = 0;
	Vector3 vLocal_81 = 0;
	Vector3 vLocal_84 = 0;
	Vector3 vLocal_87 = 0;
	int iLocal_90 = 0;
	int[] iLocal_91 = new int[2];
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
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
	char* sLocal_113 = 0;
	char* sLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
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
	struct<6> Local_137 = 0;
	char[24] cLocal_143 = 0;
	int iLocal_149 = 0;
	auto uLocal_150 = 0;
	int iLocal_151 = 0;
	Vector3 vLocal_152 = 0;
	var[] uLocal_155 = new var[2];
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	Vector3 vLocal_160 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	auto uLocal_173 = 16;
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
	int iLocal_338 = 0;
	Vector3 vLocal_339 = 0;
	Vector3 vLocal_342 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	struct<2> Local_348 = 0;
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
	auto uLocal_365 = 5;
	auto uLocal_366 = 0;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
#endregion

void main()
{
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
	iLocal_19 = 3;
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
	fLocal_47 = -1f;
	iLocal_51 = _0x4A9923385BDB9DAD();
	iLocal_52 = _get_blip_info_id_iterator();
	vLocal_87 = {-1034.6f, 4918.6f, 205.9f};
	iLocal_124 = -1;
	StringCopy(&Local_137, "", 24);
	iLocal_165 = -1;
	vLocal_339 = {-1017.345f, -1354.196f, 4.4568f};
	vLocal_342 = {2003.456f, 3071.102f, 46.0499f};
	vLocal_57 = {Local_348.f_1[0 /*3*/]};
	func_267();
	if (has_force_cleanup_occurred(11))
	{
		func_232();
	}
	if (func_190(vLocal_57, 27, iLocal_345, 0, 0))
	{
		func_187(-1);
	}
	else
	{
		terminate_this_thread();
	}
	iLocal_159 = get_game_timer();
	while (true)
	{
		wait(false);
		if (is_world_point_within_brain_activation_range() || iLocal_62)
		{
			if (!func_186())
			{
				if (func_185())
				{
					func_232();
				}
			}
			_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (iLocal_56)
					{
						iLocal_172 = 1;
						iLocal_53 = 1;
					}
					else
					{
						if (func_173())
						{
							func_232();
						}
						if (!iLocal_60)
						{
							func_172();
						}
						if (iLocal_60)
						{
							func_171();
						}
					}
					break;
				
				case 1:
					func_161();
					if (is_player_playing(player_id()))
					{
						func_160();
						func_157();
						if (iLocal_54 == 1 && !does_entity_exist(iLocal_91[1]))
						{
							func_70();
							if (func_68() || is_entity_dead(iLocal_94, 0))
							{
								if (does_entity_exist(iLocal_91[0]))
								{
									if (!is_entity_dead(iLocal_91[0], 0))
									{
										if (is_ped_in_group(iLocal_91[0]))
										{
											remove_ped_from_group(iLocal_91[0]);
										}
										clear_ped_tasks(iLocal_91[0]);
										task_smart_flee_ped(iLocal_91[0], player_ped_id(), 250f, -1, 0, 0);
										func_64(iLocal_91[0], 120000, 0);
										set_ped_keep_task(iLocal_91[0], true);
										func_62();
										wait(false);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && does_entity_exist(iLocal_91[1])))
						{
							func_70();
							if (iLocal_55 != 9)
							{
								if (func_68() || is_entity_dead(iLocal_94, 0))
								{
									if (does_entity_exist(iLocal_91[0]))
									{
										if (!is_ped_injured(iLocal_91[0]))
										{
											if (is_ped_in_group(iLocal_91[0]))
											{
												remove_ped_from_group(iLocal_91[0]);
											}
											clear_ped_tasks(iLocal_91[0]);
											task_smart_flee_ped(iLocal_91[0], player_ped_id(), 250f, -1, 0, 0);
											func_64(iLocal_91[0], 120000, 0);
											set_ped_keep_task(iLocal_91[0], true);
										}
									}
									if (does_entity_exist(iLocal_91[1]))
									{
										if (!is_ped_injured(iLocal_91[1]))
										{
											if (is_ped_in_group(iLocal_91[1]))
											{
												remove_ped_from_group(iLocal_91[1]);
											}
											clear_ped_tasks(iLocal_91[1]);
											task_smart_flee_ped(iLocal_91[1], player_ped_id(), 250f, -1, 0, 0);
											func_64(iLocal_91[1], 120000, 0);
											set_ped_keep_task(iLocal_91[1], true);
										}
									}
									if (iLocal_54 == 1)
									{
										func_62();
										wait(false);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_62();
										wait(false);
										func_61(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (does_entity_exist(iLocal_91[0]))
						{
							if (!is_ped_injured(iLocal_91[0]))
							{
								set_ped_max_move_blend_ratio(iLocal_91[0], 1f);
							}
						}
						if (does_entity_exist(iLocal_91[1]))
						{
							if (!is_ped_injured(iLocal_91[1]))
							{
								set_ped_max_move_blend_ratio(iLocal_91[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_55 != 9)
					{
						if (!is_ped_injured(iLocal_91[0]))
						{
							if (is_entity_at_coord(iLocal_91[0], vLocal_87, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!is_ped_injured(iLocal_91[1]))
									{
										if (!is_ped_in_group(iLocal_91[0]) && !is_ped_in_group(iLocal_91[1]))
										{
											set_ped_as_group_member(iLocal_91[0], func_57());
											set_ped_as_group_member(iLocal_91[1], func_57());
										}
									}
								}
								func_56(0);
								wait(false);
								func_62();
								iLocal_55 = 9;
							}
						}
					}
					if (func_55())
					{
						if (does_entity_exist(iLocal_91[0]))
						{
							delete_ped(&(iLocal_91[0]));
						}
						if (does_entity_exist(iLocal_91[1]))
						{
							delete_ped(&(iLocal_91[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_232();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && iLocal_110)
	{
		iLocal_159 = get_game_timer();
		if (func_2())
		{
			if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
			{
				vLocal_160 = {get_entity_speed_vector(get_vehicle_ped_is_in(player_ped_id(), 0), 0)};
			}
		}
	}
}

bool func_2()
{
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (does_entity_exist(iLocal_91[0]))
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						if (is_ped_in_vehicle(iLocal_91[0], get_vehicle_ped_is_in(player_ped_id(), 0), 0))
						{
							return true;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (does_entity_exist(iLocal_91[0]) && does_entity_exist(iLocal_91[1]))
				{
					if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
					{
						if (is_ped_in_vehicle(iLocal_91[0], get_vehicle_ped_is_in(player_ped_id(), 0), 0) && is_ped_in_vehicle(iLocal_91[1], get_vehicle_ped_is_in(player_ped_id(), 0), 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_3()
{
	if (iLocal_54 == 2)
	{
		if (!is_entity_dead(iLocal_94, 0))
		{
			if (!is_entity_at_entity(player_ped_id(), iLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return true;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (has_entity_collided_with_anything(iLocal_94) && get_entity_health(iLocal_94) < iLocal_80)
				{
					iLocal_80 = get_entity_health(iLocal_94);
					func_5(0);
					func_62();
					wait(false);
					func_61(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!is_vehicle_driveable(iLocal_94, 0) || is_vehicle_stuck_on_roof(iLocal_94))
			{
				func_62();
				wait(false);
				if (!func_4())
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!is_ped_injured(iLocal_91[0]))
						{
							task_wander_standard(iLocal_91[0], 1193033728, 0);
							set_ped_keep_task(iLocal_91[0], true);
						}
						if (!is_ped_injured(iLocal_91[1]))
						{
							task_go_to_entity(iLocal_91[1], iLocal_91[0], -1, 0f, 1f, 2f, 0);
							set_ped_keep_task(iLocal_91[1], true);
						}
						return true;
					}
				}
			}
			if (has_entity_been_damaged_by_weapon(iLocal_94, false, 2) && has_entity_been_damaged_by_entity(iLocal_94, player_ped_id(), 0))
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					clear_ped_tasks(iLocal_91[0]);
					task_smart_flee_ped(iLocal_91[0], player_ped_id(), 250f, -1, 0, 0);
				}
				if (!is_ped_injured(iLocal_91[1]))
				{
					clear_ped_tasks(iLocal_91[1]);
					task_smart_flee_ped(iLocal_91[1], player_ped_id(), 250f, -1, 0, 0);
				}
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

bool func_4()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_5(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &Local_137, 8, 0, 0))
			{
				iLocal_136 = 0;
			}
		}
	}
	else if ((!iLocal_136 && is_scripted_conversation_ongoing()) && !func_27("REDR1_SWV"))
	{
		cLocal_143 = {func_9()};
		Local_137 = {func_8()};
		func_6();
		iLocal_136 = 1;
	}
}

void func_6()
{
	Global_14578 = 0;
	func_7();
}

void func_7()
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

struct<6> func_8()
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

struct<6> func_9()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

int func_10(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

bool func_11(char* sParam0, int iParam1, int iParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_12();
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
		func_25();
	}
	return false;
}

void func_12()
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

void func_13()
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

bool func_14()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_15()
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

void func_16()
{
	if (func_22(14))
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
		Global_14413 = func_17();
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

auto func_17()
{
	func_18();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_21(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_20(player_ped_id());
			if (func_19(iVar0) && (!func_22(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_19(Global_101154.f_1826.f_539.f_3549))
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

int func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_22(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_23()
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

int func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_27(char* sParam0)
{
	auto uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (are_strings_equal(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_28()
{
	if (iLocal_54 == 1)
	{
		if (is_ped_injured(iLocal_91[0]))
		{
			return true;
		}
	}
	if (iLocal_54 == 2)
	{
		if (is_ped_injured(iLocal_91[0]) && is_ped_injured(iLocal_91[1]))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_54 == 1)
	{
		if (!does_entity_exist(iLocal_91[0]))
		{
			return true;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!does_entity_exist(iLocal_91[0]) && !does_entity_exist(iLocal_91[1]))
		{
			return true;
		}
	}
	return false;
}

void func_30()
{
	while (!func_54())
	{
		wait(false);
	}
	func_34(27, iLocal_345);
	func_31();
	func_232();
}

void func_31()
{
	func_32();
}

bool func_32()
{
	if (func_33(0))
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

int func_33(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_35(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)
{
	Global_101140 = iParam0;
}

void func_36(int iParam0, auto uParam1, auto uParam2)
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
		func_40(891 + iParam0, 1, -1, 1);
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
		func_37();
	}
}

void func_37()
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
		func_39(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_38() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_32();
				}
			}
		}
	}
}

auto func_38()
{
	return Global_25120;
}

int func_39(int iParam0, int iParam1)
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

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_41();
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

auto func_41()
{
	return Global_1312747;
}

int func_42(int iParam0, int iParam1)
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

bool func_43(int iParam0)
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

void func_44(int iParam0)
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_47();
	}
}

void func_47()
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

int func_48()
{
	func_18();
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

int func_49(int iParam0)
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

void func_50(int iParam0, int iParam1)
{
	set_bit(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
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

auto func_52()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_53(cVar0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_54()
{
	return true;
}

bool func_55()
{
	if (Global_25355)
	{
		func_35(4);
		return true;
	}
	return false;
}

void func_56(int iParam0)
{
	Global_16723 = iParam0;
}

int func_57()
{
	return get_player_group(get_player_index());
}

bool func_58()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

auto func_59()
{
	return Global_25354;
}

void func_60()
{
	func_232();
}

int func_61(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_62()
{
	Global_14578 = 0;
	func_63();
}

void func_63()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return true;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return true;
	}
	if (!iParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return false;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return false;
	}
	Global_36616[iVar2 /*5*/] = 0;
	Global_36616[iVar2 /*5*/].f_1 = iParam0;
	Global_36616[iVar2 /*5*/].f_2 = iParam1;
	Global_36616[iVar2 /*5*/].f_3 = iParam1;
	Global_36616[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == player_ped_id())
	{
		Global_36837 = 1;
	}
	Global_36615++;
	return true;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_68()
{
	_0xD4B8E3D1917BC86B(true);
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return true;
	}
	if ((is_bullet_in_area(vLocal_152, 40f, 1) || is_bullet_in_area(func_69(player_id()), 10f, 0)) || is_projectile_in_area(vLocal_152 - Vector(40f, 40f, 40f), vLocal_152 + Vector(40f, 40f, 40f), 0))
	{
		return true;
	}
	if (!is_ped_injured(iLocal_91[0]))
	{
		if (has_entity_been_damaged_by_entity(iLocal_91[0], player_ped_id(), 1) || is_entity_in_water(iLocal_91[0]))
		{
			return true;
		}
		if (!is_entity_dead(get_players_last_vehicle(), 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_91[0], get_players_last_vehicle(), 1))
			{
				return true;
			}
		}
		if (is_ped_armed(player_ped_id(), 6))
		{
			if (is_player_targetting_entity(player_id(), iLocal_91[0]) || is_player_free_aiming_at_entity(player_id(), iLocal_91[0]))
			{
				if (_0x6CD5A433374D4CFB(iLocal_91[0], player_ped_id()))
				{
					return true;
				}
			}
		}
	}
	else
	{
		return true;
	}
	if (does_entity_exist(iLocal_91[1]))
	{
		if (!is_ped_injured(iLocal_91[1]))
		{
			if (has_entity_been_damaged_by_entity(iLocal_91[1], player_ped_id(), 1))
			{
				return true;
			}
			if (!is_entity_dead(get_players_last_vehicle(), 0))
			{
				if (has_entity_been_damaged_by_entity(iLocal_91[1], get_players_last_vehicle(), 1))
				{
					return true;
				}
			}
			if (is_ped_armed(player_ped_id(), 6))
			{
				if (is_player_targetting_entity(player_id(), iLocal_91[1]) || is_player_free_aiming_at_entity(player_id(), iLocal_91[1]))
				{
					if (_0x6CD5A433374D4CFB(iLocal_91[1], player_ped_id()))
					{
						return true;
					}
				}
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

Vector3 func_69(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

void func_70()
{
	int iVar0;
	
	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((is_entity_in_angled_area(player_ped_id(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, true, 0) && is_sphere_visible(vLocal_152, 1f)) || is_entity_at_coord(player_ped_id(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					if (does_blip_exist(iLocal_151))
					{
						remove_blip(&iLocal_151);
					}
					if (!is_ped_injured(iLocal_91[0]))
					{
						if (!does_blip_exist(uLocal_155[0]))
						{
							uLocal_155[0] = func_156(iLocal_91[0], 0, 145);
							_0x75A16C3DA34F1245(uLocal_155[0], false);
						}
					}
					if (!func_186())
					{
						if (!is_entity_dead(get_players_last_vehicle(), 0))
						{
							iLocal_95 = get_players_last_vehicle();
						}
						func_155(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_146(1);
						func_145(1);
					}
					if (is_entity_in_angled_area(player_ped_id(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, true, 0))
					{
						if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
						{
							func_144();
							task_play_anim(iLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							task_play_anim(iLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_123 = get_game_timer() + 60000;
							if (does_blip_exist(uLocal_155[0]))
							{
								_0x75A16C3DA34F1245(uLocal_155[0], true);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, true, 0) && is_sphere_visible(vLocal_152, 1f)) || is_entity_at_coord(player_ped_id(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					func_143();
					if (!func_186())
					{
						if (!is_entity_dead(get_players_last_vehicle(), 0))
						{
							iLocal_95 = get_players_last_vehicle();
						}
						func_146(1);
						func_145(1);
					}
					if (is_entity_in_angled_area(player_ped_id(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, true, 0))
					{
						func_61(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (does_blip_exist(uLocal_155[0]))
						{
							_0x75A16C3DA34F1245(uLocal_155[0], true);
						}
						if (does_blip_exist(uLocal_155[1]))
						{
							_0x75A16C3DA34F1245(uLocal_155[1], true);
						}
						iLocal_123 = get_game_timer() + 120000;
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_123 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[0]) && !is_entity_dead(iLocal_94, 0))
				{
					open_sequence_task(&iLocal_99);
					task_look_at_entity(false, iLocal_91[1], 7000, 2060, 4);
					task_pause(false, 2500);
					task_enter_vehicle(false, iLocal_94, -1, -1, 1f, 1, 0);
					close_sequence_task(iLocal_99);
					task_perform_sequence(iLocal_91[0], iLocal_99);
					clear_sequence_task(&iLocal_99);
				}
				if (!is_ped_injured(iLocal_91[1]))
				{
					open_sequence_task(&iLocal_99);
					task_look_at_entity(false, iLocal_91[0], 7000, 2060, 4);
					task_follow_nav_mesh_to_coord(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					task_follow_nav_mesh_to_coord(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					task_wander_standard(false, 1193033728, 0);
					close_sequence_task(iLocal_99);
					task_perform_sequence(iLocal_91[1], iLocal_99);
					clear_sequence_task(&iLocal_99);
				}
				settimera(false);
				iLocal_55 = 3;
			}
			if (!is_ped_injured(iLocal_91[0]))
			{
				if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (is_ped_facing_ped(player_ped_id(), iLocal_91[0], 80f))
					{
						iLocal_121 = true;
						settimera(false);
						iLocal_55 = 4;
					}
				}
				else if (!is_entity_at_entity(player_ped_id(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					_0xB542DE8C3D1CB210(1);
				}
				else
				{
					_0xB542DE8C3D1CB210(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_54 == 1)
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					if (!is_ped_injured(iLocal_91[1]))
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							settimera(false);
							iLocal_55 = 4;
						}
					}
					if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (is_ped_facing_ped(player_ped_id(), iLocal_91[0], 80f))
						{
							iLocal_121 = true;
							settimera(false);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_142();
						if (func_141())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (is_entity_at_coord(player_ped_id(), vLocal_68, 15f, 15f, 15f, false, true, 0) && !is_ped_trying_to_enter_a_locked_vehicle(player_ped_id()))
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						if (is_ped_facing_ped(player_ped_id(), iLocal_91[0], 80f))
						{
							if (_0x6CD5A433374D4CFB(iLocal_91[0], player_ped_id()))
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									open_sequence_task(&iLocal_99);
									task_look_at_entity(false, player_ped_id(), -1, 2060, 4);
									task_play_anim(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									task_turn_ped_to_face_entity(false, player_ped_id(), false);
									close_sequence_task(iLocal_99);
									task_perform_sequence(iLocal_91[0], iLocal_99);
									clear_sequence_task(&iLocal_99);
								}
								if (!is_ped_injured(iLocal_91[1]))
								{
									task_look_at_entity(iLocal_91[1], player_ped_id(), -1, 2060, 4);
								}
								settimera(false);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (is_entity_in_angled_area(player_ped_id(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, true, 0))
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						open_sequence_task(&iLocal_99);
						task_look_at_entity(false, player_ped_id(), -1, 2060, 4);
						task_play_anim(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						task_turn_ped_to_face_entity(false, player_ped_id(), false);
						close_sequence_task(iLocal_99);
						task_perform_sequence(iLocal_91[0], iLocal_99);
						clear_sequence_task(&iLocal_99);
						if (!is_ped_injured(iLocal_91[1]))
						{
							task_look_at_entity(iLocal_91[1], player_ped_id(), -1, 2060, 4);
						}
						settimera(false);
						iLocal_55 = 4;
					}
				}
				if (is_vehicle_driveable(iLocal_94, 0))
				{
					if (is_entity_at_entity(player_ped_id(), iLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && is_ped_trying_to_enter_a_locked_vehicle(player_ped_id()))
					{
						if (func_141())
						{
							func_56(0);
						}
						func_62();
						wait(false);
						if (func_61(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (does_blip_exist(uLocal_155[iLocal_63]))
								{
									remove_blip(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!does_blip_exist(iLocal_158))
							{
								iLocal_158 = func_139(iLocal_94, 0, 0);
							}
							if (!is_ped_injured(iLocal_91[0]))
							{
								clear_ped_tasks_immediately(iLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < get_game_timer())
				{
					if (func_141())
					{
						func_56(0);
					}
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1])) && does_entity_exist(iLocal_94))
						{
							open_sequence_task(&iLocal_99);
							task_look_at_entity(false, iLocal_91[1], -1, 2060, 4);
							task_enter_vehicle(false, iLocal_94, -1, -1, 1f, 1, 0);
							close_sequence_task(iLocal_99);
							task_perform_sequence(iLocal_91[0], iLocal_99);
							clear_sequence_task(&iLocal_99);
							open_sequence_task(&iLocal_99);
							task_look_at_entity(false, iLocal_91[0], -1, 2060, 4);
							task_turn_ped_to_face_entity(false, iLocal_91[0], false);
							task_enter_vehicle(false, iLocal_94, -1, false, 1f, 1, 0);
							close_sequence_task(iLocal_99);
							task_perform_sequence(iLocal_91[1], iLocal_99);
							clear_sequence_task(&iLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (does_blip_exist(uLocal_155[iLocal_63]))
								{
									remove_blip(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
						{
							if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || iLocal_121)
							{
								_0xB542DE8C3D1CB210(0);
								task_look_at_entity(iLocal_91[0], player_ped_id(), -1, 2060, 4);
								task_look_at_entity(iLocal_91[1], player_ped_id(), -1, 2060, 4);
								task_look_at_entity(player_ped_id(), iLocal_91[0], -1, 2060, 4);
								if (get_game_timer() + 50000 > iLocal_123 || is_player_pressing_horn(player_id()))
								{
									func_6();
									if (iLocal_121)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													settimera(false);
													iLocal_170++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													settimera(false);
													iLocal_170++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													settimera(false);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_138())
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									open_sequence_task(&iLocal_99);
									task_play_anim(false, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									task_turn_ped_to_face_entity(false, player_ped_id(), -1);
									close_sequence_task(iLocal_99);
									task_perform_sequence(iLocal_91[0], iLocal_99);
									clear_sequence_task(&iLocal_99);
									if (!is_ped_injured(iLocal_91[1]))
									{
										open_sequence_task(&iLocal_99);
										task_play_anim(false, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										task_turn_ped_to_face_entity(false, iLocal_91[0], false);
										task_pause(false, 3000);
										task_follow_nav_mesh_to_coord(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										task_follow_nav_mesh_to_coord(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										task_wander_standard(false, 1193033728, 0);
										close_sequence_task(iLocal_99);
										task_perform_sequence(iLocal_91[1], iLocal_99);
										clear_sequence_task(&iLocal_99);
									}
									func_137();
								}
							}
							else
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									if (is_ped_facing_ped(player_ped_id(), iLocal_91[0], 80f))
									{
										task_look_at_entity(iLocal_91[0], player_ped_id(), 10000, 2060, 4);
										task_look_at_entity(player_ped_id(), iLocal_91[0], 10000, 2060, 4);
										func_6();
										wait(false);
										iLocal_170++;
									}
									else
									{
										func_136(iLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					
					case 2:
						if (func_138())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					
					case 3:
						if (!iLocal_104)
						{
							if (timera() > 1500)
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									open_sequence_task(&iLocal_99);
									task_look_at_entity(false, player_ped_id(), 10000, 2060, 4);
									task_turn_ped_to_face_entity(false, player_ped_id(), false);
									task_pause(false, 500);
									close_sequence_task(iLocal_99);
									task_perform_sequence(iLocal_91[0], iLocal_99);
									clear_sequence_task(&iLocal_99);
									settimera(false);
									iLocal_104 = 1;
								}
							}
						}
						func_136(iLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					
					case 4:
						if (!func_138())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									task_clear_look_at(player_ped_id());
									if (does_blip_exist(uLocal_155[0]))
									{
										remove_blip(&(uLocal_155[0]));
									}
									if (does_blip_exist(uLocal_155[1]))
									{
										remove_blip(&(uLocal_155[1]));
									}
									if (is_vehicle_driveable(iLocal_94, 0))
									{
										set_vehicle_doors_locked(iLocal_94, 1);
										if (!is_ped_injured(iLocal_91[0]))
										{
											task_enter_vehicle(iLocal_91[0], iLocal_94, -1, false, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (does_blip_exist(uLocal_155[0]))
							{
								remove_blip(&(uLocal_155[0]));
							}
							if (does_blip_exist(uLocal_155[1]))
							{
								remove_blip(&(uLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					
					case 5:
						if (func_138())
						{
							if (!is_ped_injured(iLocal_91[0]))
							{
								if (!is_ped_in_group(iLocal_91[0]))
								{
									clear_ped_tasks(iLocal_91[0]);
									set_ped_as_group_member(iLocal_91[0], func_57());
									set_ped_never_leaves_group(iLocal_91[0], 1);
									set_ped_group_member_passenger_index(iLocal_91[0], false);
								}
								set_relationship_between_groups(255, iLocal_100, 1862763509);
								func_135();
							}
							if (is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								if (get_vehicle_ped_is_in(player_ped_id(), 0) != iLocal_94)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_136(iLocal_91[0], &(uLocal_65[0]));
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (func_138())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 7:
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (func_138())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											settimera(false);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											settimera(false);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											settimera(false);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 10:
						if (func_138())
						{
							if (!is_ped_injured(iLocal_91[0]))
							{
								if (!is_ped_in_group(iLocal_91[0]))
								{
									clear_ped_tasks(iLocal_91[0]);
									set_ped_as_group_member(iLocal_91[0], func_57());
									set_ped_never_leaves_group(iLocal_91[0], 1);
									set_ped_group_member_passenger_index(iLocal_91[0], false);
								}
								set_relationship_between_groups(255, iLocal_100, 1862763509);
								func_135();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 11:
						iLocal_55 = 7;
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
						{
							if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (is_ped_facing_ped(iLocal_91[0], player_ped_id(), 50f))
								{
									task_look_at_entity(player_ped_id(), iLocal_91[0], -1, 2060, 4);
									task_look_at_entity(iLocal_91[0], player_ped_id(), -1, 2060, 4);
									task_look_at_entity(iLocal_91[1], player_ped_id(), -1, 2060, 4);
									if (func_141())
									{
										func_56(0);
									}
									func_6();
									wait(false);
									if (func_61(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_136(iLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!is_ped_injured(iLocal_91[0]))
						{
							open_sequence_task(&iLocal_99);
							task_pause(false, 500);
							close_sequence_task(iLocal_99);
							task_perform_sequence(iLocal_91[0], iLocal_99);
							clear_sequence_task(&iLocal_99);
							settimera(false);
							iLocal_170++;
						}
						break;
					
					case 2:
						func_136(iLocal_91[0], &(uLocal_65[0]));
						if (!is_ped_trying_to_enter_a_locked_vehicle(player_ped_id()))
						{
							if (is_vehicle_driveable(iLocal_94, 0))
							{
								set_vehicle_doors_locked(iLocal_94, 1);
							}
						}
						if (timera() > 8000)
						{
							if (does_blip_exist(uLocal_155[0]))
							{
								remove_blip(&(uLocal_155[0]));
							}
							if (does_blip_exist(uLocal_155[1]))
							{
								remove_blip(&(uLocal_155[1]));
							}
							if (!does_blip_exist(iLocal_158))
							{
								if (is_vehicle_driveable(iLocal_94, 0))
								{
									iLocal_158 = func_139(iLocal_94, 0, 0);
									set_vehicle_doors_locked(iLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!is_ped_injured(iLocal_91[0]))
							{
								if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && timera() > 9500)
								{
									iVar0 = get_random_int_in_range(false, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											settimera(false);
										}
									}
									else if (func_61(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										settimera(false);
									}
								}
							}
						}
						if (!is_entity_dead(iLocal_94, 0))
						{
							if (is_ped_in_vehicle(player_ped_id(), iLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 1)
			{
				if (!is_ped_injured(iLocal_91[0]) && !is_entity_dead(iLocal_94, 0))
				{
					if (timera() > 50000 || get_ped_in_vehicle_seat(iLocal_94, -1) == iLocal_91[0])
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (is_vehicle_driveable(iLocal_94, 0) && !is_vehicle_stuck_on_roof(iLocal_94))
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									if (is_vehicle_seat_free(iLocal_94, -1) && is_ped_in_vehicle(iLocal_91[0], iLocal_94, 0))
									{
										task_shuffle_to_next_vehicle_seat(iLocal_91[0], iLocal_94);
										iLocal_55 = 2;
									}
									else if (get_ped_in_vehicle_seat(iLocal_94, -1) == iLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (get_ped_in_vehicle_seat(iLocal_94, -1) == player_ped_id())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_64(iLocal_91[0], 120000, 0);
										task_wander_standard(iLocal_91[0], 1193033728, 0);
										set_ped_keep_task(iLocal_91[0], true);
										wait(false);
										func_60();
									}
								}
							}
							else if (!is_ped_injured(iLocal_91[0]))
							{
								func_64(iLocal_91[0], 120000, 0);
								task_wander_standard(iLocal_91[0], 1193033728, 0);
								set_ped_keep_task(iLocal_91[0], true);
								wait(false);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (timera() > 60000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (is_vehicle_driveable(iLocal_94, 0))
						{
							if (is_vehicle_seat_free(iLocal_94, -1))
							{
								if (!is_ped_injured(iLocal_91[0]))
								{
									open_sequence_task(&iLocal_99);
									task_clear_look_at(false);
									task_enter_vehicle(false, iLocal_94, -1, -1, 1f, 1, 0);
									close_sequence_task(iLocal_99);
									task_perform_sequence(iLocal_91[0], iLocal_99);
									clear_sequence_task(&iLocal_99);
								}
							}
							if (!is_ped_injured(iLocal_91[1]))
							{
								open_sequence_task(&iLocal_99);
								task_clear_look_at(false);
								task_enter_vehicle(false, iLocal_94, -1, false, 1f, 1, 0);
								close_sequence_task(iLocal_99);
								task_perform_sequence(iLocal_91[1], iLocal_99);
								clear_sequence_task(&iLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_54 == 1)
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					if (!is_entity_dead(iLocal_94, 0))
					{
						if (is_ped_in_vehicle(iLocal_91[0], iLocal_94, 0))
						{
							if (get_script_task_status(iLocal_91[0], 355471868) != 1 && get_script_task_status(iLocal_91[0], 355471868) != 0)
							{
								set_vehicle_engine_health(iLocal_94, 5f);
								_0x25367DE49D64CF16(iLocal_94, 1);
								open_sequence_task(&iLocal_99);
								task_vehicle_mission_coors_target(false, iLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								task_vehicle_mission_coors_target(false, iLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								task_vehicle_mission_coors_target(false, iLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								close_sequence_task(iLocal_99);
								task_perform_sequence(iLocal_91[0], iLocal_99);
								clear_sequence_task(&iLocal_99);
								set_ped_keep_task(iLocal_91[0], true);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (is_vehicle_driveable(iLocal_94, 0))
				{
					if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
					{
						if (is_ped_sitting_in_vehicle(iLocal_91[0], iLocal_94) && is_ped_sitting_in_vehicle(iLocal_91[1], iLocal_94))
						{
							_0x25367DE49D64CF16(iLocal_94, 1);
							clear_ped_tasks(iLocal_91[1]);
							task_stand_still(iLocal_91[1], -1);
							set_ped_keep_task(iLocal_91[1], true);
							iLocal_55 = 5;
						}
						if (!iLocal_101)
						{
							if (is_ped_sitting_in_vehicle(iLocal_91[0], iLocal_94) && !is_ped_sitting_in_vehicle(iLocal_91[1], iLocal_94))
							{
								clear_ped_tasks(iLocal_91[0]);
								task_stand_still(iLocal_91[0], -1);
							}
							if (!is_ped_sitting_in_vehicle(iLocal_91[0], iLocal_94) && is_ped_sitting_in_vehicle(iLocal_91[1], iLocal_94))
							{
								clear_ped_tasks(iLocal_91[1]);
								task_stand_still(iLocal_91[1], -1);
							}
							iLocal_101 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (is_vehicle_driveable(iLocal_94, 0))
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					clear_ped_tasks(iLocal_91[0]);
					open_sequence_task(&iLocal_99);
					task_vehicle_drive_to_coord(false, iLocal_94, get_offset_from_entity_in_world_coords(iLocal_94, 0f, 2f, 0f), 10f, 0, iLocal_98, 262144, 5f, -1f);
					task_vehicle_temp_action(false, iLocal_94, 24, 500);
					task_vehicle_temp_action(false, iLocal_94, 9, 1500);
					task_vehicle_temp_action(false, iLocal_94, 24, 500);
					task_vehicle_temp_action(false, iLocal_94, 11, 1500);
					task_vehicle_mission_coors_target(false, iLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					close_sequence_task(iLocal_99);
					task_perform_sequence(iLocal_91[0], iLocal_99);
					clear_sequence_task(&iLocal_99);
					set_ped_keep_task(iLocal_91[0], true);
				}
			}
			iLocal_55 = 6;
			break;
		
		case 6:
			if (!is_ped_injured(iLocal_91[0]))
			{
				if (get_script_task_status(iLocal_91[0], 242628503) == 1)
				{
					if (get_sequence_progress(iLocal_91[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_54 == 1)
			{
				if (!is_ped_injured(iLocal_91[1]))
				{
					if (!is_entity_at_entity(player_ped_id(), iLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						set_ped_as_no_longer_needed(&(iLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (!does_blip_exist(uLocal_155[0]))
							{
								uLocal_155[0] = func_156(iLocal_91[0], 0, 145);
							}
							iLocal_64++;
							settimera(false);
						}
						break;
					
					case 1:
						if (timera() > 1000)
						{
							if (!is_ped_injured(iLocal_91[0]))
							{
								if (func_138())
								{
									if (is_vehicle_driveable(get_vehicle_ped_is_using(player_ped_id()), 0))
									{
										fLocal_164 = func_134(player_ped_id(), iLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!iLocal_119)
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_119 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_133();
						if (!is_ped_injured(iLocal_91[0]))
						{
							if (func_138())
							{
								if (!iLocal_118)
								{
									if (func_134(player_ped_id(), iLocal_91[0], 1) > fLocal_164 + 5f)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_118 = 1;
										}
									}
								}
							}
							else if (!iLocal_119)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_119 = 1;
								}
							}
						}
						if (func_2())
						{
							if (is_vehicle_driveable(iLocal_94, 0))
							{
								set_vehicle_doors_locked(iLocal_94, 1);
							}
							if (does_blip_exist(uLocal_155[0]))
							{
								remove_blip(&(uLocal_155[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!does_blip_exist(iLocal_103))
								{
									iLocal_103 = func_131(vLocal_87, 0);
									set_blip_sprite(iLocal_103, 269);
									func_129();
								}
							}
							iLocal_62 = 1;
							iLocal_64++;
						}
						if (!is_ped_injured(iLocal_91[0]))
						{
							if (func_134(player_ped_id(), iLocal_91[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							wait(1500);
							task_clear_look_at(player_ped_id());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = get_game_timer();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_128();
						func_127();
						func_133();
						if (!iLocal_110)
						{
							if (get_game_timer() - iLocal_171 > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = get_game_timer();
										iLocal_110 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_109 && !iLocal_108)
							{
								func_126();
							}
							else
							{
								func_123();
								func_122();
								set_cinematic_button_active(true);
							}
						}
						if (func_121(vLocal_81))
						{
							func_5(0);
							func_62();
							wait(false);
							func_61(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_120())
						{
							func_5(0);
							func_62();
							wait(false);
							func_61(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!is_ped_injured(iLocal_91[0]))
						{
							if (is_entity_at_coord(iLocal_91[0], vLocal_81, Global_22, true, true, 0))
							{
								if (does_blip_exist(iLocal_102))
								{
									remove_blip(&iLocal_102);
								}
								if (does_blip_exist(iLocal_103))
								{
									remove_blip(&iLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!is_entity_dead(iLocal_94, 0))
						{
							if (is_ped_in_vehicle(player_ped_id(), iLocal_94, 1))
							{
								if (!does_blip_exist(uLocal_155[0]))
								{
									uLocal_155[0] = func_156(iLocal_91[0], 0, 145);
								}
								if (!does_blip_exist(uLocal_155[1]))
								{
									uLocal_155[1] = func_156(iLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									settimera(false);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!is_ped_injured(iLocal_91[0]) && !is_entity_dead(iLocal_94, 0))
						{
							task_clear_look_at(iLocal_91[0]);
							task_enter_vehicle(iLocal_91[0], iLocal_94, 30000, 2, 2f, 1, 0);
						}
						settimera(false);
						iLocal_64++;
						break;
					
					case 2:
						if (!is_ped_injured(iLocal_91[1]) && !is_entity_dead(iLocal_94, 0))
						{
							open_sequence_task(&iLocal_99);
							task_clear_look_at(false);
							task_follow_to_offset_of_entity(false, iLocal_94, 1.5f, -3f, 0f, 1f, 4000, 0.1f, 1);
							task_enter_vehicle(false, iLocal_94, 30000, true, 2f, 1, 0);
							close_sequence_task(iLocal_99);
							task_perform_sequence(iLocal_91[1], iLocal_99);
							clear_sequence_task(&iLocal_99);
						}
						settimera(false);
						iLocal_64++;
						break;
					
					case 3:
						func_128();
						func_127();
						if (!iLocal_117)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
							{
								if (!is_entity_dead(iLocal_91[0], 0) && !is_entity_dead(iLocal_91[1], 0))
								{
									if (is_ped_in_vehicle(iLocal_91[0], get_vehicle_ped_is_in(player_ped_id(), 0), 0) && is_ped_in_vehicle(iLocal_91[1], get_vehicle_ped_is_in(player_ped_id(), 0), 0))
									{
										set_relationship_between_groups(255, iLocal_100, 1862763509);
										func_135();
										iLocal_63 = 0;
										while (iLocal_63 <= iLocal_90 - 1)
										{
											if (does_blip_exist(uLocal_155[iLocal_63]))
											{
												remove_blip(&(uLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (does_blip_exist(iLocal_158))
										{
											remove_blip(&iLocal_158);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!does_blip_exist(iLocal_103))
											{
												iLocal_103 = func_131(vLocal_87, 0);
												set_blip_sprite(iLocal_103, 269);
												func_129();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												settimera(false);
												iLocal_64++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												settimera(false);
												iLocal_64++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												settimera(false);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_128();
						func_127();
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
								task_clear_look_at(player_ped_id());
								iLocal_171 = get_game_timer();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_128();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_127();
						}
						if (get_game_timer() - iLocal_171 > 9000)
						{
							func_114();
						}
						if (iLocal_346 == 9 && (get_game_timer() - iLocal_347 > 6000 && get_game_timer() - iLocal_347 < 6500))
						{
							func_61(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_121(vLocal_81))
						{
							func_5(0);
							func_62();
							wait(false);
							func_61(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_120())
						{
							func_5(0);
							func_62();
							wait(false);
							func_61(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!is_entity_dead(iLocal_94, 0))
						{
							if ((!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1])) && is_ped_in_vehicle(player_ped_id(), iLocal_94, 0))
							{
								if (is_entity_at_coord(iLocal_91[0], vLocal_81, Global_22, true, true, 0) && is_entity_at_coord(iLocal_91[1], vLocal_81, Global_22, false, true, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 6:
						if (does_blip_exist(iLocal_102))
						{
							remove_blip(&iLocal_102);
						}
						if (does_blip_exist(iLocal_103))
						{
							remove_blip(&iLocal_103);
						}
						iLocal_55 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= iLocal_90 - 1)
			{
				if (!is_ped_injured(iLocal_91[iLocal_63]))
				{
					set_blocking_of_non_temporary_events(iLocal_91[iLocal_63], false);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_113(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f - 5f, 2, 0);
					}
					if (func_2())
					{
						if (get_vehicle_ped_is_in(player_ped_id(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_112();
				}
				if (iLocal_124 == 1)
				{
					func_111();
				}
				if (iLocal_124 == 2)
				{
					func_110();
				}
				if (iLocal_130)
				{
					set_player_control(player_id(), true, 0);
					func_30();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_113(1, 0, 1) && iLocal_124 == -1)
				{
					func_62();
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f - 4f, 2, 0);
						_new_load_scene_start_safe(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						_new_load_scene_start_safe(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_102(1, 1, 1, 0);
					while (func_4())
					{
						wait(false);
					}
					if (func_2())
					{
						if (get_vehicle_ped_is_in(player_ped_id(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_99();
				}
				else if (iLocal_124 == 1)
				{
					func_98();
				}
				else if (iLocal_124 == 2)
				{
					func_71();
				}
				if (iLocal_130)
				{
					set_player_control(player_id(), true, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()
{
	switch (iLocal_126)
	{
		case 0:
			if (!is_ped_injured(iLocal_91[0]))
			{
				remove_ped_from_group(iLocal_91[0]);
				task_look_at_entity(iLocal_91[0], player_ped_id(), 10000, 2060, 4);
				task_look_at_entity(player_ped_id(), iLocal_91[0], 10000, 2060, 4);
			}
			if (!is_ped_injured(iLocal_91[1]))
			{
				remove_ped_from_group(iLocal_91[0]);
				task_look_at_entity(iLocal_91[1], player_ped_id(), 10000, 2060, 4);
			}
			func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (iLocal_125 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					task_go_straight_to_coord(iLocal_91[0], vLocal_84, 1f, -1, 1193033728, 0.5f);
					iLocal_125 = get_game_timer() + 500;
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (iLocal_125 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[1]))
				{
					task_follow_nav_mesh_to_coord(iLocal_91[1], vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < get_game_timer())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			iLocal_130 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_73(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stat_set_int(iVar1, iVar0, 1);
	}
}

bool func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_80(5))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
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
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
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
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
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
	func_75(iParam0);
	if (Global_35711 == 15)
	{
		func_74(0);
	}
	return true;
}

void func_74(int iParam0)
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

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!network_is_game_in_progress())
	{
		if (is_bit_set(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_78() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_78() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_77(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)
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

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

int func_80(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_78() /*10375*/].f_7704.f_10, iParam0);
}

bool func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_82(27, 1);
	return true;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

bool func_83(int iParam0, int iParam1)
{
	if (func_22(14) && !func_94(iParam0))
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
	if (func_93(&Global_2563627))
	{
		if (func_91(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_84(&Global_2563627, iParam0))
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

bool func_84(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return false;
	}
	if (func_91(uParam0, iParam1))
	{
		return false;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_85(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return false;
	}
	if (func_91(uParam0, iParam1))
	{
		return false;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_86(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_87(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, Global_2563626 - 0.5f);
}

void func_88(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_89(auto uParam0, float fParam1)
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

auto func_90(auto uParam0)
{
	return *uParam0.f_72;
}

int func_91(auto uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(auto uParam0, int iParam1)
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

int func_93(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_94(int iParam0)
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

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
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
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		stat_get_int(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stat_set_int(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

void func_98()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_stopped(iVar0))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						if (!is_ped_injured(iLocal_91[0]))
						{
							clear_ped_tasks(iLocal_91[0]);
							remove_ped_from_group(iLocal_91[0]);
						}
						if (!is_ped_injured(iLocal_91[1]))
						{
							clear_ped_tasks(iLocal_91[1]);
							remove_ped_from_group(iLocal_91[1]);
						}
					}
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!is_ped_injured(iLocal_91[1]))
			{
				open_sequence_task(&iLocal_99);
				task_leave_any_vehicle(false, false, 0);
				task_follow_nav_mesh_to_coord(false, vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
				close_sequence_task(iLocal_99);
				task_perform_sequence(iLocal_91[1], iLocal_99);
				clear_sequence_task(&iLocal_99);
				iLocal_125 = get_game_timer() + 1500;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					task_follow_nav_mesh_to_coord(iLocal_91[0], vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = get_game_timer() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = get_game_timer() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = get_game_timer() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			if (!is_ped_injured(iLocal_91[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						task_follow_nav_mesh_to_coord(iLocal_91[0], vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = get_game_timer() + 3500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						task_follow_nav_mesh_to_coord(iLocal_91[0], vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = get_game_timer() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			iLocal_130 = true;
			break;
	}
}

void func_99()
{
	hide_hud_and_radar_this_frame();
	switch (iLocal_126)
	{
		case 0:
			display_hud(false);
			display_radar(false);
			if (is_vehicle_driveable(iLocal_94, 0))
			{
				if (is_vehicle_stopped(iLocal_94))
				{
					if (is_vehicle_driveable(iLocal_94, 0))
					{
						if (!is_ped_injured(iLocal_91[0]))
						{
							clear_ped_tasks(iLocal_91[0]);
							remove_ped_from_group(iLocal_91[0]);
							task_look_at_entity(player_ped_id(), iLocal_91[0], 4000, 2060, 4);
						}
						if (!is_ped_injured(iLocal_91[1]))
						{
							clear_ped_tasks(iLocal_91[1]);
							remove_ped_from_group(iLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_62();
					wait(false);
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					set_player_control(player_id(), false, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_94, 0))
			{
				iLocal_128 = create_camera_with_params(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				iLocal_129 = create_camera_with_params(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				shake_cam(iLocal_128, "HAND_SHAKE", 0.3f);
				shake_cam(iLocal_129, "HAND_SHAKE", 0.3f);
				set_cam_active_with_interp(iLocal_129, iLocal_128, 2500, 0, 0);
				render_script_cams(true, false, 3000, 1, 0, 0);
				clear_area(vLocal_81, 8f, 1, 0, 0, false);
				set_entity_coords(iLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, false, 0, 1);
				set_entity_heading(iLocal_94, 179.7675f);
				set_vehicle_on_ground_properly(iLocal_94);
				iLocal_125 = get_game_timer() + 2500;
				iLocal_126++;
			}
			break;
		
		case 2:
			if (iLocal_125 - 500 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[1]))
				{
					if (is_ped_in_any_vehicle(iLocal_91[1], 0))
					{
						open_sequence_task(&iLocal_99);
						task_follow_nav_mesh_to_coord(false, vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
						close_sequence_task(iLocal_99);
						task_perform_sequence(iLocal_91[1], iLocal_99);
						clear_sequence_task(&iLocal_99);
						set_ped_keep_task(iLocal_91[1], true);
					}
				}
			}
			if (iLocal_125 - 1000 < get_game_timer())
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					if (is_ped_in_any_vehicle(iLocal_91[0], 0))
					{
						open_sequence_task(&iLocal_99);
						task_follow_nav_mesh_to_coord(false, vLocal_84 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						close_sequence_task(iLocal_99);
						task_perform_sequence(iLocal_91[0], iLocal_99);
						clear_sequence_task(&iLocal_99);
						set_ped_keep_task(iLocal_91[0], true);
					}
				}
			}
			if (iLocal_125 < get_game_timer())
			{
				set_cam_params(iLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, false, 1, 1, 2);
				set_cam_params(iLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, false, 1, 1, 2);
				set_cam_active_with_interp(iLocal_129, iLocal_128, 5000, 0, 0);
				new_load_scene_stop();
				iLocal_125 = get_game_timer() + 6000;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < get_game_timer())
			{
				set_cam_params(iLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, false, 1, 1, 2);
				set_cam_params(iLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, false, 1, 1, 2);
				set_cam_active_with_interp(iLocal_129, iLocal_128, 1500, 1, 1);
				if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
				{
					set_entity_coords(iLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, false, 0, 1);
					set_entity_heading(iLocal_91[0], 262.7369f);
					set_entity_coords(iLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, false, 0, 1);
					set_entity_heading(iLocal_91[1], 262.1522f);
				}
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					task_leave_any_vehicle(player_ped_id(), false, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = get_game_timer() + 1700;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < get_game_timer())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = get_game_timer() + 5500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = get_game_timer() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			new_load_scene_stop();
			hide_ped_weapon_for_scripted_cutscene(player_ped_id(), false);
			func_102(0, 1, 1, 0);
			delete_ped(&(iLocal_91[0]));
			delete_ped(&(iLocal_91[1]));
			if (is_vehicle_driveable(iLocal_94, 0))
			{
				set_vehicle_doors_locked(iLocal_94, 7);
			}
			if (iLocal_131)
			{
				if (!is_entity_dead(iLocal_94, 0))
				{
					_0x2208438012482A1A(player_ped_id(), 0, 0);
					set_vehicle_doors_shut(iLocal_94, 1);
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
			}
			else
			{
				_0xC819F3CBB62BF692(0, 0f, 3, 0);
			}
			set_cam_active(iLocal_128, false);
			set_gameplay_cam_relative_heading(0);
			set_gameplay_cam_relative_pitch(-7f, 1f);
			display_hud(true);
			display_radar(true);
			set_player_control(player_id(), true, 0);
			func_72(func_17(), 1, 40, 0, 1);
			iLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_100(1000))
		{
			func_62();
			iLocal_131 = 1;
			iLocal_126 = 7;
		}
	}
}

bool func_100(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (get_game_timer() - Global_28 > iParam0)
		{
			Global_27 = get_game_timer();
		}
		Global_28 = get_game_timer();
		if (get_game_timer() - Global_27 > iParam0)
		{
			if (func_101())
			{
				Global_27 = get_game_timer();
				return true;
			}
		}
	}
	return false;
}

bool func_101()
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

void func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_109(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_14())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_108(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_109(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_108(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_106(player_id())) && !func_104(player_id(), 0)) && !func_103())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_106(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_103()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_105(-1, 0) == 8;
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

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

bool func_106(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return true;
	}
	if (func_107())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_107()
{
	return is_bit_set(Global_2359301, 3);
}

int func_108(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_109(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

void func_110()
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					remove_ped_from_group(iLocal_91[0]);
					task_look_at_entity(iLocal_91[0], player_ped_id(), 10000, 2060, 4);
					task_look_at_entity(player_ped_id(), iLocal_91[0], 10000, 2060, 4);
				}
				if (iLocal_108)
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		
		case 1:
			iLocal_125 = get_game_timer() + 3000;
			iLocal_126++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (!is_ped_injured(iLocal_91[0]))
			{
				open_sequence_task(&iLocal_99);
				task_leave_any_vehicle(false, false, 0);
				task_turn_ped_to_face_entity(false, player_ped_id(), 1800);
				task_follow_nav_mesh_to_coord(false, vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
				task_play_anim(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				close_sequence_task(iLocal_99);
				task_perform_sequence(iLocal_91[0], iLocal_99);
				clear_sequence_task(&iLocal_99);
				set_ped_keep_task(iLocal_91[0], true);
				iLocal_125 = get_game_timer() + 2000;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < get_game_timer())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			iLocal_130 = true;
			break;
	}
}

void func_111()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_stopped(iVar0) && !func_4())
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						clear_ped_tasks(iLocal_91[0]);
						remove_ped_from_group(iLocal_91[0]);
						task_look_at_entity(iLocal_91[0], player_ped_id(), 10000, 2060, 4);
						task_look_at_entity(player_ped_id(), iLocal_91[0], 10000, 2060, 4);
					}
					if (iLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			iLocal_126++;
			break;
		
		case 3:
			if (!is_ped_injured(iLocal_91[0]))
			{
				open_sequence_task(&iLocal_99);
				task_leave_any_vehicle(false, false, 4194304);
				task_turn_ped_to_face_entity(false, player_ped_id(), 1800);
				task_follow_nav_mesh_to_coord(false, vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
				task_play_anim(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				close_sequence_task(iLocal_99);
				task_perform_sequence(iLocal_91[0], iLocal_99);
				clear_sequence_task(&iLocal_99);
				set_ped_keep_task(iLocal_91[0], true);
			}
			func_64(iLocal_91[0], 120000, 0);
			set_player_control(player_id(), true, 0);
			iLocal_125 = get_game_timer() + 3000;
			iLocal_126++;
			break;
		
		case 4:
			iLocal_125 = get_game_timer() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 5:
			if (iLocal_125 < get_game_timer())
			{
				iLocal_126++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			iLocal_130 = true;
			break;
	}
}

void func_112()
{
	switch (iLocal_126)
	{
		case 0:
			if (is_vehicle_driveable(iLocal_94, 0))
			{
				if (is_vehicle_stopped(iLocal_94) && !func_4())
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						clear_ped_tasks(iLocal_91[0]);
						remove_ped_from_group(iLocal_91[0]);
						task_look_at_entity(iLocal_91[0], player_ped_id(), 10000, 2060, 4);
						task_look_at_entity(player_ped_id(), iLocal_91[0], 10000, 2060, 4);
					}
					if (iLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!is_ped_injured(iLocal_91[0]))
			{
				open_sequence_task(&iLocal_99);
				task_leave_any_vehicle(false, false, 4194304);
				task_turn_ped_to_face_entity(false, player_ped_id(), 1800);
				task_follow_nav_mesh_to_coord(false, vLocal_84, 1f, -1, 0.25f, 0, 1193033728);
				task_play_anim(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				close_sequence_task(iLocal_99);
				task_perform_sequence(iLocal_91[0], iLocal_99);
				clear_sequence_task(&iLocal_99);
				set_ped_keep_task(iLocal_91[0], true);
				func_64(iLocal_91[0], 120000, 0);
				set_player_control(player_id(), true, 0);
				iLocal_125 = get_game_timer() + 3000;
				iLocal_126++;
			}
			break;
		
		case 3:
			iLocal_125 = get_game_timer() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < get_game_timer())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			iLocal_126++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			iLocal_130 = true;
			break;
	}
}

bool func_113(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(player_ped_id(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
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

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_enter_m", 3) || is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_idle_m", 3)) || is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = _0x19CAFA3C87F7C2FF();
		if (iVar1 != 0)
		{
			iVar2 = _0xEE778F8C7E1142E2(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_119(64) || is_control_pressed(0, 86)) || is_control_pressed(0, 71)) || is_control_pressed(0, 72)) || is_control_pressed(0, 76)) || is_control_pressed(0, 73)) || is_control_pressed(0, 68)) || is_control_pressed(0, 75)) || iVar0)
		{
			clear_ped_tasks(player_ped_id());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_118())
			{
				task_look_at_entity(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
				task_look_at_entity(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					open_sequence_task(&iLocal_99);
					task_play_anim(false, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					close_sequence_task(iLocal_99);
					task_perform_sequence(iLocal_91[0], iLocal_99);
					clear_sequence_task(&iLocal_99);
					open_sequence_task(&iLocal_99);
					task_play_anim(false, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					close_sequence_task(iLocal_99);
					task_perform_sequence(iLocal_91[1], iLocal_99);
					clear_sequence_task(&iLocal_99);
					iLocal_347 = get_game_timer();
					iLocal_346++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_347 = get_game_timer();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (func_118())
			{
				if (get_game_timer() - iLocal_347 > 5000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = get_game_timer();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 3:
			if (get_game_timer() - iLocal_347 > 15000)
			{
				if (func_118())
				{
					task_play_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					task_play_anim(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (func_118())
			{
				func_116();
				if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						task_play_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						task_play_anim(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_347 = get_game_timer();
						iLocal_346++;
					}
				}
			}
			else if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
			{
				clear_ped_tasks(iLocal_91[0]);
				clear_ped_tasks(iLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		
		case 5:
			if (func_118())
			{
				func_116();
				func_115();
				if (is_ped_in_vehicle(player_ped_id(), get_vehicle_ped_is_in(iLocal_91[1], 0), 0))
				{
					if (get_game_timer() - iLocal_347 > 15000)
					{
						iVar3 = false;
						iVar4 = _0x19CAFA3C87F7C2FF();
						if (iVar4 != 0)
						{
							iVar5 = _0xEE778F8C7E1142E2(iVar4);
							if (iVar5 == 4)
							{
								iVar3 = true;
							}
						}
						if (!iVar3)
						{
							open_sequence_task(&iLocal_99);
							task_play_anim(false, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							close_sequence_task(iLocal_99);
							task_perform_sequence(player_ped_id(), iLocal_99);
							clear_sequence_task(&iLocal_99);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = get_game_timer();
								iLocal_346++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = get_game_timer();
								iLocal_346++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = get_game_timer() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_116();
			func_115();
			if (get_game_timer() - iLocal_347 > 5000 && func_118())
			{
				if (is_ped_in_vehicle(player_ped_id(), get_vehicle_ped_is_in(iLocal_91[1], 0), 0))
				{
					if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								task_play_anim(player_ped_id(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							task_play_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							task_play_anim(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_116();
			if (func_118())
			{
				if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						apply_force_to_entity(get_vehicle_ped_is_in(iLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = get_game_timer();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 8:
			func_116();
			if (func_118())
			{
				if (!is_ped_in_vehicle(player_ped_id(), get_vehicle_ped_is_in(iLocal_91[1], 0), 0))
				{
					if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							task_play_anim(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							task_play_anim(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if (get_game_timer() - iLocal_347 > 10000)
			{
				if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
				{
					clear_ped_tasks(iLocal_91[0]);
					clear_ped_tasks(iLocal_91[1]);
					iLocal_347 = get_game_timer();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_115()
{
	if (!is_ped_injured(iLocal_91[1]))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(iLocal_91[0], 0), 0))
		{
			if (is_entity_playing_anim(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && get_entity_anim_current_time(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					apply_force_to_entity(get_vehicle_ped_is_in(iLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					play_sound_from_entity(-1, "SUSPENSION_SCRIPT_FORCE", get_vehicle_ped_is_in(iLocal_91[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_116()
{
	_0xEB2D525B57F42B40();
	func_117();
}

void func_117()
{
	Global_17118.f_134 = 1;
}

bool func_118()
{
	int iVar0;
	
	if (!is_ped_injured(iLocal_91[1]))
	{
		if (is_ped_in_any_vehicle(iLocal_91[1], 0))
		{
			iVar0 = get_vehicle_ped_is_in(iLocal_91[1], 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(iLocal_91[0]))
				{
					if (is_ped_in_vehicle(iLocal_91[0], iVar0, 0))
					{
						if (get_ped_in_vehicle_seat(iVar0, 2) == iLocal_91[0] && get_ped_in_vehicle_seat(iVar0, true) == iLocal_91[1])
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_119(int iParam0)
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

bool func_120()
{
	if (func_17() == 2)
	{
		if (func_59())
		{
			if (get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, get_entity_coords(get_player_ped(get_player_index()), 0), 1) < 400f)
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

bool func_121(Vector3 vParam0)
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_25357)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = vdist(get_entity_coords(player_ped_id(), 1), vParam0);
			}
			if (vdist(get_entity_coords(player_ped_id(), 1), vParam0) > fLocal_47 + 200f || get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, get_entity_coords(get_player_ped(get_player_index()), 0), 1) < 400f)
			{
				Global_25357 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_122()
{
	if (!iLocal_108)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_110 && !iLocal_134) && get_game_timer() - iLocal_171 > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_134 = 1;
				}
			}
		}
	}
	if (iLocal_134 && !iLocal_135)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = get_game_timer() + 6000;
			iLocal_135 = 1;
		}
	}
	if (!iLocal_108)
	{
		if ((iLocal_134 && !iLocal_133) && iLocal_149 < get_game_timer())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_135 = 0;
					iLocal_133 = 1;
				}
			}
		}
	}
	else if ((iLocal_108 && !iLocal_132) && iLocal_149 < get_game_timer())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_135 = 0;
				iLocal_132 = 1;
			}
		}
	}
}

void func_123()
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((get_time_since_player_hit_vehicle(player_id()) > 0 && get_time_since_player_hit_vehicle(player_id()) < 100) || has_entity_collided_with_anything(get_vehicle_ped_is_in(player_ped_id(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				wait(false);
				func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_124(vLocal_160, get_game_timer() - iLocal_159);
	}
	if (iLocal_163 > 17)
	{
		iLocal_109 = 1;
	}
}

void func_124(Vector3 vParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (func_2())
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			vVar0 = {get_entity_speed_vector(get_vehicle_ped_is_in(player_ped_id(), 0), 0)};
		}
	}
	vVar3 = {vVar0 - vParam0};
	vVar3 = {func_125(vVar3, iParam3)};
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_entity_dead(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			if (!is_vehicle_on_all_wheels(get_vehicle_ped_is_in(player_ped_id(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = get_game_timer() + 400;
				}
				else if (iLocal_165 < get_game_timer())
				{
					iLocal_163 += 3;
					func_5(0);
					func_62();
					wait(false);
					func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (vVar3.y > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.y < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_125(Vector3 vParam0, int iParam1)
{
	Vector3 vVar0;
	
	vVar0.x = vParam0.x / IntToFloat(iParam3);
	vVar0.y = vParam0.y / IntToFloat(iParam3);
	vVar0.z = vParam0.z / IntToFloat(iParam3);
	return vVar0;
}

void func_126()
{
	float fVar0;
	
	if (!is_ped_injured(iLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!is_entity_dead(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
					{
						remove_vehicle_window(get_vehicle_ped_is_in(player_ped_id(), 0), true);
					}
					settimerb(false);
					iLocal_111++;
				}
				break;
			
			case 1:
				if (timerb() > 3000 || !func_4())
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						clear_ped_tasks(iLocal_91[0]);
						task_play_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			
			case 2:
				if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					fVar0 = get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_1", sLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_105)
						{
							start_particle_fx_non_looped_on_ped_bone("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
							iLocal_105 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_106)
						{
							start_particle_fx_non_looped_on_ped_bone("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
							iLocal_106 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_107)
						{
							start_particle_fx_non_looped_on_ped_bone("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
							iLocal_107 = 1;
						}
					}
					if (get_entity_anim_current_time(iLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			
			case 3:
				if (!is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
				}
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					task_play_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_105 = 0;
					iLocal_111++;
				}
				break;
			
			case 4:
				stop_sound(iLocal_112);
				iLocal_108 = true;
				break;
			}
	}
}

void func_127()
{
	if (is_ped_stopped(player_ped_id()))
	{
		if (!iLocal_168)
		{
			iLocal_166 = get_game_timer();
			iLocal_168 = 1;
		}
		else
		{
			iLocal_167 = get_game_timer();
		}
	}
	else
	{
		iLocal_167 = 0;
		iLocal_168 = 0;
		iLocal_169 = 0;
	}
	if (iLocal_167 - iLocal_166 > 50000 && !iLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_169 = 1;
	}
	if (iLocal_167 - iLocal_166 > 60000 && iLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_62();
			wait(false);
			func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!is_ped_injured(iLocal_91[0]) && !is_ped_injured(iLocal_91[1]))
		{
			task_wander_standard(iLocal_91[0], 1193033728, 0);
			func_64(iLocal_91[0], 120000, 0);
			set_ped_keep_task(iLocal_91[0], true);
			if (is_ped_in_group(iLocal_91[0]))
			{
				remove_ped_from_group(iLocal_91[0]);
			}
			task_follow_to_offset_of_entity(iLocal_91[1], iLocal_91[0], 0f, 1f, 0f, 1f, -1, 0.1f, 1);
			func_64(iLocal_91[1], 120000, 0);
			set_ped_keep_task(iLocal_91[1], true);
			if (is_ped_in_group(iLocal_91[1]))
			{
				remove_ped_from_group(iLocal_91[1]);
			}
		}
		func_60();
	}
}

void func_128()
{
	if (iLocal_54 == 1)
	{
		if (!is_ped_injured(iLocal_91[0]))
		{
			if (!is_entity_at_entity(player_ped_id(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_138() || is_ped_on_foot(player_ped_id()))
			{
				if (!is_ped_in_group(iLocal_91[0]))
				{
					set_ped_as_group_member(iLocal_91[0], func_57());
					set_ped_never_leaves_group(iLocal_91[0], 1);
					set_ped_group_member_passenger_index(iLocal_91[0], false);
				}
			}
			else if (is_ped_in_group(iLocal_91[0]))
			{
				remove_ped_from_group(iLocal_91[0]);
			}
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (is_ped_in_vehicle(iLocal_91[0], get_vehicle_ped_is_in(player_ped_id(), 0), 0))
				{
					if ((!is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3)) && !is_ped_getting_into_a_vehicle(iLocal_91[0]))
					{
						task_play_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_141())
					{
						func_56(0);
						iLocal_120 = 0;
					}
				}
				else if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					stop_anim_playback(iLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (is_ped_in_any_vehicle(iLocal_91[0], 0))
				{
					if (is_entity_playing_anim(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
					{
						stop_anim_playback(iLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_120)
				{
					func_56(1);
					iLocal_120 = 1;
				}
			}
			if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || is_ped_in_any_taxi(player_ped_id()))
			{
				if (does_blip_exist(uLocal_155[0]))
				{
					remove_blip(&(uLocal_155[0]));
				}
				if (!does_blip_exist(iLocal_102))
				{
					iLocal_102 = func_131(vLocal_81, 1);
				}
			}
			else
			{
				if (!does_blip_exist(uLocal_155[0]))
				{
					uLocal_155[0] = func_156(iLocal_91[0], 0, 145);
				}
				if (does_blip_exist(iLocal_102))
				{
					remove_blip(&iLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!is_entity_dead(iLocal_94, 0) && !is_ped_injured(iLocal_91[0])) && !is_ped_injured(iLocal_91[1]))
		{
			if (!is_entity_at_entity(player_ped_id(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !is_entity_at_entity(player_ped_id(), iLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (does_entity_exist(iLocal_91[0]))
				{
					if (!is_ped_injured(iLocal_91[0]))
					{
						if (is_ped_in_group(iLocal_91[0]))
						{
							remove_ped_from_group(iLocal_91[0]);
						}
						clear_ped_tasks(iLocal_91[0]);
						task_smart_flee_ped(iLocal_91[0], player_ped_id(), 250f, -1, 0, 0);
						func_64(iLocal_91[0], 120000, 0);
						set_ped_keep_task(iLocal_91[0], true);
					}
				}
				if (does_entity_exist(iLocal_91[1]))
				{
					if (!is_ped_injured(iLocal_91[1]))
					{
						if (is_ped_in_group(iLocal_91[1]))
						{
							remove_ped_from_group(iLocal_91[1]);
						}
						clear_ped_tasks(iLocal_91[1]);
						task_smart_flee_ped(iLocal_91[1], player_ped_id(), 250f, -1, 0, 0);
						func_64(iLocal_91[1], 120000, 0);
						set_ped_keep_task(iLocal_91[1], true);
					}
				}
				func_60();
			}
			if (is_ped_in_vehicle(player_ped_id(), iLocal_94, 0))
			{
				if (is_ped_in_vehicle(iLocal_91[0], iLocal_94, 0) && is_ped_in_vehicle(iLocal_91[1], iLocal_94, 0))
				{
					if (func_141())
					{
						func_56(0);
						iLocal_120 = 0;
					}
					if (!does_blip_exist(iLocal_102))
					{
						iLocal_102 = func_131(vLocal_81, 1);
					}
				}
				if (does_blip_exist(iLocal_158))
				{
					remove_blip(&iLocal_158);
				}
			}
			else
			{
				if ((func_4() && !iLocal_120) && iLocal_64 > 3)
				{
					func_56(1);
					iLocal_120 = 1;
				}
				if (!does_blip_exist(iLocal_158))
				{
					iLocal_158 = func_139(iLocal_94, 0, 0);
				}
				if (does_blip_exist(iLocal_102))
				{
					remove_blip(&iLocal_102);
				}
			}
		}
	}
}

void func_129()
{
	if (func_17() == 2)
	{
		if (!Global_25356)
		{
			func_130("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

void func_130(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_131(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_132(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_132(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_133()
{
	if (!is_ped_injured(iLocal_91[0]))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 1))
		{
			if (!func_138())
			{
				if (is_ped_in_group(iLocal_91[0]))
				{
					remove_ped_from_group(iLocal_91[0]);
				}
				if (get_script_task_status(iLocal_91[0], 1227113341) != 1 && get_script_task_status(iLocal_91[0], 1227113341) != 0)
				{
					task_go_to_entity(iLocal_91[0], player_ped_id(), -1, 6f, 2f, 2f, 0);
				}
				if (is_ped_in_any_vehicle(iLocal_91[0], 0))
				{
					task_leave_any_vehicle(iLocal_91[0], false, 0);
				}
				if (!iLocal_122)
				{
					if (!func_4())
					{
						func_61(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_122 = 1;
					}
				}
			}
			else
			{
				iLocal_122 = 0;
				if (get_script_task_status(iLocal_91[0], 1227113341) == 1 && get_script_task_status(iLocal_91[0], 1227113341) == 0)
				{
					clear_ped_tasks(iLocal_91[0]);
				}
			}
		}
		else if (!is_ped_in_group(iLocal_91[0]))
		{
			set_ped_as_group_member(iLocal_91[0], func_57());
			set_ped_never_leaves_group(iLocal_91[0], 1);
			set_ped_group_member_passenger_index(iLocal_91[0], false);
		}
	}
}

auto func_134(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

void func_135()
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_25354 = 1;
		}
	}
}

void func_136(int iParam0, auto uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!is_ped_injured(iParam0))
			{
				open_sequence_task(&iLocal_99);
				task_clear_look_at(false);
				task_look_at_entity(false, player_ped_id(), -1, 2060, 4);
				task_turn_ped_to_face_entity(false, player_ped_id(), -1);
				close_sequence_task(iLocal_99);
				task_perform_sequence(iParam0, iLocal_99);
				clear_sequence_task(&iLocal_99);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!is_ped_injured(iParam0))
			{
				if (is_ped_facing_ped(iParam0, player_ped_id(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!is_ped_injured(iParam0))
			{
				if (!is_ped_facing_ped(iParam0, player_ped_id(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_137()
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			settimera(false);
			iLocal_170++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			settimera(false);
			iLocal_170++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			settimera(false);
			iLocal_170++;
		}
	}
}

bool func_138()
{
	int iVar0;
	
	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			if ((((((!is_ped_on_any_bike(player_ped_id()) && !is_ped_in_any_heli(player_ped_id())) && !is_ped_in_any_plane(player_ped_id())) && !is_ped_in_any_boat(player_ped_id())) && !is_ped_in_any_sub(player_ped_id())) && !is_ped_in_any_train(player_ped_id())) && !is_ped_in_model(player_ped_id(), joaat("rhino")))
			{
				if (get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(player_ped_id(), 0)) >= iVar0)
				{
					return true;
				}
			}
		}
	}
	else if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		if (is_vehicle_driveable(set_exclusive_phone_relationships(player_ped_id()), 0))
		{
			if (((((!is_this_model_a_bike(get_entity_model(set_exclusive_phone_relationships(player_ped_id()))) && !is_this_model_a_heli(get_entity_model(set_exclusive_phone_relationships(player_ped_id())))) && !is_this_model_a_plane(get_entity_model(set_exclusive_phone_relationships(player_ped_id())))) && !is_this_model_a_boat(get_entity_model(set_exclusive_phone_relationships(player_ped_id())))) && !is_this_model_a_train(get_entity_model(set_exclusive_phone_relationships(player_ped_id())))) && get_entity_model(set_exclusive_phone_relationships(player_ped_id())) != joaat("rhino"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	return func_140(iParam0, !iParam1, iParam2);
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_132(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_132(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_132(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_141()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

void func_142()
{
	if (!is_ped_injured(iLocal_91[0]))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_115)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
			if (!iLocal_116)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_143()
{
	if (does_blip_exist(iLocal_151))
	{
		remove_blip(&iLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= iLocal_90 - 1)
	{
		if (!does_blip_exist(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_156(iLocal_91[iLocal_63], 0, 145);
			_0x75A16C3DA34F1245(uLocal_155[iLocal_63], false);
		}
		iLocal_63++;
	}
}

void func_144()
{
	start_preloaded_conversation();
	Global_16704 = 0;
}

void func_145(int iParam0)
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

bool func_146(int iParam0)
{
	if (func_149())
	{
		Global_101144 = 1;
		Global_101141 = get_game_timer();
		if (func_43(Global_101143))
		{
			func_147(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_43(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_130(func_148(iParam0), -1);
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
					func_130(func_148(iParam0), -1);
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
					func_130(func_148(iParam0), -1);
					Global_101154.f_29520.f_4++;
					set_bit(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_148(int iParam0)
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

bool func_149()
{
	switch (func_150(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_150(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_154(0))
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
		if (!func_152(iParam2))
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
			func_151(uParam0, iParam4);
		}
	}
	return 2;
}

void func_151(auto uParam0, int iParam1)
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

int func_152(int iParam0)
{
	return func_153(iParam0, Global_35711);
}

bool func_153(int iParam0, int iParam1)
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

bool func_154(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_152(iParam0))
	{
		return false;
	}
	return true;
}

int func_155(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16705 = 1;
	Global_16709 = 0;
	Global_16707 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_157()
{
	if (func_159())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_158())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}
}

bool func_158()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iLocal_91[0], 0))
	{
		if (!is_entity_dead(get_vehicle_ped_is_in(iLocal_91[0], 0), 0))
		{
			iVar0 = get_vehicle_layout_hash(get_vehicle_ped_is_in(iLocal_91[0], 0));
			if (((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_159()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iLocal_91[0], 0))
	{
		if (!is_entity_dead(get_vehicle_ped_is_in(iLocal_91[0], 0), 0))
		{
			iVar0 = get_vehicle_layout_hash(get_vehicle_ped_is_in(iLocal_91[0], 0));
			if ((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184)
			{
				return true;
			}
		}
	}
	return false;
}

void func_160()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_161()
{
	if (!iLocal_61)
	{
		func_163(39, 1);
		func_163(40, 1);
		func_163(41, 1);
		func_163(42, 1);
		func_163(43, 1);
		func_163(44, 1);
		clear_area(vLocal_68, 8f, 1, 0, 0, false);
		add_scenario_blocking_area(vLocal_68 - Vector(8f, 8f, 8f), vLocal_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		set_all_vehicle_generators_active_in_area(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), false, 1);
		set_all_vehicle_generators_active_in_area(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), false, 1);
		set_bit(&uLocal_150, 5);
		if (func_17() == 0)
		{
			func_162(&uLocal_173, 0, player_ped_id(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_162(&uLocal_173, 1, player_ped_id(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_162(&uLocal_173, 2, player_ped_id(), "TREVOR", 0, 1);
		}
		add_relationship_group("rghDrunkPeds", &iLocal_100);
		iLocal_94 = create_vehicle(iLocal_98, vLocal_76, fLocal_79, 1, true);
		add_vehicle_upsidedown_check(iLocal_94);
		set_vehicle_on_ground_properly(iLocal_94);
		set_vehicle_model_is_suppressed(iLocal_98, true);
		set_vehicle_doors_locked(iLocal_94, 3);
		_0x2B6747FAA9DB9D6B(iLocal_94, 1);
		iLocal_80 = get_entity_health(iLocal_94);
		iLocal_91[0] = create_ped(26, iLocal_96, vLocal_68, fLocal_71, 1, true);
		set_blocking_of_non_temporary_events(iLocal_91[0], true);
		set_ped_relationship_group_hash(iLocal_91[0], iLocal_100);
		set_ped_config_flag(iLocal_91[0], 185, true);
		set_ped_flee_attributes(iLocal_91[0], 65536, true);
		set_model_as_no_longer_needed(iLocal_96);
		stop_ped_speaking(iLocal_91[0], 1);
		iLocal_91[1] = create_ped(26, iLocal_97, vLocal_72, fLocal_75, 1, true);
		set_blocking_of_non_temporary_events(iLocal_91[1], true);
		set_ped_relationship_group_hash(iLocal_91[1], iLocal_100);
		set_ped_config_flag(iLocal_91[1], 185, true);
		set_ped_flee_attributes(iLocal_91[1], 65536, true);
		stop_ped_speaking(iLocal_91[1], 1);
		set_relationship_between_groups(5, iLocal_100, 1862763509);
		set_model_as_no_longer_needed(iLocal_97);
		if (iLocal_54 == 1)
		{
			task_play_anim(iLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			task_play_anim(iLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			set_ped_movement_clipset(iLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 0.25f);
			set_ped_movement_clipset(iLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 0.25f);
			set_ped_component_variation(iLocal_91[0], false, true, 2, 0);
			set_ped_component_variation(iLocal_91[0], 3, false, true, 0);
			set_ped_component_variation(iLocal_91[0], 4, false, true, 0);
			set_ped_component_variation(iLocal_91[1], false, true, true, 0);
			set_ped_component_variation(iLocal_91[1], 3, false, false, 0);
			set_ped_component_variation(iLocal_91[1], 4, false, true, 0);
			remove_vehicle_window(iLocal_94, true);
			set_ped_config_flag(iLocal_91[0], 206, true);
			set_ped_config_flag(iLocal_91[0], 299, true);
			set_ped_can_be_targetted(iLocal_91[0], false);
			set_ambient_voice_name(iLocal_91[0], "REDR1Drunk1_AI_Drunk");
			set_ambient_voice_name(iLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_162(&uLocal_173, 3, iLocal_91[0], "REDR1Drunk1", 0, 1);
			func_162(&uLocal_173, 4, iLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			add_scenario_blocking_area(vLocal_81 - Vector(10f, 50f, 30f), vLocal_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			set_vehicle_has_strong_axles(iLocal_94, true);
			set_ped_component_variation(iLocal_91[1], false, false, false, 0);
			set_ped_component_variation(iLocal_91[1], 2, false, 2, 0);
			set_ped_component_variation(iLocal_91[1], 3, true, true, 0);
			set_ped_component_variation(iLocal_91[1], 4, true, 2, 0);
			set_ped_component_variation(iLocal_91[1], 8, false, false, 0);
			set_ped_config_flag(iLocal_91[0], 134, true);
			set_ped_config_flag(iLocal_91[1], 134, true);
			set_ped_config_flag(iLocal_91[0], 26, true);
			set_ped_config_flag(iLocal_91[1], 26, true);
			set_ped_config_flag(iLocal_91[0], 206, true);
			set_ped_config_flag(iLocal_91[1], 206, true);
			set_ped_can_be_targetted(iLocal_91[0], false);
			set_ped_can_be_targetted(iLocal_91[1], false);
			task_start_scenario_in_place(iLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			task_look_at_entity(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
			task_start_scenario_in_place(iLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			set_ped_can_play_ambient_anims(iLocal_91[1], 0);
			task_look_at_entity(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
			set_ped_movement_clipset(iLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0.25f);
			set_ped_movement_clipset(iLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0.25f);
			set_ambient_voice_name(iLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			set_ambient_voice_name(iLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_162(&uLocal_173, 3, iLocal_91[0], "REDR2DrunkM", 0, 1);
			func_162(&uLocal_173, 4, iLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_61 = 1;
	}
}

void func_162(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_163(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_170(iParam0, 2, 1))
		{
			func_169(iParam0, 2, 1);
		}
	}
	else if (func_170(iParam0, 2, 1))
	{
		func_164(iParam0, 2, 1);
	}
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_38() == 0)
		{
			iVar0 = func_167(func_168(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_165(func_168(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_165(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_166(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_166(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_167(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_166(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_168(int iParam0)
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

void func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_38() == 0)
		{
			iVar0 = func_167(func_168(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_165(func_168(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_38() == 0)
		{
			return is_bit_set(func_167(func_168(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_171()
{
	request_model(iLocal_96);
	request_model(iLocal_98);
	request_model(iLocal_97);
	if (iLocal_54 == 1)
	{
		request_ptfx_asset();
		request_anim_dict("random@drunk_driver_1");
		request_anim_set("MOVE_M@DRUNK@VERYDRUNK");
		request_script_audio_bank("Taxi_Vomit", false);
	}
	else if (iLocal_54 == 2)
	{
		request_anim_dict("random@drunk_driver_2");
		request_anim_dict("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		request_anim_dict("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	request_anim_set("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((has_model_loaded(iLocal_96) && has_model_loaded(iLocal_98)) && has_anim_set_loaded("MOVE_M@DRUNK@MODERATEDRUNK")) && has_model_loaded(iLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((has_ptfx_asset_loaded() && has_anim_dict_loaded("random@drunk_driver_1")) && has_anim_set_loaded("MOVE_M@DRUNK@VERYDRUNK")) && request_script_audio_bank("CONSTRUCTION_ACCIDENT_1", false))
			{
				iLocal_56 = 1;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((has_anim_dict_loaded("random@drunk_driver_2") && has_anim_dict_loaded("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && has_anim_dict_loaded("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_56 = 1;
			}
		}
	}
	else
	{
		request_model(iLocal_96);
		request_model(iLocal_98);
		request_model(iLocal_97);
		if (iLocal_54 == 1)
		{
			request_ptfx_asset();
			request_anim_dict("random@drunk_driver_1");
			request_anim_set("MOVE_M@DRUNK@VERYDRUNK");
			request_script_audio_bank("Taxi_Vomit", false);
		}
		else if (iLocal_54 == 2)
		{
			request_anim_dict("random@drunk_driver_2");
			request_anim_dict("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			request_anim_dict("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		request_anim_set("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_172()
{
	if (iLocal_54 == 1)
	{
		vLocal_152 = {-1018.238f, -1350.101f, 4.475f};
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_beachvesp_01");
		iLocal_97 = joaat("a_m_y_beachvesp_02");
		vLocal_68 = {-1016.762f, -1356.459f, 4.5531f};
		fLocal_71 = 247.8087f;
		vLocal_72 = {-1015.572f, -1357.081f, 4.552f};
		fLocal_75 = 66.3861f;
		vLocal_76 = {-1027.762f, -1341.644f, 4.4614f};
		fLocal_79 = 76.9418f;
		iLocal_98 = joaat("baller2");
		vLocal_81 = {160.8892f, -111.4167f, 61.2999f};
		vLocal_84 = {159.2191f, -117.0664f, 61.2999f};
		iLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		vLocal_152 = {1893.856f, 3714.346f, 31.7771f};
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_genstreet_01");
		iLocal_97 = joaat("a_f_y_hipster_03");
		vLocal_68 = {1893.856f, 3714.346f, 31.7771f};
		fLocal_71 = 252.0142f;
		vLocal_72 = {1894.763f, 3714.16f, 31.7605f};
		fLocal_75 = 86.1102f;
		vLocal_76 = {1888.256f, 3717.189f, 31.8394f};
		fLocal_79 = 299.4672f;
		iLocal_98 = joaat("emperor");
		vLocal_81 = {1120.551f, 2647.307f, 36.9963f};
		vLocal_84 = {1121.866f, 2641.707f, 37.1487f};
		iLocal_60 = true;
	}
}

bool func_173()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_184())
		{
			return false;
		}
	}
	if (func_180())
	{
		return true;
	}
	if (func_174(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_174(float fParam0, int iParam1)
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
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_175(iVar32, &Var0);
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

void func_175(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_176(uParam1, "Abigail1", func_178(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 1:
			func_176(uParam1, "Abigail2", func_178(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 2:
			func_176(uParam1, "Barry1", func_178(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 3:
			func_176(uParam1, "Barry2", func_178(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 4:
			func_176(uParam1, "Barry3", func_178(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 5:
			func_176(uParam1, "Barry3A", func_178(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 6:
			func_176(uParam1, "Barry3C", func_178(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 7:
			func_176(uParam1, "Barry4", func_178(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_177(iParam0), 0, 0);
			break;
		
		case 8:
			func_176(uParam1, "Dreyfuss1", func_178(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 9:
			func_176(uParam1, "Epsilon1", func_178(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 10:
			func_176(uParam1, "Epsilon2", func_178(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 11:
			func_176(uParam1, "Epsilon3", func_178(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 12:
			func_176(uParam1, "Epsilon4", func_178(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 13:
			func_176(uParam1, "Epsilon5", func_178(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 14:
			func_176(uParam1, "Epsilon6", func_178(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 15:
			func_176(uParam1, "Epsilon7", func_178(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 16:
			func_176(uParam1, "Epsilon8", func_178(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 17:
			func_176(uParam1, "Extreme1", func_178(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 18:
			func_176(uParam1, "Extreme2", func_178(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 19:
			func_176(uParam1, "Extreme3", func_178(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 20:
			func_176(uParam1, "Extreme4", func_178(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 21:
			func_176(uParam1, "Fanatic1", func_178(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 22:
			func_176(uParam1, "Fanatic2", func_178(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 23:
			func_176(uParam1, "Fanatic3", func_178(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_177(iParam0), 0, 1);
			break;
		
		case 24:
			func_176(uParam1, "Hao1", func_178(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_177(iParam0), 0, 1);
			break;
		
		case 25:
			func_176(uParam1, "Hunting1", func_178(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 26:
			func_176(uParam1, "Hunting2", func_178(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 27:
			func_176(uParam1, "Josh1", func_178(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 28:
			func_176(uParam1, "Josh2", func_178(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 29:
			func_176(uParam1, "Josh3", func_178(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 30:
			func_176(uParam1, "Josh4", func_178(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 31:
			func_176(uParam1, "Maude1", func_178(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 32:
			func_176(uParam1, "Minute1", func_178(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 33:
			func_176(uParam1, "Minute2", func_178(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 34:
			func_176(uParam1, "Minute3", func_178(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 35:
			func_176(uParam1, "MrsPhilips1", func_178(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 36:
			func_176(uParam1, "MrsPhilips2", func_178(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 37:
			func_176(uParam1, "Nigel1", func_178(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 38:
			func_176(uParam1, "Nigel1A", func_178(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 39:
			func_176(uParam1, "Nigel1B", func_178(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 40:
			func_176(uParam1, "Nigel1C", func_178(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 41:
			func_176(uParam1, "Nigel1D", func_178(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 42:
			func_176(uParam1, "Nigel2", func_178(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 43:
			func_176(uParam1, "Nigel3", func_178(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 44:
			func_176(uParam1, "Omega1", func_178(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 45:
			func_176(uParam1, "Omega2", func_178(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 46:
			func_176(uParam1, "Paparazzo1", func_178(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 47:
			func_176(uParam1, "Paparazzo2", func_178(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 48:
			func_176(uParam1, "Paparazzo3", func_178(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 49:
			func_176(uParam1, "Paparazzo3A", func_178(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 50:
			func_176(uParam1, "Paparazzo3B", func_178(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 51:
			func_176(uParam1, "Paparazzo4", func_178(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 52:
			func_176(uParam1, "Rampage1", func_178(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 54:
			func_176(uParam1, "Rampage3", func_178(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 55:
			func_176(uParam1, "Rampage4", func_178(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 56:
			func_176(uParam1, "Rampage5", func_178(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 53:
			func_176(uParam1, "Rampage2", func_178(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 57:
			func_176(uParam1, "TheLastOne", func_178(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 58:
			func_176(uParam1, "Tonya1", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 59:
			func_176(uParam1, "Tonya2", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 60:
			func_176(uParam1, "Tonya3", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 61:
			func_176(uParam1, "Tonya4", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 62:
			func_176(uParam1, "Tonya5", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_176(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_177(int iParam0)
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

struct<2> func_178(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_179(iParam0)};
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

struct<2> func_179(int iParam0)
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

bool func_180()
{
	if (func_183() && !func_184())
	{
		return true;
	}
	if (func_182() && func_181())
	{
		return true;
	}
	return false;
}

int func_181()
{
	return Global_100872 > 0;
}

bool func_182()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_183()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_184()
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

bool func_185()
{
	if (!func_152(5))
	{
		return true;
	}
	if (func_180())
	{
		return true;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_184())
		{
			return false;
		}
	}
	if (func_174(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_186()
{
	if ((Global_101143 == func_52() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_187(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_189(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_188();
}

void func_188()
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

void func_189(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_190(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_231())
		{
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			vVar1 = {get_entity_coords(player_ped_id(), 1)};
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_184())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_33(0))
		{
			return false;
		}
		if (func_180())
		{
			return false;
		}
		if (func_230())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_19(func_17()))
		{
			if (func_174(100f, 1) != -1)
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
		if (!func_229(iParam3))
		{
			return false;
		}
		if (func_19(func_17()))
		{
			if (func_228(func_17()) == 4 || func_228(func_17()) == 5)
			{
				return false;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_227(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_226(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_225())
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
		if (!func_216(4))
		{
			return false;
		}
		if (!func_152(5))
		{
			return false;
		}
		if (func_215(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_215(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_229(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_214(iVar8))
				{
					if (func_192(iVar4))
					{
						if (!func_191(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vVar5) < 210f * 210f)
							{
								if (func_17() != iVar4)
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

int func_191(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

bool func_194(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return false;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_195(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = func_203(iParam0) - func_203(iParam1);
		iVar3 = func_205(iParam0) - func_205(iParam1);
		iVar4 = func_202(iParam0) - func_202(iParam1);
		iVar5 = func_201(iParam0) - func_201(iParam1);
		iVar6 = func_200(iParam0) - func_200(iParam1);
		iVar7 = func_199(iParam0) - func_199(iParam1);
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = func_203(iParam1) - func_203(iParam0);
		iVar3 = func_205(iParam1) - func_205(iParam0);
		iVar4 = func_202(iParam1) - func_202(iParam0);
		iVar5 = func_201(iParam1) - func_201(iParam0);
		iVar6 = func_200(iParam1) - func_200(iParam0);
		iVar7 = func_199(iParam1) - func_199(iParam0);
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
		iVar4 += func_198(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_197(to_float(iVar0 + 1), 0f, 12f));
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

float func_197(Vector3 fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_203(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_204(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_204(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return (iParam0 && 15);
}

bool func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return true;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_207()
{
	auto uVar0;
	
	func_213(&uVar0, get_clock_seconds());
	func_212(&uVar0, get_clock_minutes());
	func_211(&uVar0, get_clock_hours());
	func_210(&uVar0, get_clock_day_of_month());
	func_209(&uVar0, get_clock_month());
	func_208(&uVar0, get_clock_year());
	return uVar0;
}

void func_208(auto uParam0, int iParam1)
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

void func_209(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_211(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_212(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_213(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_214(int iParam0)
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_215(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_216(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_224()) || Global_100201) || Global_25122) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_224()) || Global_25122) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_224()) || Global_100201) || Global_25122) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_224()) || Global_100201) || Global_25122) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_224() || get_player_wanted_level(player_id()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_224()) || Global_25122) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_224()) || func_221()) || Global_100201) || Global_25122) || func_223()) || Global_36839) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_224()) || Global_100201) || Global_25122) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

auto func_217()
{
	return Global_91317.f_1;
}

int func_218()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_219()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_220()
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

int func_221()
{
	return Global_91330.f_297 > 0;
}

int func_222()
{
	return Global_91330.f_296 > 0;
}

auto func_223()
{
	return Global_1315913;
}

int func_224()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_225()
{
	func_16();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_226(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
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

int func_228(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_231())
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

bool func_230()
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

bool func_231()
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

void func_232()
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if ((is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_enter_m", 3) || is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_idle_m", 3)) || is_entity_playing_anim(player_ped_id(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			clear_ped_tasks(player_ped_id());
		}
	}
	if (iLocal_172)
	{
		func_266(0);
		if (Global_25358)
		{
			trigger_music_event("AC_STOP");
		}
		func_265();
		func_6();
		_0xB542DE8C3D1CB210(0);
		remove_scenario_blocking_areas();
		set_all_vehicle_generators_active_in_area(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), true, 1);
		set_all_vehicle_generators_active_in_area(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), true, 1);
		func_145(0);
		if (!is_entity_dead(get_players_last_vehicle(), 0))
		{
			if (!is_entity_a_mission_entity(get_players_last_vehicle()))
			{
				set_entity_as_mission_entity(get_players_last_vehicle(), true, 0);
			}
		}
		if (!is_entity_dead(iLocal_95, 0))
		{
			if (!is_ped_in_vehicle(player_ped_id(), iLocal_95, 0) && func_134(player_ped_id(), iLocal_95, 1) > 50f)
			{
				func_244(iLocal_95, 0, 145);
			}
		}
		if (does_entity_exist(iLocal_91[0]))
		{
			if (!is_ped_injured(iLocal_91[0]))
			{
				set_ped_config_flag(iLocal_91[0], 317, true);
				if (!is_ped_in_any_vehicle(iLocal_91[0], 0))
				{
					reset_ped_last_vehicle(iLocal_91[0]);
				}
				if (is_ped_in_group(iLocal_91[0]))
				{
					remove_ped_from_group(iLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= iLocal_90 - 1)
		{
			if (does_entity_exist(iLocal_91[iLocal_63]))
			{
				if (!is_ped_injured(iLocal_91[iLocal_63]))
				{
					set_ped_config_flag(iLocal_91[iLocal_63], 317, true);
					if (!is_ped_in_any_vehicle(iLocal_91[iLocal_63], 0))
					{
						reset_ped_last_vehicle(iLocal_91[iLocal_63]);
					}
					set_ped_can_be_targetted(iLocal_91[iLocal_63], true);
					set_relationship_between_groups(255, iLocal_100, 1862763509);
					set_blocking_of_non_temporary_events(iLocal_91[iLocal_63], false);
				}
				set_ped_as_no_longer_needed(&(iLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= iLocal_90 - 1)
		{
			if (does_blip_exist(uLocal_155[iLocal_63]))
			{
				remove_blip(&(uLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			set_roads_back_to_original(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (does_cam_exist(iLocal_127))
		{
			if (is_cam_active(iLocal_127))
			{
				set_cam_active(iLocal_127, false);
			}
		}
	}
	func_233(-1);
	terminate_this_thread();
}

void func_233(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_186())
	{
		func_237(iParam0);
		set_mission_name(0, 0);
		Global_101145 = get_game_timer();
		func_236(30000);
		StringCopy(&cVar0, func_235(Global_101143, 1), 64);
		if (func_51(Global_101143) > 0)
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
	func_234(&Global_25179);
	Global_101144 = 0;
	func_189(-1);
}

void func_234(auto uParam0)
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

char* func_235(int iParam0, int iParam1)
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

void func_236(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_237(int iParam0)
{
	func_238(iParam0, 0, func_243(iParam0));
}

void func_238(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_241(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_240(uParam0, &uVar0);
	Var1 = {func_239(&uVar0)};
}

struct<16> func_239(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
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
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_199(*uParam0);
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
	iVar16 = func_205(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_203(*uParam0), 64);
	return cVar0;
}

void func_240(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_241(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_242(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_242(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_243(int iParam0)
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

bool func_244(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = get_entity_script(iParam0, &uVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (get_hash_key(sVar1) == get_hash_key("vehicle_gen_controller"))
			{
				return false;
			}
		}
	}
	func_245(iParam0, iParam2);
	return true;
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_250(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
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
			if (get_entity_model(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
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
		if (get_entity_model(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
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
	func_246(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_246(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_249(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
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
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
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
						clear_bit(uParam1.f_77, 23);
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_248(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_247(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_247(int iParam0)
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

bool func_248(int iParam0, auto uParam1, auto uParam2)
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

void func_249(auto uParam0)
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

bool func_250(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_263(iParam0, 0, 0)) || func_263(iParam0, 1, 0)) || func_263(iParam0, 2, 0)) || func_262(iParam0) != 145) || func_261(iParam0)) || func_260(iParam0)) || func_259(iParam0)) || func_258(iParam0)) || !func_251(get_entity_model(iParam0)))
	{
		if (func_260(iParam0))
		{
		}
		if (func_260(iParam0))
		{
		}
		if (func_263(iParam0, 0, 0))
		{
		}
		if (func_263(iParam0, 1, 0))
		{
		}
		if (func_263(iParam0, 2, 0))
		{
		}
		if (func_262(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_252(iParam0, 0))
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

bool func_252(int iParam0, int iParam1)
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
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_231())
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
		if ((((!func_257() && !func_256()) && !func_255()) && !func_254()) && !func_231())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_255())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_253(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_253(int iParam0)
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

bool func_254()
{
	return false;
}

bool func_255()
{
	return true;
}

bool func_256()
{
	return true;
}

bool func_257()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_258(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_252(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_88972[iVar0]))
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

bool func_260(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_261(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
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

int func_262(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
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

bool func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_264(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
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

bool func_264(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

void func_265()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_163(iVar0, iParam0);
		iVar0++;
	}
}

Vector3 func_267()
{
	Vector3 fVar0;
	
	if (is_player_playing(player_id()))
	{
		fVar0 = get_distance_between_coords(get_entity_coords(player_ped_id(), 1), vLocal_339, 1);
		iLocal_338 = 1;
		if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), vLocal_342, 1) < fVar0)
		{
			fVar0 = get_distance_between_coords(get_entity_coords(player_ped_id(), 1), vLocal_342, 1);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			iLocal_345 = true;
			iLocal_54 = 1;
			return vLocal_339;
		}
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return vLocal_342;
		}
	}
	return 0f, 0f, 0f;
}

